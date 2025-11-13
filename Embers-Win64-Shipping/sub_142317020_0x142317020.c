// 函数: sub_142317020
// 地址: 0x142317020
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t rbp
rbp.b = 0
*arg4 = *arg2
int32_t i = 0
arg4[1].d = arg2[1].d

if (*(arg1 + 0x808) s<= 0)
    return 0

void** rdi_1 = nullptr

do
    void* rbx_1 = *(rdi_1 + *(arg1 + 0x800))
    
    if (rbx_1 != 0 && sub_14221b2f0(rbx_1) != 0 && sub_142216be0(rbx_1) != 0)
        int64_t rcx_2 = *(arg1 + 0x800)
        float arg_8 = -1f
        int64_t var_48
        
        if (j_sub_14226ea10(*(rdi_1 + rcx_2), arg2, &arg_8, &var_48) != 0)
            float zmm1 = arg_8
            
            if (rbp.b == 0 || not(zmm1 f>= *arg3))
                rbp.b = 1
                int64_t zmm0_1 = var_48
                *arg3 = zmm1
                *arg4 = zmm0_1
                int32_t var_40
                arg4[1].d = var_40
                
                if (zmm1 <= 9.99999975e-05f)
                    break
    
    i += 1
    rdi_1 = &rdi_1[1]
while (i s< *(arg1 + 0x808))

return zx.q(rbp.b)
