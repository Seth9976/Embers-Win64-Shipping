// 函数: sub_141a896f0
// 地址: 0x141a896f0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int32_t temp0
int32_t temp1
temp0:temp1 = sx.q(arg2 - 2)
uint64_t result = zx.q((temp1 - temp0) s>> 1)
int32_t rbx = result.d
int128_t zmm2
int128_t zmm3
int128_t zmm4
int128_t zmm5

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
                    if (arg1[(sx.q(r9_1) + 2) * 4].d s< arg1[sx.q(rdx_1.d) * 4].d)
                        rdx_1 = zx.q(r9_1)
                    
                    rdx_1 = zx.q(rdx_1.d + 1)
                
                int32_t* rcx_5 = &arg1[sx.q(rdx_1.d) * 4]
                int32_t* r9_4 = &arg1[sx.q(r10_1) * 4]
                result = zx.q(*rcx_5)
                
                if (*r9_4 s>= result.d)
                    break
                
                if (r9_4 != rcx_5)
                    zmm2 = *r9_4
                    zmm3 = *(r9_4 + 0x10)
                    zmm4 = *(r9_4 + 0x20)
                    zmm5 = *(r9_4 + 0x30)
                    *r9_4 = *rcx_5
                    *(r9_4 + 0x10) = *(rcx_5 + 0x10)
                    *(r9_4 + 0x20) = *(rcx_5 + 0x20)
                    *(r9_4 + 0x30) = *(rcx_5 + 0x30)
                    *rcx_5 = zmm2
                    *(rcx_5 + 0x10) = zmm3
                    *(rcx_5 + 0x20) = zmm4
                    *(rcx_5 + 0x30) = zmm5
                
                result = zx.q(((rdx_1 << 1) + 1).d)
                r10_1 = rdx_1.d
            while (result.d s< arg2)
        
        rdi_1 -= 2
        temp2_1 = rbx
        rbx -= 1
    while (temp2_1 - 1 s>= 0)

int32_t i = arg2 - 1

if (i s> 0)
    int128_t* rbx_3 = &arg1[sx.q(i) * 4]
    
    do
        if (arg1 != rbx_3)
            zmm2 = *arg1
            zmm3 = arg1[1]
            zmm4 = arg1[2]
            zmm5 = arg1[3]
            *arg1 = *rbx_3
            arg1[1] = rbx_3[1]
            arg1[2] = rbx_3[2]
            arg1[3] = rbx_3[3]
            *rbx_3 = zmm2
            rbx_3[1] = zmm3
            rbx_3[2] = zmm4
            rbx_3[3] = zmm5
        
        int32_t r10_2 = 0
        
        if (i s> 1)
            do
                int32_t result_1 = r10_2 * 2
                result = zx.q(result_1 + 1)
                
                if ((result + 1).d s< i)
                    if (*(((sx.q(result_1) + 2) << 6) + arg1) s< arg1[sx.q(result.d) * 4].d)
                        result = zx.q(result_1)
                    
                    result = zx.q(result.d + 1)
                
                void* rdx_7 = &arg1[sx.q(result.d) * 4]
                void* r9_7 = &arg1[sx.q(r10_2) * 4]
                
                if (*r9_7 s>= *rdx_7)
                    break
                
                if (r9_7 != rdx_7)
                    zmm2 = *r9_7
                    zmm3 = *(r9_7 + 0x10)
                    zmm4 = *(r9_7 + 0x20)
                    zmm5 = *(r9_7 + 0x30)
                    *r9_7 = *rdx_7
                    *(r9_7 + 0x10) = *(rdx_7 + 0x10)
                    *(r9_7 + 0x20) = *(rdx_7 + 0x20)
                    *(r9_7 + 0x30) = *(rdx_7 + 0x30)
                    *rdx_7 = zmm2
                    *(rdx_7 + 0x10) = zmm3
                    *(rdx_7 + 0x20) = zmm4
                    *(rdx_7 + 0x30) = zmm5
                
                r10_2 = result.d
                result = zx.q(((result << 1) + 1).d)
            while (result.d s< i)
        
        i -= 1
        rbx_3 -= 0x40
    while (i s> 0)

return result
