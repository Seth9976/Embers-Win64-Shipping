// 函数: sub_14083f510
// 地址: 0x14083f510
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void var_1c8
uint64_t result = __security_cookie ^ &var_1c8
uint64_t result_1 = result

if (*(arg1 + 0x220) != 0 && *(arg1 + 0x230) != 0 && *(arg1 + 0x238) != 0)
    int32_t i = 0
    char var_198_1 = 1
    int32_t i_1 = 0
    
    if (*(arg1 + 0x250) s> 0)
        do
            result = zx.q(*(arg1 + 0x254))
            int32_t j = 0
            
            if (result.d s> 0)
                do
                    void* rax_4 = *(arg1 + 0x230)
                    int64_t* r13_1 = *(*(*(arg1 + 0x258) + (sx.q(result.d * i + j) << 3)) + 0x1f8)
                    void* var_190 = nullptr
                    int64_t var_188_1 = 0
                    int64_t var_17c = *(*(rax_4 + 0x10) + 0x18)
                    void var_138
                    sub_140b63b70(&var_17c, &var_138)
                    void var_e8
                    int32_t* rax_6 = sub_140b2f3e0(&var_e8, &var_138)
                    int64_t rbx_1 = sx.q(var_188_1.d)
                    int32_t rcx_5 = (rbx_1 + 1).d
                    var_188_1.d = rcx_5
                    
                    if (rcx_5 s> 0)
                        sub_1405c4e40(&var_190)
                    
                    sub_140b2f340((rbx_1 << 5) + var_190, rax_6)
                    int64_t var_d8
                    
                    if (var_d8 != 0)
                        sub_140a74f90(var_d8)
                    
                    void var_c8
                    int32_t* rax_7 = sub_140b2f3a0(&var_c8, i)
                    int64_t rbx_2 = sx.q(var_188_1.d)
                    int32_t rcx_12 = (rbx_2 + 1).d
                    var_188_1.d = rcx_12
                    
                    if (rcx_12 s> 0)
                        sub_1405c4e40(&var_190)
                    
                    sub_140b2f340((rbx_2 << 5) + var_190, rax_7)
                    int64_t var_b8
                    
                    if (var_b8 != 0)
                        sub_140a74f90(var_b8)
                    
                    int64_t var_150
                    sub_140b3b4b0(&var_150, u"{1} | X = {0}", &var_190)
                    int32_t rax_8 = var_188_1:4.d
                    int32_t k_3 = var_188_1.d
                    
                    if (rax_8 s< 0)
                        if (k_3 != 0)
                            void* rbx_6 = var_190 + 0x10
                            int32_t k
                            
                            do
                                int64_t rcx_20 = *rbx_6
                                
                                if (rcx_20 != 0)
                                    sub_140a74f90(rcx_20)
                                
                                rbx_6 += 0x20
                                k = k_3
                                k_3 -= 1
                            while (k != 1)
                            rax_8 = var_188_1:4.d
                        
                        var_188_1.d = 0
                        
                        if (rax_8 != 0)
                            sub_1405a51b0(&var_190, 0)
                    else
                        if (k_3 != 0)
                            int64_t* rbx_4 = var_190 + 0x10
                            int32_t k_1
                            
                            do
                                int64_t rcx_19 = *rbx_4
                                
                                if (rcx_19 != 0)
                                    sub_140a74f90(rcx_19)
                                
                                rbx_4 = &rbx_4[4]
                                k_1 = k_3
                                k_3 -= 1
                            while (k_1 != 1)
                        
                        var_188_1.d = 0
                    
                    int64_t var_174 = *(*(*(arg1 + 0x238) + 0x10) + 0x18)
                    void var_128
                    sub_140b63b70(&var_174, &var_128)
                    void var_a8
                    int32_t* rax_11 = sub_140b2f3e0(&var_a8, &var_128)
                    int64_t rbx_7 = sx.q(var_188_1.d)
                    int32_t rcx_25 = (rbx_7 + 1).d
                    var_188_1.d = rcx_25
                    
                    if (rcx_25 s> var_188_1:4.d)
                        sub_1405c4e40(&var_190)
                    
                    sub_140b2f340((rbx_7 << 5) + var_190, rax_11)
                    int64_t var_98
                    
                    if (var_98 != 0)
                        sub_140a74f90(var_98)
                    
                    void var_88
                    int32_t* rax_12 = sub_140b2f3a0(&var_88, j)
                    int64_t rbx_8 = sx.q(var_188_1.d)
                    int32_t rcx_32 = (rbx_8 + 1).d
                    var_188_1.d = rcx_32
                    
                    if (rcx_32 s> var_188_1:4.d)
                        sub_1405c4e40(&var_190)
                    
                    sub_140b2f340((rbx_8 << 5) + var_190, rax_12)
                    int64_t var_78
                    
                    if (var_78 != 0)
                        sub_140a74f90(var_78)
                    
                    int64_t var_160
                    sub_140b3b4b0(&var_160, u"{1} | Y = {0}", &var_190)
                    void* var_48_1 = nullptr
                    int32_t var_3c_1 = 4
                    int32_t var_40_1 = 0
                    void* rax_13 = sub_14086a680()
                    void* var_140_1 = rax_13
                    void* const rdi_5
                    
                    if (rax_13 == 0)
                        rdi_5 = nullptr
                    else
                        void* rax_14 = sub_142459c10()
                        
                        if (rax_14 == 0)
                            rdi_5 = nullptr
                        else
                            int64_t rax_15 = sx.q(*(rax_14 + 0x38))
                            
                            if (rax_15.d s> *(rax_13 + 0x38))
                                rdi_5 = nullptr
                            else
                                rdi_5 = rax_13
                                
                                if (*(*(rax_13 + 0x30) + (rax_15 << 3)) != rax_14 + 0x30)
                                    rdi_5 = nullptr
                    
                    void var_68
                    void* r8_3 = &var_68
                    int64_t rdx_17
                    int64_t r9_1
                    
                    if (rdi_5 != sub_142459c10())
                        rdx_17, r9_1 = sub_140817de0(r13_1, rax_13, r8_3)
                    else
                        rdx_17, r9_1 = sub_140817bd0(r13_1, rax_13, r8_3)
                    
                    void* rdi_6 = &var_68
                    
                    if (var_48_1 != 0)
                        rdi_6 = var_48_1
                    
                    int64_t rsi_1 = 0
                    int64_t r14_1 = sx.q(var_40_1) << 3
                    uint64_t r14_2 = r14_1 u>> 3
                    
                    if (rdi_6 u> rdi_6 + r14_1)
                        r14_2 = 0
                    
                    if (r14_2 != 0)
                        do
                            int64_t* rbx_10 = *rdi_6
                            
                            if ((*(rbx_10 + 0x8a) & 1) != 0)
                                var_198_1 = 0
                            else if (*(arg1 + 0x228) == 1)
                                rdx_17.b = 1
                                (*(*rbx_10 + 0x268))(rbx_10, rdx_17)
                            
                            r9_1.b = 1
                            int64_t* var_1a8_1 = &var_150
                            sub_14087b290(*(arg1 + 0x230), rbx_10, zx.q(i_1))
                            int64_t* var_1a8_2 = &var_160
                            rdx_17, r9_1 = sub_14087b290(*(arg1 + 0x238), rbx_10, zx.q(j))
                            rdi_6 += 8
                            rsi_1 += 1
                        while (rsi_1 != r14_2)
                    
                    void var_100
                    int64_t* rax_22 = sub_140aae420(&var_100, &var_160)
                    void var_118
                    sub_14087c4d0(r13_1, sub_140aae420(&var_118, &var_150), rax_22)
                    int64_t* var_110
                    
                    if (var_110 != 0)
                        var_110[1].d -= 1
                        
                        if (var_110[1].d == 1)
                            (**var_110)(var_110)
                            int32_t rax_26 = *(var_110 + 0xc)
                            *(var_110 + 0xc) -= 1
                            
                            if (rax_26 == 1)
                                (*(*var_110 + 8))(var_110, 1)
                    
                    int64_t* var_f8
                    
                    if (var_f8 != 0)
                        var_f8[1].d -= 1
                        
                        if (var_f8[1].d == 1)
                            (**var_f8)(var_f8)
                            int32_t rax_30 = *(var_f8 + 0xc)
                            *(var_f8 + 0xc) -= 1
                            
                            if (rax_30 == 1)
                                (*(*var_f8 + 8))(var_f8, 1)
                    
                    if (var_48_1 != 0)
                        sub_140a74f90(var_48_1)
                    
                    int64_t rcx_52 = var_160
                    
                    if (rcx_52 != 0)
                        sub_140a74f90(rcx_52)
                    
                    int64_t rcx_53 = var_150
                    
                    if (rcx_53 != 0)
                        sub_140a74f90(rcx_53)
                    
                    int32_t k_4 = var_188_1.d
                    
                    if (k_4 != 0)
                        void* rbx_15 = var_190 + 0x10
                        int32_t k_2
                        
                        do
                            int64_t rcx_54 = *rbx_15
                            
                            if (rcx_54 != 0)
                                sub_140a74f90(rcx_54)
                            
                            rbx_15 += 0x20
                            k_2 = k_4
                            k_4 -= 1
                        while (k_2 != 1)
                    
                    void* rcx_55 = var_190
                    
                    if (rcx_55 != 0)
                        sub_140a74f90(rcx_55)
                    
                    result = zx.q(*(arg1 + 0x254))
                    j += 1
                    i = i_1
                while (j s< result.d)
            
            i += 1
            i_1 = i
        while (i s< *(arg1 + 0x250))
    
    if ((*(arg1 + 0x250) s<= 0 || var_198_1 != 0) && *(arg1 + 0x228) == 2)
        int64_t rdx
        rdx.b = 1
        result = sub_14081f680(arg1)

__security_check_cookie(result_1 ^ &var_1c8)
return result
