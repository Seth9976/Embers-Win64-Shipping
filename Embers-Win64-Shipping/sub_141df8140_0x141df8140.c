// 函数: sub_141df8140
// 地址: 0x141df8140
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

if (arg3 != 0)
    (*(*arg3 + 0x30))(arg3)

int64_t rdi = 0
int64_t* rdx_5

if (*(arg1 + 0xf0) == *(arg1 + 0x11c))
label_141df81de:
    rdx_5 = nullptr
else
    int32_t rax_4 = sub_140b5ead0(arg4.d) + arg4:4.d
    void* r8 = arg1 + 0x120
    void* rcx_2 = *(r8 + 8)
    
    if (rcx_2 != 0)
        r8 = rcx_2
    
    int32_t rax_6 = *(r8 + (((sx.q(*(arg1 + 0x130)) - 1) & sx.q(rax_4)) << 2))
    
    if (rax_6 == 0xffffffff)
    label_141df81de_1:
        rdx_5 = nullptr
    else
        while (true)
            rdx_5 = (sx.q(rax_6) << 5) + *(arg1 + 0xe8)
            
            if (*rdx_5 == arg4)
                break
            
            rax_6 = rdx_5[3].d
            
            if (rax_6 == 0xffffffff)
                goto label_141df81de_2
        
        if (rax_6 == 0xffffffff)
        label_141df81de_2:
            rdx_5 = nullptr

int64_t* rbx_1 = rdx_5[1]
void* result = &rbx_1[rdx_5[2]]
uint64_t rsi_2 = sx.q(rdx_5[2].d) << 3 u>> 3

if (rbx_1 u> result)
    rsi_2 = 0

if (rsi_2 != 0)
    do
        int64_t* rcx_3 = *rbx_1
        result = (*(*rcx_3 + 0x30))(rcx_3, arg2)
        rdi += 1
        rbx_1 = &rbx_1[1]
    while (rdi != rsi_2)

return result
