// 函数: sub_1423f49d0
// 地址: 0x1423f49d0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t arg_8 = *(arg1 + 0x18)
int16_t* var_78
sub_140b63b70(&arg_8, &var_78)
sub_140a2f8e0(&var_78, &data_143f5b2b0, 1)
int16_t* const rdx_1 = &data_142d40450
int32_t var_70

if (var_70 != 0)
    rdx_1 = var_78

sub_140b58260(&arg_8, rdx_1, 1)
*(arg1 + 0x90) = arg_8
int16_t* var_58
sub_140b291e0(arg1 + 0x80, &var_58, 0)
int16_t* const r8 = &data_142d40450

if (var_70 != 0)
    r8 = var_78

int16_t* var_68
sub_140a2e390(&var_68, u"%s__Direction_%s", r8)
int16_t* rcx_5 = var_58

if (rcx_5 != 0)
    sub_140a74f90(rcx_5)

int32_t var_60
int32_t r8_1 = var_60
int32_t r9_2 = 0
int16_t* r10 = var_68
int64_t rdx_3 = 0

while (true)
    int32_t rax_2
    
    if (r8_1 == 0)
        rax_2 = 0
    else
        rax_2 = r8_1 - 1
    
    if (r9_2 s>= rax_2)
        break
    
    int16_t rax_3 = r10[rdx_3]
    
    if ((rax_3 u< 0x41 || rax_3 u> 0x5a) && rax_3 - 0x61 u> 0x19 && rax_3 != 0x5f
            && (rdx_3 s<= 0 || rax_3 - 0x30 u> 9))
        r10[rdx_3] = 0x5f
        r8_1 = var_60
        r10 = var_68
    
    r9_2 += 1
    rdx_3 += 1

int16_t* const rdx_4 = &data_142d40450

if (r8_1 != 0)
    rdx_4 = r10

sub_140b58260(&arg_8, rdx_4, 1)
int16_t* r8_2 = &data_142d40450

if (var_70 != 0)
    r8_2 = var_78

*(arg1 + 0x98) = arg_8
sub_140a2e390(&var_58, u"%s__UpdateFunc", r8_2)
int16_t* const rdx_5 = &data_142d40450
int32_t var_50

if (var_50 != 0)
    rdx_5 = var_58

sub_140b58260(&arg_8, rdx_5, 1)
int16_t* rcx_10 = var_58
*(arg1 + 0xa0) = arg_8

if (rcx_10 != 0)
    sub_140a74f90(rcx_10)

int16_t* r8_3 = &data_142d40450

if (var_70 != 0)
    r8_3 = var_78

sub_140a2e390(&var_58, u"%s__FinishedFunc", r8_3)
int16_t* rdx_6 = &data_142d40450

if (var_50 != 0)
    rdx_6 = var_58

sub_140b58260(&arg_8, rdx_6, 1)
int16_t* rcx_13 = var_58
*(arg1 + 0xa8) = arg_8

if (rcx_13 != 0)
    sub_140a74f90(rcx_13)

void* i = *(arg1 + 0x30)

for (void* r14 = i + sx.q(*(arg1 + 0x38)) * 0x28; i != r14; i += 0x28)
    arg_8 = *(i + 8)
    int64_t var_38
    int64_t* rax_9 = sub_140b63b70(&arg_8, &var_38)
    
    if (rax_9[1].d != 0)
        *rax_9
    
    int64_t arg_10 = *(arg1 + 0x90)
    int64_t var_48
    int64_t* rax_11 = sub_140b63b70(&arg_10, &var_48)
    int16_t* const r8_4
    
    if (rax_11[1].d == 0)
        r8_4 = &data_142d40450
    else
        r8_4 = *rax_11
    
    sub_140a2e390(&var_58, u"%s__%s__EventFunc", r8_4)
    int16_t* rdx_9 = &data_142d40450
    
    if (var_50 != 0)
        rdx_9 = var_58
    
    int64_t arg_18
    sub_140b58260(&arg_18, rdx_9, 1)
    int16_t* rcx_19 = var_58
    *(i + 0x18) = arg_18
    
    if (rcx_19 != 0)
        sub_140a74f90(rcx_19)
    
    int64_t rcx_20 = var_48
    
    if (rcx_20 != 0)
        sub_140a74f90(rcx_20)
    
    int64_t rcx_21 = var_38
    
    if (rcx_21 != 0)
        sub_140a74f90(rcx_21)

void* i_1 = *(arg1 + 0x40)

for (void* rsi_2 = i_1 + sx.q(*(arg1 + 0x48)) * 0x28; i_1 != rsi_2; i_1 += 0x28)
    sub_1423f0c70(i_1, *(i_1 + 8), arg1)

void* i_2 = *(arg1 + 0x50)

for (void* rsi_3 = i_2 + sx.q(*(arg1 + 0x58)) * 0x28; i_2 != rsi_3; i_2 += 0x28)
    sub_1423f0c70(i_2, *(i_2 + 8), arg1)

void* i_3 = *(arg1 + 0x60)
int64_t result = sx.q(*(arg1 + 0x68))

for (void* rsi_4 = i_3 + result * 0x28; i_3 != rsi_4; i_3 += 0x28)
    result = sub_1423f0c70(i_3, *(i_3 + 8), arg1)

int16_t* rcx_28 = var_68

if (rcx_28 != 0)
    result = sub_140a74f90(rcx_28)

int16_t* rcx_29 = var_78

if (rcx_29 == 0)
    return result

return sub_140a74f90(rcx_29)
