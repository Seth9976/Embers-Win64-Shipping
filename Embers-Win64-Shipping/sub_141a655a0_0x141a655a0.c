// 函数: sub_141a655a0
// 地址: 0x141a655a0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

if (arg1 != 0)
    void* rax_1 = sub_142452380()
    void* rdx_1 = *(arg1 + 0x10)
    int64_t rax_2 = sx.q(*(rax_1 + 0x38))
    
    if (rax_2.d s<= *(rdx_1 + 0x38) && *(*(rdx_1 + 0x30) + (rax_2 << 3)) == rax_1 + 0x30)
        int64_t rax_4 = *(arg1 + 0x130)
        
        if (rax_4 != 0)
            return rax_4
    
    void* rax_5 = sub_1425881f0()
    void* rcx_1 = *(arg1 + 0x10)
    int64_t rdx_2 = sx.q(*(rax_5 + 0x38))
    
    if (rdx_2.d s<= *(rcx_1 + 0x38) && *(*(rcx_1 + 0x30) + (rdx_2 << 3)) == rax_5 + 0x30)
        return arg1

return 0
