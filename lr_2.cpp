#include <iostream>
#include <cmath>
#include <vector>

using namespace std;

double round_to(double number, int decimal_place) {
    double coefficient = pow(10.0, decimal_place);
    return round(number * coefficient) / coefficient;
}

void task_1(vector<double>& collection_numbers) {
    int number_valid_numbers = 0;
    double integer_part_number;

    for (int i = 0; i < collection_numbers.size(); i++) {
        integer_part_number = trunc(collection_numbers[i]);
        if (fmod(integer_part_number,2) != 0.0) {
            number_valid_numbers++;
        }
    }

    cout << "TASK 1. The number of function values, the whole part of which is odd, is " << number_valid_numbers << endl << endl;
}

void task_2(vector<double>& collection_numbers) {
    double sum_valid_numbers = 0;
    double m;

    cout << "Input the value of variable m: ";
    cin >> m;

    for (int i = 0; i < collection_numbers.size(); i++) {
        if (collection_numbers[i] > m) {
            sum_valid_numbers += collection_numbers[i];
        }
    }
    
    cout << "TASK 2. The sum of the function values that are greater than m = " << m << " is " << sum_valid_numbers << endl << endl;
}

void task_3(vector<double>& collection_numbers) {
    double sum_fractional_part_valid_numbers = 0;
    int numbers_fractional_part_valid_numbers = 0;
    double integer_part_number;
    double fractional_part_number;

    for (int i = 0; i < collection_numbers.size(); i++) {
        fractional_part_number = modf(collection_numbers[i], &integer_part_number);
        if (fractional_part_number < 0.5) {
            sum_fractional_part_valid_numbers += fractional_part_number;
            numbers_fractional_part_valid_numbers++;
        }
    };

    cout << "TASK 3. The arithmetic mean of the function values is " << sum_fractional_part_valid_numbers / numbers_fractional_part_valid_numbers << endl << endl;
}

void task_4(vector<double>& collection_numbers) {
    double max_number = 0;
    double integer_part_number;
    bool flag = false;
    double z;

    cout << "Input the value of varialbe Z: ";
    cin >> z;

    for (int i = 0; i < collection_numbers.size(); i++) {
        integer_part_number = trunc(collection_numbers[i]);
        if (fmod(integer_part_number,z) == 0) {
            if (collection_numbers[i] >= 0.0) {
                if (max_number < collection_numbers[i]) {
                    max_number = collection_numbers[i];
                    flag = true;
                }
            }
            else {
                if (abs(max_number) > abs(collection_numbers[i])) {
                    max_number = collection_numbers[i];
                    flag = true;
                }
            }
        }
    }

    if (flag) {
        cout << "The maximum value among the function values, the " \
            "integer part of which is a multiple of the entered number Z: " << max_number << endl << endl;
    }
    else {
        cout << "Еhere is no maximum value among the function values, " \
            "the integer part of which is a multiple of the entered number z" << endl << endl;
    }
}

void task_5(vector<double>& collection_numbers) {
    double sum_numbers = 0;
    int number_valid_numbers = 0;

    for (int i = 0; i < collection_numbers.size(); i++) {
        if (collection_numbers[i] < 0.0) {
            sum_numbers += collection_numbers[i];
            number_valid_numbers++;
        }
    }

    if (number_valid_numbers) {
        cout << "The arithmetic mean of the negative values of the function is " << sum_numbers / number_valid_numbers << endl << endl;
    }
    else {
        cout << "There are no negative function values" << endl << endl;
    }
}

void task_6(vector<double>& collection_numbers) {
    int number_valid_numbers = 0;
    double integer_part_number;

    for (int i = 0; i < collection_numbers.size(); i++) {
        integer_part_number = trunc(collection_numbers[i]);
        if (fmod(integer_part_number,10) > 3.0) {
            number_valid_numbers++;
        }
    }

    cout << "The number of function values having a digit greater than 3 " \
        "in the low-order integer part of the number is " << number_valid_numbers << endl << endl;
}

