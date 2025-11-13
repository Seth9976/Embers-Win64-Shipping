// 函数: sub_142a25560
// 地址: 0x142a25560
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int32_t arg_10 = arg2.d
uint32_t r15 = arg5
uint32_t r12 = arg6
uint32_t rbp = arg4
uint32_t i = arg3 | arg4 | r15 | r12
uint32_t r14 = arg3
void* rdi = arg1

if (i == 0)
    return 

char* r13_1 = arg8

do
    int64_t* rbx_3 = zx.q(*r13_1) * 0x30 + arg7
    
    if ((i.b & 1) != 0)
        if ((r14.b & 1) != 0)
            sub_142a17a50(rdi, arg2, rbx_3, &rbx_3[2], &rbx_3[4])
            arg2 = zx.q(arg_10)
        else if ((rbp.b & 1) != 0)
            sub_142a18790(rdi, arg2, rbx_3, &rbx_3[2], &rbx_3[4])
            arg2 = zx.q(arg_10)
        else if ((r15.b & 1) != 0)
            sub_142a18080(rdi, arg2, rbx_3, &rbx_3[2], &rbx_3[4])
            arg2 = zx.q(arg_10)
    
    if ((r12.b & 1) != 0)
        sub_142a18080(rdi + 4, arg2, rbx_3, &rbx_3[2], &rbx_3[4])
    
    arg2 = zx.q(arg_10)
    rdi += 8
    r13_1 = &r13_1[1]
    r14 u>>= 1
    rbp u>>= 1
    r15 u>>= 1
    r12 u>>= 1
    i u>>= 1
while (i != 0)
