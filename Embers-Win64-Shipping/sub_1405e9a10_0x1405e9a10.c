// 函数: sub_1405e9a10
// 地址: 0x1405e9a10
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t var_c0 = -2
void var_1b8
int64_t rax_1 = __security_cookie ^ &var_1b8
void** var_160 = arg1
int64_t* var_90 = arg4
int64_t* rsi = nullptr
int32_t var_188 = 0
void*** var_78 = nullptr
int128_t zmm0 = *arg3
void** const var_68 = &data_142d5ecb0
void (* var_88)(int64_t* arg1) = sub_1405f1dc0
void*** rax_3 = sub_1405eac40(arg4)
char var_188_1 = 4
void*** rbx = rax_3
void*** r14 = rbx
void*** var_178 = rbx

if (rbx != 0)
    rbx[1].d += 1
    rbx = rax_3

if (rbx != 0)
    rbx[1].d -= 1
    
    if (rbx[1].d == 1)
        (**rbx)(rbx)
        int32_t rax_6 = *(rbx + 0xc)
        *(rbx + 0xc) -= 1
        
        if (rax_6 == 1)
            (*rbx)[1](rbx, 1)

char var_170 = 1

if (r14 != 0)
    r14[1].d += 1

if (arg2 s>= 0)
    if (arg2 s<= 1)
        int32_t rax_46 = 2
        
        if (arg2 == 0)
            rax_46 = 0xff
        
        void var_a8
        void** rax_47 = sub_1405f45f0(&var_a8, nullptr, 0xff)
        int64_t* rcx_29 = *rax_47 + 0x10
        int64_t* var_b8_1 = rcx_29
        *rcx_29 = var_88
        rcx_29[2] = var_78
        var_78 = nullptr
        *(rcx_29 + 0x20) = var_68.o
        *(rcx_29 + 0x30) = zmm0
        void (* rax_50)(int64_t* arg1) = var_88
        
        if (*rcx_29 != 0)
            rax_50 = nullptr
        
        var_88 = rax_50
        rcx_29[8] = &rax_3[2]
        rcx_29[9] = r14
        var_178 = nullptr
        int64_t* var_f0 = nullptr
        int64_t var_180_3 = 0
        int64_t var_f8_1 = 0
        sub_1405aeff0(&var_178, &var_f0)
        int64_t* rcx_31 = var_f0
        
        if (rcx_31 != 0)
            rcx_31[1].d -= 1
            
            if (rcx_31[1].d == 1)
                int64_t* rbx_5 = var_f0
                (**rbx_5)(rbx_5)
                int32_t rax_54 = *(rbx_5 + 0xc)
                *(rbx_5 + 0xc) -= 1
                
                if (rax_54 == 1)
                    int64_t* rcx_33 = var_f0
                    (*(*rcx_33 + 8))(rcx_33, 1)
        
        rcx_29[0xa].b = 0
        rcx_29[0xb].d = rax_46
        void* rcx_35 = *rax_47
        int64_t* rbx_6 = *(rcx_35 + 0x78)
        int64_t* var_b0_1 = rbx_6
        
        if (rbx_6 != 0)
            rbx_6[9].d += 1
        
        int32_t var_188_2 = 0x14
        sub_1405ff810(rcx_35, rax_47[1], rax_47[2].d, 1)
        
        if (rbx_6 != 0)
            rbx_6[9].d -= 1
            
            if (rbx_6[9].d == 1)
                sub_140a2f6e0(rbx_6)
    else if (arg2 == 2)
        char rax_19
        int128_t zmm1_2
        rax_19, zmm1_2 = sub_140a54810()
        
        if (rax_19 == 0)
            void*** rcx_24 = &var_68
            
            if (var_78 != 0)
                rcx_24 = var_78
            
            var_88((*rcx_24)[1](rcx_24))
            rax_3[0x12].d = 0
            sub_1405fc0f0(&rax_3[2], zmm1_2, arg5, arg6)
        else
            CRITICAL_SECTION* var_150
            sub_1405eb890(&var_150)
            int64_t* rax_20 = j_sub_140a82f30(0x80)
            int64_t* r14_2 = rax_20
            int64_t* var_160_2 = rax_20
            int64_t* var_148
            int64_t* var_100
            
            if (rax_20 == 0)
                r14_2 = nullptr
                rsi = var_100
            else
                char var_140_1 = 1
                CRITICAL_SECTION* var_108_1 = var_150
                int64_t* var_100_1 = var_148
                
                if (var_148 != 0)
                    var_148[1].d += 1
                
                var_188_1 = 5
                *r14_2 = &data_142d5ec40
                r14_2[2] = var_88
                r14_2[4] = var_78
                var_78 = nullptr
                *(r14_2 + 0x30) = var_68.o
                *(r14_2 + 0x40) = zmm0
                void (* rax_24)(int64_t* arg1) = var_88
                
                if (r14_2[2] != 0)
                    rax_24 = nullptr
                
                var_88 = rax_24
                void** var_158_2 = &r14_2[0xa]
                r14_2[0xa] = &rax_3[2]
                r14_2[0xb] = var_178
                var_178 = nullptr
                int64_t* var_110 = nullptr
                int64_t var_180_2 = 0
                int64_t var_118_1 = 0
                sub_1405aeff0(&var_178, &var_110)
                int64_t* rcx_12 = var_110
                
                if (rcx_12 != 0)
                    rcx_12[1].d -= 1
                    
                    if (rcx_12[1].d == 1)
                        int64_t* rbx_2 = var_110
                        (**rbx_2)(rbx_2)
                        int32_t rax_29 = *(rbx_2 + 0xc)
                        *(rbx_2 + 0xc) -= 1
                        
                        if (rax_29 == 1)
                            int64_t* rcx_14 = var_110
                            (*(*rcx_14 + 8))(rcx_14, 1)
                
                r14_2[0xc].b = 0
                r14_2[0xd] = var_150
                r14_2[0xe] = var_148
                var_100 = nullptr
            
            if ((var_188_1 & 1) != 0 && rsi != 0)
                rsi[1].d -= 1
                
                if (rsi[1].d == 1)
                    (**var_100)(var_100)
                    int32_t rax_35 = *(var_100 + 0xc)
                    *(var_100 + 0xc) -= 1
                    
                    if (rax_35 == 1)
                        (*(*var_100 + 8))(var_100, 1)
            
            int16_t* var_e0
            sub_140a2e390(&var_e0, u"TAsync %d", zx.q(sub_1405f81c0()))
            int16_t* const rdx_4 = &data_142d40450
            int32_t var_d8
            
            if (var_d8 != 0)
                rdx_4 = var_e0
            
            void*** rax_38
            int128_t zmm1_4
            rax_38, zmm1_4 = sub_140a6e140(r14_2, rdx_4, 0, 0, -1, 0)
            CRITICAL_SECTION* rcx_19 = var_150
            rcx_19->__offset(0x80).q = rax_38
            sub_1405fc0f0(rcx_19, zmm1_4, arg5, arg6)
            int16_t* rcx_20 = var_e0
            
            if (rcx_20 != 0)
                sub_140a74f90(rcx_20)
            
            if (var_148 != 0)
                var_148[1].d -= 1
                
                if (var_148[1].d == 1)
                    (**var_148)(var_148)
                    int32_t rax_41 = *(var_148 + 0xc)
                    *(var_148 + 0xc) -= 1
                    
                    if (rax_41 == 1)
                        (*(*var_148 + 8))(var_148, 1)
    else if (arg2 == 3)
        void*** rax_8 = j_sub_140a82f30(zx.q(arg2 + 0x6d))
        void*** r14_1 = rax_8
        void*** var_160_1 = rax_8
        
        if (rax_8 == 0)
            r14_1 = nullptr
        else
            *r14_1 = &data_142d5ec70
            r14_1[2] = var_88
            r14_1[4] = var_78
            var_78 = nullptr
            *(r14_1 + 0x30) = var_68.o
            *(r14_1 + 0x40) = zmm0
            void (* rax_11)(int64_t* arg1) = var_88
            
            if (r14_1[2] != 0)
                rax_11 = nullptr
            
            var_88 = rax_11
            int64_t* var_158_1 = &r14_1[0xa]
            r14_1[0xa] = &rax_3[2]
            r14_1[0xb] = var_178
            var_178 = nullptr
            int64_t* var_120 = nullptr
            int64_t var_180_1 = 0
            int64_t var_128_1 = 0
            sub_1405aeff0(&var_178, &var_120)
            int64_t* rcx_5 = var_120
            
            if (rcx_5 != 0)
                rcx_5[1].d -= 1
                
                if (rcx_5[1].d == 1)
                    int64_t* rbx_1 = var_120
                    (**rbx_1)(rbx_1)
                    int32_t rax_16 = *(rbx_1 + 0xc)
                    *(rbx_1 + 0xc) -= 1
                    
                    if (rax_16 == 1)
                        int64_t* rcx_7 = var_120
                        (*(*rcx_7 + 8))(rcx_7, 1)
            
            r14_1[0xc].b = 0
        
        int64_t* rcx_8 = data_143db7ac8
        (*(*rcx_8 + 0x10))(rcx_8, r14_1)

*arg1 = &rax_3[2]
arg1[1] = r14
void*** rcx_37 = var_178

if (rcx_37 != 0)
    rcx_37[1].d -= 1
    
    if (rcx_37[1].d == 1)
        void*** rbx_7 = var_178
        (**rbx_7)(rbx_7)
        int32_t rdi_1 = *(rbx_7 + 0xc)
        *(rbx_7 + 0xc) -= 1
        
        if (rdi_1 == 1)
            void*** rcx_39 = var_178
            (*rcx_39)[1](rcx_39, zx.q(rdi_1))

if (var_88 != 0)
    void** const* rcx_40 = &var_68
    
    if (var_78 != 0)
        rcx_40 = var_78
    
    (*rcx_40)[2](rcx_40)

if (*arg4 != 0)
    void* rdx_8 = arg4[2]
    void* rcx_42 = &arg4[4]
    
    if (rdx_8 != 0)
        rcx_42 = rdx_8
    
    int64_t rdx_9 = *rcx_42
    (*(rdx_9 + 0x10))(rcx_42, rdx_9)

__security_check_cookie(rax_1 ^ &var_1b8)
return arg1
