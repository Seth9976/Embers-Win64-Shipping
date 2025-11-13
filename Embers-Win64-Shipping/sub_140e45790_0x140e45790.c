// 函数: sub_140e45790
// 地址: 0x140e45790
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int128_t zmm6
int128_t var_18 = zmm6
double zmm7[0x2] = arg1

if (sub_140acede0(arg2, arg3) != 0 && arg2 != 0x35 && arg3 != 0x35)
    switch (sub_140ad90e0(arg2))
        case 0
            zmm6.q = sub_140ad3350(arg2).q f* fconvert.d(zmm7[0].d)
            zmm6.q = zmm6.q f/ sub_140ad3350(arg3)[0]
            arg1 = zx.o(0)
            arg1[0].d = fconvert.s(zmm6.q)
            return arg1
        case 1
            zmm6.q = sub_140acedc0(arg2).q f* fconvert.d(zmm7[0].d)
            zmm6.q = zmm6.q f/ sub_140acedc0(arg3)[0]
            arg1 = zx.o(0)
            arg1[0].d = fconvert.s(zmm6.q)
            return arg1
        case 2
            zmm6.q = sub_140ae1270(arg2).q f* fconvert.d(zmm7[0].d)
            zmm6.q = zmm6.q f/ sub_140ae1270(arg3)[0]
            arg1 = zx.o(0)
            arg1[0].d = fconvert.s(zmm6.q)
            return arg1
        case 3
            int64_t zmm1 = 0x4071126660000000
            arg1 = zx.o(0)
            uint32_t rcx_22 = zx.d(arg2)
            arg1[0] = fconvert.d(zmm7[0].d)
            
            if (rcx_22 == 0xf)
                arg1[0] = arg1[0] f+ zmm1
            else if (rcx_22 == 0x10)
                arg1[0] = arg1[0] * 0.55555555555555558
                arg1[0] = arg1[0] + 255.37222968207465
            
            uint32_t rcx_24 = zx.d(arg3)
            
            if (rcx_24 == 0xf)
                arg1[0] = arg1[0] f- zmm1
            else if (rcx_24 == 0x10)
                arg1[0] = arg1[0] * 1.8
                arg1[0] = arg1[0] - 459.67001342773438
            
            return _mm_cvtpd_ps(arg1)
        case 4
            zmm6.q = sub_140adc7b0(arg2).q f* fconvert.d(zmm7[0].d)
            zmm6.q = zmm6.q f/ sub_140adc7b0(arg3)[0]
            arg1 = zx.o(0)
            arg1[0].d = fconvert.s(zmm6.q)
            return arg1
        case 5
            zmm6.q = sub_140ad6ef0(arg2).q f* fconvert.d(zmm7[0].d)
            zmm6.q = zmm6.q f/ sub_140ad6ef0(arg3)[0]
            arg1 = zx.o(0)
            arg1[0].d = fconvert.s(zmm6.q)
            return arg1
        case 6
            zmm6.q = sub_140ad6f20(arg2).q f* fconvert.d(zmm7[0].d)
            zmm6.q = zmm6.q f/ sub_140ad6f20(arg3)[0]
            arg1 = zx.o(0)
            arg1[0].d = fconvert.s(zmm6.q)
            return arg1
        case 7
            zmm6.q = sub_140ad31d0(arg2).q f* fconvert.d(zmm7[0].d)
            zmm6.q = zmm6.q f/ sub_140ad31d0(arg3)[0]
            arg1 = zx.o(0)
            arg1[0].d = fconvert.s(zmm6.q)
            return arg1
        case 0xc
            zmm6.q = sub_140ae1650(arg2).q f* fconvert.d(zmm7[0].d)
            zmm6.q = zmm6.q f/ sub_140ae1650(arg3)[0]
            arg1 = zx.o(0)
            arg1[0].d = fconvert.s(zmm6.q)
            return arg1
        case 0xe
            zmm6.q = sub_140adc850(arg2).q f* fconvert.d(zmm7[0].d)
            zmm6.q = zmm6.q f/ sub_140adc850(arg3)[0]
            arg1 = zx.o(0)
            arg1[0].d = fconvert.s(zmm6.q)
            return arg1

return zmm7
