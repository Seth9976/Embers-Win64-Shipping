// 函数: sub_14230bca0
// 地址: 0x14230bca0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void* const* result = &__return_addr
int64_t* r14 = arg4

if (*(arg1 + 0x430) != 0)
    int32_t r9 = *(arg2 + 0xc)
    arg2[1].d = 0
    int32_t rdx = 0
    
    if (r9 != 0)
        sub_140638cc0(arg2, 0)
        rdx = arg2[1].d
        r9 = *(arg2 + 0xc)
    
    result = zx.q(*(r14 + 0xec))
    int32_t rcx_1 = rdx + (result << 1).d
    arg2[1].d = rcx_1
    
    if (rcx_1 s> r9)
        result = sub_140638a00(arg2)
    
    int32_t i = 0
    int32_t i_1 = 0
    
    if (r14[1].d s> 0)
        int64_t r12_1 = 0
        int64_t var_50_1 = 0
        
        do
            int32_t rbx_1 = 0
            void* rsi_2 = *r14 + r12_1
            int32_t r13_1 = *(rsi_2 + 0x38)
            int32_t rdi_1 = *(rsi_2 + 0x10)
            
            if (r13_1 != 0)
                do
                    int64_t r8 = *arg2
                    result = sub_141f69690(arg1, rsi_2, &r14[6], arg5, rbx_1, arg3, 
                        r8 + sx.q(rdi_1) * 0xc, r8 + sx.q(rdi_1 + 1) * 0xc)
                    rbx_1 += 1
                    rdi_1 += 2
                while (rbx_1 u< r13_1)
                
                r14 = arg4
                i = i_1
                r12_1 = var_50_1
            
            i += 1
            r12_1 += 0xe8
            i_1 = i
            var_50_1 = r12_1
        while (i s< r14[1].d)

return result
