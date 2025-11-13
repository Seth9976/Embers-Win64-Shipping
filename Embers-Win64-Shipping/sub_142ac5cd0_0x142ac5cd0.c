// 函数: sub_142ac5cd0
// 地址: 0x142ac5cd0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int32_t rdx_1
int32_t rdx_5

if ((arg1.b & 3) == 0)
    int32_t temp0_1
    int32_t temp1_1
    temp0_1:temp1_1 = muls.dp.d(0x51eb851f, arg1)
    rdx_1 = temp0_1 s>> 5
    
    if (arg1 == arg1 s/ 0x64 * 0x64)
        int32_t temp3_1
        int32_t temp4_1
        temp3_1:temp4_1 = muls.dp.d(0x51eb851f, arg1)
        rdx_5 = temp3_1 s>> 7

int32_t rax_1

if ((arg1.b & 3) != 0 ||
        (arg1 == (rdx_1 + (rdx_1 u>> 0x1f)) * 0x64 && arg1 != (rdx_5 + (rdx_5 u>> 0x1f)) * 0x190))
    rax_1 = 0
else
    rax_1.b = 1

char temp2 = rax_1.b
rax_1.b = neg.b(rax_1.b)
return zx.q(*(sx.q((sbb.d(rax_1, rax_1, temp2 != 0) & 0xc) + arg2) + &data_1436565d0))
