// 函数: sub_1418845e0
// 地址: 0x1418845e0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t rdi = sx.q(arg2)
sub_141889890(arg1, rdi.d)
int32_t rbx = 0
int32_t* r9_4

if (*(arg1 + 0x10) == *(arg1 + 0x3c))
label_14188465f:
    r9_4 = nullptr
else
    void* r8 = *(arg1 + 0x48)
    void* r9_1 = arg1 + 0x40
    
    if (r8 != 0)
        r9_1 = r8
    
    int32_t rax_1 = *(r9_1 + (((sx.q(*(arg1 + 0x50)) - 1) & rdi) << 2))
    
    if (rax_1 == 0xffffffff)
    label_14188465f_1:
        r9_4 = nullptr
    else
        while (true)
            r9_4 = (sx.q(rax_1) << 5) + *(arg1 + 8)
            
            if (*r9_4 == rdi.d)
                break
            
            rax_1 = r9_4[6]
            
            if (rax_1 == 0xffffffff)
                goto label_14188465f_2
        
        if (rax_1 == 0xffffffff)
        label_14188465f_2:
            r9_4 = nullptr

int32_t* rdx_10

if (*(arg1 + 0x60) == *(arg1 + 0x8c))
label_1418846bd:
    rdx_10 = nullptr
else
    void* r8_1 = arg1 + 0x90
    void* rcx = *(r8_1 + 8)
    
    if (rcx != 0)
        r8_1 = rcx
    
    int32_t rax_3 = *(r8_1 + (((sx.q(*(arg1 + 0xa0)) - 1) & rdi) << 2))
    
    if (rax_3 == 0xffffffff)
    label_1418846bd_1:
        rdx_10 = nullptr
    else
        while (true)
            rdx_10 = (sx.q(rax_3) << 5) + *(arg1 + 0x58)
            
            if (*rdx_10 == rdi.d)
                break
            
            rax_3 = rdx_10[6]
            
            if (rax_3 == 0xffffffff)
                goto label_1418846bd_2
        
        if (rax_3 == 0xffffffff)
        label_1418846bd_2:
            rdx_10 = nullptr

int32_t* r10_3

if (*(arg1 + 0xb0) == *(arg1 + 0xdc))
label_141884720:
    r10_3 = nullptr
else
    void* r8_3 = arg1 + 0xe0
    void* rcx_1 = *(r8_3 + 8)
    
    if (rcx_1 != 0)
        r8_3 = rcx_1
    
    int32_t rax_5 = *(r8_3 + (((sx.q(*(arg1 + 0xf0)) - 1) & rdi) << 2))
    
    if (rax_5 == 0xffffffff)
    label_141884720_1:
        r10_3 = nullptr
    else
        while (true)
            r10_3 = (sx.q(rax_5) << 4) + *(arg1 + 0xa8)
            
            if (*r10_3 == rdi.d)
                break
            
            rax_5 = r10_3[2]
            
            if (rax_5 == 0xffffffff)
                goto label_141884720_2
        
        if (rax_5 == 0xffffffff)
        label_141884720_2:
            r10_3 = nullptr

void* const rsi_1

if (*(arg1 + 0x100) == *(arg1 + 0x12c))
label_141884780:
    rsi_1 = nullptr
else
    void* r8_4 = arg1 + 0x130
    void* rcx_2 = *(r8_4 + 8)
    
    if (rcx_2 != 0)
        r8_4 = rcx_2
    
    int32_t rax_7 = *(r8_4 + (((sx.q(*(arg1 + 0x140)) - 1) & rdi) << 2))
    
    if (rax_7 == 0xffffffff)
    label_141884780_1:
        rsi_1 = nullptr
    else
        int64_t r8_5 = *(arg1 + 0xf8)
        
        while (true)
            int64_t rdx_18 = sx.q(rax_7) * 3
            rsi_1 = r8_5 + (rdx_18 << 3)
            
            if (*(r8_5 + (rdx_18 << 3)) == rdi.d)
                break
            
            rax_7 = *(rsi_1 + 0x10)
            
            if (rax_7 == 0xffffffff)
                goto label_141884780_2
        
        if (rax_7 == 0xffffffff)
        label_141884780_2:
            rsi_1 = nullptr

*(rsi_1 + 8) = arg3
int32_t i = r10_3[1] + 1

if (i s< r9_4[4])
    int64_t rdx_20 = sx.q(i) * 0x30
    
    do
        int64_t rax_9 = *(r9_4 + 8)
        int64_t r8_6 = *(rdx_20 + rax_9)
        
        if (r8_6 u>= arg3)
            break
        
        if (r8_6 - 1 + zx.q(*(rdx_20 + rax_9 + 0x18)) u>= arg3)
            *(rsi_1 + 8) = r8_6
            break
        
        r10_3[1] = i
        rdx_20 += 0x30
        i += 1
    while (i s< r9_4[4])

sub_14185de60(*(rdx_10 + 8), rdx_10[4], 0, arg4)
int32_t rdx_22 = rdx_10[4]
int32_t r8_7 = -1

if (rdx_22 s> 0)
    int64_t* rax_12 = *(rdx_10 + 8)
    
    while (*rax_12 u< *(rsi_1 + 8))
        r8_7 = rbx
        rax_12 = &rax_12[6]
        rbx += 1
        
        if (rbx s>= rdx_22)
            break

return sub_141893460(&rdx_10[2], 0, r8_7 + 1, 0) __tailcall
