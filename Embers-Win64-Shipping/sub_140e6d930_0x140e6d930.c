// 函数: sub_140e6d930
// 地址: 0x140e6d930
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

sub_140ab3dc0(arg4)
int64_t* rax = j_sub_140a82f30(0x88)
int64_t* rsi

if (rax == 0)
    rsi = nullptr
else
    rsi = sub_140e526e0(rax, *(*arg1 + 0x10))

void*** rax_2 = j_sub_140a82f30(0x18)
void*** rdi = rax_2

if (rax_2 == 0)
    rdi = nullptr
else
    rax_2[1].d = 1
    *(rax_2 + 0xc) = 1
    *rdi = &data_142ed9e78
    rdi[2] = rsi

int64_t* var_28 = rsi
void*** var_20 = rdi

if (arg2 == &var_28)
label_140e6da25:
    
    if (rdi != 0)
        rdi[1].d -= 1
        
        if (rdi[1].d == 1)
            (**rdi)(rdi)
            int32_t temp1_1 = *(rdi + 0xc)
            *(rdi + 0xc) -= 1
            
            if (temp1_1 == 1)
                (*rdi)[1](rdi, 1)
else
    *arg2 = rsi
    int64_t* rsi_1 = arg2[1]
    var_28 = nullptr
    
    if (rdi == rsi_1)
        goto label_140e6da25
    
    void*** var_20_1 = nullptr
    arg2[1] = rdi
    
    if (rsi_1 != 0)
        rsi_1[1].d -= 1
        
        if (rsi_1[1].d == 1)
            (**rsi_1)(rsi_1)
            int32_t temp3_1 = *(rsi_1 + 0xc)
            *(rsi_1 + 0xc) -= 1
            
            if (temp3_1 == 1)
                (*(*rsi_1 + 8))(rsi_1, 1)
        
        rdi = var_20_1
        goto label_140e6da25

*(*arg2 + 0x74) = arg3
sub_14065da90(&(*arg2)[2], arg4)
sub_14065da90(&(*arg2)[5], arg5)
int64_t* rcx_10 = *arg2
*(rcx_10 + 0x50) = *arg6
rcx_10[0xc] = arg6[1].q
rcx_10[0xd].d = *(arg6 + 0x18)
*(*arg2 + 0x84) = arg7
int64_t* rdi_1 = (*arg2)[8]
sub_140627710(rdi_1, arg8)
rdi_1[3].d ^= (rdi_1[3].d ^ arg8[3].d) & 1
int32_t rcx_16 = ((arg8[3].d ^ rdi_1[3].d) & 2) ^ rdi_1[3].d
rdi_1[3].d = rcx_16
int32_t rdx_8 = ((rcx_16 ^ arg8[3].d) & 4) ^ rcx_16
rdi_1[3].d = rdx_8
rdi_1[3].d = ((rdx_8 ^ arg8[3].d) & 8) ^ rdx_8
void* rdi_2 = (*arg2)[8]
sub_140627710(rdi_2 + 0x20, arg9)
*(rdi_2 + 0x38) ^= (*(rdi_2 + 0x38) ^ arg9[3].d) & 1
int32_t rcx_21 = ((*(rdi_2 + 0x38) ^ arg9[3].d) & 2) ^ *(rdi_2 + 0x38)
*(rdi_2 + 0x38) = rcx_21
int32_t rdx_13 = ((rcx_21 ^ arg9[3].d) & 4) ^ rcx_21
*(rdi_2 + 0x38) = rdx_13
*(rdi_2 + 0x38) = ((rdx_13 ^ arg9[3].d) & 8) ^ rdx_13
var_28 = *arg2
void* rax_28 = arg2[1]
void* var_20_2 = rax_28

if (rax_28 != 0)
    *(rax_28 + 8) += 1

return sub_140e5d410(sub_140e64ad0(), arg1, &var_28)
