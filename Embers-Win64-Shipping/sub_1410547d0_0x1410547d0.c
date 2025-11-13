// 函数: sub_1410547d0
// 地址: 0x1410547d0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void var_1e8
int64_t rax_1 = __security_cookie ^ &var_1e8
void* rbx = **(arg1 + 0x20)
int32_t var_180 = arg3
void var_98
(*(*arg6 + 0x50))(arg6, &var_98)
void*** r14 = nullptr
int16_t i_5
uint64_t i_4 = zx.q(i_5)
int16_t var_7a
uint32_t rax_7 = zx.d(var_7a)
int64_t rax_9 = 0
int32_t var_68

if ((var_68.b & 1) != 0)
    rax_9 = 0x10000

int64_t var_90 = rax_9
int32_t var_78
int32_t rax_10 = sub_140fe7330(var_78, (arg4 u>> 4).b & 1)
int32_t r12 = rax_10
char rax_11 = var_68.b & 1
void* rdi_2 = *(rbx + 0x9d8)
void* var_138 = rdi_2
void*** rax_12 = j_sub_140a82f30(0x128)
void* const var_1b8
int32_t var_1b0
void*** rbx_1

if (rax_12 == 0)
    rbx_1 = nullptr
else
    var_1b0 = 1
    var_1b8 = nullptr
    rbx_1 = sub_14103f260(rax_12, rdi_2, *(rdi_2 + 0x10), arg6, 0, &var_98, var_1b8, var_1b0)

rbx_1[1].d += 1
void*** rax_14 = j_sub_140a82f30(0x218)
int128_t* var_1c0
char var_1a8
int32_t var_1a0
int64_t var_198
int64_t var_190
int32_t var_74
void*** r13_1

if (rax_14 == 0)
    r13_1 = nullptr
else
    var_190 = 0
    var_198 = arg5
    var_1a0 = arg4
    var_1a8 = 1
    var_1b0 = var_180
    var_1b8.d = var_74
    var_1c0.d = rax_7
    int32_t var_88
    int32_t var_80
    r13_1 = sub_14103e1d0(rax_14, rdi_2, var_88, var_80, 1, var_1c0.d, var_1b8.b, var_1b0, var_1a8, 
        var_1a0)

int32_t var_170
var_170.q = r13_1
int32_t var_168
var_168.q = &r13_1[0x17]
uint128_t zmm6 = sub_141014320(&r13_1[0x17], rbx_1, 0, 0)
r13_1[0x18].d = 5
rbx_1[1].d += 1

