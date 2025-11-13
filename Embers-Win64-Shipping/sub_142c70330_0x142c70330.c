// 函数: sub_142c70330
// 地址: 0x142c70330
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t rcx = *(arg1 + 0xc0)
int64_t* result

if (rcx == 0)
label_142c7039c:
    result.b = 0
else
    result = sub_142c52ff0(rcx)
    
    if (result == 0)
    label_142c7039c_1:
        result.b = 0
    else
        int64_t* rbx_1 = *result
        
        if (rbx_1 == 0)
        label_142c7039c_2:
            result.b = 0
        else
            while (true)
                void* rdi_1 = *rbx_1
                
                if (sub_142c70460(rdi_1 + 0x1a, *(arg2 + 0xd0)).d != 0
                        && zx.d(*(rdi_1 + 0x18)) == *(arg2 + 0x17c))
                    *(arg2 + 0x17c)
                    sub_142c64850(arg1, "Site %s:%d is pipeline blacklisted\n", *(arg2 + 0xd0), 
                        arg3)
                    result.b = 1
                    break
                
                rbx_1 = rbx_1[2]
                
                if (rbx_1 == 0)
                    goto label_142c7039c_2

return result
