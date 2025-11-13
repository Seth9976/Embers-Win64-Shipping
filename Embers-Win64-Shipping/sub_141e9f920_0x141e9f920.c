// 函数: sub_141e9f920
// 地址: 0x141e9f920
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t* rax = arg5
int64_t r10 = *rax
int64_t* rcx

if (r10 == 0)
    rcx = arg5
else
    rcx = rax[1]

int64_t r8 = *arg4
int64_t* rdx

if (r8 == 0)
    rdx = arg5
else
    rdx = arg4[1]

if (*(arg1 + 8) != *(arg1 + 0x34))
    int64_t* var_20
    int64_t* rax_2 = var_20
    int64_t var_28 = r10
    
    if (r10 != 0)
        rax_2 = rcx
    
    int64_t* rcx_1 = arg5
    int64_t* var_20_1 = rax_2
    arg5 = arg2
    int64_t (* var_18)(void* arg1, int64_t* arg2, int64_t* arg3) = sub_140cf2eb0
    
    if (r8 != 0)
        rcx_1 = rdx
    
    int64_t* var_10_1 = &var_28
    int32_t rax_4 = sub_140cfea80(arg1, arg2, &arg3[1], r8(rcx_1, &arg5), &var_18)
    
    if (rax_4 != 0xffffffff)
        return sx.q(rax_4 * arg3[5]) + sx.q(*arg3) + *arg1

return 0
