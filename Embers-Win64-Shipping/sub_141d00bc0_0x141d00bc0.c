// 函数: sub_141d00bc0
// 地址: 0x141d00bc0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t rbp
rbp.b = 0
int64_t rbx

if (*(arg1 + 8) - *(arg1 + 0x24) == 1)
    rbx = zx.q(arg5)
label_141d00c9e:
    
    if (sub_141cfded0(arg1, *(arg1 + 8) - *(arg1 + 0x24), 0) == 0)
        int32_t rax_5 = (*(arg1 + 0x30) - 1) & arg3
        *(arg4 + 0x4c) = rax_5
        void* rcx_8 = *(arg1 + 0x28)
        
        if ((rcx_8.b & 1) != 0)
            rcx_8 = &arg1[0x28 + (rcx_8 s>> 1)]
        
        int64_t r8 = sx.q(rax_5)
        arg4[9].d = *(rcx_8 + (((sx.q(*(arg1 + 0x30)) - 1) & r8) << 2))
        void* rcx_10 = *(arg1 + 0x28)
        
        if ((rcx_10.b & 1) != 0)
            rcx_10 = &arg1[0x28 + (rcx_10 s>> 1)]
        
        *(rcx_10 + (((sx.q(*(arg1 + 0x30)) - 1) & r8) << 2)) = rbx.d
else
    int32_t arg_8
    sub_141cf3ee0(arg1, &arg_8, arg3, arg4)
    rbx = sx.q(arg_8)
    rbp.b = rbx.d != 0xffffffff
    
    if (rbx.d == 0xffffffff)
        rbx = zx.q(arg5)
    else
        void* rcx = *arg1
        
        if ((rcx.b & 1) != 0)
            rcx = &arg1[rcx s>> 1]
        
        void* rsi_3 = rbx * 0x50 + rcx
        *(rsi_3 + 0x40) = 0
        sub_140a1d5c0(rsi_3 + 0x38)
        sub_141cf8580(rsi_3 + 0x10)
        sub_140a1d5c0(rsi_3)
        memmove(rsi_3, arg4, 0x48)
        sub_141d0dc90(arg1, arg5, 1)
    
    if (rbp.b == 0)
        goto label_141d00c9e

*arg2 = rbx.d

if (arg6 != 0)
    *arg6 = rbp.b

return arg2
