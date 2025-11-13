// 函数: sub_141030680
// 地址: 0x141030680
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

uint64_t rsi = zx.q(arg3)
void* rbx = arg4

if (arg4 != 0 && data_1439c7a34 u> 1)
    while (*(rbx + 0x28) != *(arg1 + 0x138))
        rbx = *(rbx + 0x30)
        
        if (rbx == 0)
            break

uint32_t rcx = zx.d(*(arg2 + 0x2c))
int64_t rax_26
uint64_t rdi_1
int16_t* r12_1
int64_t r15_1

if (rcx == 0)
    rdi_1 = rsi
    int64_t rax_21
    
    if (rbx != 0)
        rax_21 = *(rbx + 0x88)
    
    if (rbx == 0 || rax_21 == 0)
        if (*(arg1 + (rsi << 3) + 0x22c0) != 0)
            *(arg1 + (rsi << 3) + 0x22c0) = 0
            *(arg1 + (rsi << 3) + 0x25c0) = 0
            *(arg1 + 0x22b0) |= (1 << (rsi.d u% 0x20)).w
    else if (rax_21 != *(arg1 + (rsi << 3) + 0x22c0))
        *(arg1 + (rsi << 3) + 0x22c0) = rax_21
        void* rax_22 = *(rbx + 0x50)
        void* rdx_4 = *(rax_22 + 0x28)
        void* rcx_8 = rdx_4 + 0x28
        
        if (rdx_4 == 0)
            rcx_8 = rax_22 + 0x30
        
        *(arg1 + (rsi << 3) + 0x25c0) = rcx_8
        *(arg1 + 0x22b0) |= (1 << (rsi.d u% 0x20)).w
    
    rax_26 = 0x70c
    r12_1 = 0x3b60
    r15_1 = 0x6ac
label_1410309ae:
    
    if (data_143f0f1d0 == 0)
        sub_1405d16e0(arg1 + ((rax_26 + rdi_1) << 3), arg4)
    
    *(arg1 + ((r15_1 + rdi_1) << 3)) = rbx
    *(r12_1 + arg1) = (zx.d(*(r12_1 + arg1)) | 1 << (rsi.d u% 0x20)).w
    return 

if (rcx == 1)
    rdi_1 = rsi
    int64_t rax_16
    
    if (rbx != 0)
        rax_16 = *(rbx + 0x88)
    
    if (rbx == 0 || rax_16 == 0)
        if (*(arg1 + (rsi << 3) + 0x2340) != 0)
            *(arg1 + (rsi << 3) + 0x2340) = 0
            *(arg1 + (rsi << 3) + 0x2640) = 0
            *(arg1 + 0x22b2) |= (1 << (rsi.d u% 0x20)).w
    else if (rax_16 != *(arg1 + (rsi << 3) + 0x2340))
        *(arg1 + (rsi << 3) + 0x2340) = rax_16
        void* rax_17 = *(rbx + 0x50)
        void* rdx_3 = *(rax_17 + 0x28)
        void* rcx_7 = rdx_3 + 0x28
        
        if (rdx_3 == 0)
            rcx_7 = rax_17 + 0x30
        
        *(arg1 + (rsi << 3) + 0x2640) = rcx_7
        *(arg1 + 0x22b2) |= (1 << (rsi.d u% 0x20)).w
    
    rax_26 = 0x71c
    r12_1 = 0x3b62
    r15_1 = 0x6bc
    goto label_1410309ae

if (rcx == 2)
    rdi_1 = rsi
    int64_t rax_11
    
    if (rbx != 0)
        rax_11 = *(rbx + 0x88)
    
    if (rbx == 0 || rax_11 == 0)
        if (*(arg1 + (rsi << 3) + 0x23c0) != 0)
            *(arg1 + (rsi << 3) + 0x23c0) = 0
            *(arg1 + (rsi << 3) + 0x26c0) = 0
            *(arg1 + 0x22b4) |= (1 << (rsi.d u% 0x20)).w
    else if (rax_11 != *(arg1 + (rsi << 3) + 0x23c0))
        *(arg1 + (rsi << 3) + 0x23c0) = rax_11
        void* rax_12 = *(rbx + 0x50)
        void* rdx_2 = *(rax_12 + 0x28)
        void* rcx_6 = rdx_2 + 0x28
        
        if (rdx_2 == 0)
            rcx_6 = rax_12 + 0x30
        
        *(arg1 + (rsi << 3) + 0x26c0) = rcx_6
        *(arg1 + 0x22b4) |= (1 << (rsi.d u% 0x20)).w
    
    rax_26 = 0x72c
    r12_1 = 0x3b64
    r15_1 = 0x6cc
    goto label_1410309ae

if (rcx == 3)
    rdi_1 = rsi
    int64_t rax_6
    
    if (rbx != 0)
        rax_6 = *(rbx + 0x88)
    
    if (rbx == 0 || rax_6 == 0)
        if (*(arg1 + (rsi << 3) + 0x2440) != 0)
            *(arg1 + (rsi << 3) + 0x2440) = 0
            *(arg1 + (rsi << 3) + 0x2740) = 0
            *(arg1 + 0x22b6) |= (1 << (rsi.d u% 0x20)).w
    else if (rax_6 != *(arg1 + (rsi << 3) + 0x2440))
        *(arg1 + (rsi << 3) + 0x2440) = rax_6
        void* rax_7 = *(rbx + 0x50)
        void* rdx_1 = *(rax_7 + 0x28)
        void* rcx_5 = rdx_1 + 0x28
        
        if (rdx_1 == 0)
            rcx_5 = rax_7 + 0x30
        
        *(arg1 + (rsi << 3) + 0x2740) = rcx_5
        *(arg1 + 0x22b6) |= (1 << (rsi.d u% 0x20)).w
    
    rax_26 = 0x73c
    r12_1 = 0x3b66
    r15_1 = 0x6dc
    goto label_1410309ae

if (rcx != 4)
    return 

rdi_1 = rsi
int64_t rax_1

if (rbx != 0)
    rax_1 = *(rbx + 0x88)

if (rbx == 0 || rax_1 == 0)
    if (*(arg1 + (rsi << 3) + 0x24c0) != 0)
        *(arg1 + (rsi << 3) + 0x24c0) = 0
        *(arg1 + (rsi << 3) + 0x27c0) = 0
        *(arg1 + 0x22b8) |= (1 << (rsi.d u% 0x20)).w
else if (rax_1 != *(arg1 + (rsi << 3) + 0x24c0))
    *(arg1 + (rsi << 3) + 0x24c0) = rax_1
    void* rax_2 = *(rbx + 0x50)
    void* rdx = *(rax_2 + 0x28)
    void* rcx_4 = rdx + 0x28
    
    if (rdx == 0)
        rcx_4 = rax_2 + 0x30
    
    *(arg1 + (rsi << 3) + 0x27c0) = rcx_4
    *(arg1 + 0x22b8) |= (1 << (rsi.d u% 0x20)).w

rax_26 = 0x74c
r12_1 = 0x3b68
r15_1 = 0x6ec
goto label_1410309ae
