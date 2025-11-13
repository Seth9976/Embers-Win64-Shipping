// 函数: sub_1426b4660
// 地址: 0x1426b4660
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void* rcx = *(arg1 + 0x38)

if (rcx != 0)
    int64_t rax_1 = *(rcx + 0xa8)
    
    if (rax_1 != 0)
        return rax_1
    
    return sub_141ee69e0(rcx) __tailcall

void* rbx_1 = *(arg1 + 0x20)

if (rbx_1 != 0)
    void* rax_3 = sub_1425be5e0()
    void* rcx_2 = *(rbx_1 + 0x10)
    int64_t rdx_2 = sx.q(*(rax_3 + 0x38))
    
    if (rdx_2.d s<= *(rcx_2 + 0x38) && *(*(rcx_2 + 0x30) + (rdx_2 << 3)) == rax_3 + 0x30)
        return rbx_1

return 0
