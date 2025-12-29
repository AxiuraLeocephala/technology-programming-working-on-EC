#include <iostream>
#include <cmath>
#include <vector>

using namespace std;

double round_to(double value, int n) {
    double multiplier = pow(10.0, n);
    return round(value * multiplier) / multiplier;
}

void task_1(vector<double>& collection_results) {
    int counter_numbers = 0;
    double integer_part_number;

    for (int i = 0; i < collection_results.size(); i++) {
        integer_part_number = round(collection_results[i]);
        if (fmod(integer_part_number, 2) != 0) {
            counter_numbers++;
        }
    }

    cout << "TASK 1. The number of function values, the whole part of which is odd, is " << counter_numbers << endl;
}

void task_2(vector<double>& collection_results) {
    double sum = 0;
    double m;

    cout << "Input the value of variable m: ";
    cin >> m;

    for (int i = 0; i < collection_results.size(); i++) {
        if (collection_results[i] > m) {
            sum += collection_results[i];
        }
    }
    
    cout << "TASK 2. The sum of the function values that are greater than m=" << m << " is " << sum << endl;
}

void task_3(vector<double>& collection_results) {
    double modd;
    double sum = 0;
    double fractional_part;
    int count_fractional_part = 0;

    for (int i = 0; i < collection_results.size(); i++) {
        fractional_part = modf(collection_results[i], &modd);
        if (fractional_part < 0.5) {
            sum += fractional_part;
            count_fractional_part++;
        }
    };

    cout << "TASK 3. The arithmetic mean of the function values is " << sum / count_fractional_part << endl;
}

void task_4(vector<double>& collection_results) {
    double max_result = collection_results[0];
    int number_integer_part;
    bool flag = false;
    int z;

    cout << "Input the value of varialbe Z: ";
    cin >> z;

    for (int i = 0; i < collection_results.size(); i++) {
        number_integer_part = trunc(collection_results[i]);
        if (number_integer_part % z == 0) {
            if (max_result < collection_results[i]) {
                max_result = collection_results[i];
                flag = true;
            }
        }
    }

    if (flag) {
        cout << "The maximum value among the function values, the " \
            "integer part of which is a multiple of the entered number Z: " << max_result;
    }
    else {
        cout << "Еhere is no maximum value among the function values, " \
            "the integer part of which is a multiple of the entered number z" << endl;
    }
}

void task_5(vector<double>& collection_results) {
    double sum_results = 0;
    int number_results = 0;

    for (int i = 0; i < collection_results.size(); i++) {
        if (collection_results[i] < 0) {
            sum_results += collection_results[i];
            number_results++;
        }
    }

    if (number_results) {
        cout << "The arithmetic mean of the negative values of the function is " << number_results << endl;
    }
    else {
        cout << "There are no negative function values" << endl;
    }
}

void task_6(vector<double>& collection_results) {
    int number_results = 0;
    int number_integer_part;

    for (int i = 0; i < collection_results.size(); i++) {
        number_integer_part = collection_results[i];
        if (number_integer_part % 10 > 3) {
            number_results++;
        }
    }

    cout << "The number of function values having a digit greater than 3 " \
        "in the low-order integer part of the number is " << number_results << endl;
}

void task_7(vector<double>& collection_results) {
    double sum_valid_results = 0;
    int number_valid_results = 0;
    int number_integer_part;

    for (int i = 0; i < collection_results.size(); i++) {
        number_integer_part = trunc(collection_results[i]);
        if (number_integer_part % 2 == 0) {
            sum_valid_results += collection_results[i];
            number_valid_results++;
        }
    }

    if (number_valid_results) {
        cout << "The arithmetic mean of such function values, the " \
            "integer part of which is an even number is " << sum_valid_results / number_valid_results << endl;
    }
    else {
        cout << "There are no function values whose integer part is an even number" << endl;
    }
}

void task_8(vector<double>& collection_results) {
    double sum = 0;
    double m;
    double p;

    cout << "Input the value of varialbe M: ";
    cin >> m;

    cout << "Input the value of variable P: ";
    cin >> p;

    for (int i = 0; i < collection_results.size(); i++) {
        if (collection_results[i] > m && collection_results[i] < p) {
            sum += collection_results[i];
        }
    }

    if (sum) {
        cout << "The sum of the function values belonging to the segment [m, p] is " << endl;
    }
    else {
        cout << "There are no function values belonging to the segment [m, p]" << endl;
    }
}

