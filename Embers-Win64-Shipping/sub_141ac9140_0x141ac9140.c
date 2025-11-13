// 函数: sub_141ac9140
// 地址: 0x141ac9140
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

sub_141aca6a0(arg1, *(arg2 + 0x20))
uint64_t result = sub_140d3e110(arg1 + 0x1c)

if (result.b != 0)
    result = sub_140d3c6e0(arg1 + 0x1c)
    uint64_t result_1 = result
    
    if (result != 0 && *(result + 0x430) != 0 && (*(result + 0x88) & 1) != 0)
        result = sub_140d3c6e0(result + 0x438)
        uint64_t result_2 = result
        
        if (result != 0)
            int64_t rax = sub_142591550()
            void* rcx_3 = *(result_2 + 0x10)
            result = rax + 0x30
            int64_t rdx_1 = sx.q(*(result + 8))
            
            if (rdx_1.d s<= *(rcx_3 + 0x38) && *(*(rcx_3 + 0x30) + (rdx_1 << 3)) == result)
                result_1 = result_2
        
        if (*(result_1 + 0x430) == 0 || (*(result_1 + 0x88) & 1) == 0)
            *(arg1 + 0x2c) = 0xffffffff
            *(arg1 + 0x30) = 0
        else
            char rax_1 = sub_141f73df0(result_1)
            int64_t rcx_6
            
            if (rax_1 != 0)
                rcx_6 = *(result_1 + 0x630)
            
            int64_t r14
            
            if (rax_1 == 0 || rcx_6 == 0 || rcx_6 != *(*(arg2 + 0x20) + 0x630))
                r14.b = 0
            else
                r14.b = 1
            
            char r15_1 = *(result_1 + 0x5a9) & 0x28
            int64_t* rax_3 = sub_141f3bb50(result_1)
            int64_t* rdi_1 = rax_3
            int32_t r12_1 = rax_3[1].d
            int32_t r13_1 = *(result_1 + sx.q(*(result_1 + 0x494)) * 0x10 + 0x458)
            *(arg1 + 0xe8) = 0
            
            if (*(arg1 + 0xec) s<= 0xffffffff)
                sub_1405a5220(arg1 + 0xe0, 0)
            
            if (r14.b != 0)
                if (r12_1 != r13_1)
                    rdi_1 = ((sx.q(*(result_1 + 0x494)) + 0x45) << 4) + result_1
            else if (r15_1 != 0x28 || r12_1 != r13_1)
                rdi_1 = ((sx.q(*(result_1 + 0x494)) + 0x45) << 4) + result_1
            
            int64_t r14_1 = sx.q(rdi_1[1].d)
            
            if (r14_1.d != 0)
                int32_t rcx_9 = *(arg1 + 0xe8)
                int32_t rdx_2 = rcx_9 + r14_1.d
                
                if (rdx_2 s> *(arg1 + 0xec))
                    sub_1405a5220(arg1 + 0xe0, rdx_2)
                    rcx_9 = *(arg1 + 0xe8)
                
                memcpy(sx.q(rcx_9) * 0x30 + *(arg1 + 0xe0), *rdi_1, (r14_1 * 0x30).d)
                *(arg1 + 0xe8) += r14_1.d
            
            result = sub_140d3a3a0(arg1 + 0x2c, *(result_1 + 0x430))
            
            if (*(arg1 + 0x19) != 0)
                int64_t* rax_7 = sub_141f3b9f0(result_1)
                result = sub_1409d9b90(arg1 + 0xf0)
                
                if (rax_7 != 0)
                    return sub_141a876a0(arg1 + 0xf0, sub_141df8530(rax_7, 0)) __tailcall

return result