void task_7(vector<double>& collection_numbers) {
    double sum_valid_numbers = 0;
    int number_valid_numbers = 0;
    double integer_part_number;

    for (int i = 0; i < collection_numbers.size(); i++) {
        integer_part_number = trunc(collection_numbers[i]);
        if (fmod(integer_part_number, 2) == 0.0) {
            sum_valid_numbers += collection_numbers[i];
            number_valid_numbers++;
        }
    }

    if (number_valid_numbers) {
        cout << "The arithmetic mean of such function values, the " \
            "integer part of which is an even number is " << sum_valid_numbers / number_valid_numbers << endl << endl;
    }
    else {
        cout << "There are no function values whose integer part is an even number" << endl << endl;
    }
}

void task_8(vector<double>& collection_numbers) {
    double sum_valid_numbers = 0;
    double m;
    double p;
    bool flag = false;

    cout << "Input the value of varialbe M: ";
    cin >> m;

    cout << "Input the value of variable P: ";
    cin >> p;

    for (int i = 0; i < collection_numbers.size(); i++) {
        if (collection_numbers[i] > m && collection_numbers[i] < p) {
            sum_valid_numbers += collection_numbers[i];
            flag = true;
        }
    }

    if (flag) {
        cout << "The sum of the function values belonging to the segment [m, p] is " << endl << endl;
    }
    else {
        cout << "There are no function values belonging to the segment [m, p]" << endl << endl;
    }
}

void task_9(vector<double>& collection_numbers) {
    double min_number = 0.0;
    bool flag = false;
    double integer_part_number;

    for (int i = 0; i < collection_numbers.size(); i++) {
        if (modf(collection_numbers[i], &integer_part_number) < 0.6) {
            if (collection_numbers[i] >= 0.0) {
                if (min_number > collection_numbers[i]) {
                    min_number = collection_numbers[i];
                    flag = true;
                }
            }
            else {
                if (abs(min_number) < abs(collection_numbers[i])) {
                    min_number = collection_numbers[i];
                    flag = true;
                }
            }
        }
    }

    if (flag) {
        cout << "The minimum value among the function values having a " \
            "fractional part less than 0.6 is" << min_number << endl << endl;
    }
    else {
        cout << "There are no minimum value among the function values " \
            "having a fractional part less than 0.6" << endl << endl;
    }
}

void task_10(vector<double>& collection_numbers) {
    int number_valid_numbers = 0;
    double integer_part_number;
    
    for (int i = 0; i < collection_numbers.size(); i++) {
        integer_part_number = trunc(collection_numbers[i]);
        if (collection_numbers[i] > 0 && fmod(integer_part_number,2) == 0) {
            number_valid_numbers++;
        }
    }

    cout << "TASK 10. The number of non-negative function values, the " \
        "integer part of which is an even number is " << number_valid_numbers << endl << endl;
}

void task_11(vector<double>& collection_numbers) {
    double max_number = 0;
    double integer_part_number;

    for (int i = 0; i < collection_numbers.size(); i++) {
        integer_part_number = trunc(collection_numbers[i]);
        if (fmod(integer_part_number,2) != 0) {
            if (integer_part_number > max_number) {
                max_number = integer_part_number;
            }
        }
    }

    cout << "TASK 11. The maximum number among the function values, the " \
        "integer part of which is an even number, is " << integer_part_number << endl << endl;
}

void task_12(vector<double>& collection_numbers) {
    double min_number = 0.0;
    double integer_part_number;
    bool flag = false;

    for (int i = 0; i < collection_numbers.size(); i++) {
        integer_part_number = trunc(collection_numbers[i]);
        if (fmod(integer_part_number,2) == 0) {
            if (collection_numbers[i] > 0.0) {
                if (min_number > collection_numbers[i]) {
                    min_number = collection_numbers[i];
                    flag = true;
                }
            }
            else {
                if (abs(min_number) < abs(collection_numbers[i])) {
                    min_number = collection_numbers[i];
                    flag = true;
                }
            }
        }
    }

    if (flag) {
        cout << "The minimum value among the values ​​of a function whose " \
            "integer part is an even number is " << min_number << endl << endl;
    }
    else {
        cout << "There is no minimum value among the function values ​​" \
            "whose integer part is an even number" << endl << endl;
    }
}

