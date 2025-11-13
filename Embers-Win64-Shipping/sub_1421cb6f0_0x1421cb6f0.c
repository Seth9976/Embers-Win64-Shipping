// 函数: sub_1421cb6f0
// 地址: 0x1421cb6f0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

uint64_t result = *(arg1 + 0x10)
int32_t rbx = 0
int32_t i = 0
void* r12 = **(result + 0x40)
int32_t arg_8
int512_t zmm3

if (*(arg3 + 0x88) s> 0)
    int64_t* rsi_1 = nullptr
    
    do
        result = *(arg3 + 0x80)
        int64_t* rdi_1 = *(rsi_1 + result)
        
        if (rdi_1 != 0)
            result = zx.q(rdi_1[5].b)
            
            if (result.b s< 0 && (result.b & 4) != 0)
                void* r14_1 = *(arg1 + 0x10)
                sub_140865c40(r14_1 + 0x60, &arg_8, *(*(r12 + 0x80) + rsi_1))
                int64_t rax = sx.q(arg_8)
                void* const rcx_1
                
                if (rax.d == 0xffffffff)
                    rcx_1 = nullptr
                else
                    rcx_1 = *(r14_1 + 0x60) + rax * 0x18
                
                int32_t* rax_2 = rcx_1 + 8
                
                if (rcx_1 == 0)
                    rax_2 = nullptr
                
                uint64_t r8_2
                
                if (rax_2 == 0)
                    r8_2 = 0
                else
                    r8_2 = zx.q(*rax_2)
                
                zmm3.o = arg2
                result = (*(*rdi_1 + 0x278))(rdi_1, arg1, r8_2, zmm3, arg4)
        
        i += 1
        rsi_1 = &rsi_1[1]
    while (i s< *(arg3 + 0x88))

int64_t* rdi_2 = *(arg3 + 0x48)

if (rdi_2 != 0)
    result = zx.q(rdi_2[5].b)
    
    if (result.b s< 0 && (result.b & 4) != 0)
        void* rsi_2 = *(arg1 + 0x10)
        sub_140865c40(rsi_2 + 0x60, &arg_8, *(r12 + 0x48))
        int64_t rax_4 = sx.q(arg_8)
        void* const rcx_4
        
        if (rax_4.d == 0xffffffff)
            rcx_4 = nullptr
        else
            rcx_4 = *(rsi_2 + 0x60) + rax_4 * 0x18
        
        int32_t* rax_6 = rcx_4 + 8
        
        if (rcx_4 == 0)
            rax_6 = nullptr
        
        if (rax_6 != 0)
            rbx = *rax_6
        
        zmm3.o = arg2
        return (*(*rdi_2 + 0x278))(rdi_2, arg1, zx.q(rbx), zmm3, arg4)

return result
