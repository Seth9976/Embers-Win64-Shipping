// 函数: sub_140b93160
// 地址: 0x140b93160
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int32_t* r8 = *arg1
*arg2 = *r8
arg2[1] = r8[1]
arg2[2] = r8[2]
arg2[3] = r8[3]
int128_t zmm2
int128_t zmm3

if (&arg2[4] != &r8[4])
    zmm2 = *(arg2 + 0x10)
    zmm3 = *(arg2 + 0x20)
    int128_t zmm4 = *(arg2 + 0x30)
    int128_t zmm5 = *(arg2 + 0x40)
    *(arg2 + 0x10) = *(r8 + 0x10)
    *(arg2 + 0x20) = *(r8 + 0x20)
    *(arg2 + 0x30) = *(r8 + 0x30)
    *(arg2 + 0x40) = *(r8 + 0x40)
    *(r8 + 0x10) = zmm2
    *(r8 + 0x20) = zmm3
    *(r8 + 0x30) = zmm4
    *(r8 + 0x40) = zmm5

char entry_r9
uint64_t result = sub_140bb6860(arg1, 0, 1, entry_r9)
int32_t i = arg1[1].d
int32_t r11 = 0
int64_t rbx_1 = *arg1

if (i s> 1)
    int128_t zmm6
    int128_t var_18_1 = zmm6
    
    do
        int32_t result_1 = r11 * 2
        result = zx.q(result_1 + 1)
        
        if ((result + 1).d s< i)
            int32_t* rdx_3 = (sx.q(result_1) + 2) * 0x50 + rbx_1
            int32_t* r8_4 = sx.q(result.d) * 0x50 + rbx_1
            int32_t rcx_4 = *r8_4
            int32_t temp1_1 = *rdx_3
            
            if (rcx_4 == temp1_1)
                rcx_4 = r8_4[2]
                int32_t temp3_1 = rdx_3[2]
                
                if (rcx_4 == temp3_1)
                    rcx_4 = r8_4[1]
                    int32_t temp5_1 = rdx_3[1]
                    
                    if (rcx_4 == temp5_1)
                        rcx_4.b = r8_4[3] s< rdx_3[3]
                    else
                        rcx_4.b = rcx_4 s> temp5_1
                else
                    rcx_4.b = rcx_4 s> temp3_1
            else
                rcx_4.b = rcx_4 s> temp1_1
            
            if (rcx_4.b != 0)
                result = zx.q(result_1)
            
            result = zx.q(result.d + 1)
        
        int32_t* r9_2 = sx.q(r11) * 0x50 + rbx_1
        int32_t* r8_7 = sx.q(result.d) * 0x50 + rbx_1
        int32_t rcx_7 = *r8_7
        int32_t temp0_1 = *r9_2
        
        if (rcx_7 == temp0_1)
            rcx_7 = r8_7[2]
            int32_t temp2_1 = r9_2[2]
            
            if (rcx_7 == temp2_1)
                rcx_7 = r8_7[1]
                int32_t temp4_1 = r9_2[1]
                
                if (rcx_7 == temp4_1)
                    rcx_7.b = r8_7[3] s< r9_2[3]
                else
                    rcx_7.b = rcx_7 s> temp4_1
            else
                rcx_7.b = rcx_7 s> temp2_1
        else
            rcx_7.b = rcx_7 s> temp0_1
        
        if (rcx_7.b == 0)
            break
        
        if (r9_2 != r8_7)
            zmm2 = *r9_2
            zmm3 = *(r9_2 + 0x10)
            int128_t zmm4_1 = *(r9_2 + 0x20)
            int128_t zmm5_1 = *(r9_2 + 0x30)
            zmm6 = *(r9_2 + 0x40)
            *r9_2 = *r8_7
            *(r9_2 + 0x10) = *(r8_7 + 0x10)
            *(r9_2 + 0x20) = *(r8_7 + 0x20)
            *(r9_2 + 0x30) = *(r8_7 + 0x30)
            *(r9_2 + 0x40) = *(r8_7 + 0x40)
            *r8_7 = zmm2
            *(r8_7 + 0x10) = zmm3
            *(r8_7 + 0x20) = zmm4_1
            *(r8_7 + 0x30) = zmm5_1
            *(r8_7 + 0x40) = zmm6
        
        r11 = result.d
        result = zx.q(((result << 1) + 1).d)
    while (result.d s< i)

return result
