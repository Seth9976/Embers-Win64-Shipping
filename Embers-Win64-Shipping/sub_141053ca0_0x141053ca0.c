// 函数: sub_141053ca0
// 地址: 0x141053ca0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void var_1f8
int64_t rax_1 = __security_cookie ^ &var_1f8
void* rbx = **(arg1 + 0x20)
int32_t var_190 = arg4
void var_a0
(*(*arg6 + 0x50))(arg6, &var_a0)
void*** r14 = nullptr
int16_t i_5
uint64_t i_3 = zx.q(i_5)
int16_t var_82
uint32_t rax_7 = zx.d(var_82)
int64_t rax_9 = 0
int32_t var_70

if ((var_70.b & 1) != 0)
    rax_9 = 0x10000

int64_t var_98 = rax_9
int32_t var_80
int32_t rax_10 = sub_140fe7330(var_80, (arg4 u>> 4).b & 1)
void* rdx_3 = *(rbx + 0x9d8)
int32_t r12 = rax_10
void*** rax_11 = j_sub_140a82f30(0x128)
void* const var_1c8
int32_t var_1c0
void*** rbx_1
void* rsi_1

if (rax_11 == 0)
    rsi_1 = rdx_3
    rbx_1 = nullptr
else
    var_1c0 = 1
    var_1c8 = nullptr
    rsi_1 = rdx_3
    rbx_1 = sub_14103f260(rax_11, rsi_1, *(rsi_1 + 0x10), arg6, 0, &var_a0, var_1c8, var_1c0)

rbx_1[1].d += 1
void*** rax_13 = j_sub_140a82f30(0x210)
int128_t* var_1d0
char var_1b8
int32_t var_1b0
int64_t var_1a8
int64_t var_1a0
int32_t var_7c
void*** rax_14

if (rax_13 == 0)
    rax_14 = nullptr
else
    var_1a0 = 0
    var_1a8 = arg5
    var_1b0 = var_190
    var_1b8 = 0
    var_1c0 = arg3
    var_1c8.d = var_7c
    var_1d0.d = rax_7
    int32_t var_90
    int32_t var_88
    rax_14 = sub_14103dfd0(rax_13, rsi_1, var_90, var_88, 1, var_1d0.d, var_1c8.d, var_1c0.b, 
        var_1b8, var_1b0, var_1a8)

int32_t var_188
var_188.q = rax_14
int32_t var_178
var_178.q = &rax_14[0x16]
uint128_t zmm6 = sub_141014320(&rax_14[0x16], rbx_1, 0, 0)
*(var_178.q + 8) = 5
rbx_1[1].d += 1
void* rbx_2 = var_188.q

