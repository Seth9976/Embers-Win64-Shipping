// 函数: sub_14187b820
// 地址: 0x14187b820
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t rdi = sx.q(arg3)
int64_t* result = arg2
sub_141889890(arg1, rdi.d)
int32_t r12 = 0
int32_t* rdx_6
void* r9

if (*(arg1 + 0x10) == *(arg1 + 0x3c))
label_14187b8ad:
    rdx_6 = nullptr
else
    void* r8 = *(arg1 + 0x48)
    r9 = arg1 + 0x40
    
    if (r8 != 0)
        r9 = r8
    
    int32_t rax_1 = *(r9 + (((sx.q(*(arg1 + 0x50)) - 1) & rdi) << 2))
    
    if (rax_1 == 0xffffffff)
    label_14187b8ad_1:
        rdx_6 = nullptr
    else
        while (true)
            rdx_6 = (sx.q(rax_1) << 5) + *(arg1 + 8)
            
            if (*rdx_6 == rdi.d)
                break
            
            rax_1 = rdx_6[6]
            
            if (rax_1 == 0xffffffff)
                goto label_14187b8ad_2
        
        if (rax_1 == 0xffffffff)
        label_14187b8ad_2:
            rdx_6 = nullptr

int32_t* rsi_3

if (*(arg1 + 0xb0) == *(arg1 + 0xdc))
label_14187b90e:
    rsi_3 = nullptr
else
    void* r8_2 = arg1 + 0xe0
    void* rcx = *(r8_2 + 8)
    
    if (rcx != 0)
        r8_2 = rcx
    
    int32_t rax_3 = *(r8_2 + (((sx.q(*(arg1 + 0xf0)) - 1) & rdi) << 2))
    
    if (rax_3 == 0xffffffff)
    label_14187b90e_1:
        rsi_3 = nullptr
    else
        while (true)
            rsi_3 = (sx.q(rax_3) << 4) + *(arg1 + 0xa8)
            
            if (*rsi_3 == rdi.d)
                break
            
            rax_3 = rsi_3[2]
            
            if (rax_3 == 0xffffffff)
                goto label_14187b90e_2
        
        if (rax_3 == 0xffffffff)
        label_14187b90e_2:
            rsi_3 = nullptr

void* const rbp_1

if (*(arg1 + 0x150) == *(arg1 + 0x17c))
label_14187b970:
    rbp_1 = nullptr
else
    void* r8_3 = arg1 + 0x180
    void* rcx_1 = *(r8_3 + 8)
    
    if (rcx_1 != 0)
        r8_3 = rcx_1
    
    int32_t rax_5 = *(r8_3 + (((sx.q(*(arg1 + 0x190)) - 1) & rdi) << 2))
    
    if (rax_5 == 0xffffffff)
    label_14187b970_1:
        rbp_1 = nullptr
    else
        int64_t r8_4 = *(arg1 + 0x148)
        
        while (true)
            int64_t rdx_14 = sx.q(rax_5) * 3
            rbp_1 = r8_4 + (rdx_14 << 3)
            
            if (*(r8_4 + (rdx_14 << 3)) == rdi.d)
                break
            
            rax_5 = *(rbp_1 + 0x10)
            
            if (rax_5 == 0xffffffff)
                goto label_14187b970_2
        
        if (rax_5 == 0xffffffff)
        label_14187b970_2:
            rbp_1 = nullptr

void* const rbx_1

if (*(arg1 + 0x100) == *(arg1 + 0x12c))
label_14187b9d0:
    rbx_1 = nullptr
else
    void* r8_5 = arg1 + 0x130
    void* rcx_3 = *(r8_5 + 8)
    
    if (rcx_3 != 0)
        r8_5 = rcx_3
    
    int32_t rax_7 = *(r8_5 + (((sx.q(*(arg1 + 0x140)) - 1) & rdi) << 2))
    
    if (rax_7 == 0xffffffff)
    label_14187b9d0_1:
        rbx_1 = nullptr
    else
        int64_t r8_6 = *(arg1 + 0xf8)
        
        while (true)
            int64_t rdx_18 = sx.q(rax_7) * 3
            rbx_1 = r8_6 + (rdx_18 << 3)
            
            if (*(r8_6 + (rdx_18 << 3)) == rdi.d)
                break
            
            rax_7 = *(rbx_1 + 0x10)
            
            if (rax_7 == 0xffffffff)
                goto label_14187b9d0_2
        
        if (rax_7 == 0xffffffff)
        label_14187b9d0_2:
            rbx_1 = nullptr

int64_t rcx_5 = *(rbp_1 + 8)
int32_t r8_7 = rsi_3[1]
int64_t rax_9 = *(rbx_1 + 8) - rcx_5
*result = rcx_5
result[1] = rax_9

if (r8_7 + 1 s> *(arg4 + 0xc))
    sub_1405a5220(arg4, r8_7 + 1)
    r8_7 = rsi_3[1]

if (r8_7 s>= 0)
    int128_t* r15 = nullptr
    
    do
        void* rax_10 = *(rdx_6 + 8)
        int128_t zmm0_1 = *(r15 + rax_10)
        int128_t zmm1_1 = *(r15 + rax_10 + 0x10)
        void var_38
        sub_14181d6d0(&var_38, rax_10 + 0x20 + r15)
        int64_t rdi_1 = sx.q(arg4[1].d)
        int32_t rax_11 = (rdi_1 + 1).d
        arg4[1].d = rax_11
        
        if (rax_11 s> *(arg4 + 0xc))
            sub_1405c4f50(arg4)
        
        int128_t* rcx_11 = rdi_1 * 0x30 + *arg4
        *rcx_11 = zmm0_1
        rcx_11[1] = zmm1_1
        sub_14181d6d0(&rcx_11[2], &var_38)
        sub_1418221b0(&var_38)
        r8_7 = rsi_3[1]
        r12 += 1
        r15 = &r15[3]
    while (r12 s<= r8_7)
    
    result = arg2

r9.b = 1
sub_141893460(&rdx_6[2], 0, r8_7 + 1, r9.b)
rsi_3[1] = 0xffffffff
*(rbp_1 + 8) = *(rbx_1 + 8)
return result
