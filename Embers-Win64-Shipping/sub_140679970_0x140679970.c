// 函数: sub_140679970
// 地址: 0x140679970
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t rsi = sx.q(*(arg1 + 0x58))
int64_t rdi = sx.q(arg2)
int64_t rcx

if (rsi.d u> 4)
    int64_t rax_5
    int64_t rdx
    rdx:rax_5 =
        mulu.dp.q(-0x3333333333333333, sub_140a846a0((((rsi * 3) u>> 3) + rsi + 0x10) * 0x14, 0))
    uint32_t rdx_1 = (rdx u>> 4).d
    
    if (rsi.d s> rdx_1)
        rdx_1 = 0x7fffffff
    
    *(arg1 + 0x5c) = rdx_1
    rcx = *(arg1 + 0x50)
    
    if (rdx_1 u<= 4)
        goto label_1406799e3
    
    if (rcx == 0)
        if (rdx_1 != 0)
            int64_t rax_7 = sub_140a84c80(rcx, sx.q(rdx_1) * 0x14, 0)
            *(arg1 + 0x50) = rax_7
            rcx = rax_7
        
        return memmove(rcx, arg1, (rdi * 0x14).d) __tailcall
    
    *(arg1 + 0x50) = sub_140a84c80(rcx, sx.q(rdx_1) * 0x14, 0)
else
    *(arg1 + 0x5c) = 4
    rcx = *(arg1 + 0x50)
label_1406799e3:
    
    if (rcx != 0)
        memmove(arg1, rcx, (rdi * 0x14).d)
        rcx = *(arg1 + 0x50)
        
        if (rcx != 0)
            *(arg1 + 0x50) = sub_140a84c80(rcx, 0, 0)
