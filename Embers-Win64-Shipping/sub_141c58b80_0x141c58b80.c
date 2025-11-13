// 函数: sub_141c58b80
// 地址: 0x141c58b80
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int32_t rax = arg4

if (data_143f34dac != 0)
    int32_t rax_1 = *(arg2 + 0x3d4)
    *(arg2 + 0x3d8) = rax_1
    *(arg3 + 0x40) = arg2 + 0x30
    return rax_1

float (* r12)[0x4] = *(arg2 + 0x30)
int64_t r15
r15.b = 0
int32_t var_68

if ((*(arg2 + 0x3d1) & 8) != 0)
    var_68 = rax
    void* var_38_1 = arg2 + 0x330
    int32_t var_50_1 = *(arg2 + 0x3d4)
    int64_t var_60_1 = *(arg2 + 0x3e0)
    int32_t rax_5 = *(arg2 + 0x29c)
    *(arg2 + 0x298) = 0
    
    if (rax_5 s< 0 && rax_5 != 0)
        sub_140775b10(arg2 + 0x290, 0)
    
    int32_t rax_6 = (arg2 + 0x30)[1].d
    int64_t rdi_1 = sx.q(*(arg2 + 0x298))
    int32_t rax_7 = rax_6 + rdi_1.d
    *(arg2 + 0x298) = rax_7
    
    if (rax_7 s> *(arg2 + 0x29c))
        sub_140775270(arg2 + 0x290)
    
    memset(*(arg2 + 0x290) + (rdi_1 << 2), 0, sx.q(rax_6) << 2)
    int64_t* rcx_4 = *(*(arg1 + 0x28) + 0x40)
    (*(*rcx_4 + 0x40))(rcx_4, &var_68, arg2 + 0x290)
    
    if ((*(*(arg1 + 0x28) + 0x353) & 1) == 0)
        int32_t rax_12 = *(arg3 + 0x3c)
        *(arg3 + 0x38) = 0
        
        if (rax_12 s< 0 && rax_12 != 0)
            sub_140775b10(arg3 + 0x30, 0)
        
        r15 = sx.q(*(arg2 + 0x298))
        
        if (r15.d != 0)
            int32_t rax_13 = *(arg3 + 0x38)
            int32_t rdx_2 = rax_13 + r15.d
            
            if (rdx_2 s> *(arg3 + 0x3c))
                sub_140775b10(arg3 + 0x30, rdx_2)
                rax_13 = *(arg3 + 0x38)
            
            memcpy(*(arg3 + 0x30) + (sx.q(rax_13) << 2), *(arg2 + 0x290), (r15 << 2).d)
            *(arg3 + 0x38) += r15.d
        
        r15.b = 1
    
    rax = arg4

if ((*(arg2 + 0x3d1) & 4) != 0)
    var_68 = rax
    void* var_38_2 = arg2 + 0x330
    int32_t var_50_2 = *(arg2 + 0x3d4)
    int64_t var_60_2 = *(arg2 + 0x3e0)
    int32_t rax_18 = *(arg2 + 0x29c)
    *(arg2 + 0x298) = 0
    
    if (rax_18 s< 0 && rax_18 != 0)
        sub_140775b10(arg2 + 0x290, 0)
    
    int32_t rax_19 = (arg2 + 0x30)[1].d
    int64_t rsi_2 = sx.q(*(arg2 + 0x298))
    int32_t rax_20 = rax_19 + rsi_2.d
    *(arg2 + 0x298) = rax_20
    
    if (rax_20 s> *(arg2 + 0x29c))
        sub_140775270(arg2 + 0x290)
    
    memset(*(arg2 + 0x290) + (rsi_2 << 2), 0, sx.q(rax_19) << 2)
    int64_t* rcx_13 = *(*(arg1 + 0x28) + 0x50)
    (*(*rcx_13 + 0x28))(rcx_13, &var_68, arg2 + 0x290)
    int64_t rdx_6 = *(arg2 + 0x290)
    
    if (r15.b == 0)
        memcpy(r12, rdx_6, arg5 << 2)
    else
        sub_141c470a0(*(arg3 + 0x30), rdx_6, r12, arg5)
else if (r15.b != 0)
    sub_141c3d450(*(arg3 + 0x30), r12, arg5)

if ((*(arg2 + 0x3d1) & 1) == 0)
    int32_t rax_33 = *(arg2 + 0x3d4)
    *(arg2 + 0x3d8) = rax_33
    *(arg3 + 0x40) = arg2 + 0x30
    return rax_33

int32_t rsi_3 = data_143f34a18
sub_140b34200("HRTF", rsi_3)
int32_t var_50_3 = *(arg2 + 0x3d4)
var_68 = arg4
void* var_38_3 = arg2 + 0x330
int64_t* var_58_3 = arg2 + 0x30

if ((*(*(arg1 + 0x28) + 0x352) & 0x40) == 0)
    int32_t rax_28 = *(arg2 + 0x29c)
    *(arg2 + 0x298) = 0
    
    if (rax_28 s< 0 && rax_28 != 0)
        sub_140775b10(arg2 + 0x290, 0)
    
    sub_14074a020(arg2 + 0x290, *(arg1 + 0x1b0) * 2)

int64_t* rcx_19 = *(arg1 + 0x30)
(*(*rcx_19 + 0x50))(rcx_19, &var_68, arg2 + 0x290)
char rdx_12 = *(*(arg1 + 0x28) + 0x352) & 0x40
int32_t rcx_20

if (rdx_12 == 0)
    rcx_20 = 2
else
    rcx_20 = *(arg2 + 0x3d4)

*(arg2 + 0x3d8) = rcx_20
void* const rax_31 = 0x30

if (rdx_12 == 0)
    rax_31 = 0x290

*(arg3 + 0x40) = rax_31 + arg2
return sub_140b38680("HRTF", rsi_3)
