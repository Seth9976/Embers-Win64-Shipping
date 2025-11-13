// 函数: sub_1405e9320
// 地址: 0x1405e9320
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t var_c8 = -2
void var_1b8
int64_t rax_1 = __security_cookie ^ &var_1b8
int64_t* r13 = arg4
void** var_180 = arg1
int64_t* var_98 = arg4
int64_t* rdi = nullptr
int32_t var_188 = 0
int64_t var_78 = 0
void*** rax_2 = sub_140a82f30(0x70, 8)
void*** var_180_1 = rax_2
*rax_2 = &data_142d62cf0
void* var_158 = &rax_2[1]
rax_2[1] = *arg3
void* rax_4 = arg3[1]
rax_2[2] = rax_4

if (rax_4 != 0)
    *(rax_4 + 8) += 1

sub_140596d10(&rax_2[3], &arg3[2])
rax_2[5].b = arg3[4].b
*(rax_2 + 0x30) = *(arg3 + 0x28)
*(rax_2 + 0x40) = *(arg3 + 0x38)
*(rax_2 + 0x50) = *(arg3 + 0x48)
rax_2[0xc] = arg3[0xb]
rax_2[0xd] = arg3[0xc]
arg3[0xc] = 0
arg3[0xb] = 0
*rax_2 = &data_142d62d10
void*** var_78_1 = rax_2
void (* var_88)(int64_t* arg1)
void (* rax_8)(int64_t* arg1) = var_88

if (rax_2 != -8)
    rax_8 = j_sub_1405ed310

void (* var_88_1)(int64_t* arg1) = rax_8
void*** rax_9 = sub_1405eac40(r13)
char var_188_1 = 4
void*** rbx_1 = rax_9
void*** r14_1 = rbx_1
void*** var_170 = rbx_1

if (rbx_1 != 0)
    rbx_1[1].d += 1
    rbx_1 = rax_9

if (rbx_1 != 0)
    rbx_1[1].d -= 1
    
    if (rbx_1[1].d == 1)
        (**rbx_1)(rbx_1)
        int32_t rax_13 = *(rbx_1 + 0xc)
        *(rbx_1 + 0xc) -= 1
        
        if (rax_13 == 1)
            (*rbx_1)[1](rbx_1, 1)

char var_168 = 1

if (r14_1 != 0)
    r14_1[1].d += 1

int128_t var_68

