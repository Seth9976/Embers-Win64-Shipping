// 函数: sub_1428e2d90
// 地址: 0x1428e2d90
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

__chkstk(0x20)
int64_t rbx = sx.q(arg3)
int32_t temp0
int32_t temp1
temp0:temp1 = sx.q(rbx.d)
int32_t i_2 = (temp1 - temp0) s>> 1
int64_t i_1 = sx.q(i_2)

if (i_2 s> 0)
    char* r9_1 = arg2
    char* rax_4 = rbx - 1 + arg2
    int64_t i
    
    do
        char rcx = *rax_4
        rax_4 = &rax_4[-1]
        char rdx_1 = *r9_1
        *r9_1 = rcx
        r9_1 = &r9_1[1]
        rax_4[1] = rdx_1
        i = i_1
        i_1 -= 1
    while (i != 1)

int32_t rcx_2
rcx_2.b = sub_14288fa60(arg2, rbx.d, arg1) != 0
return zx.q(rcx_2)
