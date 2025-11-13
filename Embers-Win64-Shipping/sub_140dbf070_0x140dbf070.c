// 函数: sub_140dbf070
// 地址: 0x140dbf070
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void var_2f8
int64_t rax_1 = __security_cookie ^ &var_2f8
int64_t* rbx = *(arg1 + 0x18)
int64_t* rax_2 = rbx
void* r12 = nullptr
int32_t rdx = 0
int32_t i_9 = 0
int32_t var_25c = 0
int32_t var_2c4 = 0
void* var_268 = nullptr
int32_t i_6 = 0
int64_t* var_248 = rbx

if (rbx == 0)
    goto label_140dbf0f5

int32_t rax_3 = rbx[1].d

if (rax_3 == 0)
    var_248 = nullptr
else
    rbx[1].d = rax_3 + 1
    rax_2 = rbx
label_140dbf0f5:
    
    if (rax_2 != 0)
        r12 = *(arg1 + 0x10)

uint32_t i_10 = 0
int32_t rdi = 0
int32_t rsi_1

while (true)
    char var_1e8
    void var_1e0
    int64_t* var_a0
    int64_t var_98
    
    if (rdi s>= 0 && rdi s< *(arg1 + 8))
        i_10 += 1
        
        if (i_10 s>= 0x3e8)
            var_1e8 = data_1439ae51c
            int128_t var_a8
            __builtin_memset(&var_a8, 0, 0x20)
            int64_t var_c0_1 = 0
            int32_t var_b8_1 = 0
            int32_t var_b4_1 = 4
            char var_b0_1 = 0
            sub_140d963a0(arg2, &var_1e8)
            sub_140596d80(&var_98)
            
            if (var_a0 != 0)
                var_a0[1].d -= 1
                
                if (var_a0[1].d == 1)
                    (**var_a0)(var_a0)
                    int32_t temp3_1 = *(var_a0 + 0xc)
                    *(var_a0 + 0xc) -= 1
                    
                    if (temp3_1 == 1)
                        (*(*var_a0 + 8))(var_a0, 1)
            
            sub_140d94d20(&var_1e0)
            rsi_1 = 1
            break
        
        int64_t r15_1 = 0
        int64_t* rcx_2 = (sx.q(rdi) << 4) + *arg1
        void* const rbx_1 = rcx_2[1]
        
        if (rbx_1 != 0)
            int32_t rax_5 = *(rbx_1 + 8)
            
            if (rax_5 == 0)
                rbx_1 = nullptr
            else
                *(rbx_1 + 8) = rax_5 + 1
                
                if (rbx_1 != 0)
                    r15_1 = *rcx_2
        
        int64_t i_12 = sx.q(i_9)
        i_9 = (i_12 + 1).d
        i_6 = i_9
        
        if (i_9 s> rdx)
            arg5 = sub_1405a4f90(&var_268)
            rdx = var_25c
            i_6 = i_9
        
        rdi += 1
        int64_t* rax_9 = (i_12 << 4) + var_268
        *rax_9 = r15_1
        rax_9[1] = rbx_1
        continue
    
    int128_t zmm6
    int128_t var_48_1 = zmm6
    int128_t zmm7
    int128_t var_58_1 = zmm7
    int128_t zmm8
    int128_t var_68_1 = zmm8
    uint128_t zmm9
    uint128_t var_78_1 = zmm9
    int64_t var_2b0_1 = 0
    int128_t* var_2b8
    bool cond:1_1
    int32_t var_2d8
    int64_t* var_288
    int64_t var_258
    void var_230
    int64_t* var_228
    int128_t var_220
    int128_t var_210
    int128_t var_200
    int64_t var_1f0
    
    if (data_143e2435c == 0)
        void* r13
        r13.b = 0
        int128_t* rax_76 = nullptr
        var_2b8 = nullptr
        int32_t r8_1 = 0
        
        if (r12 != 0)
            r13.b = 1
            sub_140e190b0(r12, &var_220, arg5)
            
            if (var_248 != 0)
                var_248[1].d += 2
            
            zmm6 = var_220
            
            if (var_248 != 0)
                int32_t rax_77 = var_248[1].d
                var_248[1].d = rax_77
                
                if (rax_77 == 0)
                    (**var_248)(var_248)
                    int32_t temp4_1 = *(var_248 + 0xc)
                    *(var_248 + 0xc) -= 1
                    
                    if (temp4_1 == 1)
                        (*(*var_248 + 8))(var_248, 1)
                
                var_248[1].d += 1
            
            var_2b0_1.d = 1
            sub_1407755b0(&var_2b8)
            int128_t* rax_80 = var_2b8
            *rax_80 = zmm6
            rax_80[1] = var_210
            rax_80[2] = var_200
            rax_80[3].q = var_1f0
            *(rax_80 + 0x38) = r12
            rax_80[4].q = var_248
            
            if (var_248 != 0)
                var_248[1].d += 1
            
            *(rax_80 + 0x48) = 0
            rax_80[5].q = 0
            
            if (var_248 != 0)
                var_248[1].d -= 1
                
                if (var_248[1].d == 1)
                    (**var_248)(var_248)
                    int32_t temp14_1 = *(var_248 + 0xc)
                    *(var_248 + 0xc) -= 1
                    
                    if (temp14_1 == 1)
                        (*(*var_248 + 8))(var_248, 1)
                
                var_248[1].d -= 1
                
                if (var_248[1].d == 1)
                    (**var_248)(var_248)
                    int32_t temp18_1 = *(var_248 + 0xc)
                    *(var_248 + 0xc) -= 1
                    
                    if (temp18_1 == 1)
                        (*(*var_248 + 8))(var_248, 1)
                
                var_248[1].d -= 1
                
                if (var_248[1].d == 1)
                    (**var_248)(var_248)
                    int32_t temp24_1 = *(var_248 + 0xc)
                    *(var_248 + 0xc) -= 1
                    
                    if (temp24_1 == 1)
                        (*(*var_248 + 8))(var_248, 1)
            
            int32_t rcx_77 = i_6 - 1
            var_258.o = zx.o(0)
            int64_t r15_3 = var_258
            void* r14_3 = var_268 + 8
            int64_t* var_250
            int64_t* rdi_5 = var_250
            var_1e8 = arg6
            int32_t rax_88 = 0
            void* var_290_2 = r14_3
            void* var_c0_2 = nullptr
            int32_t var_b8_2 = 0
            int32_t var_b4_2 = 4
            char var_b0_2 = 1
            int32_t var_2c4_1 = 0
            int32_t var_298_2 = rcx_77
            int64_t var_278_2 = r15_3
            
            while (true)
                if (rax_88 s< rcx_77)
                    int64_t* r12_2 = *r14_3
                    int64_t* rbx_9 = *(r14_3 - 8)
                    int64_t* var_2a0_2 = rbx_9
                    var_288 = r12_2
                    
                    if (r12_2 != 0)
                        r12_2[1].d += 1
                    
                    r13.b = 0
                    
                    if (rbx_9 != 0)
                        sub_140dbbb40(&var_1e0, 0)
                        sub_140de8410(rbx_9, &var_220, &var_1e8)
                        void* r9_1 = var_c0_2
                        int32_t r14_4 = 0
                        int64_t r12_3 = 0
                        
                        while (r14_4 s< var_b8_2)
                            void* rax_89 = &var_1e0
                            
                            if (r9_1 != 0)
                                rax_89 = r9_1
                            
                            int64_t rcx_81 = *(var_290_2 + 8)
                            
                            if (rcx_81 != 0 && rcx_81 == *(rax_89 + 0x38 + r12_3))
                                if (arg4 != 0 && r15_3 == 0)
                                    var_2d8.q = arg4 + 0x18
                                    int64_t* rax_92 = (*(*rbx_9 + 0x128))(rbx_9, &var_230, 
                                        rax_89 + 0x38 + r12_3, &var_220, var_2d8, arg4 + 0x20)
                                    
                                    if (&var_258 != rax_92)
                                        int64_t* rbx_10 = rdi_5
                                        var_278_2 = *rax_92
                                        *rax_92 = 0
                                        int64_t* rcx_86 = rax_92[1]
                                        
                                        if (rcx_86 != rdi_5)
                                            rax_92[1] = 0
                                            rdi_5 = rcx_86
                                            
                                            if (rbx_10 != 0)
                                                rbx_10[1].d -= 1
                                                
                                                if (rbx_10[1].d == 1)
                                                    (**rbx_10)(rbx_10)
                                                    int32_t temp49_1 = *(rbx_10 + 0xc)
                                                    *(rbx_10 + 0xc) -= 1
                                                    
                                                    if (temp49_1 == 1)
                                                        (*(*rbx_10 + 8))(rbx_10, 
                                                            zx.q((r15_3 + 1).d))
                                    
                                    if (var_228 != 0)
                                        var_228[1].d -= 1
                                        
                                        if (var_228[1].d == 1)
                                            (**var_228)(var_228)
                                            int32_t temp47_1 = *(var_228 + 0xc)
                                            *(var_228 + 0xc) -= 1
                                            
                                            if (temp47_1 == 1)
                                                (*(*var_228 + 8))(var_228, 1)
                                    
                                    r9_1 = var_c0_2
                                
                                void* rbx_12 = &var_1e0
                                r13.b = 1
                                
                                if (r9_1 != 0)
                                    rbx_12 = r9_1
                                
                                int128_t* rbx_13 = rbx_12 + r12_3
                                zmm6 = *rbx_13
                                int64_t r15_4 = *(rbx_13 + 0x38)
                                zmm7 = rbx_13[1]
                                zmm8 = rbx_13[2]
                                zmm9 = zx.o(rbx_13[3].q)
                                int64_t* rbx_14 = rbx_13[4].q
                                
                                if (rbx_14 != 0)
                                    rbx_14[1].d += 1
                                
                                if (rdi_5 != 0)
                                    rdi_5[1].d += 1
                                
                                int64_t r8_4 = sx.q(var_2b0_1.d)
                                int32_t rax_97 = (r8_4 + 1).d
                                var_2b0_1.d = rax_97
                                
                                if (rax_97 s> var_2b0_1:4.d)
                                    sub_1407755b0(&var_2b8)
                                
                                int128_t* rcx_93 = r8_4 * 0x58 + var_2b8
                                *rcx_93 = zmm6
                                rcx_93[1] = zmm7
                                rcx_93[2] = zmm8
                                rcx_93[3].q = zmm9.q
                                *(rcx_93 + 0x38) = r15_4
                                rcx_93[4].q = rbx_14
                                
                                if (rbx_14 != 0)
                                    rbx_14[1].d += 1
                                
                                r15_3 = var_278_2
                                *(rcx_93 + 0x48) = r15_3
                                rcx_93[5].q = rdi_5
                                
                                if (rbx_14 != 0)
                                    rbx_14[1].d -= 1
                                    
                                    if (rbx_14[1].d == 1)
                                        (**rbx_14)(rbx_14)
                                        int32_t temp53_1 = *(rbx_14 + 0xc)
                                        *(rbx_14 + 0xc) -= 1
                                        
                                        if (temp53_1 == 1)
                                            (*(*rbx_14 + 8))(rbx_14, 1)
                                
                                r9_1 = var_c0_2
                                void* rdx_21 = &var_1e0
                                rbx_9 = var_2a0_2
                                
                                if (r9_1 != 0)
                                    rdx_21 = r9_1
                                
                                int128_t* rax_101 = rdx_21 + sx.q(r14_4) * 0x48
                                
                                if (&var_220 != rax_101)
                                    var_220 = *rax_101
                                    uint128_t var_210_2 = rax_101[1]
                                    int128_t var_200_2 = rax_101[2]
                                    uint64_t var_1f0_2 = rax_101[3].q
                            
                            r14_4 += 1
                            r12_3 += 0x48
                            
                            if (r13.b != 0)
                                break
                        
                        r12_2 = var_288
                        r14_3 = var_290_2
                        rax_88 = var_2c4_1
                    
                    if (r13.b == 0 && arg3 == 1)
                        if (r12_2 != 0)
                            r12_2[1].d -= 1
                            
                            if (r12_2[1].d == 1)
                                (**r12_2)(r12_2)
                                int32_t temp37_1 = *(r12_2 + 0xc)
                                *(r12_2 + 0xc) -= 1
                                
                                if (temp37_1 == 1)
                                    (*(*r12_2 + 8))(r12_2, 1)
                        
                        if (rdi_5 != 0)
                            rdi_5[1].d -= 1
                            
                            if (rdi_5[1].d == 1)
                                (**rdi_5)(rdi_5)
                                int32_t temp40_1 = *(rdi_5 + 0xc)
                                *(rdi_5 + 0xc) -= 1
                                
                                if (temp40_1 == 1)
                                    (*(*rdi_5 + 8))(rdi_5, 1)
                        
                        sub_140d94d20(&var_1e0)
                        rsi_1 = 1
                        goto label_140dbfeec
                    
                    if (r12_2 != 0)
                        r12_2[1].d -= 1
                        
                        if (r12_2[1].d == 1)
                            (**r12_2)(r12_2)
                            int32_t temp32_1 = *(r12_2 + 0xc)
                            *(r12_2 + 0xc) -= 1
                            
                            if (temp32_1 == 1)
                                (*(*r12_2 + 8))(r12_2, 1)
                            
                            rax_88 = var_2c4_1
                    
                    rax_88 += 1
                    r14_3 += 0x10
                    var_2c4_1 = rax_88
                    var_290_2 = r14_3
                    
                    if (r13.b != 0)
                        rcx_77 = var_298_2
                        continue
                
                if (rdi_5 != 0)
                    rdi_5[1].d -= 1
                    
                    if (rdi_5[1].d == 1)
                        (**rdi_5)(rdi_5)
                        int32_t temp28_1 = *(rdi_5 + 0xc)
                        *(rdi_5 + 0xc) -= 1
                        
                        if (temp28_1 == 1)
                            (*(*rdi_5 + 8))(rdi_5, 1)
                
                sub_140d94d20(&var_1e0)
                r8_1 = var_2b0_1.d
                rax_76 = var_2b8
                break
        
        var_258 = 0
        sub_140d8b570(&var_258, rax_76, r8_1, 0, 0)
        sub_140d963a0(arg2, sub_140d943d0(&var_1e8, &var_258))
        sub_140596d80(&var_98)
        
        if (var_a0 != 0)
            var_a0[1].d -= 1
            
            if (var_a0[1].d == 1)
                (**var_a0)(var_a0)
                int32_t temp2_1 = *(var_a0 + 0xc)
                *(var_a0 + 0xc) -= 1
                
                if (temp2_1 == 1)
                    (*(*var_a0 + 8))(var_a0, 1)
        
        sub_140d94d20(&var_1e0)
        cond:1_1 = r13.b == 0
    else
        i_10.b = 0
        int128_t* rbx_3 = nullptr
        var_2b8 = nullptr
        int32_t i_2 = 0
        
        if (r12 != 0)
            char i_4 = 1
            sub_140e190b0(r12, &var_220, arg5)
            
            if (var_248 != 0)
                var_248[1].d += 2
            
            zmm6 = var_220
            
            if (var_248 != 0)
                int32_t rax_13 = var_248[1].d
                var_248[1].d = rax_13
                
                if (rax_13 == 0)
                    (**var_248)(var_248)
                    int32_t temp6_1 = *(var_248 + 0xc)
                    *(var_248 + 0xc) -= 1
                    
                    if (temp6_1 == 1)
                        (*(*var_248 + 8))(var_248, 1)
                
                var_248[1].d += 1
            
            var_2b0_1.d = 1
            sub_1407755b0(&var_2b8)
            int128_t* rax_16 = var_2b8
            int128_t* var_2a0_1 = rax_16
            *rax_16 = zmm6
            rax_16[1] = var_210
            rax_16[2] = var_200
            rax_16[3].q = var_1f0
            *(rax_16 + 0x38) = r12
            rax_16[4].q = var_248
            
            if (var_248 != 0)
                var_248[1].d += 1
            
            *(rax_16 + 0x48) = 0
            rax_16[5].q = 0
            
            if (var_248 != 0)
                var_248[1].d -= 1
                
                if (var_248[1].d == 1)
                    (**var_248)(var_248)
                    int32_t temp16_1 = *(var_248 + 0xc)
                    *(var_248 + 0xc) -= 1
                    
                    if (temp16_1 == 1)
                        (*(*var_248 + 8))(var_248, 1)
                
                var_248[1].d -= 1
                
                if (var_248[1].d == 1)
                    (**var_248)(var_248)
                    int32_t temp20_1 = *(var_248 + 0xc)
                    *(var_248 + 0xc) -= 1
                    
                    if (temp20_1 == 1)
                        (*(*var_248 + 8))(var_248, 1)
                
                var_248[1].d -= 1
                
                if (var_248[1].d == 1)
                    (**var_248)(var_248)
                    int32_t temp26_1 = *(var_248 + 0xc)
                    *(var_248 + 0xc) -= 1
                    
                    if (temp26_1 == 1)
                        (*(*var_248 + 8))(var_248, 1)
            
            int32_t rcx_19 = 0
            int32_t rdx_6 = i_6 - 1
            void* r14_1 = var_268 + 0x10
            var_288.o = zx.o(0)
            int32_t var_280
            int64_t* r13_1 = var_280.q
            int64_t* r15_2 = var_288
            int32_t i_5 = var_2b0_1.d
            void* var_290_1 = r14_1
            int32_t var_270_1 = 0
            int32_t var_298_1 = rdx_6
            int64_t* var_278_1 = var_288
            
            while (true)
                if (rcx_19 s< rdx_6)
                    int64_t* rsi_2 = *(r14_1 - 8)
                    int64_t* r12_1 = *(r14_1 - 0x10)
                    
                    if (rsi_2 != 0)
                        rsi_2[1].d += 1
                    
                    i_4 = 0
                    
                    if (r12_1 != 0)
                        if (r12_1[0x37].d != 0)
                            int64_t* rcx_20 = r12_1[0x36]
                            
                            if (rcx_20 != 0 && (*(*rcx_20 + 0x28))(rcx_20) != 0)
                                int64_t* rcx_21
                                
                                if (r12_1[0x37].d == 0)
                                    rcx_21 = nullptr
                                else
                                    rcx_21 = r12_1[0x36]
                                
                                char var_2c0
                                (*(*rcx_21 + 0x48))(rcx_21, &var_2c0)
                                r12_1[0x35].b = var_2c0
                        
                        if ((r12_1[0x35].b & arg6) != 0)
                            if (rsi_2 != 0)
                                rsi_2[1].d += 1
                            
                            void* rcx_22 = *r14_1
                            int32_t rdx_8 = var_2c4
                            
                            if (rcx_22 == 0)
                                i_2.b = 0
                            else
                                r15_2 = *(rcx_22 + 0x270)
                                rdx_8 |= 1
                                var_2c4 = rdx_8
                                
                                if (r15_2 == 0)
                                    i_2.b = 0
                                else
                                    int32_t rax_29 = r15_2[1].d
                                    
                                    if (rax_29 == 0)
                                        r15_2 = nullptr
                                        i_2.b = 0
                                    else
                                        r15_2[1].d = rax_29 + 1
                                        
                                        if (r15_2 == 0)
                                            i_2.b = 0
                                        else
                                            int64_t rax_31 = *(rcx_22 + 0x268)
                                            
                                            if (rax_31 == 0 || rax_31 != r12_1)
                                                i_2.b = 0
                                            else
                                                i_2.b = 1
                            
                            if ((rdx_8.b & 1) != 0)
                                var_2c4 = rdx_8 & 0xfffffffe
                                
                                if (r15_2 != 0)
                                    r15_2[1].d -= 1
                                    
                                    if (r15_2[1].d == 1)
                                        (**r15_2)(r15_2)
                                        int32_t temp44_1 = *(r15_2 + 0xc)
                                        *(r15_2 + 0xc) -= 1
                                        
                                        if (temp44_1 == 1)
                                            (*(*r15_2 + 8))(r15_2, 1)
                            
                            if (i_2.b != 0)
                                if (arg4 != 0 && var_278_1 == 0)
                                    var_258 = *r14_1
                                    int64_t* rax_35 = *(r14_1 + 8)
                                    
                                    if (rax_35 != 0)
                                        rax_35[1].d += 1
                                    
                                    var_2d8.q = arg4 + 0x18
                                    void** rax_37 = (*(*r12_1 + 0x128))(r12_1, &var_230, &var_258, 
                                        &var_220, var_2d8, arg4 + 0x20, i_4)
                                    
                                    if (&var_288 != rax_37)
                                        var_278_1 = *rax_37
                                        int64_t* rdi_1 = r13_1
                                        *rax_37 = nullptr
                                        int64_t* rcx_29 = rax_37[1]
                                        
                                        if (rcx_29 != r13_1)
                                            rax_37[1] = 0
                                            r13_1 = rcx_29
                                            
                                            if (rdi_1 != 0)
                                                rdi_1[1].d -= 1
                                                
                                                if (rdi_1[1].d == 1)
                                                    (**rdi_1)(rdi_1)
                                                    int32_t temp59_1 = *(rdi_1 + 0xc)
                                                    *(rdi_1 + 0xc) -= 1
                                                    
                                                    if (temp59_1 == 1)
                                                        (*(*rdi_1 + 8))(rdi_1, 1)
                                    
                                    if (var_228 != 0)
                                        var_228[1].d -= 1
                                        
                                        if (var_228[1].d == 1)
                                            (**var_228)(var_228)
                                            int32_t temp55_1 = *(var_228 + 0xc)
                                            *(var_228 + 0xc) -= 1
                                            
                                            if (temp55_1 == 1)
                                                (*(*var_228 + 8))(var_228, 1)
                                    
                                    if (rax_35 != 0)
                                        rax_35[1].d -= 1
                                        
                                        if (rax_35[1].d == 1)
                                            (**rax_35)(rax_35)
                                            int32_t temp58_1 = *(rax_35 + 0xc)
                                            *(rax_35 + 0xc) -= 1
                                            
                                            if (temp58_1 == 1)
                                                (*(*rax_35 + 8))(rax_35, 1)
                                
                                int64_t* rdi_4 = *(r14_1 + 8)
                                int64_t* rax_44 = *r14_1
                                i_4 = 1
                                var_288 = rax_44
                                
                                if (rdi_4 != 0)
                                    rdi_4[1].d += 1
                                
                                int128_t* rax_45 = sub_140e12190(rax_44)
                                zmm9 = zx.o(rax_45[3].q)
                                zmm6 = *rax_45
                                zmm7 = rax_45[1]
                                zmm8 = rax_45[2]
                                
                                if (rdi_4 != 0)
                                    int32_t rax_46 = rdi_4[1].d
                                    rdi_4[1].d = rax_46
                                    
                                    if (rax_46 == 0)
                                        (**rdi_4)(rdi_4)
                                        int32_t temp50_1 = *(rdi_4 + 0xc)
                                        *(rdi_4 + 0xc) -= 1
                                        
                                        if (temp50_1 == 1)
                                            (*(*rdi_4 + 8))(rdi_4, 1)
                                    
                                    if (rdi_4 != 0)
                                        rdi_4[1].d += 1
                                
                                if (r13_1 != 0)
                                    r13_1[1].d += 1
                                
                                int64_t i_11 = sx.q(i_5)
                                int32_t i_8 = (i_11 + 1).d
                                i_5 = i_8
                                var_2b0_1.d = i_8
                                
                                if (i_8 s> var_2b0_1:4.d)
                                    sub_1407755b0(&var_2b8)
                                    i_5 = var_2b0_1.d
                                    var_2a0_1 = var_2b8
                                
                                int64_t* rax_51 = var_288
                                int128_t* rcx_41 = i_11 * 0x58 + var_2a0_1
                                *rcx_41 = zmm6
                                rcx_41[1] = zmm7
                                rcx_41[2] = zmm8
                                rcx_41[3].q = zmm9.q
                                *(rcx_41 + 0x38) = rax_51
                                rcx_41[4].q = rdi_4
                                
                                if (rdi_4 != 0)
                                    rdi_4[1].d += 1
                                
                                *(rcx_41 + 0x48) = var_278_1
                                rcx_41[5].q = r13_1
                                
                                if (rdi_4 != 0)
                                    rdi_4[1].d -= 1
                                    
                                    if (rdi_4[1].d == 1)
                                        (**rdi_4)(rdi_4)
                                        int32_t temp61_1 = *(rdi_4 + 0xc)
                                        *(rdi_4 + 0xc) -= 1
                                        
                                        if (temp61_1 == 1)
                                            (*(*rdi_4 + 8))(rdi_4, 1)
                                    
                                    rdi_4[1].d -= 1
                                    
                                    if (rdi_4[1].d == 1)
                                        (**rdi_4)(rdi_4)
                                        int32_t temp62_1 = *(rdi_4 + 0xc)
                                        *(rdi_4 + 0xc) -= 1
                                        
                                        if (temp62_1 == 1)
                                            (*(*rdi_4 + 8))(rdi_4, 1)
                                
                                int128_t* rax_57 = sub_140e12190(r12_1)
                                r14_1 = var_290_1
                                
                                if (&var_220 != rax_57)
                                    var_220 = *rax_57
                                    uint128_t var_210_1 = rax_57[1]
                                    int128_t var_200_1 = rax_57[2]
                                    uint64_t var_1f0_1 = rax_57[3].q
                            
                            if (rsi_2 != 0)
                                rsi_2[1].d -= 1
                                
                                if (rsi_2[1].d == 1)
                                    (**rsi_2)(rsi_2)
                                    int32_t temp46_1 = *(rsi_2 + 0xc)
                                    *(rsi_2 + 0xc) -= 1
                                    
                                    if (temp46_1 == 1)
                                        (*(*rsi_2 + 8))(rsi_2, 1)
                    
                    i_2 = zx.d(i_4)
                    
                    if (i_2.b == 0 && arg3 == 1)
                        if (rsi_2 != 0)
                            rsi_2[1].d -= 1
                            
                            if (rsi_2[1].d == 1)
                                (**rsi_2)(rsi_2)
                                int32_t temp39_1 = *(rsi_2 + 0xc)
                                *(rsi_2 + 0xc) -= 1
                                
                                if (temp39_1 == 1)
                                    (*(*rsi_2 + 8))(rsi_2, 1)
                        
                        if (r13_1 != 0)
                            r13_1[1].d -= 1
                            
                            if (r13_1[1].d == 1)
                                (**r13_1)(r13_1)
                                int32_t temp41_1 = *(r13_1 + 0xc)
                                *(r13_1 + 0xc) -= 1
                                
                                if (temp41_1 == 1)
                                    (*(*r13_1 + 8))(r13_1, 1)
                        
                        rsi_1 = 1
                        goto label_140dbfeec
                    
                    if (rsi_2 != 0)
                        rsi_2[1].d -= 1
                        
                        if (rsi_2[1].d == 1)
                            (**rsi_2)(rsi_2)
                            int32_t temp34_1 = *(rsi_2 + 0xc)
                            *(rsi_2 + 0xc) -= 1
                            
                            if (temp34_1 == 1)
                                (*(*rsi_2 + 8))(rsi_2, 1)
                    
                    r14_1 += 0x10
                    rcx_19 = var_270_1 + 1
                    var_290_1 = r14_1
                    var_270_1 = rcx_19
                    
                    if (i_2.b != 0)
                        rdx_6 = var_298_1
                        continue
                
                if (r13_1 != 0)
                    r13_1[1].d -= 1
                    
                    if (r13_1[1].d == 1)
                        (**r13_1)(r13_1)
                        int32_t temp29_1 = *(r13_1 + 0xc)
                        *(r13_1 + 0xc) -= 1
                        
                        if (temp29_1 == 1)
                            (*(*r13_1 + 8))(r13_1, 1)
                
                rbx_3 = var_2a0_1
                i_10 = zx.d(i_4)
                i_2 = i_5
                break
        
        var_288 = nullptr
        int32_t i_7 = i_2
        
        if (i_2 != 0)
            sub_140afef10(&var_288, i_2, 0)
            int64_t* rax_68 = var_288
            void* rbx_6 = rbx_3 - rax_68
            void* rcx_59 = &rax_68[0xa]
            int32_t i
            
            do
                *(rcx_59 - 0x50) = *(rbx_6 + rcx_59 - 0x50)
                *(rcx_59 - 0x40) = *(rbx_6 + rcx_59 - 0x40)
                *(rcx_59 - 0x30) = *(rbx_6 + rcx_59 - 0x30)
                *(rcx_59 - 0x20) = *(rbx_6 + rcx_59 - 0x20)
                *(rcx_59 - 0x18) = *(rbx_6 + rcx_59 - 0x18)
                void* rax_70 = *(rbx_6 + rcx_59 - 0x10)
                *(rcx_59 - 0x10) = rax_70
                
                if (rax_70 != 0)
                    *(rax_70 + 8) += 1
                
                *(rcx_59 - 8) = *(rbx_6 + rcx_59 - 8)
                void* rax_72 = *(rbx_6 + rcx_59)
                *rcx_59 = rax_72
                
                if (rax_72 != 0)
                    *(rax_72 + 8) += 1
                
                rcx_59 += 0x58
                i = i_2
                i_2 -= 1
            while (i != 1)
        else
            int32_t var_27c_1 = 0
        
        sub_140d963a0(arg2, sub_140d943d0(&var_1e8, &var_288))
        sub_140596d80(&var_98)
        
        if (var_a0 != 0)
            var_a0[1].d -= 1
            
            if (var_a0[1].d == 1)
                (**var_a0)(var_a0)
                int32_t temp10_1 = *(var_a0 + 0xc)
                *(var_a0 + 0xc) -= 1
                
                if (temp10_1 == 1)
                    (*(*var_a0 + 8))(var_a0, 1)
        
        sub_140d94d20(&var_1e0)
        cond:1_1 = i_10.b == 0
    rsi_1.b = cond:1_1
