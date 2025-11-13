// 函数: sub_141fa07b0
// 地址: 0x141fa07b0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void* r10 = *(arg1 + 0x28)
int32_t rbp = arg2[0x14].d
int32_t rbx
int32_t r8_2

if (((*(r10 + 0xa4) u>> 1).b & 1) == 0 || arg7 != 0)
    rbx = *(arg4 + 0x10)
    r8_2 = *arg3 + 1 + arg3[0xa]
else
    rbx = 0
    int64_t rax_2 = sx.q(*(arg5 + 0x20))
    
    if (rax_2.d s<= 0)
    label_141fa0817:
        rbx = -1
    else
        int64_t rcx = 0
        int32_t* rax_4 = *(arg5 + 0x18) + 4
        
        while (*rax_4 != *(arg4 + 0x14))
            rbx += 1
            rcx += 1
            rax_4 = &rax_4[5]
            
            if (rcx s>= rax_2)
                goto label_141fa0817
    
    sub_14217e090(*(r10 + 0x68), arg5, rbx)
    r8_2 = 2
    
    if (*(arg5 + 0x20) s>= 2)
        r8_2 = *(arg5 + 0x20)

sub_140b56350(arg2, rbx, r8_2)
int32_t arg_8 = *(arg6 + 0xa0)
(*(*arg2 + 0x168))(arg2, &arg_8)
(*(*arg2 + 0x158))(arg2, *(arg6 + 0x90), zx.q(arg_8))
return zx.q(arg2[0x14].d - rbp)
