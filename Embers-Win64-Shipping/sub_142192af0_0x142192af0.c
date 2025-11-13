// 函数: sub_142192af0
// 地址: 0x142192af0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t rax

if ((arg2:4.d == 0 & sub_140b5b8a0(arg2.d, 0).b) == 0)
    uint32_t rax_1
    int64_t* rcx_1
    
    if ((*(arg1 + 0x433) & 8) == 0 && data_143de5480 != 0)
        rcx_1 = 0x5a0
        rax_1.b = GetCurrentThreadId() == data_143de5470
    
    if ((*(arg1 + 0x433) & 8) != 0 || data_143de5480 == 0 || rax_1.b != 0)
        rcx_1 = 0x440
    
    rax = sx.q(*(rcx_1 + arg1 + 8))
    
    if (rax.d s> 0)
        int64_t* rcx_2 = *(rcx_1 + arg1)
        int64_t r8 = rax
        rax = 0
        
        do
            if (*rcx_2 == arg2)
                char rdx_1 = rcx_2[1].b
                
                if (rdx_1 == 1)
                    *arg3 = *(rcx_2 + 0xc)
                    float rax_6
                    rax_6.b = 1
                    return rax_6
                
                if (rdx_1 == 2)
                    int32_t rax_3 = *(arg1 + 0x614) * 0xbb38435 + 0x3619636b
                    *(arg1 + 0x614) = rax_3
                    int64_t arg_10
                    arg_10.d = rax_3 u>> 9 | 0x3f800000
                    int32_t rax_5
                    rax_5.b = 1
                    *arg3 = (rcx_2[2].d f- *(rcx_2 + 0xc)) * (arg_10.d - 1f) f+ *(rcx_2 + 0xc)
                    return rax_5
            
            rax += 1
            rcx_2 -= -0x80
        while (rax s< r8)

rax.b = 0
return rax
