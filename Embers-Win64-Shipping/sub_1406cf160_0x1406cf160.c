// 函数: sub_1406cf160
// 地址: 0x1406cf160
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t* arg_10 = arg2
int64_t* arg_8 = arg1
int32_t var_e8 = 0
*arg1 = 0
arg1[1] = 0
int32_t var_e8_1 = 1
int64_t* var_f8 = nullptr
int32_t i_2 = 0
int16_t* var_d0
sub_1406c8fb0(&var_d0, arg2)
sub_140a464c0()
int16_t* const r8_1 = &data_142d40450
int32_t var_c8

if (var_c8 != 0)
    r8_1 = var_d0

(*(data_14399ea08 + 0x78))(&data_14399ea08, &var_f8, r8_1, 0, 1)
int64_t* rbx = var_f8
void* r15_2 = &rbx[sx.q(i_2) * 2]

if (rbx != r15_2)
    do
        int64_t var_e0
        int64_t* arg_18 = &var_e0
        var_e0 = 0
        int32_t rdi_1 = rbx[1].d
        int64_t r14_1 = *rbx
        int32_t var_d8_1 = rdi_1
        
        if (rdi_1 != 0)
            sub_1405a4c70(&var_e0, rdi_1, 0)
            memcpy(var_e0, r14_1, rdi_1 * 2)
        else
            int32_t var_d4_1 = 0
        
        void var_c0
        int128_t var_b0
        int128_t* rax_2
        rax_2, arg3 = sub_1406cedb0(&var_b0, sub_1406c8f40(&var_c0, arg2, &var_e0), arg3)
        int64_t rdi_2 = sx.q(arg1[1].d)
        int32_t rcx_5 = (rdi_2 + 1).d
        arg1[1].d = rcx_5
        
        if (rcx_5 s> *(arg1 + 0xc))
            sub_1406d1af0(arg1)
        
        sub_1406cad20(rdi_2 * 0x70 + *arg1, rax_2)
        int64_t var_58
        
        if (var_58 != 0)
            sub_140a74f90(var_58)
        
        void var_70
        sub_1406cae40(&var_70)
        int64_t var_80
        
        if (var_80 != 0)
            sub_140a74f90(var_80)
        
        int64_t var_90
        
        if (var_90 != 0)
            sub_140a74f90(var_90)
        
        int64_t var_a0
        
        if (var_a0 != 0)
            sub_140a74f90(var_a0)
        
        int64_t rcx_14 = var_b0.q
        
        if (rcx_14 != 0)
            sub_140a74f90(rcx_14)
        
        int64_t rcx_15 = var_e0
        
        if (rcx_15 != 0)
            sub_140a74f90(rcx_15)
        
        rbx = &rbx[2]
    while (rbx != r15_2)
    
    rbx = var_f8

int16_t* rcx_16 = var_d0

if (rcx_16 != 0)
    sub_140a74f90(rcx_16)
    rbx = var_f8

int32_t i_1 = i_2

if (i_1 != 0)
    int32_t i
    
    do
        int64_t rcx_17 = *rbx
        
        if (rcx_17 != 0)
            sub_140a74f90(rcx_17)
        
        rbx = &rbx[2]
        i = i_1
        i_1 -= 1
    while (i != 1)
    rbx = var_f8

if (rbx != 0)
    sub_140a74f90(rbx)

int64_t rcx_19 = *arg2

if (rcx_19 != 0)
    sub_140a74f90(rcx_19)

return arg1
