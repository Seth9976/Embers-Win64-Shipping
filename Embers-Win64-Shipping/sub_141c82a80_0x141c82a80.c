// 函数: sub_141c82a80
// 地址: 0x141c82a80
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

bool cond:0 = arg1[0x15].b == 0
*arg1 = &data_14320f420
arg1[1] = &data_14320f440
arg1[2] = &data_14320f470
arg1[3] = &data_14320f488

if (not(cond:0))
    int64_t* rcx = arg1[0x18]
    
    if (rcx != 0)
        (**rcx)(rcx)
    
    int64_t* rcx_1 = arg1[0x1a]
    
    if (rcx_1 != 0)
        (*(*rcx_1 + 0x10))(rcx_1)
    
    arg1[0x15].b = 0

int64_t* rcx_2 = arg1[0x13]

if (rcx_2 != 0)
    sub_1405a46b0((*(*rcx_2 + 0x70))(rcx_2), arg1)
    int64_t* rcx_4 = arg1[0x13]
    (*(*rcx_4 + 0x48))(rcx_4, &arg1[6])
    uint64_t var_18 = 0
    int32_t var_10_1 = 0
    sub_141c8bc70(&arg1[8], &var_18)
    uint64_t rbp_1 = var_18
    uint64_t rdi_1 = rbp_1
    int64_t rsi_3 = (sx.q(var_10_1) << 4) + rbp_1
    
    if (rbp_1 != rsi_3)
        do
            int64_t* rcx_6 = arg1[0x13]
            (*(*rcx_6 + 0x48))(rcx_6, rdi_1)
            rdi_1 += 0x10
        while (rdi_1 != rsi_3)
    
    if (rbp_1 != 0)
        sub_140a74f90(rbp_1)

int64_t* rsi_4 = arg1[0x1b]

if (rsi_4 != 0)
    rsi_4[1].d -= 1
    
    if (rsi_4[1].d == 1)
        (**rsi_4)(rsi_4)
        int32_t rax_9 = *(rsi_4 + 0xc)
        *(rsi_4 + 0xc) -= 1
        
        if (rax_9 == 1)
            (*(*rsi_4 + 8))(rsi_4, 1)

int64_t* rsi_5 = arg1[0x19]

if (rsi_5 != 0)
    rsi_5[1].d -= 1
    
    if (rsi_5[1].d == 1)
        (**rsi_5)(rsi_5)
        int32_t rax_13 = *(rsi_5 + 0xc)
        *(rsi_5 + 0xc) -= 1
        
        if (rax_13 == 1)
            (*(*rsi_5 + 8))(rsi_5, 1)

int64_t* rsi_6 = arg1[0x14]

if (rsi_6 != 0)
    rsi_6[1].d -= 1
    
    if (rsi_6[1].d == 1)
        (**rsi_6)(rsi_6)
        int32_t rax_17 = *(rsi_6 + 0xc)
        *(rsi_6 + 0xc) -= 1
        
        if (rax_17 == 1)
            (*(*rsi_6 + 8))(rsi_6, 1)

CRITICAL_SECTION* lpCriticalSection = arg1[8]

if (lpCriticalSection != 0)
    DeleteCriticalSection(lpCriticalSection)
    j_sub_140a74f90(lpCriticalSection)

sub_1405ae000(&arg1[9])
arg1[3] = &data_142d5ee90
arg1[2] = &data_142d5c278
arg1[1] = &data_142e61488
*arg1 = &data_142d5ee90
int64_t* rcx_17 = arg1[5]

if (rcx_17 != 0)
    int32_t rdi_2 = *(rcx_17 + 0xc)
    *(rcx_17 + 0xc) -= 1
    
    if (rdi_2 == 1 && rcx_17 != 0)
        jump(*(*rcx_17 + 8))

return &data_142d5ee90