void task_9(vector<double>& collection_results) {
    double min_result = collection_results[0];
    bool flag = false;
    double number_integer_part;
    double number_decimal_part;

    for (int i = 0; i < collection_results.size(); i++) {
        number_decimal_part = modf(collection_results[i], &number_integer_part);
        if (number_decimal_part < 0.6) {
            if (min_result > collection_results[i]) {
                min_result = collection_results[i];
                flag = true;
            }
        }
    }

    if (flag) {
        cout << "The minimum value among the function values having a " \
            "fractional part less than 0.6 is" << min_result << endl;
    }
    else {
        cout << "There are no minimum value among the function values " \
            "having a fractional part less than 0.6" << endl;
    }
}

void task_10(vector<double>& collection_results) {
    int count_values = 0;
    
    for (int i = 0; i < collection_results.size(); i++) {
        int whole_part = round(collection_results[i]);

        if (collection_results[i] > 0 && whole_part % 2 != 0) {
            count_values++;
        }
    }

    cout << "TASK 10. The number of non-negative function values, the integer part of which is an even number is " << count_values << endl;
}

void task_11(vector<double>& collection_results) {
    double max_value = collection_results[0];

    for (int i = 0; i < collection_results.size(); i++) {
        int whole_parts = round(collection_results[i]);
        if (whole_parts % 2 != 0) {
            if (whole_parts > max_value) {
                max_value = whole_parts;
            }
        }
    }

    cout << "TASK 11. The maximum number among the function values, the integer part of which is an even number, is " << max_value;
}

void task_12(vector<double>& collection_results) {
    double min_result = collection_results[0];
    bool flag = false;

    for (int i = 0; i < collection_results.size(); i++) {
        int number_integer_part = trunc(collection_results[i]);
        if (number_integer_part % 2 == 0) {
            if (collection_results[i] <= min_result) {
                min_result = collection_results[i];
                flag = true;
            }
        }
    }

    if (flag) {
        cout << "The minimum value among the values ​​of a function whose integer part is an even number is " << min_result << endl;
    }
    else {
        cout << "There is no minimum value among the function values ​​whose integer part is an even number" << endl;
    }
}

void task_13(vector<double>& collection_results) {
    double right_limit;
    double left_limit;
    double sum = 0;
    int number_valid_results = 0;

    cout << "Enter the right boundary of the segment: ";
    cin >> right_limit;

    cout << "Enter the right boundary of the segment: ";
    cin >> left_limit;

    for (int i = 0; i < collection_results.size(); i++) {
        if (collection_results[i] > left_limit && collection_results[i] < right_limit) {
            sum += collection_results[i];
            number_valid_results++;
        }
    }

    cout << "The arithmetic mean of the function values ​​belonging to the interval [m, p] is " << sum / number_valid_results << endl;
}

void task_14(vector<double>& collection_results) {
    double max_value = collection_results[0];
    bool flag = false;
    int number_integer_part;

    for (int i = 0; i < collection_results.size(); i++) {
        number_integer_part = trunc(collection_results[i]);
        if (number_integer_part % 10 < 4) {
            if (max_value <= collection_results[i]) {
                max_value = collection_results[i];
                flag = true;
            }
        }
    }

    if (flag) {
        cout << "The maximum value among the values ​​of a function " \
            "that have a digit in the least significant digit of the " \
            "integer part that is less than 4 is " << max_value << endl;
    }
    else {
        cout << "there is no maximum value among the values ​​of the "\
            "function that have a digit in the least significant digit "\
            "of the integer part that is less than 4" << endl;
    }
}

void task_15(vector<double>& collection_results) {
    double sum = 0;
    double number_integer_part;
    double number_fractional_part;

    for (int i = 0; i < collection_results.size(); i++) {
        number_fractional_part = modf(collection_results[i], &number_integer_part);
        if (number_fractional_part < 0.15 || number_fractional_part > 0.9) {
            sum += collection_results[i];
        }
    }

    cout << "The sum of such function values ​​having a fractional part " \
        "less than 0.15 or greater than 0.9 is " << sum << endl;
}

void task_16(vector<double>& collection_results) {
    int z;
    int number_integer_part;
    double sum = 0;

    for (int i = 0; i < collection_results.size(); i++) {
        number_integer_part = trunc(collection_results[i]);
        if (number_integer_part % z == 0) {
            sum += collection_results[i];
        }
    }

    cout << "The sum of such function values, the integer part of which is " \
        "a multiple of the entered number z" << sum << endl;
}