if (arg2 s>= 0)
    int128_t var_58
    
    if (arg2 s<= 1)
        int32_t rax_53 = 2
        
        if (arg2 == 0)
            rax_53 = 0xff
        
        void* var_180_2
        var_180_2.d = rax_53
        void var_b0
        void** rax_54 = sub_1405f45f0(&var_b0, nullptr, 0xff)
        int64_t* r15_4 = *rax_54 + 0x10
        int64_t* var_158_3 = r15_4
        *r15_4 = var_88_1
        r15_4[2] = var_78_1
        var_78_1 = nullptr
        *(r15_4 + 0x20) = var_68
        *(r15_4 + 0x30) = var_58
        void (* rax_57)(int64_t* arg1) = var_88_1
        
        if (*r15_4 != 0)
            rax_57 = nullptr
        
        var_88_1 = rax_57
        void** var_c0_1 = &r15_4[8]
        r15_4[8] = &rax_9[2]
        r15_4[9] = r14_1
        var_170 = nullptr
        int64_t* var_f0 = nullptr
        int64_t var_178_3 = 0
        int64_t var_f8_1 = 0
        sub_1405aeff0(&var_170, &var_f0)
        int64_t* rcx_30 = var_f0
        
        if (rcx_30 != 0)
            rcx_30[1].d -= 1
            
            if (rcx_30[1].d == 1)
                int64_t* rbx_7 = var_f0
                (**rbx_7)(rbx_7)
                int32_t rax_61 = *(rbx_7 + 0xc)
                *(rbx_7 + 0xc) -= 1
                
                if (rax_61 == 1)
                    int64_t* rcx_32 = var_f0
                    (*(*rcx_32 + 8))(rcx_32, 1)
        
        r15_4[0xa].b = 0
        r15_4[0xb].d = var_180_2.d
        void* rcx_33 = *rax_54
        int64_t* rbx_8 = *(rcx_33 + 0x78)
        int64_t* var_b8_1 = rbx_8
        
        if (rbx_8 != 0)
            rbx_8[9].d += 1
        
        int32_t var_188_2 = 0x14
        sub_1405ff810(rcx_33, rax_54[1], rax_54[2].d, 1)
        
        if (rbx_8 != 0)
            rbx_8[9].d -= 1
            
            if (rbx_8[9].d == 1)
                sub_140a2f6e0(rbx_8)
        
        r13 = arg4
    else if (arg2 == 2)
        char rax_26
        int128_t zmm1_2
        rax_26, zmm1_2 = sub_140a54810()
        
        if (rax_26 == 0)
            int128_t* rcx_25 = &var_68
            
            if (var_78_1 != 0)
                rcx_25 = var_78_1
            
            var_88_1((*(*rcx_25 + 8))(rcx_25))
            rax_9[0x12].d = 0
            sub_1405fc0f0(&rax_9[2], zmm1_2, arg5, arg6)
        else
            CRITICAL_SECTION* var_150
            sub_1405eb890(&var_150)
            void*** rax_27 = j_sub_140a82f30(0x80)
            void*** r14_3 = rax_27
            void*** var_158_2 = rax_27
            int64_t* var_148
            int64_t* var_100
            
            if (rax_27 == 0)
                r14_3 = nullptr
                rdi = var_100
            else
                char var_140_1 = 1
                CRITICAL_SECTION* var_108_1 = var_150
                int64_t* var_100_1 = var_148
                
                if (var_148 != 0)
                    var_148[1].d += 1
                
                var_188_1 = 5
                *r14_3 = &data_142d5ec40
                r14_3[2] = var_88_1
                r14_3[4] = var_78_1
                var_78_1 = nullptr
                *(r14_3 + 0x30) = var_68
                *(r14_3 + 0x40) = var_58
                void (* rax_31)(int64_t* arg1) = var_88_1
                
                if (r14_3[2] != 0)
                    rax_31 = nullptr
                
                var_88_1 = rax_31
                void** var_160_2 = &r14_3[0xa]
                r14_3[0xa] = &rax_9[2]
                r14_3[0xb] = var_170
                var_170 = nullptr
                int64_t* var_110 = nullptr
                int64_t var_178_2 = 0
                int64_t var_118_1 = 0
                sub_1405aeff0(&var_170, &var_110)
                int64_t* rcx_13 = var_110
                
                if (rcx_13 != 0)
                    rcx_13[1].d -= 1
                    
                    if (rcx_13[1].d == 1)
                        int64_t* rbx_4 = var_110
                        (**rbx_4)(rbx_4)
                        int32_t rax_36 = *(rbx_4 + 0xc)
                        *(rbx_4 + 0xc) -= 1
                        
                        if (rax_36 == 1)
                            int64_t* rcx_15 = var_110
                            (*(*rcx_15 + 8))(rcx_15, 1)
                
                r14_3[0xc].b = 0
                r14_3[0xd] = var_150
                r14_3[0xe] = var_148
                var_100 = nullptr
            
            if ((var_188_1 & 1) != 0 && rdi != 0)
                rdi[1].d -= 1
                
                if (rdi[1].d == 1)
                    (**var_100)(var_100)
                    int32_t rax_42 = *(var_100 + 0xc)
                    *(var_100 + 0xc) -= 1
                    
                    if (rax_42 == 1)
                        (*(*var_100 + 8))(var_100, 1)
            
            int16_t* var_e8
            sub_140a2e390(&var_e8, u"TAsync %d", zx.q(sub_1405f81c0()))
            int16_t* const rdx_5 = &data_142d40450
            int32_t var_e0
            
            if (var_e0 != 0)
                rdx_5 = var_e8
            
            void*** rax_45
            int128_t zmm1_4
            rax_45, zmm1_4 = sub_140a6e140(r14_3, rdx_5, 0, 0, -1, 0)
            CRITICAL_SECTION* rcx_20 = var_150
            rcx_20->__offset(0x80).q = rax_45
            sub_1405fc0f0(rcx_20, zmm1_4, arg5, arg6)
            int16_t* rcx_21 = var_e8
            
            if (rcx_21 != 0)
                sub_140a74f90(rcx_21)
            
            if (var_148 != 0)
                var_148[1].d -= 1
                
                if (var_148[1].d == 1)
                    (**var_148)(var_148)
                    int32_t rax_48 = *(var_148 + 0xc)
                    *(var_148 + 0xc) -= 1
                    
                    if (rax_48 == 1)
                        (*(*var_148 + 8))(var_148, 1)
    else if (arg2 == 3)
        void*** rax_15 = j_sub_140a82f30(zx.q(arg2 + 0x6d))
        void*** r14_2 = rax_15
        void*** var_158_1 = rax_15
        
        if (rax_15 == 0)
            r14_2 = nullptr
        else
            *r14_2 = &data_142d5ec70
            r14_2[2] = var_88_1
            r14_2[4] = var_78_1
            var_78_1 = nullptr
            *(r14_2 + 0x30) = var_68
            *(r14_2 + 0x40) = var_58
            void (* rax_18)(int64_t* arg1) = var_88_1
            
            if (r14_2[2] != 0)
                rax_18 = nullptr
            
            var_88_1 = rax_18
            void* var_160_1 = &r14_2[0xa]
            r14_2[0xa] = &rax_9[2]
            r14_2[0xb] = var_170
            var_170 = nullptr
            int64_t* var_120 = nullptr
            int64_t var_178_1 = 0
            int64_t var_128_1 = 0
            sub_1405aeff0(&var_170, &var_120)
            int64_t* rcx_6 = var_120
            
            if (rcx_6 != 0)
                rcx_6[1].d -= 1
                
                if (rcx_6[1].d == 1)
                    int64_t* rbx_3 = var_120
                    (**rbx_3)(rbx_3)
                    int32_t rax_23 = *(rbx_3 + 0xc)
                    *(rbx_3 + 0xc) -= 1
                    
                    if (rax_23 == 1)
                        int64_t* rcx_8 = var_120
                        (*(*rcx_8 + 8))(rcx_8, 1)
            
            r14_2[0xc].b = 0
        
        int64_t* rcx_9 = data_143db7ac8
        (*(*rcx_9 + 0x10))(rcx_9, r14_2)

*arg1 = &rax_9[2]
arg1[1] = r14_1
void*** rcx_35 = var_170

if (rcx_35 != 0)
    rcx_35[1].d -= 1
    
    if (rcx_35[1].d == 1)
        void*** rbx_9 = var_170
        (**rbx_9)(rbx_9)
        int32_t rsi_1 = *(rbx_9 + 0xc)
        *(rbx_9 + 0xc) -= 1
        
        if (rsi_1 == 1)
            void*** rcx_37 = var_170
            (*rcx_37)[1](rcx_37, zx.q(rsi_1))

if (var_88_1 != 0)
    int128_t* rcx_38 = &var_68
    
    if (var_78_1 != 0)
        rcx_38 = var_78_1
    
    (*(*rcx_38 + 0x10))(rcx_38)

if (*r13 != 0)
    void* rdx_9 = r13[2]
    void* rcx_39 = &r13[4]
    
    if (rdx_9 != 0)
        rcx_39 = rdx_9
    
    int64_t rdx_10 = *rcx_39
    (*(rdx_10 + 0x10))(rcx_39, rdx_10)

__security_check_cookie(rax_1 ^ &var_1b8)
return arg1
