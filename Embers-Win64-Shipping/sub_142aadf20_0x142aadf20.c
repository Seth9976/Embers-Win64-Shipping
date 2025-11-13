// 函数: sub_142aadf20
// 地址: 0x142aadf20
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

if (arg1 == arg2)
    int64_t rax
    rax.b = 1
    return rax

void* rax_1 = __RTtypeid(arg2)
int32_t rax_3

if (__std_type_info_compare(__RTtypeid(arg1) + 8, rax_1 + 8) == 0
        && sub_142a45d30(arg1 + 0x190, arg2 + 0x190).b != 0 && *(arg1 + 0x294) == *(arg2 + 0x294))
    int64_t* rcx_4 = *(arg1 + 0x2a0)
    
    if (rcx_4 != 0)
        int64_t rdx_2 = *(arg2 + 0x2a0)
        
        if (rdx_2 != 0)
            rax_3 = sx.d((*(*rcx_4 + 8))(rcx_4, rdx_2))
            goto label_142aadfd1
    else
        rax_3.b = *(arg2 + 0x2a0) == 0
    label_142aadfd1:
        
        if (rax_3 != 0)
            int64_t* rdi_1 = *(arg1 + 0x170)
            int64_t* rbx_1 = *(arg2 + 0x170)
            
            if (rdi_1 == 0)
                rax_3.b = rbx_1 == 0
                return rax_3
            
            if (rbx_1 != 0)
                void* rax_6 = *rdi_1
                
                if (rax_6 == 0)
                label_142aae035:
                    
                    if (*rbx_1 == 0)
                    label_142aae03b:
                        
                        if (*rdi_1 == 0)
                            rax_6.b = 1
                            return rax_6
                    
                    return 0
                
                while (true)
                    void* rdx_3 = *rbx_1
                    
                    if (rdx_3 == 0)
                        break
                    
                    if (sub_142b35a30(rax_6, rdx_3).b == 0)
                        goto label_142aae035
                    
                    rax_6 = rdi_1[1]
                    rdi_1 = &rdi_1[1]
                    rbx_1 = &rbx_1[1]
                    
                    if (rax_6 == 0)
                        goto label_142aae035
                
                goto label_142aae03b

rax_3.b = 0
return rax_3
