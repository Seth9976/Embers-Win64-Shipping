// 函数: sub_14090c820
// 地址: 0x14090c820
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

__builtin_memset(arg1, 0xff, 0x18)
int32_t temp0
int32_t temp1
int32_t temp2
int32_t temp3
temp0, temp1, temp2, temp3 = __cpuid(0, 0)
int32_t rbp
int32_t rsi
int32_t rdi

if (temp1 == 0x756e6547 && temp3 == 0x49656e69 && temp2 == 0x6c65746e)
    rdi = 0
    rsi = 0
    rbp = 0
    
    for (int32_t i = 0; i s< 0x10; )
        int32_t temp0_1
        int32_t temp1_1
        int32_t temp2_1
        int32_t temp3_1
        temp0_1, temp1_1, temp2_1, temp3_1 = __cpuid(4, i)
        int32_t r11_2 = temp0_1 & 0xf
        
        if (((r11_2 - 1) & 0xfffffffd) == 0)
            int32_t r8_3 = temp0_1 s>> 5 & 7
            int32_t rdx_8 = ((temp1_1 s>> 0xc & 0x3ff) + 1) * ((temp1_1 u>> 0x16) + 1)
                * ((temp1_1 & 0xfff) + 1) * (temp2_1 + 1)
            
            if (r8_3 == 1)
                rbp = rdx_8
            else if (r8_3 == 2)
                rsi = rdx_8
            else if (r8_3 == 3)
                rdi = rdx_8
        
        i += 1
        
        if (r11_2 == 0)
            break
else if ((temp1 == 0x68747541 && temp3 == 0x69746e65 && temp2 == 0x444d4163)
        || (temp1 == 0x69444d41 && temp3 == 0x74656273 && temp2 == 0x21726574))
    int32_t temp0_3
    int32_t temp1_2
    int32_t temp2_3
    int32_t temp3_2
    temp0_3, temp1_2, temp2_3, temp3_2 = __cpuid(0x80000005, 0)
    int32_t temp0_4
    int32_t temp1_3
    int32_t temp2_4
    int32_t temp3_3
    temp0_4, temp1_3, temp2_4, temp3_3 = __cpuid(0x80000006, 0)
    rbp = temp2_3 s>> 0x18 << 0xa
    rsi = temp2_4 s>> 0x10 << 0xa
    rdi = (temp3_3 s>> 0x12 & 0x3ff) << 0x13
else if (temp1 s< 4)
    int32_t arg_8
    int32_t arg_10
    int32_t arg_18
    sub_14090ca60(&arg_18, &arg_10, &arg_8)
    rdi = arg_8
    rsi = arg_10
    rbp = arg_18
else
    rdi = 0
    rsi = 0
    rbp = 0
    
    for (int32_t i_1 = 0; i_1 s< 0x10; )
        int32_t temp0_5
        int32_t temp1_4
        int32_t temp2_5
        int32_t temp3_4
        temp0_5, temp1_4, temp2_5, temp3_4 = __cpuid(4, i_1)
        int32_t r11_4 = temp0_5 & 0xf
        
        if (((r11_4 - 1) & 0xfffffffd) == 0)
            int32_t r8_8 = temp0_5 s>> 5 & 7
            int32_t rdx_17 = ((temp1_4 s>> 0xc & 0x3ff) + 1) * ((temp1_4 u>> 0x16) + 1)
                * ((temp1_4 & 0xfff) + 1) * (temp2_5 + 1)
            
            if (r8_8 == 1)
                rbp = rdx_17
            else if (r8_8 == 2)
                rsi = rdx_17
            else if (r8_8 == 3)
                rdi = rdx_17
        
        i_1 += 1
        
        if (r11_4 == 0)
            break

int64_t rax_12 = sx.q(rbp)

if (rbp s<= 0)
    rax_12 = 0x8000

*arg1 = rax_12
int64_t rax_13 = sx.q(rsi)

if (rsi s<= 0)
    rax_13 = 0x40000

arg1[1] = rax_13
int64_t rax_14 = sx.q(rdi)

if (rdi s<= 0)
    rax_14 = 0x200000

arg1[2] = rax_14
return arg1
