// 函数: sub_141c41490
// 地址: 0x141c41490
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int32_t* rsi = arg4
int64_t i_2 = sx.q(arg3)
int64_t rax = sub_141c3bdb0(*(arg1 + 0x60), i_2.d, 0)
int64_t rax_1 = sub_141c3bdb0(*(arg1 + 0x68), i_2.d, 0)
int64_t rax_2 = sub_141c3bdb0(*(arg1 + 0x70), i_2.d, 0)
int64_t rax_3 = sub_141c3bdb0(*(arg1 + 0x78), i_2.d, 0)
int64_t r11 = *(arg1 + 0x80)
int64_t rax_4 = *(arg1 + 0x90)
int32_t r9 = 0
int64_t r8 = *(arg1 + 0xa0)
int64_t i_1 = i_2
int64_t rcx_4 = *(arg1 + 0xb0)

if (i_2.d s> 0)
    int128_t zmm4_1 = *(arg1 + 0x50)
    int128_t zmm3 = *(arg1 + 0x54)
    int128_t zmm6 = *(arg1 + 0x4c)
    int128_t zmm7
    int128_t var_58_1 = zmm7
    int128_t zmm8
    int128_t var_68_1 = zmm8
    int128_t zmm9
    int128_t var_78_1 = zmm9
    int128_t* r14_1 = rax_1 - rsi
    int64_t i
    
    do
        int128_t zmm2 = *(r14_1 + rsi)
        void* rax_5 = r14_1 + rsi
        zmm7.d = (*(rax_5 + arg2 - rax_1)).d f* *(arg1 + 4)
        int128_t zmm5_1 = *(rax_5 + rax - rax_1)
        int128_t zmm1_1 = *(rax_5 + rax_2 - rax_1)
        zmm9.d = zmm5_1.d f* *(arg1 + 8)
        zmm6.d = zmm6.d f+ zmm7.d
        zmm8 = *(rax_5 + rax_3 - rax_1)
        zmm9.d = zmm9.d f+ zmm6.d
        
        if (not(zmm9.d f<= -1.17549435e-38f) && not(zmm9.d f>= 1.17549435e-38f))
            zmm9 = zx.o(0)
        
        zmm4_1.d = zmm4_1.d f+ zmm7.d
        int128_t zmm0_1
        zmm0_1.d = zmm2.d f* *(arg1 + 0xc)
        zmm4_1.d = zmm4_1.d f+ zmm0_1.d
        
        if (not(zmm4_1.d f<= -1.17549435e-38f) && not(zmm4_1.d f>= 1.17549435e-38f))
            zmm4_1 = zx.o(0)
        
        zmm3.d = zmm3.d f+ zmm7.d
        zmm0_1.d = zmm1_1.d f* *(arg1 + 0x10)
        zmm3.d = zmm3.d f+ zmm0_1.d
        
        if (not(zmm3.d f<= -1.17549435e-38f) && not(zmm3.d f>= 1.17549435e-38f))
            zmm3 = zx.o(0)
        
        zmm7.d = zmm7.d f+ *(arg1 + 0x58)
        zmm0_1.d = zmm8.d f* *(arg1 + 0x14)
        zmm7.d = zmm7.d f+ zmm0_1.d
        
        if (not(zmm7.d f<= -1.17549435e-38f) && not(zmm7.d f>= 1.17549435e-38f))
            zmm7 = zx.o(0)
        
        *(rax_5 + r11 - rax_1) = zmm9.d
        *(rax_5 + rax_4 - rax_1) = zmm4_1.d
        *(rax_5 + r8 - rax_1) = zmm3.d
        *(rax_5 + rcx_4 - rax_1) = zmm7.d
        *rsi = 0
        zmm9.d = zmm9.d f* *(arg1 + 8)
        zmm0_1.d = (*(arg1 + 0x28)).d f* *(arg1 + 0x3c)
        zmm5_1.d = zmm5_1.d f- zmm9.d
        zmm5_1.d = zmm5_1.d f* *(arg1 + 0x18)
        zmm5_1.d = zmm5_1.d f+ zmm0_1.d
        
        if (not(zmm5_1.d f<= -1.17549435e-38f) && not(zmm5_1.d f>= 1.17549435e-38f))
            zmm5_1 = zx.o(0)
        
        *(arg1 + 0x3c) = zmm5_1.d
        zmm5_1.d = zmm5_1.d f+ *rsi
        *rsi = zmm5_1.d
        zmm4_1.d = zmm4_1.d f* *(arg1 + 0xc)
        zmm0_1.d = (*(arg1 + 0x2c)).d f* *(arg1 + 0x40)
        zmm2.d = zmm2.d f- zmm4_1.d
        zmm2.d = zmm2.d f* *(arg1 + 0x1c)
        zmm2.d = zmm2.d f+ zmm0_1.d
        
        if (not(zmm2.d f<= -1.17549435e-38f) && not(zmm2.d f>= 1.17549435e-38f))
            zmm2 = zx.o(0)
        
        *(arg1 + 0x40) = zmm2.d
        zmm2.d = zmm2.d f+ *rsi
        *rsi = zmm2.d
        zmm3.d = zmm3.d f* *(arg1 + 0x10)
        zmm0_1.d = (*(arg1 + 0x30)).d f* *(arg1 + 0x44)
        zmm1_1.d = zmm1_1.d f- zmm3.d
        zmm1_1.d = zmm1_1.d f* *(arg1 + 0x20)
        zmm1_1.d = zmm1_1.d f+ zmm0_1.d
        
        if (not(zmm1_1.d f<= -1.17549435e-38f) && not(zmm1_1.d f>= 1.17549435e-38f))
            zmm1_1 = zx.o(0)
        
        *(arg1 + 0x44) = zmm1_1.d
        zmm1_1.d = zmm1_1.d f+ *rsi
        *rsi = zmm1_1.d
        zmm7.d = zmm7.d f* *(arg1 + 0x14)
        zmm0_1.d = (*(arg1 + 0x34)).d f* *(arg1 + 0x48)
        zmm8.d = zmm8.d f- zmm7.d
        zmm8.d = zmm8.d f* *(arg1 + 0x24)
        zmm8.d = zmm8.d f+ zmm0_1.d
        
        if (not(zmm8.d f<= -1.17549435e-38f) && not(zmm8.d f>= 1.17549435e-38f))
            zmm8 = zx.o(0)
        
        *(arg1 + 0x48) = zmm8.d
        zmm8.d = zmm8.d f+ *rsi
        *rsi = zmm8.d
        rsi = &rsi[1]
        zmm1_1 = *(arg1 + 0x44)
        zmm2 = *(arg1 + 0x40)
        zmm3 = *(arg1 + 0x3c)
        zmm6.d = zmm1_1.d f- zmm2.d
        zmm2.d = (zmm2 ^ 0x80000000).d f- zmm1_1.d
        zmm4_1.d = zmm3.d f+ *(arg1 + 0x48)
        zmm3.d = zmm3.d f- *(arg1 + 0x48)
        zmm6.d = zmm6.d f* *(arg1 + 0x38)
        *(arg1 + 0x4c) = zmm6.d
        zmm4_1.d = zmm4_1.d f* *(arg1 + 0x38)
        *(arg1 + 0x50) = zmm4_1.d
        zmm3.d = zmm3.d f* *(arg1 + 0x38)
        *(arg1 + 0x54) = zmm3.d
        zmm2.d = zmm2.d f* *(arg1 + 0x38)
        *(arg1 + 0x58) = zmm2.d
        i = i_1
        i_1 -= 1
    while (i != 1)
    i_1 = i_2

