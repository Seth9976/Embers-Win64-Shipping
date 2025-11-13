// 函数: sub_1419642c0
// 地址: 0x1419642c0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t* r8 = arg1[1]
int64_t* rcx = *r8

if (&rcx[1] u<= r8[1])
    *arg2 = *rcx
    int64_t* rax_2 = arg1[1]
    *rax_2 += 8
else if ((*(arg1 + 0x29) & 0x20) != 0)
    sub_140b540d0(arg1, arg2, arg3)
else
    (*(*arg1 + 0x150))(arg1, arg3, 8)

int64_t* rcx_2 = arg1[1]
int64_t* r8_1 = *rcx_2

if (&r8_1[1] u<= rcx_2[1])
    arg2[1] = *r8_1
    int64_t* rax_6 = arg1[1]
    *rax_6 += 8
else if ((*(arg1 + 0x29) & 0x20) != 0)
    sub_140b540d0(arg1, &arg2[1], arg3)
else
    (*(*arg1 + 0x150))(arg1, &arg2[1], 8)

int64_t* rcx_4 = arg1[1]
int64_t* r8_2 = *rcx_4

if (&r8_2[1] u<= rcx_4[1])
    arg2[2] = *r8_2
    int64_t* rax_10 = arg1[1]
    *rax_10 += 8
else if ((*(arg1 + 0x29) & 0x20) != 0)
    sub_140b540d0(arg1, &arg2[2], arg3)
else
    (*(*arg1 + 0x150))(arg1, &arg2[2], 8)

int64_t* rcx_6 = arg1[1]
int64_t* r8_3 = *rcx_6

if (&r8_3[1] u<= rcx_6[1])
    arg2[3] = *r8_3
    int64_t* rax_14 = arg1[1]
    *rax_14 += 8
else if ((*(arg1 + 0x29) & 0x20) != 0)
    sub_140b540d0(arg1, &arg2[3], arg3)
else
    (*(*arg1 + 0x150))(arg1, &arg2[3], 8)

int64_t* rcx_8 = arg1[1]
int32_t* r8_4 = *rcx_8

if (&r8_4[1] u<= rcx_8[1])
    arg2[4].d = *r8_4
    int64_t* rax_18 = arg1[1]
    *rax_18 += 4
    return arg1

if ((*(arg1 + 0x29) & 0x20) != 0)
    sub_140b54070(arg1, &arg2[4], arg3)
    return arg1

(*(*arg1 + 0x150))(arg1, &arg2[4], 4)
return arg1
