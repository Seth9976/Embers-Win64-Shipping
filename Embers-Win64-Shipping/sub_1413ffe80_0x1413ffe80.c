// 函数: sub_1413ffe80
// 地址: 0x1413ffe80
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void var_4f8
int64_t rax_1 = __security_cookie ^ &var_4f8
int64_t* result_2
sub_1413d1420(arg1 + 0x6518, &result_2)
int64_t* result_3 = result_2
int32_t i_4
int32_t i = i_4
int32_t i_2 = i
int64_t* result_1 = result_3
char var_4b0
sub_1413b9640(result_3, i, var_4b0)
void* var_430
sub_1413d1420(arg1 + 0x64c8, &var_430)
void* r15 = var_430
int32_t i_6
int32_t i_3 = i_6
void* var_4a8 = r15
char var_4af
sub_1413b9640(r15, i_6, var_4af)
int32_t var_6c = 0x80
int64_t var_98
__builtin_memset(&var_98, 0, 0x2c)
int32_t var_68 = 0xffffffff
int32_t var_64 = 0
int64_t var_58 = 0
int32_t var_50 = 0

if (i s> 0)
    sub_1410339f0(&var_98, i)
    int32_t rax_8
    
    if (i u< 4)
        rax_8 = 1
    else
        uint32_t rax_5 = i u>> 1
        uint64_t rflags_1
        int32_t temp0_2
        temp0_2, rflags_1 = _bit_scan_reverse(rax_5 + 8)
        int32_t var_278_1 = temp0_2
        int32_t rcx_5
        
        if (rax_5 == 0xfffffff8)
            rcx_5 = 0x20
        else
            rcx_5 = 0x1f - temp0_2
        
        uint64_t rflags_2
        int32_t temp0_3
        temp0_3, rflags_2 = _bit_scan_reverse(rax_5 + 7)
        int32_t var_318_1 = temp0_3
        
        if (rax_5 == 0xfffffff9)
            rax_8 = 1
        else
            rax_8 = 1 << ((not.d(rcx_5 << 0x1a s>> 0x1f)).b & (0x20 - (0x1f - temp0_3.b)))
    
    if (var_50 == 0 || var_50 s< rax_8)
        int32_t var_50_1 = rax_8
        sub_1408370c0(&var_98)

if (data_1439b6b0c != 0 && *(arg1 + 0x65b8) == 0)
    void*** rax_9 = j_sub_140a82f30(0x78)
    void*** rdx_6 = rax_9
    
    if (rax_9 == 0)
        rdx_6 = nullptr
    else
        int64_t* rcx_12 = &rdx_6[3]
        *rdx_6 = &data_142f788c8
        rdx_6[1] = 0
        rdx_6[2] = 0
        rcx_12[2] = 0
        rcx_12[3].d = 0
        *(rcx_12 + 0x1c) = 0x80
        int64_t* rax_10 = rcx_12[2]
        
        if (rax_10 != 0)
            rcx_12 = rax_10
        
        *rcx_12 = 0
        rcx_12[1] = 0
        rdx_6[7].d = 0xffffffff
        *(rdx_6 + 0x3c) = 0
        rdx_6[9] = 0
        rdx_6[0xa].d = 0
        rdx_6[0xb] = 0
        rdx_6[0xc].d = 0
        rdx_6[0xd] = 0
        rdx_6[0xe] = 0
    
    *(arg1 + 0x65b8) = rdx_6

void* rdi = *(arg1 + 0x65b8)

if (rdi != 0)
    bool z_1
    
    if (0 == *(rdi + 0x60))
        *(rdi + 0x60) = 0
        z_1 = true
    else
        *(rdi + 0x60)
        z_1 = false
    
    if (z_1)
    label_141400140:
        
        if (*(rdi + 0x70) != 0)
            int64_t* rcx_17 = *(rdi + 0x68)
            (*(*rcx_17 + 0x20))(rcx_17, 0xffffffff, 0)
            *(rdi + 0x70) = 0
    else
        rdi = *(arg1 + 0x65b8)
        int64_t* rcx_13 = *(rdi + 0x70)
        
        if (rcx_13 == 0)
            bool z_2
            
            if (0 == *(rdi + 0x60))
                *(rdi + 0x60) = 0
                z_2 = true
            else
                *(rdi + 0x60)
                z_2 = false
            
            if (not(z_2))
                sub_1413df470(rdi + 8)
                *(rdi + 0x60) -= 1
            
            goto label_141400140
        
        if ((*(*rcx_13 + 0x18))(rcx_13, rdi) == 0)
            goto label_141400140
        
        sub_1413df470(rdi + 8)
        *(rdi + 0x60) -= 1
        int64_t* rcx_15 = *(rdi + 0x68)
        
        if (rcx_15 != 0)
            (*(*rcx_15 + 0x10))(rcx_15)
        
        *(rdi + 0x70) = 0
    
    result_3 = result_2
    i = i_4
    *(*(arg1 + 0x65b8) + 0x58) = arg1
    var_4a8 = var_430
    i_2 = i
    result_1 = result_3
    i_3 = i_6

int64_t rsi = 0
void* rcx_19 = &result_3[sx.q(i)]
uint64_t rdi_4 = (rcx_19 - result_3 + 7) u>> 3

if (result_3 u> rcx_19)
    rdi_4 = 0

int64_t* result_4 = result_3

if (rdi_4 != 0)
    do
        sub_141464610(arg1 + 0x6288, *(*result_4 + 0x10), 0)
        rsi += 1
        result_4 = &result_4[1]
    while (rsi != rdi_4)

int32_t j_22
uint128_t zmm2_1
uint128_t zmm3

