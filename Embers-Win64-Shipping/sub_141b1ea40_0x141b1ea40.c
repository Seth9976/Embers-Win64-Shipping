// 函数: sub_141b1ea40
// 地址: 0x141b1ea40
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void* rax = sub_141af0640(arg4)
int64_t* rbp = *(rax + 8)
int64_t* var_38
void** result = sub_141a4a790(arg5, &var_38, arg3, &arg3[4])
int64_t* rsi = var_38
int64_t rdi = 0
int32_t var_30
void* r8_1 = &rsi[sx.q(var_30)]
uint64_t r14_3 = (r8_1 - rsi + 7) u>> 3

if (rsi u> r8_1)
    r14_3 = 0

if (r14_3 != 0)
    do
        int64_t arg_18 = *rsi
        result = sub_140d3c6e0(&arg_18)
        int64_t* result_1 = result
        
        if (result != 0)
            result = sub_141a52510(rbp, result)
            
            if (result != 0 && ((zx.q(*(result[1] + 0x10)) u>> 0x1a).b & 1) != 0)
                void* rdx_5 = result[0xf]
                void* rcx_5 = *(arg1 + 8)
                
                if (rdx_5 != 0)
                    bool cond:0_1
                    
                    if (rcx_5 != 0)
                        result = *(rcx_5 + 0x10)
                        
                        if (result != 0)
                            int64_t rcx_8 = sx.q(*(rdx_5 + 0x38))
                            
                            if (rcx_8.d s<= result[7].d)
                                result = result[6]
                                cond:0_1 = result[rcx_8] != rdx_5 + 0x30
                                goto label_141b1eb53
                    else
                        cond:0_1 = (result[8].d & 0x2000000) != 0
                    label_141b1eb53:
                        
                        if (not(cond:0_1))
                            int64_t zmm0_1 = arg5[0x5a]
                            int64_t rdx_7 = *(rax + 0x18)
                            void** const var_48 = &data_1430579e0
                            int32_t var_50_1 = arg5[0x5b].d
                            char rax_3 = *(arg5 + 0x2dc)
                            int64_t* var_40_1 = rbp
                            int64_t var_58 = zmm0_1
                            sub_1405c5900(&arg5[0x1f], rdx_7, &var_48, result_1, rax_3, &var_58)
                            var_48 = &data_142d4ba10
                            result = sub_141a2b020(rbp, result_1)
                            int64_t r8_3 = *(arg1 + 8)
                            
                            if (result != r8_3)
                                result = sub_141a287f0(rbp, result_1, r8_3)
        
        rsi = &rsi[1]
        rdi += 1
    while (rdi != r14_3)

return result