label_140dbfeec:
    sub_140d94ad0(&var_2b8)
    break

if (var_248 != 0)
    var_248[1].d -= 1
    
    if (var_248[1].d == 1)
        (**var_248)(var_248)
        int32_t temp12_1 = *(var_248 + 0xc)
        *(var_248 + 0xc) -= 1
        
        if (temp12_1 == 1)
            (*(*var_248 + 8))(var_248, 1)

int32_t i_3 = i_6
void* r15_5 = var_268

if (i_3 != 0)
    int64_t* rdi_6 = r15_5 + 8
    int32_t i_1
    
    do
        int64_t* rbx_17 = *rdi_6
        
        if (rbx_17 != 0)
            rbx_17[1].d -= 1
            
            if (rbx_17[1].d == 1)
                (**rbx_17)(rbx_17)
                int32_t temp27_1 = *(rbx_17 + 0xc)
                *(rbx_17 + 0xc) -= 1
                
                if (temp27_1 == 1)
                    int64_t r8_5 = *rbx_17
                    (*(r8_5 + 8))(rbx_17, 1, r8_5)
        
        rdi_6 = &rdi_6[2]
        i_1 = i_3
        i_3 -= 1
    while (i_1 != 1)

if (r15_5 != 0)
    sub_140a74f90(r15_5)

__security_check_cookie(rax_1 ^ &var_2f8)
return zx.q(rsi_1)
