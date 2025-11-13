// 函数: sub_14199ccb0
// 地址: 0x14199ccb0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t var_68 = 0
int64_t rax = *arg9
int64_t var_78[0x2]
var_78[0] = rax

if (rax != 0)
    void* rax_1 = arg9[2]
    void* rcx = &arg9[4]
    
    if (rax_1 != 0)
        rcx = rax_1
    
    (**rcx)(rcx, &var_68)

sub_141998890(arg1, arg2, arg3, arg4, arg5, arg6, arg7, arg8, &var_78)

if (arg9[8] != 0)
    void* rax_6 = arg9[0xa]
    void* rcx_2 = &arg9[0xc]
    
    if (rax_6 != 0)
        rcx_2 = rax_6
    
    arg9[8]((*(*rcx_2 + 8))(rcx_2), arg1)

int64_t rbp_1 = data_1439c91b0
void*** rcx_6 = (*(arg1 + 0x30) + 7) & 0xfffffffffffffff8
void* rax_9 = &rcx_6[5]

if (rax_9 u> *(arg1 + 0x38))
    sub_140b0e3d0(arg1 + 0x30, 0x30)
    rcx_6 = (*(arg1 + 0x30) + 7) & 0xfffffffffffffff8
    rax_9 = &rcx_6[5]

*(arg1 + 0x30) = rax_9
int64_t* rax_10 = *(arg1 + 8)
*(arg1 + 0x14) += 1
*rax_10 = rcx_6
*(arg1 + 8) = &rcx_6[1]
rcx_6[1] = 0
*rcx_6 = &data_142d56618
rcx_6[2].d = 0
rcx_6[3] = rbp_1
rcx_6[4].d = 0
void*** rcx_12 = (*(arg1 + 0x30) + 7) & 0xfffffffffffffff8
void* rax_12 = &rcx_12[4]

if (rax_12 u> *(arg1 + 0x38))
    sub_140b0e3d0(arg1 + 0x30, 0x28)
    rcx_12 = (*(arg1 + 0x30) + 7) & 0xfffffffffffffff8
    rax_12 = &rcx_12[4]

*(arg1 + 0x30) = rax_12
int64_t* rax_13 = *(arg1 + 8)
*(arg1 + 0x14) += 1
*rax_13 = rcx_12
*(arg1 + 8) = &rcx_12[1]
rcx_12[1] = 0
void** const result = &data_142d54988
*rcx_12 = &data_142d54988
rcx_12[2].d = 0
*(rcx_12 + 0x14) = 2
rcx_12[3].d = 1

if (arg9[0x10] != 0)
    void* rax_15 = arg9[0x12]
    void* rcx_16 = &arg9[0x14]
    
    if (rax_15 != 0)
        rcx_16 = rax_15
    
    result = arg9[0x10]((*(*rcx_16 + 8))(rcx_16), arg1)
    
    if (arg9[0x10] != 0)
        void* rax_18 = arg9[0x12]
        void* rcx_18 = &arg9[0x14]
        
        if (rax_18 != 0)
            rcx_18 = rax_18
        
        result = (*(*rcx_18 + 0x10))(rcx_18)

if (arg9[8] != 0)
    void* rax_20 = arg9[0xa]
    void* rcx_19 = &arg9[0xc]
    
    if (rax_20 != 0)
        rcx_19 = rax_20
    
    result = (*(*rcx_19 + 0x10))(rcx_19)

if (*arg9 == 0)
    return result

void* rax_22 = arg9[2]
void* rcx_20 = &arg9[4]

if (rax_22 != 0)
    rcx_20 = rax_22

return (*(*rcx_20 + 0x10))(rcx_20)