while (i != 0)
    int32_t j_19 = i - 1
    int64_t j = sx.q(j_19)
    j_22 = j_19
    int64_t* rcx_21 = *(result_3[j] + 8)
    int64_t j_1 = (*(*rcx_21 + 8))(rcx_21)
    
    if (j_19 s> 0)
        int64_t* rsi_2 = (j << 3) + -fffffffffffffff8 + result_3
        
        do
            int64_t* rcx_23 = *(*rsi_2 + 8)
            int64_t rdx_10 = *rcx_23
            
            if ((*(rdx_10 + 8))(rcx_23, rdx_10) != j_1)
                break
            
            j_19 -= 1
            j -= 1
            rsi_2 -= 8
        while (j s> 0)
        
        j_22 = j_19
    
    int32_t r13 = *(arg1 + 0xee0)
    void* rdx_11 = arg1 + 0xed8
    int32_t k_3 = r13 - 1
    
    if (r13 - 1 s>= 0)
        int64_t k_5 = sx.q(k_3)
        int64_t* rax_26 = (k_5 << 4) + *rdx_11
        
        while (*rax_26 != j_1)
            k_3 -= 1
            rax_26 -= 0x10
            int64_t k_11 = k_5
            k_5 -= 1
            
            if (k_11 - 1 s< 0)
                break
    
    if (j_19 s< i)
        int64_t k_9 = sx.q(k_3)
        void* r12 = &result_1[sx.q(j_19)]
        int64_t j_15 = sx.q(i_2 - j_19)
        int64_t j_23 = j_15
        int64_t j_2
        
        do
            int32_t k = k_3
            int32_t r15_1 = *(*r12 + 0x110)
            
            if (k_3 s< *(arg1 + 0xee0))
                int64_t rdi_6 = k_9 << 4
                
                do
                    int64_t rax_31 = *rdx_11
                    *(rdi_6 + rax_31 + 8) -= 1
                    int64_t r14_1 = sx.q(*(rdi_6 + rax_31 + 8))
                    
                    if (r14_1.d != r15_1)
                        int64_t r11_1 = sx.q(r15_1)
                        *(*(*(arg1 + 0xdb8) + (r14_1 << 3)) + 0x110) = r15_1
                        *(*(*(arg1 + 0xdb8) + (r11_1 << 3)) + 0x110) = r14_1.d
                        int64_t rax_34 = *(arg1 + 0xdb8)
                        int64_t rdx_12 = *(rax_34 + (r14_1 << 3))
                        *(rax_34 + (r14_1 << 3)) = *(rax_34 + (r11_1 << 3))
                        *(*(arg1 + 0xdb8) + (r11_1 << 3)) = rdx_12
                        int64_t rdx_13 = *(arg1 + 0xdc8)
                        int64_t rax_38 = r14_1 << 6
                        int64_t rcx_29 = r11_1 << 6
                        zmm2_1 = *(rax_38 + rdx_13)
                        zmm3 = *(rax_38 + rdx_13 + 0x10)
                        int128_t zmm4_1 = *(rax_38 + rdx_13 + 0x20)
                        int128_t zmm5_1 = *(rax_38 + rdx_13 + 0x30)
                        *(rax_38 + rdx_13) = *(rcx_29 + rdx_13)
                        *(rax_38 + rdx_13 + 0x10) = *(rcx_29 + rdx_13 + 0x10)
                        *(rax_38 + rdx_13 + 0x20) = *(rcx_29 + rdx_13 + 0x20)
                        *(rax_38 + rdx_13 + 0x30) = *(rcx_29 + rdx_13 + 0x30)
                        int64_t rax_39 = *(arg1 + 0xdc8)
                        *(rcx_29 + rax_39) = zmm2_1
                        *(rcx_29 + rax_39 + 0x10) = zmm3
                        *(rcx_29 + rax_39 + 0x20) = zmm4_1
                        *(rcx_29 + rax_39 + 0x30) = zmm5_1
                        int64_t rax_40 = *(arg1 + 0xdd8)
                        int64_t rdx_14 = *(rax_40 + (r14_1 << 3))
                        *(rax_40 + (r14_1 << 3)) = *(rax_40 + (r11_1 << 3))
                        *(*(arg1 + 0xdd8) + (r11_1 << 3)) = rdx_14
                        int64_t rax_43 = r14_1 * 5
                        int64_t rdx_15 = *(arg1 + 0xde8)
                        zmm3 = *(rdx_15 + (rax_43 << 3))
                        int128_t* r8_3 = rdx_15 + (rax_43 << 3)
                        zmm4_1 = r8_3[1]
                        zmm2_1 = zx.o(r8_3[2].q)
                        int64_t rcx_31 = r11_1 * 0x28
                        *r8_3 = *(rcx_31 + rdx_15)
                        r8_3[1] = *(rcx_31 + rdx_15 + 0x10)
                        r8_3[2].q = *(rcx_31 + rdx_15 + 0x20)
                        int64_t rax_45 = *(arg1 + 0xde8)
                        *(rcx_31 + rax_45) = zmm3
                        *(rcx_31 + rax_45 + 0x10) = zmm4_1
                        *(rcx_31 + rax_45 + 0x20) = zmm2_1.q
                        char* rcx_32 = *(arg1 + 0xdf8)
                        char rax_46 = rcx_32[r14_1]
                        rcx_32[r14_1] = rcx_32[r11_1]
                        *(r11_1 + *(arg1 + 0xdf8)) = rax_46
                        int64_t rcx_35 = *(arg1 + 0xe08)
                        int64_t rax_47 = *(rcx_35 + (r14_1 << 3))
                        *(rcx_35 + (r14_1 << 3)) = *(rcx_35 + (r11_1 << 3))
                        *(*(arg1 + 0xe08) + (r11_1 << 3)) = rax_47
                        char* rax_48 = *(arg1 + 0xe18)
                        char rdx_18 = rax_48[r14_1]
                        rax_48[r14_1] = rax_48[r11_1]
                        *(r11_1 + *(arg1 + 0xe18)) = rdx_18
                        int64_t rcx_39 = *(arg1 + 0xe38)
                        int32_t rax_51 = *(rcx_39 + (r14_1 << 2))
                        *(rcx_39 + (r14_1 << 2)) = *(rcx_39 + (r11_1 << 2))
                        *(*(arg1 + 0xe38) + (r11_1 << 2)) = rax_51
                        char* rcx_42 = *(arg1 + 0xe48)
                        char rax_52 = rcx_42[r14_1]
                        rcx_42[r14_1] = rcx_42[r11_1]
                        *(r11_1 + *(arg1 + 0xe48)) = rax_52
                        int64_t rcx_45 = *(arg1 + 0xe58)
                        int16_t rax_53 = *(rcx_45 + (r14_1 << 1))
                        *(rcx_45 + (r14_1 << 1)) = *(rcx_45 + (r11_1 << 1))
                        *(*(arg1 + 0xe58) + (r11_1 << 1)) = rax_53
                        int64_t r8_4 = *(arg1 + 0xe28)
                        uint128_t* rcx_48 = r11_1 * 0x1c
                        uint128_t* r9_4 = r14_1 * 0x1c + r8_4
                        int32_t r10_1 = *(r9_4 + 0x18)
                        zmm3 = *r9_4
                        zmm2_1 = zx.o(r9_4[1].q)
                        *r9_4 = *(rcx_48 + r8_4)
                        r9_4[1].q = *(rcx_48 + r8_4 + 0x10)
                        *(r9_4 + 0x18) = *(rcx_48 + r8_4 + 0x18)
                        uint128_t* rax_55 = *(arg1 + 0xe28)
                        *(rax_55 + rcx_48) = zmm3
                        *(rax_55 + rcx_48 + 0x10) = zmm2_1.q
                        *(rax_55 + rcx_48 + 0x18) = r10_1
                        sub_1413ffa70(arg1 + 0xe68, r14_1.d, r15_1)
                        sub_141184690(arg1, r15_1)
                        sub_141184690(arg1, r14_1.d)
                        rdx_11 = arg1 + 0xed8
                        r15_1 = r14_1.d
                    
                    k += 1
                    rdi_6 += 0x10
                while (k s< *(arg1 + 0xee0))
                
                j_15 = j_23
                k_9 = sx.q(k_3)
            
            r12 += 8
            j_2 = j_15
            j_15 -= 1
            j_23 = j_15
        while (j_2 != 1)
        j_19 = j_22
        i = i_2
    
    int64_t k_6 = sx.q(k_3)
    int32_t r8_6
    int64_t r9_5
    
    if (k_3 s<= 0)
        r9_5 = *(arg1 + 0xed8)
        r8_6 = 0
    else
        r9_5 = *rdx_11
        r8_6 = *(r9_5 + k_6 * 0x10 - 8)
    
    void* rcx_53 = (k_6 << 4) + r9_5
    
    if (*(rcx_53 + 8) == r8_6)
        int32_t r8_7 = *(rdx_11 + 8)
        int32_t rax_59 = r8_7 - k_3
        
        if (rax_59 != 1)
            memmove(rcx_53, (sx.q(k_3 + 1) << 4) + r9_5, (rax_59 - 1) << 4)
            rdx_11 = arg1 + 0xed8
            r8_7 = *(rdx_11 + 8)
        
        *(rdx_11 + 8) = r8_7 - 1
        sub_1405a5010(rdx_11)
    
    if (j_19 s< i)
        void* rcx_55 = arg1 + 0xdb8
        void* rdi_7 = arg1 + 0xdc8
        int64_t j_25 = sx.q(i_2 - j_19)
        void* r14_2 = arg1 + 0xdd8
        void* r13_1 = arg1 + 0xde8
        int64_t j_12 = j_25
        void* r12_1 = arg1 + 0xdf8
        int64_t j_3
        
        do
            *(rcx_55 + 8) -= 1
            sub_1405c53d0(rcx_55)
            *(rdi_7 + 8) -= 1
            sub_1407c3fe0(rdi_7)
            *(r14_2 + 8) -= 1
            sub_1405c53d0(r14_2)
            *(r13_1 + 8) -= 1
            sub_1409da680(r13_1)
            *(r12_1 + 8) -= 1
            sub_1405dac10(r12_1)
            *(arg1 + 0xe10) -= 1
            sub_1405c53d0(arg1 + 0xe08)
            *(arg1 + 0xe20) -= 1
            sub_1405dac10(arg1 + 0xe18)
            *(arg1 + 0xe40) -= 1
            sub_1405dac90(arg1 + 0xe38)
            *(arg1 + 0xe50) -= 1
            sub_1405dac10(arg1 + 0xe48)
            *(arg1 + 0xe60) -= 1
            sub_1405a50a0(arg1 + 0xe58)
            *(arg1 + 0xe30) -= 1
            sub_1405c5460(arg1 + 0xe28)
            int32_t r12_2 = *(arg1 + 0xe80)
            int32_t rcx_66 = r12_2
            int32_t r11_2 = r12_2 - 1
            
            if (r12_2 != r12_2)
                int32_t r8_10 = 1
                int32_t r15_2 = 0
                int32_t r14_3 = 0
                int32_t r9_6 = 0
                int32_t rdx_28 = 0
                rcx_66 = r12_2
                int32_t r10_2 = 1
                
                if (r12_2 s> 0)
                    do
                        int32_t r13_2 = r9_6
                        
                        if (rdx_28 s< r11_2 || rdx_28 s>= r12_2)
                            if (r14_3 != rdx_28)
                                void* rax_66 = *(arg1 + 0xe78)
                                void* rcx_67 = arg1 + 0xe68
                                
                                if (rax_66 != 0)
                                    rcx_67 = rax_66
                                
                                int64_t rax_67 = sx.q(r15_2)
                                int32_t rdi_8 = *(rcx_67 + (rax_67 << 2))
                                int32_t rax_70
                                
                                if ((*(rcx_67 + (sx.q(r9_6) << 2)) & r10_2) == 0)
                                    rax_70 = not.d(r8_10) & rdi_8
                                else
                                    rax_70 = r8_10 | rdi_8
                                
                                *(rcx_67 + (rax_67 << 2)) = rax_70
                                r11_2 = r12_2 - 1
                            
                            r14_3 += 1
                            int32_t temp10_1 = r8_10
                            int32_t temp11_1 = r8_10
                            r8_10 *= 2
                            
                            if (temp10_1 == neg.d(temp11_1))
                                r8_10 = 1
                                r15_2 += 1
                        
                        rcx_66 = *(arg1 + 0xe80)
                        int32_t rax_72 = r10_2 * 2
                        rdx_28 += 1
                        r10_2 = 1
                        
                        if (rax_72 != 0)
                            r10_2 = rax_72
                        
                        r9_6 += 1
                        
                        if (rax_72 != 0)
                            r9_6 = r13_2
                    while (rdx_28 s< rcx_66)
                    
                    rdi_7 = arg1 + 0xdc8
                    r13_1 = arg1 + 0xde8
                
                r14_2 = arg1 + 0xdd8
            
            j_3 = j_12
            j_12 -= 1
            *(arg1 + 0xe80) = rcx_66 - 1
            rcx_55 = arg1 + 0xdb8
            r12_1 = arg1 + 0xdf8
        while (j_3 != 1)
        int64_t j_20 = j_25
        void* rsi_4 = &result_1[sx.q(j_22)]
        int64_t j_4
        
        do
            void* rdi_9 = *rsi_4
            void* var_300 = rdi_9
            int32_t r14_4 = *(rdi_9 + 0x110)
            *(rdi_9 + 0x110) = 0xffffffff
            
            if (*(*(rdi_9 + 8) + 0x32) - 1 u<= 1)
                int64_t rcx_69 = sx.q(*(rdi_9 + 0x10))
                int32_t* rdx_32
                
                if (*(arg1 + 0x61e8) == *(arg1 + 0x6214))
                label_141400893:
                    rdx_32 = nullptr
                else
                    void* r9_7 = arg1 + 0x6218
                    void* rdx_29 = *(r9_7 + 8)
                    
                    if (rdx_29 != 0)
                        r9_7 = rdx_29
                    
                    int32_t rax_76 = *(r9_7 + (((sx.q(*(arg1 + 0x6228)) - 1) & rcx_69) << 2))
                    
                    if (rax_76 == 0xffffffff)
                    label_141400893_1:
                        rdx_32 = nullptr
                    else
                        while (true)
                            rdx_32 = sx.q(rax_76) * 0xd0 + *(arg1 + 0x61e0)
                            
                            if (*rdx_32 == rcx_69.d)
                                break
                            
                            rax_76 = rdx_32[0x30]
                            
                            if (rax_76 == 0xffffffff)
                                goto label_141400893_2
                        
                        if (rax_76 == 0xffffffff)
                        label_141400893_2:
                            rdx_32 = nullptr
                
                void* rax_77 = &rdx_32[4]
                
                if (rdx_32 == 0)
                    rax_77 = nullptr
                
                if (rax_77 != 0)
                    *rax_77 = 0
            
            sub_1413ad930(rdi_9)
            sub_1413adb50(rdi_9)
            void* rdx_33
            void* r8_14
            rdx_33, r8_14 = sub_14139bc60(rdi_9)
            rdx_33.b = 1
            sub_1413a4370(rdi_9, rdx_33, r8_14)
            sub_141184690(arg1, r14_4)
            sub_1413f1c20(arg1 + 0x18b0, rdi_9)
            void var_314
            sub_141113900(&var_98, &var_314, &var_300, nullptr)
            rsi_4 += 8
            j_4 = j_20
            j_20 -= 1
        while (j_4 != 1)
        j_19 = j_22
        i = i_2
    
    result_3 = result_1
    int32_t rax_79 = i - j_19
    
    if (i != j_19)
        int32_t i_5 = i - rax_79
        
        if (i_5 != j_19)
            memmove(&result_3[sx.q(j_19)], &result_3[sx.q(rax_79 + j_19)], (i_5 - j_19) << 3)
        
        sub_1405c53d0(&result_2)
        result_3 = result_2
        i = i_5
        result_1 = result_3
        i_2 = i

