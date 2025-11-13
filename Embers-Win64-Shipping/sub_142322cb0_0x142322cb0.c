// 函数: sub_142322cb0
// 地址: 0x142322cb0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int32_t r8 = arg2
int32_t temp0
int32_t temp1
temp0:temp1 = sx.q(arg2 - 2)
int128_t* r13 = arg1
uint64_t result = zx.q((temp1 - temp0) s>> 1)
int32_t result_1 = result.d
int128_t* var_68
int128_t zmm2
int128_t zmm3

if (result.d s>= 0)
    int32_t rcx = ((result << 1) + 1).d
    int32_t var_70_1 = rcx
    
    while (true)
        int32_t var_58_1 = result.d
        int32_t r15_1 = result.d
        
        if (rcx s< r8)
            while (true)
                int32_t r14_1 = r15_1 * 2
                uint64_t r11_1 = zx.q(r14_1 + 1)
                
                if ((r11_1 + 1).d s< r8)
                    void* r8_4 = &r13[(sx.q(r14_1) + 2) * 2]
                    void* r9_3 = &r13[sx.q(r11_1.d) * 2]
                    int32_t i_12 = *(r8_4 + 0x18)
                    int32_t temp3_1 = *(r9_3 + 0x18)
                    
                    if (i_12 == temp3_1)
                        void* rcx_1 = *(r8_4 + 0x10)
                        int32_t temp6_1
                        int32_t temp7_1
                        temp6_1:temp7_1 = sx.q(i_12 + 0x1f)
                        i_12 = (temp7_1 + (temp6_1 & 0x1f)) s>> 5
                        int32_t i_11 = i_12
                        var_68.d = i_11
                        
                        if (rcx_1 != 0)
                            r8_4 = rcx_1
                        
                        void* rcx_2 = *(r9_3 + 0x10)
                        
                        if (rcx_2 != 0)
                            r9_3 = rcx_2
                        
                        int32_t r10_1 = 0
                        int32_t rbx_1 = 0
                        
                        if (i_12 != 0)
                            uint64_t i_4 = zx.q(i_11)
                            void* rbp_1 = r9_3
                            uint64_t i
                            
                            do
                                uint64_t rdx_3 = zx.q(*(r8_4 - r9_3 + rbp_1))
                                rbp_1 += 4
                                int64_t rdx_4 = rdx_3 - (zx.q(rdx_3.d) u>> 1 & 0x5555555555555555)
                                int64_t rcx_6 = (rdx_4 u>> 2 & 0x3333333333333333)
                                    + (rdx_4 & 0x3333333333333333)
                                uint64_t rdx_6 = zx.q(*(rbp_1 - 4))
                                r10_1 += (((((rcx_6 u>> 4) + rcx_6) & 0xf0f0f0f0f0f0f0f)
                                    * 0x101010101010101) u>> 0x38).d
                                int64_t rdx_7 = rdx_6 - (zx.q(rdx_6.d) u>> 1 & 0x5555555555555555)
                                int64_t rcx_10 = (rdx_7 u>> 2 & 0x3333333333333333)
                                    + (rdx_7 & 0x3333333333333333)
                                rbx_1 += (((((rcx_10 u>> 4) + rcx_10) & 0xf0f0f0f0f0f0f0f)
                                    * 0x101010101010101) u>> 0x38).d
                                i = i_4
                                i_4 -= 1
                            while (i != 1)
                            r15_1 = var_58_1
                            i_11 = var_68.d
                            r13 = arg1
                            r14_1 = r15_1 * 2
                        
                        if (i_12 == 0 || r10_1 == rbx_1)
                            uint64_t rcx_11 = zx.q(i_11 - 1)
                            
                            if (rcx_11.d == 0xffffffff)
                            label_142322e63:
                                i_12.b = 0
                            else
                                while (true)
                                    int32_t rdx_9 = *(r8_4 + (rcx_11 << 2))
                                    int32_t temp17_1 = *(r9_3 + (rcx_11 << 2))
                                    
                                    if (rdx_9 != temp17_1)
                                        i_12.b = rdx_9 u> temp17_1
                                        break
                                    
                                    rcx_11 = zx.q(rcx_11.d - 1)
                                    
                                    if (rcx_11.d == 0xffffffff)
                                        goto label_142322e63
                        else
                            i_12.b = r10_1 s> rbx_1
                    else
                        i_12.b = i_12 s> temp3_1
                    
                    if (i_12.b != 0)
                        r11_1 = zx.q(r14_1)
                    
                    r11_1 = zx.q(r11_1.d + 1)
                
                int128_t* rbx_4 = &r13[sx.q(r15_1) * 2]
                int128_t* r10_4 = &r13[sx.q(r11_1.d) * 2]
                var_58_1.q = rbx_4
                uint32_t rax_24 = *(rbx_4 + 0x18)
                int32_t temp2_1 = *(r10_4 + 0x18)
                
                if (rax_24 == temp2_1)
                    int128_t* rcx_12 = rbx_4[1].q
                    int32_t temp4_1
                    int32_t temp5_1
                    temp4_1:temp5_1 = sx.q(rax_24 + 0x1f)
                    int128_t* rdi_3 = rbx_4
                    int128_t* r9_4 = r10_4
                    int32_t i_8 = (temp5_1 + (temp4_1 & 0x1f)) s>> 5
                    
                    if (rcx_12 != 0)
                        rdi_3 = rcx_12
                    
                    int128_t* rcx_13 = r10_4[1].q
                    
                    if (rcx_13 != 0)
                        r9_4 = rcx_13
                    
                    int32_t r8_5 = 0
                    int32_t rsi_1 = 0
                    
                    if (i_8 != 0)
                        void* r15_2 = r9_4
                        uint64_t i_5 = zx.q(i_8)
                        uint64_t i_1
                        
                        do
                            uint64_t rdx_12 = zx.q(*(r15_2 + rdi_3 - r9_4))
                            r15_2 += 4
                            int64_t rdx_13 = rdx_12 - (zx.q(rdx_12.d) u>> 1 & 0x5555555555555555)
                            int64_t rcx_17 =
                                (rdx_13 u>> 2 & 0x3333333333333333) + (rdx_13 & 0x3333333333333333)
                            uint64_t rdx_15 = zx.q(*(r15_2 - 4))
                            r8_5 += (((((rcx_17 u>> 4) + rcx_17) & 0xf0f0f0f0f0f0f0f)
                                * 0x101010101010101) u>> 0x38).d
                            int64_t rdx_16 = rdx_15 - (zx.q(rdx_15.d) u>> 1 & 0x5555555555555555)
                            int64_t rcx_21 =
                                (rdx_16 u>> 2 & 0x3333333333333333) + (rdx_16 & 0x3333333333333333)
                            rsi_1 += (((((rcx_21 u>> 4) + rcx_21) & 0xf0f0f0f0f0f0f0f)
                                * 0x101010101010101) u>> 0x38).d
                            i_1 = i_5
                            i_5 -= 1
                        while (i_1 != 1)
                        rbx_4 = var_58_1.q
                        r13 = arg1
                    
                    if (i_8 != 0 && r8_5 != rsi_1)
                        rax_24.b = r8_5 s> rsi_1
                        goto label_142323091
                    
                    uint64_t rcx_22 = zx.q(i_8 - 1)
                    
                    if (rcx_22.d != 0xffffffff)
                        while (true)
                            int32_t rdx_18 = *(rdi_3 + (rcx_22 << 2))
                            int32_t temp14_1 = *(r9_4 + (rcx_22 << 2))
                            
                            if (rdx_18 != temp14_1)
                                rax_24.b = rdx_18 u> temp14_1
                                break
                            
                            rcx_22 = zx.q(rcx_22.d - 1)
                            
                            if (rcx_22.d == 0xffffffff)
                                goto label_142322fd7
                        
                        goto label_142323091
                else
                    rax_24.b = rax_24 s> temp2_1
                label_142323091:
                    
                    if (rax_24.b != 0)
                        if (rbx_4 != r10_4)
                            zmm2 = *rbx_4
                            zmm3 = rbx_4[1]
                            *rbx_4 = *r10_4
                            rbx_4[1] = r10_4[1]
                            *r10_4 = zmm2
                            r10_4[1] = zmm3
                        
                        r8 = arg2
                        var_58_1 = r11_1.d
                        r15_1 = r11_1.d
                        
                        if (((r11_1 << 1) + 1).d s>= r8)
                            break
                        
                        continue
                
            label_142322fd7:
                r8 = arg2
                break
            
            result = zx.q(result_1)
            rcx = var_70_1
        
        result = zx.q(result.d - 1)
        rcx -= 2
        result_1 = result.d
        var_70_1 = rcx
        
        if (result.d s< 0)
            break

