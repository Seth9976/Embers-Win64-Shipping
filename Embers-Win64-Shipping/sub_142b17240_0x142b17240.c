// 函数: sub_142b17240
// 地址: 0x142b17240
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int32_t rbx = arg3
int64_t r13 = *(arg1 + 0xe0)
int64_t r8 = sx.q(*(*(arg1 + 0xd0) + 8))

if (*(arg1 + 0xfc) != 0)
    r13 += sx.q((r8 * 3).d)

int64_t rbx_1

while (true)
    int32_t rax_2 = sub_142aa0b30(*(arg1 + 0xc8), arg2, rbx, 0)
    rbx_1 = sx.q(rax_2)
    
    if (rax_2 != 0)
        int32_t rcx_1 = (rbx_1 - 1).d
        uint32_t r9_2 = zx.d(*(sx.q(rcx_1) + arg2))
        int32_t rbp_1
        
        if (r9_2.b s< 0)
            int32_t arg_18 = rcx_1
            uint64_t rdx_2 = zx.q(sub_142a9be90(arg2, 0, &arg_18, r9_2, 0xfd))
            rbp_1 = rbx_1.d - arg_18
            
            if (sub_142a9f280(arg1, rdx_2) == 0)
                rbp_1 = neg.d(rbp_1)
        else
            rbp_1 = -1
            
            if (sub_142a9f280(arg1, zx.q(r9_2)) != 0)
                rbp_1 = 1
        
        if (rbp_1 s> 0)
            break
        
        char* rdi_1 = *(arg1 + 0xe8)
        char* r11_1 = nullptr
        
        if (r8 s> 0)
            int32_t* rsi_1 = *(arg1 + 0xd8)
            
            do
                int64_t r9_3 = sx.q(*rsi_1)
                
                if (r9_3.d != 0 && r11_1[r13] != 0xff && r9_3.d s<= rbx_1.d)
                    int32_t r8_3 = r9_3.d
                    char* rax_7 = rdi_1
                    
                    while (true)
                        char rdx_3 = *(rbx_1 - r9_3 - rdi_1 + arg2 + rax_7)
                        char rcx_5 = *rax_7
                        rax_7 = &rax_7[1]
                        
                        if (rdx_3 != rcx_5)
                            break
                        
                        r8_3 -= 1
                        
                        if (r8_3 s<= 0)
                            return zx.q(rbx_1.d)
                
                rdi_1 = &rdi_1[r9_3]
                r11_1 = &r11_1[1]
                rsi_1 = &rsi_1[1]
            while (r11_1 s< r8)
        
        rbx = rbx_1.d + rbp_1
        
        if (rbx_1.d != neg.d(rbp_1))
            continue
    
    return 0

return zx.q(rbx_1.d)
