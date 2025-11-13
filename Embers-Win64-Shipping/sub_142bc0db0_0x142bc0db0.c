// 函数: sub_142bc0db0
// 地址: 0x142bc0db0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int32_t r11 = 0
int32_t arg_8 = 0
int32_t r9 = arg3
char* r10 = arg1
int32_t r13 = 0

if (arg4 != 0)
    *arg4 = 0

uint64_t r8 = 0
uint64_t rbx = 0
int32_t r14 = 0
int32_t rbp = 0
int32_t rdi = 0
int32_t rsi = 4

while (true)
    if (rsi != 0)
        r10 = &r10[1]
        
        if (r10 u>= arg2)
            break
    
    int32_t rdx_2 = zx.d(*r10) u>> rsi.b & 0xf
    rsi = 4 - rsi
    
    if (rdx_2 != 0xe)
        if (rdx_2 u> 9)
            if (rdx_2 == 0xa)
                while (true)
                    if (rsi != 0)
                        r10 = &r10[1]
                        
                        if (r10 u>= arg2)
                            goto label_142bc0f30
                    
                    rdx_2 = zx.d(*r10) u>> rsi.b & 0xf
                    rsi = 4 - rsi
                    
                    if (rdx_2 u>= 0xa)
                        break
                    
                    if (rdx_2 == 0 && r8.d == 0)
                        r14 -= 1
                        continue
                    
                    if (r8.d s< 0xccccccc && rdi s< 9)
                        rdi += 1
                        r8 = zx.q(rdx_2 + ((r8 * 5).d << 1))
            
            if (rdx_2 - 0xb u<= 1)
                while (true)
                    if (rsi != 0)
                        r10 = &r10[1]
                        
                        if (r10 u>= arg2)
                            goto label_142bc0f30
                    
                    int32_t r9_3 = zx.d(*r10) u>> rsi.b & 0xf
                    rsi = 4 - rsi
                    
                    if (r9_3 u>= 0xa)
                        r9 = arg3
                        
                        if (rdx_2 == 0xc)
                            rbx = zx.q(neg.d(rbx.d))
                        
                        break
                    
                    if (rbx.d s<= 0x3e8)
                        rbx = zx.q(r9_3 + ((rbx * 5).d << 1))
                    else
                        r13 = 1
            
            if (r8.d != 0)
                if (r13 == 0)
                    int32_t rbx_1 = rbx.d + r14 + r9
                    
                    if (arg4 == 0)
                        int32_t rbp_1 = rbp + rbx_1
                        int32_t rdi_2 = rdi - rbx_1
                        
                        if (rbp_1 s> 5)
                            r11 = 0x7fffffff
                        else if (rbp_1 s>= 0xfffffffb)
                            if (rbp_1 s< 0)
                                *(&data_143686718 - (sx.q(rbp_1) << 2))
                                rdi_2 += rbp_1
                                r8 = zx.q(divs.dp.d(sx.q(r8.d), 
                                    *(&data_143686718 - (sx.q(rbp_1) << 2))))
                            
                            if (rdi_2 != 0xa)
                                if (rdi_2 s> 0)
                                    goto label_142bc10b1
                                
                                int32_t r8_6 = r8.d * *(&data_143686718 - (sx.q(rdi_2) << 2))
                                
                                if (r8_6 s> 0x7fff)
                                    r11 = 0x7fffffff
                                else
                                    r11 = r8_6 << 0x10
                            else
                                rdi_2 = 9
                                r8 = zx.q(r8.d s/ 0xa)
                            label_142bc10b1:
                                int32_t rcx_12 = *(&data_143686718 + (sx.q(rdi_2) << 2))
                                
                                if (divs.dp.d(sx.q(r8.d), rcx_12) s<= 0x7fff)
                                    r11 = sub_142b91790(r8.d, rcx_12)
                    else
                        int32_t rdi_1 = rdi + rbp
                        int32_t rbx_2 = rbx_1 + rbp
                        
                        if (rdi_1 s> 5)
                            int32_t r10_1 = *(&data_143686718 + (sx.q(rdi_1 - 5) << 2))
                            
                            if (divs.dp.d(sx.q(r8.d), r10_1) s<= 0x7fff)
                                r11 = sub_142b91790(r8.d, r10_1)
                                *arg4 = rbx_2 - 5
                            else
                                r11 =
                                    sub_142b91790(r8.d, *(&data_143686718 + (sx.q(rdi_1 - 4) << 2)))
                                *arg4 = rbx_2 - 4
                        else if (r8.d s<= 0x7fff)
                            int32_t rax_12
                            int32_t rcx_6
                            
                            if (rbx_2 s> 0)
                                rax_12 = 5
                                
                                if (rbx_2 s< 5)
                                    rax_12 = rbx_2
                                
                                rcx_6 = rax_12 - rdi_1
                            
                            if (rbx_2 s<= 0 || rcx_6 s<= 0)
                                *arg4 = rbx_2 - rdi_1
                                r11 = r8.d << 0x10
                            else
                                int32_t rbx_5 = rbx_2 - rax_12
                                r8 = zx.q(r8.d * *(&data_143686718 + (sx.q(rcx_6) << 2)))
                                
                                if (r8.d s<= 0x7fff)
                                    *arg4 = rbx_5
                                    r11 = r8.d << 0x10
                                else
                                    *arg4 = rbx_5 + 1
                                    r11 = (r8.d s/ 0xa) << 0x10
                        else
                            r11 = sub_142b91790(r8.d, 0xa)
                            *arg4 = rbx_2 - rdi_1 + 1
                else if (rdx_2 != 0xc)
                    r11 = 0x7fffffff
            
            break
        
        if (r8.d s< 0xccccccc)
            if (rdx_2 == 0 && r8.d == 0)
                continue
            
            rbp += 1
            r8 = zx.q(rdx_2 + ((r8 * 5).d << 1))
        else
            r14 += 1
    else
        arg_8 = 1

label_142bc0f30:

if (arg_8 == 0)
    return zx.q(r11)

return zx.q(neg.d(r11))
