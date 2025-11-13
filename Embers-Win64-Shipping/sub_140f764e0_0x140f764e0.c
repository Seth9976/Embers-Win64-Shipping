// 函数: sub_140f764e0
// 地址: 0x140f764e0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

char r10 = *(arg1 + 0x788)
int32_t r9 = *(arg1 + 0x790)
int32_t rax
rax.b = *(arg1 + 0x798) == 1
int32_t arg_18 = r9
int32_t rdx = 0

if (rax + *(arg1 + 0x794) s>= 0)
    rdx = rax + *(arg1 + 0x794)

void* rax_2 = arg1 + 0x780
int32_t arg_1c = rdx

if (r10 == 0)
    rax_2 = &arg_18

int64_t rax_3 = *rax_2

if (rax_3.d == r9 && (rax_3 u>> 0x20).d == rdx)
    sub_1405d9400()
    *arg2 = data_143cd6fd8
    void* rcx_1 = data_143cd6fe0
    arg2[1] = rcx_1
    
    if (rcx_1 != 0)
        *(rcx_1 + 8) += 1
    
    arg2[2].d = data_143cd6fe8
    return arg2

void* rcx_2 = *(arg1 + 0x48)
int32_t arg_8
void* rax_7 = &arg_8
int32_t arg_c = rdx
arg_8 = r9

if (r10 != 0)
    rax_7 = arg1 + 0x780

int64_t var_28 = 0
int64_t var_20 = 0
int64_t var_18 = *rax_7
int64_t var_10 = arg_8.q
sub_140f02770(rcx_2, &var_28, &var_18)
sub_140aae2f0(arg2, &var_28)
int64_t rcx_4 = var_28

if (rcx_4 != 0)
    sub_140a74f90(rcx_4)

return arg2
