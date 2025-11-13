// 函数: sub_142bcd790
// 地址: 0x142bcd790
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int32_t rdi = 0
uint64_t rbx_1 = zx.q(*arg2 + 1)

if (rbx_1.d u>= 0x100)
label_142bcd842:
    *arg2 = 0
else
    while (true)
        rdi = 0
        
        if (rbx_1.d u< 0x100)
            char* rax_2 = (*(arg1 + 0x20))(zx.q(*(*(arg1 + 0x18) + (rbx_1 << 1))))
            int32_t i = *(arg1 + 0x28)
            uint64_t r9_1 = 0
            
            if (i != 0)
                do
                    char* rax_3 = *(*(arg1 + 0x30) + (r9_1 << 3))
                    
                    if (rax_3 != 0 && *rax_3 == *rax_2)
                        int64_t r8_2 = rax_2 - rax_3
                        uint32_t j
                        uint32_t rdx
                        
                        do
                            rdx = zx.d(*rax_3)
                            j = zx.d(rax_3[r8_2])
                            
                            if (rdx != j)
                                break
                            
                            rax_3 = &rax_3[1]
                        while (j != 0)
                        
                        if (rdx - j == 0)
                            rdi = r9_1.d
                            break
                    
                    r9_1 = zx.q(r9_1.d + 1)
                while (r9_1.d u< i)
        
        if (rdi != 0)
            *arg2 = rbx_1.d
            break
        
        rbx_1 = zx.q(rbx_1.d + 1)
        
        if (rbx_1.d u>= 0x100)
            goto label_142bcd842

return zx.q(rdi)
