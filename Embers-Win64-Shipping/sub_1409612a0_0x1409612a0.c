// 函数: sub_1409612a0
// 地址: 0x1409612a0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int32_t i = 0

if (*(arg1 + 0x128) s> 0)
    int64_t* rsi_1 = nullptr
    
    do
        void* result = *(rsi_1 + *(arg1 + 0x120))
        
        if (result != 0)
            void* rax_2 = sub_140985990()
            void* rdx = *(result + 0x10)
            int64_t rax_3 = sx.q(*(rax_2 + 0x38))
            
            if (rax_3.d s<= *(rdx + 0x38) && *(*(rdx + 0x30) + (rax_3 << 3)) == rax_2 + 0x30)
                int16_t* rdx_1
                
                if (arg2[1].d == 0)
                    rdx_1 = &data_142d40450
                else
                    rdx_1 = *arg2
                
                int16_t* const rcx_1
                
                if (*(result + 0x228) == 0)
                    rcx_1 = &data_142d40450
                else
                    rcx_1 = *(result + 0x220)
                
                if (sub_140a54510(rcx_1, rdx_1) == 0)
                    return result
        
        i += 1
        rsi_1 = &rsi_1[1]
    while (i s< *(arg1 + 0x128))

return nullptr
