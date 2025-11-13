// 函数: sub_141e7c5f0
// 地址: 0x141e7c5f0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t r9 = sx.q(*(arg2 + 0x20c))

if (r9.d == 0)
    return 

int64_t* rdx_4

if (arg1[3].d == *(arg1 + 0x44))
labelid_2:
    rdx_4 = nullptr
else
    void* r8_1 = &arg1[9]
    void* rcx = arg1[0xa]
    
    if (rcx != 0)
        r8_1 = rcx
    
    int32_t rax_2 = *(r8_1 + (((sx.q(arg1[0xb].d) - 1) & r9) << 2))
    
    if (rax_2 == 0xffffffff)
    label_141e7c657:
        rdx_4 = nullptr
    else
        int64_t r8_2 = arg1[2]
        int64_t rdx_3
        
        while (true)
            rdx_3 = sx.q(rax_2)
            int64_t rcx_1 = rdx_3 * 3
            
            if (*(r8_2 + (rcx_1 << 3)) == r9.d)
                break
            
            rax_2 = *(r8_2 + (rcx_1 << 3) + 0x10)
            
            if (rax_2 == 0xffffffff)
                goto label_141e7c657_2
        
        if (rax_2 == 0xffffffff)
        label_141e7c657_1:
            rdx_4 = nullptr
        else
            void* rdx_5 = r8_2 + rdx_3 * 0x18
            
            if (rdx_5 == 0)
            label_141e7c657_2:
                rdx_4 = nullptr
            else
                rdx_4 = *(rdx_5 + 8)

sub_141e7c490(arg1, rdx_4)
*(arg2 + 0x169) = 0
*(arg2 + 0x1a4)
*(arg2 + 0x1a4) = 0
*(arg2 + 0x20c) = 0
