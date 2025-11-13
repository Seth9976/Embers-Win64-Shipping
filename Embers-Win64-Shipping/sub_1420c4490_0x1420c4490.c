// 函数: sub_1420c4490
// 地址: 0x1420c4490
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int32_t result = &__return_addr
int32_t rdi = *(arg1 + 0x50)
int64_t var_38
int32_t var_30
int64_t var_28
int32_t result_1
int32_t zmm1

if (rdi != 0)
    void* rcx = *(arg1 + 0x48)
    var_38 = *(rcx + 4)
    var_30 = *(rcx + 0xc)
    var_28 = *(rcx + 4)
    result = *(rcx + 0xc)
    result_1 = result
    
    if (rdi != 1)
        int32_t rbp_1 = rdi - 1
        
        if (*(arg1 + 0x58) == 0)
            rdi = rbp_1
        
        int32_t rcx_1 = 0
        
        if (rdi s> 0)
            int32_t rbx_1
            
            do
                int32_t rax_1 = 0
                rbx_1 = rcx_1 + 1
                
                if (rcx_1 != rbp_1)
                    rax_1 = rbx_1
                
                result = sub_140ad3060(sx.q(rcx_1) * 0x2c + *(arg1 + 0x48), 
                    sx.q(rax_1) * 0x2c + *(arg1 + 0x48), &var_38, &var_28)
                rcx_1 = rbx_1
            while (rbx_1 s< rdi)
else
    int32_t zmm2 = data_143dbb1f8
    zmm1 = data_143dbb1fc
    int64_t zmm0 = data_143dbb200
    var_38.d = zmm2
    var_38:4.d = zmm1
    var_30 = zmm0.d
    var_28.d = zmm2
    var_28:4.d = zmm1
    result_1 = zmm0.d

zmm1 = var_28.d
int64_t temp0 = __minss_xmmss_memss(var_38.d.d, var_38:4.d)
int32_t temp0_1 = __maxss_xmmss_memss(zmm1, var_28:4.d)
int64_t temp0_2 = __minss_xmmss_memss(temp0.d, var_30)
int32_t temp0_3 = __maxss_xmmss_memss(temp0_1, result_1)
*arg2 = temp0_2.d
*arg3 = temp0_3
return result
