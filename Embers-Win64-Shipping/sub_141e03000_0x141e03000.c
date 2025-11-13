// 函数: sub_141e03000
// 地址: 0x141e03000
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t* rcx = *(arg1 + 0xa8)

if (rcx != 0)
    int64_t* rax_2 = (*(*rcx + 0x20))(rcx)
    int32_t rcx_1 = rax_2[1].d
    int32_t r9_2 = rcx_1 - arg2
    
    if (r9_2 s> 0 && r9_2 - 1 s< rcx_1)
        void* rdx = *(*rax_2 + (sx.q(r9_2) << 3) - 8)
        
        if (arg3 != 0)
            void* rax_5 = *(rdx + 0x78)
            int64_t rcx_3 = sx.q(*(arg3 + 0x38))
            
            if (rcx_3.d s<= *(rax_5 + 0x38) && *(*(rax_5 + 0x30) + (rcx_3 << 3)) == arg3 + 0x30)
                return sx.q(*(rdx + 0x4c)) + *(arg1 + 0xa0)

return 0
