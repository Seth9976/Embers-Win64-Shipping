// 函数: sub_1418e09f0
// 地址: 0x1418e09f0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int32_t rbx_1
int64_t rbp_1

if (arg1[1].d != *(arg1 + 0x34))
    void* r10_1 = arg1[8]
    void* r11_1 = &arg1[7]
    rbp_1 = sx.q(arg3[2].d)
    
    if (r10_1 != 0)
        r11_1 = r10_1
    
    rbx_1 = *(r11_1 + (((sx.q(arg1[9].d) - 1) & rbp_1) << 2))

if (arg1[1].d == *(arg1 + 0x34) || rbx_1 == 0xffffffff)
label_1418e0a81:
    *arg2 = 0xffffffff
else
    int64_t r15_1 = *arg1
    
    while (true)
        int64_t rdi_2 = sx.q(rbx_1) * 6
        
        if (rbp_1.d == *(r15_1 + (rdi_2 << 3) + 0x10))
            int64_t rax_2 = sx.q(*(r15_1 + (rdi_2 << 3) + 8))
            
            if (arg3[1].d == rax_2.d)
                int32_t rax_3
                
                if (rax_2.d != 0)
                    rax_3 = memcmp(*arg3, *(r15_1 + (rdi_2 << 3)), rax_2 * 0x18)
                
                if (rax_2.d == 0 || rax_3 == 0)
                    *arg2 = rbx_1
                    break
        
        rbx_1 = *(r15_1 + (rdi_2 << 3) + 0x28)
        
        if (rbx_1 == 0xffffffff)
            goto label_1418e0a81

return arg2
