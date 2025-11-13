// 函数: sub_1409f5b40
// 地址: 0x1409f5b40
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

uint128_t zmm6
uint128_t var_18 = zmm6
uint128_t zmm7 = arg1

if (sub_140acede0(arg2, arg3) != 0 && arg2 != 0x35 && arg3 != 0x35)
    switch (sub_140ad90e0(arg2))
        case 0
            zmm6.q = sub_140ad3350(arg2).q f* zmm7.q
            zmm6.q = zmm6.q f/ sub_140ad3350(arg3).q
            return zmm6
        case 1
            zmm6.q = sub_140acedc0(arg2).q f* zmm7.q
            zmm6.q = zmm6.q f/ sub_140acedc0(arg3).q
            return zmm6
        case 2
            zmm6.q = sub_140ae1270(arg2).q f* zmm7.q
            zmm6.q = zmm6.q f/ sub_140ae1270(arg3).q
            return zmm6
        case 3
            arg1 = 0x4071126660000000
            uint32_t rcx_22 = zx.d(arg2)
            
            if (rcx_22 == 0xf)
                zmm7.q = zmm7.q f+ arg1.q
            else if (rcx_22 == 0x10)
                zmm7.q = zmm7.q f* 0.55555555555555558
                zmm7.q = zmm7.q f+ 255.37222968207465
            
            uint32_t rcx_24 = zx.d(arg3)
            
            if (rcx_24 == 0xf)
                zmm7.q = zmm7.q f- arg1.q
            else if (rcx_24 == 0x10)
                zmm7.q = zmm7.q f* 1.8
                zmm7.q = zmm7.q f- 459.67001342773438
        case 4
            zmm6.q = sub_140adc7b0(arg2).q f* zmm7.q
            zmm6.q = zmm6.q f/ sub_140adc7b0(arg3).q
            return zmm6
        case 5
            zmm6.q = sub_140ad6ef0(arg2).q f* zmm7.q
            zmm6.q = zmm6.q f/ sub_140ad6ef0(arg3).q
            return zmm6
        case 6
            zmm6.q = sub_140ad6f20(arg2).q f* zmm7.q
            zmm6.q = zmm6.q f/ sub_140ad6f20(arg3).q
            return zmm6
        case 7
            zmm6.q = sub_140ad31d0(arg2).q f* zmm7.q
            zmm6.q = zmm6.q f/ sub_140ad31d0(arg3).q
            return zmm6
        case 0xc
            zmm6.q = sub_140ae1650(arg2).q f* zmm7.q
            zmm6.q = zmm6.q f/ sub_140ae1650(arg3).q
            return zmm6
        case 0xe
            zmm6.q = sub_140adc850(arg2).q f* zmm7.q
            zmm6.q = zmm6.q f/ sub_140adc850(arg3).q
            return zmm6

return zmm7
