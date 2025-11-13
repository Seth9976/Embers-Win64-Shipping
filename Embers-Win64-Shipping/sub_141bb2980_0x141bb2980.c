// 函数: sub_141bb2980
// 地址: 0x141bb2980
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void* rbx = *(arg1 + 0x68)

if (rbx == 0)
    return zx.q(*(arg1 + 0x64))

if (*(rbx + 0xb8) != 0)
    int64_t* rcx = *(rbx + 0xb0)
    
    if (rcx != 0 && (*(*rcx + 0x28))(rcx) != 0)
        int64_t* rcx_1
        
        if (*(rbx + 0xb8) == 0)
            rcx_1 = nullptr
        else
            rcx_1 = *(rbx + 0xb0)
        
        (*(*rcx_1 + 0x48))(rcx_1)
        *(rbx + 0xa8) = arg2

return zx.q(int.d(fconvert.t(*(rbx + 0xa8))))
