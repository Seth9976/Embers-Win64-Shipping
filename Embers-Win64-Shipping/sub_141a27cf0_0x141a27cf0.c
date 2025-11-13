// 函数: sub_141a27cf0
// 地址: 0x141a27cf0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int16_t rax_5

if (*(arg1 + 0x30) == *(arg1 + 0x5c))
labelid_1:
    rax_5 = 0xff
else
    int32_t rax_2 = sub_140b5ead0(arg3.d) + arg3:4.d
    void* r8 = arg1 + 0x60
    void* rdx = *(r8 + 8)
    
    if (rdx != 0)
        r8 = rdx
    
    int32_t rax_4 = *(r8 + (((sx.q(*(arg1 + 0x70)) - 1) & sx.q(rax_2)) << 2))
    
    if (rax_4 == 0xffffffff)
    labelid_1:
        rax_5 = 0xff
    else
        int64_t r8_1 = *(arg1 + 0x28)
        int64_t rdx_1
        
        while (true)
            rdx_1 = sx.q(rax_4)
            int64_t rcx_4 = rdx_1 * 5
            
            if (*(r8_1 + (rcx_4 << 2)) == arg3)
                break
            
            rax_4 = *(r8_1 + (rcx_4 << 2) + 0xc)
            
            if (rax_4 == 0xffffffff)
                goto label_141a27d67_1
        
        if (rax_4 == 0xffffffff)
        label_141a27d67:
            rax_5 = 0xff
        else
            void* rcx_5 = r8_1 + rdx_1 * 0x14
            
            if (rcx_5 == 0)
            label_141a27d67_1:
                rax_5 = 0xff
            else
                rax_5 = *(rcx_5 + 8)

*arg2 = rax_5
return arg2
