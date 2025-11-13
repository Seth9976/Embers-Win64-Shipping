// 函数: sub_141e4b4b0
// 地址: 0x141e4b4b0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void* const* result = &__return_addr
int32_t i = 0

if (arg2[1].d s> 0)
    void* rbx_1 = nullptr
    int64_t rsi_1 = 0
    
    do
        void* r8 = *arg2
        int64_t rax = sx.q(*(rbx_1 + r8))
        result = *(arg1 + 0xc8)
        
        if (sx.q(arg3) != rsi_1)
            void* rdx_1 = r8 + 0x20 + rbx_1
            
            if (arg5 != 0)
                *rdx_1 = 0xfffffffe
                *(rdx_1 + 8) = 0xfffffffe
            
            int64_t* rcx_1 = result[rax * 3]
            
            if (rcx_1[0x30].d s> 0)
                result = sub_141e4b260(rcx_1, rdx_1, arg4 + 0x48, r8 + 0x14 + rbx_1, 
                    r8 + 0x18 + rbx_1, *(arg4 + 0x8c), 1)
        
        i += 1
        rsi_1 += 1
        rbx_1 += 0x40
    while (i s< arg2[1].d)

return result
