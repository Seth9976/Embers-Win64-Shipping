// 函数: sub_1420f5ca0
// 地址: 0x1420f5ca0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void* i = *(arg1 + 0xa8)

for (void* rdi = i + sx.q(*(arg1 + 0xb0)) * 0x28; i != rdi; i += 0x28)
    int64_t* rcx = *(i + 8)
    
    if (rcx != 0)
        (*(*rcx + 0x10))(rcx, arg2)

return sub_140594850() __tailcall
