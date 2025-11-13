// 函数: sub_1406281b0
// 地址: 0x1406281b0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

*arg2 = 0

if (arg1 != 0)
    void* rax_1 = sub_1424890f0()
    void* rdx = *(arg1 + 0x10)
    int64_t rax_2 = sx.q(*(rax_1 + 0x38))
    
    if (rax_2.d s<= *(rdx + 0x38) && *(*(rdx + 0x30) + (rax_2 << 3)) == rax_1 + 0x30)
        void* rcx_1 = *(arg1 + 0x280)
        
        if (rcx_1 != 0 && sub_140d23de0(rcx_1) != 0)
            *arg2 = 1
        
        return *(arg1 + 0x280)

return 0
