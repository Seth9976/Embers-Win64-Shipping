// 函数: sub_141b92af0
// 地址: 0x141b92af0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t var_28 = arg1[0x5d]
arg1[0x5d] = 0
int32_t var_20 = arg1[0x5e].d
int32_t var_1c = *(arg1 + 0x2f4)
arg1[0x5e] = 0
int64_t rax_3 = *arg1
int64_t var_18 = 0
int64_t var_10 = 0
(*(rax_3 + 0x2d8))(arg3, &var_18, &var_28)
int64_t* rcx = arg1[0x41]

if (rcx != 0)
    (*(*rcx + 0x240))(rcx)

int64_t rcx_1 = var_28

if (rcx_1 != 0)
    sub_140a74f90(rcx_1)

int64_t rcx_2 = var_18

if (rcx_2 != 0)
    sub_140a74f90(rcx_2)

int64_t rsi = sx.q(arg2[1].d)

if (rsi.d != 0)
    int32_t rax_5 = arg1[0x5e].d
    int32_t rdx_1 = rax_5 + rsi.d
    
    if (rdx_1 s> *(arg1 + 0x2f4))
        sub_1405c5570(&arg1[0x5d], rdx_1)
        rax_5 = arg1[0x5e].d
    
    memcpy(arg1[0x5d] + (sx.q(rax_5) << 3), *arg2, (rsi << 3).d)
    arg1[0x5e].d += rsi.d

int64_t rax_7 = *arg1
var_18 = 0
int64_t var_10_1 = 0
int64_t result = (*(rax_7 + 0x2d8))(arg1, &arg1[0x5d], &var_18)
int64_t rcx_7 = var_18

if (rcx_7 != 0)
    result = sub_140a74f90(rcx_7)

int64_t* rcx_8 = arg1[0x41]

if (rcx_8 == 0)
    return result

return (*(*rcx_8 + 0x240))(rcx_8)
