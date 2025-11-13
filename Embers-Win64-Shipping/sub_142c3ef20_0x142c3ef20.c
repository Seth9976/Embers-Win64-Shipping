// 函数: sub_142c3ef20
// 地址: 0x142c3ef20
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void var_78
int64_t rax_1 = __security_cookie ^ &var_78
uint64_t rbx = 0
int32_t var_48 = arg3
int32_t rdi = 0
int32_t var_44 = arg2
int32_t var_40 = arg3
int64_t result

if (*(arg1 + 0x38) u<= 0)
label_142c3efa9:
    
    if (sub_142c419b0(arg1 + 0x30, &var_44, 2, arg4) != 0)
        result = 8
    else
        int32_t rdi_1 = 0
        
        if (*(arg1 + 0x48) u<= 0)
        label_142c3f009:
            
            if (sub_142c419b0(arg1 + 0x40, &var_44, 2, arg4) != 0)
            label_142c3f073:
                result = 0xb
            else
                if (*(arg1 + 0x28) u> 0)
                    do
                        if (sub_142c2ae00(arg4, zx.d(*(*(arg1 + 0x20) + (rbx << 3))), &var_48, 2, 
                                zx.d(*(arg1 + 0x2c))) != 0)
                            goto label_142c3f073_2
                        
                        rbx = zx.q(rbx.d + 1)
                    while (rbx.d u< *(arg1 + 0x28))
                
                if (sub_142c419b0(arg1 + 0x20, &var_44, 2, arg4) != 0)
                label_142c3f073_1:
                    result = 0xb
                else
                    result = 4
        else
            while (sub_142c2ae00(arg4, zx.d(*(*(arg1 + 0x40) + (zx.q(rdi_1) << 3))), &var_48, 2, 
                    zx.d(*(arg1 + 0x4c))) == 0)
                rdi_1 += 1
                
                if (rdi_1 u>= *(arg1 + 0x48))
                    goto label_142c3f009
            
        label_142c3f073_2:
            result = 0xb
else
    while (sub_142c2ae00(arg4, zx.d(*(*(arg1 + 0x30) + (zx.q(rdi) << 3))), &var_48, 2, 
            zx.d(*(arg1 + 0x3c))) == 0)
        rdi += 1
        
        if (rdi u>= *(arg1 + 0x38))
            goto label_142c3efa9
    
    result = 8

__security_check_cookie(rax_1 ^ &var_78)
return result
