// 函数: sub_141b1f070
// 地址: 0x141b1f070
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

TEB* gsbase

if (data_143f2c7a8 s> *(0x14 + *(gsbase->ThreadLocalStoragePointer + (zx.q(data_14401b1a0) << 3))))
    _Init_thread_header(&data_143f2c7a8)
    
    if (data_143f2c7a8 == 0xffffffff)
        data_143f2c780 = 0
        __builtin_memset(&data_143f2c788, 0, 0x20)
        atexit(sub_142cf5640)
        _Init_thread_footer(&data_143f2c7a8)

int64_t arg_8
sub_141b21260(&data_143f2c780, &arg_8, arg1 + 8)
int64_t* var_68
sub_141a4a790(arg4, &var_68, arg3, &arg3[4])
int64_t* rsi = var_68
int32_t result_1
int64_t result = sx.q(result_1)
void* r12 = &rsi[result]

if (rsi != r12)
    int64_t rbx_1 = arg_8
    
    do
        int64_t arg_18 = *rsi
        result = sub_140d3c6e0(&arg_18)
        int64_t* result_3 = result
        
        if (result != 0)
            void* rax_3 = sub_142577430()
            void* rdx_4 = result_3[2]
            result = sx.q(*(rax_3 + 0x38))
            
            if (result.d s<= *(rdx_4 + 0x38))
                int64_t result_2 = result
                result = *(rdx_4 + 0x30)
                
                if (*(result + (result_2 << 3)) == rax_3 + 0x30 && *(arg1 + 8) s>= 0)
                    int32_t rbp_1 = *(arg1 + 8)
                    result = (*(*result_3 + 0x6a0))(result_3)
                    
                    if (rbp_1 s< result.d)
                        void* rax_6 = (*(*result_3 + 0x548))(result_3, zx.q(rbp_1))
                        
                        if (rax_6 == 0)
                        label_141b1f1ca:
                            int64_t zmm0_1 = arg4[0x5a]
                            void* var_48_1 = rax_6
                            void** const var_58 = &data_143058500
                            int32_t var_50_1 = *(arg1 + 8)
                            int32_t var_70_1 = arg4[0x5b].d
                            char rax_11 = *(arg4 + 0x2dc)
                            int64_t var_78 = zmm0_1
                            result = sub_1405c5900(&arg4[0x1f], rbx_1, &var_58, result_3, rax_11, 
                                &var_78)
                            int64_t r8_4 = *(arg1 + 0x10)
                            
                            if (r8_4 != rax_6)
                                result = (*(*result_3 + 0x550))(result_3, zx.q(*(arg1 + 8)), r8_4)
                        else
                            void* rax_7 = sub_142542e20()
                            void* rcx_4 = *(rax_6 + 0x10)
                            int64_t rdx_6 = sx.q(*(rax_7 + 0x38))
                            
                            if (rdx_6.d s> *(rcx_4 + 0x38)
                                    || *(*(rcx_4 + 0x30) + (rdx_6 << 3)) != rax_7 + 0x30)
                                goto label_141b1f1ca
                            
                            result = *(rax_6 + 0xd0)
                            
                            if (result == 0 || result != *(arg1 + 0x10))
                                goto label_141b1f1ca
        
        rsi = &rsi[1]
    while (rsi != r12)

return result
