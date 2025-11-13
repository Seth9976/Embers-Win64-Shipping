// 函数: sub_1418a63a0
// 地址: 0x1418a63a0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void var_1a8
int64_t rax_1 = __security_cookie ^ &var_1a8
int64_t* rcx = *arg3
int32_t result

if ((*(*rcx + 0x10))(rcx) == 0)
    int64_t* rcx_42 = *arg3
    int32_t rax_59 = (*(*rcx_42 + 0x18))(rcx_42) - 0x190
    int32_t rcx_43
    
    if (rax_59 u> 0x63)
        rcx_43 = *(arg1 + 0xac)
    
    if (rax_59 u<= 0x63 || rcx_43 s>= arg1[0x14].d)
        arg1[0x20] = data_1439c6830
        result = sub_1418ac760(arg1, arg2, arg5, arg4)
    else
        int32_t rax_61 = arg1[0x15].d + rcx_43 + 1
        *(arg1 + 0xac) = rcx_43 + 1
        int32_t temp1_2 = mods.dp.d(sx.q(rax_61), arg1[6].d)
        arg1[0x15].d = temp1_2
        int32_t rax_63 = arg1[0x13].d
        int64_t* rcx_47 = (sx.q(temp1_2) << 4) + arg1[5]
        int32_t rdi_3 = rax_63 - 1
        
        if (rax_63 == 0)
            rdi_3 = 0
        
        int32_t rax_65
        
        if (rcx_47[1].d == 0)
            rax_65 = 2
        
        if (rcx_47[1].d != 0 || rdi_3 == 0xffffffff)
            rax_65 = 1
        
        int64_t var_158 = 0
        int32_t rdx_26 = rdi_3 + rax_65
        int32_t rbx_8 = rcx_47[1].d
        int64_t r15_3 = *rcx_47
        int32_t var_150_1 = rbx_8
        
        if (rbx_8 != 0 || rdx_26 != 0)
            sub_1405a4c70(&var_158, rdx_26 + rbx_8, 0)
            memcpy(var_158, r15_3, rbx_8 * 2)
        else
            int32_t var_14c_1 = 0
        
        sub_140a2cf70(&var_158, arg1[0x12], rdi_3)
        int64_t* rcx_51 = arg1[8]
        result = (*(*rcx_51 + 8))(rcx_51, &var_158, &arg1[0x18], &arg1[0x16])
        int64_t rcx_52 = var_158
        
        if (rcx_52 != 0)
            result = sub_140a74f90(rcx_52)
