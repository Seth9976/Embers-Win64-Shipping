// 函数: sub_142781420
// 地址: 0x142781420
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int128_t zmm6
int128_t var_28 = zmm6
int128_t zmm7
int128_t var_38 = zmm7
int32_t temp0
int32_t temp1
temp0:temp1 = sx.q(arg2 - 2)
uint64_t result = zx.q((temp1 - temp0) s>> 1)
int32_t rdi = result.d
uint128_t zmm1
int64_t zmm2
int128_t zmm3
int128_t zmm4
int128_t zmm5

if (result.d s>= 0)
    int32_t rsi_1 = ((result << 1) + 1).d
    int32_t temp2_1
    
    do
        uint64_t r11_1 = zx.q(rdi)
        
        if (rsi_1 s< arg2)
            do
                uint64_t r8_1 = zx.q(((r11_1 << 1) + 1).d)
                int32_t r10_1 = (r8_1 + 1).d
                
                if (r10_1 s< arg2)
                    int64_t rdx_1 = sx.q(r10_1) * 0x58
                    int64_t rcx = sx.q(r8_1.d) * 0x58
                    zmm1 = __maxss_xmmss_memss((*(rdx_1 + arg1 + 0x34)).d, *(rdx_1 + arg1 + 0x30))
                    
                    if (__maxss_xmmss_memss((*(rcx + arg1 + 0x34)).d, *(rcx + arg1 + 0x30)).d
                            f< zmm1.d)
                        r10_1 = r8_1.d
                    
                    r8_1 = zx.q(r10_1)
                
                int128_t* rdx_3 = sx.q(r11_1.d) * 0x58 + arg1
                result = sx.q(r8_1.d) * 0x58 + arg1
                
                if (__maxss_xmmss_memss((*(rdx_3 + 0x34)).d, rdx_3[3].d).d
                        f<= __maxss_xmmss_memss((*(result + 0x34)).d, *(result + 0x30)).d)
                    break
                
                if (rdx_3 != result)
                    zmm3 = *rdx_3
                    zmm4 = rdx_3[1]
                    zmm5 = rdx_3[2]
                    zmm6 = rdx_3[3]
                    zmm7 = rdx_3[4]
                    zmm2 = rdx_3[5].q
                    *rdx_3 = *result
                    rdx_3[1] = *(result + 0x10)
                    rdx_3[2] = *(result + 0x20)
                    rdx_3[3] = *(result + 0x30)
                    rdx_3[4] = *(result + 0x40)
                    rdx_3[5].q = *(result + 0x50)
                    *result = zmm3
                    *(result + 0x10) = zmm4
                    *(result + 0x20) = zmm5
                    *(result + 0x30) = zmm6
                    *(result + 0x40) = zmm7
                    *(result + 0x50) = zmm2
                
                result = zx.q(((r8_1 << 1) + 1).d)
                r11_1 = zx.q(r8_1.d)
            while (result.d s< arg2)
        
        rsi_1 -= 2
        temp2_1 = rdi
        rdi -= 1
    while (temp2_1 - 1 s>= 0)

int32_t i = arg2 - 1

if (i s> 0)
    result = sx.q(i)
    int128_t* rdi_2 = result * 0x58 + arg1
    
    do
        if (arg1 != rdi_2)
            zmm3 = *arg1
            zmm4 = arg1[1]
            zmm5 = arg1[2]
            zmm6 = arg1[3]
            zmm7 = arg1[4]
            zmm2 = arg1[5].q
            *arg1 = *rdi_2
            arg1[1] = rdi_2[1]
            arg1[2] = rdi_2[2]
            arg1[3] = rdi_2[3]
            arg1[4] = rdi_2[4]
            arg1[5].q = rdi_2[5].q
            *rdi_2 = zmm3
            rdi_2[1] = zmm4
            rdi_2[2] = zmm5
            rdi_2[3] = zmm6
            rdi_2[4] = zmm7
            rdi_2[5].q = zmm2
        
        uint64_t rbx_1 = 0
        
        if (i s> 1)
            do
                uint64_t r8_2 = zx.q(((rbx_1 << 1) + 1).d)
                int32_t r10_2 = (r8_2 + 1).d
                
                if (r10_2 s< i)
                    int64_t rdx_4 = sx.q(r10_2) * 0x58
                    int64_t rcx_1 = sx.q(r8_2.d) * 0x58
                    zmm1 = __maxss_xmmss_memss((*(rdx_4 + arg1 + 0x34)).d, *(rdx_4 + arg1 + 0x30))
                    
                    if (__maxss_xmmss_memss((*(rcx_1 + arg1 + 0x34)).d, *(rcx_1 + arg1 + 0x30)).d
                            f< zmm1.d)
                        r10_2 = r8_2.d
                    
                    r8_2 = zx.q(r10_2)
                
                int128_t* rdx_6 = sx.q(rbx_1.d) * 0x58 + arg1
                result = sx.q(r8_2.d) * 0x58 + arg1
                
                if (__maxss_xmmss_memss((*(rdx_6 + 0x34)).d, rdx_6[3].d).d
                        f<= __maxss_xmmss_memss((*(result + 0x34)).d, *(result + 0x30)).d)
                    break
                
                if (rdx_6 != result)
                    zmm3 = *rdx_6
                    zmm4 = rdx_6[1]
                    zmm5 = rdx_6[2]
                    zmm6 = rdx_6[3]
                    zmm7 = rdx_6[4]
                    zmm2 = rdx_6[5].q
                    *rdx_6 = *result
                    rdx_6[1] = *(result + 0x10)
                    rdx_6[2] = *(result + 0x20)
                    rdx_6[3] = *(result + 0x30)
                    rdx_6[4] = *(result + 0x40)
                    rdx_6[5].q = *(result + 0x50)
                    *result = zmm3
                    *(result + 0x10) = zmm4
                    *(result + 0x20) = zmm5
                    *(result + 0x30) = zmm6
                    *(result + 0x40) = zmm7
                    *(result + 0x50) = zmm2
                
                result = zx.q(((r8_2 << 1) + 1).d)
                rbx_1 = zx.q(r8_2.d)
            while (result.d s< i)
        
        i -= 1
        rdi_2 -= 0x58
    while (i s> 0)

return result