if (rax_11 != 0)
    r13_1[0x30].b = 0
    *(r13_1 + 0x184) = rax_7
    zmm6 = sub_14105aad0(&r13_1[0xe], rax_7)
    
    if (i_4.d != 0)
        uint32_t rax_17 = rax_7
        int32_t rbx_2 = 0
        uint64_t i_2 = i_4
        var_180 = 0
        uint64_t i_3 = i_2
        uint64_t i
        
        do
            int32_t r15_2 = 0
            
            if (rax_17 != 0)
                do
                    int128_t var_128_1 = zx.o(0)
                    
                    if (var_74 != 1)
                        int32_t var_12c_2 = 6
                    else
                        int32_t var_12c_1 = 4
                        var_128_1.d = r15_2
                        int32_t rax_18 = sub_141021240(var_78)
                        int32_t rax_19
                        int32_t rcx_12
                        bool cond:6_1
                        
                        if (rax_18 == 0x13)
                            rcx_12 = r12 - 0x15
                            cond:6_1 = r12 == 0x15
                        label_141054a1f:
                            
                            if (cond:6_1)
                                rax_19 = 0
                            else
                                rax_19 = 1
                                
                                if (rcx_12 != 1)
                                    rax_19 = 0
                        else
                            if (rax_18 == 0x2c)
                                rcx_12 = r12 - 0x2e
                                cond:6_1 = r12 == 0x2e
                                goto label_141054a1f
                            
                            rax_19 = 0
                        var_128_1:4.d = rax_19
                    
                    void*** rax_20 = j_sub_140a82f30(0x88)
                    void*** rsi = rax_20
                    
                    if (rax_20 == 0)
                        rsi = nullptr
                    else
                        *rsi = &data_142f009c8
                        rsi[1] = rdi_2
                        rsi[2] = 0
                        
                        if (rdi_2 != 0)
                            void var_e8
                            int64_t* rax_21
                            rax_21, zmm6 = sub_141013ee0(rdi_2 + 0xb0, &var_e8, &rsi[3])
                            rsi[2] = *rax_21
                        
                        void* rbx_3 = var_168.q
                        rsi[4].d = 0
                        rsi[0xc] = &data_142d3ff08
                        rsi[0xd].d = 0
                        *(rsi + 0x6c) = 0
                        rsi[0xe].w = 0x100
                        rsi[0xf] = 0
                        rsi[0x10].b = 1
                        *rsi = &data_142f009d0
                        rsi[0xc] = &data_142f009d8
                        rsi[5] = rbx_3
                        void* r8_3 = *(rbx_3 + 0x10)
                        void* rdx_8 = *(r8_3 + 0x28)
                        *(rsi + 0x48) = r12.o
                        void* rcx_16 = rdx_8 + 0x28
                        rsi[0xb] = var_128_1:8.q
                        
                        if (rdx_8 == 0)
                            rcx_16 = r8_3 + 0x30
                        
                        rsi[6] = rcx_16
                        uint64_t r9_2
                        
                        if (*(r8_3 + 0x88) != 4)
                            r9_2 = zx.q(*(r8_3 + 0xa4))
                        else
                            r9_2 = 1
                        
                        var_1c0.d = rsi[4].d
                        void var_d8
                        *(rsi + 0x38) = *sub_14103e460(&var_d8, rsi + 0x48, zx.q(*(r8_3 + 0xa6)), 
                            r9_2, *(r8_3 + 0xa8), var_1c0, var_1b8, var_1b0, var_1a8, var_1a0, 
                            var_198, var_190, rax_11, var_180, var_78, var_170, var_168)
                        sub_141010dd8(sub_141022ce0(rsi[1]), *(*(rbx_3 + 0x10) + 0x20), &rsi[9], 
                            rsi[2])
                        rdi_2 = var_138
                        r13_1 = var_170.q
                        rbx_2 = var_180
                    
                    int32_t rdx_11 = rbx_2 + r15_2
                    
                    if (rdx_11 u< r13_1[0x2f].d)
                        void* rcx_20 = &r13_1[0x2d]
                        void* rax_28 = *(rcx_20 + 8)
                        
                        if (rax_28 != 0)
                            rcx_20 = rax_28
                        
                        zmm6 = sub_1410407f0(rcx_20 + (sx.q(rdx_11) << 3), rsi)
                    
                    rax_17 = rax_7
                    r15_2 += 1
                while (r15_2 u< rax_17)
                
                i_2 = i_3
            
            rbx_2 += rax_17
            i = i_2
            i_2 -= 1
            var_180 = rbx_2
            i_3 = i_2
        while (i != 1)

