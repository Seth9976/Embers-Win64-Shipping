// 函数: sub_140a897c0
// 地址: 0x140a897c0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t rdx = sx.q(*(arg1 + 0x328))
int32_t r8 = *(arg1 + 0x32c)

if (rdx.d u> 0x64)
    int32_t r9_2 = r8 - rdx.d
    
    if (sx.q(r9_2) << 3 u< 0x4000 && (rdx * 3).d s>= r8 * 2)
        rdx = zx.q(r8)
    else if (r9_2 s> 0x40)
        if (rdx.d s> 0)
            int64_t* rcx_1 = data_143ddb3f0
            int64_t rdx_1 = rdx << 3
            
            if (rcx_1 != 0)
                int64_t rax = (*(*rcx_1 + 0x38))(rcx_1, rdx_1, 0)
                r8 = *(arg1 + 0x32c)
                rdx_1 = rax
            
            rdx = rdx_1 u>> 3
    else if (rdx.d != 0)
        rdx = zx.q(r8)
else
    rdx = 0x64

if (rdx.d == r8)
    return 

*(arg1 + 0x32c) = rdx.d
return sub_140a88560(arg1, *(arg1 + 0x328), rdx.d, 8) __tailcall
