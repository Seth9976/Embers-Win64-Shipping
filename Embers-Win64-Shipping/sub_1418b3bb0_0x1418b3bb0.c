// 函数: sub_1418b3bb0
// 地址: 0x1418b3bb0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int16_t* rdx

if (arg3[1].d == 0)
    rdx = &data_142d40450
else
    rdx = *arg3

void arg_10
int64_t rbx = *sub_140b58260(&arg_10, rdx, 1)
void* const rcx_4

if (*(arg1 + 0x78) == *(arg1 + 0xa4))
label_1418b3c60:
    rcx_4 = nullptr
else
    int32_t rax_3 = sub_140b5ead0(rbx.d) + rbx:4.d
    void* r8 = arg1 + 0xa8
    void* rcx_2 = *(r8 + 8)
    
    if (rcx_2 != 0)
        r8 = rcx_2
    
    int32_t rax_5 = *(r8 + (((sx.q(*(arg1 + 0xb8)) - 1) & sx.q(rax_3)) << 2))
    
    if (rax_5 == 0xffffffff)
    label_1418b3c60_1:
        rcx_4 = nullptr
    else
        int64_t r8_1 = *(arg1 + 0x70)
        
        while (true)
            int64_t rdx_4 = sx.q(rax_5) * 5
            rcx_4 = r8_1 + (rdx_4 << 3)
            
            if (*(r8_1 + (rdx_4 << 3)) == rbx)
                break
            
            rax_5 = *(rcx_4 + 0x20)
            
            if (rax_5 == 0xffffffff)
                goto label_1418b3c60_2
        
        if (rax_5 == 0xffffffff)
        label_1418b3c60_2:
            rcx_4 = nullptr

void* rax_6 = rcx_4 + 8

if (rcx_4 == 0)
    rax_6 = nullptr

if (rax_6 == 0)
    rax_6 = sub_1405d9400()

*arg2 = *rax_6
void* rcx_6 = *(rax_6 + 8)
arg2[1] = rcx_6

if (rcx_6 != 0)
    *(rcx_6 + 8) += 1

arg2[2].d = *(rax_6 + 0x10)
return arg2
