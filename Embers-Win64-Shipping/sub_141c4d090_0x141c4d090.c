// 函数: sub_141c4d090
// 地址: 0x141c4d090
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
        uint64_t r10_1 = zx.q(rbx)
        
        if (rdi_1 s< arg2)
            do
                uint64_t rdx_1 = zx.q(((r10_1 << 1) + 1).d)
                int32_t r9_1 = (rdx_1 + 1).d
                
                if (r9_1 s< arg2)
                    result = sx.q(rdx_1.d) * 2
                    
                    if ((*(arg1 + (result << 3) + 4)).d f> *(&arg1[sx.q(r9_1)] + 4))
                        r9_1 = rdx_1.d
                    
                    rdx_1 = zx.q(r9_1)
                
                int128_t* rcx_4 = &arg1[sx.q(rdx_1.d)]
                int128_t* r9_4 = &arg1[sx.q(r10_1.d)]
                
                if ((*(rcx_4 + 4)).d f<= *(r9_4 + 4))
                    break
                
                if (r9_4 != rcx_4)
                    zmm1 = *r9_4
                    *r9_4 = *rcx_4
                    *rcx_4 = zmm1
                
                result = zx.q(((rdx_1 << 1) + 1).d)
                r10_1 = zx.q(rdx_1.d)
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
        
        uint64_t r11_1 = 0
        
        if (i s> 1)
            do
                uint64_t rdx_2 = zx.q(((r11_1 << 1) + 1).d)
                int32_t r9_5 = (rdx_2 + 1).d
                
                if (r9_5 s< i)
                    result = sx.q(rdx_2.d) * 2
                    
                    if ((*(arg1 + (result << 3) + 4)).d f> *(&arg1[sx.q(r9_5)] + 4))
                        r9_5 = rdx_2.d
                    
                    rdx_2 = zx.q(r9_5)
                
                void* rcx_9 = &arg1[sx.q(rdx_2.d)]
                void* r9_8 = &arg1[sx.q(r11_1.d)]
                
                if ((*(rcx_9 + 4)).d f<= *(r9_8 + 4))
                    break
                
                if (r9_8 != rcx_9)
                    zmm1 = *r9_8
                    *r9_8 = *rcx_9
                    *rcx_9 = zmm1
                
                result = zx.q(((rdx_2 << 1) + 1).d)
                r11_1 = zx.q(rdx_2.d)
            while (result.d s< i)
        
        i -= 1
        rbx_3 -= 0x10
    while (i s> 0)

return result
