// 函数: sub_140699d60
// 地址: 0x140699d60
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int32_t rdi = 0
int32_t arg_18 = 0
sub_140f5d090(*(*(arg1 + 8) + 0x238), 0)
int64_t var_28
int64_t var_18
int64_t* rbx

if (sub_140a32a50(sub_140ac6680(arg2), &(*(arg1 + 8))[0x21], 1) == 0)
    rbx.b = 0
else
    int64_t* rax_2 = sub_140b1a780(&var_18, *(arg1 + 8) + 0x108)
    int64_t* rax_4 = sub_140b1a780(&var_28, sub_140ac6680(arg2))
    int16_t* const rcx_7 = &data_142d40450
    int16_t* rdx_4
    
    if (rax_2[1].d == 0)
        rdx_4 = &data_142d40450
    else
        rdx_4 = *rax_2
    
    if (rax_4[1].d != 0)
        rcx_7 = *rax_4
    
    rdi = 3
    
    if (sub_140a54510(rcx_7, rdx_4) != 0)
        rbx.b = 0
    else if (sub_140b12f50(sub_140ac6680(arg2)) != 0)
        rbx.b = 0
    else
        rbx.b = 1

if ((rdi.b & 2) != 0)
    int64_t rcx_10 = var_28
    rdi &= 0xfffffffd
    
    if (rcx_10 != 0)
        sub_140a74f90(rcx_10)

if ((rdi.b & 1) != 0)
    int64_t rcx_11 = var_18
    
    if (rcx_11 != 0)
        sub_140a74f90(rcx_11)

int64_t* rax_8
uint64_t* rcx_12
void* rbx_1

if (rbx.b == 0)
    rax_8 = sub_140ac6680(arg2)
    rbx_1 = *(arg1 + 8)
    rcx_12 = rbx_1 + 0x108
else
    rbx_1 = *(arg1 + 8)
    rcx_12 = rbx_1 + 0x108
    rax_8 = rcx_12

sub_140597df0(rcx_12, rax_8)
sub_1406a8270(rbx_1)
void* result
result.b = 1
return result
