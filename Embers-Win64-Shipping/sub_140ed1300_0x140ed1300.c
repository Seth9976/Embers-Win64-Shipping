// 函数: sub_140ed1300
// 地址: 0x140ed1300
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

uint128_t zmm0 = zx.o(*arg2)
int64_t rbp = sx.q(*(arg1 + 0x3b0))
int32_t i = arg2[1].d
int64_t* rdx = *(arg1 + 0x3a8)
int64_t r15_1 = rbp * 2
int64_t* rbx = rdx
void* rcx = &rdx[r15_1]
int32_t rbx_1

if (rdx == rcx)
label_140ed1376:
    rbx_1 = -1
else
    while ((*(rbx + 0xc) & 2) == 0 || *rbx != zmm0.q || (i != 0xffffffff && i != rbx[1].d))
        rbx = &rbx[2]
        
        if (rbx == rcx)
            goto label_140ed1376
    
    rbx_1 = ((rbx - rdx) s>> 4).d

if (arg3 == 0xffffffff)
    if (rbx_1 == 0xffffffff)
        int32_t rax_3 = (rbp + 1).d
        int32_t i_1 = i
        int32_t var_2c_1 = 1
        *(arg1 + 0x3b0) = rax_3
        
        if (rax_3 s> *(arg1 + 0x3b4))
            sub_1405a4f90(arg1 + 0x3a8)
        
        *(*(arg1 + 0x3a8) + (r15_1 << 3)) = zmm0.q.o
        return zx.q(*(arg1 + 0x3b0) - 1)
    
    *(&rdx[sx.q(rbx_1) * 2] + 0xc) = 1
    return zx.q(rbx_1)

int32_t rsi_1 = *(arg1 + 0x3b0)
int32_t rax_6 = 0
int32_t rcx_4 = -1
int32_t r8 = 0
bool cond:0_1

if (rsi_1 s<= 0)
label_140ed1420:
    cond:0_1 = rcx_4 != 0xffffffff
else
    void* rdx_2 = rdx + 0xc
    
    while (true)
        cond:0_1 = rcx_4 != 0xffffffff
        
        if (rcx_4 != 0xffffffff)
            break
        
        if (*rdx_2 == 1)
            rcx_4 = rax_6
            
            if (r8 != arg3)
                rcx_4 = -1
            
            r8 += 1
        
        rax_6 += 1
        rdx_2 += 0x10
        
        if (rax_6 s>= rsi_1)
            goto label_140ed1420

if (cond:0_1)
    rsi_1 = rcx_4

if (rbx_1 != 0xffffffff)
    int64_t r9 = *(arg1 + 0x3a8)
    int32_t rax_10 = rbp.d - rbx_1
    uint128_t* rcx_9 = (sx.q(rbx_1) << 4) + r9
    uint64_t var_38
    var_38.o = *rcx_9
    
    if (rax_10 != 1)
        memmove(rcx_9, (sx.q(rbx_1 + 1) << 4) + r9, (rax_10 - 1) << 4)
        rbp = zx.q(*(arg1 + 0x3b0))
    
    *(arg1 + 0x3b0) = (rbp - 1).d
    sub_1405a5010(arg1 + 0x3a8)
    int32_t var_2c_3 = 1
    int32_t rbp_2 = rsi_1 - 1
    
    if (rbx_1 s> rsi_1)
        rbp_2 = rsi_1
    
    int32_t rsi_2 = *(arg1 + 0x3b0)
    *(arg1 + 0x3b0) = rsi_2 + 1
    
    if (rsi_2 + 1 s> *(arg1 + 0x3b4))
        sub_1405a4f90(arg1 + 0x3a8)
    
    int64_t rdx_11 = *(arg1 + 0x3a8) + (sx.q(rbp_2) << 4)
    memmove(rdx_11 + 0x10, rdx_11, (rsi_2 - rbp_2) << 4)
    (*(arg1 + 0x3a8))[sx.q(rbp_2)] = var_38.o
else
    int32_t rax_7 = (rbp + 1).d
    int32_t i_2 = i
    int32_t var_2c_2 = 1
    *(arg1 + 0x3b0) = rax_7
    
    if (rax_7 s> *(arg1 + 0x3b4))
        sub_1405a4f90(arg1 + 0x3a8)
    
    int64_t rbx_4 = sx.q(rsi_1) << 4
    int64_t rdx_5 = *(arg1 + 0x3a8) + rbx_4
    memmove(rdx_5 + 0x10, rdx_5, (rbp.d - rsi_1) << 4)
    *(rbx_4 + *(arg1 + 0x3a8)) = zmm0.q.o

return zx.q(arg3)