sub_140b33630("AddPrimitiveSceneInfos")
int32_t i_1 = i_3
char var_4d0

if (i_1 != 0)
    uint64_t* r12_3 = arg1 + 0xdb8
    int32_t rdx_40 = *(arg1 + 0xdc0) + i_1
    
    if (rdx_40 s> *(r12_3 + 0xc))
        sub_1405c5570(r12_3, rdx_40)
    
    int64_t* r13_3 = arg1 + 0xdc8
    int32_t rdx_42 = *(arg1 + 0xdd0) + i_1
    
    if (rdx_42 s> *(r13_3 + 0xc))
        sub_1405a52a0(r13_3, rdx_42)
    
    int32_t rdx_44 = *(arg1 + 0xde0) + i_1
    
    if (rdx_44 s> *(arg1 + 0xde4))
        sub_1405c5570(arg1 + 0xdd8, rdx_44)
    
    int32_t rdx_46 = *(arg1 + 0xdf0) + i_1
    
    if (rdx_46 s> *(arg1 + 0xdf4))
        sub_1405c5660(arg1 + 0xde8, rdx_46)
    
    int32_t rdx_48 = *(arg1 + 0xe00) + i_1
    
    if (rdx_48 s> *(arg1 + 0xe04))
        sub_1405c5510(arg1 + 0xdf8, rdx_48)
    
    int32_t rdx_50 = *(arg1 + 0xe10) + i_1
    
    if (rdx_50 s> *(arg1 + 0xe14))
        sub_1405c5570(arg1 + 0xe08, rdx_50)
    
    int32_t rdx_52 = *(arg1 + 0xe20) + i_1
    
    if (rdx_52 s> *(arg1 + 0xe24))
        sub_1405c5510(arg1 + 0xe18, rdx_52)
    
    int32_t rdx_54 = *(arg1 + 0xe40) + i_1
    
    if (rdx_54 s> *(arg1 + 0xe44))
        sub_1405dadb0(arg1 + 0xe38, rdx_54)
    
    int32_t rdx_56 = *(arg1 + 0xe50) + i_1
    
    if (rdx_56 s> *(arg1 + 0xe54))
        sub_1405c5510(arg1 + 0xe48, rdx_56)
    
    int32_t rdx_58 = *(arg1 + 0xe60) + i_1
    
    if (rdx_58 s> *(arg1 + 0xe64))
        sub_1405947f0(arg1 + 0xe58, rdx_58)
    
    int32_t rdx_60 = *(arg1 + 0xe30) + i_1
    
    if (rdx_60 s> *(arg1 + 0xe34))
        sub_1413f6f70(arg1 + 0xe28, rdx_60)
    
    void* r15_4 = arg1 + 0xe68
    sub_1405a4980(r15_4, *(arg1 + 0xe80) + i_1)
    void* rax_82 = var_4a8
    
    do
        int32_t j_18 = i_1 - 1
        int64_t j_5 = sx.q(j_18)
        int32_t j_21 = j_18
        int64_t* rcx_95 = *(*(rax_82 + (j_5 << 3)) + 8)
        int64_t j_7 = (*(*rcx_95 + 8))(rcx_95)
        
        if (j_18 s> 0)
            int64_t* rsi_7 = var_4a8 - 8 + (j_5 << 3)
            
            do
                int64_t* rcx_97 = *(*rsi_7 + 8)
                int64_t rdx_63 = *rcx_97
                
                if ((*(rdx_63 + 8))(rcx_97, rdx_63) != j_7)
                    break
                
                j_18 -= 1
                j_5 -= 1
                rsi_7 -= 8
            while (j_5 s> 0)
            
            i_1 = i_3
            r15_4 = arg1 + 0xe68
            j_21 = j_18
        
        int64_t j_14
        int64_t k_10
        uint128_t zmm0_2
        
        if (j_18 s< i_1)
            int64_t* rcx_99 = var_4a8 + (sx.q(j_18) << 3)
            j_22.q = rcx_99
            int64_t j_13 = sx.q(i_1 - j_18)
            int64_t j_6
            
            do
                int64_t rdi_10 = sx.q(r12_3[1].d)
                void* rsi_8 = *rcx_99
                int32_t rax_89 = (rdi_10 + 1).d
                r12_3[1].d = rax_89
                
                if (rax_89 s> *(r12_3 + 0xc))
                    sub_1405a4d70(r12_3)
                
                *(*r12_3 + (rdi_10 << 3)) = rsi_8
                void* rax_91 = *(rsi_8 + 8)
                int64_t rdi_11 = sx.q(r13_3[1].d)
                zmm0_2 = *(rax_91 + 0x80)
                uint128_t zmm1_2 = *(rax_91 + 0x90)
                zmm2_1 = *(rax_91 + 0xa0)
                zmm3 = *(rax_91 + 0xb0)
                int32_t rax_92 = (rdi_11 + 1).d
                int64_t var_3f8
                var_3f8.o = zmm0_2
                k_10.o = zmm1_2
                j_14.o = zmm2_1
                r13_3[1].d = rax_92
                
                if (rax_92 s> *(r13_3 + 0xc))
                    sub_1405c4fe0(r13_3)
                    zmm0_2 = var_3f8.o
                    zmm1_2 = k_10.o
                    zmm2_1 = j_14.o
                
                int64_t rax_93 = *r13_3
                int64_t rcx_103 = rdi_11 << 6
                *(rcx_103 + rax_93) = zmm0_2
                *(rcx_103 + rax_93 + 0x10) = zmm1_2
                *(rcx_103 + rax_93 + 0x20) = zmm2_1
                *(rcx_103 + rax_93 + 0x30) = zmm3
                int64_t rdi_12 = sx.q(*(arg1 + 0xde0))
                int32_t rax_94 = (rdi_12 + 1).d
                *(arg1 + 0xde0) = rax_94
                
                if (rax_94 s> *(arg1 + 0xde4))
                    sub_1405a4d70(arg1 + 0xdd8)
                
                *(*(arg1 + 0xdd8) + (rdi_12 << 3)) = *(rsi_8 + 8)
                int32_t rax_96 = *(arg1 + 0xdf0) + 1
                *(arg1 + 0xdf0) = rax_96
                
                if (rax_96 s> *(arg1 + 0xdf4))
                    sub_1405c4ec0(arg1 + 0xde8)
                
                int32_t rax_97 = *(arg1 + 0xe00) + 1
                *(arg1 + 0xe00) = rax_97
                
                if (rax_97 s> *(arg1 + 0xe04))
                    sub_1405daba0(arg1 + 0xdf8)
                
                int32_t rax_98 = *(arg1 + 0xe10) + 1
                *(arg1 + 0xe10) = rax_98
                
                if (rax_98 s> *(arg1 + 0xe14))
                    sub_1405a4d70(arg1 + 0xe08)
                
                int32_t rax_99 = *(arg1 + 0xe20) + 1
                *(arg1 + 0xe20) = rax_99
                
                if (rax_99 s> *(arg1 + 0xe24))
                    sub_1405daba0(arg1 + 0xe18)
                
                int32_t rax_100 = *(arg1 + 0xe40) + 1
                *(arg1 + 0xe40) = rax_100
                
                if (rax_100 s> *(arg1 + 0xe44))
                    sub_1405a4cf0(arg1 + 0xe38)
                
                int32_t rax_101 = *(arg1 + 0xe50) + 1
                *(arg1 + 0xe50) = rax_101
                
                if (rax_101 s> *(arg1 + 0xe54))
                    sub_1405daba0(arg1 + 0xe48)
                
                int32_t rax_102 = *(arg1 + 0xe60) + 1
                *(arg1 + 0xe60) = rax_102
                
                if (rax_102 s> *(arg1 + 0xe64))
                    sub_140594770(arg1 + 0xe58)
                
                int32_t rax_103 = *(arg1 + 0xe30) + 1
                *(arg1 + 0xe30) = rax_103
                
                if (rax_103 s> *(arg1 + 0xe34))
                    sub_1405c50f0(arg1 + 0xe28)
                
                int32_t rdi_13 = *(r15_4 + 0x18)
                sub_1405a4980(r15_4, rdi_13 + 1)
                *(r15_4 + 0x18) += 1
                void* rcx_115 = r15_4
                void* rax_104 = *(r15_4 + 0x10)
                
                if (rax_104 != 0)
                    rcx_115 = rax_104
                
                int32_t rax_105 = rdi_13
                
                if (rdi_13 s< 0)
                    rax_105 = rdi_13 + 0x1f
                
                void* rdx_77 = rcx_115 + (sx.q(rax_105 s>> 5) << 2)
                *rdx_77 &= not.d(1 << (rdi_13.b & 0x1f))
                int32_t rdx_79 = *(arg1 + 0xde0) - 1
                *(rsi_8 + 0x110) = rdx_79
                sub_141184690(arg1, rdx_79)
                rcx_99 = j_22.q + 8
                j_6 = j_13
                j_13 -= 1
                j_22.q = rcx_99
            while (j_6 != 1)
            j_18 = j_21
            i_1 = i_3
        
        int64_t r9_9 = sx.q(*(arg1 + 0xee0))
        int64_t* r8_18 = arg1 + 0xed8
        int32_t k_2 = (r9_9 - 1).d
        int32_t k_4 = k_2
        
        if (k_2 s< 0)
        label_141400dfb:
            k_4 = r9_9.d
            k_2 = r9_9.d
            int64_t rax_116
            int64_t rcx_122
            
            if (r9_9.d == 0)
                int64_t rsi_9 = sx.q(*(arg1 + 0xee0))
                int32_t var_1b8_1 = 0
                int32_t rax_115 = (rsi_9 + 1).d
                *(arg1 + 0xee0) = rax_115
                
                if (rax_115 s> *(arg1 + 0xee4))
                    sub_1405a4f90(arg1 + 0xed8)
                
                rax_116 = *(arg1 + 0xed8)
                r8_18 = arg1 + 0xed8
                zmm0_2 = j_7.o
                rcx_122 = rsi_9
                i_1 = i_3
            else
                int64_t rdi_16 = sx.q(r8_18[1].d)
                int32_t rax_114 = (rdi_16 + 1).d
                r8_18[1].d = rax_114
                int32_t var_1c8_1 = _mm_bsrli_si128(*(*(arg1 + 0xed8) + r9_9 * 0x10 - 0x10), 8).d
                
                if (rax_114 s> *(r8_18 + 0xc))
                    sub_1405a4f90(r8_18)
                    r8_18 = arg1 + 0xed8
                
                rax_116 = *r8_18
                rcx_122 = rdi_16
                zmm0_2 = j_7.o
            
            *(rax_116 + rcx_122 * 0x10) = zmm0_2
        else
            int64_t k_7 = sx.q(k_2)
            int64_t* rax_112 = (k_7 << 4) + *r8_18
            
            while (*rax_112 != j_7)
                k_2 -= 1
                rax_112 -= 0x10
                int64_t k_12 = k_7
                k_7 -= 1
                k_4 = k_2
                
                if (k_12 - 1 s< 0)
                    goto label_141400dfb
        
        if (j_18 s< i_1)
            int64_t k_8 = sx.q(k_2)
            k_10 = k_8
            int64_t rax_118 = sx.q(j_18) << 3
            void* r13_5 = var_4a8 + rax_118
            void* var_490_1 = r13_5
            int64_t j_16 = sx.q(i_1 - j_18)
            j_14 = j_16
            int64_t j_24 = j_16
            int64_t j_8
            
            do
                int32_t k_1 = k_2
                int64_t r15_6 = sx.q(*(*r13_5 + 0x110))
                
                if (k_2 s< *(arg1 + 0xee0))
                    int64_t rdi_18 = k_8 << 4
                    
                    do
                        int64_t rcx_125 = *r8_18
                        int64_t r14_5 = sx.q(*(rcx_125 + rdi_18 + 8))
                        *(rcx_125 + rdi_18 + 8) = (r14_5 + 1).d
                        
                        if (r14_5.d != r15_6.d)
                            *(*(*(arg1 + 0xdb8) + (r14_5 << 3)) + 0x110) = r15_6.d
                            *(*(*(arg1 + 0xdb8) + (r15_6 << 3)) + 0x110) = r14_5.d
                            int64_t rax_125 = *(arg1 + 0xdb8)
                            int64_t rdx_83 = *(rax_125 + (r14_5 << 3))
                            *(rax_125 + (r14_5 << 3)) = *(rax_125 + (r15_6 << 3))
                            uint128_t* rcx_130 = r15_6 << 6
                            *(*(arg1 + 0xdb8) + (r15_6 << 3)) = rdx_83
                            int64_t rdx_84 = *(arg1 + 0xdc8)
                            int64_t rax_129 = r14_5 << 6
                            zmm2_1 = *(rax_129 + rdx_84)
                            zmm3 = *(rax_129 + rdx_84 + 0x10)
                            int128_t zmm4_2 = *(rax_129 + rdx_84 + 0x20)
                            int128_t zmm5_2 = *(rax_129 + rdx_84 + 0x30)
                            *(rax_129 + rdx_84) = *(rcx_130 + rdx_84)
                            *(rax_129 + rdx_84 + 0x10) = *(rcx_130 + rdx_84 + 0x10)
                            *(rax_129 + rdx_84 + 0x20) = *(rcx_130 + rdx_84 + 0x20)
                            *(rax_129 + rdx_84 + 0x30) = *(rcx_130 + rdx_84 + 0x30)
                            uint128_t* rax_130 = *(arg1 + 0xdc8)
                            *(rax_130 + rcx_130) = zmm2_1
                            *(rax_130 + rcx_130 + 0x10) = zmm3
                            *(rax_130 + rcx_130 + 0x20) = zmm4_2
                            *(rax_130 + rcx_130 + 0x30) = zmm5_2
                            int64_t rax_131 = *(arg1 + 0xdd8)
                            int64_t rdx_85 = *(rax_131 + (r14_5 << 3))
                            *(rax_131 + (r14_5 << 3)) = *(rax_131 + (r15_6 << 3))
                            *(*(arg1 + 0xdd8) + (r15_6 << 3)) = rdx_85
                            int64_t rax_134 = r14_5 * 5
                            int64_t rdx_86 = *(arg1 + 0xde8)
                            zmm3 = *(rdx_86 + (rax_134 << 3))
                            int128_t* r8_19 = rdx_86 + (rax_134 << 3)
                            zmm4_2 = r8_19[1]
                            zmm2_1 = zx.o(r8_19[2].q)
                            uint128_t* rcx_132 = r15_6 * 0x28
                            *r8_19 = *(rcx_132 + rdx_86)
                            r8_19[1] = *(rcx_132 + rdx_86 + 0x10)
                            r8_19[2].q = *(rcx_132 + rdx_86 + 0x20)
                            int64_t rax_137 = *(arg1 + 0xde8)
                            *(rcx_132 + rax_137) = zmm3
                            *(rcx_132 + rax_137 + 0x10) = zmm4_2
                            *(rcx_132 + rax_137 + 0x20) = zmm2_1.q
                            char* rcx_133 = *(arg1 + 0xdf8)
                            char rax_138 = rcx_133[r14_5]
                            rcx_133[r14_5] = rcx_133[r15_6]
                            (*(arg1 + 0xdf8))[r15_6] = rax_138
                            int64_t rcx_136 = *(arg1 + 0xe08)
                            int64_t rax_139 = *(rcx_136 + (r14_5 << 3))
                            *(rcx_136 + (r14_5 << 3)) = *(rcx_136 + (r15_6 << 3))
                            *(*(arg1 + 0xe08) + (r15_6 << 3)) = rax_139
                            char* rax_140 = *(arg1 + 0xe18)
                            char rdx_89 = rax_140[r14_5]
                            rax_140[r14_5] = rax_140[r15_6]
                            (*(arg1 + 0xe18))[r15_6] = rdx_89
                            int64_t rcx_140 = *(arg1 + 0xe38)
                            int32_t rax_143 = *(rcx_140 + (r14_5 << 2))
                            *(rcx_140 + (r14_5 << 2)) = *(rcx_140 + (r15_6 << 2))
                            *(*(arg1 + 0xe38) + (r15_6 << 2)) = rax_143
                            char* rcx_143 = *(arg1 + 0xe48)
                            char rax_144 = rcx_143[r14_5]
                            rcx_143[r14_5] = rcx_143[r15_6]
                            (*(arg1 + 0xe48))[r15_6] = rax_144
                            int64_t rcx_146 = *(arg1 + 0xe58)
                            int16_t rax_145 = *(rcx_146 + (r14_5 << 1))
                            *(rcx_146 + (r14_5 << 1)) = *(rcx_146 + (r15_6 << 1))
                            *(*(arg1 + 0xe58) + (r15_6 << 1)) = rax_145
                            int64_t r8_20 = *(arg1 + 0xe28)
                            int128_t* r9_11 = r14_5 * 0x1c + r8_20
                            uint128_t* rcx_149 = r15_6 * 0x1c
                            zmm3 = *r9_11
                            zmm2_1 = zx.o(r9_11[1].q)
                            int32_t r10_3 = *(r9_11 + 0x18)
                            *r9_11 = *(rcx_149 + r8_20)
                            r9_11[1].q = *(rcx_149 + r8_20 + 0x10)
                            *(r9_11 + 0x18) = *(rcx_149 + r8_20 + 0x18)
                            int64_t rax_147 = *(arg1 + 0xe28)
                            *(rcx_149 + rax_147) = zmm3
                            *(rcx_149 + rax_147 + 0x10) = zmm2_1.q
                            *(rcx_149 + rax_147 + 0x18) = r10_3
                            sub_1413ffa70(arg1 + 0xe68, r14_5.d, r15_6.d)
                            sub_141184690(arg1, r14_5.d)
                            r8_18 = arg1 + 0xed8
                        
                        k_1 += 1
                        rdi_18 += 0x10
                    while (k_1 s< *(arg1 + 0xee0))
                    
                    k_2 = k_4
                    r13_5 = var_490_1
                    j_16 = j_24
                    k_8 = k_10
                
                r13_5 += 8
                j_8 = j_16
                j_16 -= 1
                var_490_1 = r13_5
                j_24 = j_16
            while (j_8 != 1)
            void** rsi_11 = rax_118 + var_4a8
            int64_t j_9
            
            do
                void* rdi_19 = *rsi_11
                sub_14139fdd0(rdi_19)
                sub_14139ffa0(rdi_19)
                j_9 = j_14
                j_14 -= 1
                rsi_11 = &rsi_11[1]
            while (j_9 != 1)
            j_18 = j_21
            r13_3 = arg1 + 0xdc8
            i_1 = i_3
        
        void* rdi_21 = var_4a8
        int32_t j_26 = i_1 - j_18
        r9_9.b = 1
        int64_t r12_4 = sx.q(j_18) << 3
        void* rax_150 = r12_4 + rdi_21
        
        if (*(data_143ec9d48 + 4) != 0)
            void* var_180 = rax_150
            var_4d0 = arg3
            int32_t j_28 = j_26
            sub_14138cf00(arg2, arg1, &var_180, r9_9.b, 0, var_4d0)
            
            if (j_18 s< i_1)
                int64_t* rdi_20 = rdi_21 + r12_4
                int64_t j_17 = sx.q(j_26)
                int64_t j_10
                
                do
                    sub_141393890(*rdi_20)
                    rdi_20 = &rdi_20[1]
                    j_10 = j_17
                    j_17 -= 1
                while (j_10 != 1)
                i_1 = i_3
                rdi_21 = var_4a8
                goto label_1414012e1
        else
            void* var_1b0 = rax_150
            var_4d0 = arg3
            int32_t j_27 = j_26
            sub_14138cf00(arg2, arg1, &var_1b0, r9_9.b, 1, var_4d0)
        label_1414012e1:
            
            if (j_18 s< i_1)
                void* r14_6 = r12_4 + rdi_21
                j_14 = sx.q(j_26)
                int64_t j_11
                
                do
                    void* rsi_12 = *r14_6
                    int64_t r12_5 = sx.q(*(rsi_12 + 0x110))
                    
                    if (*(*(rsi_12 + 8) + 0x32) - 1 u<= 1 && *(arg1 + 8) s> 1)
                        int64_t rdi_22 = *r13_3
                        void* rax_155 =
                            sub_1413b8eb0(arg1 + 0x61e0, *(rsi_12 + 0x10), rsi_12 + 0x10)
                        int128_t* r9_14 = (r12_5 << 6) + rdi_22
                        bool cond:13_1 = *(rax_155 + 0xa0) != 0
                        *(rax_155 + 0x10) = *r9_14
                        *(rax_155 + 0x20) = r9_14[1]
                        *(rax_155 + 0x30) = r9_14[2]
                        *(rax_155 + 0x40) = r9_14[3]
                        *(rax_155 + 0x90) = *(arg1 + 0x61d8)
                        *(rax_155 + 0x98) = *(arg1 + 0x61d8)
                        *rax_155 = rsi_12
                        
                        if (not(cond:13_1))
                            *(rax_155 + 0x50) = *r9_14
                            *(rax_155 + 0x60) = r9_14[1]
                            *(rax_155 + 0x70) = r9_14[2]
                            *(rax_155 + 0x80) = r9_14[3]
                            *(rax_155 + 0xa0) = 1
                    
                    sub_141184690(arg1, r12_5.d)
                    *(arg1 + 0xf79) = 1
                    sub_1413cd9f0(arg1 + 0x18b0, rsi_12)
                    sub_14139bc60(rsi_12)
                    sub_141464610(arg1 + 0x6288, *(rsi_12 + 0x10), rsi_12)
                    r14_6 += 8
                    j_11 = j_14
                    j_14 -= 1
                while (j_11 != 1)
                i_1 = i_3
        
        if (j_26 == 0)
            rax_82 = var_4a8
        else
            sub_1405c53d0(&var_430)
            rax_82 = var_430
            i_1 -= j_26
            var_4a8 = rax_82
            i_3 = i_1
        
        r15_4 = arg1 + 0xe68
        r12_3 = arg1 + 0xdb8
    while (i_1 != 0)

