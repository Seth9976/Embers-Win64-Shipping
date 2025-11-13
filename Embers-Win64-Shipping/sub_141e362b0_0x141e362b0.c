// 函数: sub_141e362b0
// 地址: 0x141e362b0
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
        uint64_t r10_1 = zx.q(rbx)
        
        if (rdi_1 s< arg2)
            do
                uint64_t rdx_1 = zx.q(((r10_1 << 1) + 1).d)
                int32_t r9_1 = (rdx_1 + 1).d
                
                if (r9_1 s< arg2)
                    result = sx.q(r9_1) << 6
                    
                    if ((*(result + arg1 + 0x10)).d f> arg1[sx.q(rdx_1.d) * 4 + 1].d)
                        r9_1 = rdx_1.d
                    
                    rdx_1 = zx.q(r9_1)
                
                int128_t* r9_4 = &arg1[sx.q(r10_1.d) * 4]
                int128_t* rcx_4 = &arg1[sx.q(rdx_1.d) * 4]
                
                if (r9_4[1].d.d f<= rcx_4[1].d)
                    break
                
                if (r9_4 != rcx_4)
                    zmm2 = *r9_4
                    zmm3 = r9_4[1]
                    zmm4 = r9_4[2]
                    zmm5 = r9_4[3]
                    *r9_4 = *rcx_4
                    r9_4[1] = rcx_4[1]
                    r9_4[2] = rcx_4[2]
                    r9_4[3] = rcx_4[3]
                    *rcx_4 = zmm2
                    rcx_4[1] = zmm3
                    rcx_4[2] = zmm4
                    rcx_4[3] = zmm5
                
                result = zx.q(((rdx_1 << 1) + 1).d)
                r10_1 = zx.q(rdx_1.d)
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
        
        uint64_t r10_2 = 0
        
        if (i s> 1)
            do
                uint64_t rdx_2 = zx.q(((r10_2 << 1) + 1).d)
                int32_t r9_5 = (rdx_2 + 1).d
                
                if (r9_5 s< i)
                    result = sx.q(r9_5) << 6
                    
                    if ((*(result + arg1 + 0x10)).d f> arg1[sx.q(rdx_2.d) * 4 + 1].d)
                        r9_5 = rdx_2.d
                    
                    rdx_2 = zx.q(r9_5)
                
                void* r9_8 = &arg1[sx.q(r10_2.d) * 4]
                void* rcx_9 = &arg1[sx.q(rdx_2.d) * 4]
                
                if ((*(r9_8 + 0x10)).d f<= *(rcx_9 + 0x10))
                    break
                
                if (r9_8 != rcx_9)
                    zmm2 = *r9_8
                    zmm3 = *(r9_8 + 0x10)
                    zmm4 = *(r9_8 + 0x20)
                    zmm5 = *(r9_8 + 0x30)
                    *r9_8 = *rcx_9
                    *(r9_8 + 0x10) = *(rcx_9 + 0x10)
                    *(r9_8 + 0x20) = *(rcx_9 + 0x20)
                    *(r9_8 + 0x30) = *(rcx_9 + 0x30)
                    *rcx_9 = zmm2
                    *(rcx_9 + 0x10) = zmm3
                    *(rcx_9 + 0x20) = zmm4
                    *(rcx_9 + 0x30) = zmm5
                
                result = zx.q(((rdx_2 << 1) + 1).d)
                r10_2 = zx.q(rdx_2.d)
            while (result.d s< i)
        
        i -= 1
        rbx_3 -= 0x40
    while (i s> 0)

return result
