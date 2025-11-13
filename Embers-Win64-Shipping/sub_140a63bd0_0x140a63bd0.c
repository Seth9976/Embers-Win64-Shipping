// 函数: sub_140a63bd0
// 地址: 0x140a63bd0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void** const result = &data_142e61450
*arg1 = &data_142e61450

if (data_143de5432 == 0)
    sub_140a755d0()
    result = sub_140a87bf0(&data_143db7b50, arg1)

int64_t rdi = arg1[6]

if (rdi != 0)
    int64_t* rcx = data_143ddb3f0
    
    if (rcx == 0)
        sub_140a750a0()
        rcx = data_143ddb3f0
    
    result = (*(*rcx + 0x30))(rcx, rdi)

int64_t rbx_1 = arg1[1]

if (rbx_1 == 0)
    return result

int64_t* rcx_1 = data_143ddb3f0

if (rcx_1 == 0)
    sub_140a750a0()
    rcx_1 = data_143ddb3f0

return (*(*rcx_1 + 0x30))(rcx_1, rbx_1)
