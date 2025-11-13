// 函数: sub_140a8c5a0
// 地址: 0x140a8c5a0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

CRITICAL_SECTION* lpCriticalSection = &arg1[0x1a]
EnterCriticalSection(lpCriticalSection)
int16_t* const result = &data_142d40450
int16_t* const r8

if (arg2[1].d == 0)
    r8 = &data_142d40450
else
    r8 = *arg2

if (arg1[5].d != 0)
    result = arg1[4]

void* r8_1 = r8 - result
uint32_t i
uint32_t rdx

do
    rdx = zx.d(*result)
    i = zx.d(*(result + r8_1))
    
    if (rdx != i)
        break
    
    result = &result[1]
while (i != 0)

if (rdx - i != 0)
    sub_140597df0(&arg1[4], arg2)
    int32_t var_154_1 = 1
    void* r15_1 = &arg1[6]
    int32_t var_158_1 = 0
    int32_t r10_1 = *(r15_1 + 0x28)
    void* r14_1 = r15_1 + 0x10
    void* var_150_1 = r14_1
    int32_t var_148_1 = 0xffffffff
    int32_t rcx_2 = 0
    int64_t var_144_1 = 0
    int32_t r8_2 = 0
    
    if (r10_1 != 0)
        void* rax = *(r14_1 + 0x10)
        void* r9_1 = r14_1
        
        if (rax != 0)
            r9_1 = rax
        
        int32_t temp2_1
        int32_t temp3_1
        temp2_1:temp3_1 = sx.q(r10_1 - 1)
        int32_t rdx_5 = *r9_1
        
        if (rdx_5 != 0)
        label_140a8c6d9:
            int32_t rax_7 = ((rdx_5 - 1) & rdx_5) ^ rdx_5
            uint64_t rflags_1
            int32_t temp0_1
            temp0_1, rflags_1 = _bit_scan_reverse(rax_7)
            int32_t var_154_2 = rax_7
            int32_t arg_8 = temp0_1
            int32_t rax_8
            
            if (rax_7 == 0)
                rax_8 = 0x20
            else
                rax_8 = 0x1f - temp0_1
            
            var_144_1.d = r8_2 - rax_8 + 0x1f
            
            if (r8_2 - rax_8 + 0x1f s> r10_1)
                var_144_1.d = r10_1
        else
            while (true)
                int64_t rdx_6 = sx.q(rcx_2)
                r8_2 += 0x20
                rcx_2 += 1
                var_144_1:4.d = r8_2
                var_158_1 = rcx_2
                
                if (rdx_6.d s>= (temp3_1 + (temp2_1 & 0x1f)) s>> 5)
                    break
                
                rdx_5 = *(r9_1 + (rdx_6 << 2) + 4)
                int32_t var_148_2 = 0xffffffff
                
                if (rdx_5 != 0)
                    goto label_140a8c6d9
            
            var_144_1.d = r10_1
    
    int32_t rdx_7 = *(r15_1 + 0x28)
    int32_t r8_5 = rdx_7 s>> 5
    int128_t var_120_1 = var_158_1.o
    int32_t r9_3 = rdx_7 & 0xffffffe0
    void* var_128_1
    var_128_1.d = r8_5
    int128_t var_110_1 = 0xffffffff
    int64_t var_b8_1 = _mm_unpackhi_pd(0xffffffff, 0xffffffff)
    int128_t zmm1 = var_120_1
    var_120_1:0xc.d = rdx_7
    var_110_1.d = r9_3
    int128_t var_d8 = r15_1.o
    int128_t var_c8_1 = zmm1
    
    if (rdx_7 != r10_1)
        void* rax_11 = *(r14_1 + 0x10)
        void* rdi_1 = r14_1
        
        if (rax_11 != 0)
            rdi_1 = rax_11
        
        int32_t temp4_1
        int32_t temp5_1
        temp4_1:temp5_1 = sx.q(r10_1 - 1)
        int32_t rdx_11 = *(rdi_1 + (sx.q(r8_5) << 2)) & 0xffffffff << (rdx_7 & 0x1f).b
        
        if (rdx_11 != 0)
        label_140a8c7b7:
            int32_t rax_17 = ((rdx_11 - 1) & rdx_11) ^ rdx_11
            uint64_t rflags_2
            int32_t temp0_3
            temp0_3, rflags_2 = _bit_scan_reverse(rax_17)
            int32_t arg_10 = temp0_3
            int32_t rsi_1
            
            if (rax_17 == 0)
                rsi_1 = 0x20
            else
                rsi_1 = 0x1f - temp0_3
            
            result = zx.q(r9_3 - rsi_1 + 0x1f)
            var_120_1:0xc.d = result.d
            
            if (result.d s> r10_1)
                var_120_1:0xc.d = r10_1
        else
            while (true)
                int64_t rcx_6 = sx.q(r8_5)
                r9_3 += 0x20
                r8_5 += 1
                var_110_1.d = r9_3
                var_128_1.d = r8_5
                
                if (rcx_6.d s>= (temp5_1 + (temp4_1 & 0x1f)) s>> 5)
                    break
                
                rdx_11 = *(rdi_1 + (rcx_6 << 2) + 4)
                
                if (rdx_11 != 0)
                    goto label_140a8c7b7
            
            var_120_1:0xc.d = r10_1
    
    while (true)
        int64_t rcx_8 = sx.q(var_c8_1:0xc.d)
        
        if (rcx_8.d != var_120_1:0xc.d || var_c8_1.q != r14_1)
            result.b = 0
        else
            result.b = 1
        
        int64_t* rdx_12 = var_d8.q
        
        if (result.b == 0 || rdx_12 != r15_1)
            result.b = 1
        else
            result.b = 0
        
        if (result.b == 0)
            break
        
        int64_t* r13_1 = *rdx_12 + rcx_8 * 0x28
        int64_t* r14_3 = r13_1[3]
        int64_t* rsi_2 = r13_1[2]
        
        if (r14_3 != 0)
            r14_3[1].d += 1
        
        void var_60
        
        if (rsi_2 != &var_60)
            *rsi_2 = 0
            int64_t* rcx_10 = rsi_2[1]
            rsi_2[1] = 0
            
            if (rcx_10 != 0)
                int32_t rax_18 = *(rcx_10 + 0xc)
                *(rcx_10 + 0xc) -= 1
                
                if (rax_18 == 1)
                    (*(*rcx_10 + 8))(rcx_10, 1)
        
        int64_t* rdi_2 = rsi_2[5]
        int64_t var_100 = rsi_2[4]
        
        if (rdi_2 != 0)
            rdi_2[1].d += 1
        
        sub_140a87220(&arg1[0x10], &var_100)
        
        if (rdi_2 != 0)
            rdi_2[1].d -= 1
            
            if (rdi_2[1].d == 1)
                (**rdi_2)(rdi_2)
                int32_t rax_23 = *(rdi_2 + 0xc)
                *(rdi_2 + 0xc) -= 1
                
                if (rax_23 == 1)
                    (*(*rdi_2 + 8))(rdi_2, 1)
        
        void var_90
        sub_140a97b20(&var_90, r13_1)
        void var_80
        sub_140a97b20(&var_80, &arg1[4])
        void var_70
        int64_t* rax_26 = sub_140aaef90(sub_140aae970(), &var_70, &var_80, &var_90, &rsi_2[2])
        int64_t var_138 = *rax_26
        int64_t* rcx_18 = rax_26[1]
        
        if (rcx_18 != 0)
            rcx_18[1].d += 1
        
        int32_t rdi_3 = rsi_2[3].d
        int64_t rsi_4 = rsi_2[2]
        int64_t var_168 = 0
        int32_t var_160_1 = rdi_3
        
        if (rdi_3 != 0)
            sub_1405a4c70(&var_168, rdi_3, 0)
            memcpy(var_168, rsi_4, rdi_3 * 2)
        else
            int32_t var_15c_1 = 0
        
        int64_t* rdi_4 = arg1[1]
        int64_t rdx_20 = 0
        
        if (rdi_4 != 0)
            int32_t rax_27 = 0
            bool z_1
            
            if (0 == rdi_4[1].d)
                rdi_4[1].d = 0
                z_1 = true
            else
                rax_27 = rdi_4[1].d
                z_1 = false
            
            if (z_1)
            label_140a8c9a8:
                rdi_4 = nullptr
            else
                while (true)
                    bool z_2
                    
                    if (rax_27 == rdi_4[1].d)
                        rdi_4[1].d = rax_27 + 1
                        z_2 = true
                    else
                        rdi_4[1].d
                        z_2 = false
                    
                    if (z_2)
                        rdx_20 = *arg1
                        break
                    
                    rax_27 = 0
                    bool z_3
                    
                    if (0 == rdi_4[1].d)
                        rdi_4[1].d = 0
                        z_3 = true
                    else
                        rax_27 = rdi_4[1].d
                        z_3 = false
                    
                    if (z_3)
                        goto label_140a8c9a8
        
        int64_t var_b0 = rdx_20
        int64_t* var_a8_1 = rdi_4
        
        if (rdi_4 != 0)
            rdi_4[1].d += 1
        
        void*** rax_29 = sub_140a5f5f0(&var_b0, &var_168, &var_138)
        
        if (rdi_4 != 0)
            rdi_4[1].d -= 1
            
            if (rdi_4[1].d == 1)
                (**rdi_4)(rdi_4)
                int32_t rax_32 = *(rdi_4 + 0xc)
                *(rdi_4 + 0xc) -= 1
                
                if (rax_32 == 1)
                    (*(*rdi_4 + 8))(rdi_4, 1)
        
        int64_t rsi_5 = var_168
        
        if (rsi_5 != 0)
            int64_t* rcx_25 = data_143ddb3f0
            
            if (rcx_25 == 0)
                sub_140a750a0()
                rcx_25 = data_143ddb3f0
            
            (*(*rcx_25 + 0x30))(rcx_25, rsi_5)
        
        if (rcx_18 != 0)
            rcx_18[1].d -= 1
            
            if (rcx_18[1].d == 1)
                (**rcx_18)(rcx_18)
                int32_t rax_37 = *(rcx_18 + 0xc)
                *(rcx_18 + 0xc) -= 1
                
                if (rax_37 == 1)
                    (*(*rcx_18 + 8))(rcx_18, 1)
        
        uint128_t zmm0_2 = (&rax_29[2]).o
        uint128_t var_188 = zmm0_2
        void*** rsi_7 = _mm_bsrli_si128(zmm0_2, 8).q
        
        if (rsi_7 != 0)
            rsi_7[1].d += 1
            rsi_7 = rax_29
        
        if (&r13_1[2] != &var_188)
            r13_1[2] = var_188.q
            var_188.q = 0
            sub_1405aeff0(&r13_1[3], &var_188:8)
            rsi_7 = rax_29
        
        void* rcx_30 = var_188:8.q
        
        if (rcx_30 != 0)
            int32_t rax_40 = *(rcx_30 + 8)
            *(rcx_30 + 8) -= 1
            
            if (rax_40 == 1)
                int64_t* rsi_8 = var_188:8.q
                (**rsi_8)(rsi_8)
                int32_t rax_42 = *(rsi_8 + 0xc)
                *(rsi_8 + 0xc) -= 1
                
                if (rax_42 == 1)
                    int64_t* rcx_32 = var_188:8.q
                    (*(*rcx_32 + 8))(rcx_32, 1)
            
            rsi_7 = rax_29
        
        if (rsi_7 != 0)
            rsi_7[1].d -= 1
            
            if (rsi_7[1].d == 1)
                (**rsi_7)(rsi_7)
                int32_t rax_46 = *(rsi_7 + 0xc)
                *(rsi_7 + 0xc) -= 1
                
                if (rax_46 == 1)
                    (*rsi_7)[1](rsi_7, 1)
        
        if (rdi_4 != 0)
            rdi_4[1].d -= 1
            
            if (rdi_4[1].d == 1)
                (**rdi_4)(rdi_4)
                int32_t rax_50 = *(rdi_4 + 0xc)
                *(rdi_4 + 0xc) -= 1
                
                if (rax_50 == 1)
                    (*(*rdi_4 + 8))(rdi_4, 1)
        
        int64_t* var_68
        
        if (var_68 != 0)
            var_68[1].d -= 1
            
            if (var_68[1].d == 1)
                (**var_68)(var_68)
                int32_t rax_54 = *(var_68 + 0xc)
                *(var_68 + 0xc) -= 1
                
                if (rax_54 == 1)
                    (*(*var_68 + 8))(var_68, 1)
        
        void* rax_56 = r13_1[2]
        void* rsi_9 = *(rax_56 + 0x28)
        int64_t r15_3 = *(rax_56 + 0x20)
        
        if (rsi_9 != 0)
            *(rsi_9 + 8) += 1
        
        int32_t var_a0
        sub_14098dfb0(&arg1[0x10], &var_a0)
        int64_t* var_98
        *var_98 = r15_3
        var_98[1] = rsi_9
        sub_140596d10(&var_98[2], r13_1)
        var_98[4].d = 0xffffffff
        uint32_t rdx_28 = (*var_98 u>> 4).d
        int32_t r10_4 = rdx_28 << 8 ^ (0x9e3779b9 - rdx_28)
        int32_t r8_12 = neg.d(rdx_28 + r10_4) ^ r10_4 u>> 0xd
        int32_t rdx_31 = (rdx_28 - r8_12 - r10_4) ^ r8_12 u>> 0xc
        int32_t r10_7 = (r10_4 - rdx_31 - r8_12) ^ rdx_31 << 0x10
        int32_t r8_15 = (r8_12 - rdx_31 - r10_7) ^ r10_7 u>> 5
        int32_t rdx_34 = (rdx_31 - r8_15 - r10_7) ^ r8_15 u>> 3
        int32_t r10_10 = (r10_7 - rdx_34 - r8_15) ^ rdx_34 << 0xa
        void* var_198_1
        var_198_1.d = var_a0
        void arg_20
        sub_140a6fbb0(&arg1[0x10], &arg_20, (r8_15 - rdx_34 - r10_10) ^ r10_10 u>> 0xf, var_98, 
            var_198_1.d, nullptr)
        
        if (r14_3 != 0)
            r14_3[1].d -= 1
            
            if (r14_3[1].d == 1)
                (**r14_3)(r14_3)
                int32_t rax_73 = *(r14_3 + 0xc)
                *(r14_3 + 0xc) -= 1
                
                if (rax_73 == 1)
                    (*(*r14_3 + 8))(r14_3, 1)
        
        var_c8_1:8.d &= not.d(var_d8:0xc.d)
        sub_14059bdd0(&var_d8:8)
        r15_1 = &arg1[6]

if (lpCriticalSection == 0)
    return result

return LeaveCriticalSection(lpCriticalSection)
