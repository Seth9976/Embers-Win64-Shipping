// 函数: sub_142b8c810
// 地址: 0x142b8c810
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int32_t* rdx = arg1 + 0x23330

for (int32_t i = 0; i s< 0x820; i += 0x40)
    *rdx = i
    rdx = &rdx[1]

int32_t rbp = 0xa60
int32_t rdi_3 = ((*(arg1 + 0x23328) - 0x10000) s>> 0xb) + 0x840

if (*(arg1 + 0x23310) s> 0xa60)
    while (true)
        int32_t r9_1 = 0
        int64_t r11_1
        
        if (rdi_3 - 0x40 s>= 0)
            r11_1 = sx.q(rbp)
            
            while (true)
                int32_t r8_1 = 0x40
                void* rdx_1 = arg1 + 0x880 + (r11_1 << 2)
                void* rax_2 = arg1 + ((sx.q(r9_1) + 0x220) << 2)
                
                while (*rax_2 == *rdx_1)
                    if (*(rax_2 + 4) != *(rdx_1 + 4))
                        r8_1 -= 1
                        break
                    
                    if (*(rax_2 + 8) != *(rdx_1 + 8))
                        r8_1 -= 2
                        break
                    
                    if (*(rax_2 + 0xc) != *(rdx_1 + 0xc))
                        r8_1 -= 3
                        break
                    
                    rax_2 += 0x10
                    rdx_1 += 0x10
                    r8_1 -= 4
                    
                    if (r8_1 s<= 0)
                        break
                
                if (r8_1 == 0)
                    break
                
                r9_1 += 1
                
                if (r9_1 s> rdi_3 - 0x40)
                    goto label_142b8c8f3
        
        if (rdi_3 - 0x40 s< 0 || r9_1 s< 0)
        label_142b8c8f3:
            int64_t rbx_3 = sx.q(rbp)
            int32_t r8_2 = 0x3f
            int32_t r10_2 = rdi_3 - 0x3f
            void* r11_3 = arg1 + 0x880 + (rbx_3 << 2)
            
            while (true)
                int32_t rdx_2 = r8_2
                void* rcx_4 = r11_3
                
                if (r8_2 s> 0)
                    while (*((sx.q(r10_2) << 2) + 0x880 - r11_3 + arg1 + rcx_4) == *rcx_4)
                        rcx_4 += 4
                        rdx_2 -= 1
                        
                        if (rdx_2 s<= 0)
                            break
                
                if (rdx_2 != 0)
                    r8_2 -= 1
                    r10_2 += 1
                    
                    if (r8_2 s> 0)
                        continue
                    
                    goto label_142b8c96e
                
                if (r8_2 s<= 0)
                label_142b8c96e:
                    
                    if (rdi_3 s>= rbp)
                        *(arg1 + (rbx_3 s>> 6 << 2) + 0x23330) = rbp
                        rbp += 0x40
                        rdi_3 = rbp
                        break
                
                int32_t i_1 = 0x40 - r8_2
                rbp += r8_2
                *(arg1 + (rbx_3 s>> 6 << 2) + 0x23330) = rdi_3 - r8_2
                
                if (i_1 s> 0)
                    int64_t r9_6 = sx.q(rbp) + 0x220
                    int64_t r8_4 = sx.q(rdi_3) + 0x220
                    rdi_3 += i_1
                    rbp += i_1
                    void* r9_7 = arg1 + (r9_6 << 2)
                    void* r8_5 = arg1 + (r8_4 << 2)
                    
                    do
                        i_1 -= 1
                        *r8_5 = *r9_7
                        r8_5 += 4
                        r9_7 += 4
                    while (i_1 s> 0)
                
                break
        else
            rbp += 0x40
            *(arg1 + (r11_1 s>> 6 << 2) + 0x23330) = r9_1
        
        if (rbp s>= *(arg1 + 0x23310))
            break

void* rcx_5 = arg1 + 8
int64_t i_3 = 0x88
int64_t i_2

do
    int64_t rax_8 = sx.q(*(rcx_5 - 8))
    rcx_5 += 0x10
    *(rcx_5 - 0x18) = *(arg1 + (rax_8 s>> 6 << 2) + 0x23330)
    *(rcx_5 - 0x14) = *(arg1 + (sx.q(*(rcx_5 - 0x14)) s>> 6 << 2) + 0x23330)
    *(rcx_5 - 0x10) = *(arg1 + (sx.q(*(rcx_5 - 0x10)) s>> 6 << 2) + 0x23330)
    *(rcx_5 - 0xc) = *(arg1 + (sx.q(*(rcx_5 - 0xc)) s>> 6 << 2) + 0x23330)
    i_2 = i_3
    i_3 -= 1
while (i_2 != 1)
int32_t result = *(arg1 + (sx.q(*(arg1 + 0x23320)) s>> 6 << 2) + 0x23330)
*(arg1 + 0x23320) = result

if ((rdi_3.b & 3) != 0)
    void* rcx_8 = arg1 + ((sx.q(rdi_3) + 0x220) << 2)
    
    do
        rdi_3 += 1
        *rcx_8 = 0x3fffc
        rcx_8 += 4
    while ((rdi_3.b & 3) != 0)

*(arg1 + 0x23310) = rdi_3
return result