void task_13(vector<double>& collection_numbers) {
    double sum_valid_numbers = 0;
    int number_valid_numbers = 0;
    double right_border_interval;
    double left_border_interval;

    cout << "Enter the left border of the interval: ";
    cin >> left_border_interval;

    cout << "Enter the right border of the interval ";
    cin >> right_border_interval;

    for (int i = 0; i < collection_numbers.size(); i++) {
        if (collection_numbers[i] > left_border_interval && collection_numbers[i] < right_border_interval) {
            sum_valid_numbers += collection_numbers[i];
            number_valid_numbers++;
        }
    }
    
    if (number_valid_numbers) {
        cout << "The arithmetic mean of the function values ​​belonging to the " \
            "interval [" << left_border_interval << ", " << right_border_interval \
            << "] is " << sum_valid_numbers / number_valid_numbers << endl << endl;
    }
    else {
        cout << "There are no function values belonging to the interval " \
            "[" << left_border_interval << ", " << right_border_interval << "]" << endl << endl;
    }
}

void task_14(vector<double>& collection_numbers) {
    double max_number = 0.0;
    bool flag = false;
    double integer_part_number;

    for (int i = 0; i < collection_numbers.size(); i++) {
        integer_part_number = trunc(collection_numbers[i]);
        if (fmod(integer_part_number,10) < 4.0) {
            if (collection_numbers[i] >= 0) {
                if (max_number <= collection_numbers[i]) {
                    max_number = collection_numbers[i];
                    flag = true;
                }
            }
            else {
                if (abs(max_number) > abs(collection_numbers[i])) {
                    max_number = collection_numbers[i];
                    flag = true;
                }
            }
        }
    }

    if (flag) {
        cout << "The maximum value among the values ​​of a function " \
            "that have a digit in the least significant digit of the " \
            "integer part that is less than 4 is " << max_number << endl << endl;
    }
    else {
        cout << "there is no maximum value among the values ​​of the "\
            "function that have a digit in the least significant digit "\
            "of the integer part that is less than 4" << endl << endl;
    }
}

void task_15(vector<double>& collection_numbers) {
    double sum_valid_numbers = 0;
    double integer_part_number;
    double fractional_part_number;

    for (int i = 0; i < collection_numbers.size(); i++) {
        fractional_part_number = modf(collection_numbers[i], &integer_part_number);
        if (fractional_part_number < 0.15 || fractional_part_number > 0.9) {
            sum_valid_numbers += collection_numbers[i];
        }
    }

    cout << "The sum of such function values ​​having a fractional part " \
        "less than 0.15 or greater than 0.9 is " << sum_valid_numbers << endl << endl;
}

void task_16(vector<double>& collection_numbers) {
    double sum_valid_numbers = 0;
    double number_integer_part;
    int z;

    cout << "Enter the value of variable Z: ";
    cin >> z;

    for (int i = 0; i < collection_numbers.size(); i++) {
        number_integer_part = trunc(collection_numbers[i]);
        if (fmod(number_integer_part, z) == 0) {
            sum_valid_numbers += collection_numbers[i];
        }
    }

    cout << "The sum of such function values, the integer part of which is " \
        "a multiple of the entered number z" << sum_valid_numbers << endl << endl;
}

void task_17(vector<double>& collection_numbers) {
    double sum_valid_numbers = 0;
    int number_valid_numbers = 0;
    double integer_part_number;

    for (int i = 0; i < collection_numbers.size(); i++) {
        integer_part_number = trunc(collection_numbers[i]);
        if (fmod(integer_part_number,2) != 0.0) {
            sum_valid_numbers += collection_numbers[i];
            number_valid_numbers++;
        }
    }

    if (number_valid_numbers) {
        cout << "The arithmetic mean of the values ​​of a function whose integer " \
            "part is an odd number is " << sum_valid_numbers / number_valid_numbers << endl << endl;
    }
    else {
        cout << "there are no function values ​​whose integer part is an odd number" << endl << endl;
    }
}

void task_18(vector<double>& collection_numbers) {
    double sum_valid_numbers = 0;
    int number_valid_numbers = 0;
    double integer_part_number;

    for (int i = 0; i < collection_numbers.size(); i++) {
        if (collection_numbers[i] < 0) {
            integer_part_number = trunc(collection_numbers[i]);
            if (fmod(integer_part_number,2) == 0) {
                sum_valid_numbers += integer_part_number;
                number_valid_numbers++;
            }
        }
    }

    if (number_valid_numbers) {
        cout << "The number of negative values ​​of a function whose integer " \
            "part is an even number is " << sum_valid_numbers / number_valid_numbers << endl << endl;
    }
    else {
        cout << "there are no negative values ​​of the function whose integer " \
            "part is an even number" << endl << endl;
    }
}

