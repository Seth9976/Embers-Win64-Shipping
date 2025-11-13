// 函数: sub_14223bfc0
// 地址: 0x14223bfc0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

if (*(arg1 + 0x110) != 0)
    void* rax_1 = *(arg1 + 0x120)
    void* rcx = arg1 + 0x130
    
    if (rax_1 != 0)
        rcx = rax_1
    
    (*(*rcx + 0x10))(rcx)

if (*(arg1 + 0xd0) != 0)
    void* rax_3 = *(arg1 + 0xe0)
    void* rcx_1 = arg1 + 0xf0
    
    if (rax_3 != 0)
        rcx_1 = rax_3
    
    (*(*rcx_1 + 0x10))(rcx_1)

if (*(arg1 + 0x90) != 0)
    void* rax_5 = *(arg1 + 0xa0)
    void* rcx_2 = arg1 + 0xb0
    
    if (rax_5 != 0)
        rcx_2 = rax_5
    
    (*(*rcx_2 + 0x10))(rcx_2)

if (*(arg1 + 0x50) != 0)
    void* rax_7 = *(arg1 + 0x60)
    void* rcx_3 = arg1 + 0x70
    
    if (rax_7 != 0)
        rcx_3 = rax_7
    
    (*(*rcx_3 + 0x10))(rcx_3)

int64_t rcx_4 = *(arg1 + 0x20)

if (rcx_4 != 0)
    sub_140a74f90(rcx_4)

int64_t rcx_5 = *(arg1 + 0x10)

if (rcx_5 == 0)
    return 

return sub_140a74f90(rcx_5) __tailcall
