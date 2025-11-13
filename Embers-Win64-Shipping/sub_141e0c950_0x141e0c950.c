// 函数: sub_141e0c950
// 地址: 0x141e0c950
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t* r8 = arg2[1]
int32_t* rcx = *r8

if (&rcx[1] u<= r8[1])
    *(arg1 + 8) = *rcx
    int64_t* rax_2 = arg2[1]
    *rax_2 += 4
else if ((*(arg2 + 0x29) & 0x20) != 0)
    sub_140b54070(arg2, arg1 + 8, arg3)
else
    (*(*arg2 + 0x150))(arg2, arg1 + 8, 4)

bool cond:1 = (arg2[5].b & 1) == 0
int64_t* rcx_2 = arg2[1]
char arg_8 = *(arg1 + 0x60)
char* rdx_1 = *rcx_2
int64_t r8_1 = rcx_2[1]

if (cond:1)
    if (&rdx_1[1] u> r8_1)
        (*(*arg2 + 0x150))(arg2, &arg_8, 1)
    else
        arg_8 = *rdx_1
        *rcx_2 += 1
else if (&rdx_1[1] u> r8_1)
    (*(*arg2 + 0x150))(arg2, &arg_8, 1)
    *(arg1 + 0x60) = zx.d(arg_8)
else
    arg_8 = *rdx_1
    *rcx_2 += 1
    *(arg1 + 0x60) = zx.d(arg_8)

sub_141df3320(arg2, arg1 + 0x64)
sub_141df3320(arg2, arg1 + 0x68)
sub_141df3320(arg2, arg1 + 0x6c)
int64_t* rcx_8 = arg2[1]
arg_8.d = *(arg1 + 0x40)
int32_t* rdx_7 = *rcx_8
int64_t r8_2 = rcx_8[1]

if ((arg2[5].b & 1) != 0)
    if (&rdx_7[1] u> r8_2)
        char* rdx_8 = &arg_8
        
        if ((*(arg2 + 0x29) & 0x20) != 0)
            sub_140b54070(arg2, rdx_8, arg3)
        else
            (*(*arg2 + 0x150))(arg2, rdx_8, 4)
    else
        arg_8.d = *rdx_7
        *rcx_8 += 4
    
    int32_t var_10_1 = arg_8.d
    *(arg1 + 0x38) = 0.o
else if (&rdx_7[1] u> r8_2)
    int32_t* rdx_9 = &arg_8
    
    if ((*(arg2 + 0x29) & 0x20) != 0)
        sub_140b54070(arg2, rdx_9, arg3)
    else
        (*(*arg2 + 0x150))(arg2, rdx_9, 4)
else
    arg_8.d = *rdx_7
    *rcx_8 += 4

sub_141df1f20(arg2, arg1 + 0x10, arg3)
sub_141df1f20(arg2, arg1 + 0x20, arg3)
int64_t* rcx_13 = arg2[1]
int32_t* r8_3 = *rcx_13

if (&r8_3[1] u<= rcx_13[1])
    *(arg1 + 0x30) = *r8_3
    int64_t* rax_21 = arg2[1]
    *rax_21 += 4
    return sub_141df0c00(arg1) __tailcall

if ((*(arg2 + 0x29) & 0x20) != 0)
    sub_140b54070(arg2, arg1 + 0x30, arg3)
    return sub_141df0c00(arg1) __tailcall

(*(*arg2 + 0x150))(arg2, arg1 + 0x30, 4)
return sub_141df0c00(arg1) __tailcall
