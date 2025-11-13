// 函数: sub_1418b3940
// 地址: 0x1418b3940
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int16_t* rdx

if (arg2[1].d == 0)
    rdx = &data_142d40450
else
    rdx = *arg2

void arg_10
int64_t rbx = *sub_140b58260(&arg_10, rdx, 1)
void* const rcx_4

if (*(arg1 + 0x28) == *(arg1 + 0x54))
label_1418b39e0:
    rcx_4 = nullptr
else
    int32_t rax_3 = sub_140b5ead0(rbx.d) + rbx:4.d
    void* r8_1 = arg1 + 0x58
    void* rcx_2 = *(r8_1 + 8)
    
    if (rcx_2 != 0)
        r8_1 = rcx_2
    
    int32_t rax_5 = *(r8_1 + (((sx.q(*(arg1 + 0x68)) - 1) & sx.q(rax_3)) << 2))
    
    if (rax_5 == 0xffffffff)
    label_1418b39e0_1:
        rcx_4 = nullptr
    else
        int64_t r8_2 = *(arg1 + 0x20)
        
        while (true)
            int64_t rdx_4 = sx.q(rax_5) * 3
            rcx_4 = r8_2 + (rdx_4 << 3)
            
            if (*(r8_2 + (rdx_4 << 3)) == rbx)
                break
            
            rax_5 = *(rcx_4 + 0x10)
            
            if (rax_5 == 0xffffffff)
                goto label_1418b39e0_2
        
        if (rax_5 == 0xffffffff)
        label_1418b39e0_2:
            rcx_4 = nullptr

void* rax_6 = rcx_4 + 8

if (rcx_4 == 0)
    rax_6 = nullptr

if (rax_6 == 0)
    return 0

return *rax_6
