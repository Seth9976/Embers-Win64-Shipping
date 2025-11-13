// 函数: sub_142c445c0
// 地址: 0x142c445c0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int32_t i = *(arg1 + 0x60)
int64_t rbp = *(arg1 + 0x70)
int32_t rsi = 0
int32_t r10 = 0
int32_t r15 = 0
uint64_t rbx = 0
int64_t r11 = 4
int32_t rdx = 1
int32_t rax_2

if (i == 0)
    if (0 != i)
        return 
    
    do
        int16_t rcx = *((sx.q(r11.d) << 1) + &lookup_table_1436a6940[0x150])
        
        if (rcx s<= 0)
            return 
        
        rax_2 = sx.d(rcx) - 1
    label_142c44638:
        int64_t rax_3 = sx.q(rax_2)
        char rcx_1 = lookup_table_1436a6940[0x80 + rax_3]
        r11 = sx.q(lookup_table_1436a6940[0x30 + rax_3])
        
        if (rcx_1 != 0 && sx.d(rcx_1) - 1 u<= 0x13)
            switch (rcx_1)
                case 1
                    rbx = zx.q(rsi - 1)
                    
                    if (r10 u< rsi)
                    label_142c449b0:
                        *(rbp + 0xf + zx.q(r10) * 0x14) = rdx.b << 4 | 2
                        
                        if (zx.q(rsi - r10) != 1)
                            break
                    
                    goto label_142c446b4
                case 2
                    if (r15 == 7)
                        rbx = zx.q(rsi - 1)
                        
                        if (r10 u< rsi)
                        label_142c44a80:
                            *(rbp + 0xf + zx.q(r10) * 0x14) = rdx.b << 4 | 6
                            
                            if (zx.q(rsi - r10) != 1)
                                break
                        
                        goto label_142c446b4
                    
                    if (r15 == 8)
                        rbx = zx.q(rsi - 1)
                        
                        if (r10 u< rsi)
                        label_142c44a40:
                            *(rbp + 0xf + zx.q(r10) * 0x14) = rdx.b << 4 | 7
                            
                            if (zx.q(rsi - r10) != 1)
                                break
                        
                        goto label_142c446b4
                case 3
                    r15 = 7
                    rsi = (rbx + 1).d
                case 4
                    rbx = zx.q(rsi - 1)
                    
                    if (r10 u< rsi)
                    label_142c449f0:
                        *(rbp + 0xf + zx.q(r10) * 0x14) = rdx.b << 4 | 6
                        
                        if (zx.q(rsi - r10) != 1)
                            break
                    
                    goto label_142c446b4
                case 7
                    rsi = (rbx + 1).d
                case 8
                    rsi = (rbx + 1).d
                    
                    if (r10 u< rsi)
                    label_142c44770:
                        *(rbp + 0xf + zx.q(r10) * 0x14) = rdx.b << 4 | 7
                        
                        if (zx.q(rsi - r10) != 1)
                            break
                    
                    goto label_142c446b4
                case 9
                    rsi = (rbx + 1).d
                    
                    if (r10 u< rsi)
                    label_142c44730:
                        *(rbp + 0xf + zx.q(r10) * 0x14) = rdx.b << 4 | 6
                        
                        if (zx.q(rsi - r10) != 1)
                            break
                    
                    goto label_142c446b4
                case 0xa
                    r15 = 8
                    rsi = (rbx + 1).d
                case 0xb
                    rsi = rbx.d
                    rbx = zx.q(rbx.d - 1)
                    
                    if (r10 u< rsi)
                    label_142c447b0:
                        *(zx.q(r10) * 0x14 + 0xf + rbp) = rdx.b << 4
                        
                        if (zx.q(rsi - r10) != 1)
                            break
                    
                    goto label_142c446b4
                case 0xc
                    rsi = (rbx + 1).d
                    
                    if (r10 u< rsi)
                    label_142c446a0:
                        *(rbp + 0xf + zx.q(r10) * 0x14) = rdx.b << 4
                        
                        if (zx.q(rsi - r10) != 1)
                            break
                    
                label_142c446b4:
                    rdx += 1
                    
                    if (rdx == 0x10)
                        rdx = 1
                case 0xd
                    rsi = rbx.d
                    rbx = zx.q(rbx.d - 1)
                    
                    if (r10 u< rsi)
                    label_142c44830:
                        *(rbp + 0xf + zx.q(r10) * 0x14) = rdx.b << 4 | 2
                        
                        if (zx.q(rsi - r10) != 1)
                            break
                    
                    goto label_142c446b4
                case 0xe
                    rsi = (rbx + 1).d
                    
                    if (r10 u< rsi)
                    label_142c446f2:
                        *(rbp + 0xf + zx.q(r10) * 0x14) = rdx.b << 4 | 2
                        
                        if (zx.q(rsi - r10) != 1)
                            break
                    
                    goto label_142c446b4
                case 0xf
                    rsi = rbx.d
                    rbx = zx.q(rbx.d - 1)
                    
                    if (r10 u< rsi)
                    label_142c447f0:
                        *(rbp + 0xf + zx.q(r10) * 0x14) = rdx.b << 4 | 1
                        
                        if (zx.q(rsi - r10) != 1)
                            break
                    
                    goto label_142c446b4
                case 0x10
                    rsi = rbx.d
                    rbx = zx.q(rbx.d - 1)
                    
                    if (r10 u< rsi)
                    label_142c448b0:
                        *(rbp + 0xf + zx.q(r10) * 0x14) = rdx.b << 4 | 4
                        
                        if (zx.q(rsi - r10) != 1)
                            break
                    
                    goto label_142c446b4
                case 0x11
                    rsi = rbx.d
                    rbx = zx.q(rbx.d - 1)
                    
                    if (r10 u< rsi)
                    label_142c44870:
                        *(rbp + 0xf + zx.q(r10) * 0x14) = rdx.b << 4 | 3
                        
                        if (zx.q(rsi - r10) != 1)
                            break
                    
                    goto label_142c446b4
                case 0x12
                    rsi = rbx.d
                    rbx = zx.q(rbx.d - 1)
                    
                    if (r10 u< rsi)
                    label_142c44930:
                        *(rbp + 0xf + zx.q(r10) * 0x14) = rdx.b << 4 | 6
                        
                        if (zx.q(rsi - r10) != 1)
                            break
                    
                    goto label_142c446b4
                case 0x13
                    rsi = rbx.d
                    rbx = zx.q(rbx.d - 1)
                    
                    if (r10 u< rsi)
                    label_142c44970:
                        *(rbp + 0xf + zx.q(r10) * 0x14) = rdx.b << 4 | 7
                        
                        if (zx.q(rsi - r10) != 1)
                            break
                    
                    goto label_142c446b4
                case 0x14
                    rsi = rbx.d
                    rbx = zx.q(rbx.d - 1)
                    
                    if (r10 u< rsi)
                    label_142c448f0:
                        *(rbp + 0xf + zx.q(r10) * 0x14) = rdx.b << 4 | 5
                        
                        if (zx.q(rsi - r10) != 1)
                            break
                    
                    goto label_142c446b4
        
        int32_t rax_43 = 0
        
        if (lookup_table_1436a6940[0xd0 + r11] != 5)
            rax_43 = r10
        
        rbx = zx.q(rbx.d + 1)
        r10 = rax_43
    while (rbx.d == i)

int64_t rcx_35 = sx.q(r11.d)
int64_t r11_1 = sx.q((r11 * 2).d)

if (lookup_table_1436a6940[0x110 + rcx_35] == 6)
    r10 = rbx.d

int32_t r8_33 = sx.d(*(rcx_35 + 0x1436a61f8))

if (r8_33 s> 0)
    char r9_17 = *(r11_1 + &data_1436a6180)
    char rax_45 = *(rbp + rbx * 0x14 + 0x12)
    
    if (r9_17 u<= rax_45 && rax_45 u<= *(r11_1 + 0x1436a6181))
        r8_33 = zx.d(rax_45) - zx.d(r9_17)

rax_2 = sx.d(*(sx.q(r8_33) + sx.q(*((rcx_35 << 1) + 0x1436a6240)) + &data_1436a62c0))
goto label_142c44638
