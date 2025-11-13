// 函数: sub_141a06840
// 地址: 0x141a06840
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void var_178
int64_t rax_1 = __security_cookie ^ &var_178
int128_t zmm6
int32_t entry_r8

if ((*(arg1 + 0x38) & 2) != 0)
    zmm6 = sub_141a12530(arg1 + 0x150, arg1, entry_r8)
int32_t i_2 = 0
int32_t r15 = *(*(arg1 + 0x108) + 8)
int64_t rax_6

if (data_1439cc088 == data_1439cc0b4)
labelid_69:
    rax_6 = 0
else
    void* rdx_2 = data_1439cc0c0
    void* rax_4 = &data_1439cc0b8
    int64_t r9_1 = sx.q(*(arg1 + 0x594))
    
    if (rdx_2 != 0)
        rax_4 = rdx_2
    
    int32_t rax_5 = *(rax_4 + (((sx.q(data_1439cc0c8) - 1) & r9_1) << 2))
    
    if (rax_5 == 0xffffffff)
    label_141a068f7:
        rax_6 = 0
    else
        int64_t r8 = data_1439cc080
        int64_t rcx_4
        
        while (true)
            rcx_4 = sx.q(rax_5)
            int64_t rdx_3 = rcx_4 * 3
            
            if (*(r8 + (rdx_3 << 3)) == r9_1.d)
                break
            
            rax_5 = *(r8 + (rdx_3 << 3) + 0x10)
            
            if (rax_5 == 0xffffffff)
                goto label_141a068f7_2
        
        if (rax_5 == 0xffffffff)
        label_141a068f7_1:
            rax_6 = 0
        else
            void* rax_10 = r8 + rcx_4 * 0x18
            
            if (rax_10 == 0)
            label_141a068f7_2:
                rax_6 = 0
            else
                rax_6 = *(rax_10 + 8)

*(arg1 + 0x598) = rax_6
int32_t var_148

if (rax_6 == 0)
    void*** rax_7 = j_sub_140a82f30(0x80)
    void*** rax_8
    
    if (rax_7 == 0)
        rax_8 = nullptr
    else
        var_148 = 0
        rax_8, zmm6 = sub_1419fc770(rax_7, *(arg1 + 0x594), *(arg1 + 0x4a0), *(arg1 + 0x49c), r15, 
            *(arg1 + 0x449) u>> 1 & 1, var_148)
    
    *(arg1 + 0x598) = rax_8
    sub_1419f6440(&data_1439cc080, arg1 + 0x594, arg1 + 0x598)
    int64_t rbx_1 = *(arg1 + 0x588)
    void*** rax_11 = j_sub_140a82f30(0x140)
    void*** rdi_1 = rax_11
    
    if (rbx_1 != 0)
        if (rdi_1 == 0)
            rdi_1 = nullptr
        else
            rax_11[1].d = 0xffffffff
            *(rax_11 + 0xc) = r15.b
            rax_11[0x12] = 0
            rax_11[0x13].d = 0
            *(rax_11 + 0x9c) = 8
            rax_11[0x14].d = 0xffff0001
            *(rax_11 + 0xa4) = 0xff
            rax_11[0x19] = 0
            rax_11[0x1a].d = 0
            *(rax_11 + 0xd4) = 2
            rax_11[0x21] = 0
            rax_11[0x22].d = 0
            *(rax_11 + 0x114) = 3
            __builtin_memset(&rax_11[0x23], 0, 0x28)
            *rdi_1 = &data_14301ead8
        
        int32_t var_e8_1 = 0
        int32_t var_e4_1 = 0x41000
        void** rax_17 = *rdi_1
        *(rdi_1 + 0x130) = (*(*(arg1 + 0x598) + 0x38)).o
        rax_17[5](rdi_1)
        *(*(arg1 + 0x598) + 0x28) = rdi_1
    else
        void*** rbx_2
        
        if (rax_11 == 0)
            rbx_2 = nullptr
        else
            rbx_2 = sub_1419fc9a0(rax_11, r15.b)
        
        int32_t var_f8_1 = 0
        int32_t var_f4_1 = 0x41000
        void** rax_14 = *rbx_2
        *(rbx_2 + 0x130) = (*(*(arg1 + 0x598) + 0x38)).o
        rax_14[5](rbx_2)
        *(*(arg1 + 0x598) + 0x28) = rbx_2
    
    if (sub_1419ba670(r15) != 0)
        void*** rax_20 = j_sub_140a82f30(0x140)
        void*** rbx_3 = rax_20
        
        if (rax_20 == 0)
            rbx_3 = nullptr
        else
            rax_20[1].d = 0xffffffff
            *(rax_20 + 0xc) = r15.b
            rax_20[0x12] = 0
            rax_20[0x13].d = 0
            *(rax_20 + 0x9c) = 8
            rax_20[0x14].d = 0xffff0001
            *(rax_20 + 0xa4) = 0xff
            rax_20[0x19] = 0
            rax_20[0x1a].d = 0
            *(rax_20 + 0xd4) = 2
            rax_20[0x21] = 0
            rax_20[0x22].d = 0
            *(rax_20 + 0x114) = 3
            __builtin_memset(&rax_20[0x23], 0, 0x28)
            *rbx_3 = &data_14301eb50
        
        int32_t var_d8_1 = 0
        int32_t var_d4_1 = 0x41000
        void** rax_22 = *rbx_3
        *(rbx_3 + 0x130) = (*(*(arg1 + 0x598) + 0x38)).o
        rax_22[5](rbx_3)
        *(*(arg1 + 0x598) + 0x30) = rbx_3

