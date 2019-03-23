const int rockOffsets[] = {0, 836, 1634, 2394, 3230, 4028, 4788, 5472, 6232, 6952, 7712, 8552, 9388, 10148, 10908, 11592, 12352, };
const short rockPointOffsets[] = {0, 1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11, 12, 13, 14, 15, 16, };
const unsigned short rockRes[][2] = {{19, 22}, {19, 21}, {20, 19}, {22, 19}, {21, 19}, {20, 19}, {18, 19}, {19, 20}, {18, 20}, {20, 19}, {20, 21}, {22, 19}, {20, 19}, {19, 20}, {19, 18}, {19, 20}, };
const signed short rockPoints[][2] = {{10, 11}, {10, 10}, {10, 10}, {11, 9}, {11, 9}, {9, 9}, {9, 9}, {9, 10}, {9, 10}, {10, 10}, {10, 11}, {11, 10}, {10, 9}, {9, 10}, {9, 9}, {10, 10}, };
const unsigned short rockPixels[] = {
0, 0, 0, 0, 0, 0, 0, 24047, 24014, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 8720, 56815, 56782, 40398, 24014, 7630, 0, 
0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 24014, 56815, 56815, 56815, 56782, 56782, 23981, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 22957, 56782, 
56782, 56815, 56815, 56782, 56782, 55725, 21834, 0, 0, 0, 0, 0, 0, 0, 0, 7630, 40431, 56815, 57872, 56782, 56782, 57872, 56815, 56815, 55725, 54569, 19654, 0, 0, 0, 0, 0, 
0, 0, 24047, 57872, 56815, 56815, 57872, 56815, 56815, 57872, 56815, 55725, 54635, 54635, 38251, 21834, 4360, 0, 0, 0, 5483, 55725, 56782, 56815, 56815, 57872, 56815, 56815, 56815, 56782, 55725, 55692, 
55692, 54635, 54602, 19654, 0, 0, 6573, 39341, 55725, 55725, 56815, 56815, 56815, 56815, 56782, 55725, 55659, 55692, 55692, 54602, 53545, 53512, 34981, 0, 6573, 55725, 56749, 55692, 55692, 55725, 55725, 56782, 
56782, 55725, 55692, 54602, 54602, 53545, 53512, 52422, 52389, 51365, 2213, 21867, 55692, 55725, 55692, 54635, 55659, 55692, 55725, 55725, 55692, 54602, 52422, 52422, 51365, 51365, 51365, 51365, 51365, 18597, 38218, 54635, 
54635, 54635, 53545, 53512, 54602, 54602, 54635, 54602, 53479, 51332, 51365, 51365, 51365, 51365, 51365, 51365, 19621, 20744, 54602, 54602, 53545, 53479, 52422, 52455, 52455, 53512, 53479, 51365, 51332, 51365, 51365, 51365, 
51365, 51365, 51365, 34981, 2213, 52422, 53479, 53512, 53512, 52422, 51365, 51365, 51365, 52389, 51365, 51365, 51365, 51365, 51365, 51365, 51365, 51365, 18597, 0, 34981, 51365, 52389, 52389, 51365, 51365, 51365, 51365, 
51365, 51365, 51365, 51365, 51365, 51365, 51365, 51365, 34981, 4360, 0, 2213, 34981, 51365, 51365, 51365, 51365, 51365, 51365, 51365, 51365, 51365, 51365, 51365, 51365, 51332, 51365, 18597, 0, 0, 0, 0, 
18597, 34981, 51332, 51365, 51365, 51365, 51365, 51365, 51365, 51365, 51365, 51365, 51365, 51365, 2180, 0, 0, 0, 0, 0, 2147, 18597, 51365, 51365, 51365, 51365, 51365, 51365, 51365, 51365, 51365, 51365, 
34981, 0, 0, 0, 0, 0, 0, 0, 2213, 51365, 51365, 51365, 51365, 51365, 51365, 51365, 51365, 51365, 34981, 18597, 0, 0, 0, 0, 0, 0, 0, 0, 18597, 51365, 51365, 51365, 
51332, 51365, 52389, 51365, 18597, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 18597, 51365, 51365, 51365, 51365, 19621, 3270, 0, 0, 0, 0, 0, 0, 0, 0, 0, 
0, 0, 0, 0, 18597, 51365, 51365, 18597, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 2213, 18597, 3237, 0, 0, 0, 0, 0, 0, 
0, 0, 0, 0, 0, 0, 0, 0, 0, 24014, 7630, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 5417, 22924, 22924, 24014, 56815, 56782, 39341, 5450, 
24014, 40365, 24014, 0, 0, 0, 0, 0, 0, 0, 0, 6540, 55692, 55725, 56815, 57872, 56815, 56782, 40398, 56782, 56782, 55725, 21834, 0, 0, 0, 0, 0, 0, 0, 6540, 55692, 
56749, 56815, 56815, 56815, 57872, 56815, 56782, 55725, 55725, 54602, 20744, 0, 0, 0, 0, 6540, 22957, 39341, 55725, 56782, 56782, 56782, 56749, 56815, 55725, 55692, 55692, 55692, 54635, 54602, 20777, 0, 
0, 0, 39308, 55725, 55725, 56782, 56782, 56782, 55725, 55725, 56782, 55725, 55659, 54635, 54635, 54635, 55692, 38218, 4393, 0, 0, 39308, 55725, 55725, 56782, 56782, 55725, 55692, 55692, 55725, 55692, 54602, 
53545, 54602, 54635, 54602, 53545, 36038, 0, 0, 21834, 54635, 54635, 55692, 55725, 55725, 55692, 54635, 54635, 54635, 53545, 53512, 53545, 54569, 53545, 52455, 34981, 0, 0, 20744, 54602, 53545, 53545, 54569, 
54635, 54635, 54602, 54635, 54602, 53545, 52422, 52455, 52455, 52422, 52389, 34981, 0, 4393, 53512, 53545, 52422, 52422, 52455, 53512, 53479, 53512, 53545, 53545, 52455, 51365, 51365, 51365, 51365, 51365, 51365, 18564, 
20744, 53545, 54569, 52422, 51365, 52389, 52389, 51365, 51365, 52422, 52422, 52389, 51365, 51365, 51365, 52422, 51365, 51365, 18597, 36038, 53545, 53545, 53479, 52422, 51365, 51365, 51365, 51365, 51365, 51365, 51365, 51365, 
51365, 51365, 52422, 51365, 51365, 18597, 36005, 53512, 53545, 53512, 52455, 51365, 51365, 51365, 51365, 51365, 51365, 51365, 51365, 51365, 51365, 51365, 51365, 51365, 19621, 2147, 36005, 52389, 52389, 52422, 51365, 51365, 
51365, 51365, 52422, 52422, 51365, 51365, 52389, 51365, 51365, 52389, 34981, 2213, 0, 18564, 51365, 51365, 51365, 51365, 51332, 51365, 51365, 53512, 53545, 52455, 52389, 51365, 51365, 51332, 51365, 2213, 0, 0, 
0, 2213, 34981, 51365, 51365, 51365, 51365, 51365, 53479, 53545, 53512, 52389, 51365, 51365, 51365, 51365, 2180, 0, 0, 0, 0, 2213, 18597, 18597, 34981, 34981, 51365, 51365, 52389, 52389, 51365, 51365, 
51365, 52389, 34981, 3270, 0, 0, 0, 0, 0, 0, 0, 0, 0, 3270, 34948, 51365, 51365, 51365, 51365, 51365, 18597, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 
0, 2213, 34948, 51365, 51365, 51365, 18597, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 18564, 34981, 34981, 2180, 0, 0, 0, 0, 0, 0, 
0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 2213, 2213, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 7630, 40431, 22957, 0, 0, 0, 0, 0, 
0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 8720, 40431, 56815, 56782, 39341, 21867, 5450, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 24014, 22957, 22957, 40398, 
56815, 57872, 56815, 56815, 56782, 56782, 22957, 0, 0, 0, 0, 0, 0, 0, 0, 7630, 56815, 56815, 56815, 56815, 56815, 56782, 56815, 56815, 56782, 56782, 55725, 38218, 2147, 0, 0, 0, 
0, 0, 0, 22957, 56782, 56815, 57872, 56782, 56782, 56782, 56782, 56815, 56782, 56749, 55692, 54602, 37128, 4393, 0, 0, 0, 0, 6573, 40398, 56782, 56782, 57872, 56815, 56782, 55725, 56782, 56782, 
56782, 55725, 55692, 54635, 53545, 53512, 20744, 0, 0, 0, 21867, 55725, 56749, 56782, 56782, 56782, 56782, 55725, 55725, 55725, 55692, 54635, 55692, 54635, 53545, 53512, 37128, 0, 0, 0, 38185, 55692, 
55725, 55725, 55725, 56782, 56782, 56749, 55692, 55692, 55692, 55692, 55692, 55659, 53545, 53512, 52422, 18597, 0, 18597, 53512, 54602, 55692, 55692, 55692, 55725, 55725, 55692, 54635, 54602, 54635, 55692, 55692, 55692, 
54635, 53512, 51365, 34981, 2180, 18597, 52389, 52422, 53512, 53512, 52455, 53512, 54602, 54602, 54602, 54635, 54635, 54635, 54602, 54635, 54602, 53479, 51365, 51365, 18564, 2213, 51365, 51365, 52422, 52389, 51365, 51365, 
52422, 52455, 54602, 54635, 55692, 55692, 54635, 54602, 53512, 52422, 51365, 51365, 18597, 0, 18597, 51365, 52389, 51365, 51365, 51365, 51365, 52455, 54635, 55692, 55692, 55725, 55692, 54569, 52455, 51365, 51365, 34981, 
2180, 0, 2213, 51365, 51365, 51365, 51365, 51365, 51365, 52455, 55659, 55692, 55692, 55692, 54635, 53545, 52422, 51365, 51365, 18597, 0, 0, 2180, 51365, 51365, 51365, 51365, 51365, 51365, 53479, 54635, 55659, 
54635, 54635, 53545, 52455, 52389, 51365, 34981, 3270, 0, 0, 2180, 51365, 51365, 51365, 51365, 51365, 51365, 51365, 52455, 53479, 53512, 53479, 52455, 52389, 51365, 18597, 0, 0, 0, 0, 2213, 51365, 
51365, 51365, 51365, 51365, 51365, 51365, 51365, 51365, 52389, 51365, 52389, 51365, 51365, 18597, 0, 0, 0, 0, 0, 18597, 34981, 51365, 51365, 51365, 51365, 51365, 51365, 36005, 34981, 51365, 51365, 51365, 
51365, 18564, 0, 0, 0, 0, 0, 0, 2147, 18597, 34981, 51365, 51365, 34981, 18564, 0, 3270, 18597, 34981, 34981, 34981, 3237, 0, 0, 0, 0, 0, 0, 0, 0, 0, 3237, 
2213, 0, 0, 0, 0, 0, 0, 0, 2180, 0, 0, 0, 0, 0, 0, 0, 0, 0, 6573, 6573, 6540, 22924, 24014, 22957, 6540, 0, 0, 0, 0, 0, 0, 0, 
0, 0, 0, 0, 0, 0, 0, 6573, 56749, 56815, 56815, 56815, 56815, 56815, 55725, 39308, 20777, 22924, 22957, 22957, 0, 0, 0, 0, 0, 0, 0, 0, 0, 7663, 56815, 57872, 
56815, 56782, 56782, 56815, 56782, 56749, 55725, 55725, 55725, 55692, 6540, 0, 0, 0, 0, 0, 0, 0, 0, 40398, 56815, 56815, 56815, 56782, 56782, 56815, 56815, 56815, 56782, 55725, 55725, 55725, 
39341, 5450, 0, 0, 0, 0, 0, 20777, 22924, 56782, 56815, 56782, 56815, 56815, 55725, 56749, 56815, 56782, 56782, 54602, 54635, 54635, 54602, 53512, 19621, 0, 0, 0, 0, 39308, 56782, 56782, 
56782, 56815, 56782, 56782, 55725, 55725, 56782, 56782, 55725, 53512, 54569, 54569, 53545, 52455, 51365, 18597, 0, 0, 22924, 55725, 56815, 56782, 56782, 56815, 56782, 55725, 55725, 55725, 55725, 55725, 55725, 54602, 
53512, 53545, 53512, 51365, 51365, 34981, 0, 21834, 54635, 55692, 55725, 55725, 56782, 56782, 56782, 55725, 55725, 55692, 55692, 54635, 55692, 55659, 54602, 53512, 52455, 51365, 51365, 34981, 0, 1057, 37128, 54635, 
55692, 55725, 56782, 56782, 56782, 56815, 56815, 56782, 55725, 55692, 55659, 54635, 54602, 53545, 52455, 51365, 51365, 34981, 0, 0, 18564, 53512, 54635, 54602, 54602, 54602, 55692, 56749, 56782, 56782, 56782, 55725, 
55725, 55725, 54635, 53512, 52422, 51365, 51365, 18597, 0, 0, 18597, 52389, 52422, 52389, 52389, 52422, 54569, 55725, 56782, 56782, 55725, 55692, 55692, 54635, 54569, 52422, 51332, 51365, 34981, 0, 0, 0, 
2213, 51365, 51365, 51365, 51365, 51332, 52455, 54635, 55692, 55725, 55692, 54635, 54602, 53545, 52455, 51365, 51365, 51365, 18597, 0, 0, 0, 0, 18597, 34981, 51365, 51365, 51365, 51332, 52455, 53545, 53545, 
52455, 53512, 53512, 52422, 51365, 51365, 51365, 51332, 18564, 0, 0, 0, 0, 0, 2213, 34981, 51365, 51365, 51365, 51365, 51365, 52389, 51365, 51365, 51365, 51365, 51365, 51365, 51365, 34948, 2180, 0, 
0, 0, 0, 0, 0, 2147, 34981, 51365, 51365, 51365, 51365, 51365, 51365, 51365, 51365, 51365, 51365, 34981, 18597, 0, 0, 0, 0, 0, 0, 0, 0, 0, 18564, 51365, 51365, 51365, 
51365, 51365, 51365, 51365, 51365, 18597, 18564, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 2213, 34981, 51365, 51365, 51365, 51365, 51365, 51365, 18597, 0, 0, 0, 0, 0, 
0, 0, 0, 0, 0, 0, 0, 0, 0, 18597, 34981, 34981, 34981, 34981, 34981, 3237, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 
0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 22924, 40398, 24014, 6573, 0, 0, 
0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 7663, 24014, 24014, 6573, 22957, 56782, 56815, 56815, 39341, 22957, 22924, 5450, 0, 0, 0, 0, 0, 0, 0, 6507, 24047, 56815, 
56815, 56815, 56815, 56815, 56815, 56815, 56815, 56782, 55725, 55692, 38218, 20744, 0, 0, 0, 0, 0, 22891, 55692, 56782, 56815, 56815, 56815, 56815, 56815, 56782, 56749, 55725, 55725, 55692, 54635, 53545, 
37095, 5417, 0, 0, 0, 5450, 55692, 55692, 55725, 56782, 56815, 56815, 57872, 56815, 56782, 55725, 55725, 56749, 55692, 54602, 53512, 52422, 19654, 0, 0, 0, 6540, 55692, 55725, 55692, 55725, 56782, 
56782, 56815, 56815, 56749, 55692, 55725, 55725, 55659, 54569, 53512, 52422, 34981, 0, 0, 0, 21867, 54635, 55692, 54635, 54602, 55659, 55725, 56782, 56782, 56782, 55725, 55692, 55659, 53545, 52455, 52422, 51365, 
51365, 2213, 0, 0, 38251, 55692, 55692, 54635, 53512, 52455, 54602, 55692, 55725, 55725, 55725, 55692, 52455, 52389, 51365, 51365, 51365, 51365, 19621, 0, 0, 37128, 54602, 55692, 54635, 54602, 52455, 52422, 
53545, 55692, 55725, 55725, 54635, 51365, 51365, 51365, 51365, 51365, 51365, 18597, 0, 3303, 53512, 53545, 55692, 55725, 55692, 55659, 53512, 53479, 55692, 55725, 55692, 52455, 51365, 51365, 51365, 51365, 51332, 51332, 
34981, 0, 34981, 52422, 53545, 55692, 55725, 56782, 55725, 55692, 54602, 54635, 55692, 54635, 53545, 52389, 51365, 51365, 51365, 51365, 51365, 34981, 2213, 51365, 52389, 53545, 54602, 53545, 55659, 55725, 55692, 54602, 
54602, 54602, 54569, 53545, 52422, 51365, 51365, 51365, 51365, 34981, 3270, 0, 18564, 34981, 52422, 52389, 52389, 52455, 54635, 54635, 54602, 54569, 53512, 52455, 52422, 51365, 51365, 51365, 51365, 34981, 3270, 0, 
0, 0, 2213, 51365, 51365, 51365, 51365, 52422, 52422, 52422, 52422, 52389, 51365, 51365, 51365, 51365, 51365, 18597, 2213, 0, 0, 0, 0, 0, 18597, 51365, 51365, 51365, 51365, 51365, 51365, 51365, 
51365, 51365, 51365, 51365, 51365, 34981, 0, 0, 0, 0, 0, 0, 0, 0, 19654, 19621, 18597, 34981, 51365, 51365, 51365, 51365, 51365, 51365, 51365, 51365, 18597, 0, 0, 0, 0, 0, 
0, 0, 0, 0, 0, 0, 18597, 51365, 51365, 51365, 51365, 51365, 51365, 51365, 18597, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 2180, 18597, 34981, 51365, 
34981, 18597, 3237, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 2213, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 
0, 0, 0, 0, 24014, 24014, 24047, 7597, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 6573, 40431, 57872, 56815, 56815, 40398, 40365, 22957, 22957, 
0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 22924, 56815, 56815, 56815, 56815, 56782, 56749, 55725, 55725, 21834, 3270, 0, 0, 0, 0, 0, 0, 8720, 24014, 40398, 40398, 
56815, 56782, 56782, 56782, 55725, 55725, 55692, 55692, 54635, 37161, 20744, 0, 0, 0, 0, 7663, 40431, 56815, 56782, 56782, 55725, 55725, 56749, 56782, 55725, 55725, 55692, 54602, 52422, 53512, 54635, 20777, 
0, 0, 0, 40398, 56782, 56815, 55725, 55725, 55692, 55725, 56782, 56782, 55725, 55692, 54602, 53512, 51365, 53545, 54602, 52455, 18564, 0, 20777, 55692, 55725, 56782, 55725, 55725, 55692, 55692, 55725, 55725, 
55692, 54602, 53479, 51365, 51365, 52422, 52389, 51365, 34981, 0, 20744, 54635, 55692, 55725, 56782, 55725, 55692, 55692, 55725, 55725, 54569, 52455, 51365, 51365, 51332, 51332, 51365, 51365, 34981, 0, 19621, 52455, 
53512, 54635, 55725, 55725, 55725, 55725, 55692, 53512, 51365, 51332, 52389, 53512, 52389, 51365, 51332, 51365, 18597, 0, 18564, 51332, 51365, 53545, 55659, 55692, 55692, 55692, 54602, 51365, 51365, 51365, 53512, 53545, 
52422, 51365, 51365, 34981, 2213, 0, 18597, 51365, 51365, 52389, 52455, 53479, 53545, 54635, 55692, 52455, 52455, 53545, 54635, 53545, 52389, 51365, 34981, 2180, 0, 0, 2180, 18597, 51365, 51365, 51365, 51332, 
51365, 53512, 54635, 54602, 53512, 53545, 54569, 52422, 51365, 51365, 18597, 0, 0, 0, 0, 18597, 52389, 52389, 52422, 51365, 51365, 52422, 53545, 53545, 52455, 52455, 52455, 51365, 51365, 51365, 34981, 0, 
0, 0, 0, 18597, 51365, 52422, 52422, 51365, 51332, 51365, 52422, 52422, 52389, 51365, 51365, 51365, 51365, 51365, 18597, 0, 0, 0, 0, 18597, 51365, 51365, 51365, 51365, 51365, 51365, 51365, 52389, 
51365, 51365, 51365, 51365, 51365, 34981, 2213, 0, 0, 0, 0, 0, 18597, 34981, 51365, 51365, 51365, 52389, 51365, 51365, 51365, 51365, 51365, 52389, 34981, 2180, 0, 0, 0, 0, 0, 0, 
0, 3270, 18597, 34981, 34981, 51365, 51365, 51365, 51365, 51365, 34981, 18597, 3237, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 18564, 34981, 18597, 18597, 2180, 0, 0, 
0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 4360, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 
0, 0, 24047, 7630, 6573, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 6540, 39341, 22924, 22957, 40431, 57872, 57872, 56815, 40398, 39341, 6573, 0, 0, 0, 0, 0, 0, 
0, 39341, 56782, 56815, 56782, 56815, 57872, 57872, 57872, 56815, 56815, 56782, 24014, 4360, 0, 0, 0, 0, 7630, 56782, 56815, 57872, 56815, 56815, 56815, 56815, 57872, 56782, 56815, 56815, 56749, 38251, 
20744, 0, 0, 0, 22957, 55725, 56782, 57872, 56782, 56782, 56782, 56782, 56815, 56782, 56749, 55725, 55692, 54602, 52422, 2213, 0, 0, 4360, 55692, 55725, 56782, 55725, 55725, 55725, 55692, 55692, 54635, 
54635, 54602, 53512, 52422, 51365, 18597, 0, 22924, 38251, 55692, 55692, 55692, 55692, 55692, 55692, 54635, 54602, 53512, 53479, 52422, 51365, 51365, 51365, 18597, 6573, 55725, 55692, 54602, 54602, 54602, 54635, 54635, 
54635, 53545, 52455, 51365, 51365, 51365, 51332, 51365, 51365, 2213, 22924, 55692, 54602, 53512, 53512, 54602, 54635, 54635, 54602, 52455, 51365, 51365, 51365, 51365, 51365, 51365, 51365, 18597, 38218, 54602, 53512, 52389, 
51365, 52422, 54602, 54602, 54569, 52422, 51332, 52422, 52455, 52389, 51365, 51365, 51365, 34981, 19654, 52422, 52422, 51365, 51365, 51332, 53512, 54602, 53512, 51365, 51365, 53545, 53545, 52422, 51365, 51365, 51365, 34981, 
19621, 51365, 51365, 52422, 52422, 52422, 53512, 53545, 52389, 51365, 52455, 54635, 54602, 52455, 51365, 51365, 51365, 18597, 0, 34981, 51365, 52422, 51365, 52389, 52455, 52422, 51365, 52455, 54569, 54635, 54602, 52422, 
51365, 51365, 51365, 2180, 0, 0, 18597, 34981, 51365, 51365, 51365, 52422, 52422, 52455, 53512, 53545, 52422, 51365, 51365, 51365, 18597, 0, 0, 0, 0, 2213, 34981, 51365, 51365, 52389, 51365, 52389, 
51365, 52422, 52389, 51365, 34981, 18597, 0, 0, 0, 0, 0, 0, 2213, 51365, 51365, 51365, 51365, 51365, 51365, 51365, 51365, 34981, 2213, 0, 0, 0, 0, 0, 0, 0, 0, 18597, 
18597, 51365, 51365, 51365, 51365, 51365, 18597, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 18597, 51365, 51365, 34981, 34981, 2213, 0, 0, 0, 0, 0, 0, 0, 
0, 0, 0, 0, 0, 2213, 18597, 3270, 0, 4360, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 
0, 0, 0, 0, 0, 0, 0, 0, 0, 22924, 39308, 21834, 6573, 40398, 23981, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 6573, 40398, 56815, 56782, 55725, 
56782, 56782, 24014, 0, 0, 0, 0, 0, 0, 0, 0, 0, 7597, 24014, 56782, 57872, 56815, 56815, 56782, 56782, 56815, 55725, 39275, 20744, 0, 0, 0, 0, 0, 0, 7630, 39341, 
56782, 56815, 56815, 56815, 56815, 57872, 56815, 56815, 55725, 55725, 54602, 20744, 0, 0, 0, 0, 39341, 56782, 56782, 56815, 56815, 56782, 56815, 56782, 56782, 56815, 57872, 55725, 55692, 54602, 53512, 21834, 
0, 0, 0, 39275, 55725, 56782, 56782, 56782, 56782, 56815, 56782, 55725, 56782, 56782, 55692, 53545, 52422, 52455, 38218, 0, 0, 0, 39275, 56782, 56782, 56782, 56815, 56815, 56815, 56815, 55725, 55692, 
55659, 53512, 52422, 51365, 52389, 52422, 18597, 0, 0, 38218, 55725, 56815, 56815, 56782, 56782, 56782, 56782, 55692, 54602, 53512, 52389, 51365, 51365, 51365, 51365, 34981, 0, 0, 37128, 54635, 56782, 56782, 
55725, 55725, 55725, 55692, 53545, 52422, 52389, 51365, 51365, 51332, 51365, 51365, 34981, 5450, 5450, 53512, 53545, 54635, 55692, 53512, 52422, 52422, 52422, 52422, 51365, 51365, 51365, 51365, 51365, 51365, 51365, 18597, 
0, 3270, 53512, 52455, 53479, 53545, 52389, 51365, 51365, 51365, 51365, 51365, 51365, 51365, 51365, 51365, 51365, 34981, 0, 0, 4360, 53512, 52455, 52389, 52389, 51365, 51365, 51365, 51365, 51365, 51365, 51365, 
51365, 52389, 51365, 51365, 19621, 0, 0, 0, 36005, 52389, 51365, 51365, 51365, 52389, 52389, 51365, 51365, 51365, 52389, 52455, 52422, 51365, 18597, 0, 0, 0, 0, 18564, 51365, 51365, 51365, 51365, 
51365, 51365, 51365, 51365, 51365, 52422, 53512, 52422, 51365, 2213, 0, 0, 0, 0, 0, 18597, 51365, 51365, 51365, 51365, 51365, 51365, 51365, 51365, 52389, 52389, 51365, 34981, 0, 0, 0, 0, 
0, 0, 0, 18564, 36005, 52389, 51365, 51365, 51365, 52389, 51365, 51365, 51365, 51365, 34981, 0, 0, 0, 0, 0, 0, 0, 0, 18597, 51365, 51365, 51365, 51365, 52389, 51365, 51365, 51365, 
51365, 18597, 0, 0, 0, 0, 0, 0, 0, 0, 0, 2213, 2213, 2213, 3270, 2213, 18597, 51365, 51365, 34981, 3237, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 
0, 0, 0, 5450, 18597, 18597, 2213, 0, 0, 0, 0, 0, 0, 0, 0, 7630, 16383, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 
0, 40398, 40431, 22957, 24014, 41488, 40431, 22957, 22924, 22924, 5483, 0, 0, 0, 0, 0, 0, 0, 6573, 56782, 56815, 56815, 56782, 57872, 56815, 56815, 55725, 56782, 39341, 38251, 20744, 0, 
0, 0, 0, 0, 22957, 56782, 56815, 57872, 56782, 56815, 56815, 56815, 56749, 56782, 56749, 56749, 54635, 20744, 0, 0, 0, 7630, 39341, 56782, 56815, 56815, 56815, 56815, 56815, 56815, 55725, 56782, 
56782, 56782, 56749, 38251, 5450, 0, 0, 22924, 55692, 55692, 56782, 56815, 56815, 56815, 56782, 56782, 56749, 56815, 56815, 56782, 55692, 54602, 19687, 0, 0, 38251, 54635, 55692, 56782, 56815, 56782, 56782, 
56815, 56815, 56815, 56815, 56782, 55692, 53512, 52389, 51365, 2180, 0, 19687, 54635, 55725, 55725, 56749, 55725, 55725, 56782, 56782, 56782, 55725, 55692, 53545, 52422, 51332, 51365, 2213, 0, 21834, 55692, 55725, 
55692, 55692, 54635, 54635, 54635, 55692, 55725, 55692, 53545, 52422, 51365, 51365, 34981, 0, 21867, 55692, 55692, 55692, 55692, 54635, 54602, 54602, 54569, 54569, 54635, 54602, 52422, 51365, 51365, 51365, 18597, 0, 
20777, 54569, 54602, 54635, 54635, 54635, 54635, 54635, 54635, 54602, 53512, 52422, 51365, 51365, 51365, 51365, 2213, 0, 3270, 36071, 54569, 54635, 54635, 55692, 55692, 55692, 55692, 54602, 52455, 51365, 51365, 51365, 
51365, 51365, 2213, 0, 0, 36005, 53479, 54602, 55692, 55692, 55692, 54635, 54635, 53545, 52422, 51365, 51365, 51365, 51365, 51365, 18597, 0, 0, 18597, 51365, 53479, 54602, 54635, 54602, 54569, 53545, 52422, 
51365, 51365, 51365, 51365, 51365, 51365, 34981, 0, 0, 0, 34981, 51365, 52455, 53512, 53512, 52455, 52422, 51365, 51365, 51365, 51365, 51365, 51365, 51365, 51365, 3270, 0, 0, 18597, 51365, 51365, 51365, 
51365, 51365, 51365, 51365, 51365, 51365, 51365, 51365, 51365, 51365, 51365, 2213, 0, 0, 0, 18597, 34981, 51365, 51365, 51365, 51365, 51365, 51365, 51365, 51365, 51365, 51365, 51365, 51365, 18564, 0, 0, 
0, 0, 4360, 36005, 34981, 51365, 52389, 51365, 51365, 51365, 52389, 34981, 34981, 18597, 2180, 2213, 0, 0, 0, 0, 0, 0, 0, 19621, 52389, 34981, 18597, 18597, 19621, 2213, 0, 0, 
0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 3270, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 7630, 24014, 24014, 
39308, 5483, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 22957, 24014, 24047, 24047, 56782, 56782, 56815, 56782, 39341, 6540, 0, 0, 0, 0, 0, 0, 0, 0, 0, 
6540, 55725, 56782, 56815, 56815, 56782, 56815, 56782, 56782, 56749, 39308, 5450, 0, 0, 0, 0, 0, 24014, 25104, 25104, 39341, 56782, 56815, 56815, 56782, 56749, 56782, 56749, 56782, 56782, 55725, 38218, 
1090, 0, 0, 0, 5450, 39341, 56815, 57872, 56815, 56782, 56782, 56815, 56782, 56749, 55725, 55725, 56749, 56782, 55725, 53512, 18564, 0, 0, 0, 0, 39308, 55725, 56782, 56782, 55725, 56782, 56782, 
56782, 56782, 55692, 56749, 56782, 56815, 56782, 53545, 18564, 0, 0, 0, 0, 38251, 55692, 55692, 56749, 56782, 56782, 56782, 56782, 56782, 56782, 56782, 56782, 56782, 56782, 54635, 34981, 0, 0, 0, 
3270, 53545, 54602, 55692, 55725, 56782, 56815, 56815, 56815, 56815, 56815, 57872, 56815, 56815, 56782, 54602, 19621, 0, 0, 0, 0, 37128, 53512, 53545, 54635, 55725, 56782, 56815, 56815, 56782, 56815, 56815, 
56815, 55725, 55659, 53545, 36005, 2180, 0, 0, 0, 36038, 52422, 52422, 53512, 55692, 55725, 55725, 56749, 55725, 55725, 55692, 55692, 54635, 53512, 52422, 51365, 34981, 2213, 0, 0, 2180, 51365, 52422, 
53479, 54635, 55659, 55692, 54635, 54602, 54569, 53545, 53512, 53512, 52422, 51365, 51365, 51365, 34981, 0, 0, 0, 34981, 51332, 53479, 54602, 53545, 53512, 52455, 52422, 52422, 51365, 51365, 52389, 52389, 51365, 
51365, 51365, 51365, 19621, 0, 3237, 51365, 52389, 53512, 53545, 52422, 52389, 51365, 51365, 52389, 51365, 51365, 51365, 51365, 51365, 51365, 51365, 51365, 34981, 0, 0, 34948, 52389, 52455, 52455, 52389, 51365, 
51365, 51365, 52389, 52389, 51365, 51365, 51365, 51365, 51365, 51365, 51365, 18597, 0, 0, 2213, 34981, 52389, 51365, 51365, 51332, 51332, 52422, 52422, 52389, 51365, 51365, 51365, 51365, 51365, 34981, 18597, 0, 
0, 0, 0, 2213, 34981, 51365, 51365, 51365, 51365, 52389, 52422, 51365, 51365, 51365, 51365, 51365, 51365, 2213, 0, 0, 0, 0, 0, 0, 2213, 34981, 51365, 51365, 51365, 51365, 51365, 51365, 
51365, 51365, 34981, 51365, 36005, 0, 0, 0, 0, 0, 0, 0, 0, 0, 18597, 51365, 51365, 52389, 51365, 51365, 51365, 18597, 0, 2213, 3270, 0, 0, 0, 0, 0, 0, 0, 
0, 0, 0, 3237, 18597, 18597, 34981, 18597, 18597, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 7630, 0, 0, 0, 0, 0, 0, 0, 
0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 25104, 40398, 40398, 24014, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 24047, 56815, 
56815, 56815, 56782, 40398, 22957, 6540, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 24047, 56782, 56782, 56815, 56815, 56815, 56782, 56782, 39341, 3303, 0, 0, 0, 0, 0, 
0, 0, 22957, 40431, 40431, 57872, 56782, 56782, 56815, 56815, 56782, 56782, 56782, 55692, 20777, 0, 0, 0, 0, 0, 0, 5450, 39341, 56782, 56782, 56815, 56815, 56815, 56782, 56782, 55725, 55725, 
55725, 55725, 38251, 7630, 0, 0, 0, 0, 0, 0, 22957, 56782, 56782, 56815, 56782, 56782, 55725, 55692, 54635, 55692, 56782, 56815, 56815, 40431, 8720, 0, 0, 0, 0, 0, 39308, 56782, 
56782, 56749, 54602, 55692, 55725, 55725, 55692, 55725, 55725, 56749, 56749, 56782, 39341, 5450, 0, 0, 0, 24014, 56782, 56815, 56782, 54602, 51332, 52455, 54569, 55692, 55725, 56782, 56815, 56815, 56815, 56782, 
55692, 37128, 2180, 0, 6540, 55692, 55725, 55725, 55725, 53545, 52389, 51332, 53512, 55692, 55725, 56782, 56815, 56815, 56782, 55692, 53545, 52422, 34948, 4360, 20744, 54602, 54602, 54602, 54569, 54602, 54635, 54602, 
55725, 56782, 56782, 56782, 56782, 56782, 55692, 54602, 52455, 51365, 18597, 0, 36071, 53512, 53512, 52455, 52455, 53545, 54602, 55692, 56749, 56782, 56782, 55725, 54635, 54602, 53479, 52422, 51365, 34981, 0, 0, 
19621, 52389, 52389, 51365, 51365, 51365, 52389, 53545, 54635, 54635, 54635, 54635, 53545, 52422, 51365, 51365, 51365, 34981, 0, 0, 0, 18597, 51365, 51365, 51332, 51332, 51332, 52389, 53512, 53545, 53512, 52455, 
52422, 51365, 51365, 51365, 51365, 51365, 18597, 0, 0, 0, 34981, 51365, 51365, 51365, 51365, 51365, 52389, 52389, 52389, 51365, 51365, 52389, 51365, 51365, 51365, 51365, 18597, 0, 0, 0, 34981, 51365, 
51365, 51365, 51332, 51365, 51365, 51365, 51365, 51365, 51365, 52389, 51365, 51365, 51365, 51365, 18597, 0, 0, 5450, 18597, 51332, 51365, 52389, 51365, 51365, 51365, 51365, 51365, 51365, 51332, 51365, 51365, 51332, 
51365, 51365, 3270, 0, 0, 0, 0, 2180, 18597, 34981, 51365, 51365, 52389, 51365, 51365, 51365, 51365, 51365, 51365, 51365, 51365, 18597, 0, 0, 0, 0, 0, 0, 0, 0, 18597, 34981, 
34981, 51365, 51365, 51365, 51365, 51365, 34981, 18597, 3237, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 3270, 18597, 18597, 34981, 18597, 3270, 0, 0, 0, 0, 0, 0, 
0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 8720, 5450, 0, 0, 0, 0, 
0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 40431, 40431, 40431, 40398, 40398, 40398, 24014, 0, 0, 0, 0, 0, 0, 0, 0, 0, 
0, 0, 0, 0, 0, 7630, 56815, 56815, 56815, 56815, 56815, 56782, 56749, 22957, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 24014, 56782, 56782, 56782, 56815, 
56782, 55725, 55725, 55725, 40398, 41488, 24047, 7630, 0, 0, 0, 0, 0, 0, 0, 0, 6540, 40398, 55725, 55725, 56782, 56815, 56782, 55692, 55692, 56749, 56815, 56815, 56782, 56749, 22957, 0, 
0, 0, 0, 0, 0, 24014, 40431, 56815, 55725, 55692, 56782, 56815, 55725, 54635, 54635, 55725, 55725, 56782, 56782, 56782, 54635, 19687, 0, 0, 0, 0, 22924, 56749, 56782, 56815, 56782, 55725, 
56815, 56782, 55725, 55692, 54635, 55725, 56782, 56815, 56815, 55725, 54569, 36038, 0, 0, 0, 5450, 54635, 55692, 55725, 55725, 56782, 56782, 56782, 55725, 54635, 54635, 55725, 56782, 56815, 56782, 56782, 54635, 
53512, 36005, 0, 0, 0, 21834, 54602, 54602, 55725, 56782, 55725, 56782, 55725, 53512, 52422, 52455, 54602, 55692, 56782, 56782, 55725, 54569, 52422, 51365, 2213, 0, 0, 21834, 54602, 53512, 53545, 55725, 
55725, 55725, 55659, 52422, 51332, 52455, 54635, 55725, 55725, 55692, 54602, 52455, 51332, 51365, 18597, 0, 0, 37161, 54602, 53545, 53512, 55692, 55725, 55725, 54635, 52455, 52422, 54602, 55692, 55725, 55692, 54635, 
53512, 51365, 51365, 51365, 34981, 0, 2180, 52422, 54635, 55725, 55692, 55692, 54635, 53545, 53479, 52455, 52455, 53545, 54602, 54602, 53545, 53512, 52389, 51365, 51365, 51365, 34981, 0, 0, 18564, 54602, 55692, 
54635, 52455, 52422, 52422, 51365, 52389, 52389, 52389, 52422, 52422, 52389, 51365, 51365, 51365, 51365, 51365, 34981, 0, 0, 0, 36038, 53512, 52455, 51365, 51365, 51365, 51365, 51365, 51365, 51365, 51365, 51365, 
51365, 51365, 51365, 51365, 51365, 51365, 18597, 0, 0, 4360, 34981, 52389, 51365, 51365, 51365, 51365, 51365, 51332, 51365, 51365, 51365, 51365, 51365, 51365, 51365, 51365, 51365, 18597, 0, 0, 0, 0, 
0, 2213, 34981, 51365, 51365, 51365, 51365, 51332, 51332, 51332, 51365, 51365, 51365, 51365, 51365, 34981, 2213, 0, 0, 0, 0, 0, 0, 0, 18597, 51365, 51365, 51365, 51365, 51365, 51365, 51365, 
51365, 51365, 51365, 51365, 51365, 19621, 0, 0, 0, 0, 0, 0, 0, 0, 2180, 51365, 51332, 51365, 51365, 51365, 34981, 34981, 18597, 51365, 34981, 18597, 18597, 0, 0, 0, 0, 0, 
0, 0, 0, 0, 0, 2213, 2180, 18564, 18597, 2180, 0, 0, 0, 2180, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 7663, 24014, 24014, 24014, 
3270, 0, 8720, 25104, 24014, 24014, 0, 0, 0, 0, 0, 0, 0, 7630, 24047, 40431, 56815, 56815, 56815, 56782, 40398, 40431, 57872, 56815, 56782, 56782, 22924, 0, 0, 0, 0, 0, 
0, 40398, 56815, 56815, 56815, 56815, 56815, 56782, 55725, 56782, 56782, 56749, 56782, 56782, 54635, 20777, 0, 0, 0, 0, 5483, 55725, 56782, 56782, 56782, 56782, 56815, 56782, 55725, 55725, 55725, 56815, 
56815, 56782, 54635, 37095, 0, 0, 0, 0, 4360, 55659, 56782, 55725, 55725, 56749, 56782, 56815, 55725, 55725, 56782, 56815, 56815, 56782, 55659, 37095, 0, 0, 0, 0, 21801, 55692, 56782, 55725, 
55692, 55692, 56782, 56782, 56749, 55692, 55692, 55725, 56782, 55725, 54635, 52455, 2147, 0, 0, 0, 22924, 55725, 56782, 56782, 55725, 55692, 56782, 56782, 55725, 53545, 53512, 54635, 55725, 55725, 54602, 52422, 
18597, 0, 0, 5483, 39308, 55725, 55725, 56782, 56782, 56782, 56782, 56782, 55692, 53479, 52455, 55659, 55725, 55692, 53545, 52422, 34981, 3270, 0, 38218, 54635, 54602, 54635, 55692, 55725, 55725, 55725, 55725, 
55692, 53512, 53512, 54635, 54635, 53545, 52422, 51365, 51365, 18564, 4360, 54602, 54602, 52455, 52422, 53545, 54635, 55692, 55692, 55725, 55692, 53512, 52455, 53512, 52455, 52422, 51365, 51365, 34981, 3270, 2213, 53512, 
53545, 53479, 51365, 51365, 52389, 53512, 55659, 55692, 53545, 52422, 52389, 51365, 51365, 51365, 51365, 51365, 18597, 0, 0, 37161, 53545, 53512, 52455, 52422, 52422, 52422, 52422, 53479, 52422, 51365, 51365, 51365, 
51365, 51365, 51365, 51365, 2213, 0, 2180, 52455, 53545, 54569, 54602, 54635, 55659, 53545, 52389, 51365, 51365, 51365, 51365, 51365, 51365, 51365, 51365, 34981, 0, 0, 2180, 51365, 52422, 53545, 54635, 55692, 
54635, 52455, 51365, 51365, 51365, 51365, 51365, 51365, 51332, 51365, 51365, 18597, 0, 0, 18597, 34981, 51365, 52389, 52455, 53512, 52455, 52389, 51365, 52389, 51365, 51365, 51365, 51365, 18597, 34981, 34981, 3237, 
0, 0, 0, 0, 2213, 18597, 34981, 51365, 51365, 51365, 51365, 51365, 51365, 51365, 51365, 18597, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 2180, 18597, 51365, 51365, 51365, 51365, 
51365, 51365, 18597, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 18597, 51365, 51365, 51365, 34981, 2213, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 
0, 0, 0, 0, 0, 18597, 34981, 18597, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 7663, 24014, 24014, 6540, 0, 
0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 7630, 41488, 56815, 56782, 56815, 39308, 5450, 0, 0, 0, 0, 0, 0, 0, 0, 8720, 24014, 40431, 24047, 40398, 
56815, 56782, 56815, 56815, 56782, 38251, 5450, 0, 0, 0, 0, 0, 0, 7663, 40431, 56815, 56815, 56815, 56815, 56782, 56782, 56815, 56815, 56815, 55725, 38251, 4360, 0, 0, 0, 0, 24014, 
56782, 56815, 56815, 56815, 56815, 56815, 56782, 56782, 56782, 56782, 56782, 56782, 55692, 21834, 0, 0, 0, 0, 39341, 56749, 56782, 56782, 56782, 56782, 56782, 56815, 56782, 56782, 55725, 55692, 56782, 55725, 
54569, 19654, 0, 0, 3303, 54602, 55692, 56782, 56782, 55725, 55725, 56749, 56815, 56782, 56782, 55725, 55692, 55725, 55659, 53512, 36005, 0, 0, 18597, 53479, 54602, 55725, 56815, 56815, 56782, 56782, 56782, 
56749, 55725, 56782, 55692, 54602, 53512, 52422, 34981, 0, 0, 18597, 52422, 54602, 55692, 55725, 56782, 56782, 56782, 56749, 55725, 55725, 56782, 55692, 53479, 52389, 51365, 34981, 0, 0, 18597, 52389, 54602, 
54635, 54635, 54602, 54602, 54602, 54635, 55692, 55692, 55692, 53545, 52389, 51365, 51365, 34981, 0, 0, 18564, 52422, 54602, 53545, 52389, 51332, 51365, 51365, 51365, 53545, 54602, 52455, 51365, 51365, 51365, 51365, 
51365, 2213, 0, 0, 36071, 54602, 54602, 53512, 52422, 51365, 51365, 52422, 53545, 53512, 51365, 51365, 51365, 51365, 51332, 51365, 34981, 4360, 0, 37128, 54569, 53545, 53545, 53512, 52422, 53512, 54635, 55692, 
53512, 51365, 51365, 51365, 51365, 51365, 34981, 19621, 0, 2180, 52389, 53512, 53545, 53545, 54569, 54602, 55692, 55725, 55692, 53512, 51365, 52389, 51365, 34981, 2180, 0, 0, 0, 0, 34948, 52422, 53545, 
54569, 54602, 54602, 54635, 54602, 53545, 52422, 51365, 51365, 51365, 18597, 0, 0, 0, 0, 0, 18597, 51365, 52422, 52422, 52422, 52422, 52455, 52422, 52389, 51365, 51365, 51365, 51365, 2180, 0, 0, 
0, 0, 0, 0, 18597, 51365, 51365, 51365, 51365, 52389, 51365, 51365, 51365, 51365, 51365, 34981, 0, 0, 0, 0, 0, 0, 0, 18597, 51365, 51365, 51332, 51365, 52389, 51365, 51365, 51365, 
51365, 51332, 18564, 0, 0, 0, 0, 0, 0, 0, 0, 2180, 2180, 2147, 3237, 18597, 34981, 34981, 34981, 51332, 18597, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 
0, 0, 0, 0, 0, 0, 2180, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 22957, 22957, 5450, 7630, 7630, 0, 0, 0, 0, 0, 0, 0, 
0, 0, 0, 0, 0, 0, 24047, 56782, 56782, 56782, 56815, 40398, 21867, 22924, 0, 0, 0, 0, 0, 0, 0, 0, 0, 24047, 40431, 56815, 57872, 56815, 56815, 56815, 56782, 55725, 
55725, 38251, 4360, 0, 0, 0, 0, 0, 7630, 40398, 56815, 56815, 56815, 57872, 57872, 56815, 56782, 56782, 56782, 56815, 55692, 37128, 3303, 0, 0, 0, 7597, 40365, 56815, 56815, 56815, 56815, 
56815, 57872, 56815, 56782, 56782, 56782, 56749, 55692, 53545, 19687, 0, 0, 0, 22924, 55692, 55725, 56782, 56815, 56815, 56782, 56782, 55725, 55725, 55725, 55725, 55692, 55692, 53545, 36038, 3270, 0, 0, 
38218, 54635, 54635, 55725, 56782, 56782, 56782, 53512, 51332, 52455, 55659, 55692, 55692, 54602, 53545, 52389, 34981, 18597, 0, 36038, 53512, 53545, 54635, 55692, 55725, 55725, 53545, 51332, 52422, 54635, 55692, 55692, 
54602, 53512, 51365, 51365, 34981, 3303, 34948, 52389, 53479, 54602, 54635, 55692, 55725, 54602, 52422, 54602, 55725, 56782, 55692, 54602, 53512, 51365, 51365, 19621, 0, 18597, 51365, 51365, 53512, 54635, 55692, 55692, 
54635, 54635, 55692, 56815, 56782, 54635, 54569, 52422, 51365, 18597, 0, 0, 18597, 51365, 51365, 53512, 54635, 54635, 54635, 55692, 55692, 55725, 56749, 55692, 54602, 52455, 51365, 34981, 0, 0, 0, 2180, 
51365, 51365, 52455, 54602, 54602, 54635, 55692, 55692, 55692, 54635, 53545, 52422, 51365, 51365, 34981, 0, 0, 0, 3237, 51365, 51365, 52422, 53479, 53545, 54635, 54635, 54602, 53545, 52455, 52422, 51365, 51365, 
51365, 51365, 2213, 0, 0, 0, 34981, 51365, 51365, 51365, 52422, 53512, 53512, 52422, 52389, 51365, 51365, 51365, 51365, 51365, 51365, 18564, 0, 0, 0, 2213, 34981, 51365, 51332, 51365, 52389, 52389, 
51365, 51332, 51365, 52389, 51365, 51365, 51365, 34981, 2180, 0, 0, 0, 0, 2180, 34981, 34981, 51365, 51365, 51365, 51365, 51332, 51365, 51365, 51365, 51365, 18597, 3270, 0, 0, 0, 0, 0, 
0, 2180, 0, 18597, 51365, 34981, 2180, 2180, 34981, 34981, 34981, 18597, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 2213, 18597, 0, 0, 0, 0, 0, 0, 0, 0, 
0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 8720, 0, 8753, 41488, 24014, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 24014, 40398, 
22957, 41488, 56815, 56815, 7630, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 7663, 41488, 56815, 56782, 56782, 57872, 56815, 56815, 39341, 7630, 0, 0, 0, 0, 0, 0, 0, 
0, 24047, 56815, 57872, 56815, 56782, 56782, 56782, 56782, 56782, 55725, 39308, 20711, 0, 0, 0, 0, 0, 0, 24014, 56782, 57872, 57872, 56815, 56815, 56815, 55725, 56782, 56782, 55725, 55725, 37128, 
2213, 0, 0, 0, 0, 24014, 56815, 56815, 56815, 56815, 56815, 56782, 57872, 55725, 56815, 56815, 55725, 55692, 52422, 36005, 19621, 0, 0, 22957, 56782, 56815, 56782, 56782, 56782, 56815, 56782, 56815, 
56782, 57872, 56815, 55725, 54635, 52389, 51365, 18597, 0, 6507, 55692, 55725, 55725, 55725, 55725, 55725, 56782, 56782, 56815, 56782, 56815, 56815, 55725, 53545, 51365, 51365, 18564, 0, 5483, 54635, 54635, 54635, 
54635, 55692, 55725, 56782, 56782, 56815, 56782, 56782, 56782, 55659, 52422, 51365, 51365, 2213, 0, 3237, 52455, 53545, 53545, 54602, 54635, 55692, 55725, 55725, 56782, 56782, 55725, 55692, 53512, 51332, 51365, 51365, 
34981, 2213, 0, 34981, 52422, 52455, 53479, 53545, 54602, 55692, 55725, 55725, 55692, 54635, 53545, 52422, 51365, 51365, 51365, 51365, 18597, 0, 18597, 51365, 51365, 52389, 52422, 53512, 54569, 54635, 54635, 54602, 
53512, 52422, 51365, 52389, 51365, 51365, 51365, 18564, 0, 0, 34981, 52389, 51365, 51365, 52422, 52422, 53512, 53479, 52455, 52389, 51332, 51365, 51365, 51365, 51365, 51365, 18564, 0, 0, 2213, 34981, 51365, 
51365, 51365, 51332, 51365, 51365, 51365, 51365, 51365, 51365, 51365, 51365, 51365, 51365, 3270, 0, 0, 0, 18564, 51332, 51365, 51365, 51365, 51365, 51365, 51332, 51365, 51365, 51365, 51365, 51365, 51365, 18597, 
0, 0, 0, 0, 2180, 51365, 51365, 51365, 51365, 51365, 51365, 51365, 51365, 51365, 51365, 51365, 51365, 34981, 2213, 0, 0, 0, 0, 2213, 51365, 51365, 51365, 51365, 51365, 51365, 51365, 51365, 
51365, 51365, 34981, 18597, 2180, 0, 0, 0, 0, 0, 0, 18597, 51332, 51365, 51365, 51365, 19621, 18597, 34981, 34981, 34981, 3270, 0, 0, 0, 0, 0, 0, 0, 0, 0, 2180, 
34981, 51332, 18597, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 2180, 18597, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 
};
Sprites rock(16, rockPixels, rockOffsets, rockRes, rockPoints, rockPointOffsets, Sprites::PixelFormat::R5G5B4A2);