// 函数: sub_1423f0c70
// 地址: 0x1423f0c70
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

*(arg1 + 8) = arg2
int16_t* var_48
sub_140b291e0(arg3 + 0x80, &var_48, 0)
int16_t* const rbp = &data_142d40450
int16_t* const rdi = &data_142d40450
int64_t result_1 = *(arg1 + 8)
int32_t var_40

if (var_40 != 0)
    rdi = var_48

int64_t var_28
int64_t* rax_1 = sub_140b63b70(&result_1, &var_28)

if (rax_1[1].d != 0)
    *rax_1

int64_t arg_10 = *(arg3 + 0x90)
int64_t var_38
int64_t* rax_3 = sub_140b63b70(&arg_10, &var_38)
int16_t* const r8

if (rax_3[1].d == 0)
    r8 = &data_142d40450
else
    r8 = *rax_3

int16_t* const var_68 = rdi
int16_t* var_58
sub_140a2e390(&var_58, u"%s_%s_%s", r8)
int64_t rcx_4 = var_38

if (rcx_4 != 0)
    sub_140a74f90(rcx_4)

int64_t rcx_5 = var_28

if (rcx_5 != 0)
    sub_140a74f90(rcx_5)

int16_t* rcx_6 = var_48

if (rcx_6 != 0)
    sub_140a74f90(rcx_6)

int32_t var_50
int32_t r8_1 = var_50
int32_t r9_1 = 0
int16_t* r10 = var_58
int64_t rdx_3 = 0

while (true)
    int32_t rax_4
    
    if (r8_1 == 0)
        rax_4 = 0
    else
        rax_4 = r8_1 - 1
    
    if (r9_1 s>= rax_4)
        break
    
    int16_t rax_5 = r10[rdx_3]
    
    if ((rax_5 u< 0x41 || rax_5 u> 0x5a) && rax_5 - 0x61 u> 0x19 && rax_5 != 0x5f
            && (rdx_3 s<= 0 || rax_5 - 0x30 u> 9))
        r10[rdx_3] = 0x5f
        r8_1 = var_50
        r10 = var_58
    
    r9_1 += 1
    rdx_3 += 1

if (r8_1 != 0)
    rbp = r10

sub_140b58260(&result_1, rbp, 1)
int16_t* rcx_9 = var_58
int64_t result = result_1
*(arg1 + 0x18) = result

if (rcx_9 == 0)
    return result

return sub_140a74f90(rcx_9)
