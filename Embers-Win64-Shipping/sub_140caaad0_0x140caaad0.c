// 函数: sub_140caaad0
// 地址: 0x140caaad0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int32_t temp0
int32_t temp1
temp0:temp1 = sx.q(arg2 - 2)
uint64_t result = zx.q((temp1 - temp0) s>> 1)
int32_t rbx = result.d
int128_t zmm2
int128_t zmm3

if (result.d s>= 0)
    int32_t rdi_1 = ((result << 1) + 1).d
    int32_t temp2_1
    
    do
        int32_t r9_1 = rbx
        
        if (rdi_1 s< arg2)
            do
                int32_t r10_1 = r9_1 * 2
                uint64_t rdx_1 = zx.q(r10_1 + 1)
                
                if ((rdx_1 + 1).d s< arg2)
                    if (arg1[(sx.q(r10_1) + 2) * 2].d s< arg1[sx.q(rdx_1.d) * 2].d)
                        rdx_1 = zx.q(r10_1)
                    
                    rdx_1 = zx.q(rdx_1.d + 1)
                
                int32_t* r9_4 = &arg1[sx.q(r9_1) * 2]
                int32_t* rcx_5 = &arg1[sx.q(rdx_1.d) * 2]
                result = zx.q(*rcx_5)
                
                if (*r9_4 s>= result.d)
                    break
                
                if (r9_4 != rcx_5)
                    zmm2 = *r9_4
                    zmm3 = *(r9_4 + 0x10)
                    *r9_4 = *rcx_5
                    *(r9_4 + 0x10) = *(rcx_5 + 0x10)
                    *rcx_5 = zmm2
                    *(rcx_5 + 0x10) = zmm3
                
                result = zx.q(((rdx_1 << 1) + 1).d)
                r9_1 = rdx_1.d
            while (result.d s< arg2)
        
        rdi_1 -= 2
        temp2_1 = rbx
        rbx -= 1
    while (temp2_1 - 1 s>= 0)

int32_t i = arg2 - 1

if (i s> 0)
    int128_t* rbx_3 = &arg1[sx.q(i) * 2]
    
    do
        if (arg1 != rbx_3)
            zmm2 = *arg1
            zmm3 = arg1[1]
            *arg1 = *rbx_3
            arg1[1] = rbx_3[1]
            *rbx_3 = zmm2
            rbx_3[1] = zmm3
        
        int32_t r9_5 = 0
        
        if (i s> 1)
            do
                int32_t result_1 = r9_5 * 2
                result = zx.q(result_1 + 1)
                
                if ((result + 1).d s< i)
                    if (*(((sx.q(result_1) + 2) << 5) + arg1) s< arg1[sx.q(result.d) * 2].d)
                        result = zx.q(result_1)
                    
                    result = zx.q(result.d + 1)
                
                void* r9_8 = &arg1[sx.q(r9_5) * 2]
                void* rdx_7 = &arg1[sx.q(result.d) * 2]
                
                if (*r9_8 s>= *rdx_7)
                    break
                
                if (r9_8 != rdx_7)
                    zmm2 = *r9_8
                    zmm3 = *(r9_8 + 0x10)
                    *r9_8 = *rdx_7
                    *(r9_8 + 0x10) = *(rdx_7 + 0x10)
                    *rdx_7 = zmm2
                    *(rdx_7 + 0x10) = zmm3
                
                r9_5 = result.d
                result = zx.q(((result << 1) + 1).d)
            while (result.d s< i)
        
        i -= 1
        rbx_3 -= 0x20
    while (i s> 0)

return result