sub_140b37f60("AddPrimitiveSceneInfos")
sub_140b33630("UpdatePrimitiveTransform")
int32_t rdx_100 = *(arg1 + 0x6430)
int32_t rcx_164 = *(arg1 + 0x645c)
int32_t rax_158 = rdx_100 - rcx_164
uint64_t var_478
__builtin_memset(&var_478, 0, 0x20)
int32_t r12_6 = 0

if (rax_158 s> 0)
    sub_1405c5570(&var_478, rax_158)
    rcx_164 = *(arg1 + 0x645c)
    rdx_100 = *(arg1 + 0x6430)

int32_t rdx_102 = rdx_100 - rcx_164
uint64_t var_468
int64_t var_460

if (rdx_102 s> 0)
    sub_1405c5570(&var_468, rdx_102)
    r12_6 = var_460.d

int64_t* rdi_23 = arg1 + 0x6428
int32_t var_378 = 0
int32_t r8_27 = rdi_23[5].d
void* rsi_14 = &rdi_23[2]
void* var_3f8_1 = rsi_14
void* var_370 = rsi_14
int64_t* var_490_2 = rdi_23
int32_t var_374 = 1
int32_t var_368 = 0xffffffff
int64_t var_364 = 0

if (r8_27 != 0)
    sub_14059bdd0(&var_378)
    r8_27 = rdi_23[5].d

