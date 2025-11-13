// 函数: sub_140aa3cd0
// 地址: 0x140aa3cd0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void var_1f8
int64_t rax_1 = __security_cookie ^ &var_1f8
void* r14 = &arg1[0x68]
sub_140ac0850(r14, 0)

if (*arg1 == 0)
    arg2 = sub_140abd990(&arg1[0x18])
    int64_t* rcx_2 = *(arg1 + 0x18)
    sub_140597df0(&arg1[0x58], (*(*rcx_2 + 0x10))(rcx_2))
    int64_t* rsi_1 = *(arg1 + 0x20)
    int64_t* r12_1 = *(arg1 + 0x18)
    int64_t* var_1b8 = r12_1
    int64_t* rcx_4 = r12_1
    int64_t* var_1b0 = rsi_1
    
    if (rsi_1 != 0)
        rsi_1[1].d += 1
        rcx_4 = *(arg1 + 0x18)
        rsi_1 = var_1b0
        r12_1 = var_1b8
    
    int16_t var_1a8_1
    int16_t r14_1
    
    if (*((*(*rcx_4 + 0x10))(rcx_4) + 8) s<= 1 || ((*(arg1 + 0x28) u>> 1).b & 1) != 0)
        r14_1 = 0
        var_1a8_1 = 0
    else
        int64_t* rcx_5 = *(arg1 + 0x18)
        int16_t rax_9 = (*(*rcx_5 + 0x40))(rcx_5)
        r14_1 = rax_9
        var_1a8_1 = rax_9
    
    int64_t* rcx_6 = *(arg1 + 0x18)
    int16_t rax_15
    
    if (*((*(*rcx_6 + 0x10))(rcx_6) + 8) s<= 1 || ((*(arg1 + 0x28) u>> 1).b & 1) != 0)
        rax_15 = 0
    else
        int64_t* rcx_7 = *(arg1 + 0x18)
        rax_15 = (*(*rcx_7 + 0x48))(rcx_7)
    
    int32_t rcx_9 = *(arg1 + 0x28)
    
    if (&arg1[0x78] != &var_1b8)
        *(arg1 + 0x78) = r12_1
        var_1b8 = nullptr
        sub_1405aeff0(&arg1[0x80], &var_1b0)
        r14_1 = var_1a8_1
        rsi_1 = var_1b0
    
    *(arg1 + 0x88) = r14_1
    *(arg1 + 0x8a) = rax_15
    *(arg1 + 0x8c) = rcx_9
    
    if (rsi_1 != 0)
        rsi_1[1].d -= 1
        
        if (rsi_1[1].d == 1)
            int64_t* rbx_2 = var_1b0
            (**rbx_2)(rbx_2)
            int32_t rax_18 = *(rbx_2 + 0xc)
            *(rbx_2 + 0xc) -= 1
            
            if (rax_18 == 1)
                int64_t* rcx_11 = var_1b0
                (*(*rcx_11 + 8))(rcx_11, 1)
    
    r14 = &arg1[0x68]

void* r8 = *(arg1 + 8)
*(arg1 + 0x90) = 1
*(arg1 + 0xa8) = 0
*(arg1 + 0xac) = 1
int16_t* const rdx_3

if (*(arg1 + 0x60) == 0)
    rdx_3 = &data_142d40450
else
    rdx_3 = *(arg1 + 0x58)

int64_t* var_108
sub_140b1e060(&var_108, rdx_3, r8 + 0x18, arg2)
int64_t* var_100
char var_f0
void* var_e8
int32_t i_8
char var_d8
int64_t* result

if (var_d8 == 0 || var_f0 != 0)
label_140aa4565:
    sub_140ac0850(&arg1[0x68], 0)
    *(arg1 + 0x90) = 0
    sub_140abd990(&var_108)
    int64_t* rcx_75 = var_108
    result = sub_140597df0(&arg1[0x98], (*(*rcx_75 + 0x10))(rcx_75))
