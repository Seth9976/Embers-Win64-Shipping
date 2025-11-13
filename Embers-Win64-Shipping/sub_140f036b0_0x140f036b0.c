// 函数: sub_140f036b0
// 地址: 0x140f036b0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void* rax_1

if (sub_140f053d0(arg1) != 0)
    rax_1 = *(arg1 + 0x600)
else
    rax_1 = *(arg1 + 0x5f8)

bool cond:1 = *(arg1 + 0x5b0) == 0
*arg2 = *(rax_1 + 0x6c0)

if (not(cond:1))
    int64_t* rcx = *(arg1 + 0x5a8)
    
    if (rcx != 0 && (*(*rcx + 0x28))(rcx) != 0)
        int64_t* rcx_1
        
        if (*(arg1 + 0x5b0) == 0)
            rcx_1 = nullptr
        else
            rcx_1 = *(arg1 + 0x5a8)
        
        *(arg1 + 0x598) = (*(*rcx_1 + 0x48))(rcx_1)

sub_140e15430()

if (*(arg1 + 0x598) != &data_143e24500)
    *(arg2 + 4) = *(arg2 + 4) * 0.850000024f
    *(arg2 + 0xc) = *(arg2 + 0xc) * 0.850000024f

return arg2
