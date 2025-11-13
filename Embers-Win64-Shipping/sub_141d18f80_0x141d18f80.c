// 函数: sub_141d18f80
// 地址: 0x141d18f80
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int32_t arg_8 = 4
int64_t* rcx = arg1[1]
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

int64_t* rcx_2 = arg1[1]
uint32_t arg_10 = zx.d(*arg2)
int32_t* rdx_2 = *rcx_2

if (&rdx_2[1] u> rcx_2[1])
    uint32_t* rdx_3 = &arg_10
    
    if ((*(arg1 + 0x29) & 0x20) != 0)
        sub_140b54070(arg1, rdx_3, arg3)
    else
        (*(*arg1 + 0x150))(arg1, rdx_3, 4)
else
    arg_10 = *rdx_2
    *rcx_2 += 4

bool cond:2 = arg_8 s>= 4
*arg2 = arg_10.b
int32_t arg_18

if (not(cond:2))
    int64_t* rcx_4 = arg1[1]
    int32_t* rdx_4 = *rcx_4
    
    if (&rdx_4[1] u> rcx_4[1])
        int32_t* rdx_5 = &arg_18
        
        if ((*(arg1 + 0x29) & 0x20) != 0)
            sub_140b54070(arg1, rdx_5, arg3)
        else
            (*(*arg1 + 0x150))(arg1, rdx_5, 4)
    else
        arg_18 = *rdx_4
        *rcx_4 += 4

if (arg_8 s>= 2)
    (*(*arg1 + 0x140))(arg1, &arg2[4])
    int64_t* rcx_7 = arg1[1]
    int32_t* rdx_7 = *rcx_7
    
    if (&rdx_7[1] u> rcx_7[1])
        int32_t rax_14
        rax_14.b = arg2[0xc] != 0
        arg_18 = rax_14
        (*(*arg1 + 0x150))(arg1, &arg_18, 4)
        arg2[0xc] = arg_18 != 0
    else
        void* rax_12
        rax_12.b = *rdx_7 != 0
        arg2[0xc] = rax_12.b
        int64_t* rax_13 = arg1[1]
        *rax_13 += 4

if (*(arg2 + 0x10) == 0)
    *(arg2 + 0x10) = sub_141d1f0f0(*arg2)

if (arg2[0xc] != 0)
    int64_t* rcx_10 = *(arg2 + 0x10)
    (*(*rcx_10 + 0x58))(rcx_10, arg1)

return arg1
