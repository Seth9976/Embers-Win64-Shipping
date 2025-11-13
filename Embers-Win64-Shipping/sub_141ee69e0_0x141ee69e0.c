// 函数: sub_141ee69e0
// 地址: 0x141ee69e0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t* rcx = *(arg1 + 0xa0)

if (rcx != 0 && ((rcx[1].d u>> 4).b & 1) == 0)
    int64_t rax_4 = (*(*rcx + 0x150))(rcx)
    
    if (rax_4 != 0)
        return rax_4

void* rbx_1 = *(arg1 + 0x20)

if (rbx_1 != 0)
    void* rax_5 = sub_1425be5e0()
    void* rcx_1 = *(rbx_1 + 0x10)
    int64_t rdx_1 = sx.q(*(rax_5 + 0x38))
    
    if (rdx_1.d s<= *(rcx_1 + 0x38) && *(*(rcx_1 + 0x30) + (rdx_1 << 3)) == rax_5 + 0x30)
        return rbx_1

return 0
