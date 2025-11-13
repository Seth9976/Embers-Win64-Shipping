// 函数: sub_140f46cf0
// 地址: 0x140f46cf0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int32_t* rbx = *(arg1 + 0x18)

if (rbx[4] != 0)
    int64_t* rcx = *(rbx + 8)
    
    if (rcx != 0 && (*(*rcx + 0x28))(rcx) != 0)
        int64_t* rcx_1
        
        if (rbx[4] == 0)
            rcx_1 = nullptr
        else
            rcx_1 = *(rbx + 8)
        
        *rbx = (*(*rcx_1 + 0x48))(rcx_1)

int64_t* rcx_2 = *(arg1 + 0x10)
(*(*rcx_2 + 0x10))(rcx_2, arg2, zx.q(*rbx))
return arg2