void task_19(vector<double>& collection_numbers) {
    double sum_valid_numbers = 0;
    int number_valid_numbers = 0;
    double m;

    cout << "Enter the value of variable M: ";
    cin >> m;

    for (int i = 0; i < collection_numbers.size(); i++) {
        if (collection_numbers[i] > m) {
            sum_valid_numbers += collection_numbers[i];
            number_valid_numbers++;
        }
    }

    if (number_valid_numbers) {
        cout << "The arithmetic mean of the function values greater than " \
            "the entered number M is " << sum_valid_numbers / number_valid_numbers << endl << endl;
    }
    else {
        cout << "There are no numbers greater than " << m << endl << endl;
    }
}

void task_20(vector<double>& collection_numbers) {
    double max_number = 0;
    double integer_part_number;
    bool flag = false;

    for (int i = 0; i < collection_numbers.size(); i++) {
        if (modf(collection_numbers[i], &integer_part_number) > 0.4) {
            if (collection_numbers[i] > 0) {
                if (max_number < collection_numbers[i]) {
                    max_number = collection_numbers[i];
                    flag = true;
                }
            }
            else {
                if (max_number < collection_numbers[i]) {
                    max_number = collection_numbers[i];
                    flag = true;
                }
            }
        }
    }

    if (flag) {
        cout << "The maximum value among the function values having a " \
            "fractional part greater than 0.4 is " << max_number << endl << endl;
    }
    else {
        cout << "There are no values among the function values having a " \
            "fractional part greater than 0.4" << endl << endl;
    }
}

void task_21(vector<double>& collection_numbers) {
    double sum_valid_numbers = 0;
    int number_valid_numbers = 0;
    double integer_part_number;

    for (int i = 0; i < collection_numbers.size(); i++) {
        integer_part_number = trunc(collection_numbers[i]);
        if (fmod(integer_part_number,10) > 3.0) {
            sum_valid_numbers += collection_numbers[i];
            number_valid_numbers++;
        }
    }

    if (number_valid_numbers) {
        cout << "The arithmetic mean of the function values having a digit " \
            "greater than 3 in the lower order of the integer part is " << sum_valid_numbers / number_valid_numbers << endl << endl;
    }
    else {
        cout << "There are no function values that have a digit greater than 3 " \
            "in the lower order of the integer part" << endl << endl;
    }
}

void task_22(vector<double>& collection_numbers) {
    double sum_valid_numbers = 0;
    int number_valid_numbers = 0;
    double m;

    cout << "Input the valie of variable M: ";
    cin >> m;

    for (int i = 0; i < collection_numbers[i]; i++) {
        if (collection_numbers[i] > m) {
            sum_valid_numbers += collection_numbers[i];
            number_valid_numbers++;
        }
    }

    if (number_valid_numbers) {
        cout << "The arithmetic mean of the function values greater than " \
            "the entered number M is " << sum_valid_numbers / number_valid_numbers << endl << endl;
    }
    else {
        cout << "There are no function values greater than the entered number M" << endl << endl;
    }
}

void task_23(vector<double>& collection_numbers) {
    int number_valid_numbers = 0;
    double integer_part_number;

    for (int i = 0; i < collection_numbers.size(); i++) {
        integer_part_number = trunc(collection_numbers[i]);
        if (fmod(integer_part_number, 2) == 0) {
            number_valid_numbers++;
        }
    }

    cout << "The number of function values, the integer part of which is an " \
        "even number is " << number_valid_numbers << endl << endl;
}

void task_24(vector<double>& collection_numbers) {
    double sum_valid_numbers = 0;
    double integer_part_numbers;
    double fraction_part_number;

    for (int i = 0; i < collection_numbers.size(); i++) {
        fraction_part_number = modf(collection_numbers[i], &integer_part_numbers);
        if (fraction_part_number > 0.6) {
            sum_valid_numbers += fraction_part_number;
        }
    }

    if (sum_valid_numbers) {
        cout << "The sum of the function values having a fractional part " \
            "greater than 0.6 is " << sum_valid_numbers << endl << endl;
    }
    else {
        cout << "there are no function values with a fractional part " \
            "greater than 0.6" << endl << endl;
    }
}

