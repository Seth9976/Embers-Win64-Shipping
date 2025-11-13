// 函数: sub_140b3be10
// 地址: 0x140b3be10
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void var_208
int64_t rax_1 = __security_cookie ^ &var_208
char* r8 = &arg1[0x30]
int64_t var_1b0 = arg3

if (arg6 == 0)
    r8 = arg1

int64_t var_a8
sub_140b1e060(&var_a8, arg3, r8, arg5)
char var_90
char rcx_1 = var_90
char var_78
int64_t* var_a0

if (var_78 == 0 || rcx_1 != 0)
    int64_t* rsi_3 = var_a0
    int64_t r14_3 = var_a8
    int64_t* rdi_12 = rsi_3
    
    if (rsi_3 != 0)
        rsi_3[1].d += 1
        rcx_1 = var_90
        rsi_3 = var_a0
    
    if (rcx_1 != 0)
        char var_90_2 = 0
        
        if (rsi_3 != 0)
            rsi_3[1].d -= 1
            
            if (rsi_3[1].d == 1)
                (**rsi_3)(rsi_3)
                int32_t rax_90 = *(rsi_3 + 0xc)
                *(rsi_3 + 0xc) -= 1
                
                if (rax_90 == 1)
                    (*(*rsi_3 + 8))(rsi_3, 1)
    
    *arg2 = r14_3
    arg2[1] = rdi_12
    
    if (rdi_12 != 0)
        rdi_12[1].d += 1
    
    int32_t var_98
    arg2[2].d = var_98
    arg2[3].b = 1
    arg2[6].b = 0
    
    if (rdi_12 != 0)
        rdi_12[1].d -= 1
        
        if (rdi_12[1].d == 1)
            (**rdi_12)(rdi_12)
            int32_t rbx_7 = *(rdi_12 + 0xc)
            *(rdi_12 + 0xc) -= 1
            
            if (rbx_7 == 1)
                (*(*rdi_12 + 8))(rdi_12, zx.q(rbx_7))
    
    sub_140a98ff0(&var_a8)
