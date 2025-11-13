// 函数: sub_141868940
// 地址: 0x141868940
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

*arg1 = &data_142fe7cb8
int64_t* rcx = arg1[0x60]

if (rcx != 0)
    (**rcx)(rcx, 1)

int64_t* rcx_1 = arg1[0x5f]

if (rcx_1 != 0)
    (**rcx_1)(rcx_1, 1)

int64_t* rcx_2 = arg1[0x5e]

if (rcx_2 != 0)
    (*(*rcx_2 + 8))(rcx_2, 1)

int64_t* rcx_3 = arg1[0x5d]

if (rcx_3 != 0)
    (**rcx_3)(rcx_3, 1)

int64_t* rcx_4 = arg1[0x5c]

if (rcx_4 != 0)
    (**rcx_4)(rcx_4, 1)

int64_t* rcx_5 = arg1[0x5b]

if (rcx_5 != 0)
    (**rcx_5)(rcx_5, 1)

int64_t* rcx_6 = arg1[0x5a]

if (rcx_6 != 0)
    (**rcx_6)(rcx_6, 1)

int64_t* rcx_7 = arg1[0x59]

if (rcx_7 != 0)
    (**rcx_7)(rcx_7, 1)

DeleteCriticalSection(&arg1[0x54])
arg1[0x44] = &data_142d56fa0
int64_t* rcx_9 = arg1[0x43]

if (rcx_9 != 0)
    (**rcx_9)(rcx_9, 1)

int64_t* rcx_10 = arg1[0x42]

if (rcx_10 != 0)
    (**rcx_10)(rcx_10, 1)

int64_t* rcx_11 = arg1[0x41]

if (rcx_11 != 0)
    (**rcx_11)(rcx_11, 1)

int64_t* rcx_12 = arg1[0x40]

if (rcx_12 != 0)
    (**rcx_12)(rcx_12, 1)

int64_t* rcx_13 = arg1[0x3f]

if (rcx_13 != 0)
    (**rcx_13)(rcx_13, 1)

int64_t* rcx_14 = arg1[0x3e]

if (rcx_14 != 0)
    (**rcx_14)(rcx_14, 1)

int64_t* rcx_15 = arg1[0x3d]

if (rcx_15 != 0)
    (**rcx_15)(rcx_15, 1)

int64_t* rcx_16 = arg1[0x3c]

if (rcx_16 != 0)
    (**rcx_16)(rcx_16, 1)

int64_t* rcx_17 = arg1[0x3b]

if (rcx_17 != 0)
    (**rcx_17)(rcx_17, 1)

int64_t* rcx_18 = arg1[0x3a]

if (rcx_18 != 0)
    (**rcx_18)(rcx_18, 1)

int64_t* rcx_19 = arg1[0x39]

if (rcx_19 != 0)
    (**rcx_19)(rcx_19, 1)

int64_t* rcx_20 = arg1[0x38]

if (rcx_20 != 0)
    (**rcx_20)(rcx_20, 1)

int64_t* rcx_21 = arg1[0x37]

if (rcx_21 != 0)
    (**rcx_21)(rcx_21, 1)

int32_t i_1 = arg1[0x36].d
int64_t* rdi = arg1[0x35]

if (i_1 != 0)
    int32_t i
    
    do
        int64_t rcx_22 = *rdi
        
        if (rcx_22 != 0)
            sub_140a74f90(rcx_22)
        
        rdi = &rdi[2]
        i = i_1
        i_1 -= 1
    while (i != 1)
    rdi = arg1[0x35]

if (rdi != 0)
    sub_140a74f90(rdi)

sub_140846380(&arg1[0x33])
int64_t* rcx_25 = arg1[0x31]

if (rcx_25 != 0)
    (**rcx_25)(rcx_25, 1)

int64_t* rsi = arg1[0x30]

if (rsi != 0)
    rsi[1].d -= 1
    
    if (rsi[1].d == 1)
        (**rsi)(rsi)
        int32_t rax_25 = *(rsi + 0xc)
        *(rsi + 0xc) -= 1
        
        if (rax_25 == 1)
            (*(*rsi + 8))(rsi, 1)

int64_t* rsi_1 = arg1[0x2e]

if (rsi_1 != 0)
    rsi_1[1].d -= 1
    
    if (rsi_1[1].d == 1)
        (**rsi_1)(rsi_1)
        int32_t rax_29 = *(rsi_1 + 0xc)
        *(rsi_1 + 0xc) -= 1
        
        if (rax_29 == 1)
            (*(*rsi_1 + 8))(rsi_1, 1)

int64_t* rsi_2 = arg1[0x2c]

if (rsi_2 != 0)
    rsi_2[1].d -= 1
    
    if (rsi_2[1].d == 1)
        (**rsi_2)(rsi_2)
        int32_t rax_33 = *(rsi_2 + 0xc)
        *(rsi_2 + 0xc) -= 1
        
        if (rax_33 == 1)
            (*(*rsi_2 + 8))(rsi_2, 1)

int64_t* rsi_3 = arg1[0x2a]

if (rsi_3 != 0)
    rsi_3[1].d -= 1
    
    if (rsi_3[1].d == 1)
        (**rsi_3)(rsi_3)
        int32_t rax_37 = *(rsi_3 + 0xc)
        *(rsi_3 + 0xc) -= 1
        
        if (rax_37 == 1)
            (*(*rsi_3 + 8))(rsi_3, 1)

int64_t* rsi_4 = arg1[0x27]

if (rsi_4 != 0)
    rsi_4[1].d -= 1
    
    if (rsi_4[1].d == 1)
        (**rsi_4)(rsi_4)
        int32_t rax_41 = *(rsi_4 + 0xc)
        *(rsi_4 + 0xc) -= 1
        
        if (rax_41 == 1)
            (*(*rsi_4 + 8))(rsi_4, 1)

int64_t* rsi_5 = arg1[0x24]

if (rsi_5 != 0)
    rsi_5[1].d -= 1
    
    if (rsi_5[1].d == 1)
        (**rsi_5)(rsi_5)
        int32_t rdi_1 = *(rsi_5 + 0xc)
        *(rsi_5 + 0xc) -= 1
        
        if (rdi_1 == 1)
            (*(*rsi_5 + 8))(rsi_5, zx.q(rdi_1))

int64_t rcx_38 = arg1[0x1e]

if (rcx_38 != 0)
    sub_140a74f90(rcx_38)

sub_140745b20(&arg1[0x1c])
sub_140745b20(&arg1[0x1a])
sub_141868d50(&arg1[1])
*arg1 = &data_142d4ba00
return &data_142d4ba00
