// 函数: sub_140aade80
// 地址: 0x140aade80
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

if (*(arg2 + 0x160) != 0)
    void* rax_1 = *(arg2 + 0x170)
    void* rcx = arg2 + 0x180
    
    if (rax_1 != 0)
        rcx = rax_1
    
    (*(*rcx + 0x10))(rcx)

int64_t* rbx = *(arg2 + 0x148)

if (rbx != 0)
    int32_t rax_3 = *(rbx + 0xc)
    *(rbx + 0xc) -= 1
    
    if (rax_3 == 1 && rbx != 0)
        if ((*(rbx + 0x19) & rax_3.b) != 0)
            sub_140a74f90(*rbx)
        
        int64_t* rcx_2 = rbx[2]
        
        if (rcx_2 != 0)
            sub_140abfb60(rcx_2)
        
        j_sub_140a74f90(rbx)

EnterCriticalSection(arg1 + 0x1e8)
int64_t result = *(arg1 + 0x1d8)
*(arg2 + 0x1a0) = result
*(arg1 + 0x1e0) -= 1
*(arg1 + 0x1d8) = arg2

if (arg1 == -0x1e8)
    return result

return LeaveCriticalSection(arg1 + 0x1e8)
