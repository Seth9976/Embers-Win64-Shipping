// 函数: sub_140a4ca30
// 地址: 0x140a4ca30
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int128_t zmm3 = arg2
int64_t zmm0

if (not(arg2.q f>= 1.0))
    zmm3.q = zmm3.q f* 1000.0
    zmm0.d = fconvert.s(zmm3.q)
    sub_140a2e390(arg1, u"%d ms", zx.q(int.d(zmm0.d)))
    return arg1

if (not(zmm3.q f>= 10.0))
    zmm0.d = fconvert.s(zmm3.q)
    zmm3.q = zmm3.q f* 1000.0
    uint64_t r8_1 = zx.q(int.d(zmm0.d))
    zmm0.d = fconvert.s(zmm3.q)
    sub_140a2e390(arg1, u"%d.%02d sec", r8_1)
    return arg1

if (not(zmm3.q f>= 60.0))
    zmm0.d = fconvert.s(zmm3.q)
    zmm3.q = zmm3.q f* 1000.0
    uint64_t r8_2 = zx.q(int.d(zmm0.d))
    zmm0.d = fconvert.s(zmm3.q)
    sub_140a2e390(arg1, u"%d.%d sec", r8_2)
    return arg1

zmm0 = zmm3.q

if (not(zmm3.q f>= 3600.0))
    arg2.d = fconvert.s(zmm0 f* 0.016666666666666666)
    zmm0.d = fconvert.s(zmm3.q)
    sub_140a2e390(arg1, u"%d:%02d min", zx.q(int.d(arg2.d)))
    return arg1

arg2.d = fconvert.s(zmm0 f* 0.00027777777777777778)
uint64_t r8_4 = zx.q(int.d(arg2.d))
zmm3.q = zmm3.q f- float.d(r8_4.d * 0xe10)
arg2.q = zmm3.q f* 0.016666666666666666
zmm0.d = fconvert.s(arg2.q)
zmm3.q = zmm3.q f- float.d(int.d(zmm0.d) * 0x3c)
arg2.d = fconvert.s(zmm3.q)
int32_t var_18 = int.d(arg2.d)
sub_140a2e390(arg1, u"%d:%02d:%02d hours", r8_4)
return arg1
