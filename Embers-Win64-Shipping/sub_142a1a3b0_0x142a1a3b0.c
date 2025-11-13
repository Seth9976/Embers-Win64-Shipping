// 函数: sub_142a1a3b0
// 地址: 0x142a1a3b0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t arg_18 = arg3
int64_t arg_8 = arg1
int32_t* rdi = arg5
int32_t rbp = 0
int64_t var_70 = 0
int64_t r15 = 0
void* r14 = nullptr
*rdi = 0
int64_t i_1 = 4
int64_t i

do
    int256_t* rbx_1 = r14 + arg1
    int64_t j_1 = 2
    int64_t j
    
    do
        int32_t var_78
        sub_142a06330(rbx_1, arg2, r15 - r14 - arg1 + arg3 + rbx_1, arg4, &arg5, &var_78)
        rbx_1 = &rbx_1[1]
        *rdi += arg5.d
        rbp += var_78
        j = j_1
        j_1 -= 1
    while (j != 1)
    r15 = var_70 + sx.q(arg4 << 4)
    r14 += sx.q(arg2 << 4)
    i = i_1
    i_1 -= 1
    arg1 = arg_8
    arg3 = arg_18
    var_70 = r15
while (i != 1)
int64_t rcx_1 = sx.q(rbp)
return zx.q(*rdi - ((rcx_1 * rcx_1) s>> 0xc).d)