void task_17(vector<double>& collection_results) {
    double sum = 0;
    int number_valid_results = 0;
    int number_integer_part;

    for (int i = 0; i < collection_results.size(); i++) {
        number_integer_part = trunc(collection_results[i]);
        if (number_integer_part % 2 != 0) {
            sum += number_integer_part;
            number_valid_results++;
        }
    }

    if (number_valid_results) {
        cout << "The arithmetic mean of the values ​​of a function whose integer " \
            "part is an odd number is " << sum / number_valid_results << endl;
    }
    else {
        cout << "there are no function values ​​whose integer part is an odd number" << endl;
    }
}

void task_18(vector<double>& collection_results) {
    double sum = 0;
    int number_valid_results = 0;
    int number_integer_part;

    for (int i = 0; i < collection_results.size(); i++) {
        if (collection_results[i] < 0) {
            number_integer_part = trunc(collection_results[i]);
            if (number_integer_part % 2 == 0) {
                sum += number_integer_part;
                number_valid_results++;
            }
        }
    }

    if (number_valid_results) {
        cout << "The number of negative values ​​of a function whose integer " \
            "part is an even number is " << sum / number_valid_results << endl;
    }
    else {
        cout << "there are no negative values ​​of the function whose integer " \
            "part is an even number" << endl;
    }
}

void task_19(vector<double>& collection_results) {
    double sum_valid_results = 0;
    int number_valid_results = 0;
    double m;

    cout << "Input the value of variable M: ";
    cin >> m;

    for (int i = 0; i < collection_results.size(); i++) {
        if (collection_results[i] > m) {
            sum_valid_results += collection_results[i];
            number_valid_results++;
        }
    }

    if (number_valid_results) {
        cout << "The arithmetic mean of the function values greater than " \
            "the entered number M is " << sum_valid_results / number_valid_results << endl;
    }
    else {
        cout << "There are no numbers greater than " << m << endl;
    }
}

void task_20(vector<double>& collection_results) {
    double max_result = 0;
    double result_integer_part;
    bool flag = false;

    for (int i = 0; i < collection_results.size(); i++) {
        if (fmod(collection_results[i], result_integer_part) > 0.4) {
            if (collection_results[i] > 0) {
                if (max_result < collection_results[i]) {
                    max_result = collection_results[i];
                    flag = true;
                }
            }
            else {
                if (max_result < collection_results[i]) {
                    max_result = collection_results[i];
                    flag = true;
                }
            }
        }
    }

    if (flag) {
        cout << "The maximum value among the function values having a " \
            "fractional part greater than 0.4 is " << max_result << endl;
    }
    else {
        cout << "There are no values among the function values having a " \
            "fractional part greater than 0.4" << endl;
    }
}

void task_21(vector<double>& collection_results) {
    double sum_valid_results = 0;
    double number_valid_results = 0;
    int result_integer_part;

    for (int i = 0; i < collection_results.size(); i++) {
        result_integer_part = trunc(collection_results[i]);
        if (result_integer_part % 10 > 3) {
            sum_valid_results += collection_results[i];
            number_valid_results++;
        }
    }

    if (number_valid_results) {
        cout << "The arithmetic mean of the function values having a digit " \
            "greater than 3 in the lower order of the integer part is " << sum_valid_results / number_valid_results << endl;
    }
    else {
        cout << "There are no function values that have a digit greater than 3 " \
            "in the lower order of the integer part" << endl;
    }
}

void task_22(vector<double>& collection_results) {
    double sum_valid_results = 0;
    int number_valid_results = 0;
    double m;

    cout << "Input the valie of variable M: ";
    cin >> m;

    for (int i = 0; i < collection_results[i]; i++) {
        if (collection_results[i] > m) {
            sum_valid_results += collection_results[i];
            number_valid_results++;
        }
    }

    if (number_valid_results) {
        cout << "The arithmetic mean of the function values greater than " \
            "the entered number M is " << sum_valid_results / number_valid_results << endl;
    }
    else {
        cout << "There are no function values greater than the entered number M" << endl;
    }
}