int32_t rcx_23 = r8 - 1
int32_t var_78_1 = rcx_23

if (rcx_23 s> 0)
    result = &r13[sx.q(rcx_23) * 2]
    result_1.q = result
    
    while (true)
        if (r13 != result)
            zmm2 = *r13
            zmm3 = r13[1]
            *r13 = *result
            r13[1] = *(result + 0x10)
            *result = zmm2
            *(result + 0x10) = zmm3
        
        int32_t r12_1 = 0
        int32_t var_70_2 = 0
        
        if (rcx_23 s> 1)
            while (true)
                int32_t r14_3 = r12_1 * 2
                uint64_t r10_5 = zx.q(r14_3 + 1)
                
                if ((r10_5 + 1).d s< rcx_23)
                    void* r8_9 = &r13[(sx.q(r14_3) + 2) * 2]
                    void* r9_7 = &r13[sx.q(r10_5.d) * 2]
                    uint64_t rax_48 = zx.q(*(r8_9 + 0x18))
                    int32_t temp9_1 = *(r9_7 + 0x18)
                    
                    if (rax_48.d == temp9_1)
                        void* rcx_24 = *(r8_9 + 0x10)
                        int32_t temp12_1
                        int32_t temp13_1
                        temp12_1:temp13_1 = sx.q(rax_48.d + 0x1f)
                        int32_t i_13 = (temp13_1 + (temp12_1 & 0x1f)) s>> 5
                        int32_t i_10 = i_13
                        var_68.d = i_10
                        
                        if (rcx_24 != 0)
                            r8_9 = rcx_24
                        
                        void* rcx_25 = *(r9_7 + 0x10)
                        
                        if (rcx_25 != 0)
                            r9_7 = rcx_25
                        
                        int32_t r11_2 = 0
                        int32_t rbx_5 = 0
                        
                        if (i_13 != 0)
                            uint64_t i_7 = zx.q(i_10)
                            void* rsi_2 = r9_7
                            uint64_t i_2
                            
                            do
                                uint64_t rdx_21 = zx.q(*(r8_9 - r9_7 + rsi_2))
                                rsi_2 += 4
                                int64_t rdx_22 =
                                    rdx_21 - (zx.q(rdx_21.d) u>> 1 & 0x5555555555555555)
                                int64_t rcx_29 = (rdx_22 u>> 2 & 0x3333333333333333)
                                    + (rdx_22 & 0x3333333333333333)
                                uint64_t rdx_24 = zx.q(*(rsi_2 - 4))
                                r11_2 += (((((rcx_29 u>> 4) + rcx_29) & 0xf0f0f0f0f0f0f0f)
                                    * 0x101010101010101) u>> 0x38).d
                                int64_t rdx_25 =
                                    rdx_24 - (zx.q(rdx_24.d) u>> 1 & 0x5555555555555555)
                                int64_t rcx_33 = (rdx_25 u>> 2 & 0x3333333333333333)
                                    + (rdx_25 & 0x3333333333333333)
                                rbx_5 += (((((rcx_33 u>> 4) + rcx_33) & 0xf0f0f0f0f0f0f0f)
                                    * 0x101010101010101) u>> 0x38).d
                                i_2 = i_7
                                i_7 -= 1
                            while (i_2 != 1)
                            r12_1 = var_70_2
                            i_10 = var_68.d
                            r13 = arg1
                            r14_3 = r12_1 * 2
                        
                        if (i_13 == 0 || r11_2 == rbx_5)
                            rax_48 = zx.q(i_10 - 1)
                            
                            if (rax_48.d == 0xffffffff)
                            label_142323201:
                                rax_48.b = 0
                            else
                                while (true)
                                    int32_t rdx_27 = *(r8_9 + (rax_48 << 2))
                                    int32_t temp21_1 = *(r9_7 + (rax_48 << 2))
                                    
                                    if (rdx_27 != temp21_1)
                                        rax_48.b = rdx_27 u> temp21_1
                                        break
                                    
                                    rax_48 = zx.q(rax_48.d - 1)
                                    
                                    if (rax_48.d == 0xffffffff)
                                        goto label_142323201
                        else
                            rax_48.b = r11_2 s> rbx_5
                    else
                        rax_48.b = rax_48.d s> temp9_1
                    
                    if (rax_48.b != 0)
                        r10_5 = zx.q(r14_3)
                    
                    r10_5 = zx.q(r10_5.d + 1)
                
                int128_t* rbx_8 = &r13[sx.q(r12_1) * 2]
                void* r11_5 = &r13[sx.q(r10_5.d) * 2]
                uint32_t rax_70 = *(rbx_8 + 0x18)
                int32_t temp8_1 = *(r11_5 + 0x18)
                
                if (rax_70 == temp8_1)
                    int128_t* rcx_34 = rbx_8[1].q
                    int32_t temp10_1
                    int32_t temp11_1
                    temp10_1:temp11_1 = sx.q(rax_70 + 0x1f)
                    int128_t* rdi_6 = rbx_8
                    void* r9_8 = r11_5
                    int32_t i_9 = (temp11_1 + (temp10_1 & 0x1f)) s>> 5
                    
                    if (rcx_34 != 0)
                        rdi_6 = rcx_34
                    
                    void* rcx_35 = *(r11_5 + 0x10)
                    var_70_2.q = rdi_6
                    
                    if (rcx_35 != 0)
                        r9_8 = rcx_35
                    
                    int32_t r8_10 = 0
                    int32_t rsi_3 = 0
                    
                    if (i_9 != 0)
                        void* r14_4 = r9_8
                        uint64_t i_6 = zx.q(i_9)
                        uint64_t i_3
                        
                        do
                            uint64_t rdx_30 = zx.q(*(r14_4 + rdi_6 - r9_8))
                            r14_4 += 4
                            int64_t rdx_31 = rdx_30 - (zx.q(rdx_30.d) u>> 1 & 0x5555555555555555)
                            int64_t rcx_39 =
                                (rdx_31 u>> 2 & 0x3333333333333333) + (rdx_31 & 0x3333333333333333)
                            uint64_t rdx_33 = zx.q(*(r14_4 - 4))
                            r8_10 += (((((rcx_39 u>> 4) + rcx_39) & 0xf0f0f0f0f0f0f0f)
                                * 0x101010101010101) u>> 0x38).d
                            int64_t rdx_34 = rdx_33 - (zx.q(rdx_33.d) u>> 1 & 0x5555555555555555)
                            int64_t rcx_43 =
                                (rdx_34 u>> 2 & 0x3333333333333333) + (rdx_34 & 0x3333333333333333)
                            rsi_3 += (((((rcx_43 u>> 4) + rcx_43) & 0xf0f0f0f0f0f0f0f)
                                * 0x101010101010101) u>> 0x38).d
                            i_3 = i_6
                            i_6 -= 1
                        while (i_3 != 1)
                        rdi_6 = var_70_2.q
                        r13 = arg1
                    
                    if (i_9 != 0 && r8_10 != rsi_3)
                        rax_70.b = r8_10 s> rsi_3
                        goto label_1423233ab
                    
                    uint64_t rcx_44 = zx.q(i_9 - 1)
                    
                    if (rcx_44.d != 0xffffffff)
                        while (true)
                            int32_t rdx_36 = *(rdi_6 + (rcx_44 << 2))
                            int32_t temp20_1 = *(r9_8 + (rcx_44 << 2))
                            
                            if (rdx_36 != temp20_1)
                                rax_70.b = rdx_36 u> temp20_1
                                break
                            
                            rcx_44 = zx.q(rcx_44.d - 1)
                            
                            if (rcx_44.d == 0xffffffff)
                                goto label_142323372
                        
                        goto label_1423233ab
                else
                    rax_70.b = rax_70 s> temp8_1
                label_1423233ab:
                    
                    if (rax_70.b != 0)
                        if (rbx_8 != r11_5)
                            zmm2 = *rbx_8
                            zmm3 = rbx_8[1]
                            *rbx_8 = *r11_5
                            rbx_8[1] = *(r11_5 + 0x10)
                            *r11_5 = zmm2
                            *(r11_5 + 0x10) = zmm3
                        
                        rcx_23 = var_78_1
                        var_70_2 = r10_5.d
                        r12_1 = r10_5.d
                        
                        if (((r10_5 << 1) + 1).d s>= rcx_23)
                            break
                        
                        continue
                
            label_142323372:
                rcx_23 = var_78_1
                break
            
            result = result_1.q
        
        rcx_23 -= 1
        result -= 0x20
        var_78_1 = rcx_23
        result_1.q = result
        
        if (rcx_23 s<= 0)
            break

return result
