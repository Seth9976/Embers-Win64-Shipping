// 函数: sub_140d8f5b0
// 地址: 0x140d8f5b0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int32_t temp0
int32_t temp1
temp0:temp1 = sx.q(arg2 - 2)
uint64_t result = zx.q((temp1 - temp0) s>> 1)
int32_t r15 = result.d
int128_t zmm2
int128_t zmm3

if (result.d s>= 0)
    int32_t r12_1 = ((result << 1) + 1).d
    int32_t temp2_1
    
    do
        int32_t rsi_1 = r15
        
        if (r12_1 s< arg2)
            do
                int32_t rdi_1 = rsi_1 * 2
                uint64_t rbx_1 = zx.q(rdi_1 + 1)
                int32_t rax_3 = (rbx_1 + 1).d
                
                if (rax_3 s< arg2)
                    if ((*arg4)(&arg1[sx.q(rax_3) * 2], &arg1[sx.q(rbx_1.d) * 2]) != 0)
                        rbx_1 = zx.q(rdi_1)
                    
                    rbx_1 = zx.q(rbx_1.d + 1)
                
                int128_t* rdi_4 = &arg1[sx.q(rbx_1.d) * 2]
                int128_t* rsi_4 = &arg1[sx.q(rsi_1) * 2]
                result = (*arg4)(rsi_4, rdi_4)
                
                if (result.b == 0)
                    break
                
                if (rsi_4 != rdi_4)
                    zmm2 = *rsi_4
                    zmm3 = rsi_4[1]
                    *rsi_4 = *rdi_4
                    rsi_4[1] = rdi_4[1]
                    *rdi_4 = zmm2
                    rdi_4[1] = zmm3
                
                result = zx.q(((rbx_1 << 1) + 1).d)
                rsi_1 = rbx_1.d
            while (result.d s< arg2)
        
        r12_1 -= 2
        temp2_1 = r15
        r15 -= 1
    while (temp2_1 - 1 s>= 0)

int32_t i = arg2 - 1

if (i s> 0)
    int128_t* r15_3 = &arg1[sx.q(i) * 2]
    
    do
        if (arg1 != r15_3)
            zmm2 = *arg1
            zmm3 = arg1[1]
            *arg1 = *r15_3
            arg1[1] = r15_3[1]
            *r15_3 = zmm2
            r15_3[1] = zmm3
        
        int32_t rsi_5 = 0
        
        if (i s> 1)
            uint64_t rbx_2
            
            do
                int32_t rdi_5 = rsi_5 * 2
                rbx_2 = zx.q(rdi_5 + 1)
                int32_t rax_7 = (rbx_2 + 1).d
                
                if (rax_7 s< i)
                    if ((*arg4)(&arg1[sx.q(rax_7) * 2], &arg1[sx.q(rbx_2.d) * 2]) != 0)
                        rbx_2 = zx.q(rdi_5)
                    
                    rbx_2 = zx.q(rbx_2.d + 1)
                
                void* rdi_8 = &arg1[sx.q(rbx_2.d) * 2]
                void* rsi_8 = &arg1[sx.q(rsi_5) * 2]
                result = (*arg4)(rsi_8, rdi_8)
                
                if (result.b == 0)
                    break
                
                if (rsi_8 != rdi_8)
                    zmm2 = *rsi_8
                    zmm3 = *(rsi_8 + 0x10)
                    *rsi_8 = *rdi_8
                    *(rsi_8 + 0x10) = *(rdi_8 + 0x10)
                    *rdi_8 = zmm2
                    *(rdi_8 + 0x10) = zmm3
                
                rsi_5 = rbx_2.d
            while (((rbx_2 << 1) + 1).d s< i)
        
        i -= 1
        r15_3 -= 0x20
    while (i s> 0)

return result
