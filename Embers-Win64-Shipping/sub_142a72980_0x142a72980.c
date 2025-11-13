// 函数: sub_142a72980
// 地址: 0x142a72980
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

if (arg2 != 1)
    return sub_142a697b0(arg1, arg2, arg3) __tailcall

if (*arg3 s> 0)
    return 0

int64_t* result = (*(*arg1 + 0x10))()

if (result == 0)
    *arg3 = 7
    return result

sub_142a6c0b0(result, 1)
int32_t rax_3 = sub_142a695b0(result, 0, arg3)
int128_t zmm0 = sub_142a6a540(result, arg3)
int32_t i_2 = 1
int32_t i = 0x225c7

do
    int32_t temp0_1
    int32_t temp1_1
    temp0_1:temp1_1 = sx.q(i + i_2)
    int32_t i_1 = (temp1_1 - temp0_1) s>> 1
    sub_142a6c030(result, 1, i_1)
    int32_t rax_7 = sub_142a695b0(result, 1, arg3)
    int32_t rax_8
    
    if (rax_7 == i_1)
        rax_8 = sub_142a695b0(result, 0, arg3)
    
    if (rax_7 != i_1 || rax_8 != rax_3)
        i = i_1
        sub_142a6c1a0(result, zmm0.q, arg3)
    else
        i_2 = i_1
while (i_2 + 1 s< i)

int64_t r8_6 = *result
(*r8_6)(result, 1, r8_6)
return zx.q(i_2)
