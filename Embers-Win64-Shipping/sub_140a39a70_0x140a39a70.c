// 函数: sub_140a39a70
// 地址: 0x140a39a70
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

if (arg3 == 0)
    return 

int64_t r14_1 = sx.q(arg2)
int32_t i_1 = arg3
int64_t r15_1 = r14_1 << 3
int64_t* rbx_2 = *arg1 + r15_1
int32_t i

do
    int64_t* rcx = *rbx_2
    
    if (rcx != 0)
        rcx[9].d -= 1
        
        if (rcx[9].d == 1)
            sub_140a2f6e0(rcx)
    
    rbx_2 = &rbx_2[1]
    i = i_1
    i_1 -= 1
while (i != 1)
int32_t rax_2 = arg1[1].d
int32_t rcx_2 = rax_2 - r14_1.d

if (rcx_2 != arg3)
    int64_t r9 = *arg1
    memmove(r9 + r15_1, r9 + (sx.q(r14_1.d + arg3) << 3), (rcx_2 - arg3) << 3)
    rax_2 = arg1[1].d

arg1[1].d = rax_2 - arg3

if (arg4 != 0)
    sub_1405c53d0(arg1)
