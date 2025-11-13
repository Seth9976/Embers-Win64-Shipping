// 函数: sub_141df7ec0
// 地址: 0x141df7ec0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t r14 = *(arg1 + 0x20)
void* i = *(arg1 + 0x170)

for (void* rbp_1 = sx.q(*(arg1 + 0x178)) * 0xb8 + i; i != rbp_1; i += 0xb8)
    int64_t* rdi_1 = *(i + 0x50)
    
    if (rdi_1 != 0)
        void* const rsi_1 = rdi_1[4]
        void* rax_1
        int64_t rax_2
        void* rdx_1
        
        if (rsi_1 != 0)
            rax_1 = sub_14246bfb0()
            rdx_1 = *(rsi_1 + 0x10)
            rax_2 = sx.q(*(rax_1 + 0x38))
        
        if (rsi_1 == 0 || rax_2.d s> *(rdx_1 + 0x38)
                || *(*(rdx_1 + 0x30) + (rax_2 << 3)) != rax_1 + 0x30)
            rsi_1 = nullptr
        
        (*(*rdi_1 + 0x278))(rdi_1, r14, rsi_1)

return sub_141e0b910(arg1 + 0x170, 0) __tailcall
