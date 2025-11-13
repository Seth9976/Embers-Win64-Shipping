// 函数: sub_14208d4c0
// 地址: 0x14208d4c0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int32_t i = 0

if (*(arg1 + 0x38) s> 0)
    int64_t* rsi_1 = nullptr
    
    do
        void* result = *(rsi_1 + *(arg1 + 0x30))
        
        if (result != 0)
            void* rax_2 = sub_1424cd1e0()
            void* rdx_1 = *(result + 0x10)
            int64_t rax_3 = sx.q(*(rax_2 + 0x38))
            
            if (rax_3.d s<= *(rdx_1 + 0x38) && *(*(rdx_1 + 0x30) + (rax_3 << 3)) == rax_2 + 0x30
                    && ((*(result + 0x68) u>> 2).b & 1) == 0)
                return result
        
        i += 1
        rsi_1 = &rsi_1[1]
    while (i s< *(arg1 + 0x38))

return nullptr
