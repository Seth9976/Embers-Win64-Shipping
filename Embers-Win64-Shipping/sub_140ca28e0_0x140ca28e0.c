// 函数: sub_140ca28e0
// 地址: 0x140ca28e0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t rdx = sx.q(*(arg1 + 0x48))

if (rdx.d == 0)
    return 

int32_t rbx_1 = 0
int64_t arg_8

if (rdx.d s<= 0 || (rdx - 1).d s>= rdx.d)
    arg_8 = 0
else
    arg_8 = *(*(arg1 + 0x40) + rdx * 0x10 - 0x10)

int16_t* var_38
sub_140b63b70(&arg_8, &var_38)
int32_t rax_3 = sub_140a23cf0(&var_38, &data_142d6ad1c, 0, 0, 0xffffffff)
int32_t var_30
int32_t rcx_5 = var_30
int32_t rdx_2 = rcx_5 - 1

if (rcx_5 == 0)
    rdx_2 = 0

int32_t rdx_3 = rdx_2 - rax_3
int32_t r10_1 = rcx_5 - 1

if (rcx_5 == 0)
    r10_1 = 0

int32_t rax_5 = r10_1 - rdx_3

if (r10_1 - rdx_3 s< 0)
    r10_1 = 0
else if (rax_5 s< r10_1)
    r10_1 = rax_5

if (rcx_5 != 0)
    rbx_1 = rcx_5 - 1

int32_t rbx_2 = rbx_1 - r10_1

if (rdx_3 s>= 0)
    if (rdx_3 s< rbx_2)
        rbx_2 = rdx_3
    
    if (rbx_2 != 0)
        int32_t rax_7 = rcx_5 - rbx_2
        
        if (rax_7 != r10_1)
            int16_t* r9_1 = var_38
            memmove(&r9_1[sx.q(r10_1)], &r9_1[sx.q(rbx_2 + r10_1)], (rax_7 - r10_1) * 2)
            rcx_5 = var_30
        
        var_30 = rcx_5 - rbx_2

arg_8 = *(arg1 + 0x18)
int16_t* var_18
sub_140b63b70(&arg_8, &var_18)
int32_t* i = *(arg1 + 0x40)

for (void* rdi_3 = &i[sx.q(*(arg1 + 0x48)) * 4]; i != rdi_3; i = &i[4])
    int16_t* var_28
    sub_140b63b70(i, &var_28)
    int16_t* const r8_3 = &data_142d40450
    int16_t* rdx_7 = &data_142d40450
    int32_t var_10
    
    if (var_10 != 0)
        r8_3 = var_18
    
    if (var_30 != 0)
        rdx_7 = var_38
    
    sub_140a306e0(&var_28, rdx_7, r8_3, 1)
    int16_t* rdx_8 = &data_142d40450
    int32_t var_20
    
    if (var_20 != 0)
        rdx_8 = var_28
    
    *i = *sub_140b58260(&arg_8, rdx_8, 1)
    int16_t* rcx_14 = var_28
    
    if (rcx_14 != 0)
        sub_140a74f90(rcx_14)

int16_t* rcx_15 = var_18

if (rcx_15 != 0)
    sub_140a74f90(rcx_15)

int16_t* rcx_16 = var_38

if (rcx_16 != 0)
    sub_140a74f90(rcx_16)
