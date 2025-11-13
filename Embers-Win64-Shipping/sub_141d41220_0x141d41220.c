// 函数: sub_141d41220
// 地址: 0x141d41220
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t rbx = 0
int64_t* rcx = *(arg1 + 0x30)

if (rcx != 0)
    (**rcx)(rcx, 1)
    *(arg1 + 0x30) = 0

void*** rax_2 = j_sub_140a82f30(0x70)
void*** rsi = rax_2

if (rax_2 == 0)
    rsi = nullptr
else
    rsi[1] = arg1
    *rsi = &data_1432223c8
    int64_t* rax_3 = j_sub_140a82f30(0x50)
    
    if (rax_3 == 0)
        rax_3 = nullptr
    else
        *rax_3 = 0
        rax_3[2] = 0
        rax_3[4] = 0
    
    rsi[3] = rax_3
    rsi[2] = rax_3
    int64_t* rax_4 = j_sub_140a82f30(0x50)
    
    if (rax_4 == 0)
        rax_4 = nullptr
    else
        *rax_4 = 0
        rax_4[2] = 0
        rax_4[4] = 0
    
    rsi[5] = rax_4
    rsi[4] = rax_4
    int64_t* rax_5 = j_sub_140a82f30(0x10)
    
    if (rax_5 == 0)
        rax_5 = nullptr
    else
        *rax_5 = 0
        rax_5[1] = 0
    
    rsi[7] = rax_5
    rsi[6] = rax_5
    InitializeCriticalSection(&rsi[8])
    SetCriticalSectionSpinCount(&rsi[8], 0xfa0)

*(arg1 + 0x30) = rsi
void*** rax_6 = j_sub_140a82f30(0xf0)
void*** rsi_1 = rax_6

if (rax_6 == 0)
    rsi_1 = nullptr
else
    int64_t rdi_1 = *(arg1 + 0x30)
    *rsi_1 = &data_1432224b0
    rsi_1[1] = &data_143222268
    InitializeSRWLock(&rsi_1[2])
    InitializeSRWLock(&rsi_1[3])
    rsi_1[4] = 0
    void* r14_1 = &rsi_1[0xe]
    rsi_1[5] = 0
    int64_t i = 2
    rsi_1[7] = 0
    rsi_1[8] = 0
    rsi_1[9].b = 3
    *(rsi_1 + 0x4c) = 0
    rsi_1[0xa] = rdi_1
    void* rdi_2 = r14_1 + 0x18
    rsi_1[0xc].d = 0
    *(rsi_1 + 0x6c) = 0
    
    do
        *(rdi_2 - 8) = 0
        *rdi_2 = 0
        i -= 1
        *(rdi_2 + 8) = 0
        *(rdi_2 + 0x10) = 0
        *r14_1 = 0
        *(rdi_2 - 0x14) = 0
        *rdi_2 = 0
        
        if (*(rdi_2 + 4) s<= 0xffffffff)
            sub_1405dadb0(rdi_2 - 8, 0)
        
        int32_t rax_7 = *(rdi_2 + 0x14)
        *(rdi_2 + 0x10) = 0
        
        if (rax_7 s< 0 && rax_7 != 0)
            sub_1405a51b0(rdi_2 + 8, 0)
        
        r14_1 += 0x30
        rdi_2 += 0x30
    while (i != 0)
    
    *(rsi_1 + 0x64) = 0
    void* rcx_5
    rcx_5.b = 1
    rsi_1[0x1a] = 0
    rsi_1[0xb] = sub_140a491d0(rcx_5.b)
    void*** rax_9 = j_sub_140a82f30(zx.q((i + 0x28).d))
    
    if (rax_9 == 0)
        rax_9 = nullptr
    else
        __builtin_memset(&rax_9[1], 0, 0x20)
        *rax_9 = &data_1432225f0
    
    rsi_1[0x1a] = rax_9
    rsi_1[0x1b].d = 0
    rsi_1[0x1c] = 0
    rsi_1[0x1d] = 0

*(arg1 + 0x20) = rsi_1
*(arg1 + 0x28) = &rsi_1[1]
int64_t rax_10 = data_143db7ac8
rsi_1[0x1b].d += 1
void*** rcx_8 = rsi_1[0x1c]
rsi_1[0x1d] = rax_10

if (rax_10 == 0)
    sub_140a4fc50(rcx_8)
    rsi_1[0x1c] = 0
    sub_141d37530(&rsi_1[1])
    rsi_1[0x1b].d -= 1
else
    if (rcx_8 == 0)
        rcx_8.b = 1
        void*** rax_11 = sub_140a491d0(rcx_8.b)
        rsi_1[0x1c] = rax_11
        rcx_8 = rax_11
    
    (*rcx_8)[3](rcx_8)
    int64_t* rcx_9 = rsi_1[0x1d]
    (*(*rcx_9 + 0x10))(rcx_9, rsi_1)

*(arg1 + 0x18) = 1
void** result = sub_140a84c80(0, 0x30, 0)
void** result_1 = result

if (result != 0)
    result_1[1] = arg1
    *result_1 = &data_142d3fe58
    result_1[2] = sub_141d37940
    result_1[4] = sub_140a387b0()
    result = &data_142d3feb0
    *result_1 = &data_142d3feb0

if (result_1 != 0)
    sub_140599630(&data_14399fce8, 1)
    void arg_8
    int64_t* rax_16 = (*(*result_1 + 0x30))(result_1, &arg_8)
    int64_t rsi_2 = sx.q(data_14399fcf0)
    rbx = *rax_16
    int32_t rax_17 = (rsi_2 + 1).d
    bool cond:1_1 = rax_17 s<= data_14399fcf4
    data_14399fcf0 = rax_17
    
    if (not(cond:1_1))
        sub_1405a4f90(&data_14399fce8)
    
    result = (rsi_2 << 4) + data_14399fce8
    *result = result_1
    result[1].d = 3

*(arg1 + 0x38) = rbx
return result