else
    int32_t i_2
    int64_t i_3 = sx.q(i_2)
    int64_t* var_1d8
    
    if (i_3.d != 0)
        void* var_88
        void* rdx_2 = var_88
        int32_t rbx_1 = 0
        int64_t var_1e8 = 0
        int64_t var_1e0_1 = 0
        int32_t rax_6 = ((*(i_3 * 0x58 + rdx_2 - 0x10) - var_1b0) s>> 1).d + 1
        
        if (rax_6 s> 0)
            sub_1405947f0(&var_1e8, rax_6)
            i_3 = zx.q(i_2)
            rdx_2 = var_88
        
        int64_t* rax_9 = sx.q(i_3.d) * 0x58 + rdx_2
        var_1d8 = rax_9
        
        if (rdx_2 == rax_9)
        label_140b3c28a:
            arg2[3].b = 0
            sub_140596d10(&arg2[4], &var_1e8)
            int64_t rcx_34 = var_1e8
            arg2[6].b = 1
            
            if (rcx_34 != 0)
                sub_140a74f90(rcx_34)
            
            if (var_78 != 0)
                int32_t i_1 = i_2
                void* rbx_4 = var_88
                char var_78_1 = 0
                
                if (i_1 != 0)
                    int32_t i
                    
                    do
                        sub_140b0bbf0(rbx_4)
                        rbx_4 += 0x58
                        i = i_1
                        i_1 -= 1
                    while (i != 1)
                    rbx_4 = var_88
                
                if (rbx_4 != 0)
                    sub_140a74f90(rbx_4)
            
            if (var_90 != 0)
                char var_90_1 = 0
                
                if (var_a0 != 0)
                    var_a0[1].d -= 1
                    
                    if (var_a0[1].d == 1)
                        (**var_a0)(var_a0)
                        int32_t rbx_5 = *(var_a0 + 0xc)
                        *(var_a0 + 0xc) -= 1
                        
                        if (rbx_5 == 1)
                            (*(*var_a0 + 8))(var_a0, zx.q(rbx_5))
        else
            void* r15_1 = rdx_2 + 8
            
            while (true)
                sub_140b3e780()
                void* rdx_9 = r15_1 + 0x10
                
                if (((data_143de7b0c ^ *(r15_1 + 4)) | (data_143de7b04 ^ *(r15_1 - 4))
                        | (data_143de7b08 ^ *r15_1) | (*(r15_1 - 8) ^ data_143de7b00)) != 0)
                    rdx_9 = nullptr
                
                if (rdx_9 == 0)
                    sub_140b3e280()
                    void* rax_14 = r15_1 + 0x10
                    
                    if (((data_143de7b54 ^ *(r15_1 + 4)) | (data_143de7b4c ^ *(r15_1 - 4))
                            | (data_143de7b50 ^ *r15_1) | (*(r15_1 - 8) ^ data_143de7b48)) != 0)
                        rax_14 = nullptr
                    
                    if (rax_14 == 0)
                        sub_140b3e300()
                        
                        if (((data_143de7b24 ^ *(r15_1 + 4)) | (data_143de7b1c ^ *(r15_1 - 4))
                                | (data_143de7b20 ^ *r15_1) | (*(r15_1 - 8) ^ data_143de7b18)) == 0)
                            int64_t* rsi_1 = *(r15_1 + 0x10)
                            
                            if (rsi_1 != 0)
                                int32_t r10_1 = *(arg4 + 0x28)
                                int32_t var_1d0_1 = 0
                                int32_t rcx_20 = 0
                                int32_t var_1cc_1 = 1
                                int32_t r8_12 = 0
                                void* var_1c8_1 = arg4 + 0x10
                                int32_t var_1c0_1 = 0xffffffff
                                int64_t var_1bc_1 = 0
                                
                                if (r10_1 != 0)
                                    void* rax_22 = *(arg4 + 0x20)
                                    void* r9 = arg4 + 0x10
                                    
                                    if (rax_22 != 0)
                                        r9 = rax_22
                                    
                                    int32_t temp2_1
                                    int32_t temp3_1
                                    temp2_1:temp3_1 = sx.q(r10_1 - 1)
                                    int32_t rdx_14 = *r9
                                    
                                    if (rdx_14 != 0)
                                    label_140b3c0ac:
                                        int32_t rax_29 = neg.d(rdx_14) & rdx_14
                                        uint64_t rflags_1
                                        int32_t temp0_1
                                        temp0_1, rflags_1 = _bit_scan_reverse(rax_29)
                                        int32_t var_1cc_2 = rax_29
                                        int32_t var_170_1 = temp0_1
                                        int32_t rax_30
                                        
                                        if (rax_29 == 0)
                                            rax_30 = 0x20
                                        else
                                            rax_30 = 0x1f - temp0_1
                                        
                                        var_1bc_1.d = r8_12 - rax_30 + 0x1f
                                        
                                        if (r8_12 - rax_30 + 0x1f s> r10_1)
                                            var_1bc_1.d = r10_1
                                    else
                                        while (true)
                                            int64_t rdx_15 = sx.q(rcx_20)
                                            r8_12 += 0x20
                                            rcx_20 += 1
                                            var_1bc_1:4.d = r8_12
                                            var_1d0_1 = rcx_20
                                            
                                            if (rdx_15.d s>= (temp3_1 + (temp2_1 & 0x1f)) s>> 5)
                                                break
                                            
                                            rdx_14 = *(r9 + (rdx_15 << 2) + 4)
                                            int32_t var_1c0_2 = 0xffffffff
                                            
                                            if (rdx_14 != 0)
                                                goto label_140b3c0ac
                                        
                                        var_1bc_1.d = r10_1
                                
                                int32_t rdx_16 = *(arg4 + 0x28)
                                int128_t var_190_1 = var_1d0_1.o
                                int32_t r8_15 = rdx_16 s>> 5
                                int32_t rdi_2 = 0xffffffff << (rdx_16.b & 0x1f)
                                int32_t r9_2 = rdx_16 & 0xffffffe0
                                void* var_198_1
                                var_198_1.d = r8_15
                                int128_t var_180_1 = 0xffffffff
                                int64_t var_140_1 = _mm_unpackhi_pd(0xffffffff, 0xffffffff).q
                                int128_t zmm1 = var_190_1
                                var_190_1:8.d = rdi_2
                                var_190_1:0xc.d = rdx_16
                                var_180_1.d = r9_2
                                int128_t var_160 = arg4.o
                                int128_t var_150_1 = zmm1
                                
                                if (rdx_16 != r10_1)
                                    void* rax_32 = *(arg4 + 0x20)
                                    void* r11_1 = arg4 + 0x10
                                    
                                    if (rax_32 != 0)
                                        r11_1 = rax_32
                                    
                                    int32_t temp4_1
                                    int32_t temp5_1
                                    temp4_1:temp5_1 = sx.q(r10_1 - 1)
                                    int32_t rdx_20 = *(r11_1 + (sx.q(r8_15) << 2)) & rdi_2
                                    
                                    if (rdx_20 != 0)
                                    label_140b3c19b:
                                        int32_t rax_39 = neg.d(rdx_20) & rdx_20
                                        uint64_t rflags_2
                                        int32_t temp0_3
                                        temp0_3, rflags_2 = _bit_scan_reverse(rax_39)
                                        int32_t var_16c_1 = temp0_3
                                        int32_t rax_40
                                        
                                        if (rax_39 == 0)
                                            rax_40 = 0x20
                                        else
                                            rax_40 = 0x1f - temp0_3
                                        
                                        var_190_1:0xc.d = r9_2 - rax_40 + 0x1f
                                        
                                        if (r9_2 - rax_40 + 0x1f s> r10_1)
                                            var_190_1:0xc.d = r10_1
                                    else
                                        while (true)
                                            int64_t rcx_25 = sx.q(r8_15)
                                            r9_2 += 0x20
                                            r8_15 += 1
                                            var_180_1.d = r9_2
                                            var_198_1.d = r8_15
                                            
                                            if (rcx_25.d s>= (temp5_1 + (temp4_1 & 0x1f)) s>> 5)
                                                break
                                            
                                            rdx_20 = *(r11_1 + (rcx_25 << 2) + 4)
                                            var_190_1:8.d = 0xffffffff
                                            
                                            if (rdx_20 != 0)
                                                goto label_140b3c19b
                                        
                                        var_190_1:0xc.d = r10_1
                                
                                int64_t* rbx_3
                                
                                while (true)
                                    int64_t rax_42 = sx.q(var_150_1:0xc.d)
                                    int64_t rcx_27 = var_160.q
                                    
                                    if (rax_42.d == (var_190_1:8.q u>> 0x20).d
                                            && var_150_1.q == arg4 + 0x10 && rcx_27 == arg4)
                                        goto label_140b3c24b
                                    
                                    int64_t r8_16 = sx.q(rsi_1[6].d)
                                    rbx_3 = rax_42 * 0x38 + *rcx_27
                                    int32_t rcx_28 = rbx_3[1].d
                                    int32_t rax_43 = rcx_28 - 1
                                    
                                    if (rcx_28 == 0)
                                        rax_43 = 0
                                    
                                    if (rax_43 == r8_16.d)
                                        int16_t* rdx_21
                                        
                                        if (rcx_28 == 0)
                                            rdx_21 = &data_142d40450
                                        else
                                            rdx_21 = *rbx_3
                                        
                                        if (sub_140a546e0(*rsi_1, rdx_21, r8_16) == 0)
                                            break
                                    
                                    var_150_1:8.d &= not.d(var_160:0xc.d)
                                    sub_14059bdd0(&var_160:8)
                                
                                if (rbx_3 == -0x10)
                                label_140b3c24b:
                                    
                                    if (arg6 != 0)
                                        int64_t var_110
                                        void var_c0
                                        int64_t* rax_52 =
                                            sub_140aae2f0(&var_c0, sub_140b1b350(rsi_1, &var_110))
                                        void var_e8
                                        char* var_d0
                                        char** rax_54 = sub_140a96390(&var_d0, 
                                            _vfprintf_p_l(&var_e8, Undefined format token: {0}", 
                                            StringFormatter"))
                                        int64_t rcx_43 = *rax_52
                                        int64_t* rcx_44 = rax_52[1]
                                        int32_t var_70_1 = 4
                                        
                                        if (rcx_44 != 0)
                                            rcx_44[1].d += 1
                                        
                                        int32_t rcx_45 = rax_52[2].d
                                        char var_48_1 = 1
                                        int32_t* var_1a8 = nullptr
                                        int32_t var_1a0_1 = 1
                                        sub_1405a4b40(&var_1a8, 1, 0)
                                        int32_t* rcx_47 = var_1a8
                                        *rcx_47 = var_70_1
                                        int64_t var_68
                                        *(rcx_47 + 8) = var_68
                                        *(rcx_47 + 8) = var_68
                                        rcx_47[2] = var_68.d
                                        *(rcx_47 + 8) = var_68
                                        rcx_47[0xa].b = 0
                                        
                                        if (var_48_1 != 0)
                                            *(rcx_47 + 0x10) = rcx_43
                                            *(rcx_47 + 0x18) = rcx_44
                                            
                                            if (rcx_44 != 0)
                                                rcx_44[1].d += 1
                                            
                                            rcx_47[8] = rcx_45
                                            rcx_47[0xa].b = 1
                                        
                                        char* var_120 = *rax_54
                                        void* rax_62 = rax_54[1]
                                        void* var_118_1 = rax_62
                                        
                                        if (rax_62 != 0)
                                            *(rax_62 + 8) += 1
                                        
                                        void var_100
                                        int64_t* rax_63 =
                                            sub_140aac870(&var_100, &var_120, &var_1a8)
                                        int64_t var_138 = *rax_63
                                        int64_t* rcx_50 = rax_63[1]
                                        
                                        if (rcx_50 != 0)
                                            rcx_50[1].d += 1
                                        
                                        int32_t var_128_1 = rax_63[2].d
                                        int64_t* var_f8
                                        
                                        if (var_f8 != 0)
                                            var_f8[1].d -= 1
                                            
                                            if (var_f8[1].d == 1)
                                                (**var_f8)(var_f8)
                                                int32_t rax_67 = *(var_f8 + 0xc)
                                                *(var_f8 + 0xc) -= 1
                                                
                                                if (rax_67 == 1)
                                                    (*(*var_f8 + 8))(var_f8, 1)
                                        
                                        sub_140596f50(&var_1a8)
                                        
                                        if (var_48_1 != 0)
                                            char var_48_2 = 0
                                            
                                            if (rcx_44 != 0)
                                                rcx_44[1].d -= 1
                                                
                                                if (rcx_44[1].d == 1)
                                                    (**rcx_44)(rcx_44)
                                                    int32_t rax_71 = *(rcx_44 + 0xc)
                                                    *(rcx_44 + 0xc) -= 1
                                                    
                                                    if (rax_71 == 1)
                                                        (*(*rcx_44 + 8))(rcx_44, 1)
                                        
                                        int64_t* rdi_8 = rax_54[1]
                                        
                                        if (rdi_8 != 0)
                                            rdi_8[1].d -= 1
                                            
                                            if (rdi_8[1].d == 1)
                                                (**rdi_8)(rdi_8)
                                                int32_t rax_75 = *(rdi_8 + 0xc)
                                                *(rdi_8 + 0xc) -= 1
                                                
                                                if (rax_75 == 1)
                                                    (*(*rdi_8 + 8))(rdi_8, 1)
                                        
                                        int64_t* rdi_9 = rax_52[1]
                                        
                                        if (rdi_9 != 0)
                                            rdi_9[1].d -= 1
                                            
                                            if (rdi_9[1].d == 1)
                                                (**rdi_9)(rdi_9)
                                                int32_t rax_79 = *(rdi_9 + 0xc)
                                                *(rdi_9 + 0xc) -= 1
                                                
                                                if (rax_79 == 1)
                                                    (*(*rdi_9 + 8))(rdi_9, 1)
                                        
                                        int64_t* var_168 = &var_138
                                        sub_140b2b3b0(arg2, &var_168)
                                        
                                        if (rcx_50 != 0)
                                            rcx_50[1].d -= 1
                                            
                                            if (rcx_50[1].d == 1)
                                                (**rcx_50)(rcx_50)
                                                int32_t rax_83 = *(rcx_50 + 0xc)
                                                *(rcx_50 + 0xc) -= 1
                                                
                                                if (rax_83 == 1)
                                                    (*(*rcx_50 + 8))(rcx_50, 1)
                                        
                                        int64_t* var_e0
                                        
                                        if (var_e0 != 0)
                                            var_e0[1].d -= 1
                                            
                                            if (var_e0[1].d == 1)
                                                (**var_e0)(var_e0)
                                                int32_t rbx_6 = *(var_e0 + 0xc)
                                                *(var_e0 + 0xc) -= 1
                                                
                                                if (rbx_6 == 1)
                                                    (*(*var_e0 + 8))(var_e0, zx.q(rbx_6))
                                        
                                        int64_t rcx_65 = var_110
                                        
                                        if (rcx_65 != 0)
                                            sub_140a74f90(rcx_65)
                                        
                                        int64_t rcx_66 = var_1e8
                                        
                                        if (rcx_66 != 0)
                                            sub_140a74f90(rcx_66)
                                        
                                        break
                                    
                                    int64_t rdx_23 = rsi_1[3]
                                    sub_140a20ba0(&var_1e8, rdx_23, ((rsi_1[4] - rdx_23) s>> 1).d)
                                else
                                    sub_140b33360(&rbx_3[2], &var_1e8)
                                
                                rbx_1 = 0
                    else
                        int16_t rdi_1 = *rax_14
                        
                        if (rdi_1 != 0)
                            int32_t rdx_11 = var_1e0_1.d
                            
                            if (rdx_11 s> 0)
                                rbx_1 = rdx_11 - 1
                            
                            int32_t rax_15
                            rax_15.b = rdx_11 s<= 0
                            int32_t rax_17 = rax_15 + 1 + rdx_11
                            var_1e0_1.d = rax_17
                            
                            if (rax_17 s> var_1e0_1:4.d)
                                sub_140594770(&var_1e8)
                            
                            int64_t rcx_15 = sx.q(rbx_1)
                            rbx_1 = 0
                            *(var_1e8 + (rcx_15 << 1)) = rdi_1
                            *(var_1e8 + (rcx_15 << 1) + 2) = 0
                else
                    sub_140a20ba0(&var_1e8, *rdx_9, *(rdx_9 + 0x18))
                
                r15_1 += 0x58
                
                if (r15_1 - 8 == var_1d8)
                    goto label_140b3c28a
            
            sub_140a98ff0(&var_a8)
    else
        var_1d8 = &var_1b0
        sub_140b2b2d0(arg2, &var_1d8)
        sub_140a98ff0(&var_a8)
__security_check_cookie(rax_1 ^ &var_208)
return arg2
