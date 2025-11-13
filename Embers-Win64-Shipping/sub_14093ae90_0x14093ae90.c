// 函数: sub_14093ae90
// 地址: 0x14093ae90
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t arg_10 = arg2
int64_t arg_18 = 0
int64_t arg_20 = 0
int64_t var_48
int64_t* result = sub_140942250(arg1, &var_48, &arg_10, &arg_18, &arg_20)

if (arg_18 != 0)
    result = zx.q(*(arg1 + 0xc0))
    int64_t rdi_1 = var_48
    int128_t var_38 = zx.o(0)
    
    if (result.d != *(arg1 + 0xec))
        int32_t result_1 = sub_140b5ead0(rdi_1.d) + rdi_1:4.d
        void* r8_1 = arg1 + 0xf0
        void* rcx_1 = *(r8_1 + 8)
        result = sx.q(result_1)
        
        if (rcx_1 != 0)
            r8_1 = rcx_1
        
        int32_t i = *(r8_1 + (((sx.q(*(arg1 + 0x100)) - 1) & result) << 2))
        
        if (i != 0xffffffff)
            void* rdx_4 = *(arg1 + 0xb8)
            
            do
                int64_t i_1 = sx.q(i)
                result = i_1 << 5
                
                if (*(result + rdx_4) == rdi_1)
                    if (i != 0xffffffff)
                        int64_t* rdx_6 = rdx_4 + 8 + (i_1 << 5)
                        
                        if (&var_38 != rdx_6)
                            int64_t rax_2 = *rdx_6
                            *rdx_6 = 0
                            var_38.q = rax_2
                            sub_1405aeff0(&var_38:8, &rdx_6[1])
                        
                        result = sub_1409436a0(arg1 + 0xb8, i)
                        int64_t* rcx_5 = var_38.q
                        
                        if (rcx_5 != 0)
                            (*(*rcx_5 + 0x148))(rcx_5)
                            result = sub_140943780(arg1 + 0x108, var_48)
                        
                        void* rcx_7 = var_38:8.q
                        
                        if (rcx_7 != 0)
                            result = zx.q(*(rcx_7 + 8))
                            *(rcx_7 + 8) -= 1
                            
                            if (result.d == 1)
                                int64_t* rbx_1 = var_38:8.q
                                result = (**rbx_1)(rbx_1)
                                int32_t rdi_2 = *(rbx_1 + 0xc)
                                *(rbx_1 + 0xc) -= 1
                                
                                if (rdi_2 == 1)
                                    int64_t* rcx_9 = var_38:8.q
                                    return (*(*rcx_9 + 8))(rcx_9, zx.q(rdi_2))
                    
                    break
                
                i = *(result + rdx_4 + 0x18)
            while (i != 0xffffffff)

return result
