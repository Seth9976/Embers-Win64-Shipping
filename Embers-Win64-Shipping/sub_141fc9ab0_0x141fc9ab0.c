// 函数: sub_141fc9ab0
// 地址: 0x141fc9ab0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

if (arg1[0xa9] == 0 && (*(*arg1 + 0x6a8))() != 0)
    void* rsi_1 = *((*(*arg1 + 0x150))(arg1) + 0x130)
    
    if (rsi_1 != 0)
        void var_40
        sub_142427eb0(&var_40)
        int32_t var_14
        int32_t var_14_1 = var_14 | 0x40
        int64_t* var_30_1 = arg1
        char var_18_1 = 1
        int64_t* rsi_2
        
        if (*(rsi_1 + 0x230) == 0)
            rsi_2 = sub_1425a0fd0()
        else
            void* rax_5 = sub_1425a0fd0()
            
            if (rax_5 == 0)
                rsi_2 = sub_1425a0fd0()
            else
                void* rdx_1 = *(rsi_1 + 0x230)
                int64_t rax_6 = sx.q(*(rax_5 + 0x38))
                
                if (rax_6.d s> *(rdx_1 + 0x38) || *(*(rdx_1 + 0x30) + (rax_6 << 3)) != rax_5 + 0x30
                        || rdx_1 == 0)
                    rsi_2 = sub_1425a0fd0()
                else
                    void* rax_8 = sub_1425a0fd0()
                    int64_t rax_9
                    
                    if (rax_8 != 0)
                        rsi_2 = *(rsi_1 + 0x230)
                        rax_9 = sx.q(*(rax_8 + 0x38))
                    
                    if (rax_8 == 0 || rax_9.d s> rsi_2[7].d
                            || *(rsi_2[6] + (rax_9 << 3)) != rax_8 + 0x30)
                        rsi_2 = nullptr
        
        int64_t r8_2 = *arg1
        int32_t var_50_1 = arg1[0xac].d
        int64_t var_58 = arg1[0xab]
        void var_4c
        int128_t* rax_12 = (*(r8_2 + 0x660))(arg1, &var_4c, r8_2)
        int64_t rdx_4 = *arg1
        void* result =
            sub_1420efae0((*(rdx_4 + 0x150))(arg1, rdx_4), rsi_2, &var_58, rax_12, &var_40)
        
        if (result != 0)
            int64_t r8_4 = *result
            (*(r8_4 + 0x6a8))(result, arg1, r8_4)
            int64_t rdx_7 = *result
            (*(rdx_7 + 0x6e8))(result, rdx_7)
            
            if ((*(result + 0x32) & 4) != 0)
                sub_141dd7200(result, 1)
            
            return result

return sub_14227b6f0(arg1)
