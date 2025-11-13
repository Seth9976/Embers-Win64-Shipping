// 函数: sub_141a99540
// 地址: 0x141a99540
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t* rcx_4

if (arg1 == 0x268)
    rcx_4 = nullptr
else
    void* rdi_1 = *(arg1 - 0x248)
    
    if (rdi_1 != 0)
        void* rax_1 = sub_142591550()
        void* rdx_1 = *(rdi_1 + 0x10)
        int64_t rax_2 = sx.q(*(rax_1 + 0x38))
        
        if (rax_2.d s<= *(rdx_1 + 0x38) && *(*(rdx_1 + 0x30) + (rax_2 << 3)) == rax_1 + 0x30)
            void* r8_1
            r8_1.b = 1
            sub_141f3e990(*(arg1 - 0x248), 1, r8_1.b)
    
    rcx_4 = *(arg1 - 0x28)
    
    if (rcx_4 == 0)
        int64_t* rax_5 = (*(*(arg1 - 0x268) + 0x300))(arg1 - 0x268)
        *(arg1 - 0x28) = rax_5
        jump(*(*rax_5 + 0xb8))

jump(*(*rcx_4 + 0xb8))
