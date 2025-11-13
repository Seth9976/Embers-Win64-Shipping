// 函数: sub_1427820c0
// 地址: 0x1427820c0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int32_t temp0
int32_t temp1
temp0:temp1 = sx.q(arg2 - 2)
uint64_t result = zx.q((temp1 - temp0) s>> 1)
int32_t rdi = result.d
int64_t zmm2
uint128_t zmm3
int128_t zmm4

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
                    if ((*(sx.q(r10_1) * 0x2c + arg1 + 0x24)).d f>
                            *(sx.q(r8_1.d) * 0x2c + arg1 + 0x24))
                        r10_1 = r8_1.d
                    
                    r8_1 = zx.q(r10_1)
                
                result = sx.q(r8_1.d)
                void* r10_3 = sx.q(r11_1.d) * 0x2c + arg1
                void* rdx_3 = result * 0x2c + arg1
                
                if ((*(rdx_3 + 0x24)).d f>= *(r10_3 + 0x24))
                    break
                
                if (r10_3 != rdx_3)
                    int32_t rcx_1 = *(r10_3 + 0x28)
                    zmm3 = *r10_3
                    zmm4 = *(r10_3 + 0x10)
                    zmm2 = *(r10_3 + 0x20)
                    *r10_3 = *rdx_3
                    *(r10_3 + 0x10) = *(rdx_3 + 0x10)
                    *(r10_3 + 0x20) = *(rdx_3 + 0x20)
                    *(r10_3 + 0x28) = *(rdx_3 + 0x28)
                    *rdx_3 = zmm3
                    *(rdx_3 + 0x10) = zmm4
                    *(rdx_3 + 0x20) = zmm2
                    *(rdx_3 + 0x28) = rcx_1
                
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
    uint128_t* rdi_2 = result * 0x2c + arg1
    
    do
        if (arg1 != rdi_2)
            int32_t rcx_2 = *(arg1 + 0x28)
            zmm3 = *arg1
            zmm4 = arg1[1]
            zmm2 = arg1[2].q
            *arg1 = *rdi_2
            arg1[1] = rdi_2[1]
            arg1[2].q = rdi_2[2].q
            result = zx.q(*(rdi_2 + 0x28))
            *(arg1 + 0x28) = result.d
            *rdi_2 = zmm3
            rdi_2[1] = zmm4
            rdi_2[2].q = zmm2
            *(rdi_2 + 0x28) = rcx_2
        
        uint64_t rbx_1 = 0
        
        if (i s> 1)
            do
                uint64_t r8_2 = zx.q(((rbx_1 << 1) + 1).d)
                int32_t r10_4 = (r8_2 + 1).d
                
                if (r10_4 s< i)
                    if ((*(sx.q(r10_4) * 0x2c + arg1 + 0x24)).d f>
                            *(sx.q(r8_2.d) * 0x2c + arg1 + 0x24))
                        r10_4 = r8_2.d
                    
                    r8_2 = zx.q(r10_4)
                
                result = sx.q(r8_2.d)
                uint128_t* r10_6 = sx.q(rbx_1.d) * 0x2c + arg1
                uint128_t* rdx_6 = result * 0x2c + arg1
                
                if ((*(rdx_6 + 0x24)).d f>= *(r10_6 + 0x24))
                    break
                
                if (r10_6 != rdx_6)
                    int32_t rcx_4 = *(r10_6 + 0x28)
                    zmm3 = *r10_6
                    zmm4 = r10_6[1]
                    zmm2 = r10_6[2].q
                    *r10_6 = *rdx_6
                    r10_6[1] = rdx_6[1]
                    r10_6[2].q = rdx_6[2].q
                    *(r10_6 + 0x28) = *(rdx_6 + 0x28)
                    *rdx_6 = zmm3
                    rdx_6[1] = zmm4
                    rdx_6[2].q = zmm2
                    *(rdx_6 + 0x28) = rcx_4
                
                result = zx.q(((r8_2 << 1) + 1).d)
                rbx_1 = zx.q(r8_2.d)
            while (result.d s< i)
        
        i -= 1
        rdi_2 -= 0x2c
    while (i s> 0)

return result