void* rax_24 = *(arg1 + 0x598)
*(rax_24 + 8) += 1
char temp0 = *(arg1 + 0x449) & 2
bool cond:1 = temp0 == 0

if (temp0 != 0)
    void* r8_3 = *(arg1 + 0x598)
    
    if (*(r8_3 + 0x50) == 0)
        int64_t* rcx_15 = **(r8_3 + 0x40)
        
        if (rcx_15 != 0)
            if (*(r8_3 + 0x68) == 0)
                goto label_141a06c13
            
            if ((*(*rcx_15 + 0x58))(rcx_15) != 0)
                r8_3 = *(arg1 + 0x598)
            label_141a06c13:
                int64_t* rcx_17 = **(r8_3 + 0x40)
                
                if ((*(*rcx_17 + 0x58))(rcx_17) == 0)
                    zmm6 = sub_1419f4cb0(*(arg1 + 0x598), r15, *(arg1 + 0x449) u>> 1 & 1)
            else
                zmm6 = sub_1419f58b0(*(arg1 + 0x598), r15, *(arg1 + 0x449) u>> 1 & 1)
        
        void*** rax_31 = j_sub_140a82f30(0x18)
        void*** rcx_20
        
        if (rax_31 == 0)
            rcx_20 = nullptr
        else
            rcx_20 = sub_1419fc540(rax_31, *(arg1 + 0x598))
        
        *(*(arg1 + 0x598) + 0x50) = rcx_20
        r8_3 = *(arg1 + 0x598)
    
    int32_t rdi_2 = 0
    int32_t temp1_1 = *(r8_3 + 0x18)
    cond:1 = temp1_1 == 0
    
    if (temp1_1 s> 0)
        int64_t* rbx_4 = nullptr
        int32_t temp2_1
        
        do
            int64_t* rcx_22 = *(rbx_4 + *(*(arg1 + 0x598) + 0x40))
            (*(*rcx_22 + 0x28))(rcx_22)
            rbx_4 = &rbx_4[1]
            rdi_2 += 1
            temp2_1 = *(*(arg1 + 0x598) + 0x18)
            cond:1 = rdi_2 == temp2_1
        while (rdi_2 s< temp2_1)

