// 函数: sub_141df1d70
// 地址: 0x141df1d70
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void* rax = sub_142468100()
int64_t* rcx = *(arg1 + 0xa8)

if (rcx != 0)
    int64_t* rax_1 = (*(*rcx + 0x20))(rcx)
    int32_t r8_2 = rax_1[1].d
    int32_t rdx_1 = r8_2 - arg2
    
    if (rdx_1 s> 0 && rdx_1 - 1 s< r8_2)
        void* rdx_2 = *(*rax_1 + (sx.q(rdx_1) << 3) - 8)
        
        if (rax != 0)
            void* rax_3 = *(rdx_2 + 0x78)
            int64_t rcx_3 = sx.q(*(rax + 0x38))
            
            if (rcx_3.d s<= *(rax_3 + 0x38) && *(*(rax_3 + 0x30) + (rcx_3 << 3)) == rax + 0x30)
                return sx.q(*(rdx_2 + 0x4c)) + *(arg1 + 0xa0)

return 0
