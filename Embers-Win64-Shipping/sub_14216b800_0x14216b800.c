// 函数: sub_14216b800
// 地址: 0x14216b800
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t r10 = sx.q(*arg2)

if (r10.d u<= 1)
    int64_t result
    result.b = 0
    return result

int32_t* rcx_3

if (arg1[1].d == *(arg1 + 0x34))
label_14216b86e:
    rcx_3 = nullptr
else
    void* r8 = &arg1[7]
    void* rcx = arg1[8]
    
    if (rcx != 0)
        r8 = rcx
    
    int32_t rax_1 = *(r8 + (((sx.q(arg1[9].d) - 1) & r10) << 2))
    
    if (rax_1 == 0xffffffff)
    label_14216b86e_1:
        rcx_3 = nullptr
    else
        while (true)
            rcx_3 = sx.q(rax_1) * 0x38 + *arg1
            
            if (*rcx_3 == r10.d)
                break
            
            rax_1 = rcx_3[0xc]
            
            if (rax_1 == 0xffffffff)
                goto label_14216b86e_2
        
        if (rax_1 == 0xffffffff)
        label_14216b86e_2:
            rcx_3 = nullptr

void* rax_2 = &rcx_3[2]

if (rcx_3 == 0)
    rax_2 = nullptr

if (rax_2 == 0)
    return zx.q(arg3)

return *(rax_2 + 0x20) u>> 3 & 1
