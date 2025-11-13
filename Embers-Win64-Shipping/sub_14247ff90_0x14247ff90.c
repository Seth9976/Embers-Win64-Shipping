// 函数: sub_14247ff90
// 地址: 0x14247ff90
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t rcx = *(arg2 + 0x20)
int64_t rax
rax.b = rcx != 0
*(arg2 + 0x20) = rax + rcx
int64_t var_18
int64_t* result = sub_1420cef80(&var_18)
int64_t* result_1 = result

if (arg3 != result)
    int64_t rcx_2 = *arg3
    
    if (rcx_2 != 0)
        sub_140a74f90(rcx_2)
    
    *arg3 = *result_1
    *result_1 = 0
    arg3[1].d = result_1[1].d
    result = zx.q(*(result_1 + 0xc))
    *(arg3 + 0xc) = result.d
    result_1[1] = 0

int64_t rcx_4 = var_18

if (rcx_4 == 0)
    return result

return sub_140a74f90(rcx_4)
