// 函数: sub_140614230
// 地址: 0x140614230
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

char* rbx
char* arg_10 = rbx
void var_d8
int64_t rax_1 = __security_cookie ^ &var_d8
data_143cda918 = zx.o(0)
void** rax_2 = *(arg1 + 0x20)
int64_t r12 = sx.q(*(arg1 + 4))
int32_t rdi = 0
int32_t var_b8 = 0

if (r12.d s< rax_2[2].d)
    int64_t r15_1 = r12
    
    while (true)
        if (rax_2[2] u<= r15_1)
        label_1406148c6:
            sub_14058b100()
            noreturn
        
        if (rax_2[3] u>= 0x10)
            rax_2 = *rax_2
        
        char rsi_1 = *(r15_1 + rax_2)
        int32_t rdi_1 = rdi | 1
        char var_b0
        void* var_90
        char var_70
        char var_50
        
        if (sub_140611e90(&var_90, rsi_1)[2] == 0)
            rbx.b = 0
        else
            rdi_1 |= 2
            int64_t* rax_4 = sub_140611e90(&var_50, rsi_1)
            int64_t rcx_2 = rax_4[2]
            
            if (rax_4[3] u>= 0x10)
                rax_4 = *rax_4
            
            if (rcx_2 != 4 || *rax_4 != 0x706f7473)
                rdi_1 |= 4
                int64_t* rax_5 = sub_140611e90(&var_70, rsi_1)
                int64_t rcx_4 = rax_5[2]
                
                if (rax_5[3] u>= 0x10)
                    rax_5 = *rax_5
                
                if (rcx_4 != 3 || *rax_5 != 0x6f6d || *(rax_5 + 2) != 0x64)
                    rdi_1 |= 8
                    int64_t* rax_6 = sub_140611e90(&var_b0, rsi_1)
                    int64_t rcx_6 = rax_6[2]
                    
                    if (rax_6[3] u>= 0x10)
                        rax_6 = *rax_6
                    
                    if (rcx_6 != 3 || *rax_6 != 0x6176 || *(rax_6 + 2) != 0x6c)
                        rbx.b = 1
                    else
                        rbx.b = 0
                else
                    rbx.b = 0
            else
                rbx.b = 0
        
        if ((rdi_1.b & 8) == 0)
            goto label_1406143ac
        
        rdi_1 &= 0xfffffff7
        int64_t var_98
        
        if (var_98 u< 0x10)
            goto label_14061439c
        
        void* rcx_7 = var_b0.q
        void* rax_7 = rcx_7
        
        if (var_98 + 1 u>= 0x1000)
            rcx_7 = *(rcx_7 - 8)
        
        if (var_98 + 1 u< 0x1000 || rax_7 - rcx_7 - 8 u<= 0x1f)
            j_sub_140a74f90(rcx_7)
        label_14061439c:
            int64_t var_a0_1 = 0
            var_98 = 0xf
            var_b0 = 0
        label_1406143ac:
            
            if ((rdi_1.b & 4) == 0)
                goto label_140614400
            
            rdi_1 &= 0xfffffffb
            int64_t var_58
            
            if (var_58 u< 0x10)
                goto label_1406143f0
            
            void* rcx_8 = var_70.q
            void* rax_10 = rcx_8
            
            if (var_58 + 1 u>= 0x1000)
                rcx_8 = *(rcx_8 - 8)
            
            if (var_58 + 1 u< 0x1000 || rax_10 - rcx_8 - 8 u<= 0x1f)
                j_sub_140a74f90(rcx_8)
            label_1406143f0:
                int64_t var_60_1 = 0
                var_58 = 0xf
                var_70 = 0
            label_140614400:
                
                if ((rdi_1.b & 2) == 0)
                    goto label_140614458
                
                rdi_1 &= 0xfffffffd
                int64_t var_38
                
                if (var_38 u< 0x10)
                    goto label_140614444
                
                void* rcx_9 = var_50.q
                void* rax_13 = rcx_9
                
                if (var_38 + 1 u>= 0x1000)
                    rcx_9 = *(rcx_9 - 8)
                
                if (var_38 + 1 u< 0x1000 || rax_13 - rcx_9 - 8 u<= 0x1f)
                    j_sub_140a74f90(rcx_9)
                label_140614444:
                    int64_t var_40_1 = 0
                    var_38 = 0xf
                    var_50 = 0
                label_140614458:
                    rdi = rdi_1 & 0xfffffffe
                    int64_t var_78
                    
                    if (var_78 u< 0x10)
                        goto label_140614492
                    
                    void* rcx_10 = var_90
                    void* rax_16 = rcx_10
                    
                    if (var_78 + 1 u>= 0x1000)
                        rcx_10 = *(rcx_10 - 8)
                    
                    if (var_78 + 1 u< 0x1000 || rax_16 - rcx_10 - 8 u<= 0x1f)
                        j_sub_140a74f90(rcx_10)
                    label_140614492:
                        
                        if (rbx.b != 0)
                            break
                        
                        int64_t* rax_19 = sub_140611e90(&var_90, rsi_1)
                        int64_t rcx_12 = rax_19[2]
                        
                        if (rax_19[3] u>= 0x10)
                            rax_19 = *rax_19
                        
                        if (rcx_12 != 3 || *rax_19 != 0x6176 || *(rax_19 + 2) != 0x6c)
                            rbx.b = 0
                        else
                            rbx.b = 1
                        
                        if (var_78 u>= 0x10)
                            void* rcx_13 = var_90
                            void* rax_20 = rcx_13
                            
                            if (var_78 + 1 u>= 0x1000)
                                rcx_13 = *(rcx_13 - 8)
                                
                                if (rax_20 - rcx_13 - 8 u> 0x1f)
                                    _invalid_parameter_noinfo_noreturn()
                                    noreturn
                            
                            j_sub_140a74f90(rcx_13)
                        
                        if (rbx.b == 0)
                            int64_t* rax_38 = sub_140611e90(&var_90, rsi_1)
                            int64_t rcx_25 = rax_38[2]
                            
                            if (rax_38[3] u>= 0x10)
                                rax_38 = *rax_38
                            
                            if (rcx_25 != 3 || *rax_38 != 0x6f6d || *(rax_38 + 2) != 0x64)
                                rbx.b = 0
                            else
                                rbx.b = 1
                            
                            if (var_78 u>= 0x10)
                                void* rcx_26 = var_90
                                void* rax_39 = rcx_26
                                
                                if (var_78 + 1 u>= 0x1000)
                                    rcx_26 = *(rcx_26 - 8)
                                    
                                    if (rax_39 - rcx_26 - 8 u> 0x1f)
                                        _invalid_parameter_noinfo_noreturn()
                                        noreturn
                                
                                j_sub_140a74f90(rcx_26)
                            
                            if (rbx.b == 0)
                                int64_t* rax_43 = sub_140611e90(&var_90, rsi_1)
                                int64_t rcx_28 = rax_43[2]
                                
                                if (rax_43[3] u>= 0x10)
                                    rax_43 = *rax_43
                                
                                if (rcx_28 != 4 || *rax_43 != 0x706f7473)
                                    rbx.b = 0
                                else
                                    rbx.b = 1
                                
                                if (var_78 u>= 0x10)
                                    void* rcx_29 = var_90
                                    void* rax_44 = rcx_29
                                    
                                    if (var_78 + 1 u>= 0x1000)
                                        rcx_29 = *(rcx_29 - 8)
                                        
                                        if (rax_44 - rcx_29 - 8 u> 0x1f)
                                            _invalid_parameter_noinfo_noreturn()
                                            noreturn
                                    
                                    j_sub_140a74f90(rcx_29)
                                
                                int32_t rax_47 = data_143cda918:8.d
                                
                                if (rbx.b != 0)
                                    rax_47 = 1
                                
                                data_143cda918:8.d = rax_47
                            else if (((rsi_1 - 0x23) & 0xf7) == 0)
                                data_143cda918:4.d = 1
                            else if (rsi_1 != 0x26)
                                data_143cda918:4.d = 0xffffffff
                            else
                                data_143cda918:0xc.d = 1
                        else
                            int64_t r14_1 = 0xf
                            int64_t var_a0_2 = 0
                            var_98 = 0xf
                            var_b0 = 0
                            
                            while (true)
                                void** rax_23 = *(arg1 + 0x20)
                                
                                if (r12.d s>= rax_23[2].d)
                                    rbx.b = 0
                                else
                                    rdi |= 0x10
                                    
                                    if (rax_23[2] u<= r15_1)
                                        sub_14058b100()
                                        noreturn
                                    
                                    if (rax_23[3] u>= 0x10)
                                        rax_23 = *rax_23
                                    
                                    int64_t* rax_24 = sub_140611e90(&var_90, *(r15_1 + rax_23))
                                    int64_t rcx_15 = rax_24[2]
                                    
                                    if (rax_24[3] u>= 0x10)
                                        rax_24 = *rax_24
                                    
                                    if (rcx_15 != 3 || *rax_24 != 0x6176 || *(rax_24 + 2) != 0x6c)
                                        rbx.b = 0
                                    else
                                        rbx.b = 1
                                
                                if ((rdi.b & 0x10) != 0)
                                    rdi &= 0xffffffef
                                    
                                    if (var_78 u>= 0x10)
                                        void* rcx_16 = var_90
                                        void* rax_25 = rcx_16
                                        
                                        if (var_78 + 1 u>= 0x1000)
                                            rcx_16 = *(rcx_16 - 8)
                                            
                                            if (rax_25 - rcx_16 - 8 u> 0x1f)
                                                _invalid_parameter_noinfo_noreturn()
                                                noreturn
                                        
                                        j_sub_140a74f90(rcx_16)
                                
                                if (rbx.b == 0)
                                    char* rsi_2 = var_b0.q
                                    rbx = &var_b0
                                    r12 = zx.q(r12.d - 1)
                                    r15_1 -= 1
                                    
                                    if (r14_1 u>= 0x10)
                                        rbx = rsi_2
                                    
                                    uint64_t r9_2 = 0
                                    void* rdx_19 = nullptr
                                    int32_t r11_1 = 0
                                    int32_t r8_1 = 0
                                    char* r10_1 = rbx
                                    char rcx_20 = *rbx
                                    
                                    if (rcx_20 == 0)
                                    label_1406146a7:
                                        char i = *(rdx_19 + rbx)
                                        void* r8_2 = rdx_19 + rbx
                                        
                                        if (i s>= 0x30)
                                            while (i u<= 0x39)
                                                r8_2 += 1
                                                r9_2 = zx.q(zx.d(i) + (((r9_2 * 5).d - 0x18) << 1))
                                                i = *r8_2
                                                
                                                if (i s< 0x30)
                                                    break
                                        
                                        if (r11_1 != 0)
                                            r9_2 = zx.q(neg.d(r9_2.d))
                                    else
                                        while (true)
                                            if (rcx_20 - 0x30 u> 9)
                                                if (rcx_20 == 0x20)
                                                    rdx_19 += 1
                                                else if (rcx_20 == 0x2b)
                                                    r11_1 = 0
                                                label_14061468e:
                                                    int32_t rax_32 = r8_1
                                                    rdx_19 += 1
                                                    r8_1 += 1
                                                    
                                                    if (rax_32 s> 0)
                                                        break
                                                else if (rcx_20 == 0x2d)
                                                    r11_1 = 1
                                                    goto label_14061468e
                                            
                                            rcx_20 = r10_1[1]
                                            r10_1 = &r10_1[1]
                                            
                                            if (rcx_20 == 0)
                                                goto label_1406146a7
                                    
                                    data_143cda918.d = r9_2.d
                                    
                                    if (r14_1 u>= 0x10)
                                        char* rax_34 = rsi_2
                                        
                                        if (r14_1 + 1 u>= 0x1000)
                                            rsi_2 = *(rsi_2 - 8)
                                            
                                            if (rax_34 - rsi_2 - 8 u> 0x1f)
                                                _invalid_parameter_noinfo_noreturn()
                                                noreturn
                                        
                                        j_sub_140a74f90(rsi_2)
                                    
                                    break
                                
                                char* rax_28 = *(arg1 + 0x20)
                                int64_t rcx_17 = r15_1
                                r12 = zx.q(r12.d + 1)
                                r15_1 += 1
                                
                                if (*(rax_28 + 0x10) u<= rcx_17)
                                    goto label_1406148c6
                                
                                if (*(rax_28 + 0x18) u>= 0x10)
                                    rax_28 = *rax_28
                                
                                char r9_1 = rax_28[rcx_17]
                                int64_t rcx_18 = var_a0_2
                                
                                if (rcx_18 u>= r14_1)
                                    sub_14058b730(&var_b0, 1, 0, r9_1)
                                    r14_1 = var_98
                                else
                                    var_a0_2 = rcx_18 + 1
                                    char* rax_30 = &var_b0
                                    
                                    if (r14_1 u>= 0x10)
                                        rax_30 = var_b0.q
                                    
                                    rax_30[rcx_18] = r9_1
                                    rax_30[rcx_18 + 1] = 0
                                    r14_1 = var_98
                        
                        rax_2 = *(arg1 + 0x20)
                        r12 = zx.q(r12.d + 1)
                        r15_1 += 1
                        
                        if (r12.d s>= rax_2[2].d)
                            break
                        
                        continue
        
        _invalid_parameter_noinfo_noreturn()
        noreturn

*(arg1 + 4) = r12.d
__security_check_cookie(rax_1 ^ &var_d8)
return &data_143cda918
