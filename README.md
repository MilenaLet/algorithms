1. cute patterns
   
Компания планирует заняться выкладыванием во дворах у состоятельных клиентов узора из чёрных и белых плиток, каждая из которых имеет размер 1 × 1 метр. Известно, что дворы у всех состоятельных людей имеют наиболее модную на сегодня форму прямоугольника m × n метров. Однако при составлении финансового плана у директора этой организации появились целые две серьезные проблемы.

Во-первых, каждый новый клиент очевидно захочет, чтобы узор, выложенный у него во дворе, отличался от узоров всех остальных клиентов этой фирмы.

Во-вторых, узор каждого клиента должен быть симпатичным. Как показало исследование, узор является симпатичным, если в нем нигде не встречается квадрата 2 × 2 метра, полностью покрытого плитками одного цвета.
Для составления финансового плана директору необходимо узнать, сколько клиентов он сможет обслужить, прежде чем симпатичные узоры данного размера закончатся. Помогите ему!

Формат входных данных:

В первой строке находится целое положительное число m, а во второй строке — целое положительное число n (1 ≤ m ≤ 10, 1 ≤ n ≤ 30).

Формат выходных данных:

Выведите число различных симпатичных узоров, которое можно выложить во дворе размера m × n. Узоры, получающиеся друг из друга сдвигом, поворотом или отражением, считаются различными. Обратите внимание, что ответ может не поместиться в стандартные целочисленные типы данных.

Пример

in.txt	

2
2

out.txt

14
_______________________________________________________________________________
2. frog path

В одном очень длинном и узком пруду по кувшинкам прыгает лягушка. Кувшинки в пруду расположены в один ряд. Лягушка начинает прыгать с первой кувшинки ряда и хочет закончить на последней. Но в силу вредности характера лягушка согласна прыгать только вперед через одну или через две кувшинки. Например, с кувшинки номер 1 она может прыгнуть лишь на кувшинки номер 3 и номер 4.

На некоторых кувшинках сидят комарики. А именно, на i-й кувшинке сидят ai комаров. Когда лягушка приземляется на кувшинку, она съедает всех комариков, сидящих на ней. Лягушка хочет спланировать свой маршрут так, чтобы съесть как можно больше комаров. Помогите ей: скажите, какие кувшинки она должна посетить на своем пути.

Формат входных данных

Первая строка входа содержит n — число кувшинок в пруду (1 ≤ n ≤ 100 000). Вторая строка содержит n чисел, разделенных одиночными пробелами. i-е число сообщает, сколько комаров сидит на i-й кувшинке (1 ≤ i ≤ n). Все числа целые, неотрицательные и не превосходят 1000.

Формат выходных данных

В первой строке выведите одно число — максимальное число комаров, которые может съесть лягушка. Во второй строке выведите последовательность чисел — номера тех кувшинок, на которых должна побывать лягушка, в возрастающем порядке. Если решений несколько, выведите любое.
Если лягушка не может добраться до последней кувшинки, то выведите одно число −1.

Пример

стандартный ввод	       

6                          

1 100 3 4 1000 0           

 стандартный вывод

 5

1 4 6

......................

стандартный ввод         

2                          

8 9

 стандартный вывод

 -1


