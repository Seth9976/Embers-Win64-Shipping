// 函数: sub_142374f20
// 地址: 0x142374f20
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t* rcx = arg2[1]
int64_t rax_1 = *rcx + 4

if (rax_1 u> rcx[1])
    int32_t rax_2
    rax_2.b = arg2[0xe] != 0
    int32_t arg_8 = rax_2
    (*(*arg2 + 0x150))(arg2, &arg_8, 4)
else
    *rcx = rax_1

if ((arg2[5].b & 2) != 0)
    int32_t rdx_1 = 0x40
    
    if (arg4 != 0)
        rdx_1 = 0x400
    
    sub_140bd0790(&arg1[2], rdx_1)

int32_t var_10 = 1
int512_t zmm1 = sub_140bcfa90(&arg1[2], arg2, arg3, arg5, arg4.b, 0)
int64_t* rcx_4 = arg2[1]
int32_t* rdx_3 = *rcx_4

if (&rdx_3[1] u<= rcx_4[1])
    *arg1 = *rdx_3
    int64_t* rax_6 = arg2[1]
    *rax_6 += 4
else if ((*(arg2 + 0x29) & 0x20) != 0)
    sub_140b54070(arg2, arg1, zmm1)
else
    (*(*arg2 + 0x150))(arg2, arg1, 4)

int64_t* rcx_6 = arg2[1]
int32_t* r8_1 = *rcx_6

if (&r8_1[1] u<= rcx_6[1])
    arg1[1] = *r8_1
    int64_t* result = arg2[1]
    *result += 4
    return result

if ((*(arg2 + 0x29) & 0x20) != 0)
    return sub_140b54070(arg2, &arg1[1], zmm1)

return (*(*arg2 + 0x150))(arg2, &arg1[1], 4)
