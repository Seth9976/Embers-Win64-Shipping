// 函数: sub_141e5eaf0
// 地址: 0x141e5eaf0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int32_t i = 0

if (*(arg1 + 0x50) s> 0)
    int64_t* rsi_1 = nullptr
    
    do
        void* result = *(rsi_1 + *(arg1 + 0x48))
        
        if (result != 0)
            void* const rax_5
            
            if (arg2 == 0)
                rax_5 = nullptr
            else
                void* rax_2 = sub_14246e4e0()
                
                if (rax_2 == 0)
                    rax_5 = nullptr
                else
                    int64_t rax_3 = sx.q(*(rax_2 + 0x38))
                    
                    if (rax_3.d s> *(arg2 + 0x38)
                            || *(*(arg2 + 0x30) + (rax_3 << 3)) != rax_2 + 0x30)
                        rax_5 = nullptr
                    else
                        rax_5 = arg2
            
            void* rdx_1 = *(result + 0x10)
            int64_t rax_6 = sx.q(*(rax_5 + 0x38))
            
            if (rax_6.d s<= *(rdx_1 + 0x38) && *(*(rdx_1 + 0x30) + (rax_6 << 3)) == rax_5 + 0x30)
                return result
        
        i += 1
        rsi_1 = &rsi_1[1]
    while (i s< *(arg1 + 0x50))

return nullptr
