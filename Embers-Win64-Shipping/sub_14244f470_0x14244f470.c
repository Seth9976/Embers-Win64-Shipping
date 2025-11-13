// 函数: sub_14244f470
// 地址: 0x14244f470
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int32_t i = 0

if (*(arg1 + 0x148) s<= 0)
    return 

int64_t* rsi_1 = nullptr

do
    void* rbp_1 = *(rsi_1 + *(arg1 + 0x140))
    
    if (rbp_1 != 0)
        void* const rax_4
        
        if (arg2 == 0)
            rax_4 = nullptr
        else
            void* rax_1 = sub_14246e4e0()
            
            if (rax_1 == 0)
                rax_4 = nullptr
            else
                int64_t rax_2 = sx.q(*(rax_1 + 0x38))
                
                if (rax_2.d s> *(arg2 + 0x38) || *(*(arg2 + 0x30) + (rax_2 << 3)) != rax_1 + 0x30)
                    rax_4 = nullptr
                else
                    rax_4 = arg2
        
        void* rdx_1 = *(rbp_1 + 0x10)
        int64_t rax = sx.q(*(rax_4 + 0x38))
        
        if (rax.d s<= *(rdx_1 + 0x38) && *(*(rdx_1 + 0x30) + (rax << 3)) == rax_4 + 0x30)
            int32_t rcx_2 = *(arg1 + 0x148)
            int32_t rax_6 = rcx_2 - i
            
            if (rax_6 != 1)
                int64_t r9_1 = *(arg1 + 0x140)
                memmove(r9_1 + (sx.q(i) << 3), r9_1 + (sx.q(i + 1) << 3), (rax_6 - 1) << 3)
                rcx_2 = *(arg1 + 0x148)
            
            *(arg1 + 0x148) = rcx_2 - 1
            sub_1405c53d0(arg1 + 0x140)
            break
    
    i += 1
    rsi_1 = &rsi_1[1]
while (i s< *(arg1 + 0x148))
