// 函数: sub_140959190
// 地址: 0x140959190
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void var_2a8
int64_t rax_1 = __security_cookie ^ &var_2a8
int32_t var_200 = 0
void* const r9 = arg2
int32_t r8 = 0
void* const var_1b8 = arg2
void* rdx = *(arg1 + 0x58)
uint32_t rcx = 0
char var_278 = 1
void* i_2 = sx.q(*(arg1 + 0x60)) * 0x50 + rdx
char var_260 = 1
int64_t var_e8 = 0
int32_t var_e0 = 0
int32_t var_bc = 0x80
int64_t var_d8
__builtin_memset(&var_d8, 0, 0x1c)
int32_t var_b8 = 0xffffffff
uint32_t var_b4 = 0
void* var_a8 = nullptr
int32_t var_a0 = 0
int16_t* var_270
int64_t var_258
int64_t var_248
int64_t var_238
void var_228
int32_t var_220
int64_t* var_218
void var_1fc
void var_1f8
int64_t* var_1f0
int32_t var_1a0
int64_t* var_198
int32_t var_190
int64_t* var_188
int32_t var_180
int64_t* var_178

if (rdx != i_2)
    int64_t* r13_1 = rdx + 0x30
    void* i = i_2
    var_1f0 = r13_1
    
    do
        void* r15_1 = *r13_1
        void* j = sx.q(r13_1[1].d) * 0x50 + r15_1
        
        if (r15_1 != j)
            char r13_2 = var_260
            int32_t* r15_2 = r15_1 + 0x40
            
            do
                r13_2 &= r15_2[2].b
                int16_t* const rcx_1
                
                if (*r15_2 == 0)
                    rcx_1 = &data_142d40450
                else
                    rcx_1 = *(r15_2 - 8)
                
                int32_t rax_7 = sub_140a54510(rcx_1, &data_142e30850)
                int32_t rax_8
                int32_t rcx_8
                int32_t* rdx_5
                int64_t* r14_1
                
                if (rax_7 != 0)
                    int16_t* const rcx_9
                    
                    if (*r15_2 == 0)
                        rcx_9 = &data_142d40450
                    else
                        rcx_9 = *(r15_2 - 8)
                    
                    int32_t rax_9 = sub_140a54510(rcx_9, &data_142e30858)
                    
                    if (rax_9 != 0)
                        int16_t* const rcx_16
                        
                        if (*r15_2 == 0)
                            rcx_16 = &data_142d40450
                        else
                            rcx_16 = *(r15_2 - 8)
                        
                        int32_t rax_10 = sub_140a54510(rcx_16, &data_142e30860)
                        
                        if (rax_10 != 0)
                            var_270 = nullptr
                            int64_t var_268_1 = 0
                            sub_1405947f0(&var_270, 6)
                            int32_t rsi_4 = var_268_1:4.d
                            int32_t rdi_4 = var_268_1.d + 6
                            var_268_1.d = rdi_4
                            
                            if (rdi_4 s> rsi_4)
                                sub_140594770(&var_270)
                                rsi_4 = var_268_1:4.d
                                rdi_4 = var_268_1.d
                            
                            int16_t* rbx_4 = var_270
                            UnDecorator::getReferenceType(rbx_4, u"OTHER", 0xc)
                            sub_140598750(&var_e8, &var_220)
                            r14_1 = var_218
                            *r14_1 = rbx_4
                            r14_1[1].d = rdi_4
                            *(r14_1 + 0xc) = rsi_4
                            var_270 = nullptr
                            int64_t var_268_2 = 0
                            r14_1[2].d = 0xffffffff
                            int16_t* rdx_16
                            
                            if (rdi_4 == 0)
                                rdx_16 = &data_142d40450
                            else
                                rdx_16 = *r14_1
                            
                            int32_t rcx_28
                            
                            if (rdi_4 == 0)
                                rcx_28 = 0
                            else
                                rcx_28 = rdi_4 - 1
                            
                            rax_8 = sub_1405969c0(rcx_28, rdx_16)
                            rcx_8 = var_220
                            rdx_5 = &var_228
                        else
                            var_238 = 0
                            int64_t var_230_1 = 0
                            sub_1405947f0(&var_238, rax_10 + 4)
                            int32_t rsi_3 = var_230_1:4.d
                            int32_t rdi_3 = var_230_1.d + 4
                            var_230_1.d = rdi_3
                            
                            if (rdi_3 s> rsi_3)
                                sub_140594770(&var_238)
                                rsi_3 = var_230_1:4.d
                                rdi_3 = var_230_1.d
                            
                            int64_t rbx_3 = var_238
                            UnDecorator::getReferenceType(rbx_3, &data_142e30860, 8)
                            sub_140598750(&var_e8, &var_180)
                            r14_1 = var_178
                            *r14_1 = rbx_3
                            r14_1[1].d = rdi_3
                            *(r14_1 + 0xc) = rsi_3
                            var_238 = 0
                            int64_t var_230_2 = 0
                            r14_1[2].d = 0xffffffff
                            int16_t* rdx_13
                            
                            if (rdi_3 == 0)
                                rdx_13 = &data_142d40450
                            else
                                rdx_13 = *r14_1
                            
                            if (rdi_3 == 0)
                                rax_8 = sub_1405969c0(0, rdx_13)
                                rcx_8 = var_180
                                rdx_5 = &var_1f8
                            else
                                rax_8 = sub_1405969c0(rdi_3 - 1, rdx_13)
                                rcx_8 = var_180
                                rdx_5 = &var_1f8
                    else
                        var_248 = 0
                        int64_t var_240_1 = 0
                        sub_1405947f0(&var_248, rax_9 + 4)
                        int32_t rsi_2 = var_240_1:4.d
                        int32_t rdi_2 = var_240_1.d + 4
                        var_240_1.d = rdi_2
                        
                        if (rdi_2 s> rsi_2)
                            sub_140594770(&var_248)
                            rsi_2 = var_240_1:4.d
                            rdi_2 = var_240_1.d
                        
                        int64_t rbx_2 = var_248
                        UnDecorator::getReferenceType(rbx_2, &data_142e30858, 8)
                        sub_140598750(&var_e8, &var_190)
                        r14_1 = var_188
                        *r14_1 = rbx_2
                        r14_1[1].d = rdi_2
                        *(r14_1 + 0xc) = rsi_2
                        var_248 = 0
                        int64_t var_240_2 = 0
                        r14_1[2].d = 0xffffffff
                        int16_t* rdx_9
                        
                        if (rdi_2 == 0)
                            rdx_9 = &data_142d40450
                        else
                            rdx_9 = *r14_1
                        
                        if (rdi_2 == 0)
                            rax_8 = sub_1405969c0(0, rdx_9)
                            rcx_8 = var_190
                            rdx_5 = &var_1fc
                        else
                            rax_8 = sub_1405969c0(rdi_2 - 1, rdx_9)
                            rcx_8 = var_190
                            rdx_5 = &var_1fc
                else
                    var_258 = 0
                    int64_t var_250_1 = 0
                    sub_1405947f0(&var_258, rax_7 + 4)
                    int32_t rsi_1 = var_250_1:4.d
                    int32_t rdi_1 = var_250_1.d + 4
                    var_250_1.d = rdi_1
                    
                    if (rdi_1 s> rsi_1)
                        sub_140594770(&var_258)
                        rsi_1 = var_250_1:4.d
                        rdi_1 = var_250_1.d
                    
                    int64_t rbx_1 = var_258
                    UnDecorator::getReferenceType(rbx_1, &data_142e30850, 8)
                    sub_140598750(&var_e8, &var_1a0)
                    r14_1 = var_198
                    *r14_1 = rbx_1
                    r14_1[1].d = rdi_1
                    *(r14_1 + 0xc) = rsi_1
                    var_258 = 0
                    int64_t var_250_2 = 0
                    r14_1[2].d = 0xffffffff
                    int16_t* rdx_4
                    
                    if (rdi_1 == 0)
                        rdx_4 = &data_142d40450
                    else
                        rdx_4 = *r14_1
                    
                    if (rdi_1 == 0)
                        rax_8 = sub_1405969c0(0, rdx_4)
                        rcx_8 = var_1a0
                        rdx_5 = &var_200
                    else
                        rax_8 = sub_1405969c0(rdi_1 - 1, rdx_4)
                        rcx_8 = var_1a0
                        rdx_5 = &var_200
                
                sub_14059a6d0(&var_e8, rdx_5, rax_8, r14_1, rcx_8, nullptr)
                r15_2 = &r15_2[0x14]
            while (&r15_2[-0x10] != j)
            
            i = i_2
            var_260 = r13_2
            r13_1 = var_1f0
        
        r13_1 = &r13_1[0xa]
        var_1f0 = r13_1
    while (&r13_1[-6] != i)
    
    rcx = var_b4
    r8 = var_e0
    r9 = var_1b8

