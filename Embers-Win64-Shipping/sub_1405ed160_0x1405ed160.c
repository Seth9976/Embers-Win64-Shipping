// 函数: sub_1405ed160
// 地址: 0x1405ed160
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t* r8 = *arg2
int64_t* rcx = *arg1

if (rcx != r8)
    if (r8 != 0)
        (*(*r8 + 8))(r8)
        rcx = *arg1
    
    if (rcx != 0)
        (*(*rcx + 0x10))(rcx)
    
    *arg1 = *arg2

return arg1