void task_23(vector<double>& collection_results) {
    int number_valid_results = 0;
    int integer_part_result;

    for (int i = 0; i < collection_results.size(); i++) {
        integer_part_result = trunc(collection_results[i]);
        if (integer_part_result % 2 == 0) {
            number_valid_results++;
        }
    }

    cout << "The number of function values, the integer part of which is an " \
        "even number is " << number_valid_results << endl;
}

void task_24(vector<double>& collection_results) {
    double sum_valid_results = 0;
    int integer_part_results;
    double fraction_part_result;

    for (int i = 0; i < collection_results.size(); i++) {
        fraction_part_result = fmod(collection_results[i], integer_part_results);
        if (fraction_part_result > 0.6) {
            sum_valid_results += fraction_part_result;
        }
    }

    if (sum_valid_results) {
        cout << "The sum of the function values having a fractional part " \
            "greater than 0.6 is " << sum_valid_results << endl;
    }
}

void task_25(vector<double>& collection_results) {
    double max_result = 0;
    int integer_part_result;

    for (int i = 0; i < collection_results.size(); i++) {
        integer_part_result = trunc(collection_results[i]);
        if ((integer_part_result % 10) % 2 != 0) {
            if (collection_results[i] > 0) {
                if (max_result < collection_results[i]) {
                    max_result = collection_results[i];
                }
            }
            else {
                if (abs(max_result) > abs(collection_results[i])) {
                    max_result = collection_results[i];
                }
            }
        }
    }

    if (max_result) {
        cout << "The maximum value among the function values having an odd " \
            "digit in the lower order of the integer part is " << max_result << endl << endl;
    }
    else {
        cout << "There are no function values that have an odd digit in the " \
            "lower order of the integer part" << endl << endl;
    }
}

void task_26(vector<double>& collection_results) {
    double sum_valid_results = 0;
    int integer_part_result;
    int number_dozens;

    for (int i = 0; i < collection_results.size(); i++) {
        integer_part_result = trunc(collection_results[i]);
        number_dozens = trunc(integer_part_result % 10);
        if (number_dozens % 10 > integer_part_result % 10) {
            sum_valid_results += collection_results[i];
        }
    }

    if (sum_valid_results) {
        cout << "The sum of the values of a function in which the number of " \
            "tens in the integer part is greater than the number of ones is " << sum_valid_results << endl << endl;
    }
    else {
        cout << "There are no function values in which the number of tens in " \
            "the integer part is greater than the number of ones." << endl << endl;
    }
}

void task_27(vector<double>& collection_results) {
    int number_valid_results = 0;
    int integer_part_result;
    int number_dozens;

    for (int i = 0; i < collection_results.size(); i++) {
        integer_part_result = collection_results[i];
        number_dozens = trunc(integer_part_result % 10);
        if (integer_part_result % 10 % number_dozens == 0) {
            number_valid_results++;
        }
    }

    if (number_valid_results) {
        cout << "The number of function values in which the number of ones is a " \
            "multiple of the number of tens is " << number_valid_results << endl << endl;
    }
    else {
        cout << "There are no function values in which the number of ones is a " \
            "multiple of the number of tens." << endl << endl;
    }
}

int main()
{
    int number_rows = 4;
    double x = 7.9999;
    double step = 5.234;
    int accurency = 4;
    double result;
    vector<double> vector_results = {};

    /*cout << "Input the number of rows in table: ";
    cin >> number_rows;

    cout << "INput the initial argument: ";
    cin >> x;

    cout << "Input the argumant change step: ";
    cin >> step;*/

    for (int i = 0; i < number_rows; i++) {
        result = round_to(pow(x, 3) + 5 * pow(x, 2) + x - 10, accurency);
        cout << result << endl;
        vector_results.push_back(result);
        x += step;
    }
    cout << endl;

    task_1(vector_results);
    task_2(vector_results);
    task_3(vector_results);
    task_4(vector_results);
    task_5(vector_results);
    task_6(vector_results);
    task_7(vector_results);
    task_8(vector_results);
    task_9(vector_results);
    task_10(vector_results);
    task_11(vector_results);
    task_12(vector_results);
    task_13(vector_results);
    task_14(vector_results);
    task_15(vector_results);
    task_16(vector_results);
    task_17(vector_results);
    task_18(vector_results);
    task_19(vector_results);
    task_20(vector_results);
    task_21(vector_results);
    task_22(vector_results);
    task_23(vector_results);
    task_24(vector_results);
    task_25(vector_results);
    task_26(vector_results);
    task_27(vector_results);
}