if ((var_70.b & 1) != 0)
    *(rbx_2 + 0x178) = 0
    *(rbx_2 + 0x17c) = rax_7
    zmm6 = sub_14105aad0(rbx_2 + 0x68, rax_7)
    
    if (i_3.d != 0)
        uint32_t rcx_11 = rax_7
        int32_t rax_18 = 0
        uint64_t i_2 = i_3
        var_190 = 0
        int32_t var_150
        var_150.q = i_2
        uint64_t i
        
        do
            int32_t r15_2 = 0
            
            if (rcx_11 != 0)
                do
                    int128_t var_138_1 = zx.o(0)
                    
                    if (var_7c != 1)
                        int32_t var_13c_2 = 6
                    else
                        int32_t var_13c_1 = 4
                        var_138_1.d = r15_2
                        int32_t rax_19 = sub_141021240(var_80)
                        int32_t rax_20
                        int32_t rcx_14
                        bool cond:4_1
                        
                        if (rax_19 == 0x13)
                            rcx_14 = r12 - 0x15
                            cond:4_1 = r12 == 0x15
                        label_141053eff:
                            
                            if (cond:4_1)
                                rax_20 = 0
                            else
                                rax_20 = 1
                                
                                if (rcx_14 != 1)
                                    rax_20 = 0
                        else
                            if (rax_19 == 0x2c)
                                rcx_14 = r12 - 0x2e
                                cond:4_1 = r12 == 0x2e
                                goto label_141053eff
                            
                            rax_20 = 0
                        var_138_1:4.d = rax_20
                    
                    uint64_t i_6 = j_sub_140a82f30(0x88)
                    i_3 = i_6
                    
                    if (i_6 == 0)
                        i_3 = 0
                    else
                        *i_3 = &data_142f009c8
                        *(i_3 + 8) = rsi_1
                        *(i_3 + 0x10) = 0
                        
                        if (rsi_1 != 0)
                            void var_f0
                            int64_t* rax_21
                            rax_21, zmm6 = sub_141013ee0(rsi_1 + 0xb0, &var_f0, i_3 + 0x18)
                            *(i_3 + 0x10) = *rax_21
                        
                        void* rbx_3 = var_178.q
                        uint64_t r9_2 = 1
                        *(i_3 + 0x20) = 0
                        *(i_3 + 0x60) = &data_142d3ff08
                        *(i_3 + 0x68) = 0
                        *(i_3 + 0x6c) = 0
                        *(i_3 + 0x70) = 0x100
                        *(i_3 + 0x78) = 0
                        *(i_3 + 0x80) = 1
                        *i_3 = &data_142f009d0
                        *(i_3 + 0x60) = &data_142f009d8
                        *(i_3 + 0x28) = rbx_3
                        void* r8_3 = *(rbx_3 + 0x10)
                        void* rdx_9 = *(r8_3 + 0x28)
                        *(i_3 + 0x48) = r12.o
                        void* rcx_18 = rdx_9 + 0x28
                        *(i_3 + 0x58) = var_138_1:8.q
                        
                        if (rdx_9 == 0)
                            rcx_18 = r8_3 + 0x30
                        
                        *(i_3 + 0x30) = rcx_18
                        
                        if (*(r8_3 + 0x88) != 4)
                            r9_2 = zx.q(*(r8_3 + 0xa4))
                        
                        var_1d0.d = *(i_3 + 0x20)
                        void var_e0
                        *(i_3 + 0x38) = *sub_14103e460(&var_e0, i_3 + 0x48, zx.q(*(r8_3 + 0xa6)), 
                            r9_2, *(r8_3 + 0xa8), var_1d0, var_1c8, var_1c0, var_1b8, var_1b0, 
                            var_1a8, var_1a0)
                        sub_141010dd8(sub_141022ce0(*(i_3 + 8)), *(*(rbx_3 + 0x10) + 0x20), 
                            i_3 + 0x48, *(i_3 + 0x10))
                        rbx_2 = var_188.q
                    
                    rax_18 = var_190
                    int32_t rdx_12 = rax_18 + r15_2
                    
                    if (rdx_12 u< *(rbx_2 + 0x170))
                        void* rcx_22 = rbx_2 + 0x160
                        void* rax_28 = *(rcx_22 + 8)
                        
                        if (rax_28 != 0)
                            rcx_22 = rax_28
                        
                        zmm6 = sub_1410407f0(rcx_22 + (sx.q(rdx_12) << 3), i_3)
                        rax_18 = var_190
                    
                    rcx_11 = rax_7
                    r15_2 += 1
                    rsi_1 = rdx_3
                while (r15_2 u< rcx_11)
                
                i_2 = var_150.q
            
            rsi_1 = rdx_3
            rax_18 += rcx_11
            i = i_2
            i_2 -= 1
            var_190 = rax_18
            var_150.q = i_2
        while (i != 1)

