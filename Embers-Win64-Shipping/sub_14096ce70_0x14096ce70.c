// 函数: sub_14096ce70
// 地址: 0x14096ce70
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int32_t rax = *(arg1 + 0x7c)
int64_t var_218
__builtin_memset(&var_218, 0, 0x50)
int64_t var_1c0
__builtin_memset(&var_1c0, 0, 0x50)
uint64_t* rcx_12
int64_t var_208
int64_t var_1f8
int64_t var_1e8
int64_t var_1d8
int32_t var_1c8
int64_t var_1b0
int64_t var_1a0
int64_t var_190
int64_t var_180

if (rax != 1)
label_14096d021:
    uint64_t var_b0 = 0
    int64_t var_a8
    __builtin_memset(&var_a8, 0, 0x48)
    uint64_t var_58 = 0
    int64_t var_50
    __builtin_memset(&var_50, 0, 0x48)
    char var_b8 = rax.b
    sub_140597df0(&var_b0, &var_218)
    uint64_t var_a0
    sub_140597df0(&var_a0, &var_208)
    uint64_t var_90
    sub_140597df0(&var_90, &var_1f8)
    uint64_t var_80
    sub_140597df0(&var_80, &var_1e8)
    uint64_t var_70
    sub_140597df0(&var_70, &var_1d8)
    int32_t var_60_1 = var_1c8
    sub_140597df0(&var_58, &var_1c0)
    uint64_t var_48
    sub_140597df0(&var_48, &var_1b0)
    uint64_t var_38
    sub_140597df0(&var_38, &var_1a0)
    uint64_t var_28
    sub_140597df0(&var_28, &var_190)
    uint64_t var_18
    sub_140597df0(&var_18, &var_180)
    sub_1405a9f90(arg1 + 0x38, &var_b8)
    rcx_12 = &var_b0
else
    void* rdx_1 = *(arg1 + 0x60)
    
    if (rdx_1 != 0)
        sub_14094dbd0(&var_218, rdx_1 + 8)
        rax = *(arg1 + 0x7c)
    
    if (rdx_1 != 0 && rax != 1)
        goto label_14096d021
    
    uint64_t var_160 = 0
    int64_t var_158
    __builtin_memset(&var_158, 0, 0x48)
    uint64_t var_108 = 0
    int64_t var_100
    __builtin_memset(&var_100, 0, 0x48)
    char var_168 = 1
    sub_140597df0(&var_160, &var_218)
    uint64_t var_150
    sub_140597df0(&var_150, &var_208)
    uint64_t var_140
    sub_140597df0(&var_140, &var_1f8)
    uint64_t var_130
    sub_140597df0(&var_130, &var_1e8)
    uint64_t var_120
    sub_140597df0(&var_120, &var_1d8)
    int32_t var_110_1 = var_1c8
    sub_140597df0(&var_108, &var_1c0)
    uint64_t var_f8
    sub_140597df0(&var_f8, &var_1b0)
    uint64_t var_e8
    sub_140597df0(&var_e8, &var_1a0)
    uint64_t var_d8
    sub_140597df0(&var_d8, &var_190)
    uint64_t var_c8
    sub_140597df0(&var_c8, &var_180)
    sub_1405a9f90(arg1 + 0x28, &var_168)
    rcx_12 = &var_160
sub_140945400(rcx_12)
int64_t* var_220 = nullptr
int64_t var_228

if (arg1 + 0x60 != &var_228)
    *(arg1 + 0x60) = 0
    var_228 = 0
    sub_1405aeff0(arg1 + 0x68, &var_220)
    int64_t* rcx_26 = var_220
    
    if (rcx_26 != 0)
        rcx_26[1].d -= 1
        
        if (rcx_26[1].d == 1)
            int64_t* rbx_1 = var_220
            (**rbx_1)(rbx_1)
            int32_t rdi_1 = *(rbx_1 + 0xc)
            *(rbx_1 + 0xc) -= 1
            
            if (rdi_1 == 1)
                int64_t* rcx_28 = var_220
                (*(*rcx_28 + 8))(rcx_28, zx.q(rdi_1))

return sub_140945400(&var_218)
