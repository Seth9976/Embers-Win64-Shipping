// 函数: sub_1429bbd60
// 地址: 0x1429bbd60
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t var_40 = -2
uint64_t i_2 = zx.q(arg2)

if (arg2 == 0)
    return 0

uint8_t* rax_1 = j_sub_140a82f30(0x80008)
int64_t* rbx_1 = rax_1
uint8_t* var_48 = rax_1
__builtin_memset(rax_1, 0, 0x80008)

if (i_2.d s> 0)
    int16_t* rax_2 = arg1
    uint64_t i_1 = i_2
    uint64_t i
    
    do
        uint64_t rcx = zx.q(*rax_2)
        rbx_1[rcx] += 1
        rax_2 = &rax_2[1]
        i = i_1
        i_1 -= 1
    while (i != 1)

int32_t arg_20 = 0
int32_t arg_10 = 0
sub_1429bb720(rbx_1, &arg_20, &arg_10)
var_48 = &arg3[0x14]
int32_t rbp_1 = arg_10
int32_t rsi_1 = arg_20
sub_1429bc590(rbx_1, rsi_1, rbp_1, &var_48)
uint8_t* r15_1 = var_48
int32_t r14_2 = r15_1.d - (&arg3[0x14]).d
int32_t rax_3 = sub_1429bc2f0(rbx_1, arg1, i_2.d, rbp_1, r15_1)
int32_t temp0_1
int32_t temp1_1
temp0_1:temp1_1 = sx.q(rax_3 + 7)
*arg3 = rsi_1.b
arg3[1] = (rsi_1 u>> 8).b
arg3[2] = (rsi_1 u>> 0x10).b
arg3[3] = (rsi_1 u>> 0x18).b
arg3[4] = rbp_1.b
arg3[5] = (rbp_1 u>> 8).b
arg3[6] = (rbp_1 u>> 0x10).b
arg3[7] = (rbp_1 u>> 0x18).b
arg3[8] = r14_2.b
arg3[9] = (r14_2 u>> 8).b
arg3[0xa] = (r14_2 u>> 0x10).b
arg3[0xb] = (r14_2 u>> 0x18).b
arg3[0xc] = rax_3.b
arg3[0xd] = (rax_3 u>> 8).b
arg3[0xe] = (rax_3 u>> 0x10).b
arg3[0xf] = (rax_3 u>> 0x18).b
*(arg3 + 0x10) = 0
j_sub_140a74f90(rbx_1)
return zx.q(r15_1.d - arg3.d + (((temp0_1 & 7) + temp1_1) s>> 3))
