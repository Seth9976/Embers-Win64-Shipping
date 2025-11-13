// 函数: sub_141724c50
// 地址: 0x141724c50
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t r8 = sx.q(arg1[6]) * 0xb0
int64_t rdx = **(arg1 + 0x10)
void* rdi = *(r8 + rdx + 0x20)
void* r14_2 = (sx.q(*(r8 + rdx + 0x28)) << 6) + rdi

while (rdi != r14_2)
    int32_t rbx_1 = *(*(arg1 + 0x20) + 8)
    uint64_t* rax_3 = sub_14172ea90(*(arg1 + 8), rdi)
    rdi += 0x40
    *rax_3 = -1
    rax_3[1].d = rbx_1

*(sx.q(*arg1) * 0x3c + **(arg1 + 0x28) + 0x38) = 1
void* rdx_3 = **(arg1 + 0x10)
void** const var_b8 = &data_142fc49a8
int64_t var_a8 = 0
int64_t var_a0 = 0
int64_t* var_58 = nullptr
int32_t i_2 = 0
int64_t var_68 = 0
int32_t var_60 = 0
int64_t var_48
__builtin_memset(&var_48, 0, 0x20)
int32_t var_28 = 0x47c35000
int16_t var_b0 = 0x100
sub_141681000(&var_b8, rdx_3 + sx.q(arg1[6]) * 0xb0 + 0x20, 0, zx.o(0), 0xf)
int64_t* rdi_1 = *(arg1 + 0x20)
int64_t rbx_2 = sx.q(rdi_1[1].d)
int32_t rax_8 = (rbx_2 + 1).d
rdi_1[1].d = rax_8

if (rax_8 s> *(rdi_1 + 0xc))
    sub_1417500c0(rdi_1)

sub_141702d20(rbx_2 * 0x98 + *rdi_1, &var_b8)
int64_t* result = *(arg1 + 0x28)
*(sx.q(*arg1) * 0x3c + *result + 0x30) = rbx_2.d
int64_t var_38

if (var_38 != 0)
    result = sub_140a74f90(var_38)

int64_t rcx_10 = var_48

if (rcx_10 != 0)
    result = sub_140a74f90(rcx_10)

int32_t i_1 = i_2
int64_t* rbx_3 = var_58

if (i_1 != 0)
    int32_t i
    
    do
        int64_t rcx_11 = *rbx_3
        
        if (rcx_11 != 0)
            result = sub_140a74f90(rcx_11)
        
        rbx_3 = &rbx_3[2]
        i = i_1
        i_1 -= 1
    while (i != 1)
    rbx_3 = var_58

if (rbx_3 != 0)
    result = sub_140a74f90(rbx_3)

if (var_a8 == 0)
    return result

return sub_140a74f90(var_a8)
