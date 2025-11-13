// 函数: sub_140a7a230
// 地址: 0x140a7a230
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

EnterCriticalSection(arg1 + 0x148)
int32_t arg_8
sub_140a73b50(arg1 + 0xf8, &arg_8, arg3)
int64_t rax = sx.q(arg_8)
void* const rax_2

if (rax.d == 0xffffffff)
    rax_2 = nullptr
else
    rax_2 = rax * 0x68 + *(arg1 + 0xf8)

int64_t* rsi_1 = rax_2 + 0x10

if (rax_2 == 0)
    rsi_1 = nullptr

if (rsi_1 == 0 || rsi_1[1].d == *(rsi_1 + 0x34))
label_140a7a2f7:
    *arg2 = 0
    arg2[1] = 0
else
    int32_t rax_5 = sub_140b5ead0(arg4.d) + arg4:4.d
    void* r8_1 = &rsi_1[7]
    void* rcx_3 = *(r8_1 + 8)
    
    if (rcx_3 != 0)
        r8_1 = rcx_3
    
    int32_t rax_7 = *(r8_1 + (((sx.q(rsi_1[9].d) - 1) & sx.q(rax_5)) << 2))
    
    if (rax_7 == 0xffffffff)
        goto label_140a7a2f7
    
    int64_t* rdx_6
    
    while (true)
        rdx_6 = (sx.q(rax_7) << 5) + *rsi_1
        
        if (*rdx_6 == arg4)
            break
        
        rax_7 = rdx_6[3].d
        
        if (rax_7 == 0xffffffff)
            goto label_140a7a2f7
    
    if (rax_7 == 0xffffffff || rdx_6 == 0)
        goto label_140a7a2f7
    
    sub_140596d10(arg2, &rdx_6[1])

if (arg1 != -0x148)
    LeaveCriticalSection(arg1 + 0x148)

return arg2
