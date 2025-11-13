// 函数: sub_141d53520
// 地址: 0x141d53520
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

if (arg2[1].d s<= 1)
    int64_t result
    result.b = 0
    return result

int16_t* var_28
sub_140b18720(&var_28, arg2, 1)
int16_t* const rbx = &data_142d40450
int32_t var_20

if (var_20 != 0)
    rbx = var_28

void* rax = sub_141d5e170()
uint64_t arg_18
int64_t* rax_1 = sub_140b58260(&arg_18, rbx, 1)
uint64_t arg_10
sub_140d25240(&arg_10, sub_140cde0b0(), rax, *rax_1)
uint64_t rbx_2 = arg_10
arg_18 = rbx_2
void* rax_3 = sub_140cde0b0()
char rax_4 = sub_140b5b8a0(rbx_2.d, 0)
int32_t rcx_3
rcx_3.b = arg_18:4.d == 0

if ((rcx_3.b & rax_4) != 0)
    sub_140d19010(rax_3, 
        NewObject with empty name can't be used to create default subobjects (inside of UObject derived "
    "class constructor) as it produces incon")

void* rax_6 = sub_140d2dfc0(sub_141d5e170(), rax_3, rbx_2, 0x48, 0, 0, 0, 0, 0)
sub_141d5bf10(rax_6, arg2)

if (rax_6 != 0)
    int64_t rdi_2 = sx.q(*(arg1 + 0x30))
    int32_t rax_7 = (rdi_2 + 1).d
    *(arg1 + 0x30) = rax_7
    
    if (rax_7 s> *(arg1 + 0x34))
        sub_1405a4d70(arg1 + 0x28)
    
    rbx_2.b = 1
    *(*(arg1 + 0x28) + (rdi_2 << 3)) = rax_6
else
    rbx_2.b = 0

int16_t* rcx_8 = var_28

if (rcx_8 != 0)
    sub_140a74f90(rcx_8)

return zx.q(rbx_2.b)
