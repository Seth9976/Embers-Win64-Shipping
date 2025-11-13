// 函数: sub_14276ba00
// 地址: 0x14276ba00
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void* r8 = *arg1
char* rax = *(r8 + 0x10)
uint32_t result_1 = zx.d(*rax)
*(r8 + 0x10) = &rax[1]
uint64_t result = zx.q(result_1)
uint64_t (* rax_4)(void* arg1)
int64_t rcx_1
int64_t rdi_1

if (result_1.b == 0)
    int64_t* rcx_2 = arg1[1]
    rdi_1 = sx.q(rcx_2[1].d)
    int32_t rax_5 = (rdi_1 + 8).d
    rcx_2[1].d = rax_5
    
    if (rax_5 s> *(rcx_2 + 0xc))
        sub_1405daba0(rcx_2)
    
    rcx_1 = *arg1[1]
    rax_4 = sub_14275f9e0
label_14276ba84:
    *(rdi_1 + rcx_1) = rax_4
    void* rcx_3 = *arg1
    int16_t* rax_7 = *(rcx_3 + 0x10)
    int16_t rsi_1 = *rax_7
    *(rcx_3 + 0x10) = &rax_7[1]
    int64_t* rcx_4 = arg1[1]
    int64_t rdi_2 = sx.q(rcx_4[1].d)
    int32_t rax_9 = (rdi_2 + 2).d
    rcx_4[1].d = rax_9
    
    if (rax_9 s> *(rcx_4 + 0xc))
        sub_1405daba0(rcx_4)
    
    *(rdi_2 + *arg1[1]) = rsi_1
    void* rcx_5 = *arg1
    int16_t* rax_12 = *(rcx_5 + 0x10)
    int16_t rsi_2 = *rax_12
    *(rcx_5 + 0x10) = &rax_12[1]
    int64_t* rcx_6 = arg1[1]
    int64_t rdi_3 = sx.q(rcx_6[1].d)
    int32_t rax_14 = (rdi_3 + 2).d
    rcx_6[1].d = rax_14
    
    if (rax_14 s> *(rcx_6 + 0xc))
        sub_1405daba0(rcx_6)
    
    result = *arg1[1]
    *(rdi_3 + result) = rsi_2
else if (result.d == 1)
    int64_t* rcx = arg1[1]
    rdi_1 = sx.q(rcx[1].d)
    int32_t rax_2 = (rdi_1 + 8).d
    rcx[1].d = rax_2
    
    if (rax_2 s> *(rcx + 0xc))
        sub_1405daba0(rcx)
    
    rcx_1 = *arg1[1]
    rax_4 = sub_14275fa20
    goto label_14276ba84
return result
