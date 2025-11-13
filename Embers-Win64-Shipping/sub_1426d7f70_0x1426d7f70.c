// 函数: sub_1426d7f70
// 地址: 0x1426d7f70
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void* rsi = *(arg1 + 0x58)

if (rsi != 0)
    int64_t* rsi_1 = *(rsi + 0x120)
    
    if (rsi_1 != 0)
        void* rax_1 = sub_14269bba0()
        void* rdx_1 = rsi_1[2]
        int64_t rax_2 = sx.q(*(rax_1 + 0x38))
        
        if (rax_2.d s<= *(rdx_1 + 0x38) && *(*(rdx_1 + 0x30) + (rax_2 << 3)) == rax_1 + 0x30)
            if (sub_140d3e110(arg1 + 0x34) != 0)
                void* rax_5 = sub_140d3c6e0(arg1 + 0x34)
                
                if (rax_5 != 0)
                    void* rax_7 = sub_140d21950(rax_5, sub_142548ca0())
                    
                    if (rax_7 != 0)
                        int64_t rdx_3 = *rax_7
                        int64_t rax_8 = (*(rdx_3 + 0x10))(rax_7, rdx_3)
                        int64_t r8_2 = *rax_7
                        void var_18
                        return (*(*rsi_1 + 0x2b0))(rsi_1, rax_8, 
                            (*(r8_2 + 0x18))(rax_7, &var_18, r8_2), &data_143dbb1f8)
            
            return rsi_1[5]

return 0
