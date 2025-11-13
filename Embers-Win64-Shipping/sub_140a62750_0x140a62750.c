// 函数: sub_140a62750
// 地址: 0x140a62750
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t result = sub_140a720d0(arg1, 0)
int64_t rdi = arg1[4]

if (rdi != 0)
    int64_t* rcx = data_143ddb3f0
    
    if (rcx == 0)
        sub_140a750a0()
        rcx = data_143ddb3f0
    
    result = (*(*rcx + 0x30))(rcx, rdi)

int64_t rbx_1 = *arg1

if (rbx_1 == 0)
    return result

int64_t* rcx_1 = data_143ddb3f0

if (rcx_1 == 0)
    sub_140a750a0()
    rcx_1 = data_143ddb3f0

return (*(*rcx_1 + 0x30))(rcx_1, rbx_1)
