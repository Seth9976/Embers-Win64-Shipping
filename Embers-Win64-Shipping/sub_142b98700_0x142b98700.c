// 函数: sub_142b98700
// 地址: 0x142b98700
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t r8 = *(arg1 + 0x40)

if (r8 != 0)
    int64_t* i = r8 + ((sx.q(*(arg1 + 0x38)) - 1) << 3)
    int64_t* i_1 = i
    
    if (i u>= r8)
        do
            void* rdx_1 = *i_1
            
            if (*(rdx_1 + 8) == 0x756e6963)
                int16_t r9_1 = *(rdx_1 + 0xc)
                
                if (r9_1 == 3 && *(rdx_1 + 0xe) == 0xa)
                    *(arg1 + 0x88) = rdx_1
                    return 0
                
                if (r9_1 == 0 && *(rdx_1 + 0xe) == 4)
                    *(arg1 + 0x88) = rdx_1
                    return 0
            
            i_1 -= 8
        while (i_1 u>= r8)
        
        for (; i u>= r8; i -= 8)
            void* rax_3 = *i
            
            if (*(rax_3 + 8) == 0x756e6963)
                *(arg1 + 0x88) = rax_3
                return 0

return 0x26
