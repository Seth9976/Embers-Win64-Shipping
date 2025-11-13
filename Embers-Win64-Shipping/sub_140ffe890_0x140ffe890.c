// 函数: sub_140ffe890
// 地址: 0x140ffe890
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

if (data_143f01c92 == 0)
label_140ffe8c0:
    
    if (sub_140a80f40() != 0)
        return sub_140ffb040(arg1, arg3, arg4, arg5, arg6, arg7, arg8)
else
    char rax_1 = sub_140a80f10()
    
    if (rax_1 != 0)
        return sub_140ffb040(arg1, arg3, arg4, arg5, arg6, arg7, arg8)
    
    if (data_143f01c92 == rax_1)
        goto label_140ffe8c0

uint64_t rbp = zx.q(arg7)
int64_t rbx_1 = zx.q(arg5[8]) * rbp
int64_t rax_7 = sub_140a82f30(rbx_1, 0)
memcpy(rax_7, arg8, rbx_1.d)
int32_t var_34 = arg5[8]
int32_t var_30 = arg6
void*** rcx_6 = (data_143f02bc8 + 7) & 0xfffffffffffffff8
int32_t var_2c = rbp.d
void* rax_9 = &rcx_6[0xb]
void* var_60 = arg3
uint128_t var_54 = *arg5
int128_t var_44 = *(arg5 + 0x10)

if (rax_9 u> data_143f02bd0)
    sub_140b0e3d0(&data_143f02bc8, 0x60)
    rcx_6 = (data_143f02bc8 + 7) & 0xfffffffffffffff8
    rax_9 = &rcx_6[0xb]

data_143f02bac += 1
data_143f02bc8 = rax_9
*data_143f02ba0 = rcx_6
data_143f02ba0 = &rcx_6[1]
*(rcx_6 + 0x10) = arg1.o
rcx_6[1] = 0
*rcx_6 = &data_142efae68
*(rcx_6 + 0x20) = arg4.o
*(rcx_6 + 0x30) = var_54
*(rcx_6 + 0x40) = var_44
rcx_6[0xa] = rax_7
return &data_142efae68