else
    int128_t var_188 = zx.o(0)
    void*** rax_4 = j_sub_140a82f30(0x2b8)
    void*** rbx_1
    
    if (rax_4 == 0)
        rbx_1 = nullptr
    else
        void*** rax_5
        rax_5, arg2 = sub_14181e1b0(rax_4)
        rbx_1 = rax_5
    
    void*** rax_6 = j_sub_140a82f30(0x18)
    
    if (rax_6 == 0)
        rax_6 = nullptr
    else
        rax_6[1].d = 1
        *rax_6 = &data_142d42ea8
        *(rax_6 + 0xc) = 1
        rax_6[2] = rbx_1
    
    void*** var_178 = rbx_1
    int64_t* rcx_2 = *arg3
    void*** rdi_1 = var_178
    
    if ((*rdi_1)[0x28](rdi_1, (*(*rcx_2 + 0x20))(rcx_2, rbx_1, rbx_1)) == 0)
        arg1[0x20] = data_1439c6838
    else
        void*** rcx_4 = var_178
        int64_t var_98
        __builtin_memset(&var_98, 0, 0x2c)
        int32_t var_6c_1 = 0x80
        int32_t var_68_1 = 0xffffffff
        int32_t var_64_1 = 0
        int64_t var_58_1 = 0
        int32_t var_50_1 = 0
        (*rcx_4)[0x33](rcx_4, &var_98)
        int64_t var_88
        int64_t* var_140_1 = &var_88
        int32_t rcx_5 = 0
        int32_t var_148_1 = 0
        int32_t var_138_1 = 0xffffffff
        int32_t r8_1 = 0
        int32_t var_144_1 = 1
        int64_t var_134_1 = 0
        int64_t* var_78
        int32_t var_70
        
        if (var_70 != 0)
            int64_t* r10_1 = &var_88
            
            if (var_78 != 0)
                r10_1 = var_78
            
            int32_t temp8_1
            int32_t temp9_1
            temp8_1:temp9_1 = sx.q(var_70 - 1)
            int32_t rdx_6 = *r10_1
            
            if (rdx_6 != 0)
            label_1418a6548:
                int32_t rax_18 = neg.d(rdx_6) & rdx_6
                uint64_t rflags_1
                int32_t temp0_1
                temp0_1, rflags_1 = _bit_scan_reverse(rax_18)
                int32_t var_144_2 = rax_18
                int32_t var_128_1 = temp0_1
                int32_t rax_19
                
                if (rax_18 == 0)
                    rax_19 = 0x20
                else
                    rax_19 = 0x1f - temp0_1
                
                int32_t rax_20 = r8_1 - rax_19 + 0x1f
                
                if (rax_20 s> var_70)
                    rax_20 = var_70
                
                var_134_1.d = rax_20
            else
                while (true)
                    int64_t rdx_7 = sx.q(rcx_5)
                    r8_1 += 0x20
                    rcx_5 += 1
                    var_134_1:4.d = r8_1
                    var_148_1 = rcx_5
                    
                    if (rdx_7.d s>= (temp9_1 + (temp8_1 & 0x1f)) s>> 5)
                        var_134_1.d = var_70
                        break
                    
                    rdx_6 = *(r10_1 + (rdx_7 << 2) + 4)
                    int32_t var_138_2 = 0xffffffff
                    
                    if (rdx_6 != 0)
                        goto label_1418a6548
        
        int128_t var_e0_1 = 0xffffffff
        int128_t var_f0_1
        var_f0_1:8.d = 0xffffffff << (var_70.b & 0x1f)
        var_f0_1:0xc.d = var_70
        arg5 = _mm_unpackhi_pd(0xffffffff, 0xffffffff).q
        int128_t var_120 = (&var_98).o
        int128_t var_110_1 = var_148_1.o
        int64_t var_100_1 = arg5
        
        while (true)
            int64_t rax_21 = sx.q(var_110_1:0xc.d)
            int64_t* rdx_8 = var_120.q
            
            if (rax_21.d != (var_f0_1:8.q u>> 0x20).d || var_110_1.q != &var_88 || rdx_8 != &var_98)
                int64_t r15_1 = *rdx_8 + rax_21 * 0x18
                int64_t* rcx_10 = arg1[3]
                int64_t rax_24 = (*(*rcx_10 + 0x1c8))(rcx_10, r15_1)
                void*** rcx_11 = var_178
                void** r8_3 = *rcx_11
                
                if (rax_24 != 0 && r8_3[0x39](rcx_11, r15_1, r8_3) != 0)
                    int64_t* rcx_12 = arg1[3]
                    int64_t var_c0
                    __builtin_memset(&var_c0, 0, 0x28)
                    (*(*rcx_12 + 0x1f0))(rcx_12, r15_1, &var_c0)
                    void*** rcx_13 = var_178
                    int64_t var_ac
                    (*rcx_13)[0x3e](rcx_13, r15_1, &var_ac)
                    int64_t var_b8
                    int32_t var_b0
                    int64_t var_a4
                    int32_t var_9c
                    
                    if (var_c0 == var_ac && var_b8 == var_a4 && var_b0 == var_9c)
                        var_110_1:8.d &= not.d(var_120:0xc.d)
                        sub_14059bdd0(&var_120:8)
                        continue
            else
                void* var_d0
                void** rax_33 = sub_141844320(&var_d0, &arg1[3], &var_178)
                
                if (&var_188 != rax_33)
                    var_188.q = *rax_33
                    *rax_33 = nullptr
                    sub_1405aeff0(&var_188:8, &rax_33[1])
                
                int64_t* var_c8
                
                if (var_c8 != 0)
                    var_c8[1].d -= 1
                    
                    if (var_c8[1].d == 1)
                        (**var_c8)(var_c8)
                        int32_t rax_36 = *(var_c8 + 0xc)
                        *(var_c8 + 0xc) -= 1
                        
                        if (rax_36 == 1)
                            (*(*var_c8 + 8))(var_c8, 1)
                
                if (var_188.q != 0)
                    break
            
            arg1[0x20] = data_1439c6840
            break
        
        int32_t var_50_2 = 0
        
        if (var_58_1 != 0)
            sub_140a74f90(var_58_1)
        
        arg2 = sub_14059ad90(&var_98, 0)
        
        if (var_78 != 0)
            arg2 = sub_140a74f90(var_78)
        
        int64_t rcx_23 = var_98
        
        if (rcx_23 != 0)
            arg2 = sub_140a74f90(rcx_23)
    
    int64_t* rcx_24 = *arg3
    int64_t rax_40 = *rcx_24
    
    if (var_188.q == 0)
        int32_t rax_45 = (*(rax_40 + 0x18))(rcx_24) - 0x190
        int32_t rcx_26
        
        if (rax_45 u> 0x63)
            rcx_26 = *(arg1 + 0xac)
        
        if (rax_45 u<= 0x63 || rcx_26 s>= arg1[0x14].d)
            result = sub_1418ac760(arg1, arg2, arg5, arg4)
        else
            int32_t rax_47 = arg1[0x15].d + rcx_26 + 1
            *(arg1 + 0xac) = rcx_26 + 1
            int32_t temp1_1 = mods.dp.d(sx.q(rax_47), arg1[6].d)
            arg1[0x15].d = temp1_1
            int32_t rax_49 = arg1[0x13].d
            int64_t* rcx_30 = (sx.q(temp1_1) << 4) + arg1[5]
            int32_t r15_2 = rax_49 - 1
            
            if (rax_49 == 0)
                r15_2 = 0
            
            int32_t rax_51
            
            if (rcx_30[1].d == 0)
                rax_51 = 2
            
            if (rcx_30[1].d != 0 || r15_2 == 0xffffffff)
                rax_51 = 1
            
            int64_t var_168 = 0
            int32_t rdx_18 = r15_2 + rax_51
            int32_t rbx_5 = rcx_30[1].d
            int64_t r12_3 = *rcx_30
            int32_t var_160_1 = rbx_5
            
            if (rbx_5 != 0 || rdx_18 != 0)
                sub_1405a4c70(&var_168, rdx_18 + rbx_5, 0)
                memcpy(var_168, r12_3, rbx_5 * 2)
            else
                int32_t var_15c_1 = 0
            
            sub_140a2cf70(&var_168, arg1[0x12], r15_2)
            int64_t* rcx_34 = arg1[8]
            result = (*(*rcx_34 + 8))(rcx_34, &var_168, &arg1[0x18], &arg1[0x16])
            int64_t rcx_35 = var_168
            
            if (rcx_35 != 0)
                result = sub_140a74f90(rcx_35)
    else
        int32_t rax_42 = *((*(rax_40 + 0x20))(rcx_24) + 8)
        arg1[0x1f].d
        arg1[0x1f].d = rax_42
        result = sub_1418acac0(arg1, &var_188, arg5, arg4, arg2)
    
    if (rax_6 != 0)
        result = rax_6[1].d
        rax_6[1].d -= 1
        
        if (result == 1)
            (**rax_6)(rax_6)
            result = *(rax_6 + 0xc)
            *(rax_6 + 0xc) -= 1
            
            if (result == 1)
                result = (*rax_6)[1](rax_6, 1)
    
    void* rcx_39 = var_188:8.q
    
    if (rcx_39 != 0)
        result = *(rcx_39 + 8)
        *(rcx_39 + 8) -= 1
        
        if (result == 1)
            int64_t* rbx_7 = var_188:8.q
            result = (**rbx_7)(rbx_7)
            int32_t rdi_2 = *(rbx_7 + 0xc)
            *(rbx_7 + 0xc) -= 1
            
            if (rdi_2 == 1)
                int64_t* rcx_41 = var_188:8.q
                result = (*(*rcx_41 + 8))(rcx_41, zx.q(rdi_2))

__security_check_cookie(rax_1 ^ &var_1a8)
return result
