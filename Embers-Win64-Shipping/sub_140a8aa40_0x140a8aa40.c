// 函数: sub_140a8aa40
// 地址: 0x140a8aa40
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

CRITICAL_SECTION* lpCriticalSection = &arg1[0x1a]
EnterCriticalSection(lpCriticalSection)
CRITICAL_SECTION* lpCriticalSection_1 = &arg1[0x29]
EnterCriticalSection(lpCriticalSection_1)
void* r14 = &arg1[4]
int512_t zmm1 = sub_140a1d9d0(arg2, r14, arg3)
char result = arg2[5].b
int32_t arg_10
void* arg_20

if ((result & 2) != 0)
    void* r12_1 = &arg1[6]
    int64_t* rcx_3 = arg2[1]
    int32_t arg_18 = arg1[7].d - *(arg1 + 0x64)
    arg_20 = r12_1
    int32_t* rdx_1 = *rcx_3
    
    if (&rdx_1[1] u> rcx_3[1])
        int32_t* rdx_2 = &arg_18
        
        if ((*(arg2 + 0x29) & 0x20) != 0)
            sub_140b54070(arg2, rdx_2, zmm1)
        else
            (*(*arg2 + 0x150))(arg2, rdx_2, 4)
    else
        arg_18 = *rdx_1
        *rcx_3 += 4
    
    int32_t r10_1 = arg1[0xb].d
    void* r11_1 = &arg1[8]
    int32_t var_184_1 = 1
    void* var_180_1 = r11_1
    int32_t rcx_5 = 0
    int32_t var_188_1 = 0
    int32_t r8_1 = 0
    int32_t var_178_1 = 0xffffffff
    int64_t var_174_1 = 0
    
    if (r10_1 != 0)
        void* rax_5 = *(r11_1 + 0x10)
        void* r9_1 = r11_1
        
        if (rax_5 != 0)
            r9_1 = rax_5
        
        int32_t temp1_1
        int32_t temp2_1
        temp1_1:temp2_1 = sx.q(r10_1 - 1)
        int32_t rdx_5 = *r9_1
        
        if (rdx_5 != 0)
        label_140a8ab9c:
            int32_t rax_12 = neg.d(rdx_5) & rdx_5
            uint64_t rflags_1
            int32_t temp0_1
            temp0_1, rflags_1 = _bit_scan_reverse(rax_12)
            int32_t var_184_2 = rax_12
            int32_t rax_13
            
            if (rax_12 == 0)
                rax_13 = 0x20
            else
                rax_13 = 0x1f - temp0_1
            
            var_174_1.d = r8_1 - rax_13 + 0x1f
            
            if (r8_1 - rax_13 + 0x1f s> r10_1)
                var_174_1.d = r10_1
        else
            while (true)
                int64_t rdx_6 = sx.q(rcx_5)
                r8_1 += 0x20
                rcx_5 += 1
                var_174_1:4.d = r8_1
                var_188_1 = rcx_5
                
                if (rdx_6.d s>= (temp2_1 + (temp1_1 & 0x1f)) s>> 5)
                    break
                
                rdx_5 = *(r9_1 + (rdx_6 << 2) + 4)
                int32_t var_178_2 = 0xffffffff
                
                if (rdx_5 != 0)
                    goto label_140a8ab9c
            
            var_174_1.d = r10_1
        
        r12_1 = &arg1[6]
    
    int32_t rdx_7 = arg1[0xb].d
    int32_t r9_2 = 0xffffffff << (rdx_7.b & 0x1f)
    int128_t var_120_1 = var_188_1.o
    arg_10 = r9_2
    int32_t r8_4 = rdx_7 s>> 5
    int128_t var_110_1 = 0xffffffff
    zmm1.o = var_120_1
    var_120_1:8.d = r9_2
    int32_t r9_4 = rdx_7 & 0xffffffe0
    int64_t var_a0_1 = _mm_unpackhi_pd(0xffffffff, 0xffffffff)
    var_120_1:0xc.d = rdx_7
    int128_t var_c0 = r12_1.o
    int128_t var_b0_1 = zmm1.o
    
    if (rdx_7 != r10_1)
        void* rax_15 = *(r11_1 + 0x10)
        void* rsi_1 = r11_1
        
        if (rax_15 != 0)
            rsi_1 = rax_15
        
        int32_t temp3_1
        int32_t temp4_1
        temp3_1:temp4_1 = sx.q(r10_1 - 1)
        int32_t rdx_11 = *(rsi_1 + (sx.q(r8_4) << 2)) & arg_10
        
        if (rdx_11 != 0)
        label_140a8ac81:
            int32_t rax_22 = neg.d(rdx_11) & rdx_11
            uint64_t rflags_2
            int32_t temp0_3
            temp0_3, rflags_2 = _bit_scan_reverse(rax_22)
            int32_t r14_1
            
            if (rax_22 == 0)
                r14_1 = 0x20
            else
                r14_1 = 0x1f - temp0_3
            
            var_120_1:0xc.d = r9_4 - r14_1 + 0x1f
            
            if (r9_4 - r14_1 + 0x1f s> r10_1)
                var_120_1:0xc.d = r10_1
        else
            while (true)
                int64_t rcx_10 = sx.q(r8_4)
                r9_4 += 0x20
                r8_4 += 1
                
                if (rcx_10.d s>= (temp4_1 + (temp3_1 & 0x1f)) s>> 5)
                    break
                
                rdx_11 = *(rsi_1 + (rcx_10 << 2) + 4)
                var_120_1:8.d = 0xffffffff
                
                if (rdx_11 != 0)
                    goto label_140a8ac81
            
            var_120_1:0xc.d = r10_1
        
        r12_1 = arg_20
    
    uint64_t rax_25 = var_120_1:8.q u>> 0x20
    arg_10.q = rax_25
    
    while (true)
        int64_t rcx_12 = sx.q(var_b0_1:0xc.d)
        
        if (rcx_12.d != rax_25.d || var_b0_1.q != r11_1)
            rax_25.b = 0
        else
            rax_25.b = 1
        
        int64_t* rdx_12 = var_c0.q
        
        if (rax_25.b == 0 || rdx_12 != r12_1)
            rax_25.b = 1
        else
            rax_25.b = 0
        
        if (rax_25.b == 0)
            break
        
        int64_t rax_26 = *rdx_12
        int64_t rcx_13 = rcx_12 * 5
        int32_t rsi_2 = *(rax_26 + (rcx_13 << 3) + 8)
        int64_t* r14_2 = rax_26 + (rcx_13 << 3)
        int64_t r12_2 = *r14_2
        uint64_t var_158 = 0
        int32_t var_150_1 = rsi_2
        
        if (rsi_2 != 0)
            sub_1405a4c70(&var_158, rsi_2, 0)
            memcpy(var_158, r12_2, rsi_2 * 2)
        else
            int32_t var_14c_1 = 0
        
        int512_t zmm1_1 = sub_140a1d9d0(arg2, &var_158, zmm1)
        void* rax_27 = r14_2[2]
        uint64_t var_168 = 0
        int32_t rsi_3 = *(rax_27 + 0x18)
        int64_t r14_3 = *(rax_27 + 0x10)
        int32_t var_160_1 = rsi_3
        
        if (rsi_3 != 0)
            sub_1405a4c70(&var_168, rsi_3, 0)
            memcpy(var_168, r14_3, rsi_3 * 2)
        else
            int32_t var_15c_1 = 0
        
        zmm1 = sub_140a1d9d0(arg2, &var_168, zmm1_1)
        uint64_t rsi_4 = var_168
        
        if (rsi_4 != 0)
            int64_t* rcx_20 = data_143ddb3f0
            
            if (rcx_20 == 0)
                zmm1 = sub_140a750a0()
                rcx_20 = data_143ddb3f0
            
            (*(*rcx_20 + 0x30))(rcx_20, rsi_4)
        
        uint64_t rsi_5 = var_158
        
        if (rsi_5 != 0)
            int64_t* rcx_21 = data_143ddb3f0
            
            if (rcx_21 == 0)
                zmm1 = sub_140a750a0()
                rcx_21 = data_143ddb3f0
            
            (*(*rcx_21 + 0x30))(rcx_21, rsi_5)
        
        var_b0_1:8.d &= not.d(var_c0:0xc.d)
        sub_14059bdd0(&var_c0:8)
        r11_1 = var_180_1
        rax_25 = arg_10.q
        r12_1 = arg_20
    
    result = sub_140a64740(arg2, &arg1[0x1f], zmm1)
