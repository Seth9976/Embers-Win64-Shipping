// 函数: sub_1423f31f0
// 地址: 0x1423f31f0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t rdi
rdi.b = 0

if ((arg1[1] & 4) == 0)
    return 

uint128_t zmm0_1
uint128_t zmm6_1
zmm0_1, zmm6_1 = sub_1423de1d0(arg1)
char rax_1 = arg1[1]
uint128_t zmm7 = zmm0_1
zmm0_1 = *(arg1 + 8)

if ((rax_1 & 2) != 0)
    zmm0_1 ^= data_142d3f780

zmm0_1.d = zmm0_1.d f* zmm6_1.d
zmm6_1.d = zmm0_1.d f+ *(arg1 + 0xc)

if (zmm0_1.d f<= 0f)
    if (not(zmm6_1.d f>= 0f))
        if ((rax_1 & 1) == 0)
            rdi.b = 1
            arg1[1] = rax_1 & 0xfb
            zmm6_1 = zx.o(0)
        else
            int32_t zmm7_2
            int32_t i
            zmm6_1, zmm7_2, i = sub_1423f0030(arg1, sub_1423f0030(arg1, zx.o(0), 1, 0), 0, 0)
            
            if (zmm7_2 f<= i)
                zmm6_1 = zx.o(0)
            else
                do
                    zmm6_1.d = zmm6_1.d f+ zmm7_2
                while (zmm6_1.d f< i)
else if (not(zmm6_1.d f<= zmm7.d))
    if ((rax_1 & 1) == 0)
        zmm6_1 = zmm7
        arg1[1] = rax_1 & 0xfb
        rdi.b = 1
    else
        sub_1423f0030(arg1, zmm7, 1, 0)
        int32_t i_1
        int32_t zmm8_1
        zmm6_1, i_1, zmm8_1 = sub_1423f0030(arg1, zx.o(0), 0, 0)
        
        if (i_1 f<= zmm8_1)
            zmm6_1 = zx.o(0)
        else
            do
                zmm6_1.d = zmm6_1.d f- i_1
            while (zmm6_1.d f> i_1)

sub_1423f0030(arg1, zmm6_1, 1, 1)

if (rdi.b == 0)
    return 

sub_1423dc330(&arg1[0x60])

if (*(arg1 + 0x88) == 0)
    return 

int64_t* rcx_6 = *(arg1 + 0x80)

if (rcx_6 == 0 || (*(*rcx_6 + 0x28))(rcx_6) == 0)
    return 

int64_t* rcx_7

if (*(arg1 + 0x88) == 0)
    rcx_7 = nullptr
else
    rcx_7 = *(arg1 + 0x80)

(*(*rcx_7 + 0x50))(rcx_7)