void* rdx_6 = *(arg1 + 0x60)
int32_t temp0 = *(rdx_6 + 0x38)
*(rdx_6 + 0x38) -= i_2.d
int32_t r8_2

if (temp0 - i_2.d s>= 0)
    int32_t rcx_7 = *(rdx_6 + 0x40)
    int32_t r8_5 = *(rdx_6 + 0x30) - i_2.d - rcx_7
    
    if (r8_5 s<= 0)
        r8_2 = neg.d(r8_5)
        *(rdx_6 + 0x20) = *(rdx_6 + 0x10) - (sx.q(r8_5) << 2)
    else
        *(rdx_6 + 0x20) += i_1 << 2
        r8_2 = i_2.d + rcx_7
else
    int64_t rax_6 = *(rdx_6 + 0x10)
    r8_2 = 0
    *(rdx_6 + 0x38) = 0
    *(rdx_6 + 0x20) = rax_6

*(rdx_6 + 0x40) = r8_2
void* rdx_7 = *(arg1 + 0x68)
int32_t temp1 = *(rdx_7 + 0x38)
*(rdx_7 + 0x38) -= i_2.d
int32_t r8_6

if (temp1 - i_2.d s>= 0)
    int32_t rcx_10 = *(rdx_7 + 0x40)
    int32_t r8_9 = *(rdx_7 + 0x30) - rcx_10 - i_2.d
    
    if (r8_9 s<= 0)
        r8_6 = neg.d(r8_9)
        *(rdx_7 + 0x20) = *(rdx_7 + 0x10) - (sx.q(r8_9) << 2)
    else
        *(rdx_7 + 0x20) += i_1 << 2
        r8_6 = rcx_10 + i_2.d
