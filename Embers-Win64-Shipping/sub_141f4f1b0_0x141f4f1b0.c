// 函数: sub_141f4f1b0
// 地址: 0x141f4f1b0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void* rax = *(arg1 + 0x430)

if (rax != 0)
    int64_t* rax_1 = *(rax + 0x58)
    
    if (rax_1 != 0)
        int64_t rdx = sx.q(*(arg1 + 0x558))
        
        if (rdx.d s>= 0 && rdx.d s< rax_1[1].d)
            *(*(*rax_1 + (rdx << 3)) + 0xec)

int64_t var_28
sub_140a2e390(&var_28, u"\nRequiredBones(%d) NumVerts(%d)", zx.q(*(arg1 + 0x7e8)))
int32_t rdi = arg2[1].d
int32_t var_20
int32_t rsi = var_20
int32_t rbp
int64_t rdi_1

if (rdi s> 1)
    int32_t rsi_1
    
    if (rsi == 0)
        rsi_1 = 0
    else
        rsi_1 = rsi - 1
    
    int32_t rax_3
    
    if (rdi == 0)
        rax_3 = rdi + 1
    
    if (rdi != 0 || rsi_1 == 0)
        rax_3 = 0
    
    int64_t rbp_1 = *arg2
    int32_t rcx_2 = rax_3 + rsi_1
    int64_t var_38 = 0
    int32_t var_2c
    
    if (rdi != 0 || rcx_2 != 0)
        sub_1405a4c70(&var_38, rdi + rcx_2, 0)
        memcpy(var_38, rbp_1, rdi * 2)
    else
        var_2c = 0
    
    sub_140a20ba0(&var_38, var_28, rsi_1)
    rdi_1 = var_38
    rsi = rdi
    rbp = var_2c
    var_38 = 0
    int32_t var_30_1
    var_30_1.q = 0
else
    rdi_1 = var_28
    int32_t var_1c
    rbp = var_1c
    var_28 = 0
    var_20.q = 0

void var_18
void* result = &var_18

if (arg2 != &var_18)
    int64_t rcx_6 = *arg2
    
    if (rcx_6 != 0)
        result = sub_140a74f90(rcx_6)
    
    *arg2 = rdi_1
    arg2[1].d = rsi
    *(arg2 + 0xc) = rbp
else if (rdi_1 != 0)
    result = sub_140a74f90(rdi_1)

int64_t rcx_8 = var_28

if (rcx_8 == 0)
    return result

return sub_140a74f90(rcx_8)
