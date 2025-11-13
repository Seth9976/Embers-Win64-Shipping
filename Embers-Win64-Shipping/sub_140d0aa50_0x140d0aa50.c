// 函数: sub_140d0aa50
// 地址: 0x140d0aa50
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void var_378
int64_t rax_1 = __security_cookie ^ &var_378
void* r13 = nullptr
int64_t* r12 = arg1
int32_t var_310 = 0
int32_t r14 = 0
int32_t var_2d0 = 0
int128_t* rax_2 = sub_140cc3cb0(arg1[1])
int128_t* var_2c8 = rax_2
int128_t* r15 = rax_2

if (rax_2 == 0)
    int128_t* rax_3 = j_sub_140a82f30(zx.q((&rax_2[2]).d))
    var_2c8 = rax_3
    r15 = rax_3
    
    if (rax_3 == 0)
        r15 = nullptr
        var_2c8 = nullptr
    else
        __builtin_memset(rax_3, 0, 0x20)

uint64_t var_2f0 = 0
int32_t var_2e8 = 0x80
sub_1405a4df0(&var_2f0)
int32_t rdx_2 = arg2[1].d + 1

if (rdx_2 s> *(arg2 + 0xc))
    sub_1405c5570(arg2, rdx_2)

void** rsi = var_2f0
int32_t rdi = 0
void** var_270 = rsi
int64_t var_2c0 = 0

