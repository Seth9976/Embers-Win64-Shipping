// 函数: sub_141e10f70
// 地址: 0x141e10f70
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int32_t temp0
int32_t temp1
temp0:temp1 = sx.q(arg2 - 2)
uint64_t result = zx.q((temp1 - temp0) s>> 1)
int32_t rdi = result.d
int64_t zmm1

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
                    if ((*(arg1 + sx.q(r8_1.d) * 0xc + 4)).d f> *(arg1 + sx.q(r10_1) * 0xc + 4))
                        r10_1 = r8_1.d
                    
                    r8_1 = zx.q(r10_1)
                
                result = sx.q(r8_1.d)
                int64_t* r10_2 = arg1 + sx.q(r11_1.d) * 0xc
                uint64_t rcx_2 = result * 3
                int64_t* rdx_2 = arg1 + (rcx_2 << 2)
                
                if ((*(arg1 + (rcx_2 << 2) + 4)).d f<= *(r10_2 + 4))
                    break
                
                if (r10_2 != rdx_2)
                    zmm1 = *r10_2
                    int32_t rcx_3 = r10_2[1].d
                    *r10_2 = *rdx_2
                    r10_2[1].d = rdx_2[1].d
                    *rdx_2 = zmm1
                    rdx_2[1].d = rcx_3
                
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
    int64_t* rdi_1 = arg1 + result * 0xc
    
    do
        if (arg1 != rdi_1)
            zmm1 = *arg1
            int32_t rcx_5 = arg1[1].d
            *arg1 = *rdi_1
            result = zx.q(rdi_1[1].d)
            arg1[1].d = result.d
            *rdi_1 = zmm1
            rdi_1[1].d = rcx_5
        
        uint64_t rbx_1 = 0
        
        if (i s> 1)
            do
                uint64_t r8_2 = zx.q(((rbx_1 << 1) + 1).d)
                int32_t r10_3 = (r8_2 + 1).d
                
                if (r10_3 s< i)
                    if ((*(arg1 + sx.q(r8_2.d) * 0xc + 4)).d f> *(arg1 + sx.q(r10_3) * 0xc + 4))
                        r10_3 = r8_2.d
                    
                    r8_2 = zx.q(r10_3)
                
                result = sx.q(r8_2.d)
                void* r10_4 = arg1 + sx.q(rbx_1.d) * 0xc
                uint64_t rcx_8 = result * 3
                void* rdx_4 = arg1 + (rcx_8 << 2)
                
                if ((*(arg1 + (rcx_8 << 2) + 4)).d f<= *(r10_4 + 4))
                    break
                
                if (r10_4 != rdx_4)
                    zmm1 = *r10_4
                    int32_t rcx_9 = *(r10_4 + 8)
                    *r10_4 = *rdx_4
                    *(r10_4 + 8) = *(rdx_4 + 8)
                    *rdx_4 = zmm1
                    *(rdx_4 + 8) = rcx_9
                
                result = zx.q(((r8_2 << 1) + 1).d)
                rbx_1 = zx.q(r8_2.d)
            while (result.d s< i)
        
        i -= 1
        rdi_1 -= 0xc
    while (i s> 0)

return result