void task_25(vector<double>& collection_numbers) {
    double max_number = 0;
    double integer_part_number;

    for (int i = 0; i < collection_numbers.size(); i++) {
        integer_part_number = trunc(collection_numbers[i]);
        if (fmod(fmod(integer_part_number, 10), 2) != 0.0) {
            if (collection_numbers[i] > 0) {
                if (max_number < collection_numbers[i]) {
                    max_number = collection_numbers[i];
                }
            }
            else {
                if (abs(max_number) > abs(collection_numbers[i])) {
                    max_number = collection_numbers[i];
                }
            }
        }
    }

    if (max_number) {
        cout << "The maximum value among the function values having an odd " \
            "digit in the lower order of the integer part is " << max_number << endl << endl;
    }
    else {
        cout << "There are no function values that have an odd digit in the " \
            "lower order of the integer part" << endl << endl;
    }
}

void task_26(vector<double>& collection_numbers) {
    double sum_valid_numbers = 0;
    double integer_part_number;
    double number_dozens;

    for (int i = 0; i < collection_numbers.size(); i++) {
        integer_part_number = trunc(collection_numbers[i]);
        number_dozens = trunc(fmod(integer_part_number, 10));
        if (fmod(number_dozens, 10) > fmod(integer_part_number, 10)) {
            sum_valid_numbers += collection_numbers[i];
        }
    }

    if (sum_valid_numbers) {
        cout << "The sum of the values of a function in which the number of " \
            "tens in the integer part is greater than the number of ones is " << sum_valid_numbers << endl << endl;
    }
    else {
        cout << "There are no function values in which the number of tens in " \
            "the integer part is greater than the number of ones." << endl << endl;
    }
}

void task_27(vector<double>& collection_numbers) {
    int number_valid_numbers = 0;
    double integer_part_number;
    double units_integer_part_number;
    double dozens_integer_part_number;

    for (int i = 0; i < collection_numbers.size(); i++) {
        integer_part_number = trunc(collection_numbers[i]);
        units_integer_part_number = fmod(integer_part_number, 10);
        dozens_integer_part_number = trunc(trunc(fmod(integer_part_number, 100)) * 0.1);
        
        if (fmod(units_integer_part_number, dozens_integer_part_number) == 0 || 
            fmod(units_integer_part_number, dozens_integer_part_number) == -0) {
            continue;
        }

        if (fmod(units_integer_part_number, dozens_integer_part_number) == 0) {
            cout << "> " << units_integer_part_number << ' ' << dozens_integer_part_number << endl;
            number_valid_numbers++;
        }
    }

    if (number_valid_numbers) {
        cout << "The number of function values in which the number of ones is a " \
            "multiple of the number of tens is " << number_valid_numbers << endl << endl;
    }
    else {
        cout << "There are no function values in which the number of ones is a " \
            "multiple of the number of tens." << endl << endl;
    }
}

int main()
{
    double x;
    double step;
    int number_rows;
    int accurency = 4;
    double rounded_result;
    vector<double> collection_results = {};

    cout << "Input the number of rows in table: ";
    cin >> number_rows;

    cout << "Input the initial argument: ";
    cin >> x;

    cout << "Input the argumant change step: ";
    cin >> step;

    for (int i = 0; i < number_rows; i++) {
        rounded_result = round_to(pow(x, 3) + 5 * pow(x, 2) + x - 10, accurency);
        cout << "x = " << x << "  value of function = " << rounded_result << endl;
        collection_results.push_back(rounded_result);
        x += step;
    }
    cout << endl;

    //vector<double> collection_results = { 0, 54.3940, 99.2839, -14.3804, -38.3530, 59.2596, -96.9108, 56.8404, -73.3353, 66.0847 };
    task_7(collection_results);
    //collection_results = { 0, 39.8586, 16.2776, -17.6082, 30.3224, -82.9544, 1.3268, -76.8205, -93.9243, 86.6925 };
    task_17(collection_results);
    //vector<double> collection_results = { 75.7779, 25.2832, -4.0749, 15.0214, 16.0161, -33.4151, -72.2420, -74.1095, 64.4232, -52.7916 };
    task_27(collection_results);
}