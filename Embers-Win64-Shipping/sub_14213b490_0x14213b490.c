// 函数: sub_14213b490
// 地址: 0x14213b490
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

sub_1408d9160(
    sub_1408d9160(sub_1408d9160(sub_1408d9160(arg1, arg2, arg3), &arg2[3], arg3), &arg2[6], arg3), 
    &arg2[9], arg3)
sub_14213ae00(arg1, &arg2[0xc], arg3)
int64_t* rcx_4 = arg1[1]
int32_t* r8 = *rcx_4

if (&r8[1] u<= rcx_4[1])
    arg2[0x40] = *r8
    int64_t* rax_5 = arg1[1]
    *rax_5 += 4
else if ((*(arg1 + 0x29) & 0x20) != 0)
    sub_140b54070(arg1, &arg2[0x40], arg3)
else
    (*(*arg1 + 0x150))(arg1, &arg2[0x40], 4)

int64_t* rax_8 = (*(*arg1 + 0x130))(arg1, &arg2[0x42])
int64_t r8_1 = *rax_8
(*(r8_1 + 0x140))(rax_8, &arg2[0x48], r8_1)
(*(*arg1 + 0x130))(arg1, &arg2[0x44])
int64_t* rcx_9 = arg1[1]
int32_t* r8_2 = *rcx_9

if (&r8_2[1] u<= rcx_9[1])
    arg2[0x4a] = *r8_2
    int64_t* rax_12 = arg1[1]
    *rax_12 += 4
else if ((*(arg1 + 0x29) & 0x20) != 0)
    sub_140b54070(arg1, &arg2[0x4a], arg3)
else
    (*(*arg1 + 0x150))(arg1, &arg2[0x4a], 4)

int64_t* rcx_11 = arg1[1]
int32_t* r8_3 = *rcx_11

if (&r8_3[1] u<= rcx_11[1])
    arg2[0x4c] = *r8_3
    int64_t* rax_16 = arg1[1]
    *rax_16 += 4
else if ((*(arg1 + 0x29) & 0x20) != 0)
    sub_140b54070(arg1, &arg2[0x4c], arg3)
else
    (*(*arg1 + 0x150))(arg1, &arg2[0x4c], 4)

int64_t* rcx_13 = arg1[1]
int32_t* r8_4 = *rcx_13

if (&r8_4[1] u<= rcx_13[1])
    arg2[0x4e] = *r8_4
    int64_t* rax_20 = arg1[1]
    *rax_20 += 4
else if ((*(arg1 + 0x29) & 0x20) != 0)
    sub_140b54070(arg1, &arg2[0x4e], arg3)
else
    (*(*arg1 + 0x150))(arg1, &arg2[0x4e], 4)

sub_14228ac80(arg1, &arg2[0x4f], arg3)
(*(*arg1 + 0x140))(arg1, &arg2[0x46])
return arg1
