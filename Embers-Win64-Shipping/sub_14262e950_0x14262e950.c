// 函数: sub_14262e950
// 地址: 0x14262e950
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void var_108
int64_t rax_1 = __security_cookie ^ &var_108
uint64_t result = zx.q(arg4[1])
int32_t* r15 = arg5
int32_t* r14 = arg4
uint64_t j_7 = zx.q(*arg4)
uint64_t rbx = 0
int32_t* var_b0 = r15

if (result.d s<= 0)
    result.b = 0
else
    int64_t r9 = 0
    uint64_t i_4 = zx.q(result.d)
    uint64_t i
    
    do
        if (j_7.d s> 0)
            uint64_t j_5 = j_7
            int64_t* rdx = r9 + *(r14 + 0x28)
            uint64_t j
            
            do
                void* k = *rdx
                
                while (k != 0)
                    bool cond:0_1 = *k u< 0x4000000
                    result = zx.q((rbx + 1).d)
                    k = *(k + 8)
                    
                    if (cond:0_1)
                        result = zx.q(rbx.d)
                    
                    rbx = zx.q(result.d)
                
                rdx = &rdx[1]
                j = j_5
                j_5 -= 1
            while (j != 1)
        
        r9 += sx.q(j_7.d) << 3
        i = i_4
        i_4 -= 1
    while (i != 1)
    
    if (rbx.d == 0)
        result.b = 0
    else
        if (*(arg1 + 9) != i_4.b)
            (*(*arg1 + 0x20))(arg1, zx.q((i_4 + 3).d))
        
        int64_t j_9 = sx.q(*r14)
        uint64_t i_5 = zx.q(r14[1])
        *r15 = j_9.d
        r15[1] = i_5.d
        *(r15 + 0x1a) = 0
        r15[2] = rbx.d
        r15[3] = arg2
        r15[4] = arg3
        r15[7] = r14[2]
        r15[8] = r14[3]
        r15[9] = r14[4]
        r15[0xa] = r14[5]
        r15[0xb] = r14[6]
        r15[0xc] = r14[7]
        int32_t j_8 = j_9.d
        int32_t i_6 = i_5.d
        uint128_t zmm0
        zmm0.d = _mm_cvtepi32_ps(zx.o(arg2)).d f* r14[9]
        zmm0.d = zmm0.d f+ r15[0xb]
        r15[0xb] = zmm0.d
        r15[0xd] = r14[8]
        r15[0xe] = r14[9]
        result = data_143b502a8(zx.q((i_5.d * j_9.d) << 2), 0)
        *(r15 + 0x40) = result
        
        if (result == 0)
            result.b = 0
        else
            int64_t j_10 = j_9
            memset(result, 0, (sx.q(i_5.d) * j_9) << 2)
            result = data_143b502a8(zx.q((rbx * 3).d << 2), 0)
            *(r15 + 0x48) = result
            
            if (result == 0)
                result.b = 0
            else
                int64_t count = sx.q(rbx.d)
                memset(result, 0, count * 0xc)
                result = data_143b502a8(zx.q(rbx.d), 0)
                *(r15 + 0x58) = result
                
                if (result == 0)
                    result.b = 0
                else
                    memset(result, 0, count)
                    int32_t rdi_3 = 0
                    
                    if (i_5.d s> 0)
                        result = j_10 << 3
                        int64_t* var_a8_1 = nullptr
                        int64_t rcx_10 = j_10 << 2
                        uint64_t result_1 = result
                        int64_t var_90_1 = rcx_10
                        uint8_t* rbx_1 = nullptr
                        int64_t* r15_1 = nullptr
                        uint64_t i_7 = i_5
                        int32_t* r12_1 = nullptr
                        int32_t j_6 = j_10.d
                        uint64_t i_1
                        
                        do
                            if (j_6 s> 0)
                                int64_t* rsi_1 = r15_1
                                uint64_t j_4 = zx.q(j_6)
                                int32_t* r10 = r12_1
                                uint64_t j_1
                                
                                do
                                    int32_t* k_1 = *(rsi_1 + *(r14 + 0x28))
                                    
                                    if (k_1 != 0)
                                        int64_t r11_1 = *(var_b0 + 0x40)
                                        *(r10 + r11_1) &= 0xff000000
                                        *(r10 + r11_1) |= rdi_3 & 0xffffff
                                        int64_t r9_2 = rbx_1 * 0xc
                                        *(r10 + r11_1 + 3) = 0
                                        
                                        do
                                            int32_t rdx_2 = *k_1
                                            
                                            if (rdx_2 u>= 0x4000000)
                                                int32_t* rax_14 = *(k_1 + 8)
                                                int32_t rdx_4 = rdx_2 u>> 0xd & 0x1fff
                                                int32_t rcx_12
                                                
                                                if (rax_14 == 0)
                                                    rcx_12 = 0xffff
                                                else
                                                    rcx_12 = *rax_14 & 0x1fff
                                                
                                                int32_t rcx_13 = rcx_12 - rdx_4
                                                *(r9_2 + *(var_b0 + 0x48)) = rdx_4.w
                                                
                                                if (rcx_12 - rdx_4 s< 0)
                                                    rcx_13 = 0
                                                else if (rcx_13 s> 0xff)
                                                    rcx_13 = 0xff
                                                
                                                rdi_3 += 1
                                                *(r9_2 + *(var_b0 + 0x48) + 8) = rcx_13.b
                                                r9_2 += 0xc
                                                rbx_1[*(var_b0 + 0x58)] = (*k_1 u>> 0x1a).b
                                                rbx_1 = &rbx_1[1]
                                                *(r10 + r11_1 + 3) += 1
                                            
                                            k_1 = *(k_1 + 8)
                                        while (k_1 != 0)
                                        
                                        r14 = arg4
                                    
                                    rsi_1 = &rsi_1[1]
                                    r10 = &r10[1]
                                    j_1 = j_4
                                    j_4 -= 1
                                while (j_1 != 1)
                                r15_1 = var_a8_1
                                i_5 = i_7
                                result = result_1
                                rcx_10 = var_90_1
                                j_6 = j_8
                            
                            r15_1 += result
                            r12_1 += rcx_10
                            i_1 = i_5
                            i_5 -= 1
                            var_a8_1 = r15_1
                            i_7 = i_5
                        while (i_1 != 1)
                        j_10 = j_9
                        r15 = var_b0
                        j_9 = zx.q(j_10.d)
                        i_5 = zx.q(i_6)
                    
                    int32_t i_3 = 0
                    int32_t rsi_2 = 0
                    int32_t i_2 = 0
                    int64_t* rbx_5
                    
                    if (i_5.d s<= 0)
                        rbx_5 = arg1
                    else
                        result = 0
                        int64_t rcx_16 = j_10 << 2
                        uint64_t result_3 = 0
                        int64_t var_70_1 = rcx_16
                        
                        do
                            int32_t j_2 = 0
                            int32_t j_3 = 0
                            
                            if (j_9.d s> 0)
                                uint64_t result_4 = result
                                uint64_t result_2 = result
                                
                                do
                                    int32_t rcx_17 = *(result_4 + *(r15 + 0x40))
                                    uint64_t rax_20 = zx.q(rcx_17) & 0xffffff
                                    uint64_t rdx_5 = zx.q(rax_20.d)
                                    uint64_t rcx_19 = zx.q((rcx_17 u>> 0x18) + rax_20.d)
                                    
                                    if (rdx_5 u< rcx_19)
                                        uint64_t r9_4 = rax_20 * 0xc
                                        uint64_t var_c0_1 = r9_4
                                        uint64_t k_3 = rcx_19 - rdx_5
                                        int128_t var_68
                                        __builtin_memcpy(&var_68, 
                                            "\xff\xff\xff\xff\x00\x00\x00\x00\x01\x00\x00\x00\x00\x00\x"
                                        "00\x00\x00\x00\x00\x00\x01\x00\x00\x00\x00\x00\x00\x00\xff"
                                        "ff\xff\xff", 
                                            0x20)
                                        uint64_t k_2
                                        
                                        do
                                            int64_t r11_2 = *(r15 + 0x48)
                                            int32_t rdx_6 = 0
                                            int32_t rax_21 = 0
                                            int64_t var_a8_2 = r11_2
                                            int32_t var_b8_1 = 0
                                            int32_t var_d8_1 = 0
                                            int32_t r10_1 = *(r9_4 + r11_2 + 4)
                                            
                                            do
                                                int32_t rax_22 = 0xff << rax_21.b
                                                int32_t rcx_23 = not.d(rax_22)
                                                int64_t var_98_1
                                                var_98_1.d = rcx_23
                                                int32_t r10_3 = (r10_1 & rcx_23) | rax_22
                                                uint64_t rcx_25 = zx.q(rdx_6) & 3
                                                *(r9_4 + r11_2 + 4) = r10_3
                                                int32_t rdx_7 = *(&var_68 + (rcx_25 << 2))
                                                int128_t var_58
                                                int32_t rcx_27 = i_3 + *(&var_58 + (rcx_25 << 2))
                                                int32_t rdx_8 = rdx_7 + j_2
                                                uint64_t rcx_32
                                                int32_t r8_6
                                                
                                                if (rdx_7 + j_2 s>= 0 && rcx_27 s>= 0
                                                        && rdx_8 s< j_9.d && rcx_27 s< i_5.d)
                                                    int32_t rdx_9 = *(*(r15 + 0x40)
                                                        + (sx.q(rcx_27 * j_9.d + rdx_8) << 2))
                                                    rcx_32 = zx.q(rdx_9) & 0xffffff
                                                    r8_6 = (rdx_9 u>> 0x18) + rcx_32.d
                                                
                                                char rax_30
                                                
                                                if (rdx_7 + j_2 s< 0 || rcx_27 s< 0
                                                    || rdx_8 s>= j_9.d || rcx_27 s>= i_5.d
                                                    || rcx_32.d u>= r8_6)
                                                label_14262eed9:
                                                    rax_30 = var_d8_1.b
                                                else
                                                    int64_t r12_2 = *(r15 + 0x48)
                                                    uint32_t r15_2 = zx.d(*(r9_4 + r11_2))
                                                    int32_t r9_5 = 0
                                                    uint32_t r13_2 =
                                                        zx.d(*(r9_4 + r11_2 + 8)) + r15_2
                                                    uint64_t r11_3 = zx.q(rcx_32.d)
                                                    uint64_t rbx_3 = rcx_32 * 0xc
                                                    
                                                    while (true)
                                                        uint32_t r10_4 = zx.d(*(rbx_3 + r12_2))
                                                        int16_t rcx_33 = r10_4.w
                                                        uint32_t r8_8 =
                                                            zx.d(*(rbx_3 + r12_2 + 8)) + r10_4
                                                        
                                                        if (r15_2.w u> r10_4.w)
                                                            rcx_33 = r15_2.w
                                                        
                                                        if (r13_2 u< r8_8)
                                                            r8_8 = r13_2
                                                        
                                                        if (r8_8 - zx.d(rcx_33) s>= arg2)
                                                            int32_t temp8_1
                                                            int32_t temp9_1
                                                            temp8_1:temp9_1 = sx.q(r10_4 - r15_2)
                                                            
                                                            if ((temp9_1 ^ temp8_1) - temp8_1
                                                                    s<= arg3)
                                                                if (r9_5 u<= 0xfe)
                                                                    rax_30 = var_d8_1.b
                                                                    r11_2 = var_a8_2
                                                                    r15 = var_b0
                                                                    j_9 = zx.q(j_8)
                                                                    i_5 = zx.q(i_6)
                                                                    j_2 = j_3
                                                                    r9_4 = var_c0_1
                                                                    r10_3 = zx.d(r9_5.b) << rax_30
                                                                        | (r10_3 & var_98_1.d)
                                                                    break
                                                                
                                                                int32_t rax_29 = r9_5
                                                                
                                                                if (rsi_2 s> r9_5)
                                                                    rax_29 = rsi_2
                                                                
                                                                rsi_2 = rax_29
                                                        
                                                        r9_5 += 1
                                                        r11_3 += 1
                                                        rbx_3 += 0xc
                                                        
                                                        if (r11_3 s>= zx.q(r8_6))
                                                            r9_4 = var_c0_1
                                                            r11_2 = var_a8_2
                                                            r15 = var_b0
                                                            j_9 = zx.q(j_8)
                                                            i_5 = zx.q(i_6)
                                                            r10_3 = *(r9_4 + r11_2 + 4)
                                                            j_2 = j_3
                                                            goto label_14262eed9
                                                
                                                int32_t rax_31 = 0xff << (rax_30 + 8)
                                                int32_t rcx_36 = not.d(rax_31)
                                                var_98_1.d = rcx_36
                                                r10_1 = (r10_3 & rcx_36) | rax_31
                                                *(r9_4 + r11_2 + 4) = r10_1
                                                uint64_t rcx_39 = zx.q(var_b8_1 + 1) & 3
                                                int32_t rdx_13 = *(&var_68 + (rcx_39 << 2))
                                                int32_t rcx_41 = i_3 + *(&var_58 + (rcx_39 << 2))
                                                int32_t rdx_14 = rdx_13 + j_2
                                                
                                                if (rdx_13 + j_2 s>= 0 && rcx_41 s>= 0
                                                        && rdx_14 s< j_9.d && rcx_41 s< i_5.d)
                                                    int32_t rdx_15 = *(*(r15 + 0x40)
                                                        + (sx.q(rcx_41 * j_9.d + rdx_14) << 2))
                                                    uint64_t rcx_46 = zx.q(rdx_15) & 0xffffff
                                                    int32_t r8_10 = (rdx_15 u>> 0x18) + rcx_46.d
                                                    
                                                    if (rcx_46.d u< r8_10)
                                                        int64_t r12_3 = *(r15 + 0x48)
                                                        uint32_t r15_3 = zx.d(*(r9_4 + r11_2))
                                                        int32_t r9_6 = 0
                                                        uint32_t r13_4 =
                                                            zx.d(*(r9_4 + r11_2 + 8)) + r15_3
                                                        uint64_t rbx_4 = zx.q(rcx_46.d)
                                                        uint64_t rdi_6 = rcx_46 * 0xc
                                                        
                                                        while (true)
                                                            uint32_t r11_4 = zx.d(*(r12_3 + rdi_6))
                                                            int16_t rcx_47 = r11_4.w
                                                            uint32_t r8_12 =
                                                                zx.d(*(r12_3 + rdi_6 + 8)) + r11_4
                                                            
                                                            if (r15_3.w u> r11_4.w)
                                                                rcx_47 = r15_3.w
                                                            
                                                            if (r13_4 u< r8_12)
                                                                r8_12 = r13_4
                                                            
                                                            if (r8_12 - zx.d(rcx_47) s>= arg2)
                                                                int32_t temp10_1
                                                                int32_t temp11_1
                                                                temp10_1:temp11_1 = sx.q(r11_4 - r15_3)
                                                                
                                                                if ((temp11_1 ^ temp10_1) - temp10_1
                                                                        s<= arg3)
                                                                    if (r9_6 u<= 0xfe)
                                                                        r11_2 = var_a8_2
                                                                        r9_4 = var_c0_1
                                                                        r10_1 = zx.d(r9_6.b) << (var_d8_1.b + 8)
                                                                            | (r10_1 & var_98_1.d)
                                                                        *(r9_4 + r11_2 + 4) = r10_1
                                                                        break
                                                                    
                                                                    int32_t rax_38 = r9_6
                                                                    
                                                                    if (rsi_2 s> r9_6)
                                                                        rax_38 = rsi_2
                                                                    
                                                                    rsi_2 = rax_38
                                                            
                                                            r9_6 += 1
                                                            rbx_4 += 1
                                                            rdi_6 += 0xc
                                                            
                                                            if (rbx_4 s>= zx.q(r8_10))
                                                                r9_4 = var_c0_1
                                                                r11_2 = var_a8_2
                                                                break
                                                        
                                                        j_2 = j_3
                                                
                                                rdx_6 = var_b8_1 + 2
                                                r15 = var_b0
                                                rax_21 = var_d8_1 + 0x10
                                                j_9 = zx.q(j_8)
                                                i_5 = zx.q(i_6)
                                                var_b8_1 = rdx_6
                                                var_d8_1 = rax_21
                                            while (rax_21 s< 0x20)
                                            
                                            r9_4 += 0xc
                                            k_2 = k_3
                                            k_3 -= 1
                                            var_c0_1 = r9_4
                                        while (k_2 != 1)
                                    
                                    j_2 += 1
                                    result_4 = result_2 + 4
                                    j_3 = j_2
                                    result_2 = result_4
                                while (j_2 s< j_9.d)
                                
                                i_2 = i_3
                                result = result_3
                                rcx_16 = var_70_1
                            
                            i_2 += 1
                            result += rcx_16
                            i_3 = i_2
                            result_3 = result
                        while (i_2 s< i_5.d)
                        
                        rbx_5 = arg1
                        
                        if (rsi_2 s> 0xfe)
                            int32_t var_e8_1 = 0xfe
                            sub_14262d160(rbx_5, 3, 
                                "rcBuildCompactHeightfield: Heightfield has too many layers %d (max: %d)", 
                                zx.q(rsi_2))
                    
                    if (*(rbx_5 + 9) != 0)
                        (*(*rbx_5 + 0x28))(rbx_5, 3)
                    
                    result.b = 1

__security_check_cookie(rax_1 ^ &var_108)
return result
