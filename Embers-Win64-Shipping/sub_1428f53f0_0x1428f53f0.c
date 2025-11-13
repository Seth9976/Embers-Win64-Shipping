// 函数: sub_1428f53f0
// 地址: 0x1428f53f0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

__chkstk(0x20)
int64_t rdi = arg2

if (arg2 != 0)
    if (sub_142890300(arg1) != 0)
        int32_t rax_2 = sub_142890900(arg1, rdi)
        
        if (rax_2 != 0)
            sub_1428908e0(arg1, 1)
        
        return zx.q(rax_2)
    
    if (arg1[2].d != 0)
        arg1[2].d = 0
        int64_t* result = sub_1428f4ee0(arg1, rdi)
        arg1[2].d = 1
        return result
    
    if (arg1[1].d == 1)
        int64_t* rax_4 = *arg1
        int64_t rcx_3 = *rax_4
        
        if (rcx_3 u< rdi)
            *rax_4 = rdi - rcx_3
            arg1[2].d = 1
            return 1
    
    int64_t* r8_1 = *arg1
    int32_t rdx_2 = 0
    
    if (*r8_1 u< rdi)
        int64_t rcx_4 = 0
        int64_t* r9_1 = nullptr
        
        do
            int64_t rax_6 = *arg1
            rcx_4 += 1
            rdx_2 += 1
            *(r9_1 + rax_6) -= rdi
            rdi = 1
            r8_1 = *arg1
            r9_1 = rcx_4 << 3
        while (*(r8_1 + r9_1) u< 1)
    
    int64_t* rcx_5 = sx.q(rdx_2) << 3
    *(rcx_5 + r8_1) -= rdi
    
    if (*(rcx_5 + *arg1) == 0)
        int32_t rax_10 = arg1[1].d - 1
        
        if (rdx_2 == rax_10)
            arg1[1].d = rax_10

return 1