else if ((result & 1) != 0)
    int64_t* rcx_23 = arg2[1]
    arg_10 = 0
    int32_t* rdx_21 = *rcx_23
    
    if (&rdx_21[1] u> rcx_23[1])
        int32_t* rdx_22 = &arg_10
        
        if ((*(arg2 + 0x29) & 0x20) != 0)
            sub_140b54070(arg2, rdx_22, zmm1)
        else
            (*(*arg2 + 0x150))(arg2, rdx_22, 4)
    else
        arg_10 = *rdx_21
        *rcx_23 += 4
    
    zmm1 = sub_140a6b780(arg1, arg_10)
    arg_20.d = 0
    
    if (arg_10 s<= 0)
        result = sub_140a64740(arg2, &arg1[0x1f], zmm1)
    else
        bool cond:5_1
        
        do
            uint64_t var_198 = 0
            int64_t var_190_1 = 0
            int512_t zmm1_2 = sub_140a1d9d0(arg2, &var_198, zmm1)
            uint64_t var_1a8 = 0
            int32_t var_1a0_1 = 0
            sub_140a1d9d0(arg2, &var_1a8, zmm1_2)
            void var_78
            sub_140a97b20(&var_78, &var_198)
            void var_68
            sub_140a97b20(&var_68, r14)
            void var_58
            int64_t* rax_36 = sub_140aaef90(sub_140aae970(), &var_58, &var_68, &var_78, &var_1a8)
            int64_t var_138 = *rax_36
            int64_t* rcx_32 = rax_36[1]
            
            if (rcx_32 != 0)
                rcx_32[1].d += 1
            
            uint64_t r14_4 = var_1a8
            int64_t var_148 = 0
            int32_t var_140_1 = var_1a0_1
            
            if (var_1a0_1 != 0)
                sub_1405a4c70(&var_148, var_1a0_1, 0)
                memcpy(var_148, r14_4, var_1a0_1 * 2)
            else
                int32_t var_13c_1 = 0
            
            int64_t* rsi_7 = arg1[1]
            int64_t rdx_31 = 0
            
            if (rsi_7 != 0)
                int32_t rax_37 = 0
                bool z_1
                
                if (0 == rsi_7[1].d)
                    rsi_7[1].d = 0
                    z_1 = true
                else
                    rax_37 = rsi_7[1].d
                    z_1 = false
                
                if (z_1)
                label_140a8af88:
                    rsi_7 = nullptr
                else
                    while (true)
                        bool z_2
                        
                        if (rax_37 == rsi_7[1].d)
                            rsi_7[1].d = rax_37 + 1
                            z_2 = true
                        else
                            rsi_7[1].d
                            z_2 = false
                        
                        if (z_2)
                            rdx_31 = *arg1
                            break
                        
                        rax_37 = 0
                        bool z_3
                        
                        if (0 == rsi_7[1].d)
                            rsi_7[1].d = 0
                            z_3 = true
                        else
                            rax_37 = rsi_7[1].d
                            z_3 = false
                        
                        if (z_3)
                            goto label_140a8af88
            
            int64_t var_98 = rdx_31
            int64_t* var_90_1 = rsi_7
            
            if (rsi_7 != 0)
                rsi_7[1].d += 1
            
            void*** rax_39 = sub_140a5f5f0(&var_98, &var_148, &var_138)
            
            if (rsi_7 != 0)
                rsi_7[1].d -= 1
                
                if (rsi_7[1].d == 1)
                    (**rsi_7)(rsi_7)
                    int32_t rax_42 = *(rsi_7 + 0xc)
                    *(rsi_7 + 0xc) -= 1
                    
                    if (rax_42 == 1)
                        (*(*rsi_7 + 8))(rsi_7, 1)
            
            int64_t r14_5 = var_148
            
            if (r14_5 != 0)
                int64_t* rcx_39 = data_143ddb3f0
                
                if (rcx_39 == 0)
                    sub_140a750a0()
                    rcx_39 = data_143ddb3f0
                
                (*(*rcx_39 + 0x30))(rcx_39, r14_5)
            
            if (rcx_32 != 0)
                rcx_32[1].d -= 1
                
                if (rcx_32[1].d == 1)
                    (**rcx_32)(rcx_32)
                    int32_t rax_47 = *(rcx_32 + 0xc)
                    *(rcx_32 + 0xc) -= 1
                    
                    if (rax_47 == 1)
                        (*(*rcx_32 + 8))(rcx_32, 1)
            
            if (rsi_7 != 0)
                rsi_7[1].d -= 1
                
                if (rsi_7[1].d == 1)
                    (**rsi_7)(rsi_7)
                    int32_t rax_51 = *(rsi_7 + 0xc)
                    *(rsi_7 + 0xc) -= 1
                    
                    if (rax_51 == 1)
                        (*(*rsi_7 + 8))(rsi_7, 1)
            
            int64_t* var_50
            
            if (var_50 != 0)
                var_50[1].d -= 1
                
                if (var_50[1].d == 1)
                    (**var_50)(var_50)
                    int32_t rax_55 = *(var_50 + 0xc)
                    *(var_50 + 0xc) -= 1
                    
                    if (rax_55 == 1)
                        (*(*var_50 + 8))(var_50, 1)
            
            int32_t var_e0
            sub_14098dfb0(&arg1[6], &var_e0)
            void** var_d8
            void** rsi_9 = var_d8
            sub_140596d10(rsi_9, &var_198)
            rsi_9[2] = &rax_39[2]
            rsi_9[3] = rax_39
            
            if (rax_39 != 0)
                rax_39[1].d += 1
                rsi_9 = var_d8
            
            rsi_9[4].d = 0xffffffff
            void* rcx_49
            
            if (rsi_9[1].d == 0)
                rcx_49 = &data_142d40450
            else
                rcx_49 = *rsi_9
            
            int32_t rax_60 = sub_140a5ff80(rcx_49, 0)
            uint64_t* var_1c8_1
            var_1c8_1.d = var_e0
            void var_fc
            sub_140a70e20(&arg1[6], &var_fc, zx.q(rax_60), rsi_9, var_1c8_1.d, nullptr)
            void* r14_7 = rax_39[7]
            int64_t r12_3 = rax_39[6]
            
            if (r14_7 != 0)
                *(r14_7 + 8) += 1
            
            int32_t var_88
            sub_14098dfb0(&arg1[0x10], &var_88)
            int64_t* var_80
            *var_80 = r12_3
            var_80[1] = r14_7
            sub_140596d10(&var_80[2], &var_198)
            var_80[4].d = 0xffffffff
            uint32_t rcx_55 = (*var_80 u>> 4).d
            int32_t rdx_42 = rcx_55 << 8 ^ (0x9e3779b9 - rcx_55)
            int32_t r8_16 = neg.d(rcx_55 + rdx_42) ^ rdx_42 u>> 0xd
            int32_t rcx_58 = (rcx_55 - r8_16 - rdx_42) ^ r8_16 u>> 0xc
            int32_t rdx_45 = (rdx_42 - rcx_58 - r8_16) ^ rcx_58 << 0x10
            int32_t r8_19 = (r8_16 - rcx_58 - rdx_45) ^ rdx_45 u>> 5
            int32_t rcx_61 = (rcx_58 - r8_19 - rdx_45) ^ r8_19 u>> 3
            int32_t rdx_48 = (rdx_45 - rcx_61 - r8_19) ^ rcx_61 << 0xa
            var_1c8_1.d = var_88
            void var_f8
            zmm1 = sub_140a6fbb0(&arg1[0x10], &var_f8, (r8_19 - rcx_61 - rdx_48) ^ rdx_48 u>> 0xf, 
                var_80, var_1c8_1.d, nullptr)
            
            if (rax_39 != 0)
                rax_39[1].d -= 1
                
                if (rax_39[1].d == 1)
                    (**rax_39)(rax_39)
                    int32_t rax_78 = *(rax_39 + 0xc)
                    *(rax_39 + 0xc) -= 1
                    
                    if (rax_78 == 1)
                        (*rax_39)[1](rax_39, 1)
            
            uint64_t rsi_12 = var_1a8
            
            if (rsi_12 != 0)
                int64_t* rcx_65 = data_143ddb3f0
                
                if (rcx_65 == 0)
                    zmm1 = sub_140a750a0()
                    rcx_65 = data_143ddb3f0
                
                (*(*rcx_65 + 0x30))(rcx_65, rsi_12)
            
            uint64_t rsi_13 = var_198
            
            if (rsi_13 != 0)
                int64_t* rcx_66 = data_143ddb3f0
                
                if (rcx_66 == 0)
                    zmm1 = sub_140a750a0()
                    rcx_66 = data_143ddb3f0
                
                (*(*rcx_66 + 0x30))(rcx_66, rsi_13)
            
            cond:5_1 = arg_20.d + 1 s< arg_10
            arg_20.d += 1
            r14 = &arg1[4]
        while (cond:5_1)
        result = sub_140a64740(arg2, &arg1[0x1f], zmm1)

if (lpCriticalSection_1 != 0)
    result = LeaveCriticalSection(lpCriticalSection_1)

if (lpCriticalSection == 0)
    return result

return LeaveCriticalSection(lpCriticalSection)
