// 函数: sub_142313dc0
// 地址: 0x142313dc0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int32_t result = &__return_addr
int64_t* rbx = *(arg1 + 0x158)

if (rbx != 0)
    int64_t* rcx = *(arg3 + 0x20)
    int64_t rbx_1 = *rbx
    int64_t rax_1 = (*(*rcx + 0x260))(rcx)
    (*(rbx_1 + 0x28))(*(arg1 + 0x158), rax_1, zx.q(*(arg3 + 0x3c)))
    int32_t i_1 = 0
    int32_t i = 0
    
    if (arg2[1].d s> 0)
        int32_t rdi_1 = 1
        int64_t r14_1 = 0
        
        do
            if ((arg4 & rdi_1) != 0)
                sub_142349560(*(arg1 + 0x158), *(*arg2 + r14_1), arg1 + 0xc0, *(arg3 + 0x3c), 
                    *(*(arg1 + 0x160) + 0x14))
            
            i += 1
            rdi_1 = rol.d(rdi_1, 1)
            r14_1 += 8
        while (i s< arg2[1].d)
    
    int64_t* rcx_3 = *(arg1 + 0x158)
    result = (*(*rcx_3 + 0x60))(rcx_3)
    int64_t* rdx_3 = *(arg1 + 0x160)
    int64_t result_2 = sx.q(result)
    int32_t result_1 = result
    int64_t* r14_2 = *(*rdx_3 + (result_2 << 3))
    
    if (*(arg1 + 0x190) s> 0 && result s>= zx.d(*(rdx_3 + 0x13)))
        void* rbp_2 = (result_2 << 4) + *(arg1 + 0x188)
        
        for (; i_1 s< r14_2[1].d; i_1 += 1)
            if (i_1 s< 0)
                break
            
            if (i_1 s>= *(rbp_2 + 8))
                break
            
            int64_t i_2 = sx.q(i_1)
            void* rdi_4 = (i_2 << 4) + *rbp_2
            
            if (sub_14233de20(*(arg1 + 0x158), result, *(rdi_4 + 0xc)) == 0
                    && *(i_2 * 0xe8 + *r14_2 + 0xe0) == 0)
                int64_t var_48_1 = arg5
                char var_78
                var_78.q = r14_2
                sub_142313b50(arg1, arg2, arg3, arg4, var_78, result_1, i_1, nullptr, rdi_4.b, 1)
            
            result = result_1

return result
