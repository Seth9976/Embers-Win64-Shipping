// 函数: sub_141a30b70
// 地址: 0x141a30b70
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

arg1[2].b &= 0xfe
void** rbx = arg2
arg1[2].b |= 2
char rax = arg2[2].b

if ((rax & 1) != 0)
    int64_t* rcx = arg2
    
    if ((rax & 2) == 0)
        rcx = *arg2
    
    int64_t* rsi_1 = *((*(*rcx + 8))(rcx) + 0xb8)
    int64_t* rax_3 = sub_141a62bd0(arg1, rsi_1[1].d, *(rsi_1 + 0xc))
    int64_t r8_2 = *rsi_1
    (*(r8_2 + 0x18))(rsi_1, rax_3, r8_2)
    
    if ((rbx[2].b & 2) == 0)
        rbx = *rbx
    
    (*(*rsi_1 + 0xa8))(rsi_1, rax_3, rbx, 1)

return arg1
