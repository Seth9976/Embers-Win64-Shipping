// 函数: sub_1420c40f0
// 地址: 0x1420c40f0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int32_t rdi = *(arg1 + 0x50)
float var_38[0x4]
float var_28[0x4]

if (rdi != 0)
    void* rax_1 = *(arg1 + 0x48)
    var_38 = *(rax_1 + 4)
    var_28 = *(rax_1 + 4)
    
    if (rdi != 1)
        int32_t rbp_1 = rdi - 1
        
        if (*(arg1 + 0x58) == 0)
            rdi = rbp_1
        
        int32_t rcx = 0
        
        if (rdi s> 0)
            int32_t rbx_1
            
            do
                int32_t rax_2 = 0
                rbx_1 = rcx + 1
                
                if (rcx != rbp_1)
                    rax_2 = rbx_1
                
                sub_140ad2ac0(sx.q(rcx) * 0x38 + *(arg1 + 0x48), 
                    sx.q(rax_2) * 0x38 + *(arg1 + 0x48), &var_38, &var_28)
                rcx = rbx_1
            while (rbx_1 s< rdi)
else
    __builtin_memset(&var_38, 0, 0x20)

float temp0[0x4] = __minss_xmmss_memss(var_38[0][0], var_38[1])
float temp0_1[0x4] = __maxss_xmmss_memss(var_28[0][0], var_28[1])
float temp0_2[0x4] = __minss_xmmss_memss(temp0[0], var_38[2])
float temp0_3[0x4] = __maxss_xmmss_memss(temp0_1[0], var_28[2])
float result[0x4] = __minss_xmmss_memss(temp0_2[0], var_38[3])
float temp0_4[0x4] = __maxss_xmmss_memss(temp0_3[0], var_28[3])
*arg2 = result[0]
*arg3 = temp0_4[0]
return result
