// 函数: sub_140f14010
// 地址: 0x140f14010
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int32_t result

if (*(arg1 + 0x560) == 0)
label_140f14055:
    result = sub_140ab3dc0(sub_140d44910(arg1 + 0x538))
    
    if (result.b != 0)
        void* rdx = arg2[1]
        int64_t r8_1 = *arg2
        
        if (rdx != 0)
            *(rdx + 8) += 1
        
        int32_t rcx_3 = arg2[2].d
        int64_t var_18 = 0
        int32_t var_10_1 = 0
        int64_t rax_3 = *(arg1 + 0x538)
        *(arg1 + 0x538) = r8_1
        int64_t var_38_2 = rax_3
        int64_t* rax_4 = *(arg1 + 0x540)
        *(arg1 + 0x540) = rdx
        *(arg1 + 0x548) = rcx_3
        int32_t var_28_1 = rcx_3
        char var_20_1 = 1
        *(arg1 + 0x550) = 1
        sub_1407473e0(arg1 + 0x558, &var_18)
        result = sub_140745b20(&var_18)
        
        if (rax_4 != 0)
            result = rax_4[1].d
            rax_4[1].d -= 1
            
            if (result == 1)
                result = (**rax_4)(rax_4)
                int32_t rdi_1 = *(rax_4 + 0xc)
                *(rax_4 + 0xc) -= 1
                
                if (rdi_1 == 1)
                    return (*(*rax_4 + 8))(rax_4, zx.q(rdi_1))
else
    int64_t* rcx = *(arg1 + 0x558)
    
    if (rcx == 0)
        goto label_140f14055
    
    result = (*(*rcx + 0x28))(rcx)
    
    if (result.b == 0)
        goto label_140f14055

return result
