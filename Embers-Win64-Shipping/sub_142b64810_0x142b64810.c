// 函数: sub_142b64810
// 地址: 0x142b64810
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t rbx = *arg1
int32_t arg_8 = 0
int64_t* var_48
__builtin_memset(&var_48, 0, 0x18)
int64_t r15
r15.b = 1
int512_t zmm1
zmm1.o = sub_142a4bbc0()
int64_t* var_40
int64_t* var_38
(*(rbx + 0x90))(arg1, zmm1, &var_38, &var_40, &var_48, &arg_8, var_48, var_40, var_38)

if (arg_8 s> 0)
    r15.b = 0
else
    int64_t* rcx_1 = var_40
    
    if (rcx_1 == 0 || var_48 == 0)
        int32_t temp0_1
        int32_t temp1_1
        temp0_1:temp1_1 = muls.dp.d(0xba184d8d, sub_1405f8de0(var_38))
        int32_t rdx_21 = temp0_1 s>> 0xe
        *arg4 = rdx_21 + (rdx_21 u>> 0x1f)
        *arg6 = 0
        *arg5 = 0
        *(arg3 + 8) = 0
        *arg3 = 0
        *(arg2 + 8) = 0
        *arg2 = 0
    else
        int32_t temp2_1
        int32_t temp3_1
        temp2_1:temp3_1 = muls.dp.d(0xba184d8d, sub_1405f8de0(rcx_1))
        int32_t rdx_1 = temp2_1 s>> 0xe
        int64_t* rcx_5 = var_48
        *arg4 = rdx_1 + (rdx_1 u>> 0x1f)
        *arg6 = 0
        int32_t temp4_1
        int32_t temp5_1
        temp4_1:temp5_1 = muls.dp.d(0xba184d8d, sub_141b60020(rcx_5))
        int64_t* rcx_7 = var_40
        int32_t rdx_4 = temp4_1 s>> 0xe
        *arg5 = rdx_4 + (rdx_4 u>> 0x1f)
        *arg3 = 0
        int16_t rax_8 = sub_1408e52c0(sub_141fe0f50(rcx_7))
        int64_t* rcx_9 = var_40
        arg3[1] = rax_8 + 1
        int16_t rax_10 = sub_141c39d90(sub_141fe0f50(rcx_9))
        int64_t* rcx_11 = var_40
        arg3[3] = rax_10
        int16_t rax_12 = sub_1405f8ab0(sub_141fe0f50(rcx_11))
        int64_t* rcx_13 = var_40
        arg3[2] = rax_12 - 1
        int32_t rax_14 = sub_140a47570(sub_141fe0f50(rcx_13))
        int32_t r8_3 = rax_14 s/ 0x36ee80
        arg3[4] = r8_3.w
        int32_t r9_2 = rax_14 + r8_3 * 0xffc91180
        int32_t rdx_9 = r9_2 s/ 0xea60
        arg3[5] = rdx_9.w
        int32_t r9_3 = r9_2 + rdx_9 * 0xffff15a0
        int16_t rdx_12 = (r9_3 s/ 0x3e8).w
        arg3[6] = rdx_12
        r9_3.w -= rdx_12 * 0x3e8
        int64_t* rcx_19 = var_48
        arg3[7] = r9_3.w
        *arg2 = 0
        int16_t rax_22 = sub_1408e52c0(sub_141fe0f50(rcx_19))
        int64_t* rcx_21 = var_48
        arg2[1] = rax_22 + 1
        int16_t rax_24 = sub_141c39d90(sub_141fe0f50(rcx_21))
        int64_t* rcx_23 = var_48
        arg2[3] = rax_24
        int16_t rax_26 = sub_1405f8ab0(sub_141fe0f50(rcx_23))
        int64_t* rcx_25 = var_48
        arg2[2] = rax_26 - 1
        int32_t rax_28 = sub_140a47570(sub_141fe0f50(rcx_25))
        int32_t r8_6 = rax_28 s/ 0x36ee80
        arg2[4] = r8_6.w
        int32_t r9_5 = rax_28 + r8_6 * 0xffc91180
        int32_t rdx_16 = r9_5 s/ 0xea60
        arg2[5] = rdx_16.w
        int32_t r9_6 = r9_5 + rdx_16 * 0xffff15a0
        int16_t rdx_19 = (r9_6 s/ 0x3e8).w
        arg2[6] = rdx_19
        r9_6.w -= rdx_19 * 0x3e8
        arg2[7] = r9_6.w

int64_t* rcx_35 = var_38

if (rcx_35 != 0)
    (**rcx_35)(rcx_35, 1)

int64_t* rcx_36 = var_40

if (rcx_36 != 0)
    int64_t r8_7 = *rcx_36
    (*r8_7)(rcx_36, 1, r8_7)

int64_t* rcx_37 = var_48

if (rcx_37 != 0)
    int64_t r8_8 = *rcx_37
    (*r8_8)(rcx_37, 1, r8_8)

return zx.q(r15.b)
