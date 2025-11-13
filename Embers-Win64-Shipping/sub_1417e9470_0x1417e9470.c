// 函数: sub_1417e9470
// 地址: 0x1417e9470
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t r9 = *(arg2 + 0x20)
int64_t rbx = 0
int64_t var_18 = 0
int64_t rax
rax.b = r9 != 0
*(arg2 + 0x20) = rax + r9
int64_t rsi = sx.q(*(arg1 + 0x110))
int64_t rbp = *(arg1 + 0x108)
int32_t var_10 = rsi.d
int32_t rbp_1

if (rsi.d != 0)
    sub_1407c3650(&var_18, rsi.d, 0)
    rbx = var_18
    memcpy(rbx, rbp, (rsi * 0xc).d)
    int32_t var_c
    rbp_1 = var_c
    rsi = zx.q(var_10)
else
    rbp_1 = 0

int64_t* result = &var_18

if (arg3 != &var_18)
    int64_t rcx_2 = *arg3
    
    if (rcx_2 != 0)
        result = sub_140a74f90(rcx_2)
    
    *arg3 = rbx
    arg3[1].d = rsi.d
    *(arg3 + 0xc) = rbp_1
else if (rbx != 0)
    return sub_140a74f90(rbx)

return result
