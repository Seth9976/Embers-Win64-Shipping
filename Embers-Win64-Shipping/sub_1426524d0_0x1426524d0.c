// 函数: sub_1426524d0
// 地址: 0x1426524d0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int32_t rbx_1

if (arg1[1].d != *(arg1 + 0x34))
    void* r11_1 = &arg1[7]
    void* r10_1 = *(r11_1 + 8)
    
    if (r10_1 != 0)
        r11_1 = r10_1
    
    rbx_1 = *(r11_1 + (((sx.q(*arg3) ^ sx.q(arg3[1])) & (sx.q(arg1[9].d) - 1)) << 2))

if (arg1[1].d == *(arg1 + 0x34) || rbx_1 == 0xffffffff)
label_14265256a:
    *arg2 = 0xffffffff
else
    int64_t rax_4 = *arg1
    
    while (true)
        int64_t rdi_2 = sx.q(rbx_1) << 6
        int32_t* rcx = rdi_2 + rax_4
        
        if (*rcx != *arg3 || rcx[1] != arg3[1])
            char rax_7 = sub_140d3e110(rcx)
            char rax_8
            
            if (rax_7 == 0)
                rax_8 = sub_140d3e110(arg3)
            
            if (rax_7 != 0 || rax_8 != 0)
                rax_4 = *arg1
                rbx_1 = *(rdi_2 + rax_4 + 0x38)
                
                if (rbx_1 == 0xffffffff)
                    goto label_14265256a
                
                continue
        
        *arg2 = rbx_1
        break

return arg2
