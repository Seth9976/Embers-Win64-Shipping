// 函数: sub_1426b2ca0
// 地址: 0x1426b2ca0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

if (arg1 != 0)
    void* rcx = *(arg1 + 0x10)
    
    if (((*(rcx + 0xcc) u>> 0x12).b & 1) == 0 && rcx != 0)
        sub_140bdf670()
    
    void* rbx_1 = *(arg1 + 0x20)
    
    if (rbx_1 != 0)
        void* rax_3 = sub_1427297d0()
        void* rcx_1 = *(rbx_1 + 0x10)
        int64_t rdx_1 = sx.q(*(rax_3 + 0x38))
        
        if (rdx_1.d s<= *(rcx_1 + 0x38) && *(*(rcx_1 + 0x30) + (rdx_1 << 3)) == rax_3 + 0x30)
            return *(rbx_1 + 0xb8)

return 0
