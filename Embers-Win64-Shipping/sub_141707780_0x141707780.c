// 函数: sub_141707780
// 地址: 0x141707780
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t* r8 = arg1[1]
int32_t* rcx = *r8

if (&rcx[1] u<= r8[1])
    *arg2 = *rcx
    int64_t* rax_2 = arg1[1]
    *rax_2 += 4
else if ((*(arg1 + 0x29) & 0x20) != 0)
    sub_140b54070(arg1, arg2, arg3)
else
    (*(*arg1 + 0x150))(arg1, arg3, 4)

int64_t* rcx_2 = arg1[1]
int32_t* r8_1 = *rcx_2

if (&r8_1[1] u<= rcx_2[1])
    arg2[1] = *r8_1
    int64_t* rax_6 = arg1[1]
    *rax_6 += 4
else if ((*(arg1 + 0x29) & 0x20) != 0)
    sub_140b54070(arg1, &arg2[1], arg3)
else
    (*(*arg1 + 0x150))(arg1, &arg2[1], 4)

int64_t* rcx_4 = arg1[1]
int32_t* r8_2 = *rcx_4

if (&r8_2[1] u<= rcx_4[1])
    arg2[2] = *r8_2
    int64_t* rax_10 = arg1[1]
    *rax_10 += 4
else if ((*(arg1 + 0x29) & 0x20) != 0)
    sub_140b54070(arg1, &arg2[2], arg3)
else
    (*(*arg1 + 0x150))(arg1, &arg2[2], 4)

int64_t* rcx_6 = arg1[1]
int32_t* r8_3 = *rcx_6

if (&r8_3[1] u<= rcx_6[1])
    arg2[3] = *r8_3
    int64_t* rax_14 = arg1[1]
    *rax_14 += 4
else if ((*(arg1 + 0x29) & 0x20) != 0)
    sub_140b54070(arg1, &arg2[3], arg3)
else
    (*(*arg1 + 0x150))(arg1, &arg2[3], 4)

sub_1408d9160(arg1, &arg2[4], arg3)
sub_1408d9160(arg1, &arg2[8], arg3)

if ((arg1[5].b & 1) != 0)
    arg3.o = data_143ef7300
    uint32_t temp0_1[0x4] = _mm_and_ps(*(arg2 + 0x10), arg3.o)
    arg3.o = __andps_xmmxud_memxud(arg3.o, *(arg2 + 0x20))
    *(arg2 + 0x20) = arg3.o
    *(arg2 + 0x10) = temp0_1

return arg1
