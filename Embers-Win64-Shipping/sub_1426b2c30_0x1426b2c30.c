// 函数: sub_1426b2c30
// 地址: 0x1426b2c30
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

if (arg1 != 0)
    void* rcx = *(arg1 + 0x10)
    
    if (((*(rcx + 0xcc) u>> 0x12).b & 1) == 0 && rcx != 0)
        sub_140bdf670()
    
    void* result = *(arg1 + 0x20)
    
    if (result != 0)
        void* rax_3 = sub_1427297d0()
        void* rdx_1 = *(result + 0x10)
        int64_t rax_4 = sx.q(*(rax_3 + 0x38))
        
        if (rax_4.d s<= *(rdx_1 + 0x38) && *(*(rdx_1 + 0x30) + (rax_4 << 3)) == rax_3 + 0x30)
            return result

return 0
