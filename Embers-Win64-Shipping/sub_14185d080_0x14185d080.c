// 函数: sub_14185d080
// 地址: 0x14185d080
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int32_t temp0
int32_t temp1
temp0:temp1 = sx.q(arg2 - 2)
uint64_t result = zx.q((temp1 - temp0) s>> 1)
int32_t rbx = result.d
int128_t zmm2
int128_t zmm3
int128_t zmm4

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
                    if (arg1[(sx.q(r9_1) + 2) * 3].q u< arg1[sx.q(rdx_1.d) * 3].q)
                        rdx_1 = zx.q(r9_1)
                    
                    rdx_1 = zx.q(rdx_1.d + 1)
                
                uint64_t* r9_4 = &arg1[sx.q(rdx_1.d) * 3]
                result = *r9_4
                int64_t* r10_4 = &arg1[sx.q(r10_1) * 3]
                
                if (*r10_4 u>= result)
                    break
                
                if (r10_4 != r9_4)
                    zmm2 = *r10_4
                    zmm3 = *(r10_4 + 0x10)
                    zmm4 = *(r10_4 + 0x20)
                    *r10_4 = *r9_4
                    *(r10_4 + 0x10) = *(r9_4 + 0x10)
                    *(r10_4 + 0x20) = *(r9_4 + 0x20)
                    *r9_4 = zmm2
                    *(r9_4 + 0x10) = zmm3
                    *(r9_4 + 0x20) = zmm4
                
                result = zx.q(((rdx_1 << 1) + 1).d)
                r10_1 = rdx_1.d
            while (result.d s< arg2)
        
        rdi_1 -= 2
        temp2_1 = rbx
        rbx -= 1
    while (temp2_1 - 1 s>= 0)

int32_t i = arg2 - 1

if (i s> 0)
    result = sx.q(i)
    int128_t* rbx_3 = &arg1[result * 3]
    
    do
        if (arg1 != rbx_3)
            zmm2 = *arg1
            zmm3 = arg1[1]
            zmm4 = arg1[2]
            *arg1 = *rbx_3
            arg1[1] = rbx_3[1]
            arg1[2] = rbx_3[2]
            *rbx_3 = zmm2
            rbx_3[1] = zmm3
            rbx_3[2] = zmm4
        
        int32_t r10_5 = 0
        
        if (i s> 1)
            do
                int32_t result_1 = r10_5 * 2
                result = zx.q(result_1 + 1)
                
                if ((result + 1).d s< i)
                    if (arg1[(sx.q(result_1) + 2) * 3].q u< arg1[sx.q(result.d) * 3].q)
                        result = zx.q(result_1)
                    
                    result = zx.q(result.d + 1)
                
                void* r9_7 = &arg1[sx.q(result.d) * 3]
                void* r10_8 = &arg1[sx.q(r10_5) * 3]
                
                if (*r10_8 u>= *r9_7)
                    break
                
                if (r10_8 != r9_7)
                    zmm2 = *r10_8
                    zmm3 = *(r10_8 + 0x10)
                    zmm4 = *(r10_8 + 0x20)
                    *r10_8 = *r9_7
                    *(r10_8 + 0x10) = *(r9_7 + 0x10)
                    *(r10_8 + 0x20) = *(r9_7 + 0x20)
                    *r9_7 = zmm2
                    *(r9_7 + 0x10) = zmm3
                    *(r9_7 + 0x20) = zmm4
                
                r10_5 = result.d
                result = zx.q(((result << 1) + 1).d)
            while (result.d s< i)
        
        i -= 1
        rbx_3 -= 0x30
    while (i s> 0)

return result
