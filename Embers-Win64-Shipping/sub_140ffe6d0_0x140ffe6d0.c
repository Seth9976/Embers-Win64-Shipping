// 函数: sub_140ffe6d0
// 地址: 0x140ffe6d0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

if (data_143f01c92 == 0)
label_140ffe6fd:
    
    if (sub_140a80f40() != 0)
        return sub_140ffaf90(arg1, arg3, zx.q(arg4), arg5, arg6, arg7)
else
    char rax_1 = sub_140a80f10()
    
    if (rax_1 != 0)
        return sub_140ffaf90(arg1, arg3, zx.q(arg4), arg5, arg6, arg7)
    
    if (data_143f01c92 == rax_1)
        goto label_140ffe6fd

uint64_t rbp = zx.q(arg6)
int64_t rbx_1 = zx.q(arg5[5]) * rbp
int64_t rax_6 = sub_140a82f30(rbx_1, 0)
memcpy(rax_6, arg7, rbx_1.d)
void*** rcx_5 = (data_143f02bc8 + 7) & 0xfffffffffffffff8
int32_t var_2c = rbp.d
void* rax_7 = &rcx_5[9]
void* var_50 = arg3
int128_t var_44 = *arg5
uint64_t var_34 = *(arg5 + 0x10)

if (rax_7 u> data_143f02bd0)
    sub_140b0e3d0(&data_143f02bc8, 0x50)
    rcx_5 = (data_143f02bc8 + 7) & 0xfffffffffffffff8
    rax_7 = &rcx_5[9]

data_143f02bac += 1
data_143f02bc8 = rax_7
*data_143f02ba0 = rcx_5
data_143f02ba0 = &rcx_5[1]
*(rcx_5 + 0x10) = arg1.o
rcx_5[1] = 0
*rcx_5 = &data_142efae48
*(rcx_5 + 0x20) = arg4.o
*(rcx_5 + 0x30) = var_44
rcx_5[8] = rax_6
return &data_142efae48
