// 函数: sub_142767b10
// 地址: 0x142767b10
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void* r8 = *arg1
char* rax = *(r8 + 0x10)
uint32_t rdx = zx.d(*rax)
*(r8 + 0x10) = &rax[1]
uint64_t result
int64_t (* rax_6)(void* arg1)
int64_t rcx_1
int64_t rdi_1

if (rdx.b == 0)
    int64_t* rcx_4 = arg1[1]
    rdi_1 = sx.q(rcx_4[1].d)
    int32_t rax_11 = (rdi_1 + 8).d
    rcx_4[1].d = rax_11
    
    if (rax_11 s> *(rcx_4 + 0xc))
        sub_1405daba0(rcx_4)
    
    rcx_1 = *arg1[1]
    rax_6 = sub_142754c10
label_142767bf6:
    *(rdi_1 + rcx_1) = rax_6
    void* rcx_5 = *arg1
    int16_t* rax_13 = *(rcx_5 + 0x10)
    int16_t rsi_1 = *rax_13
    *(rcx_5 + 0x10) = &rax_13[1]
    int64_t* rcx_6 = arg1[1]
    int64_t rdi_2 = sx.q(rcx_6[1].d)
    int32_t rax_15 = (rdi_2 + 2).d
    rcx_6[1].d = rax_15
    
    if (rax_15 s> *(rcx_6 + 0xc))
        sub_1405daba0(rcx_6)
    
    *(rdi_2 + *arg1[1]) = rsi_1
    void* rcx_7 = *arg1
    int16_t* rax_18 = *(rcx_7 + 0x10)
    int16_t rsi_2 = *rax_18
    *(rcx_7 + 0x10) = &rax_18[1]
    int64_t* rcx_8 = arg1[1]
    int64_t rdi_3 = sx.q(rcx_8[1].d)
    int32_t rax_20 = (rdi_3 + 2).d
    rcx_8[1].d = rax_20
    
    if (rax_20 s> *(rcx_8 + 0xc))
        sub_1405daba0(rcx_8)
    
    *(rdi_3 + *arg1[1]) = rsi_2
    void* rcx_9 = *arg1
    int16_t* rax_23 = *(rcx_9 + 0x10)
    int16_t rsi_3 = *rax_23
    *(rcx_9 + 0x10) = &rax_23[1]
    int64_t* rcx_10 = arg1[1]
    int64_t rdi_4 = sx.q(rcx_10[1].d)
    int32_t rax_25 = (rdi_4 + 2).d
    rcx_10[1].d = rax_25
    
    if (rax_25 s> *(rcx_10 + 0xc))
        sub_1405daba0(rcx_10)
    
    result = *arg1[1]
    *(rdi_4 + result) = rsi_3
else
    if (rdx == 1)
        int64_t* rcx_3 = arg1[1]
        rdi_1 = sx.q(rcx_3[1].d)
        int32_t rax_9 = (rdi_1 + 8).d
        rcx_3[1].d = rax_9
        
        if (rax_9 s> *(rcx_3 + 0xc))
            sub_1405daba0(rcx_3)
        
        rcx_1 = *arg1[1]
        rax_6 = sub_142754f40
        goto label_142767bf6
    
    result = zx.q(rdx - 2)
    
    if (rdx == 2)
        int64_t* rcx_2 = arg1[1]
        rdi_1 = sx.q(rcx_2[1].d)
        int32_t rax_7 = (rdi_1 + 8).d
        rcx_2[1].d = rax_7
        
        if (rax_7 s> *(rcx_2 + 0xc))
            sub_1405daba0(rcx_2)
        
        rcx_1 = *arg1[1]
        rax_6 = sub_142754d90
        goto label_142767bf6
    
    if (result.d == 1)
        int64_t* rcx = arg1[1]
        rdi_1 = sx.q(rcx[1].d)
        int32_t rax_4 = (rdi_1 + 8).d
        rcx[1].d = rax_4
        
        if (rax_4 s> *(rcx + 0xc))
            sub_1405daba0(rcx)
        
        rcx_1 = *arg1[1]
        rax_6 = sub_142755100
        goto label_142767bf6
return result
