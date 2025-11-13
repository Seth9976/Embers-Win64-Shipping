// 函数: sub_141065850
// 地址: 0x141065850
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void* rbx = *(**(arg1 + 0x20) + 0x4e8)
int64_t rdi = *(rbx + 0x38)
*(rbx + 0x38) = rdi + 1
void*** rcx_3 = (data_143f02bc8 + 7) & 0xfffffffffffffff8
void* rax_2 = &rcx_3[5]

if (rax_2 u> data_143f02bd0)
    sub_140b0e3d0(&data_143f02bc8, 0x30)
    rcx_3 = (data_143f02bc8 + 7) & 0xfffffffffffffff8
    rax_2 = &rcx_3[5]

data_143f02bac += 1
data_143f02bc8 = rax_2
*data_143f02ba0 = rcx_3
data_143f02ba0 = &rcx_3[1]
rcx_3[1] = 0
rcx_3[3] = rbx
*rcx_3 = &data_142f03660
rcx_3[2].d = 0
rcx_3[4] = rdi
return &data_142f03660
