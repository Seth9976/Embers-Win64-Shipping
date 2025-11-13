// 函数: sub_1421cb950
// 地址: 0x1421cb950
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

uint64_t result = *(arg1 + 0x10)
int32_t i = 0
void* r13 = **(result + 0x40)

if (*(arg3 + 0x88) s> 0)
    int64_t* rdi_1 = nullptr
    
    do
        result = *(arg3 + 0x80)
        int64_t* rbx_1 = *(rdi_1 + result)
        
        if (rbx_1 != 0)
            result = zx.q(rbx_1[5].b)
            
            if (result.b s< 0 && (result.b & 2) != 0)
                void* rsi_1 = *(arg1 + 0x10)
                int32_t arg_8
                sub_140865c40(rsi_1 + 0x60, &arg_8, *(*(r13 + 0x80) + rdi_1))
                int64_t rax = sx.q(arg_8)
                void* const rcx_1
                
                if (rax.d == 0xffffffff)
                    rcx_1 = nullptr
                else
                    rcx_1 = *(rsi_1 + 0x60) + rax * 0x18
                
                int32_t* rax_2 = rcx_1 + 8
                
                if (rcx_1 == 0)
                    rax_2 = nullptr
                
                uint64_t r8_2
                
                if (rax_2 == 0)
                    r8_2 = 0
                else
                    r8_2 = zx.q(*rax_2)
                
                int512_t zmm3
                zmm3.o = arg2
                result = (*(*rbx_1 + 0x270))(rbx_1, arg1, r8_2, zmm3, arg4)
        
        i += 1
        rdi_1 = &rdi_1[1]
    while (i s< *(arg3 + 0x88))

return result