else
    int64_t rax_9 = *(rdx_7 + 0x10)
    r8_6 = 0
    *(rdx_7 + 0x38) = 0
    *(rdx_7 + 0x20) = rax_9

*(rdx_7 + 0x40) = r8_6
void* rdx_8 = *(arg1 + 0x70)
int32_t temp2 = *(rdx_8 + 0x38)
*(rdx_8 + 0x38) -= i_2.d
int32_t r8_10

if (temp2 - i_2.d s>= 0)
    int32_t rcx_13 = *(rdx_8 + 0x40)
    int32_t r8_13 = *(rdx_8 + 0x30) - rcx_13 - i_2.d
    
    if (r8_13 s<= 0)
        r8_10 = neg.d(r8_13)
        *(rdx_8 + 0x20) = *(rdx_8 + 0x10) - (sx.q(r8_13) << 2)
    else
        *(rdx_8 + 0x20) += i_1 << 2
        r8_10 = rcx_13 + i_2.d
else
    int64_t rax_12 = *(rdx_8 + 0x10)
    r8_10 = 0
    *(rdx_8 + 0x38) = 0
    *(rdx_8 + 0x20) = rax_12

*(rdx_8 + 0x40) = r8_10
void* rdx_9 = *(arg1 + 0x78)
int32_t temp3 = *(rdx_9 + 0x38)
*(rdx_9 + 0x38) -= i_2.d

if (temp3 - i_2.d s>= 0)
    int32_t rcx_16 = *(rdx_9 + 0x40)
    int32_t r9_3 = *(rdx_9 + 0x30) - rcx_16 - i_2.d
    
    if (r9_3 s<= 0)
        r9 = neg.d(r9_3)
        *(rdx_9 + 0x20) = *(rdx_9 + 0x10) - (sx.q(r9_3) << 2)
    else
        *(rdx_9 + 0x20) += i_1 << 2
        r9 = rcx_16 + i_2.d
else
    int64_t rax_15 = *(rdx_9 + 0x10)
    *(rdx_9 + 0x38) = 0
    *(rdx_9 + 0x20) = rax_15

*(rdx_9 + 0x40) = r9
sub_141c33790(*(arg1 + 0x60), r11, i_2.d)
sub_141c33790(*(arg1 + 0x68), rax_4, i_2.d)
sub_141c33790(*(arg1 + 0x70), r8, i_2.d)
return sub_141c33790(*(arg1 + 0x78), rcx_4, i_2.d) __tailcall
