// 函数: sub_14141ef80
// 地址: 0x14141ef80
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void* r10_2 = *arg1

if (r10_2 == 0)
    return 

void* r9_1 = arg1[1]

if (r9_1 == 0)
    return 

void* rax = *(r9_1 + 8)

if (rax == 0)
    return 

void* r9_2 = *(r9_1 + 0xf0)

if (r9_2 == 0 || (*(arg1 + 0x34) & 1) == 0 || *(rax + 0x32) == 2 || (*(rax + 0x38) & 0x20) == 0)
    return 

void* rcx_5

if (*(r9_2 + 0x1ac0) == *(r9_2 + 0x1aec))
label_14141f044:
    rcx_5 = nullptr
else
    arg3 = r9_2 + 0x1af0
    arg2 = *(arg3 + 8)
    int64_t r10 = sx.q(*(r10_2 + 0x28))
    
    if (arg2 != 0)
        arg3 = arg2
    
    int32_t rax_2 = *(arg3 + (((sx.q(*(r9_2 + 0x1b00)) - 1) & r10) << 2))
    
    if (rax_2 == 0xffffffff)
    label_14141f044_1:
        rcx_5 = nullptr
    else
        arg3 = *(r9_2 + 0x1ab8)
        
        while (true)
            rcx_5 = sx.q(rax_2) * 0x290 + arg3
            
            if (*rcx_5 == r10.d)
                break
            
            rax_2 = *(rcx_5 + 0x280)
            
            if (rax_2 == 0xffffffff)
                goto label_14141f044_2
        
        if (rax_2 == 0xffffffff)
        label_14141f044_2:
            rcx_5 = nullptr

rax = rcx_5 + 0x10

if (rcx_5 == 0)
    rax = nullptr

if (rax != 0)
    return sub_141425640(rax + 0x230, arg2, arg3) __tailcall
