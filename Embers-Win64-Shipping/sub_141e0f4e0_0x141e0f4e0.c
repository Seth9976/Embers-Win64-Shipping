// 函数: sub_141e0f4e0
// 地址: 0x141e0f4e0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

if (arg3 == 0)
    return 

int64_t rdi_1 = 0

if (arg3 == *(arg1 + 0xd8))
    int16_t r9 = *(arg1 + 0x420) + 1
    *(arg1 + 0x420) = r9
    *(arg1 + 0x418) = data_143de5458
    
    if (r9 == 0xffff)
        *(arg1 + 0x420) = 0

(*(*arg3 + 0x10))(arg3)
int64_t* rdx_5

if (*(arg1 + 0xf0) == *(arg1 + 0x11c))
label_141e0f5af:
    rdx_5 = nullptr
else
    int32_t rax_5 = sub_140b5ead0(arg4.d) + arg4:4.d
    void* r8 = arg1 + 0x120
    void* rcx_2 = *(r8 + 8)
    
    if (rcx_2 != 0)
        r8 = rcx_2
    
    int32_t rax_7 = *(r8 + (((sx.q(*(arg1 + 0x130)) - 1) & sx.q(rax_5)) << 2))
    
    if (rax_7 == 0xffffffff)
    label_141e0f5af_1:
        rdx_5 = nullptr
    else
        while (true)
            rdx_5 = (sx.q(rax_7) << 5) + *(arg1 + 0xe8)
            
            if (*rdx_5 == arg4)
                break
            
            rax_7 = rdx_5[3].d
            
            if (rax_7 == 0xffffffff)
                goto label_141e0f5af_2
        
        if (rax_7 == 0xffffffff)
        label_141e0f5af_2:
            rdx_5 = nullptr

int64_t* rbx_2 = rdx_5[1]
uint64_t rsi_3 = sx.q(rdx_5[2].d) << 3 u>> 3

if (rbx_2 u> &rbx_2[rdx_5[2]])
    rsi_3 = 0

if (rsi_3 == 0)
    return 

do
    sub_141e2dda0(*rbx_2)
    rdi_1 += 1
    rbx_2 = &rbx_2[1]
while (rdi_1 != rsi_3)
