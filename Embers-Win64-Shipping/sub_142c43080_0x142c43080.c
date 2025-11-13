// 函数: sub_142c43080
// 地址: 0x142c43080
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int32_t i = *(arg1 + 0x60)
int64_t rsi = *(arg1 + 0x70)
int64_t r11 = 0
uint64_t rbx = 0
uint64_t r9 = 0
int32_t rdx = 1
int32_t rax_2

if (i == 0)
    if (0 != i)
        return 
    
    do
        int16_t rcx = *((sx.q(r11.d) << 1) + &lookup_table_1436a5b48[0x118])
        
        if (rcx s<= 0)
            return 
        
        rax_2 = sx.d(rcx) - 1
    label_142c430f4:
        int64_t rax_3 = sx.q(rax_2)
        char rcx_1 = lookup_table_1436a5b48[0x80 + rax_3]
        r11 = sx.q(lookup_table_1436a5b48[0x48 + rax_3])
        
        if (rcx_1 != 0 && sx.d(rcx_1) - 3 u<= 7)
            switch (rcx_1)
                case 3
                    int32_t r10_9 = (r9 + 1).d
                    
                    if (rbx.d u< r10_9)
                    label_142c43290:
                        *(rsi + 0xf + rbx * 0x14) = rdx.b << 4 | 3
                        
                        if (zx.q(r10_9 - rbx.d) != 1)
                            break
                    
                    rdx += 1
                    
                    if (rdx == 0x10)
                        rdx = 1
                case 4
                    int32_t r10_7 = (r9 + 1).d
                    
                    if (rbx.d u< r10_7)
                    label_142c43240:
                        *(rsi + 0xf + rbx * 0x14) = rdx.b << 4 | 2
                        
                        if (zx.q(r10_7 - rbx.d) != 1)
                            break
                    
                    rdx += 1
                    
                    if (rdx == 0x10)
                        rdx = 1
                case 5
                    int32_t r10_3 = (r9 + 1).d
                    
                    if (rbx.d u< r10_3)
                    label_142c431a0:
                        *(rsi + 0xf + rbx * 0x14) = rdx.b << 4 | 3
                        
                        if (zx.q(r10_3 - rbx.d) != 1)
                            break
                    
                    rdx += 1
                    
                    if (rdx == 0x10)
                        rdx = 1
                case 6
                    int32_t rcx_14 = r9.d
                    r9 = zx.q(r9.d - 1)
                    
                    if (rbx.d u< rcx_14)
                    label_142c432d2:
                        *(rbx * 0x14 + 0xf + rsi) = rdx.b << 4
                        
                        if (zx.q(rcx_14 - rbx.d) != 1)
                            break
                    
                    rdx += 1
                    
                    if (rdx == 0x10)
                        rdx = 1
                case 7
                    int32_t r10_1 = (r9 + 1).d
                    
                    if (rbx.d u< r10_1)
                    label_142c43151:
                        *(rsi + 0xf + rbx * 0x14) = rdx.b << 4
                        
                        if (zx.q(r10_1 - rbx.d) != 1)
                            break
                    
                    rdx += 1
                    
                    if (rdx == 0x10)
                        rdx = 1
                case 8
                    int32_t r10_11 = r9.d
                    r9 = zx.q(r9.d - 1)
                    
                    if (rbx.d u< r10_11)
                    label_142c43320:
                        *(rsi + 0xf + rbx * 0x14) = rdx.b << 4 | 2
                        
                        if (zx.q(r10_11 - rbx.d) != 1)
                            break
                    
                    rdx += 1
                    
                    if (rdx == 0x10)
                        rdx = 1
                case 9
                    int32_t r10_13 = r9.d
                    r9 = zx.q(r9.d - 1)
                    
                    if (rbx.d u< r10_13)
                    label_142c43361:
                        *(rsi + 0xf + rbx * 0x14) = rdx.b << 4 | 3
                        
                        if (zx.q(r10_13 - rbx.d) != 1)
                            break
                    
                    rdx += 1
                    
                    if (rdx == 0x10)
                        rdx = 1
                case 0xa
                    int32_t r10_5 = (r9 + 1).d
                    
                    if (rbx.d u< r10_5)
                    label_142c431f0:
                        *(rsi + 0xf + rbx * 0x14) = rdx.b << 4 | 1
                        
                        if (zx.q(r10_5 - rbx.d) != 1)
                            break
                    
                    rdx += 1
                    
                    if (rdx == 0x10)
                        rdx = 1
        
        if (sx.d(lookup_table_1436a5b48[0xb8 + r11]) == 1)
            rbx = 0
        
        r9 = zx.q(r9.d + 1)
    while (r9.d == i)

int64_t rcx_22 = sx.q(r11.d)
int64_t r11_1 = sx.q((r11 * 2).d)
int32_t r8_9 = sx.d(*(rcx_22 + 0x1436a5618))

if (lookup_table_1436a5b48[0xe8 + rcx_22] == 2)
    rbx = zx.q(r9.d)

if (r8_9 s> 0)
    char r10_15 = *(r11_1 + &data_1436a55b0)
    char rax_25 = *(rsi + r9 * 0x14 + 0x12)
    
    if (r10_15 u<= rax_25 && rax_25 u<= *(r11_1 + 0x1436a55b1))
        r8_9 = zx.d(rax_25) - zx.d(r10_15)

rax_2 = sx.d(*(sx.q(r8_9) + sx.q(*((rcx_22 << 1) + 0x1436a5650)) + &data_1436a56b0))
goto label_142c430f4
