// 函数: sub_141c95c00
// 地址: 0x141c95c00
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t* rcx = arg1[1]
int32_t* r8 = *rcx
int32_t arg_18

if (&r8[1] u> rcx[1])
    int32_t* rdx = &arg_18
    
    if ((*(arg1 + 0x29) & 0x20) != 0)
        sub_140b54070(arg1, rdx, arg3)
    else
        (*(*arg1 + 0x150))(arg1, rdx, 4)
else
    arg_18 = *r8
    *rcx += 4

int32_t rcx_2 = arg_18

if (rcx_2 s< 0 || rcx_2 s>= arg1[0x39].d)
    int32_t var_18_1 = arg1[0x39].d
    arg3 = sub_140af98a0("Unknown", 0x1d7, u"Bad name index %i/%i", zx.q(rcx_2))
    sub_140afbb40()
    rcx_2 = arg_18

int64_t rax_4 = arg1[0x38]
int64_t rcx_3 = sx.q(rcx_2)
int32_t rbx = *(rax_4 + (rcx_3 << 3) + 4)
char rax_5 = sub_140b5b8a0(*(rax_4 + (rcx_3 << 3)), 0)
int64_t* rdx_1 = arg1[1]
int32_t rcx_4
rcx_4.b = rbx == 0
int32_t* rcx_5 = *rdx_1
int64_t r8_1 = rdx_1[1]
int64_t rax_8
int32_t arg_8

if ((rax_5 & rcx_4.b) == 0)
    if (&rcx_5[1] u> r8_1)
        int32_t* rdx_3 = &arg_8
        
        if ((*(arg1 + 0x29) & 0x20) != 0)
            sub_140b54070(arg1, rdx_3, arg3)
        else
            (*(*arg1 + 0x150))(arg1, rdx_3, 4)
    else
        arg_8 = *rcx_5
        *rdx_1 += 4
    
    int32_t arg_1c = arg_8
    arg_18 = *(arg1[0x38] + (sx.q(arg_18) << 3))
    rax_8 = arg_18.q
else if (&rcx_5[1] u> r8_1)
    int32_t* rdx_2 = &arg_8
    
    if ((*(arg1 + 0x29) & 0x20) != 0)
        sub_140b54070(arg1, rdx_2, arg3)
        rax_8 = 0
        arg_8.q = 0
    else
        (*(*arg1 + 0x150))(arg1, rdx_2, 4)
        rax_8 = 0
        arg_8.q = 0
else
    *rdx_1 = &rcx_5[1]
    rax_8 = 0
    arg_8.q = 0
*arg2 = rax_8
return arg1
