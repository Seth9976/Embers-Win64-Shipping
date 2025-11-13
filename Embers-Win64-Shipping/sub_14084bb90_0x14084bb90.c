// 函数: sub_14084bb90
// 地址: 0x14084bb90
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void* rax = sub_14082fe30(arg3)
*arg2 = arg4
arg2[1] = 0
arg2[2] = 0

if (*(arg1 + 0xa4) == 0)
    void var_28
    int64_t* rdx = &var_28
    
    if (data_14396fef8 == 0)
        int64_t* rax_2 = sub_141996f30(arg4, rdx, (sx.q(*(rax + 0x20)) u>> 2).d)
        *(arg2 + 8) = *rax_2
        arg2[3] = rax_2[2]
        memcpy(arg2[1], *(rax + 0x18), *(rax + 0x20))
    else
        int64_t* rax_1 = sub_14083fae0(arg1, rdx, arg4, rax)
        *(arg2 + 8) = *rax_1
        arg2[3] = rax_1[2]

return arg2
