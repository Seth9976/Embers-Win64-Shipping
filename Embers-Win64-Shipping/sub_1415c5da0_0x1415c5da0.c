// 函数: sub_1415c5da0
// 地址: 0x1415c5da0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t rbx = 0
int32_t var_30 = arg2[1].d
int32_t var_24 = *(arg2 + 0x14)
int64_t var_38 = *arg2
int64_t var_2c = *(arg2 + 0xc)
int64_t rdx = 0
int64_t result

while (true)
    result = arg3 - &var_38 + (rdx << 2)
    
    if ((*(&var_38 + (rdx << 2))).d f> *(&var_2c + result))
        break
    
    if ((*(&var_2c + (rdx << 2))).d f< *(arg3 + (rdx << 2)))
        break
    
    rdx += 1
    
    if (rdx s>= 3)
        result = sx.q(arg2[5].d)
        
        if (result.d != 0)
            int64_t result_1 = result
            
            if (result.d s> 0)
                do
                    result = sub_1415c5da0(arg1, 
                        sx.q(*(arg2[4] + (rbx << 2))) * 0x38 + *(arg1 + 0x90), arg3, arg4)
                    rbx += 1
                while (rbx s< result_1)
        else
            int64_t* rax_4 = (sx.q(arg2[6].d) << 4) + *(arg1 + 0xa0)
            var_38 = 0
            int64_t rbp_1 = sx.q(rax_4[1].d)
            int64_t r14_1 = *rax_4
            int32_t var_30_1 = rbp_1.d
            
            if (rbp_1.d != 0)
                sub_140638750(&var_38, rbp_1.d, 0)
                memcpy(var_38, r14_1, (rbp_1 << 2).d)
            else
                var_2c.d = 0
            
            result = sub_14153e6f0(arg4, &var_38, arg3, arg1 + 0x28)
            int64_t rcx_5 = var_38
            
            if (rcx_5 != 0)
                return sub_140a74f90(rcx_5)
        
        break

return result
