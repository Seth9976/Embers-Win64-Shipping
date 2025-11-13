// 函数: sub_14228bc30
// 地址: 0x14228bc30
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

sub_1408d9160(arg1, arg2, arg3)
int64_t* r8 = arg1[1]
int32_t* rcx = *r8

if (&rcx[1] u<= r8[1])
    arg2[3] = *rcx
    int64_t* rax_2 = arg1[1]
    *rax_2 += 4
else if ((*(arg1 + 0x29) & 0x20) != 0)
    sub_140b54070(arg1, &arg2[3], arg3)
else
    (*(*arg1 + 0x150))(arg1, &arg2[3], 4)

sub_14228bbb0(sub_14228bbb0(sub_14228bbb0(arg1, &arg2[4], arg3), &arg2[8], arg3), &arg2[0xc], arg3)

if (arg1[8].d s>= 0x15a)
    int64_t* rcx_5 = arg1[1]
    int32_t* r8_1 = *rcx_5
    
    if (&r8_1[1] u<= rcx_5[1])
        arg2[0x10] = *r8_1
        int64_t* rax_8 = arg1[1]
        *rax_8 += 4
    else if ((*(arg1 + 0x29) & 0x20) != 0)
        sub_140b54070(arg1, &arg2[0x10], arg3)
    else
        (*(*arg1 + 0x150))(arg1, &arg2[0x10], 4)

if (arg1[8].d s>= 0x128)
    int64_t* rcx_7 = arg1[1]
    int32_t* r8_2 = *rcx_7
    
    if (&r8_2[1] u<= rcx_7[1])
        arg2[0x11] = *r8_2
        int64_t* rax_12 = arg1[1]
        *rax_12 += 4
    else if ((*(arg1 + 0x29) & 0x20) != 0)
        sub_140b54070(arg1, &arg2[0x11], arg3)
    else
        (*(*arg1 + 0x150))(arg1, &arg2[0x11], 4)

return arg1