void* rcx_23 = *(arg1 + 0x598)
*(arg1 + 0x5a0) = *(rcx_23 + 0x28)
*(arg1 + 0x5a8) = *(rcx_23 + 0x30)
(*(*(arg1 + 0x628) + 0x28))(arg1 + 0x628)
int32_t r8_6 = *(arg1 + 0x4a4)
uint64_t rflags
char temp0_1
temp0_1, rflags = _bit_scan_reverse(r8_6)
int32_t rax_40 = temp0_1
int32_t var_98 = rax_40
int32_t rcx_25

rcx_25 = cond:1 ? 0x20 : 0x1f - rax_40

int32_t rcx_27 = rcx_25 << 0x1a s>> 0x1f
uint64_t rflags_1
char temp0_2
temp0_2, rflags_1 = _bit_scan_reverse(r8_6 - 1)
int32_t r8_7 = temp0_2
int32_t var_94 = r8_7
int32_t rdx_11

if (rcx_27 == 0)
    rdx_11 = 0x20
else
    rdx_11 = 0x1f - r8_7

int64_t rdi_3 = sx.q(*(arg1 + 0x658))
int32_t i_5 = (0x20 - rdx_11) & not.d(rcx_27)
int32_t rax_42 = rdi_3.d + i_5
*(arg1 + 0x658) = rax_42

if (rax_42 s> *(arg1 + 0x65c))
    sub_1405c4ec0(arg1 + 0x650)

uint64_t result = *(arg1 + 0x650)
int32_t i_3 = i_5
int64_t rdx_13 = result + rdi_3 * 0x28

if (i_5 != 0)
    result = &data_143020dc0
    int32_t i
    
    do
        *(rdx_13 + 8) = 0xffffffff
        *(rdx_13 + 0xc) = 4
        *rdx_13 = &data_143020dc0
        *(rdx_13 + 0x10) = 2
        *(rdx_13 + 0x18) = 0
        *(rdx_13 + 0x20) = 0
        rdx_13 += 0x28
        i = i_3
        i_3 -= 1
    while (i != 1)

int64_t i_4 = sx.q(i_5)
int32_t rdi_4 = 0
uint128_t zmm1

if (i_5 s> 0)
    int128_t var_38_1 = zmm6
    int64_t r14_1 = 0
    int32_t var_c4_1 = 0
    int64_t i_1
    
    do
        int64_t* rcx_32 = *(arg1 + 0x650) + r14_1
        (*(*rcx_32 + 0x28))(rcx_32)
        int64_t* rbx_7 = *(arg1 + 0x650) + r14_1
        int32_t rax_46 = (*(arg1 + 0x4a4) s>> rdi_4.b) - 1
        uint128_t zmm2 = _mm_cvtepi32_ps(zx.o(rdi_4))
        int128_t* rax_47 = rbx_7[4]
        int32_t var_c8_1 = zmm2.d
        zmm1 = _mm_cvtepi32_ps(zx.o(rax_46))
        int32_t var_c0_1 = zmm1.d
        int128_t zmm0
        zmm0.d = 1f f/ zmm1.d
        int32_t var_bc_1 = zmm0.d
        
        if (rax_47 == 0)
            rax_47 = sub_140a82f30(0x10, 0x10)
            rbx_7[4] = rax_47
        
        *rax_47 = var_c8_1.o
        result = sub_1419ba620(rbx_7)
        rdi_4 += 1
        r14_1 += 0x28
        i_1 = i_4
        i_4 -= 1
    while (i_1 != 1)