while (true)
    int64_t rbx_1 = *r12
    void** const var_268
    std::exception::exception(&var_268)
    int64_t var_250_1 = rbx_1
    uint64_t* rbx_2 = arg2
    var_268 = &data_142eaca00
    int128_t* var_248_1 = r15
    int32_t rax_4 = rbx_2[1].d
    
    if (rdi s< rax_4)
        while (true)
            uint64_t rdx_3 = *rbx_2
            void* r9_1 = *(rdx_3 + (var_2c0 << 3))
            var_2c0 += 1
            int32_t rcx_7 = rax_4 - 1
            
            if (rdi + 1 s<= rcx_7)
                rcx_7 = rdi + 1
            
            int32_t rbx_3 = *(*(r9_1 + 0x10) + 0x58)
            int64_t rdi_2 = *(rdx_3 + (sx.q(rcx_7) << 3))
            int64_t rcx_8 = sx.q(sub_140b673d0())
            int32_t i_2 = divs.dp.d(sx.q((rcx_8 - 1).d + rbx_3), rcx_8.d)
            
            if (i_2 != 0)
                int32_t i
                
                do
                    rdi_2 += rcx_8
                    i = i_2
                    i_2 -= 1
                while (i != 1)
            
            void* rbx_4 = r9_1
            void* r9_2 = *(rbx_4 + 0x10)
            void* var_328_1 = r9_2
            
            if (((*(r9_2 + 0xcc) u>> 0x16).b & 1) == 0)
                sub_140cb0360(r9_2, 0)
                r9_2 = *(rbx_4 + 0x10)
                var_328_1 = r9_2
            
            uint64_t r11_1 = 0
            void** var_2d8_1 = rsi
            void** r15_1 = rsi
            void* var_330_1 = rbx_4
            void* r8_1 = rbx_4
            *rsi = rbx_4
            rsi[1].d = 0
            uint32_t r10_1 = 0
            *(rsi + 0xc) = -1
            uint32_t var_338_1 = 0
            
            while (true)
                int32_t rsi_1 = r11_1.d
                int32_t rax_13 = 0
                
                if (r10_1 s> 0)
                    do
                        *(r15_1 + 0xc) -= 1
                        
                        if (*(r15_1 + 0xc) s> 0)
                            r8_1 = sx.q(r15_1[1].d) + *r15_1
                            r11_1 = zx.q(r15_1[2].d)
                            rsi_1 = r11_1.d
                            var_330_1 = r8_1
                            *r15_1 = r8_1
                            break
                        
                        r8_1 = r15_1[-3]
                        r15_1 -= 0x18
                        rax_13 += 1
                        var_330_1 = r8_1
                        var_2d8_1 = r15_1
                    while (rax_13 s< r10_1)
                
                int64_t r10_2 = *(r9_2 + 0x1e8)
                r11_1 = zx.q(r11_1.d + 1)
                uint64_t var_320_1 = r11_1
                uint64_t rax_15 = zx.q(*(r10_2 + (sx.q(rsi_1) << 2)))
                int32_t rdi_5 = rax_15.d u>> 8 & 0x1f
                uint64_t rcx_10 = zx.q(rdi_5 - 1)
                int32_t var_358
                uint64_t var_350
                int16_t* const var_348
                
                if (rcx_10.d u<= 0x11)
                    int64_t var_308
                    void* var_260
                    void** var_1d8
                    void* rcx_46
                    uint64_t r8_14
                    uint64_t r11_7
                    
                    switch (rcx_10)
                        case 0, 1
                            r10_1 = zx.d(rax_15.b)
                            var_338_1 = r10_1
                            int64_t var_2b8_1 = 0
                            int32_t var_300_1 = 0
                            int64_t rdx_8 = *((rax_15 u>> 0xd) + r8_1)
                            var_308 = rdx_8
                            int64_t var_2fc_1 = 0
                            
                            if (rdx_8 == 0)
                                continue
                            else
                                int64_t* rbx_5 = *(*r12 + 8)
                                r8_1 = var_330_1
                                r10_1 = var_338_1
                                r11_1 = var_320_1
                                r9_2 = var_328_1
                                void var_1ec
                                
                                if (*sub_1405e21c0(rbx_5, &var_1ec, &var_308) != 0xffffffff)
                                    rbx_4 = r9_1
                                    continue
                                    continue
                                else
                                    void var_240
                                    sub_140cec5e0(rbx_5, &var_240, &var_308, nullptr)
                                label_140d0ac1d:
                                    r11_1 = var_320_1
                                    r10_1 = var_338_1
                                    r8_1 = var_330_1
                                    r9_2 = var_328_1
                                    rbx_4 = r9_1
                                    continue
                                    continue
                        case 2
                            r10_1 = zx.d(rax_15.b)
                            var_338_1 = r10_1
                            int64_t var_2a0_1 = 0
                            int32_t var_300_4 = 0
                            int64_t rdx_24 = *((rax_15 u>> 0xd) + r8_1)
                            var_308 = rdx_24
                            int64_t var_2fc_4 = 0
                            
                            if (rdx_24 == 0)
                                continue
                            else
                                int64_t* rbx_6 = *(*r12 + 8)
                                r8_1 = var_330_1
                                r10_1 = var_338_1
                                r11_1 = var_320_1
                                r9_2 = var_328_1
                                void var_22c
                                
                                if (*sub_1405e21c0(rbx_6, &var_22c, &var_308) == 0xffffffff)
                                    void var_228
                                    sub_140cec5e0(rbx_6, &var_228, &var_308, nullptr)
                                    goto label_140d0ac1d
                                
                                rbx_4 = r9_1
                                continue
                                continue
                        case 3
                            r10_1 = zx.d(rax_15.b)
                            int64_t rdi_6 = 0
                            void* r14_3 = (rax_15 u>> 0xd) + r8_1
                            var_338_1 = r10_1
                            int64_t r12_1 = sx.q(*(r14_3 + 8))
                            
                            if (r12_1 s<= 0)
                            label_140d0ac05:
                                r12 = arg1
                                r14 = var_310
                                continue
                                continue
                            else
                                int64_t var_2b0_1 = 0
                                
                                do
                                    int32_t var_300_2 = 0
                                    int64_t var_2fc_2 = 0
                                    int64_t rcx_15 = *(*r14_3 + (rdi_6 << 3))
                                    var_308 = rcx_15
                                    
                                    if (rcx_15 != 0)
                                        int64_t* rsi_2 = *(*arg1 + 8)
                                        void var_1f0
                                        void var_23c
                                        
                                        if (*sub_1405e21c0(rsi_2, &var_1f0, &var_308) == 0xffffffff)
                                            sub_140cec5e0(rsi_2, &var_23c, &var_308, nullptr)
                                    
                                    rdi_6 += 1
                                while (rdi_6 s< r12_1)
                                
                                r15_1 = var_2d8_1
                                r12 = arg1
                        case 4
                            r15_1 = &r15_1[3]
                            var_2d8_1 = r15_1
                            void* rdx_17 = (rax_15 u>> 0xd) + r8_1
                            r8_1 = *rdx_17
                            *r15_1 = r8_1
                            var_330_1 = r8_1
                            r15_1[1].d = *(*(r9_2 + 0x1e8) + (sx.q(r11_1.d) << 2))
                            int32_t rdx_18 = *(rdx_17 + 8)
                            *(r15_1 + 0xc) = rdx_18
                            int32_t rax_28 = *(*(r9_2 + 0x1e8) + (sx.q(r11_1.d + 1) << 2))
                            int32_t rcx_24 = (r11_1.d + 1) << 8
                            r11_1 = zx.q(r11_1.d + 2)
                            int32_t rax_29 = rax_28 + rcx_24
                            r15_1[2].d = r11_1.d
                            
                            if (rdx_18 != 0)
                                goto label_140d0b03b
                            
                            r11_1 = zx.q(rax_29 u>> 8)
                            r10_1 = zx.d(*(*(r9_2 + 0x1e8) + (r11_1 << 2) - 4)) - zx.d(rax_29.b)
                            var_338_1 = r10_1
                            continue
                        case 5
                            r15_1 = &r15_1[3]
                            var_2d8_1 = r15_1
                            *r15_1 = r8_1
                            r15_1[1].d = *(*(r9_2 + 0x1e8) + (sx.q(r11_1.d) << 2))
                            int64_t rcx_42 = sx.q(r11_1.d + 1)
                            r11_1 = zx.q(r11_1.d + 2)
                            *(r15_1 + 0xc) = *(*(r9_2 + 0x1e8) + (rcx_42 << 2))
                            r15_1[2].d = r11_1.d
                        label_140d0b03b:
                            r10_1 = 0
                            var_338_1 = 0
                            continue
                            continue
                        case 6
                            rcx_46 = (rax_15 u>> 0xd) + r8_1
                            var_338_1 = zx.d(rax_15.b)
                            r11_7 = zx.q(r11_1.d + 2)
                            r8_14 = zx.q(*(r10_2 + (sx.q(r11_1.d + 1) << 2))) << 0x20
                                | zx.q(*(r10_2 + (sx.q(r11_1.d) << 2)))
                        label_140d0b07f:
                            r8_14(rcx_46, &var_268)
                            r8_1 = var_330_1
                            r10_1 = var_338_1
                            r11_1 = r11_7
                            r9_2 = var_328_1
                            continue
                            continue
                        case 7
                            r11_7 = zx.q(r11_1.d + 2)
                            var_338_1 = zx.d(rax_15.b)
                            r8_14 = zx.q(*(r10_2 + (sx.q(r11_1.d + 1) << 2))) << 0x20
                                | zx.q(*(r10_2 + (sx.q(r11_1.d) << 2)))
                            rcx_46 = rbx_4
                            goto label_140d0b07f
                        case 8
                            void* rbx_7 = var_260
                            uint64_t rdi_10 = zx.q(*(r10_2 + (sx.q(r11_1.d + 1) << 2))) << 0x20
                                | zx.q(*(r10_2 + (sx.q(r11_1.d) << 2)))
                            var_320_1 = zx.q(r11_1.d + 2)
                            var_338_1 = zx.d(rax_15.b)
                            
                            if (rbx_7 == 0)
                                sub_140d1e450(&var_268)
                                rbx_7 = var_260
                            
                            *(rbx_7 + 0x90) = r9_1
                            void var_1e8
                            (*(*rdi_10 + 0x88))(rdi_10, 
                                *SymBuffer::end(sub_140b4cb20(&var_1d8, rbx_7), &var_1e8), 
                                (rax_15 u>> 0xd) + r8_1, 0, var_358, var_350, var_348)
                            sub_140b4cbb0(&var_1d8)
                            *(rbx_7 + 0x90) = 0
                            goto label_140d0ac1d
                        case 9
                            void* rbx_8 = var_260
                            uint64_t rdi_13 = zx.q(*(r10_2 + (sx.q(r11_1.d + 1) << 2))) << 0x20
                                | zx.q(*(r10_2 + (sx.q(r11_1.d) << 2)))
                            var_320_1 = zx.q(r11_1.d + 2)
                            var_338_1 = zx.d(rax_15.b)
                            
                            if (rbx_8 == 0)
                                sub_140d1e450(&var_268)
                                rbx_8 = var_260
                            
                            *(rbx_8 + 0x90) = r9_1
                            void var_1e0
                            (*(*rdi_13 + 0x88))(rdi_13, 
                                *SymBuffer::end(sub_140b4cb20(&var_1d8, rbx_8), &var_1e0), 
                                (rax_15 u>> 0xd) + r8_1, 0, var_358, var_350, var_348)
                            sub_140b4cbb0(&var_1d8)
                            *(rbx_8 + 0x90) = 0
                            goto label_140d0ac1d
                        case 0xa
                            uint64_t rcx_62 = rax_15 u>> 0xd
                            int32_t r9_10 = *(rcx_62 + r8_1 + 0xc)
                            int64_t* rcx_67
                            
                            if (r9_10 != 0)
                                int32_t rcx_63 = *(rcx_62 + r8_1 + 8)
                                
                                if (rcx_63 s>= 0)
                                    if (rcx_63 s>= data_143e1d9b4)
                                        goto label_140d0b217
                                    
                                    uint32_t r8_19 = zx.d(rcx_63.w)
                                    
                                    if (rcx_63 s< 0)
                                        rcx_63 += 0xffff
                                        r8_19 -= 0x10000
                                    
                                    rcx_67 = *(data_143e1d9a0 + (sx.q(rcx_63 s>> 0x10) << 3))
                                        + sx.q(r8_19) * 0x18
                                    r8_1 = var_330_1
                                    
                                    if (rcx_67 == 0)
                                        goto label_140d0b217
                                else
                                    r9_2 = var_328_1
                                    r10_1 = zx.d(rax_15.b)
                                    var_338_1 = r10_1
                                    continue
                            else
                            label_140d0b217:
                                r9_2 = var_328_1
                                r10_1 = zx.d(rax_15.b)
                                var_338_1 = r10_1
                                continue
                            
                            r10_1 = zx.d(rax_15.b)
                            var_338_1 = r10_1
                            
                            if (rcx_67[2].d != r9_10)
                                r9_2 = var_328_1
                                continue
                                continue
                            else
                                int64_t rcx_68 = *rcx_67
                                r9_2 = var_328_1
                                var_338_1 = r10_1
                                int64_t var_298_1 = 0
                                var_308 = rcx_68
                                int32_t var_300_5 = 0
                                int64_t var_2fc_5 = 0
                                
                                if (rcx_68 == 0)
                                    continue
                                else
                                    int64_t* rbx_9 = *(*r12 + 8)
                                    r8_1 = var_330_1
                                    r10_1 = var_338_1
                                    r11_1 = var_320_1
                                    r9_2 = var_328_1
                                    void var_224
                                    
                                    if (*sub_1405e21c0(rbx_9, &var_224, &var_308) == 0xffffffff)
                                        void var_220
                                        sub_140cec5e0(rbx_9, &var_220, &var_308, nullptr)
                                        goto label_140d0ac1d
                                    
                                    rbx_4 = r9_1
                                    continue
                                    continue
                        case 0xb
                            r10_1 = zx.d(rax_15.b)
                            void* r14_9 = (rax_15 u>> 0xd) + r8_1
                            var_338_1 = r10_1
                            int64_t i_3 = sx.q(*(r14_9 + 8))
                            
                            if (i_3 s<= 0)
                                r14 = var_310
                                continue
                                continue
                            else
                                int64_t rdi_14 = 0
                                int64_t i_1
                                
                                do
                                    int64_t rax_44 = *r14_9
                                    int32_t r8_23 = *(rax_44 + rdi_14 + 0xc)
                                    
                                    if (r8_23 != 0)
                                        int32_t rax_45 = *(rax_44 + rdi_14 + 8)
                                        
                                        if (rax_45 s>= 0 && rax_45 s< data_143e1d9b4)
                                            uint32_t rdx_45 = zx.d(rax_45.w)
                                            
                                            if (rax_45 s< 0)
                                                rax_45 += 0xffff
                                                rdx_45 -= 0x10000
                                            
                                            int64_t* rcx_73 =
                                                *(data_143e1d9a0 + (sx.q(rax_45 s>> 0x10) << 3))
                                                + sx.q(rdx_45) * 0x18
                                            
                                            if (rcx_73 != 0 && rcx_73[2].d == r8_23)
                                                int64_t rcx_74 = *rcx_73
                                                int64_t var_290_1 = 0
                                                var_308 = rcx_74
                                                int32_t var_300_6 = 0
                                                int64_t var_2fc_6 = 0
                                                
                                                if (rcx_74 != 0)
                                                    int64_t* rbx_10 = *(*r12 + 8)
                                                    void var_21c
                                                    void var_218
                                                    
                                                    if (*sub_1405e21c0(rbx_10, &var_21c, &var_308)
                                                            == 0xffffffff)
                                                        sub_140cec5e0(rbx_10, &var_218, &var_308, 
                                                            nullptr)
                                    
                                    rdi_14 += 0x20
                                    i_1 = i_3
                                    i_3 -= 1
                                while (i_1 != 1)
                        case 0xc
                            r10_1 = zx.d(rax_15.b)
                            var_338_1 = r10_1
                            continue
                            continue
                        case 0xd
                            break
                        case 0xe
                            r10_1 = zx.d(rax_15.b)
                            var_338_1 = r10_1
                            int64_t var_288_1 = 0
                            int32_t var_300_7 = 0
                            int64_t rdx_49 = *((rax_15 u>> 0xd) + r8_1)
                            var_308 = rdx_49
                            int64_t var_2fc_7 = 0
                            
                            if (rdx_49 == 0)
                                continue
                            else
                                int64_t* rbx_11 = *(*r12 + 8)
                                r8_1 = var_330_1
                                r10_1 = var_338_1
                                r11_1 = var_320_1
                                r9_2 = var_328_1
                                void var_214
                                
                                if (*sub_1405e21c0(rbx_11, &var_214, &var_308) == 0xffffffff)
                                    void var_210
                                    sub_140cec5e0(rbx_11, &var_210, &var_308, nullptr)
                                    goto label_140d0ac1d
                                
                                rbx_4 = r9_1
                                continue
                                continue
                        case 0xf
                            r10_1 = zx.d(rax_15.b)
                            var_338_1 = r10_1
                            int64_t var_280_1 = 0
                            int32_t var_300_8 = 0
                            int64_t rdx_52 = *((rax_15 u>> 0xd) + r8_1)
                            var_308 = rdx_52
                            int64_t var_2fc_8 = 0
                            
                            if (rdx_52 == 0)
                                continue
                            else
                                int64_t* rbx_12 = *(*r12 + 8)
                                r8_1 = var_330_1
                                r10_1 = var_338_1
                                r11_1 = var_320_1
                                r9_2 = var_328_1
                                void var_234
                                
                                if (*sub_1405e21c0(rbx_12, &var_234, &var_308) == 0xffffffff)
                                    void var_204
                                    sub_140cec5e0(rbx_12, &var_204, &var_308, nullptr)
                                    goto label_140d0ac1d
                                
                                rbx_4 = r9_1
                                continue
                                continue
                        case 0x10
                            r10_1 = zx.d(rax_15.b)
                            int64_t rdi_7 = 0
                            void* r14_6 = (rax_15 u>> 0xd) + r8_1
                            var_338_1 = r10_1
                            int64_t r12_2 = sx.q(*(r14_6 + 8))
                            
                            if (r12_2 s<= 0)
                                goto label_140d0ac05
                            
                            int64_t var_2a8_1 = 0
                            
                            do
                                void* rax_22 = *r14_6
                                
                                if ((rax_22.b & 1) != 0)
                                    rax_22 = (rax_22 s>> 1) + r14_6
                                
                                int64_t rax_23 = *(rax_22 + (rdi_7 << 3))
                                var_308 = rax_23
                                int32_t var_300_3 = 0
                                int64_t var_2fc_3 = 0
                                
                                if (rax_23 != 0)
                                    int64_t* rsi_3 = *(*arg1 + 8)
                                    void var_238
                                    void var_230
                                    
                                    if (*sub_1405e21c0(rsi_3, &var_238, &var_308) == 0xffffffff)
                                        sub_140cec5e0(rsi_3, &var_230, &var_308, nullptr)
                                
                                rdi_7 += 1
                            while (rdi_7 s< r12_2)
                            
                            r15_1 = var_2d8_1
                            r12 = arg1
                        case 0x11
                            r15_1 = &r15_1[3]
                            void* rdx_21 = (rax_15 u>> 0xd) + r8_1
                            var_2d8_1 = r15_1
                            r8_1 = *rdx_21
                            
                            if ((r8_1.b & 1) != 0)
                                r8_1 = (r8_1 s>> 1) + rdx_21
                            
                            *r15_1 = r8_1
                            var_330_1 = r8_1
                            r15_1[1].d = *(*(r9_2 + 0x1e8) + (sx.q(r11_1.d) << 2))
                            int32_t rdx_22 = *(rdx_21 + 8)
                            *(r15_1 + 0xc) = rdx_22
                            int32_t rax_32 = *(*(r9_2 + 0x1e8) + (sx.q(r11_1.d + 1) << 2))
                            int32_t rcx_31 = (r11_1.d + 1) << 8
                            r11_1 = zx.q(r11_1.d + 2)
                            int32_t rax_33 = rax_32 + rcx_31
                            r15_1[2].d = r11_1.d
                            
                            if (rdx_22 != 0)
                                goto label_140d0b03b
                            
                            uint32_t rcx_33 = rax_33 u>> 8
                            r11_1 = zx.q(rcx_33)
                            r10_1 =
                                zx.d(*(*(r9_2 + 0x1e8) + (zx.q(rcx_33) << 2) - 4)) - zx.d(rax_33.b)
                            var_338_1 = r10_1
                            continue
                    
                    if (rcx_10 == 0xd)
                        break
                    
                    r14 = var_310
                    goto label_140d0ac1d
                
                void* rax_55 = *(rbx_4 + 0x10)
                
                if (rax_55 != 0)
                    int64_t var_20c = *(rax_55 + 0x18)
                    sub_140b63b70(&var_20c, &var_2f0)
                else
                    var_2f0 = 0
                    var_2e8 = 0
                    sub_1405947f0(&var_2f0, (rax_55 + 5).d)
                    int32_t rax_56 = var_2e8 + 5
                    var_2e8 = rax_56
                    
                    if (rax_56 s> 0)
                        sub_140594770(&var_2f0)
                    
                    UnDecorator::getReferenceType(var_2f0, u"None", 0xa)
                
                uint64_t rbx_13 = &data_142d40450
                
                if (var_2e8 != 0)
                    rbx_13 = var_2f0
                
                int16_t* var_200
                sub_140d21e10(r9_1, &var_200, 0)
                int16_t* const rax_58 = &data_142d40450
                int32_t var_1f8
                
                if (var_1f8 != 0)
                    rax_58 = var_200
                
                var_348 = rax_58
                var_350 = rbx_13
                var_358 = rsi_1
                sub_140af98a0("Unknown", 0x388, 
                    Unknown token. Type:%d ReferenceTokenStreamIndex:%d Class:%s Obj:%s", zx.q(rdi_5))
                int16_t* rcx_90 = var_200
                
                if (rcx_90 != 0)
                    sub_140a74f90(rcx_90)
                
                uint64_t rcx_91 = var_2f0
                r14 = (r14 | 1) & 0xfffffffe
                var_310 = r14
                
                if (rcx_91 != 0)
                    sub_140a74f90(rcx_91)
                
                sub_140afbb40()
                goto label_140d0ac1d
            
            rbx_2 = arg2
            rdi += 1
            rsi = var_270
            rax_4 = rbx_2[1].d
            
            if (rdi s>= rax_4)
                break
        
        r15 = var_2c8
    
    if (*(r15 + 8) != 0)
        if (rbx_2 != r15)
            int128_t zmm1_1 = *rbx_2
            *rbx_2 = *r15
            *r15 = zmm1_1
        
        *(r15 + 8) = 0
        rdi = 0
        var_2c0 = 0
    
    sub_140d16360(&var_268)
    
    if (rdi s>= rbx_2[1].d)
        break

int32_t rax_59 = *(r15 + 0xc)
void* rbx_14 = r12[1]
*(r15 + 8) = 0

if (rax_59 s< 0 && rax_59 != 0)
    sub_1405c5570(r15, 0)

int32_t rax_60 = sub_140a20af0()

if (rax_60 != 0)
    r13 = *((zx.q(rax_60) u>> 0xe << 3) + &data_143cf0bf8) + (zx.q(rax_60) & 0x3fff) * 0x18

*(r13 + 8) = r15
int64_t result = sub_140ccd2c0(rbx_14, rax_60)

if (rsi != 0)
    result = sub_140a74f90(rsi)

__security_check_cookie(rax_1 ^ &var_378)
return result
