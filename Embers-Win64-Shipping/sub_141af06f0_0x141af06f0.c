// 函数: sub_141af06f0
// 地址: 0x141af06f0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t r14 = sx.q(arg3)
int32_t temp0
int32_t temp1
temp0:temp1 = sx.q(arg2 - 2)
uint64_t result = zx.q((temp1 - temp0) s>> 1)
int32_t rdi = result.d
int128_t zmm1

if (result.d s>= 0)
    int32_t rbp_1 = ((result << 1) + 1).d
    int32_t temp2_1
    
    do
        int32_t r8 = rdi
        
        if (rbp_1 s< arg2)
            void* rbx_1 = r14 + arg1
            
            do
                int32_t r10_1 = r8 * 2
                uint64_t rdx_1 = zx.q(r10_1 + 1)
                
                if ((rdx_1 + 1).d s< arg2)
                    if (*(((sx.q(r10_1) + 2) << 4) + r14 + arg1)
                            s< *((sx.q(rdx_1.d) << 4) + r14 + arg1))
                        rdx_1 = zx.q(r10_1)
                    
                    rdx_1 = zx.q(rdx_1.d + 1)
                
                int64_t rcx_5 = sx.q(rdx_1.d) * 2
                int64_t r8_2 = sx.q(r8) * 2
                result = zx.q(*(rbx_1 + (rcx_5 << 3)))
                
                if (*(rbx_1 + (r8_2 << 3)) s>= result.d)
                    break
                
                int128_t* rax_8 = arg1 + (rcx_5 << 3)
                int128_t* rcx_6 = arg1 + (r8_2 << 3)
                
                if (rcx_6 != rax_8)
                    zmm1 = *rcx_6
                    *rcx_6 = *rax_8
                    *rax_8 = zmm1
                
                result = zx.q(((rdx_1 << 1) + 1).d)
                r8 = rdx_1.d
            while (result.d s< arg2)
        
        rbp_1 -= 2
        temp2_1 = rdi
        rdi -= 1
    while (temp2_1 - 1 s>= 0)

int32_t i = arg2 - 1

if (i s> 0)
    int128_t* rdi_3 = &arg1[sx.q(i)]
    
    do
        if (arg1 != rdi_3)
            zmm1 = *arg1
            *arg1 = *rdi_3
            *rdi_3 = zmm1
        
        int32_t r8_3 = 0
        
        if (i s> 1)
            void* rbx_2 = r14 + arg1
            
            do
                int32_t result_1 = r8_3 * 2
                result = zx.q(result_1 + 1)
                
                if ((result + 1).d s< i)
                    if (*(((sx.q(result_1) + 2) << 4) + r14 + arg1)
                            s< *((sx.q(result.d) << 4) + r14 + arg1))
                        result = zx.q(result_1)
                    
                    result = zx.q(result.d + 1)
                
                int64_t rdx_7 = sx.q(result.d) * 2
                int64_t r8_5 = sx.q(r8_3) * 2
                
                if (*(rbx_2 + (r8_5 << 3)) s>= *(rbx_2 + (rdx_7 << 3)))
                    break
                
                void* rcx_13 = arg1 + (rdx_7 << 3)
                void* rdx_8 = arg1 + (r8_5 << 3)
                
                if (rdx_8 != rcx_13)
                    zmm1 = *rdx_8
                    *rdx_8 = *rcx_13
                    *rcx_13 = zmm1
                
                r8_3 = result.d
                result = zx.q(((result << 1) + 1).d)
            while (result.d s< i)
        
        i -= 1
        rdi_3 -= 0x10
    while (i s> 0)

return result