zmm2_1 = var_368.o
int128_t var_450 = var_378.o
int32_t var_144 = r8_27
uint64_t rdx_105 = (0xffffffff << (r8_27.b & 0x1f)).q u>> 0x20
uint128_t var_440 = zmm2_1
uint64_t var_3e8 = rdx_105
void* var_150 = rsi_14
zmm2_1 = _mm_unpackhi_pd(zmm2_1, zmm2_1.q)
int128_t var_270 = rdi_23.o
int128_t var_260 = var_450
uint64_t var_250 = zmm2_1.q

while (true)
    int64_t rax_159 = sx.q(var_260:0xc.d)
    int64_t rcx_170 = var_270.q
    char var_4d8
    int64_t var_470_1
    
    if (rax_159.d == rdx_105.d && var_260.q == rsi_14 && rcx_170 == rdi_23)
        int32_t rdi_25 = var_470_1.d
        int64_t rdi_26
        
        if (rdi_25 s<= 0)
            rdi_26 = arg2
        else
            int32_t var_188_1 = rdi_25
            rdi_26 = arg2
            uint64_t var_190 = var_478
            sub_14138cf00(rdi_26, arg1, &var_190, 1, 1, arg3)
        
        if (r12_6 s> 0)
            uint64_t rsi_16 = var_468
            uint64_t var_1a0 = rsi_16
            int32_t var_198_1 = r12_6
            sub_14138cf00(rdi_26, arg1, &var_1a0, 0, 1, arg3)
            int64_t r14_9 = 0
            int64_t rcx_190 = rsi_16 + (sx.q(r12_6) << 3)
            uint64_t rdi_30 = (rcx_190 - rsi_16 + 7) u>> 3
            
            if (rsi_16 u> rcx_190)
                rdi_30 = 0
            
            if (rdi_30 != 0)
                do
                    sub_14139bc60(*rsi_16)
                    r14_9 += 1
                    rsi_16 += 8
                while (r14_9 != rdi_30)
        
        void* rdi_31 = *(arg1 + 0x65b8)
        
        if (rdi_31 != 0 && *(rdi_31 + 0x10) - *(rdi_31 + 0x3c) s> 0)
            int64_t rax_176 = data_143db7ac8
            *(rdi_31 + 0x60) += 1
            void*** rcx_192 = *(rdi_31 + 0x68)
            *(rdi_31 + 0x70) = rax_176
            
            if (rax_176 == 0)
                sub_140a4fc50(rcx_192)
                *(rdi_31 + 0x68) = 0
                sub_1413df470(rdi_31 + 8)
                *(rdi_31 + 0x60) -= 1
            else
                if (rcx_192 == 0)
                    rcx_192.b = 1
                    void*** rax_177 = sub_140a491d0(rcx_192.b)
                    *(rdi_31 + 0x68) = rax_177
                    rcx_192 = rax_177
                
                (*rcx_192)[3](rcx_192)
                int64_t* rcx_193 = *(rdi_31 + 0x70)
                (*(*rcx_193 + 0x10))(rcx_193, rdi_31)
            
            var_4a8 = var_430
            result_1 = result_2
        
        int32_t var_3d8 = 0
        int32_t r8_34 = *(arg1 + 0x64a0)
        void* var_3d0 = arg1 + 0x6488
        int32_t var_3d4 = 1
        int32_t var_3c8 = 0xffffffff
        int64_t var_3c4 = 0
        
        if (r8_34 != 0)
            sub_14059bdd0(&var_3d8)
            r8_34 = *(arg1 + 0x64a0)
        
        zmm2_1 = var_3c8.o
        int128_t var_450_1 = var_3d8.o
        uint128_t var_440_1 = zmm2_1
        int32_t var_c4 = r8_34
        zmm2_1 = _mm_unpackhi_pd(zmm2_1, zmm2_1.q)
        int128_t var_248 = (arg1 + 0x6478).o
        int128_t var_238 = var_450_1
        uint64_t var_228 = zmm2_1.q
        
        while (true)
            int64_t rax_181 = sx.q(var_238:0xc.d)
            int64_t rcx_199 = var_248.q
            
            if (rax_181.d == ((0xffffffff << (r8_34.b & 0x1f)).q u>> 0x20).d
                    && var_238.q == arg1 + 0x6488 && rcx_199 == arg1 + 0x6478)
                uint64_t rax_187 = var_468
                
                if (rax_187 != 0)
                    sub_140a74f90(rax_187)
                
                uint64_t rax_188 = var_478
                
                if (rax_188 != 0)
                    sub_140a74f90(rax_188)
                
                sub_140b37f60("UpdatePrimitiveTransform")
                int32_t var_394 = 1
                int32_t r8_36 = *(arg1 + 0x63b0)
                void* var_390 = arg1 + 0x6398
                int32_t var_398 = 0
                int32_t var_388 = 0xffffffff
                int64_t var_384 = 0
                
                if (r8_36 != 0)
                    sub_14059bdd0(&var_398)
                    r8_36 = *(arg1 + 0x63b0)
                
                zmm2_1 = var_388.o
                int128_t var_450_2 = var_398.o
                uint128_t var_440_2 = zmm2_1
                int32_t var_a4 = r8_36
                zmm2_1 = _mm_unpackhi_pd(zmm2_1, zmm2_1.q)
                int128_t var_220 = (arg1 + 0x6388).o
                int128_t var_210 = var_450_2
                uint64_t var_200 = zmm2_1.q
                
                while (true)
                    int64_t rax_189 = sx.q(var_210:0xc.d)
                    int64_t* rdx_122 = var_220.q
                    
                    if (rax_189.d == ((0xffffffff << (r8_36.b & 0x1f)).q u>> 0x20).d
                            && var_210.q == arg1 + 0x6398 && rdx_122 == arg1 + 0x6388)
                        int32_t var_3b4 = 1
                        int32_t var_3b8 = 0
                        int32_t r8_38 = *(arg1 + 0x6400)
                        void* var_3b0 = arg1 + 0x63e8
                        int32_t var_3a8 = 0xffffffff
                        int64_t var_3a4 = 0
                        
                        if (r8_38 != 0)
                            sub_14059bdd0(&var_3b8)
                            r8_38 = *(arg1 + 0x6400)
                        
                        zmm2_1 = var_3a8.o
                        int128_t var_450_3 = var_3b8.o
                        int32_t var_124 = r8_38
                        uint128_t var_440_3 = zmm2_1
                        zmm2_1 = _mm_unpackhi_pd(zmm2_1, zmm2_1.q)
                        int128_t var_1f8 = (arg1 + 0x63d8).o
                        int128_t var_1e8 = var_450_3
                        uint64_t var_1d8 = zmm2_1.q
                        
                        while (true)
                            int64_t rcx_216 = sx.q(var_1e8:0xc.d)
                            int64_t rax_196 = var_1f8.q
                            
                            if (rcx_216.d == ((0xffffffff << (r8_38.b & 0x1f)).q u>> 0x20).d
                                    && var_1e8.q == arg1 + 0x63e8 && rax_196 == arg1 + 0x63d8)
                                int32_t var_338 = 0
                                int32_t var_334 = 1
                                int32_t var_328 = 0xffffffff
                                int64_t var_324 = 0
                                int32_t r8_41 = *(arg1 + 0x6590)
                                void* var_330 = arg1 + 0x6578
                                
                                if (r8_41 != 0)
                                    sub_14059bdd0(&var_338)
                                    r8_41 = *(arg1 + 0x6590)
                                
                                zmm2_1 = var_328.o
                                int128_t var_450_4 = var_338.o
                                uint128_t var_440_4 = zmm2_1
                                int32_t var_104 = r8_41
                                zmm2_1 = _mm_unpackhi_pd(zmm2_1, zmm2_1.q)
                                int128_t var_2d0 = (arg1 + 0x6568).o
                                int128_t var_2c0 = var_450_4
                                uint64_t var_2b0 = zmm2_1.q
                                
                                while (true)
                                    int64_t rcx_223 = sx.q(var_2c0:0xc.d)
                                    int64_t* rax_201 = var_2d0.q
                                    
                                    if (rcx_223.d == ((0xffffffff << (r8_41.b & 0x1f)).q u>> 0x20).d
                                            && var_2c0.q == arg1 + 0x6578
                                            && rax_201 == arg1 + 0x6568)
                                        int32_t var_70
                                        int32_t rdx_131 = var_70
                                        int32_t var_354 = 1
                                        int32_t var_358 = 0
                                        int64_t var_88
                                        int64_t* var_350 = &var_88
                                        int32_t var_348 = 0xffffffff
                                        int64_t var_344 = 0
                                        
                                        if (rdx_131 != 0)
                                            sub_14059bdd0(&var_358)
                                            rdx_131 = var_70
                                        
                                        zmm2_1 = var_348.o
                                        int128_t var_450_5 = var_358.o
                                        int32_t var_e4 = rdx_131
                                        uint128_t var_440_5 = zmm2_1
                                        zmm2_1 = _mm_unpackhi_pd(zmm2_1, zmm2_1.q)
                                        int128_t var_2a8 = (&var_98).o
                                        int128_t var_298 = var_450_5
                                        uint64_t var_288 = zmm2_1.q
                                        
                                        while (true)
                                            int64_t rcx_231 = sx.q(var_298:0xc.d)
                                            int64_t* rax_206 = var_2a8.q
                                            
                                            if (rcx_231.d == ((0xffffffff << (rdx_131.b & 0x1f)).q
                                                    u>> 0x20).d && var_298.q == &var_88
                                                    && rax_206 == &var_98)
                                                sub_1408d84f0(arg1 + 0x6388)
                                                sub_1413f6050(var_490_2)
                                                sub_1408d8560(arg1 + 0x63d8)
                                                sub_1413f5fe0(arg1 + 0x6478)
                                                sub_140908eb0(arg1 + 0x6568)
                                                sub_140908eb0(arg1 + 0x6518)
                                                sub_140908eb0(arg1 + 0x64c8)
                                                int32_t var_50_2 = 0
                                                
                                                if (var_58 != 0)
                                                    sub_140a74f90(var_58)
                                                
                                                sub_14100e680(&var_98)
                                                
                                                if (var_4a8 != 0)
                                                    sub_140a74f90(var_4a8)
                                                
                                                int64_t* result = result_1
                                                
                                                if (result != 0)
                                                    result = sub_140a74f90(result)
                                                
                                                __security_check_cookie(rax_1 ^ &var_4f8)
                                                return result
                                            
                                            int64_t* rbx_2 = *(*rax_206 + rcx_231 * 0x10)
                                            void*** rax_208 = j_sub_140a82f30(0x18)
                                            void*** rdx_132 = rax_208
                                            
                                            if (rax_208 == 0)
                                                rdx_132 = nullptr
                                            else
                                                *rax_208 = &data_142f788e0
                                                rax_208[1] = 0
                                                rax_208[1] = rbx_2[0x18]
                                                rbx_2[0x18] = 0
                                                rax_208[2].d = rbx_2[0x19].d
                                                *(rdx_132 + 0x14) = *(rbx_2 + 0xcc)
                                                rbx_2[0x19] = 0
                                            
                                            sub_141997870(rdx_132)
                                            int64_t* rcx_236 = rbx_2[1]
                                            
                                            if (rcx_236 != 0)
                                                (**rcx_236)(rcx_236, 1)
                                            
                                            (**rbx_2)(rbx_2, 1)
                                            var_298:8.d &= not.d(var_2a8:0xc.d)
                                            sub_14059bdd0(&var_2a8:8)
                                    
                                    void* rdi_39 = *(*rax_201 + rcx_223 * 0x10)
                                    void var_304
                                    
                                    if (*sub_1408296b0(&var_98, &var_304, rdi_39) == 0xffffffff)
                                        sub_141403540(arg1 + 0x18b0, rdi_39)
                                    
                                    var_2c0:8.d &= not.d(var_2d0:0xc.d)
                                    sub_14059bdd0(&var_2d0:8)
                            
                            int64_t* rdi_38 = (rcx_216 << 5) + *rax_196
                            void* r14_14 = *rdi_38
                            void* rsi_18 = *(r14_14 + 0x110)
                            void var_308
                            
                            if (*sub_1408296b0(&var_98, &var_308, rsi_18) == 0xffffffff)
                                if (r14_14 + 0x20 != &rdi_38[1])
                                    var_4d8.d = 0
                                    sub_1411b64f0(r14_14 + 0x20, rdi_38[1], rdi_38[2].d, 
                                        *(r14_14 + 0x2c), var_4d8)
                                    rsi_18 = *(r14_14 + 0x110)
                                
                                *(rsi_18 + 0x120) |= 2
                            
                            var_1e8:8.d &= not.d(var_1f8:0xc.d)
                            sub_14059bdd0(&var_1f8:8)
                    
                    int64_t rcx_208 = rax_189 * 3
                    int64_t rax_190 = *rdx_122
                    void* rdi_35 = *(rax_190 + (rcx_208 << 3))
                    void var_30c
                    
                    if (*sub_1408296b0(&var_98, &var_30c, rdi_35) == 0xffffffff)
                        sub_1413ad930(rdi_35)
                        *(rdi_35 + 0x20) = *(rax_190 + (rcx_208 << 3) + 8)
                        sub_14139fdd0(rdi_35)
                    
                    var_210:8.d &= not.d(var_220:0xc.d)
                    sub_14059bdd0(&var_220:8)
            
            int64_t* rdi_34 = rax_181 * 0x60 + *rcx_199
            int32_t var_408 = *(*rdi_34 + 0x10)
            int32_t var_400
            sub_1413e81e0(arg1 + 0x61e0, &var_400, &var_408)
            int64_t rax_183 = sx.q(var_400)
            void* const rdx_120
            
            if (rax_183.d == 0xffffffff)
                rdx_120 = nullptr
            else
                rdx_120 = rax_183 * 0xd0 + *(arg1 + 0x61e0)
            
            void* rax_184 = rdx_120 + 0x10
            
            if (rdx_120 == 0)
                rax_184 = nullptr
            
            if (rax_184 != 0)
                *(rax_184 + 0x50) = *(rdi_34 + 0x10)
                *(rax_184 + 0x60) = *(rdi_34 + 0x20)
                *(rax_184 + 0x70) = *(rdi_34 + 0x30)
                *(rax_184 + 0x80) = *(rdi_34 + 0x40)
                *(rax_184 + 0xa0) = 1
            
            var_238:8.d &= not.d(var_248:0xc.d)
            sub_14059bdd0(&var_248:8)
    
    int64_t* r15_9 = rax_159 * 0xb0 + *rcx_170
    int64_t* rsi_15 = *r15_9
    void* rdi_24 = rsi_15[0x22]
    void var_310
    
    if (*sub_1408296b0(&var_98, &var_310, rdi_24) == 0xffffffff)
        char r13_7 = not.b(*(rsi_15 + 0x3b)) & 1
        int32_t var_4b8
        int64_t rax_163
        uint64_t rcx_174
        
        if (r13_7 == 0)
            int32_t rax_162 = r12_6
            r12_6 += 1
            var_4b8 = rax_162
            var_460.d = r12_6
            
            if (r12_6 s> var_460:4.d)
                sub_1405a4d70(&var_468)
                rax_162 = var_4b8
                r12_6 = var_460.d
            
            rcx_174 = var_468
            rax_163 = sx.q(rax_162)
        else
            int32_t rcx_172 = var_470_1.d
            var_4b8 = rcx_172
            var_470_1.d = rcx_172 + 1
            
            if (rcx_172 + 1 s> var_470_1:4.d)
                sub_1405a4d70(&var_478)
                rcx_172 = var_4b8
            
            rax_163 = sx.q(rcx_172)
            rcx_174 = var_478
        
        *(rcx_174 + (rax_163 << 3)) = rdi_24
        sub_1413a4370(rdi_24, zx.q(r13_7), sub_14139bc60(rdi_24))
        
        if (*(*(rdi_24 + 8) + 0x32) - 1 u<= 1 && *(arg1 + 8) s> 1)
            void** rax_165 = sub_1413b8eb0(arg1 + 0x61e0, *(rdi_24 + 0x10), rdi_24 + 0x10)
            bool cond:5_1 = rax_165[0x14].b != 0
            *(rax_165 + 0x10) = *(r15_9 + 0x50)
            *(rax_165 + 0x20) = *(r15_9 + 0x60)
            *(rax_165 + 0x30) = *(r15_9 + 0x70)
            *(rax_165 + 0x40) = *(r15_9 + 0x80)
            rax_165[0x12] = *(arg1 + 0x61d8)
            rax_165[0x13] = *(arg1 + 0x61d8)
            *rax_165 = rdi_24
            
            if (not(cond:5_1))
                *(rax_165 + 0x50) = *(rsi_15 + 0x80)
                *(rax_165 + 0x60) = *(rsi_15 + 0x90)
                *(rax_165 + 0x70) = *(rsi_15 + 0xa0)
                *(rax_165 + 0x80) = *(rsi_15 + 0xb0)
                rax_165[0x14].b = 1
        
        int32_t var_2e0_1 = r15_9[0x13].d
        uint64_t var_2e8 = r15_9[0x12]
        var_4d8.q = &var_2e8
        sub_1422acec0(rsi_15, &r15_9[0xa], &r15_9[2], r15_9 + 0x2c, var_4d8, var_4d0, arg3, i_3, 
            var_4b8)
        int64_t rax_167 = *(arg1 + 0xdc8)
        int64_t rcx_184 = sx.q(*(rdi_24 + 0x110)) << 6
        *(rcx_184 + rax_167) = *(r15_9 + 0x50)
        *(rcx_184 + rax_167 + 0x10) = *(r15_9 + 0x60)
        *(rcx_184 + rax_167 + 0x20) = *(r15_9 + 0x70)
        *(rcx_184 + rax_167 + 0x30) = *(r15_9 + 0x80)
        
        if (*(arg1 + 8) s< 3 &&
                (*(rsi_15 + 0x32) - 1 u<= 1 || (rsi_15[7].b & 0x40) != 0 || *(rsi_15 + 0x33) == 2))
            char rax_169 = *(rdi_24 + 0x120)
            
            if ((rax_169 & 4) == 0)
                *(rdi_24 + 0x120) = rax_169 | 4
        
        sub_141184690(arg1, *(rdi_24 + 0x110))
        sub_141403540(arg1 + 0x18b0, rdi_24)
    
    var_260:8.d &= not.d(var_270:0xc.d)
    sub_14059bdd0(&var_270:8)
    rdx_105 = var_3e8
    rdi_23 = arg1 + 0x6428
    rsi_14 = var_3f8_1
