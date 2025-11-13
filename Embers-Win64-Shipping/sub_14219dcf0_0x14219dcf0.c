// 函数: sub_14219dcf0
// 地址: 0x14219dcf0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t rax = sub_140b5b8a0(arg2.d, 0)

if ((arg2:4.d == 0 & rax.b) == 0)
    int64_t rax_1 = sx.q(*(arg1 + 0x448))
    
    if (rax_1.d s> 0)
        int64_t rcx_1 = 0
        int64_t* rax_2 = *(arg1 + 0x440)
        
        do
            if (*rax_2 == arg2 && rax_2[1].b == 1)
                *(rax_2 + 0xc) = arg3.d
                return rax_2
            
            rcx_1 += 1
            rax_2 -= -0x80
        while (rcx_1 s< rax_1)
    
    int64_t rdi_1 = sx.q(*(arg1 + 0x448))
    int32_t rax_3 = (rdi_1 + 1).d
    *(arg1 + 0x448) = rax_3
    
    if (rax_3 s> *(arg1 + 0x44c))
        sub_1408888d0(arg1 + 0x440)
    
    int64_t rdi_2 = rdi_1 << 7
    memset(*(arg1 + 0x440) + rdi_2, 0, 0x80)
    *(rdi_2 + *(arg1 + 0x440)) = arg2
    *(*(arg1 + 0x440) + rdi_2 + 8) = 1
    rax = *(arg1 + 0x440)
    *(rax + rdi_2 + 0xc) = arg3.d

return rax
