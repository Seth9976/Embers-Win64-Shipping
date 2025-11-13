// 函数: sub_141facc80
// 地址: 0x141facc80
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

if (arg1 == 0 || arg1[5] == 0)
    int64_t rax
    rax.b = 0
    return rax

int64_t* rax_2 = (*(*arg1 + 0x270))()
void* const rcx_4

if (rax_2[1].d == *(rax_2 + 0x34))
label_141facd20:
    rcx_4 = nullptr
else
    int32_t rax_4 = sub_140b5ead0(arg2.d) + arg2:4.d
    void* r8_1 = &rax_2[7]
    void* rcx_2 = *(r8_1 + 8)
    
    if (rcx_2 != 0)
        r8_1 = rcx_2
    
    int32_t rax_6 = *(r8_1 + (((sx.q(rax_2[9].d) - 1) & sx.q(rax_4)) << 2))
    
    if (rax_6 == 0xffffffff)
    label_141facd20_1:
        rcx_4 = nullptr
    else
        int64_t r8_2 = *rax_2
        
        while (true)
            int64_t rdx_3 = sx.q(rax_6) * 3
            rcx_4 = r8_2 + (rdx_3 << 3)
            
            if (*(r8_2 + (rdx_3 << 3)) == arg2)
                break
            
            rax_6 = *(rcx_4 + 0x10)
            
            if (rax_6 == 0xffffffff)
                goto label_141facd20_2
        
        if (rax_6 == 0xffffffff)
        label_141facd20_2:
            rcx_4 = nullptr

void* rax_7 = rcx_4 + 8

if (rcx_4 == 0)
    rax_7 = nullptr

rax_7.b = rax_7 != 0
return rax_7
