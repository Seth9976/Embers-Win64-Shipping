// 函数: sub_140818760
// 地址: 0x140818760
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int32_t temp0
int32_t temp1
temp0:temp1 = sx.q(arg2 - 2)
uint64_t result = zx.q((temp1 - temp0) s>> 1)
int32_t rbp = result.d
int128_t zmm2
int128_t zmm3

if (result.d s>= 0)
    int32_t r14_1 = ((result << 1) + 1).d
    int32_t temp2_1
    
    do
        int32_t rbx_1 = rbp
        
        if (r14_1 s< arg2)
            do
                int32_t r11_1 = rbx_1 * 2
                uint64_t r10_1 = zx.q(r11_1 + 1)
                int32_t rax_3 = (r10_1 + 1).d
                
                if (rax_3 s< arg2)
                    if (sub_14081dbf0(arg4, &arg1[sx.q(rax_3) * 2], &arg1[sx.q(r10_1.d) * 2]) != 0)
                        r10_1 = zx.q(r11_1)
                    
                    r10_1 = zx.q(r10_1.d + 1)
                
                int32_t* r11_4 = &arg1[sx.q(r10_1.d) * 2]
                int128_t* rbx_4 = &arg1[sx.q(rbx_1) * 2]
                result = sub_14081dbf0(arg4, rbx_4, r11_4)
                
                if (result.b == 0)
                    break
                
                if (rbx_4 != r11_4)
                    zmm2 = *rbx_4
                    zmm3 = rbx_4[1]
                    *rbx_4 = *r11_4
                    rbx_4[1] = *(r11_4 + 0x10)
                    *r11_4 = zmm2
                    *(r11_4 + 0x10) = zmm3
                
                result = zx.q(((r10_1 << 1) + 1).d)
                rbx_1 = r10_1.d
            while (result.d s< arg2)
        
        r14_1 -= 2
        temp2_1 = rbp
        rbp -= 1
    while (temp2_1 - 1 s>= 0)

int32_t i = arg2 - 1

if (i s> 0)
    int128_t* rbp_3 = &arg1[sx.q(i) * 2]
    
    do
        if (arg1 != rbp_3)
            zmm2 = *arg1
            zmm3 = arg1[1]
            *arg1 = *rbp_3
            arg1[1] = rbp_3[1]
            *rbp_3 = zmm2
            rbp_3[1] = zmm3
        
        int32_t rbx_5 = 0
        
        if (i s> 1)
            uint64_t r10_2
            
            do
                int32_t r11_5 = rbx_5 * 2
                r10_2 = zx.q(r11_5 + 1)
                int32_t rax_5 = (r10_2 + 1).d
                
                if (rax_5 s< i)
                    if (sub_14081dbf0(arg4, &arg1[sx.q(rax_5) * 2], &arg1[sx.q(r10_2.d) * 2]) != 0)
                        r10_2 = zx.q(r11_5)
                    
                    r10_2 = zx.q(r10_2.d + 1)
                
                int32_t* r11_8 = &arg1[sx.q(r10_2.d) * 2]
                int32_t* rbx_8 = &arg1[sx.q(rbx_5) * 2]
                result = sub_14081dbf0(arg4, rbx_8, r11_8)
                
                if (result.b == 0)
                    break
                
                if (rbx_8 != r11_8)
                    zmm2 = *rbx_8
                    zmm3 = *(rbx_8 + 0x10)
                    *rbx_8 = *r11_8
                    *(rbx_8 + 0x10) = *(r11_8 + 0x10)
                    *r11_8 = zmm2
                    *(r11_8 + 0x10) = zmm3
                
                rbx_5 = r10_2.d
            while (((r10_2 << 1) + 1).d s< i)
        
        i -= 1
        rbp_3 -= 0x20
    while (i s> 0)

return result
