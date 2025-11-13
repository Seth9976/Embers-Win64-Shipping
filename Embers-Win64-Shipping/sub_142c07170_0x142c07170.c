// 函数: sub_142c07170
// 地址: 0x142c07170
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int32_t rbx = *(arg1 + 0x38)
int32_t result = sub_142bf7b30(*(arg1 + 0x3c))
int32_t rcx_2 = rbx & 0xfffffffe

if (rcx_2 != 4)
    if (rcx_2 == 6 && rbx != rcx_2)
    label_142c071bf:
        int32_t rbp_1 = *(arg1 + 0x60)
        int32_t rdi_1 = 0
        
        if (*(arg1 + 0x1c) != 1)
            if (rbp_1 != 0)
                uint64_t rbx_2 = 0
                
                do
                    rbx_2 = zx.q(rbx_2.d + 1)
                    
                    if (rbx_2.d u>= rbp_1)
                        break
                while ((*(*(arg1 + 0x70) + rbx_2 * 0x14 + 0x10) u>> 7 & 1) != 0)
                
                if (rbp_1 != 0)
                    do
                        sub_142bf57a0(arg1, rdi_1, rbx_2.d)
                        rdi_1 = rbx_2.d
                        
                        do
                            rbx_2 = zx.q(rbx_2.d + 1)
                            
                            if (rbx_2.d u>= *(arg1 + 0x60))
                                break
                        while ((*(*(arg1 + 0x70) + rbx_2 * 0x14 + 0x10) u>> 7 & 1) != 0)
                    while (rdi_1 u< rbp_1)
        else if (rbp_1 != 0)
            uint64_t rbx_1 = 0
            
            do
                rbx_1 = zx.q(rbx_1.d + 1)
                
                if (rbx_1.d u>= rbp_1)
                    break
            while ((*(*(arg1 + 0x70) + rbx_1 * 0x14 + 0x10) u>> 7 & 1) != 0)
            
            if (rbp_1 != 0)
                do
                    if (rbx_1.d - rdi_1 u>= 2)
                        sub_142bf5140(arg1, rdi_1, rbx_1.d)
                    
                    sub_142bf57a0(arg1, rdi_1, rbx_1.d)
                    rdi_1 = rbx_1.d
                    
                    do
                        rbx_1 = zx.q(rbx_1.d + 1)
                        
                        if (rbx_1.d u>= *(arg1 + 0x60))
                            break
                    while ((*(*(arg1 + 0x70) + rbx_1 * 0x14 + 0x10) u>> 7 & 1) != 0)
                while (rdi_1 u< rbp_1)
        
        result = sub_142bf5780(arg1)
        *(arg1 + 0x38) ^= 1
else if (rbx != result)
    if (result == 0)
        return result
    
    goto label_142c071bf

return result
