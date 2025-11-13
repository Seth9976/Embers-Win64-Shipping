// 函数: sub_1421308b0
// 地址: 0x1421308b0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

(*(*arg2 + 0x1d8))(arg2, &data_1439a93f8)
(*(*arg2 + 0x1d8))(arg2, &data_1439a4b70)
int64_t* rdx = arg2[1]
int32_t* rcx_2 = *rdx
int64_t r8 = rdx[1]

if (arg2[8].d s>= 0x104)
    if (&rcx_2[1] u<= r8)
        *(arg1 + 0x54) = *rcx_2
        int64_t* rax_4 = arg2[1]
        *rax_4 += 4
    else if ((*(arg2 + 0x29) & 0x20) != 0)
        sub_140b54070(arg2, arg1 + 0x54, arg5)
    else
        (*(*arg2 + 0x150))(arg2, arg1 + 0x54, 4)
    
    int64_t* rcx_4 = arg2[1]
    void* rdx_2 = &arg1[0xb]
    int32_t* r8_1 = *rcx_4
    
    if (&r8_1[1] u> rcx_4[1])
        if ((*(arg2 + 0x29) & 0x20) != 0)
            sub_140b54070(arg2, rdx_2, arg5)
        else
            (*(*arg2 + 0x150))(arg2, rdx_2, 4)
    else
        *rdx_2 = *r8_1
        int64_t* rax_8 = arg2[1]
        *rax_8 += 4
else
    char arg_8
    
    if (rcx_2 + 1 u> r8)
        (*(*arg2 + 0x150))(arg2, &arg_8, 1)
    else
        arg_8 = *rcx_2
        *rdx += 1

sub_140b31010(arg2, &arg1[8])

if (arg2[8].d s< 0x104)
    sub_140b51560(arg1 + 0x5c)
else
    sub_140b53b80(arg1 + 0x5c, arg2, arg5)

return sub_1419d7820(arg1, arg2, arg3, arg4, arg5, arg6) __tailcall
