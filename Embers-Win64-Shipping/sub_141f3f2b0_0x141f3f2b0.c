// 函数: sub_141f3f2b0
// 地址: 0x141f3f2b0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

if (arg2 == 0)
    return 

int64_t arg_10
sub_140d3a3a0(&arg_10, arg2)
int32_t* r14_1 = *(arg1 + 0x1f8)
int32_t* rbx_1 = r14_1
void* rsi_1 = &r14_1[sx.q(*(arg1 + 0x200)) * 2]

if (r14_1 != rsi_1)
    while (sub_14077a170(rbx_1, &arg_10).b == 0)
        rbx_1 = &rbx_1[2]
        
        if (rbx_1 == rsi_1)
            goto label_141f3f328

if (r14_1 != rsi_1 && ((rbx_1 - r14_1) s>> 3).d != 0xffffffff)
    return 

label_141f3f328:
int64_t rbx_4 = sx.q(*(arg1 + 0x200))
int32_t rax_2 = (rbx_4 + 1).d
*(arg1 + 0x200) = rax_2

if (rax_2 s> *(arg1 + 0x204))
    sub_1405a4d70(arg1 + 0x1f8)

*(*(arg1 + 0x1f8) + (rbx_4 << 3)) = arg_10
