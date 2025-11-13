// 函数: ?clone@EnumC13Lines@@UEAA_NPEAPEAUEnumLines@@@Z
// 地址: 0x142bc60b0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

char* rbx = *arg1
int32_t result_1 = 0
char* rax = &rbx[1]
int32_t result

if (rax u> arg2)
label_142bc6159:
    result = 8
else
    uint32_t rbp_1 = zx.d(*rbx)
    rbx = rax
    
    if (rbp_1 == 0)
        *arg1 = rax
        return 0
    
    while (true)
        if (&rbx[2] u> arg2)
            goto label_142bc6159
        
        uint64_t rdi_1 = zx.q(*rbx)
        uint32_t i = zx.d(rbx[1])
        rbx = &rbx[2]
        void* rdi_2 = &rbx[rdi_1]
        
        if (rdi_2 u> arg2)
            goto label_142bc6159
        
        if (arg3 != 0)
            int32_t* rax_2 = arg3
            
            if (*(arg3 + 8) != 0)
                while (*rax_2 != i)
                    rax_2 = &rax_2[4]
                    
                    if (*(rax_2 + 8) == 0)
                        goto label_142bc6144
                
                result = (*(rax_2 + 8))(rbx, rdi_2, arg4)
                result_1 = result
                
                if (result != 0)
                    break
        
    label_142bc6144:
        rbx = rdi_2
        uint32_t temp0_1 = rbp_1
        rbp_1 -= 1
        
        if (temp0_1 == 1)
            result = result_1
            break

*arg1 = rbx
return result
