// 函数: sub_14199cb60
// 地址: 0x14199cb60
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t var_48[0x2]
var_48[0] = 0
int64_t var_38 = 0
sub_141998890(arg1, arg2, arg3, arg4, arg5, arg6, arg7, arg8, &var_48)
int64_t rsi = data_1439c91b0
void*** rcx_2 = (*(arg1 + 0x30) + 7) & 0xfffffffffffffff8
void* rax_3 = &rcx_2[5]

if (rax_3 u> *(arg1 + 0x38))
    sub_140b0e3d0(arg1 + 0x30, 0x30)
    rcx_2 = (*(arg1 + 0x30) + 7) & 0xfffffffffffffff8
    rax_3 = &rcx_2[5]

*(arg1 + 0x30) = rax_3
int64_t* rax_4 = *(arg1 + 8)
*(arg1 + 0x14) += 1
*rax_4 = rcx_2
*(arg1 + 8) = &rcx_2[1]
rcx_2[1] = 0
*rcx_2 = &data_142d56618
rcx_2[2].d = 0
rcx_2[3] = rsi
rcx_2[4].d = 0
void*** rcx_8 = (*(arg1 + 0x30) + 7) & 0xfffffffffffffff8
void* rax_6 = &rcx_8[4]

if (rax_6 u> *(arg1 + 0x38))
    sub_140b0e3d0(arg1 + 0x30, 0x28)
    rcx_8 = (*(arg1 + 0x30) + 7) & 0xfffffffffffffff8
    rax_6 = &rcx_8[4]

*(arg1 + 0x30) = rax_6
int64_t* rax_7 = *(arg1 + 8)
*(arg1 + 0x14) += 1
*rax_7 = rcx_8
*(arg1 + 8) = &rcx_8[1]
rcx_8[1] = 0
rcx_8[2].d = 0
*rcx_8 = &data_142d54988
*(rcx_8 + 0x14) = 2
rcx_8[3].d = 1
return &data_142d54988
