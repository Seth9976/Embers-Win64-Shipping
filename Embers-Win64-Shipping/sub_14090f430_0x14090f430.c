// 函数: sub_14090f430
// 地址: 0x14090f430
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void var_168
int64_t rax_1 = __security_cookie ^ &var_168
int64_t* rbx = *arg1
void* result = (*(*rbx + 0x18))(rbx)

if (result != 0)
    result = sub_140d3e170((*(*rbx + 0x20))(rbx), 0, 1)
    
    if (result.b != 0)
        int64_t* rbx_1 = *arg1
        int64_t* rsi_1 = arg1[2]
        int64_t rax_6 = (*(*rbx_1 + 0x18))(rbx_1)
        char rax_9
        
        if (rax_6 != 0)
            rax_9 = sub_140d3e170((*(*rbx_1 + 0x20))(rbx_1), 0, 1)
        
        int64_t var_140
        
        if (rax_6 == 0 || rax_9 == 0)
            var_140 = 0
        else
            var_140 = *(sub_140d3c6e0((*(*rbx_1 + 0x20))(rbx_1)) + 0x18)
        
        (*(*rsi_1 + 0x140))(rsi_1, &var_140)
        int64_t* rcx_10 = *arg1
        sub_1409ac860(rsi_1, (*(*rcx_10 + 0x48))(rcx_10), arg2)
        int64_t* rcx_12 = *arg1
        sub_14090dce0(rsi_1, (*(*rcx_12 + 0x30))(rcx_12), arg2)
        int64_t* rcx_14 = *arg1
        char rax_19 = (*(*rcx_14 + 0x38))(rcx_14)
        int64_t* rcx_15 = rsi_1[1]
        char var_148 = rax_19
        char* rdx_4 = *rcx_15
        
        if (&rdx_4[1] u> rcx_15[1])
            (*(*rsi_1 + 0x150))(rsi_1, &var_148, 1)
        else
            var_148 = *rdx_4
            *rcx_15 += 1
        
        int64_t* rcx_17 = *arg1
        sub_14090dc80(rsi_1, (*(*rcx_17 + 0x68))(rcx_17), arg2)
        int64_t* rcx_19 = *arg1
        sub_14090dc80(rsi_1, (*(*rcx_19 + 0x10))(rcx_19), arg2)
        int64_t* rcx_21 = *arg1
        void* rax_28 = (**rcx_21)(rcx_21)
        int32_t var_144 = *(rax_28 + 8) - *(rax_28 + 0x34)
        int64_t* rcx_24 = rsi_1[1]
        int32_t* rdx_8 = *rcx_24
        
        if (&rdx_8[1] u> rcx_24[1])
            int32_t* rdx_9 = &var_144
            
            if ((*(rsi_1 + 0x29) & 0x20) != 0)
                sub_140b54070(rsi_1, rdx_9, arg2)
            else
                (*(*rsi_1 + 0x150))(rsi_1, rdx_9, 4)
        else
            var_144 = *rdx_8
            *rcx_24 += 4
        
        int64_t* rcx_26 = *arg1
        void* rax_33 = (**rcx_26)(rcx_26)
        int32_t r11_1 = *(rax_33 + 0x28)
        int32_t rcx_27 = 0
        int32_t var_138_1 = 0
        int32_t var_134_1 = 1
        int32_t r8_3 = 0
        int32_t var_128_1 = 0xffffffff
        void* var_130_1 = rax_33 + 0x10
        int64_t var_124_1 = 0
        
        if (r11_1 != 0)
            void* rax_34 = *(rax_33 + 0x20)
            void* r9_1 = rax_33 + 0x10
            
            if (rax_34 != 0)
                r9_1 = rax_34
            
            int32_t temp0_1
            int32_t temp1_1
            temp0_1:temp1_1 = sx.q(r11_1 - 1)
            int32_t rdx_12 = *r9_1
            
            if (rdx_12 != 0)
            label_14090f68b:
                int32_t rax_41 = neg.d(rdx_12) & rdx_12
                uint64_t rflags_1
                int32_t temp0_2
                temp0_2, rflags_1 = _bit_scan_reverse(rax_41)
                int32_t var_134_2 = rax_41
                int32_t var_f0_1 = temp0_2
                int32_t rax_42
                
                if (rax_41 == 0)
                    rax_42 = 0x20
                else
                    rax_42 = 0x1f - temp0_2
                
                var_124_1.d = r8_3 - rax_42 + 0x1f
                
                if (r8_3 - rax_42 + 0x1f s> r11_1)
                    var_124_1.d = r11_1
            else
                while (true)
                    int64_t rdx_13 = sx.q(rcx_27)
                    r8_3 += 0x20
                    rcx_27 += 1
                    var_124_1:4.d = r8_3
                    var_138_1 = rcx_27
                    
                    if (rdx_13.d s>= (temp1_1 + (temp0_1 & 0x1f)) s>> 5)
                        break
                    
                    rdx_12 = *(r9_1 + (rdx_13 << 2) + 4)
                    int32_t var_128_2 = 0xffffffff
                    
                    if (rdx_12 != 0)
                        goto label_14090f68b
                
                var_124_1.d = r11_1
        
        int32_t rdx_14 = *(rax_33 + 0x28)
        int128_t var_110_1 = var_138_1.o
        int32_t r8_6 = rdx_14 s>> 5
        int32_t r12_1 = 0xffffffff << (rdx_14.b & 0x1f)
        int32_t r9_3 = rdx_14 & 0xffffffe0
        void* var_118_1
        var_118_1.d = r8_6
        int128_t var_100_1 = 0xffffffff
        int64_t var_c8_1 = _mm_unpackhi_pd(0xffffffff, 0xffffffff)
        arg2.o = var_110_1
        var_110_1:8.d = r12_1
        var_110_1:0xc.d = rdx_14
        var_100_1.d = r9_3
        int128_t var_e8 = rax_33.o
        int128_t var_d8_1 = arg2.o
        
        if (rdx_14 != r11_1)
            void* rax_44 = *(rax_33 + 0x20)
            void* r10_1 = rax_33 + 0x10
            
            if (rax_44 != 0)
                r10_1 = rax_44
            
            int32_t temp2_1
            int32_t temp3_1
            temp2_1:temp3_1 = sx.q(r11_1 - 1)
            int32_t rdx_18 = *(r10_1 + (sx.q(r8_6) << 2)) & r12_1
            
            if (rdx_18 != 0)
            label_14090f77d:
                int32_t rax_51 = neg.d(rdx_18) & rdx_18
                uint64_t rflags_2
                int32_t temp0_4
                temp0_4, rflags_2 = _bit_scan_reverse(rax_51)
                int32_t var_ec_1 = temp0_4
                int32_t rbx_2
                
                if (rax_51 == 0)
                    rbx_2 = 0x20
                else
                    rbx_2 = 0x1f - temp0_4
                
                var_110_1:0xc.d = r9_3 - rbx_2 + 0x1f
                
                if (r9_3 - rbx_2 + 0x1f s> r11_1)
                    var_110_1:0xc.d = r11_1
            else
                while (true)
                    int64_t rcx_32 = sx.q(r8_6)
                    r9_3 += 0x20
                    r8_6 += 1
                    var_100_1.d = r9_3
                    var_118_1.d = r8_6
                    
                    if (rcx_32.d s>= (temp3_1 + (temp2_1 & 0x1f)) s>> 5)
                        break
                    
                    rdx_18 = *(r10_1 + (rcx_32 << 2) + 4)
                    var_110_1:8.d = 0xffffffff
                    
                    if (rdx_18 != 0)
                        goto label_14090f77d
                
                var_110_1:0xc.d = r11_1
        
        while (true)
            int64_t rcx_34 = sx.q(var_d8_1:0xc.d)
            int64_t rax_53 = var_e8.q
            
            if (rcx_34.d == (var_110_1:8.q u>> 0x20).d && var_d8_1.q == rax_33 + 0x10
                    && rax_53 == rax_33)
                break
            
            void* rbx_5 = (rcx_34 << 5) + *rax_53
            (*(*rsi_1 + 0x140))(rsi_1, rbx_5)
            arg2 = sub_140a1d9d0(rsi_1, rbx_5 + 8, arg2)
            var_d8_1:8.d &= not.d(var_e8:0xc.d)
            sub_14059bdd0(&var_e8:8)
        
        int64_t* rcx_38 = *arg1
        void* rax_59 = sub_140d3c6e0((*(*rcx_38 + 0x20))(rcx_38))
        void** const var_c0 = &data_142e1d478
        void*** rax_60 = j_sub_140a82f30(0x28)
        void*** rbx_6 = rax_60
        
        if (rax_60 == 0)
            rbx_6 = nullptr
        else
            rbx_6[1] = rsi_1
            *rbx_6 = &data_142e1d4b0
            __builtin_memset(&rbx_6[2], 0, 0x18)
        
        int64_t* rax_61 = j_sub_140a82f30(0x18)
        
        if (rax_61 == 0)
            rax_61 = nullptr
        else
            rax_61[1].d = 1
            *rax_61 = &data_142d42ea8
            *(rax_61 + 0xc) = 1
            rax_61[2] = rbx_6
        
        void*** var_b8_1 = rbx_6
        int64_t* rcx_40 = *arg1
        int32_t var_a8_1 = 0
        int64_t rax_63 = (*(*rcx_40 + 0x18))(rcx_40, rbx_6, rbx_6)
        int32_t var_88 = 1
        int32_t var_84_1 = 1
        int64_t var_78_1 = 0
        void* var_68_1 = nullptr
        int512_t zmm1
        result, zmm1 = sub_1425c8670(rax_63, rax_59, &var_c0, &var_88)
        
        if (var_78_1 != 0)
            void var_58
            void* rcx_42 = &var_58
            
            if (var_68_1 != 0)
                rcx_42 = var_68_1
            
            result = (*(*rcx_42 + 0x10))(rcx_42)
        
        void** i = arg1[4]
        
        for (void* rsi_4 = &i[sx.q(arg1[5].d) * 2]; i != rsi_4; i = &i[2])
            int64_t var_a0 = arg1[2]
            void* rax_67 = arg1[3]
            void* var_98_1 = rax_67
            
            if (rax_67 != 0)
                *(rax_67 + 8) += 1
            
            result, zmm1 = sub_140912fb0(*i, &var_a0, zmm1)
        
        if (rax_61 != 0)
            rax_61[1].d -= 1
            
            if (rax_61[1].d == 1)
                result = (**rax_61)(rax_61)
                int32_t temp5_1 = *(rax_61 + 0xc)
                *(rax_61 + 0xc) -= 1
                
                if (temp5_1 == 1)
                    result = (*(*rax_61 + 8))(rax_61, 1)

__security_check_cookie(rax_1 ^ &var_168)
return result
