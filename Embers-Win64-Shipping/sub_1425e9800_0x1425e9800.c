// 函数: sub_1425e9800
// 地址: 0x1425e9800
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int32_t result = 0

if (0 == data_143f70b54)
    data_143f70b54 = 0
else
    result = data_143f70b54

if (arg1[3].d == result)
    void* rbx_1 = arg1[1]
    void* rdi_1 = *arg1
    void* rdx_1 = *(rbx_1 + 8)
    int32_t arg_c = *(rdx_1 + 0x64)
    sub_1425f21c0(rdi_1, (*(rdx_1 + 0x60)).q, *(arg1 + 0x14))
    void*** rcx_3 = (data_143f02bc8 + 7) & 0xfffffffffffffff8
    void* rax_2 = &rcx_3[4]
    
    if (rax_2 u> data_143f02bd0)
        sub_140b0e3d0(&data_143f02bc8, 0x28)
        rcx_3 = (data_143f02bc8 + 7) & 0xfffffffffffffff8
        rax_2 = &rcx_3[4]
    
    data_143f02bac += 1
    data_143f02bc8 = rax_2
    *data_143f02ba0 = rcx_3
    data_143f02ba0 = &rcx_3[1]
    rcx_3[1] = 0
    result = 0x43449fd8
    rcx_3[2] = rdi_1
    rcx_3[3] = rbx_1
    *rcx_3 = &data_143449fd8

return result