if (r8 - rcx s> 0)
    void* rdi_5 = *(r9 + 0x30)
    rcx.b = 1
    int64_t rax_13 = sx.q(*(r9 + 0x38))
    char var_278_1 = 1
    int64_t var_138 = 0
    int32_t var_130_1 = 0
    void* i_1 = rax_13 * 0x50 + rdi_5
    int32_t var_10c_1 = 0x80
    int64_t var_128
    __builtin_memset(&var_128, 0, 0x1c)
    int32_t var_108_1 = 0xffffffff
    int32_t var_104_1 = 0
    void* var_f8_1 = nullptr
    int32_t var_f0_1 = 0
    
    if (rdi_5 != i_1)
        void* rdi_6 = rdi_5 + 0x40
        
        do
            rcx.b &= *(rdi_6 + 8)
            var_278_1 = rcx.b
            int16_t* const rcx_30
            
            if (*rdi_6 == 0)
                rcx_30 = &data_142d40450
            else
                rcx_30 = *(rdi_6 - 8)
            
            int32_t rax_14 = sub_140a54510(rcx_30, &data_142e30858)
            int32_t rax_16
            int32_t rcx_36
            int32_t* rdx_21
            int64_t* rsi_5
            
            if (rax_14 != 0)
                int16_t* const rcx_37
                
                if (*rdi_6 == 0)
                    rcx_37 = &data_142d40450
                else
                    rcx_37 = *(rdi_6 - 8)
                
                int32_t rax_17 = sub_140a54510(rcx_37, &data_142e30850)
                
                if (rax_17 != 0)
                    int16_t* const rcx_43
                    
                    if (*rdi_6 == 0)
                        rcx_43 = &data_142d40450
                    else
                        rcx_43 = *(rdi_6 - 8)
                    
                    int32_t rax_19 = sub_140a54510(rcx_43, &data_142e30860)
                    
                    if (rax_19 != 0)
                        var_258 = 0
                        int64_t var_250_3 = 0
                        sub_1405947f0(&var_258, 6)
                        int32_t r15_6 = var_250_3:4.d
                        int32_t r14_5 = var_250_3.d + 6
                        var_250_3.d = r14_5
                        
                        if (r14_5 s> r15_6)
                            sub_140594770(&var_258)
                            r15_6 = var_250_3:4.d
                            r14_5 = var_250_3.d
                        
                        int64_t rbx_8 = var_258
                        UnDecorator::getReferenceType(rbx_8, u"OTHER", 0xc)
                        sub_140598750(&var_138, &var_1a0)
                        rsi_5 = var_198
                        *rsi_5 = rbx_8
                        rsi_5[1].d = r14_5
                        *(rsi_5 + 0xc) = r15_6
                        var_258 = 0
                        int64_t var_250_4 = 0
                        rsi_5[2].d = 0xffffffff
                        int16_t* rdx_32
                        
                        if (r14_5 == 0)
                            rdx_32 = &data_142d40450
                        else
                            rdx_32 = *rsi_5
                        
                        int32_t rcx_53 = r14_5 - 1
                        
                        if (r14_5 == 0)
                            rcx_53 = 0
                        
                        rax_16 = sub_1405969c0(rcx_53, rdx_32)
                        rcx_36 = var_1a0
                        rdx_21 = &var_200
                    else
                        var_248 = 0
                        int64_t var_240_3 = 0
                        sub_1405947f0(&var_248, rax_19 + 4)
                        int32_t r15_5 = var_240_3:4.d
                        int32_t r14_4 = var_240_3.d + 4
                        var_240_3.d = r14_4
                        
                        if (r14_4 s> r15_5)
                            sub_140594770(&var_248)
                            r15_5 = var_240_3:4.d
                            r14_4 = var_240_3.d
                        
                        int64_t rbx_7 = var_248
                        UnDecorator::getReferenceType(rbx_7, &data_142e30860, 8)
                        sub_140598750(&var_138, &var_190)
                        rsi_5 = var_188
                        *rsi_5 = rbx_7
                        rsi_5[1].d = r14_4
                        *(rsi_5 + 0xc) = r15_5
                        var_248 = 0
                        int64_t var_240_4 = 0
                        rsi_5[2].d = 0xffffffff
                        int16_t* rdx_29
                        
                        if (r14_4 == 0)
                            rdx_29 = &data_142d40450
                        else
                            rdx_29 = *rsi_5
                        
                        int32_t rcx_48 = r14_4 - 1
                        
                        if (r14_4 == 0)
                            rcx_48 = 0
                        
                        rax_16 = sub_1405969c0(rcx_48, rdx_29)
                        rcx_36 = var_190
                        rdx_21 = &var_1fc
                else
                    var_238 = 0
                    int64_t var_230_3 = 0
                    sub_1405947f0(&var_238, rax_17 + 4)
                    int32_t r15_4 = var_230_3:4.d
                    int32_t r14_3 = var_230_3.d + 4
                    var_230_3.d = r14_3
                    
                    if (r14_3 s> r15_4)
                        sub_140594770(&var_238)
                        r15_4 = var_230_3:4.d
                        r14_3 = var_230_3.d
                    
                    int64_t rbx_6 = var_238
                    UnDecorator::getReferenceType(rbx_6, &data_142e30850, 8)
                    sub_140598750(&var_138, &var_180)
                    rsi_5 = var_178
                    *rsi_5 = rbx_6
                    rsi_5[1].d = r14_3
                    *(rsi_5 + 0xc) = r15_4
                    var_238 = 0
                    int64_t var_230_4 = 0
                    rsi_5[2].d = 0xffffffff
                    int16_t* rdx_25
                    
                    if (r14_3 == 0)
                        rdx_25 = &data_142d40450
                    else
                        rdx_25 = *rsi_5
                    
                    int32_t rcx_42 = r14_3 - 1
                    
                    if (r14_3 == 0)
                        rcx_42 = 0
                    
                    rax_16 = sub_1405969c0(rcx_42, rdx_25)
                    rcx_36 = var_180
                    rdx_21 = &var_1f8
            else
                var_270 = nullptr
                int64_t var_268_3 = 0
                sub_1405947f0(&var_270, rax_14 + 4)
                int32_t r15_3 = var_268_3:4.d
                int32_t r14_2 = var_268_3.d + 4
                var_268_3.d = r14_2
                
                if (r14_2 s> r15_3)
                    sub_140594770(&var_270)
                    r15_3 = var_268_3:4.d
                    r14_2 = var_268_3.d
                
                int16_t* rbx_5 = var_270
                UnDecorator::getReferenceType(rbx_5, &data_142e30858, 8)
                sub_140598750(&var_138, &var_220)
                rsi_5 = var_218
                *rsi_5 = rbx_5
                rsi_5[1].d = r14_2
                *(rsi_5 + 0xc) = r15_3
                var_270 = nullptr
                int64_t var_268_4 = 0
                rsi_5[2].d = 0xffffffff
                int16_t* rdx_20
                
                if (r14_2 == 0)
                    rdx_20 = &data_142d40450
                else
                    rdx_20 = *rsi_5
                
                int32_t rcx_35 = r14_2 - 1
                
                if (r14_2 == 0)
                    rcx_35 = 0
                
                rax_16 = sub_1405969c0(rcx_35, rdx_20)
                rcx_36 = var_220
                rdx_21 = &var_228
            
            sub_14059a6d0(&var_138, rdx_21, rax_16, rsi_5, rcx_36, nullptr)
            rcx = zx.d(var_278_1)
            rdi_6 += 0x50
        while (rdi_6 - 0x40 != i_1)
    
    var_270 = nullptr
    int32_t var_268_5 = 0
    sub_1405947f0(&var_270, 4)
    int32_t r14_6 = var_268_5 + 4
    
    if (r14_6 s> 0)
        sub_140594770(&var_270)
    
    int16_t* r13_3 = var_270
    UnDecorator::getReferenceType(r13_3, &data_142e30858, 8)
    int32_t rdi_7 = 1
    int32_t var_268_7
    int16_t* rbx_11
    int16_t* rsi_8
    int16_t* r12_5
    int32_t r14_8
    int16_t* r15_7
    void var_100
    
    if (var_130_1 == var_104_1)
    label_140959bb8:
        var_270 = nullptr
        int32_t var_268_6 = 0
        sub_1405947f0(&var_270, 4)
        int32_t r14_7 = var_268_6 + 4
        
        if (r14_7 s> 0)
            sub_140594770(&var_270)
        
        r12_5 = var_270
        UnDecorator::getReferenceType(r12_5, &data_142e30860, 8)
        rdi_7 = 3
        
        if (var_130_1 != var_104_1)
            int32_t rcx_67
            int16_t* rdx_40
            
            if (r14_7 == 0)
                rdx_40 = &data_142d40450
                rcx_67 = 0
            else
                rdx_40 = r12_5
                rcx_67 = r14_7 - 1
            
            int64_t rdx_42 = sx.q(sub_1405969c0(rcx_67, rdx_40)) & sx.q(var_f0_1 - 1)
            void* rcx_69 = &var_100
            
            if (var_f8_1 != 0)
                rcx_69 = var_f8_1
            
            int32_t rbx_10 = *(rcx_69 + (rdx_42 << 2))
            
            if (rbx_10 == 0xffffffff)
                goto label_140959ccf
            
            int64_t rdx_43 = var_138
            
            while (true)
                int64_t rsi_7 = sx.q(rbx_10) * 0x18
                int64_t* rcx_71 = rsi_7 + rdx_43
                int16_t* rdx_44 = &data_142d40450
                
                if (r14_7 != 0)
                    rdx_44 = r12_5
                
                int16_t* const rcx_72
                
                if (rcx_71[1].d == 0)
                    rcx_72 = &data_142d40450
                else
                    rcx_72 = *rcx_71
                
                if (sub_140a54510(rcx_72, rdx_44) == 0)
                    break
                
                rdx_43 = var_138
                rbx_10 = *(rsi_7 + rdx_43 + 0x10)
                
                if (rbx_10 == 0xffffffff)
                    goto label_140959ccf
            
            if (rbx_10 == 0xffffffff)
                goto label_140959ccf
            
            goto label_140959e31
        
    label_140959ccf:
        r15_7 = var_270
    label_140959cd4:
        r14_8 = 0
        var_270 = nullptr
        var_268_7 = 0
        sub_1405947f0(&var_270, 4)
        int32_t rax_37 = var_268_7 + 4
        var_268_7 = rax_37
        
        if (rax_37 s> 0)
            sub_140594770(&var_270)
        
        rsi_8 = var_270
        UnDecorator::getReferenceType(rsi_8, &data_142e30850, 8)
        rdi_7 |= 8
        
        if (*sub_140960120(&var_138, &var_228, &var_270) == 0xffffffff)
            rbx_11 = var_270
        else
            var_270 = nullptr
            var_268_7 = 0
            sub_1405947f0(&var_270, 4)
            int32_t rax_39 = var_268_7 + 4
            var_268_7 = rax_39
            
            if (rax_39 s> 0)
                sub_140594770(&var_270)
            
            rbx_11 = var_270
            UnDecorator::getReferenceType(rbx_11, &data_142e30858, 8)
            rdi_7 |= 0x10
            int32_t* rax_40 = sub_140960120(&var_e8, &var_228, &var_270)
            int32_t* rax_42
            
            if (*rax_40 == 0xffffffff)
                var_270 = nullptr
                var_268_7 = 0
                sub_1405947f0(&var_270, 4)
                int32_t rax_41 = var_268_7 + 4
                var_268_7 = rax_41
                
                if (rax_41 s> 0)
                    sub_140594770(&var_270)
                
                UnDecorator::getReferenceType(var_270, &data_142e30860, 8)
                rdi_7 |= 0x20
                rax_42 = sub_140960120(&var_e8, &var_228, &var_270)
            
            if (*rax_40 != 0xffffffff || *rax_42 != 0xffffffff)
                r14_8.b = 1
    else
        int32_t rcx_58
        int16_t* rdx_34
        
        if (r14_6 == 0)
            rdx_34 = &data_142d40450
            rcx_58 = 0
        else
            rdx_34 = r13_3
            rcx_58 = r14_6 - 1
        
        int64_t rdx_36 = sx.q(sub_1405969c0(rcx_58, rdx_34)) & sx.q(var_f0_1 - 1)
        void* rcx_60 = &var_100
        
        if (var_f8_1 != 0)
            rcx_60 = var_f8_1
        
        int32_t rbx_9 = *(rcx_60 + (rdx_36 << 2))
        
        if (rbx_9 == 0xffffffff)
            goto label_140959bb8
        
        int64_t rdx_37 = var_138
        
        while (true)
            int64_t rsi_6 = sx.q(rbx_9) * 0x18
            int64_t* rcx_62 = rsi_6 + rdx_37
            int16_t* const rdx_38 = &data_142d40450
            
            if (r14_6 != 0)
                rdx_38 = r13_3
            
            int16_t* const rcx_63
            
            if (rcx_62[1].d == 0)
                rcx_63 = &data_142d40450
            else
                rcx_63 = *rcx_62
            
            if (sub_140a54510(rcx_63, rdx_38) == 0)
                break
            
            rdx_37 = var_138
            rbx_9 = *(rsi_6 + rdx_37 + 0x10)
            
            if (rbx_9 == 0xffffffff)
                goto label_140959bb8
        
        if (rbx_9 == 0xffffffff)
            goto label_140959bb8
        
        r12_5 = var_270
    label_140959e31:
        var_270 = nullptr
        var_268_7 = 0
        sub_1405947f0(&var_270, 4)
        r14_8 = var_268_7 + 4
        var_268_7 = r14_8
        
        if (r14_8 s> 0)
            sub_140594770(&var_270)
            r14_8 = var_268_7
        
        r15_7 = var_270
        UnDecorator::getReferenceType(r15_7, &data_142e30850, 8)
        rdi_7 |= 4
        
        if (var_e0 == var_b4)
            goto label_140959cd4
        
        int32_t rcx_88
        int16_t* rdx_52
        
        if (r14_8 == 0)
            rdx_52 = &data_142d40450
            rcx_88 = 0
        else
            rdx_52 = r15_7
            rcx_88 = r14_8 - 1
        
        int64_t rdx_54 = sx.q(sub_1405969c0(rcx_88, rdx_52)) & sx.q(var_a0 - 1)
        void var_b0
        void* rcx_90 = &var_b0
        
        if (var_a8 != 0)
            rcx_90 = var_a8
        
        int32_t rbx_12 = *(rcx_90 + (rdx_54 << 2))
        
        if (rbx_12 == 0xffffffff)
            goto label_140959cd4
        
        int64_t rdx_55 = var_e8
        
        while (true)
            int64_t rsi_9 = sx.q(rbx_12) * 0x18
            int64_t* rcx_92 = rsi_9 + rdx_55
            int16_t* rdx_56 = &data_142d40450
            
            if (r14_8 != 0)
                rdx_56 = r15_7
            
            int16_t* const rcx_93
            
            if (rcx_92[1].d == 0)
                rcx_93 = &data_142d40450
            else
                rcx_93 = *rcx_92
            
            if (sub_140a54510(rcx_93, rdx_56) == 0)
                break
            
            rdx_55 = var_e8
            rbx_12 = *(rsi_9 + rdx_55 + 0x10)
            
            if (rbx_12 == 0xffffffff)
                goto label_140959cd4
        
        if (rbx_12 == 0xffffffff)
            goto label_140959cd4
        
        rsi_8 = var_270
        r14_8.b = 1
        rbx_11 = var_270
    
    if ((rdi_7.b & 0x20) != 0)
        int16_t* rcx_94 = var_270
        rdi_7 &= 0xffffffdf
        
        if (rcx_94 != 0)
            sub_140a74f90(rcx_94)
    
    if ((rdi_7.b & 0x10) != 0)
        rdi_7 &= 0xffffffef
        
        if (rbx_11 != 0)
            sub_140a74f90(rbx_11)
    
    if ((rdi_7.b & 8) != 0)
        rdi_7 &= 0xfffffff7
        
        if (rsi_8 != 0)
            sub_140a74f90(rsi_8)
    
    if ((rdi_7.b & 4) != 0)
        rdi_7 &= 0xfffffffb
        
        if (r15_7 != 0)
            sub_140a74f90(r15_7)
    
    if ((rdi_7.b & 2) != 0 && r12_5 != 0)
        sub_140a74f90(r12_5)
    
    if (r13_3 != 0)
        sub_140a74f90(r13_3)
    
    int64_t var_98
    sub_140967750(&var_138, &var_98, &var_e8)
    int32_t var_90
    int32_t var_64
    int32_t rax_51 = var_90 - var_64
    void* r8_8
    
    if (r14_8.b == 0 || *(arg1 + 0x50) == 0)
        r8_8.b = 1
    else
        r8_8.b = 0
    
    int32_t rcx_102
    
    if (rax_51 == var_130_1 - var_104_1 || var_260 != 0)
        rcx_102.b = 1
    else
        rcx_102.b = 0
    
    if (var_278_1 != 0 || rax_51 == var_e0 - var_b4)
        rax_51.b = 1
    else
        rax_51.b = 0
    
    if (r8_8.b != 0 && rcx_102.b != 0)
        var_278 = 1
    
    if (r8_8.b == 0 || rcx_102.b == 0 || rax_51.b == 0)
        var_278 = 0
    
    int32_t var_c0
    int32_t r8_9 = var_c0
    int32_t var_21c_1 = 1
    var_1f0 = nullptr
    int64_t var_1e8_1 = 0
    var_220 = 0
    int64_t* var_218_1 = &var_d8
    int32_t var_210_1 = 0xffffffff
    int64_t var_20c_1 = 0
    
    if (r8_9 != 0)
        sub_14059bdd0(&var_220)
        r8_9 = var_c0
    
    double zmm2_1[0x2] = var_210_1.o
    var_20c_1.d = r8_9
    int128_t var_160_1 = var_220.o
    double var_150_1[0x2] = zmm2_1
    double temp0_1[0x2] = _mm_unpackhi_pd(zmm2_1, zmm2_1[0])
    int128_t var_1e0 = (&var_e8).o
    int128_t var_1d0_1 = var_160_1
    int64_t var_1c0_1 = temp0_1.q
    
    while (true)
        int64_t rcx_105 = sx.q(var_1d0_1:0xc.d)
        char rax_53
        
        if (rcx_105.d != ((0xffffffff << (r8_9.b & 0x1f)).q u>> 0x20).d || var_1d0_1.q != &var_d8)
            rax_53 = 0
        else
            rax_53 = 1
        
        int64_t* rdx_61 = var_1e0.q
        
        if (rax_53 == 0 || rdx_61 != &var_e8)
            rax_53 = 1
        else
            rax_53 = 0
        
        if (rax_53 == 0)
            break
        
        int64_t rax_54 = *rdx_61
        int64_t rcx_106 = rcx_105 * 3
        int32_t r8_10 = *(rax_54 + (rcx_106 << 3) + 8)
        int64_t rdx_62 = *(rax_54 + (rcx_106 << 3))
        var_270 = nullptr
        sub_140596860(&var_270, rdx_62, r8_10, 0, sbb.d(rcx_106.d, rcx_106.d, r8_10 != 0) + 2)
        sub_140a20ba0(&var_270, &(*U"RGBXYZF10|")[9], 1)
        int32_t rax_57 = var_268_7
        int16_t* rbx_13 = var_270
        var_270 = nullptr
        var_268_7 = 0
        int32_t r8_11 = rax_57 - 1
        
        if (rax_57 == 0)
            r8_11 = 0
        
        sub_140a20ba0(&var_1f0, rbx_13, r8_11)
        
        if (rbx_13 != 0)
            sub_140a74f90(rbx_13)
        
        var_1d0_1:8.d &= not.d(var_1e0:0xc.d)
        sub_14059bdd0(&var_1e0:8)
    
    int32_t var_110
    int32_t rdx_64 = var_110
    int64_t* var_218_2 = &var_128
    var_1b8 = nullptr
    int64_t var_1b0_1 = 0
    var_220 = 0
    int32_t var_21c_2 = 1
    int32_t var_210_3 = 0xffffffff
    int64_t var_20c_2 = 0
    
    if (rdx_64 != 0)
        sub_14059bdd0(&var_220)
        rdx_64 = var_110
    
    zmm2_1 = var_210_3.o
    var_20c_2.d = rdx_64
    int128_t var_160_2 = var_220.o
    double var_150_2[0x2] = zmm2_1
    double temp0_3[0x2] = _mm_unpackhi_pd(zmm2_1, zmm2_1[0])
    var_1e0 = (&var_138).o
    int128_t var_1d0_2 = var_160_2
    int64_t var_1c0_2 = temp0_3.q
    
    while (true)
        int64_t rcx_116 = sx.q(var_1d0_2:0xc.d)
        char rax_61
        
        if (rcx_116.d != ((0xffffffff << (rdx_64.b & 0x1f)).q u>> 0x20).d
                || var_1d0_2.q != &var_128)
            rax_61 = 0
        else
            rax_61 = 1
        
        int64_t* rdx_65 = var_1e0.q
        
        if (rax_61 == 0 || rdx_65 != &var_138)
            rax_61 = 1
        else
            rax_61 = 0
        
        if (rax_61 == 0)
            break
        
        int64_t rax_62 = *rdx_65
        int64_t rcx_117 = rcx_116 * 3
        int32_t r8_12 = *(rax_62 + (rcx_117 << 3) + 8)
        int64_t rdx_66 = *(rax_62 + (rcx_117 << 3))
        var_270 = nullptr
        sub_140596860(&var_270, rdx_66, r8_12, 0, sbb.d(rcx_117.d, rcx_117.d, r8_12 != 0) + 2)
        sub_140a20ba0(&var_270, &(*U"RGBXYZF10|")[9], 1)
        int32_t rax_65 = var_268_7
        int16_t* rbx_14 = var_270
        var_270 = nullptr
        var_268_7 = 0
        int32_t r8_13 = rax_65 - 1
        
        if (rax_65 == 0)
            r8_13 = 0
        
        sub_140a20ba0(&var_1b8, rbx_14, r8_13)
        
        if (rbx_14 != 0)
            sub_140a74f90(rbx_14)
        
        var_1d0_2:8.d &= not.d(var_1e0:0xc.d)
        sub_14059bdd0(&var_1e0:8)
    
    void* const rcx_125 = var_1b8
    
    if (rcx_125 != 0)
        sub_140a74f90(rcx_125)
    
    int64_t* rcx_126 = var_1f0
    
    if (rcx_126 != 0)
        sub_140a74f90(rcx_126)
    
    int32_t var_50_1 = 0
    int64_t var_58
    
    if (var_58 != 0)
        sub_140a74f90(var_58)
    
    sub_14059ad90(&var_98, 0)
    int64_t var_78
    
    if (var_78 != 0)
        sub_140a74f90(var_78)
    
    int64_t rcx_130 = var_98
    
    if (rcx_130 != 0)
        sub_140a74f90(rcx_130)
    
    int32_t var_f0_2 = 0
    
    if (var_f8_1 != 0)
        sub_140a74f90(var_f8_1)
    
    sub_14059ad90(&var_138, 0)
    int64_t var_118
    
    if (var_118 != 0)
        sub_140a74f90(var_118)
    
    int64_t rcx_134 = var_138
    
    if (rcx_134 != 0)
        sub_140a74f90(rcx_134)

int32_t var_a0_1 = 0

if (var_a8 != 0)
    sub_140a74f90(var_a8)

sub_14059ad90(&var_e8, 0)
int64_t var_c8

if (var_c8 != 0)
    sub_140a74f90(var_c8)

int64_t rcx_138 = var_e8

if (rcx_138 != 0)
    sub_140a74f90(rcx_138)

__security_check_cookie(rax_1 ^ &var_2a8)
return zx.q(var_278)
