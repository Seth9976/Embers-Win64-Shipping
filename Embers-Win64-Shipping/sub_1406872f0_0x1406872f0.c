// 函数: sub_1406872f0
// 地址: 0x1406872f0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

sub_140d30460(arg2, *(arg2 + 0x18), 0)
void* const rdx_1 = *(arg2 + 0x30)

if (rdx_1 == 0 || ((zx.q(*(*(rdx_1 + 8) + 0x10)) u>> 0xf).b & 1) == 0)
    rdx_1 = nullptr

int64_t rax_2 = *(arg2 + 0x20)
void* r8 = *(arg2 + 0x38)
int64_t rcx_3
rcx_3.b = rax_2 != 0
*(arg2 + 0x20) = rcx_3 + rax_2
int64_t var_18
int64_t* result = sub_140686a30(&var_18, rdx_1, r8)
int64_t* result_1 = result

if (arg3 != result)
    int64_t rcx_6 = *arg3
    
    if (rcx_6 != 0)
        sub_140a74f90(rcx_6)
    
    *arg3 = *result_1
    *result_1 = 0
    arg3[1].d = result_1[1].d
    result = zx.q(*(result_1 + 0xc))
    *(arg3 + 0xc) = result.d
    result_1[1] = 0

int64_t rcx_8 = var_18

if (rcx_8 == 0)
    return result

return sub_140a74f90(rcx_8)
