// 函数: sub_142c41f40
// 地址: 0x142c41f40
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int32_t i = *(arg1 + 0x60)
int64_t rbp = *(arg1 + 0x70)
int64_t r11 = 0x14
int32_t r10 = 0
int32_t rsi = 0
int32_t r15 = 0
uint64_t rbx = 0
int32_t r9 = 1
int32_t rax_2

if (i == 0)
    if (0 != i)
        return 
    
    do
        char rcx = *(sx.q(r11.d) + 0x1436a5488)
        
        if (rcx == 0)
            return 
        
        rax_2 = zx.d(rcx) - 1
    label_142c41fb8:
        int64_t rax_3 = sx.q(rax_2)
        char rcx_1 = lookup_table_1436a5388[0x80 + rax_3]
        r11 = sx.q(lookup_table_1436a5388[0x50 + rax_3])
        
        if (rcx_1 != 0 && sx.d(rcx_1) - 1 u<= 0xb)
            switch (rcx_1)
                case 1
                    rbx = zx.q(rsi - 1)
                    
                    if (r10 u< rsi)
                    label_142c42183:
                        *(zx.q(r10) * 0x14 + 0xf + rbp) = r9.b << 4
                        
                        if (zx.q(rsi - r10) != 1)
                            break
                    
                    r9 += 1
                    
                    if (r9 == 0x10)
                        r9 = 1
                case 2
                    rsi = (rbx + 1).d
                case 3
                    if (r15 == 2)
                        rbx = zx.q(rsi - 1)
                        
                        if (r10 u< rsi)
                        label_142c422a0:
                            *(rbp + 0xf + zx.q(r10) * 0x14) = r9.b << 4 | 1
                            
                            if (zx.q(rsi - r10) != 1)
                                break
                        
                        r9 += 1
                        
                        if (r9 == 0x10)
                            r9 = 1
                    else if (r15 == 3)
                        rbx = zx.q(rsi - 1)
                        
                        if (r10 u< rsi)
                        label_142c42250:
                            *(rbp + 0xf + zx.q(r10) * 0x14) = r9.b << 4 | 2
                            
                            if (zx.q(rsi - r10) != 1)
                                break
                        
                        r9 += 1
                        
                        if (r9 == 0x10)
                            r9 = 1
                case 4
                    r15 = 2
                    rsi = (rbx + 1).d
                case 5
                    rbx = zx.q(rsi - 1)
                    
                    if (r10 u< rsi)
                    label_142c421e0:
                        *(rbp + 0xf + zx.q(r10) * 0x14) = r9.b << 4 | 1
                        
                        if (zx.q(rsi - r10) != 1)
                            break
                    
                    r9 += 1
                    
                    if (r9 == 0x10)
                        r9 = 1
                case 8
                    rsi = (rbx + 1).d
                    
                    if (r10 u< rsi)
                    label_142c42020:
                        *(rbp + 0xf + zx.q(r10) * 0x14) = r9.b << 4 | 2
                        
                        if (zx.q(rsi - r10) != 1)
                            break
                    
                    r9 += 1
                    
                    if (r9 == 0x10)
                        r9 = 1
                case 9
                    r15 = 3
                    rsi = (rbx + 1).d
                case 0xa
                    rsi = rbx.d
                    rbx = zx.q(rbx.d - 1)
                    
                    if (r10 u< rsi)
                    label_142c42071:
                        *(rbp + 0xf + zx.q(r10) * 0x14) = r9.b << 4
                        
                        if (zx.q(rsi - r10) != 1)
                            break
                    
                    r9 += 1
                    
                    if (r9 == 0x10)
                        r9 = 1
                case 0xb
                    rsi = rbx.d
                    rbx = zx.q(rbx.d - 1)
                    
                    if (r10 u< rsi)
                    label_142c42130:
                        *(rbp + 0xf + zx.q(r10) * 0x14) = r9.b << 4 | 2
                        
                        if (zx.q(rsi - r10) != 1)
                            break
                    
                    r9 += 1
                    
                    if (r9 == 0x10)
                        r9 = 1
                case 0xc
                    rsi = rbx.d
                    rbx = zx.q(rbx.d - 1)
                    
                    if (r10 u< rsi)
                    label_142c420d0:
                        *(rbp + 0xf + zx.q(r10) * 0x14) = r9.b << 4 | 1
                        
                        if (zx.q(rsi - r10) != 1)
                            break
                    
                    r9 += 1
                    
                    if (r9 == 0x10)
                        r9 = 1
        
        int32_t rax_27 = 0
        
        if (lookup_table_1436a5388[0xb0 + r11] != 6)
            rax_27 = r10
        
        rbx = zx.q(rbx.d + 1)
        r10 = rax_27
    while (rbx.d == i)

int64_t rcx_19 = sx.q(r11.d)
int64_t r11_1 = sx.q((r11 * 2).d)

if (lookup_table_1436a5388[0xd8 + rcx_19] == 7)
    r10 = rbx.d

int32_t rdx_17 = sx.d(*(rcx_19 + 0x1436a5018))

if (rdx_17 s> 0)
    char r8_9 = *(r11_1 + &data_1436a4fc0)
    char rax_29 = *(rbp + rbx * 0x14 + 0x12)
    
    if (r8_9 u<= rax_29 && rax_29 u<= *(r11_1 + 0x1436a4fc1))
        rdx_17 = zx.d(rax_29) - zx.d(r8_9)

rax_2 = sx.d(*(sx.q(rdx_17) + sx.q(*((rcx_19 << 1) + 0x1436a5040)) + &data_1436a5090))
goto label_142c41fb8
