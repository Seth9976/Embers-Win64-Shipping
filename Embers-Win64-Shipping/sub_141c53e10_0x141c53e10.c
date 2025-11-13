// 函数: sub_141c53e10
// 地址: 0x141c53e10
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void var_d8
int64_t rax_1 = __security_cookie ^ &var_d8
void* r10 = *arg1
int64_t rbx = sx.q(arg1[1].d)
int128_t zmm6 = *(arg1 + 0x14)
int32_t var_b4 = zmm6.d
int32_t var_b8 = rbx.d
void* rbp_1 = rbx * 0x3f0 + *(r10 + 0xc8)
int32_t* rcx_5

if (*(r10 + 0xf0) == *(r10 + 0x11c))
label_141c53ece:
    rcx_5 = nullptr
else
    void* r8_1 = r10 + 0x120
    void* rdx_1 = *(r8_1 + 8)
    int64_t r9_1 = sx.q(arg1[2].d)
    
    if (rdx_1 != 0)
        r8_1 = rdx_1
    
    int32_t rax_3 = *(r8_1 + (((sx.q(*(r10 + 0x130)) - 1) & r9_1) << 2))
    
    if (rax_3 == 0xffffffff)
    label_141c53ece_1:
        rcx_5 = nullptr
    else
        while (true)
            rcx_5 = sx.q(rax_3) * 0x78 + *(r10 + 0xe8)
            
            if (*rcx_5 == r9_1.d)
                break
            
            rax_3 = rcx_5[0x1c]
            
            if (rax_3 == 0xffffffff)
                goto label_141c53ece_2
        
        if (rax_3 == 0xffffffff)
        label_141c53ece_2:
            rcx_5 = nullptr

void* rdx_2 = &rcx_5[2]

if (rcx_5 == 0)
    rdx_2 = nullptr

if (rdx_2 == 0)
    int64_t var_a8
    sub_141c4d870(&var_a8, r10, *(rbp_1 + 0x3d4), *(r10 + 0x1b0))
    void var_98
    void* rdi_4 = &var_98 + (zx.q(*(arg1 + 0xc)) << 4)
    int32_t* rax_9 = *rdi_4
    int64_t rdx_5 = sx.q(*(rdi_4 + 8))
    void* rcx_10 = &rax_9[rdx_5 * 2]
    
    if (rax_9 == rcx_10)
    label_141c53fa1:
        int32_t rax_10 = (rdx_5 + 1).d
        *(rdi_4 + 8) = rax_10
        
        if (rax_10 s> *(rdi_4 + 0xc))
            sub_1405a4d70(rdi_4)
        
        *(*rdi_4 + (rdx_5 << 3)) = var_b8.q
    else
        while (*rax_9 != rbx.d)
            rax_9 = &rax_9[2]
            
            if (rax_9 == rcx_10)
                goto label_141c53fa1
        
        rax_9[1] = zmm6.d
    
    sub_141c4c660(*arg1 + 0xe8, &arg1[2])
    int64_t i_1 = 2
    void var_58
    void* rsi_2 = &var_58
    
    for (int64_t i = 2; i != 0; )
        int64_t rcx_15 = *(rsi_2 - 0x10)
        rsi_2 -= 0x10
        i -= 1
        
        if (rcx_15 != 0)
            sub_140a74f90(rcx_15)
    
    void var_78
    void* rdi_5 = &var_78
    
    do
        int64_t rcx_16 = *(rdi_5 - 0x10)
        rdi_5 -= 0x10
        i_1 -= 1
        
        if (rcx_16 != 0)
            sub_140a74f90(rcx_16)
    while (i_1 != 0)
    
    int64_t rcx_17 = var_a8
    
    if (rcx_17 != 0)
        sub_140a74f90(rcx_17)
else
    void* rdi_3 = ((zx.q(*(arg1 + 0xc)) + 1) << 4) + rdx_2
    int32_t* rax_4 = *rdi_3
    int64_t rdx_3 = sx.q(*(rdi_3 + 8))
    void* rcx_6 = &rax_4[rdx_3 * 2]
    
    if (rax_4 == rcx_6)
    label_141c53f1d:
        int32_t rax_5 = (rdx_3 + 1).d
        *(rdi_3 + 8) = rax_5
        
        if (rax_5 s> *(rdi_3 + 0xc))
            sub_1405a4d70(rdi_3)
        
        *(*rdi_3 + (rdx_3 << 3)) = var_b8.q
    else
        while (*rax_4 != rbx.d)
            rax_4 = &rax_4[2]
            
            if (rax_4 == rcx_6)
                goto label_141c53f1d
        
        rax_4[1] = zmm6.d

uint64_t* rbx_3 = (zx.q(*(arg1 + 0xc)) << 4) + rbp_1 + 0xc8
uint64_t i_2 = *rbx_3
int64_t rdx_7 = sx.q(rbx_3[1].d)

for (int64_t rcx_18 = i_2 + (rdx_7 << 2); i_2 != rcx_18; i_2 += 4)
    if (*i_2 == arg1[2].d)
        goto label_141c540b7

int32_t rax_12 = (rdx_7 + 1).d
rbx_3[1].d = rax_12

if (rax_12 s> *(rbx_3 + 0xc))
    sub_1405a4cf0(rbx_3)

i_2 = zx.q(arg1[2].d)
*(*rbx_3 + (rdx_7 << 2)) = i_2.d
label_141c540b7:
__security_check_cookie(rax_1 ^ &var_d8)
return i_2
