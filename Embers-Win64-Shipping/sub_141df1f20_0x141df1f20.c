// 函数: sub_141df1f20
// 地址: 0x141df1f20
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

bool cond:0 = (arg1[5].b & 1) == 0
int64_t* r8 = arg1[1]
int32_t arg_8 = *(arg2 + 8)
int32_t* r9 = *r8
int64_t r10 = r8[1]

if (cond:0)
    if (&r9[1] u<= r10)
        int32_t rax_5 = *r9
        arg_8 = rax_5
        *r8 += 4
        return rax_5
    
    int32_t* rdx_1 = &arg_8
    
    if ((*(arg1 + 0x29) & 0x20) != 0)
        return sub_140b54070(arg1, rdx_1, arg3)
    
    return (*(*arg1 + 0x150))(arg1, rdx_1, 4)

if (&r9[1] u> r10)
    int32_t* rdx = &arg_8
    
    if ((*(arg1 + 0x29) & 0x20) != 0)
        sub_140b54070(arg1, rdx, arg3)
    else
        (*(*arg1 + 0x150))(arg1, rdx, 4)
else
    arg_8 = *r9
    *r8 += 4

int32_t rax_4 = arg_8
int32_t var_10 = rax_4
*arg2 = 0.o
return rax_4