if (((var_70 u>> 1).b & 1) != 0)
    uint128_t var_58_1 = zmm6
    int64_t var_168
    __builtin_memset(&var_168, 0, 0x18)
    int32_t rax_30
    
    if (var_80 == 0x13)
        rax_30 = 0x14
    else if (var_80 == 0x27)
        rax_30 = 0x28
    else if (var_80 == 0x2c)
        rax_30 = 0x2d
    else
        rax_30 = 0x37
        
        if (var_80 != 0x35)
            rax_30 = var_80
    
    var_168.d = rax_30
    int64_t var_160
    
    if (var_7c != 1)
        var_168:4.d = 5
    else
        var_168:4.d = 3
        var_160:4.d = 0
    
    char i_4
    
    if (rax_30 == 0x14 || rax_30 == 0x2d)
        i_3 = 1
        i_4 = 1
    else
        i_3.b = 0
        i_4 = 0
    
    int64_t var_158
    zmm6 = zx.o(var_158)
    
    for (int32_t i_1 = 0; i_1 u< 4; i_1 += 1)
        int32_t rax_31 = 0
        
        if ((i_1.b & 0x21) != 0)
            rax_31 = 1
        
        var_160.d = rax_31
        
        if ((i_1.b & 0x12) != 0 && i_3.b != 0)
            var_160.d = rax_31 | 2
        
        void*** rax_33 = j_sub_140a82f30(0xb0)
        void*** rsi_3 = rax_33
        
        if (rax_33 == 0)
            rsi_3 = nullptr
        else
            *rax_33 = &data_142f009e0
            rax_33[1] = rdx_3
            rax_33[2] = 0
            
            if (rdx_3 != 0)
                void var_e8
                int64_t* rax_34
                rax_34, zmm6 = sub_141013ee0(rdx_3 + 0x130, &var_e8, &rax_33[3])
                rsi_3[2] = *rax_34
            
            void* rbx_5 = var_178.q
            int128_t zmm0_1 = var_168.o
            rsi_3[4].d = 3
            uint64_t r9_4 = 1
            rsi_3[0xc] = &data_142d3ff08
            rsi_3[0xd].d = 0
            *(rsi_3 + 0x6c) = 0
            rsi_3[0xe].w = 0x100
            rsi_3[0xf] = 0
            rsi_3[0x10].b = 1
            *rsi_3 = &data_142f009e8
            rsi_3[0xc] = &data_142f009f0
            rsi_3[0x11].b = 1
            *(rsi_3 + 0x89) = i_3.b
            rsi_3[5] = rbx_5
            void* r8_7 = *(rbx_5 + 0x10)
            void* rdx_15 = *(r8_7 + 0x28)
            *(rsi_3 + 0x48) = zmm0_1
            void* rcx_27 = rdx_15 + 0x28
            rsi_3[0xb] = zmm6.q
            
            if (rdx_15 == 0)
                rcx_27 = r8_7 + 0x30
            
            rsi_3[6] = rcx_27
            
            if (*(r8_7 + 0x88) != 4)
                r9_4 = zx.q(*(r8_7 + 0xa4))
            
            var_1d0.d = rsi_3[4].d
            void var_d0
            *(rsi_3 + 0x38) = *sub_14103e2d0(&var_d0, rsi_3 + 0x48, zx.q(*(r8_7 + 0xa6)), r9_4, 
                *(r8_7 + 0xa8), var_1d0, var_1c8, var_1c0, var_1b8, var_1b0, var_1a8, var_1a0, i_4, 
                var_190, var_188, var_80, var_178, rdx_3)
            sub_141042f40(sub_141022ce0(rsi_3[1]), *(*(rbx_5 + 0x10) + 0x20), &rsi_3[9], rsi_3[2])
            void* rbx_7 = *(var_178.q + 0x10)
            
            if (rsi_3[0x11].b != 0)
                uint64_t r9_6 = 1
                
                if (*(rbx_7 + 0x88) != 4)
                    r9_6 = zx.q(*(rbx_7 + 0xa4))
                
                var_1d0.d = 1
                void var_c0
                *(rsi_3 + 0x8a) = *sub_14103e2d0(&var_c0, &var_168, zx.q(*(rbx_7 + 0xa6)), r9_6, 
                    *(rbx_7 + 0xa8), var_1d0)
            
            if (*(rsi_3 + 0x89) != 0)
                uint64_t r9_7 = 1
                
                if (*(rbx_7 + 0x88) != 4)
                    r9_7 = zx.q(*(rbx_7 + 0xa4))
                
                var_1d0.d = 2
                void var_b0
                *(rsi_3 + 0x9a) = *sub_14103e2d0(&var_b0, &var_168, zx.q(*(rbx_7 + 0xa6)), r9_7, 
                    *(rbx_7 + 0xa8), var_1d0)
        
        rbx_2 = var_188.q
        
        if (i_1 u< 4)
            zmm6 = sub_1410407f0(rbx_2 + ((zx.q(i_1) + 0x30) << 3), rsi_3)
            int32_t rcx_34 = *(rbx_2 + 0x1a0)
            
            if (i_1 + 1 u>= rcx_34)
                rcx_34 = i_1 + 1
            
            *(rbx_2 + 0x1a0) = rcx_34
        
        i_3 = zx.q(i_4)
    
    r12 = rax_10

int128_t var_11c
__builtin_memset(&var_11c, 0, 0x1c)
int32_t var_120 = 0x1688
int32_t var_128 = r12

if (var_7c != 1)
    int32_t var_124_1 = 6
else
    var_11c:8.d = rax_7
    int32_t var_124 = 4
    var_11c:4.d = 0
    int32_t rax_50 = sub_141021240(var_80)
    
    if (rax_50 == 0x13)
        if (r12 == 0x15 || r12 != 0x16)
            var_11c:0xc.d = 0
        else
            var_11c:0xc.d = 1
    else if (rax_50 != 0x2c || r12 == 0x2e || r12 != 0x2f)
        var_11c:0xc.d = 0
    else
        var_11c:0xc.d = 1

void*** rax_51 = j_sub_140a82f30(0xa8)

if (rax_51 != 0)
    var_1d0.b = 0
    r14 = sub_14103fc50(rax_51, rdx_3, &var_128, rbx_2 + 0xb0, 0xffffffff, var_1d0.b)

sub_1405d16e0(rbx_2 + 0x158, r14)
sub_14103af50(rbx_2, nullptr)
*arg2 = rbx_2

if (rbx_2 != 0)
    *(rbx_2 + 8) += 1

__security_check_cookie(rax_1 ^ &var_1f8)
return arg2
