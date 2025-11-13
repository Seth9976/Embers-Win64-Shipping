// 函数: sub_14266c170
// 地址: 0x14266c170
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

uint64_t result

if (data_143b5150d == 0 || data_143f71424 != 0)
    result.b = 0
else
    result.b = 1

if (result.b != 0)
    result = zx.q(*(arg1 + 0x8a))
    void* var_18
    
    if ((result.b & 4) != 0)
        int64_t* rdi_1 = *(arg1 + 0xa0)
        
        if (rdi_1 != 0)
            result = sub_140d21950(arg1, sub_14254cd20())
            uint64_t result_3 = result
            
            if (result != 0)
                int64_t rdx_2 = *rdi_1
                result = (*(rdx_2 + 0x150))(rdi_1, rdx_2)
                
                if (result != 0)
                    void* rsi_1 = *(result + 0x120)
                    
                    if (rsi_1 != 0)
                        void* rax_1 = sub_14269bba0()
                        void* rcx_2 = *(rsi_1 + 0x10)
                        result = sx.q(*(rax_1 + 0x38))
                        
                        if (result.d s<= *(rcx_2 + 0x38))
                            uint64_t result_2 = result
                            result = *(rcx_2 + 0x30)
                            
                            if (*(result + (result_2 << 3)) == rax_1 + 0x30)
                                char rax_3 = (*(*rdi_1 + 0x618))(rdi_1, arg1)
                                var_18 = rsi_1 + 0x248
                                void* var_10_1 = rsi_1 + 0x350
                                void** rcx_4 = &var_18
                                
                                if (rax_3 == 0)
                                    return sub_14266b610(rcx_4, arg1, result_3, 0)
                                
                                return sub_14266ce10(rcx_4, arg1, result_3, 0)
    else if ((result.b & 8) != 0)
        result = sub_140d21950(arg1, sub_14254cd20())
        int64_t* result_4 = result
        
        if (result != 0)
            int64_t* rcx_6 = *(arg1 + 0xa0)
            
            if (rcx_6 != 0)
                int64_t rdx_6 = *rcx_6
                result = (*(rdx_6 + 0x150))(rcx_6, rdx_6)
                
                if (result != 0)
                    void* rdi_2 = *(result + 0x120)
                    
                    if (rdi_2 != 0)
                        void* rax_5 = sub_14269bba0()
                        void* rdx_7 = *(rdi_2 + 0x10)
                        result = sx.q(*(rax_5 + 0x38))
                        
                        if (result.d s<= *(rdx_7 + 0x38))
                            uint64_t result_1 = result
                            result = *(rdx_7 + 0x30)
                            
                            if (*(result + (result_1 << 3)) == rax_5 + 0x30)
                                var_18 = rdi_2 + 0x248
                                void* var_10_2 = rdi_2 + 0x350
                                return sub_14266b610(&var_18, arg1, result_4, 0)

return result