if (((var_68 u>> 1).b & 1) != 0)
    uint128_t var_58_1 = zmm6
    int64_t var_160
    __builtin_memset(&var_160, 0, 0x18)
    int32_t rax_30
    
    if (var_78 == 0x13)
        rax_30 = 0x14
    else if (var_78 == 0x27)
        rax_30 = 0x28
    else if (var_78 == 0x2c)
        rax_30 = 0x2d
    else
        rax_30 = 0x37
        
        if (var_78 != 0x35)
            rax_30 = var_78
    
    var_160.d = rax_30
    int64_t var_158
    
    if (var_74 != 1)
        var_160:4.d = 5
    else
        var_160:4.d = 3
        var_158:4.d = 0
    
    if (rax_30 == 0x14 || rax_30 == 0x2d)
        r12.b = 1
    else
        r12.b = 0
    
    int64_t var_150
    zmm6 = zx.o(var_150)
    
    for (int32_t i_1 = 0; i_1 u< 4; i_1 += 1)
        int32_t rax_31 = 0
        
        if ((i_1.b & 0x21) != 0)
            rax_31 = 1
        
        var_158.d = rax_31
        
        if ((i_1.b & 0x12) != 0 && r12.b != 0)
            var_158.d = rax_31 | 2
        
        void*** rax_33 = j_sub_140a82f30(0xb0)
        void*** rsi_1 = rax_33
        
        if (rax_33 == 0)
            rsi_1 = nullptr
        else
            *rax_33 = &data_142f009e0
            rax_33[1] = rdi_2
            rax_33[2] = 0
            
            if (rdi_2 != 0)
                void var_e0
                int64_t* rax_34
                rax_34, zmm6 = sub_141013ee0(rdi_2 + 0x130, &var_e0, &rax_33[3])
                rsi_1[2] = *rax_34
            
            void* rbx_5 = var_168.q
            int128_t zmm0_1 = var_160.o
            rsi_1[4].d = 3
            rsi_1[0xc] = &data_142d3ff08
            rsi_1[0xd].d = 0
            *(rsi_1 + 0x6c) = 0
            rsi_1[0xe].w = 0x100
            rsi_1[0xf] = 0
            rsi_1[0x10].b = 1
            *rsi_1 = &data_142f009e8
            rsi_1[0xc] = &data_142f009f0
            rsi_1[0x11].b = 1
            *(rsi_1 + 0x89) = r12.b
            rsi_1[5] = rbx_5
            void* r8_7 = *(rbx_5 + 0x10)
            void* rdx_14 = *(r8_7 + 0x28)
            *(rsi_1 + 0x48) = zmm0_1
            void* rcx_25 = rdx_14 + 0x28
            rsi_1[0xb] = zmm6.q
            
            if (rdx_14 == 0)
                rcx_25 = r8_7 + 0x30
            
            rsi_1[6] = rcx_25
            uint64_t r9_4
            
            if (*(r8_7 + 0x88) != 4)
                r9_4 = zx.q(*(r8_7 + 0xa4))
            else
                r9_4 = 1
            
            var_1c0.d = rsi_1[4].d
            void var_c8
            *(rsi_1 + 0x38) = *sub_14103e2d0(&var_c8, rsi_1 + 0x48, zx.q(*(r8_7 + 0xa6)), r9_4, 
                *(r8_7 + 0xa8), var_1c0, var_1b8, var_1b0, var_1a8, var_1a0, var_198, var_190, 
                rax_11, var_180, var_78, var_170, var_168)
            sub_141042f40(sub_141022ce0(rsi_1[1]), *(*(rbx_5 + 0x10) + 0x20), &rsi_1[9], rsi_1[2])
            void* rbx_7 = *(var_168.q + 0x10)
            
            if (rsi_1[0x11].b != 0)
                uint64_t r9_6 = 1
                
                if (*(rbx_7 + 0x88) != 4)
                    r9_6 = zx.q(*(rbx_7 + 0xa4))
                
                var_1c0.d = 1
                void var_b8
                *(rsi_1 + 0x8a) = *sub_14103e2d0(&var_b8, &var_160, zx.q(*(rbx_7 + 0xa6)), r9_6, 
                    *(rbx_7 + 0xa8), var_1c0)
            
            if (*(rsi_1 + 0x89) != 0)
                uint64_t r9_7 = 1
                
                if (*(rbx_7 + 0x88) != 4)
                    r9_7 = zx.q(*(rbx_7 + 0xa4))
                
                var_1c0.d = 2
                void var_a8
                *(rsi_1 + 0x9a) = *sub_14103e2d0(&var_a8, &var_160, zx.q(*(rbx_7 + 0xa6)), r9_7, 
                    *(rbx_7 + 0xa8), var_1c0)
            
            r13_1 = var_170.q
        
        if (i_1 u< 4)
            zmm6 = sub_1410407f0((zx.q(i_1) << 3) + 0x188 + r13_1, rsi_1)
            int32_t rcx_33 = r13_1[0x35].d
            
            if (i_1 + 1 u>= rcx_33)
                rcx_33 = i_1 + 1
            
            r13_1[0x35].d = rcx_33
        
        rdi_2 = var_138
    
    r12 = rax_10

int32_t var_f8 = zx.o(0).d
int64_t var_108 = 0x1688
int64_t var_f4 = 0
int32_t var_ec = 0
int32_t var_110 = r12
int32_t var_10c = 9
int32_t var_100 = 0
uint32_t var_fc = rax_7
void*** rax_49 = j_sub_140a82f30(0xa8)

if (rax_49 != 0)
    var_1c0.b = 0
    r14 = sub_14103fc50(rax_49, var_138, &var_110, &r13_1[0x17], 0xffffffff, var_1c0.b)

sub_1405d16e0(&r13_1[0x2c], r14)
sub_14103b010(r13_1, nullptr)
*arg2 = r13_1

if (r13_1 != 0)
    r13_1[1].d += 1

__security_check_cookie(rax_1 ^ &var_1e8)
return arg2
