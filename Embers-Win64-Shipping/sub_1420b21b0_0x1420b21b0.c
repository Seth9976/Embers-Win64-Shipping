// 函数: sub_1420b21b0
// 地址: 0x1420b21b0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int32_t result = *arg2 - 0xa

if (result u<= 1)
    result = arg2[1]
    
    if (result s>= 0 && result s< *(arg1 + 0x48))
        int64_t* rax_1 = j_sub_140a82f30(0xc)
        int64_t* rdx = rax_1
        
        if (rax_1 == 0)
            rdx = rax_1
        else
            *rdx = 0
            rdx[1].d = 0
        
        int64_t rcx = sx.q(arg2[1]) * 3
        int64_t rax_3 = *(arg1 + 0x40)
        *rdx = *(rax_3 + (rcx << 2))
        result = *(rax_3 + (rcx << 2) + 8)
        rdx[1].d = result
        *(arg2 + 8) = rdx

return result
