// 函数: sub_14152f060
// 地址: 0x14152f060
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t* rcx = arg1[1]
int32_t arg_8 = arg2[1].d
int32_t* rdx = *rcx

if (&rdx[1] u> rcx[1])
    int32_t* rdx_1 = &arg_8
    
    if ((*(arg1 + 0x29) & 0x20) != 0)
        sub_140b54070(arg1, rdx_1, arg3)
    else
        (*(*arg1 + 0x150))(arg1, rdx_1, 4)
else
    arg_8 = *rdx
    *rcx += 4

int32_t r8 = arg_8

if (r8 s> *(arg2 + 0xc))
    sub_1405c5660(arg2, r8)
    r8 = arg_8

int64_t r14 = sx.q(arg2[1].d)
int32_t rbx = 0

if (r8 s> r14.d)
    arg2[1].d = r8
    int32_t i_1 = r8 - r14.d
    
    if (r8 s> *(arg2 + 0xc))
        sub_1405c4ec0(arg2)
        r8 = arg_8
    
    int64_t* rdx_4 = *arg2 + r14 * 0x28
    
    if (i_1 != 0)
        void* rax_5 = rdx_4 + 0x1c
        int32_t i
        
        do
            *rdx_4 = 0
            rdx_4 = &rdx_4[5]
            *(rax_5 - 0x14) = 0
            *(rax_5 - 0xc) = 0xffffffff
            *rax_5 = 0
            *(rax_5 - 8) = 0
            *(rax_5 + 8) = 0
            rax_5 += 0x28
            i = i_1
            i_1 -= 1
        while (i != 1)
        r8 = arg_8
else if (r8 s< r14.d)
    int32_t rax_6 = r14.d
    
    if (rax_6 != r8)
        arg2[1].d = r14.d - (rax_6 - r8)
        sub_1409da680(arg2)
        r8 = arg_8

if (r8 s> 0)
    do
        arg3 = sub_14152e190(arg1, *arg2 + sx.q(rbx) * 0x28, arg3)
        rbx += 1
    while (rbx s< arg_8)

return arg1
