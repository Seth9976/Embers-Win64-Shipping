// 函数: sub_1405ece00
// 地址: 0x1405ece00
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t var_18 = -2
*arg1 = &data_142d5eef0
arg1[1] = &data_142d5ef28
sub_1405ffd50(arg1)
void* rbp = arg1[2]

if (rbp != 0)
    int64_t* rdi_1 = *(rbp + 8)
    
    if (rdi_1 != 0)
        rdi_1[1].d -= 1
        
        if (rdi_1[1].d == 1)
            (**rdi_1)(rdi_1)
            int32_t rax_3 = *(rdi_1 + 0xc)
            *(rdi_1 + 0xc) -= 1
            
            if (rax_3 == 1)
                (*(*rdi_1 + 8))(rdi_1, 1)
    
    j_sub_140a74f90(rbp)

arg1[2] = 0
void* rbp_1 = arg1[0x2c]

if (rbp_1 != 0)
    int64_t* rdi_2 = *(rbp_1 + 8)
    
    if (rdi_2 != 0)
        rdi_2[1].d -= 1
        
        if (rdi_2[1].d == 1)
            (**rdi_2)(rdi_2)
            int32_t rsi_1 = *(rdi_2 + 0xc)
            *(rdi_2 + 0xc) -= 1
            
            if (rsi_1 == 1)
                (*(*rdi_2 + 8))(rdi_2, zx.q(rsi_1))
    
    j_sub_140a74f90(rbp_1)

arg1[0x2c] = 0
sub_1405ec400(&arg1[0x36])
arg1[0x30] = &data_142d5eeb0
arg1[0x31] = &data_142d5eed0
sub_1405ec780(&arg1[0x34])
arg1[0x31] = &data_142d5ee90
arg1[0x30] = &data_142d5ee90
int64_t* rdi_3 = arg1[0x2e]

if (rdi_3 != 0)
    rdi_3[1].d -= 1
    
    if (rdi_3[1].d == 1)
        (**rdi_3)(rdi_3)
        int32_t temp2_1 = *(rdi_3 + 0xc)
        *(rdi_3 + 0xc) -= 1
        
        if (temp2_1 == 1)
            (*(*rdi_3 + 8))(rdi_3, 1)

int64_t* rcx_10 = arg1[0x28]

if (rcx_10 != 0)
    (*(*rcx_10 + 0x10))(rcx_10)

sub_1405ec400(&arg1[0x26])
arg1[0x20] = &data_142d5eeb0
arg1[0x21] = &data_142d5eed0
sub_1405ec780(&arg1[0x24])
arg1[0x21] = &data_142d5ee90
arg1[0x20] = &data_142d5ee90
int64_t* rcx_13 = arg1[0x1d]

if (rcx_13 != 0)
    (*(*rcx_13 + 0x10))(rcx_13)

int64_t rcx_14 = arg1[0x1b]

if (rcx_14 != 0)
    sub_140a74f90(rcx_14)

int64_t rcx_15 = arg1[0x19]

if (rcx_15 != 0)
    sub_140a74f90(rcx_15)

DeleteCriticalSection(&arg1[0x14])
sub_1405ec400(&arg1[0x12])
arg1[0xc] = &data_142d5eeb0
arg1[0xd] = &data_142d5eed0
sub_1405ec780(&arg1[0x10])
arg1[0xd] = &data_142d5ee90
arg1[0xc] = &data_142d5ee90
sub_1405ec400(&arg1[0xa])
arg1[4] = &data_142d5eeb0
arg1[5] = &data_142d5eed0
sub_1405ec780(&arg1[8])
arg1[5] = &data_142d5ee90
arg1[4] = &data_142d5ee90
arg1[1] = &data_142d574e0
*arg1 = &data_142d575a0
return &data_142d575a0
