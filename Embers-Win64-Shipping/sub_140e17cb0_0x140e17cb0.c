// 函数: sub_140e17cb0
// 地址: 0x140e17cb0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void arg_10
int64_t rbx = *sub_140e1ad30(&arg_10, arg3, arg4)
void* const rcx_4

if (*(arg1 + 0xd8) == *(arg1 + 0x104))
labelid_7:
    rcx_4 = nullptr
else
    int32_t rax_4 = sub_140b5ead0(rbx.d) + rbx:4.d
    void* r8_1 = arg1 + 0x108
    void* rcx_2 = *(r8_1 + 8)
    
    if (rcx_2 != 0)
        r8_1 = rcx_2
    
    int32_t rax_6 = *(r8_1 + (((sx.q(*(arg1 + 0x118)) - 1) & sx.q(rax_4)) << 2))
    
    if (rax_6 == 0xffffffff)
    label_140e17d50:
        rcx_4 = nullptr
    else
        int64_t r8_2 = *(arg1 + 0xd0)
        
        while (true)
            int64_t rdx_4 = sx.q(rax_6) * 3
            rcx_4 = r8_2 + (rdx_4 << 3)
            
            if (*(r8_2 + (rdx_4 << 3)) == rbx)
                break
            
            rax_6 = *(rcx_4 + 0x10)
            
            if (rax_6 == 0xffffffff)
                goto label_140e17d50_1
        
        if (rax_6 == 0xffffffff)
        label_140e17d50_1:
            rcx_4 = nullptr

void* rdx_5 = rcx_4 + 8
void arg_28
void* rax_7 = &arg_28

if (rcx_4 == 0)
    rdx_5 = nullptr

if (rdx_5 != 0)
    rax_7 = rdx_5

*arg2 = *rax_7
return arg2
