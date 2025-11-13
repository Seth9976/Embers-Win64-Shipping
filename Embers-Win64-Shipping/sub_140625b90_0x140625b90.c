// 函数: sub_140625b90
// 地址: 0x140625b90
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int32_t temp0
int32_t temp1
temp0:temp1 = sx.q(arg2 - 2)
uint64_t result = zx.q((temp1 - temp0) s>> 1)
int32_t rbx = result.d
int128_t zmm1

if (result.d s>= 0)
    int32_t rdi_1 = ((result << 1) + 1).d
    int32_t temp2_1
    
    do
        int32_t r10_1 = rbx
        
        if (rdi_1 s< arg2)
            do
                int32_t r9_1 = r10_1 * 2
                uint64_t rdx_1 = zx.q(r9_1 + 1)
                
                if ((rdx_1 + 1).d s< arg2)
                    if (*(&arg1[sx.q(r9_1)] + 0x28) s< *(&arg1[sx.q(rdx_1.d)] + 8))
                        rdx_1 = zx.q(r9_1)
                    
                    rdx_1 = zx.q(rdx_1.d + 1)
                
                int128_t* r9_4 = &arg1[sx.q(rdx_1.d)]
                int128_t* rcx_4 = &arg1[sx.q(r10_1)]
                result = *(r9_4 + 8)
                
                if (*(rcx_4 + 8) s>= result)
                    break
                
                if (rcx_4 != r9_4)
                    zmm1 = *rcx_4
                    *rcx_4 = *r9_4
                    *r9_4 = zmm1
                
                result = zx.q(((rdx_1 << 1) + 1).d)
                r10_1 = rdx_1.d
            while (result.d s< arg2)
        
        rdi_1 -= 2
        temp2_1 = rbx
        rbx -= 1
    while (temp2_1 - 1 s>= 0)

int32_t i = arg2 - 1

if (i s> 0)
    int128_t* rbx_3 = &arg1[sx.q(i)]
    
    do
        if (arg1 != rbx_3)
            zmm1 = *arg1
            *arg1 = *rbx_3
            *rbx_3 = zmm1
        
        int32_t r11_1 = 0
        
        if (i u> 1)
            do
                int32_t result_1 = r11_1 * 2
                result = zx.q(result_1 + 1)
                
                if ((result + 1).d s< i)
                    if (*(&arg1[sx.q(result_1)] + 0x28) s< *(&arg1[sx.q(result.d)] + 8))
                        result = zx.q(result_1)
                    
                    result = zx.q(result.d + 1)
                
                void* r9_7 = &arg1[sx.q(result.d)]
                void* rdx_6 = &arg1[sx.q(r11_1)]
                
                if (*(rdx_6 + 8) s>= *(r9_7 + 8))
                    break
                
                if (rdx_6 != r9_7)
                    zmm1 = *rdx_6
                    *rdx_6 = *r9_7
                    *r9_7 = zmm1
                
                r11_1 = result.d
                result = zx.q(((result << 1) + 1).d)
            while (result.d s< i)
        
        i -= 1
        rbx_3 -= 0x10
    while (i s> 0)

return result