if (data_143f0f21f != 0)
    uint64_t rdx_14 = zx.q(data_143f0f1a0)
    result = zx.q(*(&data_143f025fc + sx.q(rdx_14.d) * 0x14) u>> 0x13)
    
    if ((result.b & 1) != 0)
        result = data_143f13cd8
        
        if (test_bit(result, rdx_14))
            uint32_t result_1 = *(arg1 + 0x49c)
            
            if (result_1 s> 0)
                do
                    int32_t j = 0
                    result = zx.q(result_1)
                    
                    if (result_1 s> 0)
                        do
                            zmm1 = data_143dbb1e0
                            char rcx_36 = (data_1439c7a34).b
                            int32_t r15_2 = *(arg1 + 0x4a4) - 1
                            uint8_t var_150
                            int128_t var_88
                            var_150.q = &var_88
                            int64_t var_130_1 = 0
                            void* var_120 = nullptr
                            int32_t var_118_1 = 0
                            int64_t var_110_1 = 0
                            var_88 = zx.o(0)
                            int32_t var_78_1 = 1
                            uint128_t var_74_1 = zmm1
                            char var_60_1 = 0
                            int64_t var_58_1 = 0
                            int32_t var_50_1 = 0
                            int64_t var_138 = 0
                            int16_t var_108_1 = 0x101
                            int32_t var_64_1 = (1 << rcx_36) - 1
                            int64_t var_b0_1 = 3
                            int64_t var_a8_1 = 0xc
                            int16_t var_9c_1 = 0x100
                            char var_9a_1 = 1
                            uint64_t r15_4 = zx.q(r15_2 * r15_2 * 2)
                            int32_t var_128_1 = r15_4.d
                            void* var_d0
                            (*(*data_143f0f180 + 0x498))(zx.o(0), &var_d0, &data_143f02b98, 
                                zx.q((r15_4 * 3).d << 4), 0x208, var_150, var_148)
                            void* rbx_8 = var_d0
                            var_d0 = nullptr
                            int64_t rdi_5 = sx.q(var_118_1)
                            void* var_b8 = rbx_8
                            int32_t var_a0_1 = r15_4.d
                            int32_t k_2 = (rdi_5 + 1).d
                            
                            if (k_2 s> 0)
                                sub_1405e4030(&var_120, rdi_5.d)
                            
                            void* rcx_39
                            
                            if ((var_120.b & 1) == 0)
                                rcx_39 = var_120
                            else
                                rcx_39 = &var_120 + (var_120 s>> 1)
                            
                            int64_t rax_57 = rdi_5 << 5
                            *(rax_57 + rcx_39) = rbx_8
                            
                            if (rbx_8 != 0)
                                *(rbx_8 + 8) += 1
                            
                            *(rax_57 + rcx_39 + 8) = 3
                            *(rax_57 + rcx_39 + 0x10) = 0xc
                            *(rax_57 + rcx_39 + 0x18) = r15_4.d
                            *(rax_57 + rcx_39 + 0x1c) = 0x100
                            *(rax_57 + rcx_39 + 0x1e) = 1
                            int64_t rbx_9 = zx.q(sx.d(i_2.b * result_1.b + j.b)) * 0xa8
                            sub_14081daa0(arg1 + 0x1f0 + rbx_9, &var_138)
                            void* rcx_44 = arg1 + 0x1b8 + rbx_9
                            (*(*rcx_44 + 0x28))(rcx_44)
                            sub_1405d1550(&var_b8)
                            void* rbx_10
                            
                            if ((var_120.b & 1) == 0)
                                rbx_10 = var_120
                            else
                                rbx_10 = &var_120 + (var_120 s>> 1)
                            
                            int32_t k_1 = k_2
                            
                            if (k_1 != 0)
                                int32_t k
                                
                                do
                                    sub_1405d1550(rbx_10)
                                    rbx_10 += 0x20
                                    k = k_1
                                    k_1 -= 1
                                while (k != 1)
                            
                            sub_140a1d5c0(&var_120)
                            sub_14081c9d0(&var_138)
                            result = zx.q(*(arg1 + 0x49c))
                            j += 1
                            result_1 = zx.d(result.b)
                        while (j s< result.d)
                    
                    i_2 += 1
                    result_1 = result.d
                while (i_2 s< result.d)

__security_check_cookie(rax_1 ^ &var_178)
return result
