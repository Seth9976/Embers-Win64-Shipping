// 函数: sub_140a765b0
// 地址: 0x140a765b0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void var_2c8
int64_t rax_1 = __security_cookie ^ &var_2c8
int64_t* result = arg1
TEB* gsbase
int32_t* rbx_1 = *(gsbase->ThreadLocalStoragePointer + (zx.q(data_14401b1a0) << 3)) + 0x14

if (data_143db9978 s> *rbx_1)
    _Init_thread_header(&data_143db9978)
    
    if (data_143db9978 == 0xffffffff)
        void var_258
        sub_140a663e0(&var_258, &data_143db9968)
        atexit(&data_142cbd270)
        _Init_thread_footer(&data_143db9978)

int32_t r12 = 0

if (data_143db9990 s> *rbx_1)
    _Init_thread_header(&data_143db9990)
    
    if (data_143db9990 == 0xffffffff)
        data_143db9980 = 0
        wchar16 const* const var_168_1 = u"currency"
        data_143db9988 = 0
        void* const var_160_1 = &data_142e62ce0
        int64_t var_170 = 0
        int64_t var_210 = 0
        int32_t var_208_1 = 0
        sub_1405947f0(&var_210, 5)
        int32_t rax_129 = var_208_1 + 5
        var_208_1 = rax_129
        
        if (rax_129 s> 0)
            sub_140594770(&var_210)
        
        UnDecorator::getReferenceType(var_210, u"EURO", 0xa)
        sub_140a5cb90(&data_143db9980, &var_210, &var_170)
        int64_t rbx_38 = var_210
        
        if (rbx_38 != 0)
            int64_t* rcx_136 = data_143ddb3f0
            
            if (rcx_136 == 0)
                sub_140a750a0()
                rcx_136 = data_143ddb3f0
            
            (*(*rcx_136 + 0x30))(rcx_136, rbx_38)
        
        atexit(sub_142cbd890)
        _Init_thread_footer(&data_143db9990)

int16_t* var_1b8
sub_140a8a500(&var_1b8, arg2)
uint64_t var_1c0 = -1
void var_158
int64_t rdi_1 = *sub_140a78b00(sub_140a752e0(), &var_158, &var_1b8)
int64_t* var_150

if (var_150 != 0)
    var_150[1].d -= 1
    
    if (var_150[1].d == 1)
        (**var_150)(var_150)
        int32_t rax_9 = *(var_150 + 0xc)
        *(var_150 + 0xc) -= 1
        
        if (rax_9 == 1)
            (*(*var_150 + 8))(var_150, 1)

int32_t var_1b0

