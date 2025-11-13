// 函数: sub_1425e5380
// 地址: 0x1425e5380
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void* const result = sub_1425e1be0()

if (result != 0)
    int64_t rbx_1 = *(result + 0x18)
    int64_t* rdi_1 = *arg2
    int64_t rax_1 = (*(*rdi_1 + 0x18))(rdi_1)
    char rax_4
    
    if (rax_1 != 0)
        rax_4 = sub_140d3e170((*(*rdi_1 + 0x20))(rdi_1), 0, 1)
    
    if (rax_1 == 0 || rax_4 == 0)
        result = nullptr
        int64_t arg_18 = 0
    else
        result = *(sub_140d3c6e0((*(*rdi_1 + 0x20))(rdi_1)) + 0x18)
    
    if (result == rbx_1)
        int64_t* rcx_5 = *arg2
        int64_t rax_9 = (*(*rcx_5 + 0x18))(rcx_5)
        return (*(arg1 + 0x10))(sx.q(*(arg1 + 0x18)) + *(arg1 + 8), rax_9, arg2)

return result
