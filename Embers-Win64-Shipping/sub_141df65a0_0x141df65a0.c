// 函数: sub_141df65a0
// 地址: 0x141df65a0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void* const* result = &__return_addr
int64_t i_1 = sx.q(*(arg2 + 0x18))
void* r13 = *(arg2 + 0x40)

if (i_1 s> 0)
    char* rdi_1 = r13 + 3
    int64_t i
    
    do
        void*** rdx = arg3[2]
        void* rbx_2 = *(arg2 + 0x10) + -3 - r13
        uint32_t rcx = zx.d(*(rbx_2 + rdi_1 + 8))
        int16_t rdx_1
        
        if (rcx s>= rdx[1].d)
            rdx_1 = -1
        else
            result = *rdx
            rdx_1 = *(result + (zx.q(rcx.w) << 1))
        
        if (rdx_1 != 0xffff)
            int32_t var_50_1 = 0
            int32_t zmm0_1
            result, zmm0_1 = sub_141f9d940(zx.d(rdi_1[-3]), zx.d(rdi_1[-2]), zx.d(rdi_1[-1]), 
                zx.d(*rdi_1), *(rdi_1 + 1), *(rdi_1 + 5) + r13.d, arg4.d)
            void*** rdx_3 = arg3[2]
            uint32_t rcx_3 = zx.d(*(rbx_2 + rdi_1 + 8))
            int16_t rdx_4
            
            if (rcx_3 s>= rdx_3[1].d)
                rdx_4 = -1
            else
                result = *rdx_3
                rdx_4 = *(result + (zx.q(rcx_3.w) << 1))
            
            if (rdx_4 != 0xffff)
                result = *arg3
                uint64_t rcx_5 = zx.q(rdx_4)
                result[rcx_5].d = zmm0_1
                *(&result[rcx_5] + 4) = 1
        
        rdi_1 = &rdi_1[0xc]
        i = i_1
        i_1 -= 1
    while (i != 1)

return result