if (rdi_1 == 0)
    int16_t* r14_1 = var_1b8
    int16_t* rbx_4 = r14_1
    void* var_e8_1 = nullptr
    int32_t i_3 = 0
    void* rcx_9 = &r14_1[sx.q(var_1b0)]
    int32_t var_dc_1 = 4
    int16_t** i_6 = nullptr
    int32_t var_50_1 = 0
    int32_t var_4c_1 = 4
    int16_t* var_288 = nullptr
    int64_t var_280_1 = 0
    int64_t var_1a8 = 0
    int64_t var_1a0_1 = 0
    int32_t rbx_5
    
    if (r14_1 == rcx_9)
    label_140a7677f:
        rbx_5 = -1
    else
        while (*rbx_4 != 0x40)
            rbx_4 = &rbx_4[1]
            
            if (rbx_4 == rcx_9)
                goto label_140a7677f
        
        rbx_5 = ((rbx_4 - r14_1) s>> 1).d
    
    int16_t* rax_13 = r14_1
    int32_t rax_15
    
    if (r14_1 != rcx_9)
        while (*rax_13 != 0x2e)
            rax_13 = &rax_13[1]
            
            if (rax_13 == rcx_9)
                goto label_140a767b4
        
        rax_15 = ((rax_13 - r14_1) s>> 1).d
    
    if (r14_1 == rcx_9 || rax_15 == 0xffffffff)
    label_140a767b4:
        rax_15 = var_1b0 - 1
        
        if (var_1b0 == 0)
            rax_15 = 0
    
    int32_t rcx_10
    
    if (rbx_5 != 0xffffffff)
        rcx_10 = rbx_5
    else if (var_1b0 == 0)
        rcx_10 = 0
    else
        rcx_10 = var_1b0 - 1
    
    if (rcx_10 s<= rax_15)
        rax_15 = rcx_10
    
    int32_t rdi_3
    
    if (var_1b0 == 0)
        r14_1 = &data_142d40450
        rdi_3 = 0
    else
        rdi_3 = var_1b0 - 1
    
    if (rax_15 s< 0)
        rdi_3 = 0
    else if (rax_15 s< rdi_3)
        rdi_3 = rax_15
    
    int16_t* var_230 = nullptr
    int16_t* r15_1 = nullptr
    int64_t var_228_1 = 0
    int32_t rsi = 0
    int32_t r14_2
    
    if (r14_1 == 0 || *r14_1 == 0 || rdi_3 s<= 0)
        r14_2 = 0
    else
        if (rdi_3 + 1 s> 0)
            sub_1405947f0(&var_230, rdi_3 + 1)
            r12 = var_228_1:4.d
            rsi = var_228_1.d
            r15_1 = var_230
        
        rsi += rdi_3 + 1
        var_228_1.d = rsi
        
        if (rsi s> r12)
            sub_140594770(&var_230)
            r12 = var_228_1:4.d
            rsi = var_228_1.d
            r15_1 = var_230
        
        UnDecorator::getReferenceType(r15_1, r14_1, rdi_3 * 2)
        r14_2 = 0
        r15_1[sx.q(rsi) - 1] = 0
        int16_t* rdi_4 = var_288
        
        if (rdi_4 != 0)
            int64_t* rcx_14 = data_143ddb3f0
            
            if (rcx_14 == 0)
                sub_140a750a0()
                rcx_14 = data_143ddb3f0
            
            (*(*rcx_14 + 0x30))(rcx_14, rdi_4)
    
    var_288 = r15_1
    var_280_1.d = rsi
    var_280_1:4.d = r12
    sub_140a306e0(&var_288, &data_142d99650, &data_142d404b0, 0)
    
    if (rbx_5 != 0xffffffff)
        int32_t rbx_7 = var_1b0 - 1
        
        if (var_1b0 == 0)
            rbx_7 = 0
        
        int32_t rcx_16
        
        if (rbx_5 + 1 s>= 0)
            rcx_16 = rbx_7
            
            if (rbx_5 + 1 s< rbx_7)
                rcx_16 = rbx_5 + 1
        else
            rcx_16 = 0
        
        int64_t r9_1 = sx.q(rcx_16)
        
        if (sx.q(rbx_5 + 1) + 0x7fffffff s< r9_1)
            rbx_7 = rcx_16
        else if (sx.q(rbx_5 + 1) + 0x7fffffff s< sx.q(rbx_7))
            rbx_7 = rbx_5 - -0x80000000
        
        int64_t var_220 = 0
        int16_t* rax_20 = &data_142d40450
        int64_t var_218_1 = 0
        
        if (var_1b0 != 0)
            rax_20 = var_1b8
        
        int64_t rsi_2 = 0
        int32_t rbx_8 = rbx_7 - rcx_16
        int32_t rdi_5 = 0
        void* r15_2 = &rax_20[r9_1]
        
        if (r15_2 != 0 && *r15_2 != 0 && rbx_8 s> 0)
            if (rbx_8 + 1 s> 0)
                sub_1405947f0(&var_220, rbx_8 + 1)
                r14_2 = var_218_1:4.d
                rdi_5 = var_218_1.d
                rsi_2 = var_220
            
            rdi_5 += rbx_8 + 1
            var_218_1.d = rdi_5
            
            if (rdi_5 s> r14_2)
                sub_140594770(&var_220)
                r14_2 = var_218_1:4.d
                rdi_5 = var_218_1.d
                rsi_2 = var_220
            
            UnDecorator::getReferenceType(rsi_2, r15_2, rbx_8 * 2)
            *(rsi_2 + (sx.q(rdi_5) << 1) - 2) = 0
        
        int64_t rbx_9 = var_1a8
        
        if (rbx_9 != 0)
            int64_t* rcx_20 = data_143ddb3f0
            
            if (rcx_20 == 0)
                sub_140a750a0()
                rcx_20 = data_143ddb3f0
            
            (*(*rcx_20 + 0x30))(rcx_20, rbx_9)
        
        var_1a8 = rsi_2
        var_1a0_1.d = rdi_5
        var_1a0_1:4.d = r14_2
    
    int32_t i = data_143db9970
    int64_t r14_3 = data_143db9968
    int32_t rbx_10 = 0
    int16_t* var_d8
    int32_t rcx_31
    
    if (i s<= 0)
        rcx_31 = var_280_1.d
    else
        do
            int32_t rcx_22 = i & 0x80000001
            
            if (rcx_22 s< 0)
                rcx_22 = ((rcx_22 - 1) | 0xfffffffe) + 1
            
            int32_t temp1_1
            int32_t temp2_1
            temp1_1:temp2_1 = sx.q(i)
            int16_t* const rdx_18 = &data_142d40450
            int32_t i_7 = (temp2_1 - temp1_1) s>> 1
            i = i_7
            int32_t rax_26 = i_7 + rbx_10
            
            if (var_280_1.d != 0)
                rdx_18 = var_288
            
            int64_t rcx_25 = sx.q(rax_26) * 5
            int16_t* const rcx_26
            
            if (*(r14_3 + (rcx_25 << 3) + 8) == 0)
                rcx_26 = &data_142d40450
            else
                rcx_26 = *(r14_3 + (rcx_25 << 3))
            
            if (sub_140a54510(rcx_26, rdx_18) s< 0)
                rbx_10 = rax_26 + rcx_22
        while (i s> 0)
        
        if (rbx_10 s>= data_143db9970)
            rcx_31 = var_280_1.d
        else
            int64_t rax_29 = data_143db9968
            int64_t rdi_7 = sx.q(rbx_10)
            int64_t rcx_27 = rdi_7 * 5
            int16_t* rdx_19
            
            if (*(rax_29 + (rcx_27 << 3) + 8) == 0)
                rdx_19 = &data_142d40450
            else
                rdx_19 = *(rax_29 + (rcx_27 << 3))
            
            int16_t* const rcx_28 = &data_142d40450
            
            if (var_280_1.d != 0)
                rcx_28 = var_288
            
            if (sub_140a54510(rcx_28, rdx_19) s< 0 || rbx_10 == 0xffffffff)
                rcx_31 = var_280_1.d
            else
                int64_t* rsi_6 = data_143db9968 + ((rdi_7 * 5 + 2) << 3)
                
                if (rsi_6 == 0)
                    rcx_31 = var_280_1.d
                else
                    int16_t* rdi_8 = *rsi_6
                    
                    if (var_288 == rdi_8)
                        rcx_31 = var_280_1.d
                    else
                        int32_t rbx_12
                        
                        if (rdi_8 == 0 || *rdi_8 == 0)
                            rbx_12 = 0
                        else
                            int64_t rbx_11 = -1
                            
                            do
                                rbx_11 += 1
                            while (rdi_8[rbx_11] != 0)
                            
                            rbx_12 = rbx_11.d + 1
                        
                        int32_t rax_32 = var_280_1:4.d
                        int32_t rdx_20 = 0
                        var_280_1.d = 0
                        
                        if (rax_32 != rbx_12)
                            sub_1405947f0(&var_288, rbx_12)
                            rax_32 = var_280_1:4.d
                            rdx_20 = var_280_1.d
                        
                        rcx_31 = rdx_20 + rbx_12
                        var_280_1.d = rcx_31
                        
                        if (rcx_31 s> rax_32)
                            sub_140594770(&var_288)
                            rcx_31 = var_280_1.d
                        
                        if (rbx_12 != 0)
                            memcpy(var_288, rdi_8, rbx_12 * 2)
                            rcx_31 = var_280_1.d
                    
                    if (rsi_6[1] != 0)
                        int16_t* rdi_9 = rsi_6[2]
                        
                        if (rdi_9 != 0)
                            int32_t rdx_23 = 0
                            int32_t rcx_33 = 0
                            int32_t var_1e8_1 = 0
                            int32_t var_1e4_1 = 0
                            int64_t var_1f0 = 0
                            
                            if (*rdi_9 != 0)
                                int64_t rbx_13 = -1
                                
                                do
                                    rbx_13 += 1
                                while (rdi_9[rbx_13] != 0)
                                
                                if (rbx_13.d + 1 s> 0)
                                    sub_1405947f0(&var_1f0, rbx_13.d + 1)
                                    rcx_33 = var_1e4_1
                                    rdx_23 = var_1e8_1
                                
                                int32_t rax_33 = rdx_23 + rbx_13.d + 1
                                int32_t var_1e8_2 = rax_33
                                
                                if (rax_33 s> rcx_33)
                                    sub_140594770(&var_1f0)
                                
                                UnDecorator::getReferenceType(var_1f0, rdi_9, (rbx_13.d + 1) * 2)
                            
                            int16_t* rdi_10 = rsi_6[1]
                            int32_t rdx_26 = 0
                            int16_t* var_200 = nullptr
                            int32_t rcx_37 = 0
                            int32_t var_1f8_1 = 0
                            int32_t var_1f4_1 = 0
                            
                            if (rdi_10 != 0 && *rdi_10 != 0)
                                int64_t rbx_15 = -1
                                
                                do
                                    rbx_15 += 1
                                while (rdi_10[rbx_15] != 0)
                                
                                if (rbx_15.d + 1 s> 0)
                                    sub_1405947f0(&var_200, rbx_15.d + 1)
                                    rcx_37 = var_1f4_1
                                    rdx_26 = var_1f8_1
                                
                                int32_t rax_34 = rdx_26 + rbx_15.d + 1
                                int32_t var_1f8_2 = rax_34
                                
                                if (rax_34 s> rcx_37)
                                    sub_140594770(&var_200)
                                
                                UnDecorator::getReferenceType(var_200, rdi_10, (rbx_15.d + 1) * 2)
                            
                            sub_140a5cd30(&var_d8, &var_200, &var_1f0)
                            int16_t* rbx_17 = var_200
                            
                            if (rbx_17 != 0)
                                int64_t* rcx_42 = data_143ddb3f0
                                
                                if (rcx_42 == 0)
                                    sub_140a750a0()
                                    rcx_42 = data_143ddb3f0
                                
                                (*(*rcx_42 + 0x30))(rcx_42, rbx_17)
                            
                            int64_t rbx_18 = var_1f0
                            
                            if (rbx_18 != 0)
                                int64_t* rcx_43 = data_143ddb3f0
                                
                                if (rcx_43 == 0)
                                    sub_140a750a0()
                                    rcx_43 = data_143ddb3f0
                                
                                (*(*rcx_43 + 0x30))(rcx_43, rbx_18)
                            
                            rcx_31 = var_280_1.d
    
    int32_t rdx_32 = 0
    int32_t r13_1 = 0
    int64_t r12_1 = 0
    void var_148
    
    while (true)
        int32_t rax_37 = rcx_31 - 1
        
        if (rcx_31 == 0)
            rax_37 = 0
        
        if (r13_1 s< rax_37 && var_288[r12_1] != 0x2d)
            r13_1 += 1
            r12_1 += 1
            continue
        
        int16_t* var_278 = nullptr
        int32_t var_26c_1 = 0
        int32_t rbx_19 = 0
        int32_t var_270_1 = 0
        void* r15_3
        
        if (r13_1 - rdx_32 s>= 0)
            int32_t rdi_11 = rcx_31 - 1
            
            if (rcx_31 == 0)
                rdi_11 = 0
            
            int32_t r8_17
            
            if (rdx_32 s>= 0)
                r8_17 = rdi_11
                
                if (rdx_32 s< rdi_11)
                    r8_17 = rdx_32
            else
                r8_17 = 0
            
            int64_t r9_3 = sx.q(r13_1 - rdx_32) + sx.q(rdx_32)
            int64_t r10_1 = sx.q(r8_17)
            
            if (r9_3 s< r10_1)
                rdi_11 = r8_17
            else if (r9_3 s< sx.q(rdi_11))
                rdi_11 = r9_3.d
            
            int16_t* rax_43 = &data_142d40450
            
            if (rcx_31 != 0)
                rax_43 = var_288
            
            int32_t rdi_12 = rdi_11 - r8_17
            r15_3 = &rax_43[r10_1]
            int16_t* var_240 = nullptr
            int16_t* rsi_7 = nullptr
            int64_t var_238_1 = 0
            rbx_19 = 0
            int32_t r14_4 = 0
            
            if (r15_3 != 0 && *r15_3 != 0 && rdi_12 s> 0)
                if (rdi_12 + 1 s> 0)
                    sub_1405947f0(&var_240, rdi_12 + 1)
                    r14_4 = var_238_1:4.d
                    rbx_19 = var_238_1.d
                    rsi_7 = var_240
                
                rbx_19 += rdi_12 + 1
                var_238_1.d = rbx_19
                
                if (rbx_19 s> r14_4)
                    sub_140594770(&var_240)
                    r14_4 = var_238_1:4.d
                    rbx_19 = var_238_1.d
                    rsi_7 = var_240
                
                UnDecorator::getReferenceType(rsi_7, r15_3, rdi_12 * 2)
                rsi_7[sx.q(rbx_19) - 1] = 0
                int16_t* rdi_13 = var_278
                
                if (rdi_13 != 0)
                    int64_t* rcx_47 = data_143ddb3f0
                    
                    if (rcx_47 == 0)
                        sub_140a750a0()
                        rcx_47 = data_143ddb3f0
                    
                    (*(*rcx_47 + 0x30))(rcx_47, rdi_13)
            
            var_278 = rsi_7
            var_240 = nullptr
            int64_t var_238_2 = 0
            var_270_1 = rbx_19
            var_26c_1 = r14_4
        
        r15_3.b = 3
        int32_t rbx_21
        
        if (i_3 != 0)
            if (i_3 != 1)
                if (i_3 - 1 u> 1)
                    goto label_140a77249
                
            label_140a77206:
                void* rdx_49 = &var_148
                
                if (var_e8_1 != 0)
                    rdx_49 = var_e8_1
                
                char rcx_71 = *(rdx_49 + sx.q(i_3 - 1) * 0x18 + 0x10)
                
                if ((rcx_71 != 0 && rcx_71 != 1) || rbx_19 == 0 || rbx_19 - 3 u> 1)
                    goto label_140a77249
                
                r15_3.b = 2
                sub_140a35a10(&var_278)
                goto label_140a76e40
            
            void* rax_67 = &var_148
            
            if (var_e8_1 != 0)
                rax_67 = var_e8_1
            
            if (*(rax_67 + 0x10) != 0 || rbx_19 == 0 || rbx_19 != 5)
                goto label_140a77206
            
            r15_3 = zx.q(i_3.b)
            sub_140a35810(&var_278)
            rbx_21 = var_270_1
            
            if (rbx_21 != 0)
                if (rbx_21 - 1 s<= 0)
                    goto label_140a76e44
                
                int16_t* rdx_48 = var_278
                uint32_t rcx_69 = zx.d(*rdx_48)
                int32_t rax_69
                rax_69.w = sbb.w((rcx_69 - 0x61).w, (rcx_69 - 0x61).w, rcx_69 - 0x61 u< 0x1a)
                rax_69.w &= 0x20
                rcx_69.w -= rax_69.w
                *rdx_48 = rcx_69.w
                goto label_140a76e40
        else if (rbx_19 == 0 || rbx_19 - 3 u> 1)
        label_140a77249:
            sub_140a35a10(&var_278)
            int64_t r14_7 = data_143db9980
            int32_t rbx_25 = 0
            int32_t i_1 = data_143db9988.d
            
            if (i_1 s<= 0)
                goto label_140a76e40
            
            do
                int32_t rcx_75 = i_1 & 0x80000001
                
                if (rcx_75 s< 0)
                    rcx_75 = ((rcx_75 - 1) | 0xfffffffe) + 1
                
                int32_t temp4_1
                int32_t temp5_1
                temp4_1:temp5_1 = sx.q(i_1)
                int16_t* const rdx_51 = &data_142d40450
                int32_t i_10 = (temp5_1 - temp4_1) s>> 1
                i_1 = i_10
                int32_t rax_77 = i_10 + rbx_25
                
                if (var_270_1 != 0)
                    rdx_51 = var_278
                
                int64_t rcx_78 = sx.q(rax_77) * 5
                int16_t* const rcx_79
                
                if (*(r14_7 + (rcx_78 << 3) + 8) == 0)
                    rcx_79 = &data_142d40450
                else
                    rcx_79 = *(r14_7 + (rcx_78 << 3))
                
                if (sub_140a54510(rcx_79, rdx_51) s< 0)
                    rbx_25 = rax_77 + rcx_75
            while (i_1 s> 0)
            
            if (rbx_25 s>= data_143db9988.d)
                goto label_140a76e40
            
            int64_t rax_80 = data_143db9980
            int64_t rdi_17 = sx.q(rbx_25)
            int64_t rcx_80 = rdi_17 * 5
            int16_t* rdx_52
            
            if (*(rax_80 + (rcx_80 << 3) + 8) == 0)
                rdx_52 = &data_142d40450
            else
                rdx_52 = *(rax_80 + (rcx_80 << 3))
            
            int16_t* const rcx_81 = &data_142d40450
            
            if (var_270_1 != 0)
                rcx_81 = var_278
            
            if (sub_140a54510(rcx_81, rdx_52) s< 0 || rbx_25 == 0xffffffff)
                goto label_140a76e40
            
            void* rsi_14 = data_143db9980 + ((rdi_17 * 5 + 2) << 3)
            
            if (rsi_14 == 0)
                goto label_140a76e40
            
            int16_t* rdi_18 = *(rsi_14 + 0x10)
            int64_t var_1d0 = 0
            int32_t rdx_53 = 0
            int32_t var_1c8_1 = 0
            int32_t rcx_82 = 0
            int32_t var_1c4_1 = 0
            
            if (rdi_18 != 0 && *rdi_18 != 0)
                int64_t rbx_26 = -1
                
                do
                    rbx_26 += 1
                while (rdi_18[rbx_26] != 0)
                
                if (rbx_26.d + 1 s> 0)
                    sub_1405947f0(&var_1d0, rbx_26.d + 1)
                    rcx_82 = var_1c4_1
                    rdx_53 = var_1c8_1
                
                int32_t rax_83 = rbx_26.d + 1 + rdx_53
                int32_t var_1c8_2 = rax_83
                
                if (rax_83 s> rcx_82)
                    sub_140594770(&var_1d0)
                
                UnDecorator::getReferenceType(var_1d0, rdi_18, (rbx_26.d + 1) * 2)
            
            int16_t* rdi_19 = *(rsi_14 + 8)
            int32_t rdx_56 = 0
            int16_t* var_1e0 = nullptr
            int32_t rcx_86 = 0
            int32_t var_1d8_1 = 0
            int32_t var_1d4_1 = 0
            
            if (rdi_19 != 0 && *rdi_19 != 0)
                int64_t rbx_28 = -1
                
                do
                    rbx_28 += 1
                while (rdi_19[rbx_28] != 0)
                
                if (rbx_28.d + 1 s> 0)
                    sub_1405947f0(&var_1e0, rbx_28.d + 1)
                    rcx_86 = var_1d4_1
                    rdx_56 = var_1d8_1
                
                int32_t rax_84 = rdx_56 + rbx_28.d + 1
                int32_t var_1d8_2 = rax_84
                
                if (rax_84 s> rcx_86)
                    sub_140594770(&var_1e0)
                
                UnDecorator::getReferenceType(var_1e0, rdi_19, (rbx_28.d + 1) * 2)
            
            sub_140a5cd30(&var_d8, &var_1e0, &var_1d0)
            int16_t* rbx_30 = var_1e0
            
            if (rbx_30 != 0)
                int64_t* rcx_91 = data_143ddb3f0
                
                if (rcx_91 == 0)
                    sub_140a750a0()
                    rcx_91 = data_143ddb3f0
                
                (*(*rcx_91 + 0x30))(rcx_91, rbx_30)
            
            int64_t rbx_31 = var_1d0
            
            if (rbx_31 != 0)
                int64_t* rcx_92 = data_143ddb3f0
                
                if (rcx_92 == 0)
                    sub_140a750a0()
                    rcx_92 = data_143ddb3f0
                
                (*(*rcx_92 + 0x30))(rcx_92, rbx_31)
        else
            r15_3.b = 0
            sub_140a35810(&var_278)
        label_140a76e40:
            rbx_21 = var_270_1
        label_140a76e44:
            
            if (rbx_21 != 0 && rbx_21 - 1 s> 0)
                int64_t i_12 = sx.q(i_3)
                int16_t* rsi_8 = var_278
                var_278 = nullptr
                var_270_1.q = 0
                int32_t i_8 = (i_12 + 1).d
                i_3 = i_8
                
                if (i_8 s> var_dc_1)
                    sub_140a88f20(&var_148, i_12.d)
                
                int64_t rcx_51 = i_12 * 3
                void* rdx_38 = &var_148
                
                if (var_e8_1 != 0)
                    rdx_38 = var_e8_1
                
                *(rdx_38 + (rcx_51 << 3)) = rsi_8
                *(rdx_38 + (rcx_51 << 3) + 8) = rbx_21
                *(rdx_38 + (rcx_51 << 3) + 0xc) = var_26c_1
                *(rdx_38 + (rcx_51 << 3) + 0x10) = r15_3.b
        int16_t* rbx_22 = var_278
        
        if (rbx_22 != 0)
            int64_t* rcx_52 = data_143ddb3f0
            
            if (rcx_52 == 0)
                sub_140a750a0()
                rcx_52 = data_143ddb3f0
            
            (*(*rcx_52 + 0x30))(rcx_52, rbx_22)
        
        rcx_31 = var_280_1.d
        rdx_32 = r13_1 + 1
        r12_1 += 1
        r13_1 = rdx_32
        int32_t rax_50 = rcx_31 - 1
        
        if (rcx_31 == 0)
            rax_50 = 0
        
        if (rdx_32 s>= rax_50)
            break
    
    void* var_198 = nullptr
    int32_t var_190_1 = 0
    sub_140a2ccb0(&var_1a8, &var_198, U";", 1)
    void* r12_2 = var_198
    void* i_2 = (sx.q(var_190_1) << 4) + r12_2
    
    if (r12_2 != i_2)
        int32_t* r12_3 = r12_2 + 8
        
        do
            int16_t* rdx_41 = *(r12_3 - 8)
            int64_t r8_20 = sx.q(*r12_3)
            int16_t* rbx_23 = rdx_41
            void* rcx_54 = &rdx_41[r8_20]
            int32_t rbx_33
            
            if (rdx_41 != rcx_54)
                while (*rbx_23 != 0x3d)
                    rbx_23 = &rbx_23[1]
                    
                    if (rbx_23 == rcx_54)
                        goto label_140a76f7d
                
                rbx_33 = ((rbx_23 - rdx_41) s>> 1).d
            
            if (rdx_41 == rcx_54 || rbx_33 == 0xffffffff)
            label_140a76f7d:
                sub_140a35a10(&r12_3[-2])
                int32_t rax_51 = *r12_3
                int32_t rcx_56 = rax_51 - 1
                
                if (rax_51 == 0)
                    rcx_56 = 0
                
                if (rcx_56 s> 0)
                    int64_t rdi_14 = *(r12_3 - 8)
                    *(r12_3 - 8) = 0
                    int32_t r14_6 = r12_3[1]
                    *r12_3 = 0
                    int64_t i_11 = sx.q(i_3)
                    int32_t i_9 = (i_11 + 1).d
                    i_3 = i_9
                    
                    if (i_9 s> var_dc_1)
                        sub_140a88f20(&var_148, i_11.d)
                    
                    int64_t rcx_58 = i_11 * 3
                    void* rdx_43 = &var_148
                    
                    if (var_e8_1 != 0)
                        rdx_43 = var_e8_1
                    
                    *(rdx_43 + (rcx_58 << 3)) = rdi_14
                    *(rdx_43 + (rcx_58 << 3) + 8) = rax_51
                    *(rdx_43 + (rcx_58 << 3) + 0xc) = r14_6
                    *(rdx_43 + (rcx_58 << 3) + 0x10) = 3
            else
                int32_t temp6_1 = r8_20.d
                int16_t* rsi_15 = &data_142d40450
                int32_t rdi_20 = (r8_20 - 1).d
                
                if (temp6_1 != 0)
                    rsi_15 = rdx_41
                
                if (temp6_1 == 0)
                    rdi_20 = 0
                
                if (rbx_33 s< 0)
                    rdi_20 = 0
                else if (rbx_33 s< rdi_20)
                    rdi_20 = rbx_33
                
                int16_t* var_268 = nullptr
                int32_t rdx_62 = 0
                int32_t var_260_1 = 0
                int32_t rcx_93 = 0
                int32_t var_25c_1 = 0
                
                if (rsi_15 != 0 && *rsi_15 != 0 && rdi_20 s> 0)
                    if (rdi_20 + 1 s> 0)
                        sub_1405947f0(&var_268, rdi_20 + 1)
                        rcx_93 = var_25c_1
                        rdx_62 = var_260_1
                    
                    int32_t rax_89 = rdx_62 + 1 + rdi_20
                    var_260_1 = rax_89
                    
                    if (rax_89 s> rcx_93)
                        sub_140594770(&var_268)
                    
                    UnDecorator::getReferenceType(var_268, rsi_15, rdi_20 * 2)
                    var_268[sx.q(var_260_1) - 1] = 0
                
                void var_257
                sub_140a67180(&var_257, &var_268)
                int32_t r8_32 = *r12_3
                int32_t rbx_34 = r8_32 - 1
                
                if (r8_32 == 0)
                    rbx_34 = 0
                
                int32_t rcx_99
                
                if (rbx_33 + 1 s>= 0)
                    rcx_99 = rbx_34
                    
                    if (rbx_33 + 1 s< rbx_34)
                        rcx_99 = rbx_33 + 1
                else
                    rcx_99 = 0
                
                int64_t r9_7 = sx.q(rcx_99)
                
                if (sx.q(rbx_33 + 1) + 0x7fffffff s< r9_7)
                    rbx_34 = rcx_99
                else if (sx.q(rbx_33 + 1) + 0x7fffffff s< sx.q(rbx_34))
                    rbx_34 = rbx_33 - -0x80000000
                
                int16_t* const rax_93
                
                if (r8_32 == 0)
                    rax_93 = &data_142d40450
                else
                    rax_93 = *(r12_3 - 8)
                
                int16_t* r15_4 = &rax_93[r9_7]
                int32_t rbx_35 = rbx_34 - rcx_99
                int64_t var_250 = 0
                int64_t rsi_16 = 0
                int64_t var_248_1 = 0
                int32_t rdi_21 = 0
                int32_t r14_8 = 0
                
                if (r15_4 != 0 && *r15_4 != 0 && rbx_35 s> 0)
                    if (rbx_35 + 1 s> 0)
                        sub_1405947f0(&var_250, rbx_35 + 1)
                        r14_8 = var_248_1:4.d
                        rdi_21 = var_248_1.d
                        rsi_16 = var_250
                    
                    rdi_21 += rbx_35 + 1
                    var_248_1.d = rdi_21
                    
                    if (rdi_21 s> r14_8)
                        sub_140594770(&var_250)
                        r14_8 = var_248_1:4.d
                        rdi_21 = var_248_1.d
                        rsi_16 = var_250
                    
                    UnDecorator::getReferenceType(rsi_16, r15_4, rbx_35 * 2)
                    *(rsi_16 + (sx.q(rdi_21) << 1) - 2) = 0
                
                int64_t var_188 = rsi_16
                var_250 = 0
                int32_t var_180_1 = rdi_21
                int32_t var_17c_1 = r14_8
                int64_t var_248_2 = 0
                sub_1405e8840(&var_250)
                int32_t r8_35 = var_260_1
                
                if (r8_35 != 0 && r8_35 - 1 s> 0 && rdi_21 != 0 && rdi_21 - 1 s> 0)
                    int32_t rdi_23 = var_50_1
                    int32_t rbx_36 = 0
                    
                    if (rdi_23 s<= 0)
                        sub_140a5cd30(&var_d8, &var_268, &var_188)
                    else
                        int16_t** i_16 = &var_d8
                        
                        if (i_6 != 0)
                            i_16 = i_6
                        
                        while (true)
                            int32_t rcx_105 = rdi_23 & 0x80000001
                            
                            if (rcx_105 s< 0)
                                rcx_105 = ((rcx_105 - 1) | 0xfffffffe) + 1
                            
                            int32_t temp8_1
                            int32_t temp9_1
                            temp8_1:temp9_1 = sx.q(rdi_23)
                            int16_t* const rdx_72 = &data_142d40450
                            int32_t rax_101 = (temp9_1 - temp8_1) s>> 1
                            rdi_23 = rax_101
                            int32_t rax_102 = rax_101 + rbx_36
                            int64_t* rcx_109 = sx.q(rax_102) << 5
                            
                            if (r8_35 != 0)
                                rdx_72 = var_268
                            
                            int16_t* const rcx_110
                            
                            if (*(rcx_109 + i_16 + 8) == 0)
                                rcx_110 = &data_142d40450
                            else
                                rcx_110 = *(rcx_109 + i_16)
                            
                            if (sub_140a54510(rcx_110, rdx_72) s< 0)
                                rbx_36 = rax_102 + rcx_105
                            
                            if (rdi_23 s<= 0)
                                break
                            
                            r8_35 = var_260_1
                        
                        if (rbx_36 s>= var_50_1)
                            sub_140a5cd30(&var_d8, &var_268, &var_188)
                        else
                            int16_t** i_14 = &var_d8
                            
                            if (i_6 != 0)
                                i_14 = i_6
                            
                            int16_t* rdx_73
                            
                            if (i_14[sx.q(rbx_36) * 4 + 1].d == 0)
                                rdx_73 = &data_142d40450
                            else
                                rdx_73 = i_14[sx.q(rbx_36) * 4]
                            
                            int16_t* const rcx_111 = &data_142d40450
                            
                            if (var_260_1 != 0)
                                rcx_111 = var_268
                            
                            if (sub_140a54510(rcx_111, rdx_73) s< 0 || rbx_36 == 0xffffffff)
                                sub_140a5cd30(&var_d8, &var_268, &var_188)
                            else
                                int16_t** i_15 = &var_d8
                                
                                if (i_6 != 0)
                                    i_15 = i_6
                                
                                if (&i_15[2] == neg.q(sx.q(rbx_36) << 5))
                                    sub_140a5cd30(&var_d8, &var_268, &var_188)
                
                sub_1405e8840(&var_188)
                sub_1405e8840(&var_268)
            
            r12_3 = &r12_3[4]
        while (&r12_3[-2] != i_2)
    
    sub_140597000(&var_198)
    sub_1405e8840(&var_1a8)
    sub_1405e8840(&var_288)
    int32_t rcx_62 = 0
    int32_t var_290_1 = 0
    int32_t rdx_44 = 0
    int32_t var_28c_1 = 0
    int64_t var_298 = 0
    
    if (i_3 s<= 0)
    label_140a77922:
        
        if (var_298 != u"en-US-POSIX")
            int32_t rcx_122 = 0
            int32_t var_290_4 = 0
            
            if (rdx_44 != 0xc)
                sub_1405947f0(&var_298, 0xc)
                rdx_44 = var_28c_1
                rcx_122 = var_290_4
            
            if (rcx_122 + 0xc s> rdx_44)
                sub_140594770(&var_298)
            
            __builtin_memcpy(var_298, u"en-US-POSIX", 0x18)
            rdx_44 = var_28c_1
            rcx_62 = rcx_122 + 0xc
    else
        void* rax_54 = &var_148
        
        if (var_e8_1 != 0)
            rax_54 = var_e8_1
        
        if (*(rax_54 + 0x10) != 0 || i_3 s<= 0)
            goto label_140a77922
        
        void* rsi_10 = nullptr
        uint64_t r10_2 = -1
        
        do
            void* r8_22 = &var_148
            
            if (var_e8_1 != 0)
                r8_22 = var_e8_1
            
            char rax_55 = *(rsi_10 + r8_22 + 0x10)
            void* rbx_24 = rsi_10 + r8_22
            
            if (rax_55 != 0)
                if (rax_55 u<= 2)
                label_140a77129:
                    int32_t rdi_16 = rcx_62 - 1
                    
                    if (rcx_62 s<= 0)
                        rdi_16 = 0
                    
                    int32_t rax_61
                    rax_61.b = rcx_62 s<= 0
                    int32_t rax_63 = rax_61 + 1 + rcx_62
                    var_290_1 = rax_63
                    
                    if (rax_63 s> rdx_44)
                        sub_140594770(&var_298)
                    
                    int64_t rcx_66 = sx.q(rdi_16)
                    *(var_298 + (rcx_66 << 1)) = 0x2d
                    *(var_298 + (rcx_66 << 1) + 2) = 0
                    int32_t rax_66 = *(rbx_24 + 8)
                    int32_t r8_23 = rax_66 - 1
                    
                    if (rax_66 == 0)
                        r8_23 = 0
                    
                    sub_140a20ba0(&var_298, *rbx_24, r8_23)
                    goto label_140a777b9
                
                if (rax_55 == 3)
                    if (r10_2.d s>= 0 && r10_2.d s< i_3 && *(rsi_10 + r8_22 - 8) == 0
                            && *(rbx_24 + 8) s> 1)
                        int32_t rdi_15 = rcx_62 - 1
                        
                        if (rcx_62 s<= 0)
                            rdi_15 = 0
                        
                        int32_t rax_56
                        rax_56.b = rcx_62 s<= 0
                        int32_t rax_58 = rax_56 + 1 + rcx_62
                        
                        if (rax_58 s> rdx_44)
                            sub_140594770(&var_298)
                        
                        int64_t rcx_64 = sx.q(rdi_15)
                        *(var_298 + (rcx_64 << 1)) = 0x2d
                        *(var_298 + (rcx_64 << 1) + 2) = 0
                        rdx_44 = var_28c_1
                        rcx_62 = rax_58
                    
                    goto label_140a77129
            else if (&var_298 != rbx_24)
                sub_140596860(&var_298, *rbx_24, *(rbx_24 + 8), rdx_44, 0)
            label_140a777b9:
                rdx_44 = var_28c_1
                rcx_62 = var_290_1
                r10_2 = var_1c0
            
            r10_2 = zx.q(r10_2.d + 1)
            rsi_10 += 0x18
            var_1c0 = r10_2
        while ((r10_2 + 1).d s< i_3)
        
        if (rcx_62 == 0)
            goto label_140a77922
        
        if (rcx_62 - 1 s> 0)
            int64_t r8_38 = sx.q(var_50_1)
            
            if (r8_38.d s> 0)
                int16_t** i_4 = &var_d8
                int16_t r14_9 = 0x40
                
                if (i_6 != 0)
                    i_4 = i_6
                
                while (i_4 != &i_4[r8_38 * 4])
                    int32_t rdi_26 = rcx_62 - 1
                    
                    if (rcx_62 s<= 0)
                        rdi_26 = 0
                    
                    int32_t rax_112
                    rax_112.b = rcx_62 s<= 0
                    int32_t rax_114 = rax_112 + 1 + rcx_62
                    
                    if (rax_114 s> rdx_44)
                        sub_140594770(&var_298)
                    
                    int64_t rcx_117 = sx.q(rdi_26)
                    *(var_298 + (rcx_117 << 1)) = r14_9
                    r14_9 = 0x3b
                    *(var_298 + (rcx_117 << 1) + 2) = 0
                    int32_t rax_117 = i_4[1].d
                    int32_t r8_39 = rax_117 - 1
                    
                    if (rax_117 == 0)
                        r8_39 = 0
                    
                    sub_140a20ba0(&var_298, *i_4, r8_39)
                    int32_t rdi_27 = rax_114 - 1
                    
                    if (rax_114 s<= 0)
                        rdi_27 = 0
                    
                    int32_t rax_118
                    rax_118.b = rax_114 s<= 0
                    int32_t rax_120 = rax_118 + 1 + rax_114
                    
                    if (rax_120 s> var_28c_1)
                        sub_140594770(&var_298)
                    
                    int64_t rcx_120 = sx.q(rdi_27)
                    *(var_298 + (rcx_120 << 1)) = 0x3d
                    *(var_298 + (rcx_120 << 1) + 2) = 0
                    int32_t rax_123 = i_4[3].d
                    int32_t r8_40 = rax_123 - 1
                    
                    if (rax_123 == 0)
                        r8_40 = 0
                    
                    sub_140a20ba0(&var_298, i_4[2], r8_40)
                    rdx_44 = var_28c_1
                    i_4 = &i_4[4]
                    rcx_62 = rax_120
        
        if (rcx_62 s<= 1)
            goto label_140a77922
    
    result = arg1
    int64_t rax_126 = var_298
    var_298 = 0
    var_290_1.q = 0
    *result = rax_126
    result[1].d = rcx_62
    *(result + 0xc) = rdx_44
    sub_1405e8840(&var_298)
    sub_140a61b80(&var_d8)
    void* rbx_37 = &var_148
    int32_t i_13 = i_3
    
    if (var_e8_1 != 0)
        rbx_37 = var_e8_1
    
    if (i_13 != 0)
        int32_t i_5
        
        do
            sub_1405e8840(rbx_37)
            rbx_37 += 0x18
            i_5 = i_13
            i_13 -= 1
        while (i_5 != 1)
    
    sub_140a619f0(&var_148)
    sub_1405e8840(&var_1b8)
else
    int16_t* rbx_3 = var_1b8
    *result = 0
    result[1].d = var_1b0
    
    if (var_1b0 != 0)
        sub_1405a4c70(result, var_1b0, 0)
        memcpy(*result, rbx_3, var_1b0 * 2)
        rbx_3 = var_1b8
    else
        *(result + 0xc) = 0
    
    if (rbx_3 != 0)
        int64_t* rcx_7 = data_143ddb3f0
        
        if (rcx_7 != 0)
            int64_t r8_4 = *rcx_7
            (*(r8_4 + 0x30))(rcx_7, rbx_3, r8_4)
        else
            sub_140a750a0()
            int64_t* rcx_8 = data_143ddb3f0
            (*(*rcx_8 + 0x30))(rcx_8, rbx_3)
__security_check_cookie(rax_1 ^ &var_2c8)
return result
