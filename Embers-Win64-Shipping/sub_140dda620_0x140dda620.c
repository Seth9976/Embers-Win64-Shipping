// 函数: sub_140dda620
// 地址: 0x140dda620
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

__builtin_memset(arg1, 0, 0x18)
*(arg1 + 0x18) = *arg2
*(arg1 + 0x20) = 0
*(arg1 + 0x24) = *(*arg2 + 0x18)
int64_t* rcx = *arg2
bool cond:0 = (*(*rcx + 0x10))(rcx) == 0
*(arg1 + 0x29) = 0
*(arg1 + 0x28) = cond:0
int64_t* rbx_1 = arg2[1]

if (rbx_1 != 0)
    rbx_1[1].d -= 1
    
    if (rbx_1[1].d == 1)
        (**rbx_1)(rbx_1)
        int32_t temp1_1 = *(rbx_1 + 0xc)
        *(rbx_1 + 0xc) -= 1
        
        if (temp1_1 == 1)
            (*(*rbx_1 + 8))(rbx_1, 1)

return arg1