else
    void* r12_2 = var_e8
    int32_t i_4 = i_8
    void* var_180 = r12_2
    __builtin_memset(&var_e8, 0, 0x11)
    int32_t i_7 = i_4
    int32_t var_dc
    int32_t var_174_1 = var_dc
    
    if (r14 != &var_180)
        void* rbx_3 = *r14
        int32_t i_6 = *(r14 + 8)
        
        if (i_6 == 0)
            r14 = &arg1[0x68]
        else
            int32_t i
            
            do
                sub_140b0bbf0(rbx_3)
                rbx_3 += 0x58
                i = i_6
                i_6 -= 1
            while (i != 1)
            rbx_3 = *(arg1 + 0x68)
            r14 = &arg1[0x68]
        
        if (rbx_3 != 0)
            sub_140a74f90(rbx_3)
        
        *r14 = r12_2
        r12_2 = nullptr
        *(r14 + 8) = i_4
        i_4 = 0
        var_180 = nullptr
        *(r14 + 0xc) = var_dc
        int32_t var_178_1 = 0
    
    void* rbx_4 = r12_2
    
    if (i_4 != 0)
        int32_t i_1
        
        do
            sub_140b0bbf0(rbx_4)
            rbx_4 += 0x58
            i_1 = i_4
            i_4 -= 1
        while (i_1 != 1)
    
    if (r12_2 != 0)
        sub_140a74f90(r12_2)
    
    result = nullptr
    int32_t i_2 = 0
    
    if (*(arg1 + 0x70) s> 0)
        void* rbx_5 = nullptr
        int64_t j_1 = 2
        
        do
            void* r14_2 = *r14
            sub_140ab2540()
            void* result_1 = r14_2 + 0x18 + rbx_5
            int32_t rdx_8 = (data_143db9f24 ^ *(rbx_5 + r14_2 + 4))
                | (data_143db9f2c ^ *(rbx_5 + r14_2 + 0xc))
                | (data_143db9f28 ^ *(rbx_5 + r14_2 + 8)) | (data_143db9f20 ^ *(rbx_5 + r14_2))
            void* result_2 = result_1
            
            if (rdx_8 != 0)
                result_2 = nullptr
            
            if (result_2 == 0)
                sub_140ab24c0()
                int32_t rdx_13 = (data_143db9f6c ^ *(rbx_5 + r14_2 + 4))
                    | (data_143db9f74 ^ *(rbx_5 + r14_2 + 0xc))
                    | (data_143db9f70 ^ *(rbx_5 + r14_2 + 8)) | (data_143db9f68 ^ *(rbx_5 + r14_2))
                result = result_1
                
                if (rdx_13 != 0)
                    result = nullptr
                
                if (result == 0)
                    sub_140ab2440()
                    int32_t rdx_18 = (data_143db9f3c ^ *(rbx_5 + r14_2 + 4))
                        | (data_143db9f44 ^ *(rbx_5 + r14_2 + 0xc))
                        | (data_143db9f40 ^ *(rbx_5 + r14_2 + 8))
                        | (data_143db9f38 ^ *(rbx_5 + r14_2))
                    result = result_1
                    
                    if (rdx_18 != 0)
                        result = nullptr
                    
                    if (result == 0)
                        sub_140ab23c0()
                        result = zx.q(data_143db9f50) ^ zx.q(*(rbx_5 + r14_2))
                        int32_t rcx_36 = 0
                        
                        if (((data_143db9f54 ^ *(rbx_5 + r14_2 + 4))
                                | (data_143db9f5c ^ *(rbx_5 + r14_2 + 0xc))
                                | (data_143db9f58 ^ *(rbx_5 + r14_2 + 8)) | result.d) != 0)
                            result_1 = nullptr
                        
                        if (result_1 != 0)
                            int16_t* rax_31 = *(rbx_5 + r14_2 + 0x40)
                            int64_t r13_3 = 0
                            int32_t rdx_25 = 0
                            int32_t rsi_4 = ((*(rbx_5 + r14_2 + 0x48) - rax_31) s>> 1).d
                            int64_t var_1d0 = 0
                            int64_t var_1c8_1 = 0
                            
                            if (rax_31 != 0 && *rax_31 != 0 && rsi_4 s> 0)
                                if (rsi_4 + 1 s> 0)
                                    sub_1405947f0(&var_1d0, rsi_4 + 1)
                                    rcx_36 = var_1c8_1:4.d
                                    rdx_25 = var_1c8_1.d
                                    r13_3 = var_1d0
                                
                                int32_t rax_34 = rdx_25 + 1 + rsi_4
                                var_1c8_1.d = rax_34
                                
                                if (rax_34 s> rcx_36)
                                    sub_140594770(&var_1d0)
                                    r13_3 = var_1d0
                                
                                UnDecorator::getReferenceType(r13_3, rax_31, rsi_4 * 2)
                                *(r13_3 + (sx.q(var_1c8_1.d) << 1) - 2) = 0
                            
                            int64_t var_198
                            sub_140aae2f0(&var_198, &var_1d0)
                            int64_t rcx_41 = var_1d0
                            
                            if (rcx_41 != 0)
                                sub_140a74f90(rcx_41)
                            
                            int64_t rsi_5 = sx.q(*(rbx_5 + r14_2 + 0x54))
                            int64_t* var_190
                            int64_t* rbx_6 = var_190
                            
                            if (rbx_6 != 0)
                                rbx_6[1].d += 1
                                rbx_6 = var_190
                            
                            void var_130
                            char* var_118
                            char** rax_37 = sub_140a96390(&var_118, 
                                _vfprintf_p_l(&var_130, 
                                    Unexpected 'argument modifier' token: {0} (token started at index {1})", 
                                TextFormatter"))
                            int64_t var_88_1 = var_198
                            int32_t var_98_1 = 4
                            int64_t* var_80_1 = rbx_6
                            
                            if (rbx_6 != 0)
                                rbx_6[1].d += 1
                            
                            int32_t var_188
                            int32_t var_78_1 = var_188
                            char var_70_1 = 1
                            int32_t var_68_1 = 0
                            char var_40_1 = 0
                            void* var_170 = nullptr
                            int64_t var_60_1 = rsi_5
                            int32_t var_168_1 = 2
                            sub_1405a4b40(&var_170, 2, 0)
                            void var_90
                            void* rdx_30 = &var_90
                            int64_t* rcx_48 = var_170 + 8
                            int32_t j_2 = 2
                            int32_t j
                            
                            do
                                rcx_48[-1].d = *(rdx_30 - 8)
                                *rcx_48 = *rdx_30
                                *rcx_48 = *rdx_30
                                *rcx_48 = *rdx_30
                                *rcx_48 = *rdx_30
                                rcx_48[4].b = 0
                                
                                if (*(rdx_30 + 0x20) != 0)
                                    rcx_48[1] = *(rdx_30 + 8)
                                    void* rax_44 = *(rdx_30 + 0x10)
                                    rcx_48[2] = rax_44
                                    
                                    if (rax_44 != 0)
                                        *(rax_44 + 8) += 1
                                    
                                    rcx_48[3].d = *(rdx_30 + 0x18)
                                    rcx_48[4].b = 1
                                
                                rcx_48 = &rcx_48[6]
                                rdx_30 += 0x30
                                j = j_2
                                j_2 -= 1
                            while (j != 1)
                            char* var_158 = *rax_37
                            void* rax_47 = rax_37[1]
                            void* var_150_1 = rax_47
                            
                            if (rax_47 != 0)
                                *(rax_47 + 8) += 1
                            
                            void var_148
                            int64_t* rax_48 = sub_140aac870(&var_148, &var_158, &var_170)
                            int64_t* rsi_6 = rax_48[1]
                            int64_t* rcx_50 = *rax_48
                            
                            if (rsi_6 != 0)
                                rsi_6[1].d += 1
                            
                            int32_t r13_4 = rax_48[2].d
                            int64_t* var_140
                            
                            if (var_140 != 0)
                                var_140[1].d -= 1
                                
                                if (var_140[1].d == 1)
                                    (**var_140)(var_140)
                                    int32_t rax_51 = *(var_140 + 0xc)
                                    *(var_140 + 0xc) -= 1
                                    
                                    if (rax_51 == 1)
                                        (*(*var_140 + 8))(var_140, 1)
                            
                            sub_140596f50(&var_170)
                            int64_t __saved_rbx
                            int64_t* r14_5 = &__saved_rbx
                            
                            do
                                j_1 -= 1
                                r14_5 = &r14_5[-6]
                                
                                if (*r14_5 != 0)
                                    *r14_5 = 0
                                    int64_t* rbx_8 = r14_5[-2]
                                    
                                    if (rbx_8 != 0)
                                        rbx_8[1].d -= 1
                                        
                                        if (rbx_8[1].d == 1)
                                            (**rbx_8)(rbx_8)
                                            int32_t rax_55 = *(rbx_8 + 0xc)
                                            *(rbx_8 + 0xc) -= 1
                                            
                                            if (rax_55 == 1)
                                                (*(*rbx_8 + 8))(rbx_8, 1)
                            while (j_1 != 0)
                            
                            int64_t* rbx_10 = rax_37[1]
                            
                            if (rbx_10 != 0)
                                rbx_10[1].d -= 1
                                
                                if (rbx_10[1].d == 1)
                                    (**rbx_10)(rbx_10)
                                    int32_t rax_59 = *(rbx_10 + 0xc)
                                    *(rbx_10 + 0xc) -= 1
                                    
                                    if (rax_59 == 1)
                                        (*(*rbx_10 + 8))(rbx_10, zx.q((j_1 + 1).d))
                            
                            if (var_190 != 0)
                                var_190[1].d -= 1
                                
                                if (var_190[1].d == 1)
                                    (**var_190)(var_190)
                                    int32_t rax_63 = *(var_190 + 0xc)
                                    *(var_190 + 0xc) -= 1
                                    
                                    if (rax_63 == 1)
                                        (*(*var_190 + 8))(var_190, 1)
                            
                            if (rsi_6 != 0)
                                rsi_6[1].d += 1
                            
                            int64_t* var_d0 = rcx_50
                            int64_t* var_c8_1 = rsi_6
                            
                            if (rsi_6 != 0)
                                rsi_6[1].d += 1
                            
                            int32_t var_c0_1 = r13_4
                            char var_b8_1 = 1
                            char var_a0_1 = 0
                            sub_1405d57e0(&var_108)
                            var_108 = rcx_50
                            var_100 = rsi_6
                            
                            if (rsi_6 != 0)
                                rsi_6[1].d += 1
                            
                            int32_t var_f8_1 = r13_4
                            var_f0 = 1
                            sub_140ac08e0(&var_e8)
                            sub_140a98ff0(&var_d0)
                            
                            if (rsi_6 != 0)
                                rsi_6[1].d -= 1
                                
                                if (rsi_6[1].d == 1)
                                    (**rsi_6)(rsi_6)
                                    int32_t rax_67 = *(rsi_6 + 0xc)
                                    *(rsi_6 + 0xc) -= 1
                                    
                                    if (rax_67 == 1)
                                        (*(*rsi_6 + 8))(rsi_6, 1)
                                
                                rsi_6[1].d -= 1
                                
                                if (rsi_6[1].d == 1)
                                    (**rsi_6)(rsi_6)
                                    int32_t rax_71 = *(rsi_6 + 0xc)
                                    *(rsi_6 + 0xc) -= 1
                                    
                                    if (rax_71 == 1)
                                        (*(*rsi_6 + 8))(rsi_6, 1)
                            
                            int64_t* var_128
                            
                            if (var_128 != 0)
                                var_128[1].d -= 1
                                
                                if (var_128[1].d == 1)
                                    (**var_128)(var_128)
                                    int32_t rax_75 = *(var_128 + 0xc)
                                    *(var_128 + 0xc) -= 1
                                    
                                    if (rax_75 == 1)
                                        (*(*var_128 + 8))(var_128, 1)
                            
                            if (var_190 != 0)
                                var_190[1].d -= 1
                                
                                if (var_190[1].d == 1)
                                    (**var_190)(var_190)
                                    int32_t rax_79 = *(var_190 + 0xc)
                                    *(var_190 + 0xc) -= 1
                                    
                                    if (rax_79 == 1)
                                        (*(*var_190 + 8))(var_190, 1)
                            
                            goto label_140aa4565
                    else
                        *(arg1 + 0x90) = 2
                        
                        if (i_2 + 1 s>= 0 && i_2 + 1 s< *(arg1 + 0x70))
                            result = sub_140a91240((sx.q(i_2) + 1) * 0x58 + *(arg1 + 0x68))
                            
                            if (result != 0)
                                int64_t* rcx_31 = result[2]
                                int32_t var_1c0 = 0
                                char var_1d8 = 0
                                (*(*rcx_31 + 0x20))(rcx_31, &var_1c0, &var_1d8)
                                *(arg1 + 0xa8) += var_1c0
                                i_2 += 1
                                result.b = var_1d8 != 0
                                *(arg1 + 0xac) += result.d
                                rbx_5 += 0x58
                else
                    *(arg1 + 0xa8) += 1
            else
                result = zx.q(*(result_2 + 8))
                *(arg1 + 0xa8) += result.d
            
            i_2 += 1
            r14 = &arg1[0x68]
            rbx_5 += 0x58
        while (i_2 s< *(arg1 + 0x70))

if (var_d8 != 0)
    int32_t i_5 = i_8
    void* rbx_14 = var_e8
    char var_d8_1 = 0
    
    if (i_5 != 0)
        int32_t i_3
        
        do
            result = sub_140b0bbf0(rbx_14)
            rbx_14 += 0x58
            i_3 = i_5
            i_5 -= 1
        while (i_3 != 1)
    
    void* rcx_78 = var_e8
    
    if (rcx_78 != 0)
        result = sub_140a74f90(rcx_78)

if (var_f0 != 0)
    char var_f0_1 = 0
    
    if (var_100 != 0)
        result = zx.q(var_100[1].d)
        var_100[1].d -= 1
        
        if (result.d == 1)
            result = (**var_100)(var_100)
            int32_t r15_1 = *(var_100 + 0xc)
            *(var_100 + 0xc) -= 1
            
            if (r15_1 == 1)
                result = (*(*var_100 + 8))(var_100, zx.q(r15_1))

__security_check_cookie(rax_1 ^ &var_1f8)
return result
