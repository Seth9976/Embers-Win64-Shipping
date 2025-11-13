// 函数: sub_140d27af0
// 地址: 0x140d27af0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void var_308
int64_t rax_1 = __security_cookie ^ &var_308
int64_t* r15 = arg1
int32_t var_288 = 0
int32_t r13 = 0
int32_t var_260 = 0
int128_t* rbx = arg2
int128_t* rax_2 = sub_140cc3cb0(arg1[1])
int128_t* var_280 = rax_2
int128_t* r12 = rax_2

if (rax_2 == 0)
    int128_t* rax_3 = j_sub_140a82f30(zx.q((&rax_2[2]).d))
    var_280 = rax_3
    r12 = rax_3
    
    if (rax_3 == 0)
        r12 = nullptr
        var_280 = nullptr
    else
        __builtin_memset(rax_3, 0, 0x20)

void** var_258 = nullptr
int64_t var_250 = 0x80
sub_1405a4df0(&var_258)
int32_t rcx_3 = *(rbx + 8)

if (rcx_3 + 1 s> *(rbx + 0xc))
    sub_1405c5570(rbx, rcx_3 + 1)
    rcx_3 = *(rbx + 8)

void** rsi = var_258
void** var_210 = rsi
int32_t rdi = 0
int64_t var_248 = 0
int64_t r8 = 0

while (true)
    int64_t var_220_1 = *r15
    void** const var_238 = &data_142eb0fb8
    int128_t* var_218_1 = r12
    int128_t var_230_1 = zx.o(0)
    
    if (rdi s< rcx_3)
        while (true)
            int64_t rdx_2 = *rbx
            void* rax_5 = *(rdx_2 + (r8 << 3))
            int32_t rcx_5 = rcx_3 - 1
            var_248 = r8 + 1
            
            if (rdi + 1 s<= rcx_5)
                rcx_5 = rdi + 1
            
            int32_t rbx_1 = *(*(rax_5 + 0x10) + 0x58)
            int64_t rdi_2 = *(rdx_2 + (sx.q(rcx_5) << 3))
            int64_t rcx_6 = sx.q(sub_140b673d0())
            int32_t i_9 = divs.dp.d(sx.q((rcx_6 - 1).d + rbx_1), rcx_6.d)
            
            if (i_9 != 0)
                int32_t i
                
                do
                    rdi_2 += rcx_6
                    i = i_9
                    i_9 -= 1
                while (i != 1)
            
            void* rbx_2 = rax_5
            void* rcx_7 = *(rbx_2 + 0x10)
            void* var_2b0_1 = rcx_7
            
            if (((*(rcx_7 + 0xcc) u>> 0x16).b & 1) == 0)
                sub_140cb0360(rcx_7, 0)
                var_2b0_1 = *(rbx_2 + 0x10)
            
            void* r9_1 = var_2b0_1
            uint64_t i_17 = 0
            uint64_t r14_1 = 0
            rsi[1].d = 0
            uint32_t r10_1 = 0
            uint32_t var_2c8_1 = 0
            void** r8_2 = rsi
            void** var_2b8_1 = rsi
            void* r11_1 = rbx_2
            void* var_2a0_1 = rbx_2
            *rsi = rbx_2
            *(rsi + 0xc) = -1
            
            while (true)
                int32_t rsi_1 = r14_1.d
                int32_t rax_14 = i_17.d
                
                if (r10_1 s> 0)
                    do
                        *(r8_2 + 0xc) -= 1
                        
                        if (*(r8_2 + 0xc) s> 0)
                            r11_1 = sx.q(r8_2[1].d) + *r8_2
                            r14_1 = zx.q(r8_2[2].d)
                            rsi_1 = r14_1.d
                            var_2a0_1 = r11_1
                            *r8_2 = r11_1
                            break
                        
                        r11_1 = r8_2[-3]
                        r8_2 -= 0x18
                        rax_14 += 1
                        var_2a0_1 = r11_1
                        var_2b8_1 = r8_2
                    while (rax_14 s< r10_1)
                
                int64_t r10_2 = *(r9_1 + 0x1e8)
                r14_1 = zx.q(r14_1.d + 1)
                uint64_t rax_16 = zx.q(*(r10_2 + (sx.q(rsi_1) << 2)))
                int32_t rdi_5 = rax_16.d u>> 8 & 0x1f
                uint64_t rcx_9 = zx.q(rdi_5 - 1)
                int32_t var_2e8
                uint64_t i_21
                void** var_2d8
                
                if (rcx_9.d u> 0x11)
                    void* rax_266 = *(rbx_2 + 0x10)
                    uint64_t i_18
                    void* var_268
                    
                    if (rax_266 != 0)
                        int64_t var_1f8 = *(rax_266 + 0x18)
                        sub_140b63b70(&var_1f8, &i_18)
                    else
                        i_18 = i_17
                        sub_1405947f0(&i_18, (rax_266 + 5).d)
                        var_268.d = rax_266.d + 5
                        
                        if (rax_266.d + 5 s> var_268:4.d)
                            sub_140594770(&i_18)
                        
                        UnDecorator::getReferenceType(i_18, u"None", 0xa)
                    
                    uint64_t i_20 = &data_142d40450
                    
                    if (var_268.d != 0)
                        i_20 = i_18
                    
                    var_258 = nullptr
                    int32_t var_250_1 = 0
                    sub_140d21e40(rax_5, 0, &var_258)
                    void** rax_269 = &data_142d40450
                    
                    if (var_250_1 != 0)
                        rax_269 = var_258
                    
                    var_2d8 = rax_269
                    i_21 = i_20
                    var_2e8 = rsi_1
                    sub_140af98a0("Unknown", 0x388, 
                        Unknown token. Type:%d ReferenceTokenStreamIndex:%d Class:%s Obj:%s", 
                        zx.q(rdi_5))
                    void** rcx_203 = var_258
                    
                    if (rcx_203 != 0)
                        sub_140a74f90(rcx_203)
                    
                    uint64_t i_19 = i_18
                    r13 = (r13 | 1) & 0xfffffffe
                    var_288 = r13
                    
                    if (i_19 != 0)
                        sub_140a74f90(i_19)
                    
                    sub_140afbb40()
                    r8_2 = var_2b8_1
                    r11_1 = var_2a0_1
                    r10_1 = var_2c8_1
                    goto label_140d27ccf
                
                int32_t* var_2c0
                void** var_1d8
                void* rcx_109
                void* rbx_12
                int32_t* rsi_15
                void* rdi_17
                int32_t r8_17
                uint64_t r8_22
                int64_t* r9_6
                
                switch (rcx_9)
                    case 0, 1
                        int32_t* r15_1 = *r15
                        i_17 = 0
                        void* rdi_8 = (rax_16 u>> 0xd) + r11_1
                        r10_1 = zx.d(rax_16.b)
                        var_2c8_1 = r10_1
                        int32_t* var_298_1 = r15_1
                        int64_t* r8_3 = *rdi_8
                        
                        if (r8_3 == 0)
                        label_140d27ca4:
                            r8_2 = var_2b8_1
                            r15 = arg1
                            continue
                            continue
                        else
                            int32_t i_1 = *(r8_3 + 0xc)
                            void* rsi_2
                            
                            if (i_1 s>= data_143e1d9b4)
                                rsi_2 = nullptr
                            else
                                uint32_t rdx_7 = zx.d(i_1.w)
                                int32_t i_10 = i_1
                                
                                if (i_1 s< 0)
                                    i_10 = i_1 + 0xffff
                                    rdx_7 -= 0x10000
                                
                                rsi_2 = *(data_143e1d9a0 + (sx.q(i_10 s>> 0x10) << 3))
                                    + sx.q(rdx_7) * 0x18
                                i_17 = 0
                            
                            int32_t i_11 = *(rsi_2 + 0xc)
                            
                            if (i_11 == *r15_1)
                                r8_2 = var_2b8_1
                                r15 = arg1
                                rbx_2 = rax_5
                                continue
                                continue
                            else
                                char rdx_9 = *(rsi_2 + 0xb) & 1
                                
                                if (rdx_9 != 0 || i_11 != 0)
                                    if (rdx_9 == 0)
                                        i_1 = i_11
                                    
                                    void* const rax_36
                                    
                                    if (i_1 s>= data_143e1d9b4)
                                        rax_36 = nullptr
                                    else
                                        uint32_t rdx_15 = zx.d(i_1.w)
                                        int32_t i_12 = i_1
                                        
                                        if (i_1 s< 0)
                                            i_12 = i_1 + 0xffff
                                            rdx_15 -= 0x10000
                                        
                                        rax_36 = *(data_143e1d9a0 + (sx.q(i_12 s>> 0x10) << 3))
                                            + sx.q(rdx_15) * 0x18
                                    
                                    void* rdi_10 = *(r15_1 + 8)
                                    int32_t* rdx_17 = *(rdi_10 + 0x18)
                                    int64_t r8_6 = sx.q(*(rdi_10 + 0x20))
                                    int32_t* rcx_22 = rdx_17
                                    int32_t* r13_3 =
                                        sx.q(not.d(*(rax_36 + 0xc))) * 0x50 + data_143e1d678
                                    var_2c0 = r13_3
                                    void* rax_40 = &rdx_17[r8_6]
                                    
                                    if (rdx_17 != rax_40)
                                        while (*rcx_22 != i_1)
                                            rcx_22 = &rcx_22[1]
                                            
                                            if (rcx_22 == rax_40)
                                                goto label_140d27fdb
                                    
                                    if (rdx_17 == rax_40
                                        || ((rcx_22 - rdx_17) s>> 2).d == 0xffffffff)
                                    label_140d27fdb:
                                        int32_t rax_41 = (r8_6 + 1).d
                                        *(rdi_10 + 0x20) = rax_41
                                        
                                        if (rax_41 s> *(rdi_10 + 0x24))
                                            sub_1405a4cf0(rdi_10 + 0x18)
                                        
                                        *((r8_6 << 2) + *(rdi_10 + 0x18)) = i_1
                                    
                                    sub_1408d92c0(&r13_3[0xe], r15_1)
                                    i_17 = 0
                                    int32_t* rsi_5 = *(r13_3 + 0x18)
                                    int64_t r14_2 = 0
                                    uint64_t r12_2 = sx.q(r13_3[8]) << 2 u>> 2
                                    
                                    if (rsi_5 u> &rsi_5[sx.q(r13_3[8])])
                                        r12_2 = 0
                                    
                                    if (r12_2 != 0)
                                        do
                                            int32_t i_2 = *rsi_5
                                            
                                            if (i_2 != *r15_1)
                                                void* rbx_3 = *(r15_1 + 8)
                                                int32_t* rdx_20 = *(rbx_3 + 0x18)
                                                int64_t r8_7 = sx.q(*(rbx_3 + 0x20))
                                                int32_t* rcx_27 = rdx_20
                                                void* rax_45 = &rdx_20[r8_7]
                                                
                                                if (rdx_20 != rax_45)
                                                    while (*rcx_27 != i_2)
                                                        rcx_27 = &rcx_27[1]
                                                        
                                                        if (rcx_27 == rax_45)
                                                            goto label_140d2807b
                                                
                                                if (rdx_20 == rax_45
                                                    || ((rcx_27 - rdx_20) s>> 2).d == 0xffffffff)
                                                label_140d2807b:
                                                    int32_t rax_46 = (r8_7 + 1).d
                                                    *(rbx_3 + 0x20) = rax_46
                                                    
                                                    if (rax_46 s> *(rbx_3 + 0x24))
                                                        sub_1405a4cf0(rbx_3 + 0x18)
                                                    
                                                    *((r8_7 << 2) + *(rbx_3 + 0x18)) = i_2
                                            
                                            rsi_5 = &rsi_5[1]
                                            r14_2 += 1
                                        while (r14_2 != r12_2)
                                        
                                        r13_3 = var_2c0
                                        i_17 = 0
                                        r15_1 = var_298_1
                                    
                                    int64_t rsi_6 = 0
                                    int32_t* r14_3 = *(r13_3 + 0x28)
                                    uint64_t r12_4 = sx.q(r13_3[0xc]) << 2 u>> 2
                                    
                                    if (r14_3 u> &r14_3[sx.q(r13_3[0xc])])
                                        r12_4 = 0
                                    
                                    if (r12_4 == 0)
                                        goto label_140d297c3
                                    
                                    do
                                        void* rbx_4 = *(r15_1 + 8)
                                        int32_t i_3 = *r14_3
                                        int32_t* rdx_22 = *(rbx_4 + 0x28)
                                        int64_t r8_8 = sx.q(*(rbx_4 + 0x30))
                                        int32_t* rcx_31 = rdx_22
                                        void* rax_50 = &rdx_22[r8_8]
                                        
                                        if (rdx_22 != rax_50)
                                            while (*rcx_31 != i_3)
                                                rcx_31 = &rcx_31[1]
                                                
                                                if (rcx_31 == rax_50)
                                                    goto label_140d2811e
                                        
                                        if (rdx_22 == rax_50
                                            || ((rcx_31 - rdx_22) s>> 2).d == 0xffffffff)
                                        label_140d2811e:
                                            int32_t rax_51 = (r8_8 + 1).d
                                            *(rbx_4 + 0x30) = rax_51
                                            
                                            if (rax_51 s> *(rbx_4 + 0x34))
                                                sub_1405a4cf0(rbx_4 + 0x28)
                                            
                                            *((r8_8 << 2) + *(rbx_4 + 0x28)) = i_3
                                        
                                        r15_1 = var_298_1
                                        r14_3 = &r14_3[1]
                                        rsi_6 += 1
                                    while (rsi_6 != r12_4)
                                    
                                    r8_2 = var_2b8_1
                                    r11_1 = var_2a0_1
                                    r10_1 = var_2c8_1
                                    r15 = arg1
                                    r12 = var_280
                                    r13 = var_288
                                    goto label_140d27ccf
                                
                                i_17 = zx.q(i_11)
                                rbx_2 = rax_5
                                
                                if (i_1 s<= data_143e1d994)
                                    goto label_140d27ca4
                                
                                if ((*(*r8_3 + 0x20))(r8_3, i_17) != 0)
                                    int64_t* r9_2 = *rdi_8
                                    
                                    if ((r9_2[1].d & 0x1400) != 0)
                                        goto label_140d27eb9
                                    
                                    int32_t r10_3 = *(r9_2 + 0xc)
                                    void* const rax_26
                                    
                                    if (r10_3 s>= data_143e1d9b4)
                                        rax_26 = nullptr
                                    else
                                        uint32_t rdx_10 = zx.d(r10_3.w)
                                        int32_t rax_22 = r10_3
                                        
                                        if (r10_3 s< 0)
                                            rax_22 = r10_3 + 0xffff
                                            rdx_10 -= 0x10000
                                        
                                        rax_26 = *(data_143e1d9a0 + (sx.q(rax_22 s>> 0x10) << 3))
                                            + sx.q(rdx_10) * 0x18
                                    
                                    if (((*(rax_26 + 8) u>> 0x1e).b & 1) != 0)
                                        goto label_140d27eb9
                                    
                                    i_21.b = 1
                                    var_2e8.q = r12
                                    sub_140d17860(r15_1, r10_3, rsi_2, r9_2, var_2e8, i_21.b)
                                    r8_2 = var_2b8_1
                                    r11_1 = var_2a0_1
                                    r10_1 = var_2c8_1
                                    r15 = arg1
                                    goto label_140d27cd4
                                
                            label_140d27eb9:
                                void* rdi_9 = *(r15_1 + 8)
                                int32_t i_4 = *(*rdi_8 + 0xc)
                                int32_t* rdx_13 = *(rdi_9 + 0x28)
                                int64_t r8_5 = sx.q(*(rdi_9 + 0x30))
                                int32_t* rcx_16 = rdx_13
                                void* rax_30 = &rdx_13[r8_5]
                                
                                if (rdx_13 != rax_30)
                                    while (*rcx_16 != i_4)
                                        rcx_16 = &rcx_16[1]
                                        
                                        if (rcx_16 == rax_30)
                                            goto label_140d27f18
                                    
                                    r11_1 = var_2a0_1
                                    r10_1 = var_2c8_1
                                    i_17 = 0
                                    r15 = arg1
                                    r9_1 = var_2b0_1
                                
                                if (rdx_13 == rax_30 || ((rcx_16 - rdx_13) s>> 2).d == 0xffffffff)
                                label_140d27f18:
                                    int32_t rax_31 = (r8_5 + 1).d
                                    *(rdi_9 + 0x30) = rax_31
                                    
                                    if (rax_31 s> *(rdi_9 + 0x34))
                                        sub_1405a4cf0(rdi_9 + 0x28)
                                    
                                    *((r8_5 << 2) + *(rdi_9 + 0x28)) = i_4
                                label_140d28ae8:
                                    r15 = arg1
                                    r11_1 = var_2a0_1
                                    r8_2 = var_2b8_1
                                    r10_1 = var_2c8_1
                                    goto label_140d27ccf
                    case 2
                        rsi_15 = *r15
                        i_17 = 0
                        rbx_12 = (rax_16 u>> 0xd) + r11_1
                        r10_1 = zx.d(rax_16.b)
                        var_2c8_1 = r10_1
                        r9_6 = *rbx_12
                        
                        if (r9_6 == 0)
                            goto label_140d286a6
                        
                        r8_17 = *(r9_6 + 0xc)
                        
                        if (r8_17 s>= data_143e1d9b4)
                            rdi_17 = nullptr
                        else
                            uint32_t rdx_64 = zx.d(r8_17.w)
                            int32_t rax_130 = r8_17
                            
                            if (r8_17 s< 0)
                                rax_130 = r8_17 + 0xffff
                                rdx_64 -= 0x10000
                            
                            rdi_17 = *(data_143e1d9a0 + (sx.q(rax_130 s>> 0x10) << 3))
                                + sx.q(rdx_64) * 0x18
                            i_17 = 0
                        
                        int32_t rax_134 = *(rdi_17 + 0xc)
                        
                        if (rax_134 == *rsi_15)
                            goto label_140d286a1
                        
                        char rdx_66 = *(rdi_17 + 0xb) & 1
                        
                        if (rdx_66 == 0 && rax_134 == 0)
                        label_140d29448:
                            i_17 = 0
                            r8_2 = var_2b8_1
                            
                            if (r8_17 s<= data_143e1d994)
                                goto label_140d286a6
                            
                            if ((*(*r9_6 + 0x20))(r9_6, 0, r8_2) != 0)
                                int64_t* r9_11 = *rbx_12
                                
                                if ((r9_11[1].d & 0x1400) == 0)
                                    int32_t r10_12 = *(r9_11 + 0xc)
                                    void* const rax_231
                                    
                                    if (r10_12 s>= data_143e1d9b4)
                                        rax_231 = nullptr
                                    else
                                        uint32_t rdx_115 = zx.d(r10_12.w)
                                        int32_t rax_227 = r10_12
                                        
                                        if (r10_12 s< 0)
                                            rax_227 = r10_12 + 0xffff
                                            rdx_115 -= 0x10000
                                        
                                        rax_231 = *(data_143e1d9a0 + (sx.q(rax_227 s>> 0x10) << 3))
                                            + sx.q(rdx_115) * 0x18
                                    
                                    if (((*(rax_231 + 8) u>> 0x1e).b & 1) == 0)
                                        i_21.b = 1
                                        var_2e8.q = r12
                                        sub_140d17860(rsi_15, r10_12, rdi_17, r9_11, var_2e8, 
                                            i_21.b)
                                        r11_1 = var_2a0_1
                                        r8_2 = var_2b8_1
                                        r10_1 = var_2c8_1
                                        goto label_140d27ccf
                            
                            var_2c0.d = *(*rbx_12 + 0xc)
                        label_140d28f1d:
                            sub_1408d92c0(*(rsi_15 + 8) + 0x28, &var_2c0)
                            r11_1 = var_2a0_1
                            r8_2 = var_2b8_1
                            r10_1 = var_2c8_1
                            goto label_140d27ccf
                        
                        if (rdx_66 == 0)
                            r8_17 = rax_134
                        
                        var_2c0.d = r8_17
                        void* const rax_138
                        
                        if (r8_17 s>= data_143e1d9b4)
                            rax_138 = nullptr
                        else
                            uint32_t rax_135 = zx.d(r8_17.w)
                            
                            if (r8_17 s< 0)
                                r8_17 += 0xffff
                                rax_135 -= 0x10000
                            
                            rax_138 = *(data_143e1d9a0 + (sx.q(r8_17 s>> 0x10) << 3))
                                + sx.q(rax_135) * 0x18
                        
                        void* r15_12 = sx.q(not.d(*(rax_138 + 0xc))) * 0x50 + data_143e1d678
                        sub_1408d92c0(*(rsi_15 + 8) + 0x18, &var_2c0)
                        sub_1408d92c0(r15_12 + 0x38, rsi_15)
                        i_17 = 0
                        int32_t* rbx_13 = *(r15_12 + 0x18)
                        int64_t rdi_18 = 0
                        uint64_t r14_10 = sx.q(*(r15_12 + 0x20)) << 2 u>> 2
                        
                        if (rbx_13 u> &rbx_13[sx.q(*(r15_12 + 0x20))])
                            r14_10 = 0
                        
                        if (r14_10 != 0)
                            do
                                int32_t rax_144 = *rbx_13
                                var_2c0.d = rax_144
                                
                                if (rax_144 != *rsi_15)
                                    sub_1408d92c0(*(rsi_15 + 8) + 0x18, &var_2c0)
                                
                                rbx_13 = &rbx_13[1]
                                rdi_18 += 1
                            while (rdi_18 != r14_10)
                            
                            i_17 = 0
                        
                        int64_t rdi_19 = 0
                        int32_t* rbx_14 = *(r15_12 + 0x28)
                        uint64_t r14_12 = sx.q(*(r15_12 + 0x30)) << 2 u>> 2
                        
                        if (rbx_14 u> &rbx_14[sx.q(*(r15_12 + 0x30))])
                            r14_12 = 0
                        
                        if (r14_12 != 0)
                            do
                                var_2c0.d = *rbx_14
                                sub_1408d92c0(*(rsi_15 + 8) + 0x28, &var_2c0)
                                rdi_19 += 1
                                rbx_14 = &rbx_14[1]
                            while (rdi_19 != r14_12)
                            
                            goto label_140d28ae8
                        
                    label_140d297c3:
                        r15 = arg1
                    label_140d2868b:
                        r11_1 = var_2a0_1
                        r10_1 = var_2c8_1
                        r12 = var_280
                        r13 = var_288
                    label_140d286a1:
                        r8_2 = var_2b8_1
                    label_140d286a6:
                        r9_1 = var_2b0_1
                        rbx_2 = rax_5
                        continue
                        continue
                    case 3
                        r10_1 = zx.d(rax_16.b)
                        void* rdx_26 = (rax_16 u>> 0xd) + r11_1
                        int64_t var_298_2 = 0
                        int64_t rcx_35 = 0
                        void* var_240_1 = rdx_26
                        var_2c8_1 = r10_1
                        int64_t rax_53 = sx.q(*(rdx_26 + 8))
                        
                        if (rax_53 s<= 0)
                            i_17 = 0
                            continue
                            continue
                        
                        do
                            int64_t rax_54 = *rdx_26
                            int64_t* r8_9 = *(rax_54 + (rcx_35 << 3))
                            int64_t* rsi_7 = rax_54 + (rcx_35 << 3)
                            int32_t* r15_4 = *r15
                            var_2c0 = r15_4
                            
                            if (r8_9 != 0)
                                int32_t i_5 = *(r8_9 + 0xc)
                                void* rdi_11
                                int64_t r14_4
                                
                                if (i_5 s>= data_143e1d9b4)
                                    r14_4 = 0
                                    rdi_11 = nullptr
                                else
                                    uint32_t rdx_27 = zx.d(i_5.w)
                                    int32_t i_13 = i_5
                                    
                                    if (i_5 s< 0)
                                        i_13 = i_5 + 0xffff
                                        rdx_27 -= 0x10000
                                    
                                    r14_4 = 0
                                    rdi_11 = *(data_143e1d9a0 + (sx.q(i_13 s>> 0x10) << 3))
                                        + sx.q(rdx_27) * 0x18
                                    rcx_35 = var_298_2
                                
                                int32_t i_14 = *(rdi_11 + 0xc)
                                
                                if (i_14 != *r15_4)
                                    char rdx_29 = *(rdi_11 + 0xb) & 1
                                    
                                    if (rdx_29 != 0 || i_14 != 0)
                                        if (rdx_29 == 0)
                                            i_5 = i_14
                                        
                                        void* const rax_71
                                        
                                        if (i_5 s>= data_143e1d9b4)
                                            rax_71 = nullptr
                                        else
                                            uint32_t rdx_34 = zx.d(i_5.w)
                                            int32_t i_15 = i_5
                                            
                                            if (i_5 s< 0)
                                                i_15 = i_5 + 0xffff
                                                rdx_34 -= 0x10000
                                            
                                            rax_71 = *(data_143e1d9a0 + (sx.q(i_15 s>> 0x10) << 3))
                                                + sx.q(rdx_34) * 0x18
                                        
                                        void* rdi_12 = *(r15_4 + 8)
                                        int32_t* rdx_36 = *(rdi_12 + 0x18)
                                        int64_t r8_11 = sx.q(*(rdi_12 + 0x20))
                                        int32_t* rcx_47 = rdx_36
                                        void* r13_7 =
                                            sx.q(not.d(*(rax_71 + 0xc))) * 0x50 + data_143e1d678
                                        void* rax_75 = &rdx_36[r8_11]
                                        
                                        if (rdx_36 != rax_75)
                                            while (*rcx_47 != i_5)
                                                rcx_47 = &rcx_47[1]
                                                
                                                if (rcx_47 == rax_75)
                                                    goto label_140d2837b
                                        
                                        if (rdx_36 == rax_75
                                            || ((rcx_47 - rdx_36) s>> 2).d == 0xffffffff)
                                        label_140d2837b:
                                            int32_t rax_76 = (r8_11 + 1).d
                                            *(rdi_12 + 0x20) = rax_76
                                            
                                            if (rax_76 s> *(rdi_12 + 0x24))
                                                sub_1405a4cf0(rdi_12 + 0x18)
                                            
                                            *((r8_11 << 2) + *(rdi_12 + 0x18)) = i_5
                                        
                                        sub_1408d92c0(r13_7 + 0x38, r15_4)
                                        int32_t* rsi_9 = *(r13_7 + 0x18)
                                        uint64_t r12_6 = sx.q(*(r13_7 + 0x20)) << 2 u>> 2
                                        
                                        if (rsi_9 u> &rsi_9[sx.q(*(r13_7 + 0x20))])
                                            r12_6 = 0
                                        
                                        if (r12_6 != 0)
                                            do
                                                int32_t i_6 = *rsi_9
                                                
                                                if (i_6 != *r15_4)
                                                    void* rbx_5 = *(r15_4 + 8)
                                                    int32_t* rdx_39 = *(rbx_5 + 0x18)
                                                    int64_t r8_12 = sx.q(*(rbx_5 + 0x20))
                                                    int32_t* rcx_52 = rdx_39
                                                    void* rax_80 = &rdx_39[r8_12]
                                                    
                                                    if (rdx_39 != rax_80)
                                                        while (*rcx_52 != i_6)
                                                            rcx_52 = &rcx_52[1]
                                                            
                                                            if (rcx_52 == rax_80)
                                                                goto label_140d2841b
                                                    
                                                    if (rdx_39 == rax_80
                                                        || ((rcx_52 - rdx_39) s>> 2).d
                                                        == 0xffffffff)
                                                    label_140d2841b:
                                                        int32_t rax_81 = (r8_12 + 1).d
                                                        *(rbx_5 + 0x20) = rax_81
                                                        
                                                        if (rax_81 s> *(rbx_5 + 0x24))
                                                            sub_1405a4cf0(rbx_5 + 0x18)
                                                        
                                                        *((r8_12 << 2) + *(rbx_5 + 0x18)) = i_6
                                                
                                                rsi_9 = &rsi_9[1]
                                                r14_4 += 1
                                            while (r14_4 != r12_6)
                                            
                                            r15_4 = var_2c0
                                        
                                        int64_t rsi_10 = 0
                                        int32_t* rdi_13 = *(r13_7 + 0x28)
                                        uint64_t r12_8 = sx.q(*(r13_7 + 0x30)) << 2 u>> 2
                                        
                                        if (rdi_13 u> &rdi_13[sx.q(*(r13_7 + 0x30))])
                                            r12_8 = 0
                                        
                                        if (r12_8 != 0)
                                            do
                                                void* rbx_6 = *(r15_4 + 8)
                                                int32_t i_7 = *rdi_13
                                                int32_t* rdx_41 = *(rbx_6 + 0x28)
                                                int64_t r8_13 = sx.q(*(rbx_6 + 0x30))
                                                int32_t* rax_85 = rdx_41
                                                void* rcx_56 = &rdx_41[r8_13]
                                                
                                                if (rdx_41 != rcx_56)
                                                    while (*rax_85 != i_7)
                                                        rax_85 = &rax_85[1]
                                                        
                                                        if (rax_85 == rcx_56)
                                                            goto label_140d284bf
                                                
                                                if (rdx_41 == rcx_56
                                                    || ((rax_85 - rdx_41) s>> 2).d == 0xffffffff)
                                                label_140d284bf:
                                                    int32_t rax_88 = (r8_13 + 1).d
                                                    *(rbx_6 + 0x30) = rax_88
                                                    
                                                    if (rax_88 s> *(rbx_6 + 0x34))
                                                        sub_1405a4cf0(rbx_6 + 0x28)
                                                    
                                                    *((r8_13 << 2) + *(rbx_6 + 0x28)) = i_7
                                                
                                                r15_4 = var_2c0
                                                rdi_13 = &rdi_13[1]
                                                rsi_10 += 1
                                            while (rsi_10 != r12_8)
                                        
                                        rcx_35 = var_298_2
                                    else if (i_5 s> data_143e1d994)
                                        if ((*(*r8_9 + 0x20))(r8_9) == 0)
                                            var_2c0.d = *(*rsi_7 + 0xc)
                                            sub_1408d92c0(*(r15_4 + 8) + 0x28, &var_2c0)
                                        else
                                            int64_t* r9_3 = *rsi_7
                                            
                                            if ((r9_3[1].d & 0x1400) != 0)
                                                var_2c0.d = *(*rsi_7 + 0xc)
                                                sub_1408d92c0(*(r15_4 + 8) + 0x28, &var_2c0)
                                            else
                                                int32_t r10_4 = *(r9_3 + 0xc)
                                                void* const rax_64
                                                
                                                if (r10_4 s>= data_143e1d9b4)
                                                    rax_64 = nullptr
                                                else
                                                    uint32_t rdx_30 = zx.d(r10_4.w)
                                                    int32_t rax_60 = r10_4
                                                    
                                                    if (r10_4 s< 0)
                                                        rax_60 = r10_4 + 0xffff
                                                        rdx_30 -= 0x10000
                                                    
                                                    rax_64 = *(data_143e1d9a0
                                                        + (sx.q(rax_60 s>> 0x10) << 3))
                                                        + sx.q(rdx_30) * 0x18
                                                
                                                if (((*(rax_64 + 8) u>> 0x1e).b & 1) != 0)
                                                    var_2c0.d = *(*rsi_7 + 0xc)
                                                    sub_1408d92c0(*(r15_4 + 8) + 0x28, &var_2c0)
                                                else
                                                    i_21.b = 1
                                                    var_2e8.q = r12
                                                    sub_140d17860(r15_4, r10_4, rdi_11, r9_3, 
                                                        var_2e8, i_21.b)
                                        
                                        rcx_35 = var_298_2
                            
                            rdx_26 = var_240_1
                            rcx_35 += 1
                            r15 = arg1
                            r12 = var_280
                            var_298_2 = rcx_35
                        while (rcx_35 s< rax_53)
                        
                        r8_2 = var_2b8_1
                        r11_1 = var_2a0_1
                        r10_1 = var_2c8_1
                        r13 = var_288
                        goto label_140d27ccf
                    case 4
                        r8_2 = &r8_2[3]
                        var_2b8_1 = r8_2
                        void* rdx_57 = (rax_16 u>> 0xd) + r11_1
                        r11_1 = *rdx_57
                        *r8_2 = r11_1
                        var_2a0_1 = r11_1
                        r8_2[1].d = *(*(r9_1 + 0x1e8) + (sx.q(r14_1.d) << 2))
                        int32_t rdx_58 = *(rdx_57 + 8)
                        *(r8_2 + 0xc) = rdx_58
                        int32_t rax_124 = *(*(r9_1 + 0x1e8) + (sx.q(r14_1.d + 1) << 2))
                        int32_t rcx_80 = (r14_1.d + 1) << 8
                        r14_1 = zx.q(r14_1.d + 2)
                        int32_t rax_125 = rax_124 + rcx_80
                        r8_2[2].d = r14_1.d
                        
                        if (rdx_58 != 0)
                            goto label_140d28b39
                        
                        r14_1 = zx.q(rax_125 u>> 8)
                        r10_1 = zx.d(*(*(r9_1 + 0x1e8) + (r14_1 << 2) - 4)) - zx.d(rax_125.b)
                        var_2c8_1 = r10_1
                        i_17 = 0
                        continue
                        continue
                    case 5
                        r8_2 = &r8_2[3]
                        var_2b8_1 = r8_2
                        *r8_2 = r11_1
                        r8_2[1].d = *(*(r9_1 + 0x1e8) + (sx.q(r14_1.d) << 2))
                        int64_t rcx_105 = sx.q(r14_1.d + 1)
                        r14_1 = zx.q(r14_1.d + 2)
                        *(r8_2 + 0xc) = *(*(r9_1 + 0x1e8) + (rcx_105 << 2))
                        r8_2[2].d = r14_1.d
                    label_140d28b39:
                        i_17 = 0
                        r10_1 = 0
                        var_2c8_1 = 0
                        continue
                        continue
                    case 6
                        int64_t r9_7 = sx.q(r14_1.d)
                        int64_t rdx_72 = sx.q(r14_1.d + 1)
                        r14_1 = zx.q(r14_1.d + 2)
                        var_2c8_1 = zx.d(rax_16.b)
                        rcx_109 = (rax_16 u>> 0xd) + r11_1
                        r8_22 =
                            zx.q(*(r10_2 + (rdx_72 << 2))) << 0x20 | zx.q(*(r10_2 + (r9_7 << 2)))
                    label_140d28b79:
                        r8_22(rcx_109, &var_238)
                        r8_2 = var_2b8_1
                        r11_1 = var_2a0_1
                        r10_1 = var_2c8_1
                    label_140d27cd4:
                        r9_1 = var_2b0_1
                        i_17 = 0
                        continue
                        continue
                    case 7
                        int64_t rdx_75 = sx.q(r14_1.d)
                        int64_t rcx_110 = sx.q(r14_1.d + 1)
                        r14_1 = zx.q(r14_1.d + 2)
                        var_2c8_1 = zx.d(rax_16.b)
                        r8_22 =
                            zx.q(*(r10_2 + (rcx_110 << 2))) << 0x20 | zx.q(*(r10_2 + (rdx_75 << 2)))
                        rcx_109 = rbx_2
                        goto label_140d28b79
                    case 8
                        void*** rbx_15 = var_230_1.q
                        int64_t rdx_76 = sx.q(r14_1.d)
                        int64_t rcx_112 = sx.q(r14_1.d + 1)
                        r14_1 = zx.q(r14_1.d + 2)
                        uint64_t rdi_22 =
                            zx.q(*(r10_2 + (rcx_112 << 2))) << 0x20 | zx.q(*(r10_2 + (rdx_76 << 2)))
                        var_2c8_1 = zx.d(rax_16.b)
                        
                        if (rbx_15 == 0)
                            void*** rax_150 = j_sub_140a82f30(0xb0)
                            
                            if (rax_150 != 0)
                                rax_150 = sub_140d15ac0(rax_150, 0, &var_238)
                            
                            var_230_1.q = rax_150
                            rbx_15 = rax_150
                        
                        rbx_15[0x12] = rax_5
                        void var_1e8
                        (*(*rdi_22 + 0x88))(rdi_22, 
                            *SymBuffer::end(sub_140b4cb20(&var_1d8, rbx_15), &var_1e8), 
                            (rax_16 u>> 0xd) + r11_1, 0, var_2e8, i_21, var_2d8)
                        sub_140b4cbb0(&var_1d8)
                        r8_2 = var_2b8_1
                        i_17 = 0
                        r11_1 = var_2a0_1
                        r10_1 = var_2c8_1
                        r9_1 = var_2b0_1
                        rbx_15[0x12] = 0
                        rbx_2 = rax_5
                        continue
                    case 9
                        void*** rbx_16 = var_230_1.q
                        int64_t rdx_81 = sx.q(r14_1.d)
                        int64_t rcx_118 = sx.q(r14_1.d + 1)
                        r14_1 = zx.q(r14_1.d + 2)
                        uint64_t rdi_25 =
                            zx.q(*(r10_2 + (rcx_118 << 2))) << 0x20 | zx.q(*(r10_2 + (rdx_81 << 2)))
                        var_2c8_1 = zx.d(rax_16.b)
                        
                        if (rbx_16 == 0)
                            void*** rax_154 = j_sub_140a82f30(0xb0)
                            
                            if (rax_154 != 0)
                                rax_154 = sub_140d15ac0(rax_154, 0, &var_238)
                            
                            var_230_1.q = rax_154
                            rbx_16 = rax_154
                        
                        rbx_16[0x12] = rax_5
                        void var_1e0
                        (*(*rdi_25 + 0x88))(rdi_25, 
                            *SymBuffer::end(sub_140b4cb20(&var_1d8, rbx_16), &var_1e0), 
                            (rax_16 u>> 0xd) + r11_1, 0, var_2e8, i_21, var_2d8)
                        sub_140b4cbb0(&var_1d8)
                        r8_2 = var_2b8_1
                        i_17 = 0
                        r11_1 = var_2a0_1
                        r10_1 = var_2c8_1
                        r9_1 = var_2b0_1
                        rbx_16[0x12] = 0
                        rbx_2 = rax_5
                        continue
                    case 0xa
                        uint64_t rcx_125 = rax_16 u>> 0xd
                        int32_t r9_8 = *(rcx_125 + r11_1 + 0xc)
                        
                        if (r9_8 == 0)
                            r10_1 = zx.d(rax_16.b)
                            var_2c8_1 = r10_1
                            goto label_140d27cd4
                        
                        int32_t rcx_126 = *(rcx_125 + r11_1 + 8)
                        
                        if (rcx_126 s< 0)
                            r10_1 = zx.d(rax_16.b)
                            var_2c8_1 = r10_1
                            goto label_140d27cd4
                        
                        if (rcx_126 s>= data_143e1d9b4)
                        label_140d29081:
                            r8_2 = var_2b8_1
                            r10_1 = zx.d(rax_16.b)
                            var_2c8_1 = r10_1
                        label_140d27ccf:
                            rbx_2 = rax_5
                            goto label_140d27cd4
                        
                        uint32_t r8_32 = zx.d(rcx_126.w)
                        
                        if (rcx_126 s< 0)
                            rcx_126 += 0xffff
                            r8_32 -= 0x10000
                        
                        int64_t** rbx_17 =
                            *(data_143e1d9a0 + (sx.q(rcx_126 s>> 0x10) << 3)) + sx.q(r8_32) * 0x18
                        
                        if (rbx_17 == 0)
                            goto label_140d29081
                        
                        r8_2 = var_2b8_1
                        r10_1 = zx.d(rax_16.b)
                        var_2c8_1 = r10_1
                        
                        if (rbx_17[2].d != r9_8)
                            goto label_140d27ccf
                        
                        int64_t* rbx_18 = *rbx_17
                        i_17 = 0
                        rsi_15 = *r15
                        r9_1 = var_2b0_1
                        var_2c8_1 = r10_1
                        
                        if (rbx_18 == 0)
                            rbx_2 = rax_5
                            continue
                            continue
                        else
                            int32_t r8_34 = *(rbx_18 + 0xc)
                            void* rdi_26
                            
                            if (r8_34 s>= data_143e1d9b4)
                                rdi_26 = nullptr
                            else
                                uint32_t rdx_88 = zx.d(r8_34.w)
                                int32_t rax_158 = r8_34
                                
                                if (r8_34 s< 0)
                                    rax_158 = r8_34 + 0xffff
                                    rdx_88 -= 0x10000
                                
                                rdi_26 = *(data_143e1d9a0 + (sx.q(rax_158 s>> 0x10) << 3))
                                    + sx.q(rdx_88) * 0x18
                                i_17 = 0
                            
                            int32_t rax_162 = *(rdi_26 + 0xc)
                            
                            if (rax_162 != *rsi_15)
                                char rcx_132 = *(rdi_26 + 0xb) & 1
                                
                                if (rcx_132 == 0 && rax_162 == 0)
                                    r8_2 = var_2b8_1
                                    
                                    if (r8_34 s> data_143e1d994)
                                        char rax_164 = (*(*rbx_18 + 0x20))(rbx_18)
                                        void* const rax_169
                                        int32_t r10_10
                                        
                                        if (rax_164 != 0 && (rbx_18[1].d & 0x1400) == 0)
                                            r10_10 = *(rbx_18 + 0xc)
                                            
                                            if (r10_10 s>= data_143e1d9b4)
                                                rax_169 = nullptr
                                            else
                                                uint32_t rdx_90 = zx.d(r10_10.w)
                                                int32_t rax_165 = r10_10
                                                
                                                if (r10_10 s< 0)
                                                    rax_165 = r10_10 + 0xffff
                                                    rdx_90 -= 0x10000
                                                
                                                rax_169 = *(data_143e1d9a0
                                                    + (sx.q(rax_165 s>> 0x10) << 3))
                                                    + sx.q(rdx_90) * 0x18
                                        
                                        if (rax_164 == 0 || (rbx_18[1].d & 0x1400) != 0
                                                || ((*(rax_169 + 8) u>> 0x1e).b & 1) != 0)
                                            var_2c0.d = *(rbx_18 + 0xc)
                                            goto label_140d28f1d
                                        
                                        i_21.b = 1
                                        var_2e8.q = r12
                                        sub_140d17860(rsi_15, r10_10, rdi_26, rbx_18, var_2e8, 
                                            i_21.b)
                                        r11_1 = var_2a0_1
                                        r8_2 = var_2b8_1
                                        r10_1 = var_2c8_1
                                        goto label_140d27ccf
                                    
                                    rbx_2 = rax_5
                                    continue
                                    continue
                                
                                if (rcx_132 == 0)
                                    r8_34 = rax_162
                                
                                var_2c0.d = r8_34
                                void* const rax_176
                                
                                if (r8_34 s>= data_143e1d9b4)
                                    rax_176 = nullptr
                                else
                                    uint32_t rax_173 = zx.d(r8_34.w)
                                    
                                    if (r8_34 s< 0)
                                        r8_34 += 0xffff
                                        rax_173 -= 0x10000
                                    
                                    rax_176 = *(data_143e1d9a0 + (sx.q(r8_34 s>> 0x10) << 3))
                                        + sx.q(rax_173) * 0x18
                                
                                void* r15_15 = sx.q(not.d(*(rax_176 + 0xc))) * 0x50 + data_143e1d678
                                sub_1408d92c0(*(rsi_15 + 8) + 0x18, &var_2c0)
                                sub_1408d92c0(r15_15 + 0x38, rsi_15)
                                i_17 = 0
                                int32_t* rbx_19 = *(r15_15 + 0x18)
                                int64_t rdi_27 = 0
                                uint64_t r14_19 = sx.q(*(r15_15 + 0x20)) << 2 u>> 2
                                
                                if (rbx_19 u> &rbx_19[sx.q(*(r15_15 + 0x20))])
                                    r14_19 = 0
                                
                                if (r14_19 != 0)
                                    do
                                        int32_t rax_182 = *rbx_19
                                        var_2c0.d = rax_182
                                        
                                        if (rax_182 != *rsi_15)
                                            sub_1408d92c0(*(rsi_15 + 8) + 0x18, &var_2c0)
                                        
                                        rbx_19 = &rbx_19[1]
                                        rdi_27 += 1
                                    while (rdi_27 != r14_19)
                                    
                                    i_17 = 0
                                
                                int64_t rdi_28 = 0
                                int32_t* rbx_20 = *(r15_15 + 0x28)
                                uint64_t r14_21 = sx.q(*(r15_15 + 0x30)) << 2 u>> 2
                                
                                if (rbx_20 u> &rbx_20[sx.q(*(r15_15 + 0x30))])
                                    r14_21 = 0
                                
                                if (r14_21 == 0)
                                    goto label_140d297c3
                                
                                do
                                    var_2c0.d = *rbx_20
                                    sub_1408d92c0(*(rsi_15 + 8) + 0x28, &var_2c0)
                                    rdi_28 += 1
                                    rbx_20 = &rbx_20[1]
                                while (rdi_28 != r14_21)
                                
                                r8_2 = var_2b8_1
                                r11_1 = var_2a0_1
                                r10_1 = var_2c8_1
                                r15 = arg1
                                goto label_140d27ccf
                    case 0xb
                        r10_1 = zx.d(rax_16.b)
                        i_17 = 0
                        void* rcx_150 = (rax_16 u>> 0xd) + r11_1
                        var_2c8_1 = r10_1
                        void* var_298_3 = rcx_150
                        int64_t i_16 = sx.q(*(rcx_150 + 8))
                        
                        if (i_16 s<= 0)
                            r13 = var_288
                            continue
                            continue
                        
                        int64_t r12_10 = 0
                        int64_t i_8
                        
                        do
                            int64_t rax_186 = *rcx_150
                            int32_t r8_37 = *(rax_186 + r12_10 + 0xc)
                            
                            if (r8_37 != 0)
                                int32_t rax_187 = *(rax_186 + r12_10 + 8)
                                
                                if (rax_187 s>= 0 && rax_187 s< data_143e1d9b4)
                                    uint32_t rdx_99 = zx.d(rax_187.w)
                                    
                                    if (rax_187 s< 0)
                                        rax_187 += 0xffff
                                        rdx_99 -= 0x10000
                                    
                                    int64_t* rbx_21 =
                                        *(data_143e1d9a0 + (sx.q(rax_187 s>> 0x10) << 3))
                                        + sx.q(rdx_99) * 0x18
                                    
                                    if (rbx_21 == 0 || rbx_21[2].d != r8_37)
                                        i_17 = 0
                                    else
                                        int64_t* rbx_22 = *rbx_21
                                        int32_t* r14_22 = *r15
                                        
                                        if (rbx_22 == 0)
                                            i_17 = 0
                                        else
                                            int32_t r8_38 = *(rbx_22 + 0xc)
                                            void* rdi_29
                                            
                                            if (r8_38 s>= data_143e1d9b4)
                                                i_17 = 0
                                                rdi_29 = nullptr
                                            else
                                                uint32_t rdx_101 = zx.d(r8_38.w)
                                                int32_t rax_191 = r8_38
                                                
                                                if (r8_38 s< 0)
                                                    rax_191 = r8_38 + 0xffff
                                                    rdx_101 -= 0x10000
                                                
                                                rdi_29 = *(data_143e1d9a0
                                                    + (sx.q(rax_191 s>> 0x10) << 3))
                                                    + sx.q(rdx_101) * 0x18
                                                i_17 = 0
                                            
                                            int32_t rax_195 = *(rdi_29 + 0xc)
                                            
                                            if (rax_195 != *r14_22)
                                                char rcx_155 = *(rdi_29 + 0xb) & 1
                                                
                                                if (rcx_155 != 0 || rax_195 != 0)
                                                    if (rcx_155 == 0)
                                                        r8_38 = rax_195
                                                    
                                                    var_2c0.d = r8_38
                                                    void* const rax_210
                                                    
                                                    if (r8_38 s>= data_143e1d9b4)
                                                        rax_210 = nullptr
                                                    else
                                                        uint32_t rax_207 = zx.d(r8_38.w)
                                                        
                                                        if (r8_38 s< 0)
                                                            r8_38 += 0xffff
                                                            rax_207 -= 0x10000
                                                        
                                                        rax_210 = *(data_143e1d9a0
                                                            + (sx.q(r8_38 s>> 0x10) << 3))
                                                            + sx.q(rax_207) * 0x18
                                                    
                                                    void* r15_18 =
                                                        sx.q(not.d(*(rax_210 + 0xc))) * 0x50
                                                        + data_143e1d678
                                                    sub_1408d92c0(*(r14_22 + 8) + 0x18, &var_2c0)
                                                    sub_1408d92c0(r15_18 + 0x38, r14_22)
                                                    i_17 = 0
                                                    int32_t* rbx_23 = *(r15_18 + 0x18)
                                                    int64_t rdi_30 = 0
                                                    uint64_t rsi_23 =
                                                        sx.q(*(r15_18 + 0x20)) << 2 u>> 2
                                                    
                                                    if (rbx_23 u> &rbx_23[sx.q(*(r15_18 + 0x20))])
                                                        rsi_23 = 0
                                                    
                                                    if (rsi_23 != 0)
                                                        do
                                                            int32_t rax_216 = *rbx_23
                                                            var_2c0.d = rax_216
                                                            
                                                            if (rax_216 != *r14_22)
                                                                sub_1408d92c0(*(r14_22 + 8) + 0x18, 
                                                                    &var_2c0)
                                                            
                                                            rbx_23 = &rbx_23[1]
                                                            rdi_30 += 1
                                                        while (rdi_30 != rsi_23)
                                                        
                                                        i_17 = 0
                                                    
                                                    int64_t rdi_31 = 0
                                                    int32_t* rbx_24 = *(r15_18 + 0x28)
                                                    uint64_t rsi_25 =
                                                        sx.q(*(r15_18 + 0x30)) << 2 u>> 2
                                                    
                                                    if (rbx_24 u> &rbx_24[sx.q(*(r15_18 + 0x30))])
                                                        rsi_25 = 0
                                                    
                                                    if (rsi_25 != 0)
                                                        do
                                                            var_2c0.d = *rbx_24
                                                            sub_1408d92c0(*(r14_22 + 8) + 0x28, 
                                                                &var_2c0)
                                                            rdi_31 += 1
                                                            rbx_24 = &rbx_24[1]
                                                        while (rdi_31 != rsi_25)
                                                        
                                                        i_17 = 0
                                                else if (r8_38 s> data_143e1d994)
                                                    char rax_197 = (*(*rbx_22 + 0x20))(rbx_22)
                                                    void* const rax_202
                                                    int32_t r10_11
                                                    
                                                    if (rax_197 != 0 && (rbx_22[1].d & 0x1400) == 0)
                                                        r10_11 = *(rbx_22 + 0xc)
                                                        
                                                        if (r10_11 s>= data_143e1d9b4)
                                                            rax_202 = nullptr
                                                        else
                                                            uint32_t rdx_103 = zx.d(r10_11.w)
                                                            int32_t rax_198 = r10_11
                                                            
                                                            if (r10_11 s< 0)
                                                                rax_198 = r10_11 + 0xffff
                                                                rdx_103 -= 0x10000
                                                            
                                                            rax_202 = *(data_143e1d9a0
                                                                + (sx.q(rax_198 s>> 0x10) << 3))
                                                                + sx.q(rdx_103) * 0x18
                                                    
                                                    if (rax_197 == 0 || (rbx_22[1].d & 0x1400) != 0
                                                            || ((*(rax_202 + 8) u>> 0x1e).b & 1)
                                                            != 0)
                                                        var_2c0.d = *(rbx_22 + 0xc)
                                                        sub_1408d92c0(*(r14_22 + 8) + 0x28, 
                                                            &var_2c0)
                                                    else
                                                        i_21.b = 1
                                                        var_2e8.q = var_280
                                                        sub_140d17860(r14_22, r10_11, rdi_29, 
                                                            rbx_22, var_2e8, i_21.b)
                                                    
                                                    i_17 = 0
                                    
                                    rcx_150 = var_298_3
                            
                            r15 = arg1
                            r12_10 += 0x20
                            i_8 = i_16
                            i_16 -= 1
                        while (i_8 != 1)
                        goto label_140d2868b
                    case 0xc
                        r10_1 = zx.d(rax_16.b)
                        var_2c8_1 = r10_1
                        i_17 = 0
                        continue
                        continue
                    case 0xd
                        break
                    case 0xe
                        rsi_15 = *r15
                        i_17 = 0
                        rbx_12 = (rax_16 u>> 0xd) + r11_1
                        r10_1 = zx.d(rax_16.b)
                        var_2c8_1 = r10_1
                        r9_6 = *rbx_12
                        
                        if (r9_6 == 0)
                            goto label_140d286a6
                        
                        r8_17 = *(r9_6 + 0xc)
                        
                        if (r8_17 s>= data_143e1d9b4)
                            rdi_17 = nullptr
                        else
                            uint32_t rdx_112 = zx.d(r8_17.w)
                            int32_t rax_220 = r8_17
                            
                            if (r8_17 s< 0)
                                rax_220 = r8_17 + 0xffff
                                rdx_112 -= 0x10000
                            
                            rdi_17 = *(data_143e1d9a0 + (sx.q(rax_220 s>> 0x10) << 3))
                                + sx.q(rdx_112) * 0x18
                            i_17 = 0
                        
                        int32_t rax_224 = *(rdi_17 + 0xc)
                        
                        if (rax_224 == *rsi_15)
                            goto label_140d286a1
                        
                        char rdx_114 = *(rdi_17 + 0xb) & 1
                        
                        if (rdx_114 == 0 && rax_224 == 0)
                            goto label_140d29448
                        
                        if (rdx_114 == 0)
                            r8_17 = rax_224
                        
                        var_2c0.d = r8_17
                        void* const rax_238
                        
                        if (r8_17 s>= data_143e1d9b4)
                            rax_238 = nullptr
                        else
                            uint32_t rax_235 = zx.d(r8_17.w)
                            
                            if (r8_17 s< 0)
                                r8_17 += 0xffff
                                rax_235 -= 0x10000
                            
                            rax_238 = *(data_143e1d9a0 + (sx.q(r8_17 s>> 0x10) << 3))
                                + sx.q(rax_235) * 0x18
                        
                        void* r15_21 = sx.q(not.d(*(rax_238 + 0xc))) * 0x50 + data_143e1d678
                        sub_1408d92c0(*(rsi_15 + 8) + 0x18, &var_2c0)
                        sub_1408d92c0(r15_21 + 0x38, rsi_15)
                        i_17 = 0
                        int32_t* rbx_27 = *(r15_21 + 0x18)
                        int64_t rdi_32 = 0
                        uint64_t r14_24 = sx.q(*(r15_21 + 0x20)) << 2 u>> 2
                        
                        if (rbx_27 u> &rbx_27[sx.q(*(r15_21 + 0x20))])
                            r14_24 = 0
                        
                        if (r14_24 != 0)
                            do
                                int32_t rax_244 = *rbx_27
                                var_2c0.d = rax_244
                                
                                if (rax_244 != *rsi_15)
                                    sub_1408d92c0(*(rsi_15 + 8) + 0x18, &var_2c0)
                                
                                rbx_27 = &rbx_27[1]
                                rdi_32 += 1
                            while (rdi_32 != r14_24)
                            
                            i_17 = 0
                        
                        int64_t rdi_33 = 0
                        int32_t* rbx_28 = *(r15_21 + 0x28)
                        uint64_t r14_26 = sx.q(*(r15_21 + 0x30)) << 2 u>> 2
                        
                        if (rbx_28 u> &rbx_28[sx.q(*(r15_21 + 0x30))])
                            r14_26 = 0
                        
                        if (r14_26 == 0)
                            goto label_140d297c3
                        
                        do
                            var_2c0.d = *rbx_28
                            sub_1408d92c0(*(rsi_15 + 8) + 0x28, &var_2c0)
                            rdi_33 += 1
                            rbx_28 = &rbx_28[1]
                        while (rdi_33 != r14_26)
                        
                        r8_2 = var_2b8_1
                        r11_1 = var_2a0_1
                        r10_1 = var_2c8_1
                        r15 = arg1
                        goto label_140d27ccf
                    case 0xf
                        rsi_15 = *r15
                        i_17 = 0
                        rbx_12 = (rax_16 u>> 0xd) + r11_1
                        r10_1 = zx.d(rax_16.b)
                        var_2c8_1 = r10_1
                        r9_6 = *rbx_12
                        
                        if (r9_6 == 0)
                            goto label_140d286a6
                        
                        r8_17 = *(r9_6 + 0xc)
                        
                        if (r8_17 s>= data_143e1d9b4)
                            rdi_17 = nullptr
                        else
                            uint32_t rdx_123 = zx.d(r8_17.w)
                            int32_t rax_248 = r8_17
                            
                            if (r8_17 s< 0)
                                rax_248 = r8_17 + 0xffff
                                rdx_123 -= 0x10000
                            
                            rdi_17 = *(data_143e1d9a0 + (sx.q(rax_248 s>> 0x10) << 3))
                                + sx.q(rdx_123) * 0x18
                            i_17 = 0
                        
                        int32_t rax_252 = *(rdi_17 + 0xc)
                        
                        if (rax_252 == *rsi_15)
                            goto label_140d286a1
                        
                        char rdx_125 = *(rdi_17 + 0xb) & 1
                        
                        if (rdx_125 == 0 && rax_252 == 0)
                            goto label_140d29448
                        
                        if (rdx_125 == 0)
                            r8_17 = rax_252
                        
                        var_2c0.d = r8_17
                        void* const rax_256
                        
                        if (r8_17 s>= data_143e1d9b4)
                            rax_256 = nullptr
                        else
                            uint32_t rax_253 = zx.d(r8_17.w)
                            
                            if (r8_17 s< 0)
                                r8_17 += 0xffff
                                rax_253 -= 0x10000
                            
                            rax_256 = *(data_143e1d9a0 + (sx.q(r8_17 s>> 0x10) << 3))
                                + sx.q(rax_253) * 0x18
                        
                        void* r15_24 = sx.q(not.d(*(rax_256 + 0xc))) * 0x50 + data_143e1d678
                        sub_1408d92c0(*(rsi_15 + 8) + 0x18, &var_2c0)
                        sub_1408d92c0(r15_24 + 0x38, rsi_15)
                        i_17 = 0
                        int32_t* rbx_31 = *(r15_24 + 0x18)
                        int64_t rdi_34 = 0
                        uint64_t r14_28 = sx.q(*(r15_24 + 0x20)) << 2 u>> 2
                        
                        if (rbx_31 u> &rbx_31[sx.q(*(r15_24 + 0x20))])
                            r14_28 = 0
                        
                        if (r14_28 != 0)
                            do
                                int32_t rax_262 = *rbx_31
                                var_2c0.d = rax_262
                                
                                if (rax_262 != *rsi_15)
                                    sub_1408d92c0(*(rsi_15 + 8) + 0x18, &var_2c0)
                                
                                rbx_31 = &rbx_31[1]
                                rdi_34 += 1
                            while (rdi_34 != r14_28)
                            
                            i_17 = 0
                        
                        int64_t rdi_35 = 0
                        int32_t* rbx_32 = *(r15_24 + 0x28)
                        uint64_t r14_30 = sx.q(*(r15_24 + 0x30)) << 2 u>> 2
                        
                        if (rbx_32 u> &rbx_32[sx.q(*(r15_24 + 0x30))])
                            r14_30 = 0
                        
                        if (r14_30 == 0)
                            goto label_140d297c3
                        
                        do
                            var_2c0.d = *rbx_32
                            sub_1408d92c0(*(rsi_15 + 8) + 0x28, &var_2c0)
                            rdi_35 += 1
                            rbx_32 = &rbx_32[1]
                        while (rdi_35 != r14_30)
                        
                        r8_2 = var_2b8_1
                        r11_1 = var_2a0_1
                        r10_1 = var_2c8_1
                        r15 = arg1
                        goto label_140d27ccf
                    case 0x10
                        r10_1 = zx.d(rax_16.b)
                        i_17 = 0
                        void* r13_11 = (rax_16 u>> 0xd) + r11_1
                        var_2c8_1 = r10_1
                        int64_t r12_9 = 0
                        int64_t rax_90 = sx.q(*(r13_11 + 8))
                        
                        if (rax_90 s<= 0)
                            r12 = var_280
                            r13 = var_288
                            continue
                            continue
                        
                        do
                            void* rax_92 = *r13_11
                            
                            if ((rax_92.b & 1) != 0)
                                rax_92 = (rax_92 s>> 1) + r13_11
                            
                            int64_t* r9_4 = *(rax_92 + (r12_9 << 3))
                            void* rdi_14 = rax_92 + (r12_9 << 3)
                            int32_t* r14_5 = *r15
                            
                            if (r9_4 != 0)
                                int32_t r8_14 = *(r9_4 + 0xc)
                                void* rbx_7
                                
                                if (r8_14 s>= data_143e1d9b4)
                                    rbx_7 = nullptr
                                else
                                    uint32_t rdx_43 = zx.d(r8_14.w)
                                    int32_t rax_93 = r8_14
                                    
                                    if (r8_14 s< 0)
                                        rax_93 = r8_14 + 0xffff
                                        rdx_43 -= 0x10000
                                    
                                    rbx_7 = *(data_143e1d9a0 + (sx.q(rax_93 s>> 0x10) << 3))
                                        + sx.q(rdx_43) * 0x18
                                    i_17 = 0
                                
                                int32_t rax_97 = *(rbx_7 + 0xc)
                                
                                if (rax_97 != *r14_5)
                                    char rdx_45 = *(rbx_7 + 0xb) & 1
                                    
                                    if (rdx_45 != 0 || rax_97 != 0)
                                        if (rdx_45 == 0)
                                            r8_14 = rax_97
                                        
                                        var_2c0.d = r8_14
                                        void* const rax_112
                                        
                                        if (r8_14 s>= data_143e1d9b4)
                                            rax_112 = nullptr
                                        else
                                            uint32_t rax_109 = zx.d(r8_14.w)
                                            
                                            if (r8_14 s< 0)
                                                r8_14 += 0xffff
                                                rax_109 -= 0x10000
                                            
                                            rax_112 =
                                                *(data_143e1d9a0 + (sx.q(r8_14 s>> 0x10) << 3))
                                                + sx.q(rax_109) * 0x18
                                        
                                        void* r15_9 =
                                            sx.q(not.d(*(rax_112 + 0xc))) * 0x50 + data_143e1d678
                                        sub_1408d92c0(*(r14_5 + 8) + 0x18, &var_2c0)
                                        sub_1408d92c0(r15_9 + 0x38, r14_5)
                                        i_17 = 0
                                        int32_t* rbx_8 = *(r15_9 + 0x18)
                                        int64_t rdi_15 = 0
                                        uint64_t rsi_12 = sx.q(*(r15_9 + 0x20)) << 2 u>> 2
                                        
                                        if (rbx_8 u> &rbx_8[sx.q(*(r15_9 + 0x20))])
                                            rsi_12 = 0
                                        
                                        if (rsi_12 != 0)
                                            do
                                                int32_t rax_118 = *rbx_8
                                                var_2c0.d = rax_118
                                                
                                                if (rax_118 != *r14_5)
                                                    sub_1408d92c0(*(r14_5 + 8) + 0x18, &var_2c0)
                                                
                                                rbx_8 = &rbx_8[1]
                                                rdi_15 += 1
                                            while (rdi_15 != rsi_12)
                                            
                                            i_17 = 0
                                        
                                        int64_t rdi_16 = 0
                                        int32_t* rbx_9 = *(r15_9 + 0x28)
                                        uint64_t rsi_14 = sx.q(*(r15_9 + 0x30)) << 2 u>> 2
                                        
                                        if (rbx_9 u> &rbx_9[sx.q(*(r15_9 + 0x30))])
                                            rsi_14 = 0
                                        
                                        if (rsi_14 == 0)
                                            r15 = arg1
                                        else
                                            do
                                                var_2c0.d = *rbx_9
                                                sub_1408d92c0(*(r14_5 + 8) + 0x28, &var_2c0)
                                                rdi_16 += 1
                                                rbx_9 = &rbx_9[1]
                                            while (rdi_16 != rsi_14)
                                            
                                            r15 = arg1
                                            i_17 = 0
                                    else
                                        if (r8_14 s> data_143e1d994)
                                            if ((*(*r9_4 + 0x20))(r9_4) == 0)
                                                var_2c0.d = *(*rdi_14 + 0xc)
                                                sub_1408d92c0(*(r14_5 + 8) + 0x28, &var_2c0)
                                            else
                                                int64_t* r9_5 = *rdi_14
                                                
                                                if ((r9_5[1].d & 0x1400) != 0)
                                                    var_2c0.d = *(*rdi_14 + 0xc)
                                                    sub_1408d92c0(*(r14_5 + 8) + 0x28, &var_2c0)
                                                else
                                                    int32_t r10_5 = *(r9_5 + 0xc)
                                                    void* const rax_104
                                                    
                                                    if (r10_5 s>= data_143e1d9b4)
                                                        rax_104 = nullptr
                                                    else
                                                        uint32_t rdx_46 = zx.d(r10_5.w)
                                                        int32_t rax_100 = r10_5
                                                        
                                                        if (r10_5 s< 0)
                                                            rax_100 = r10_5 + 0xffff
                                                            rdx_46 -= 0x10000
                                                        
                                                        rax_104 = *(data_143e1d9a0
                                                            + (sx.q(rax_100 s>> 0x10) << 3))
                                                            + sx.q(rdx_46) * 0x18
                                                    
                                                    if (((*(rax_104 + 8) u>> 0x1e).b & 1) != 0)
                                                        var_2c0.d = *(*rdi_14 + 0xc)
                                                        sub_1408d92c0(*(r14_5 + 8) + 0x28, &var_2c0)
                                                    else
                                                        i_21.b = 1
                                                        var_2e8.q = var_280
                                                        sub_140d17860(r14_5, r10_5, rbx_7, r9_5, 
                                                            var_2e8, i_21.b)
                                        
                                        i_17 = 0
                            
                            r12_9 += 1
                        while (r12_9 s< rax_90)
                        
                        goto label_140d2868b
                    case 0x11
                        r8_2 = &r8_2[3]
                        void* rdx_61 = (rax_16 u>> 0xd) + r11_1
                        var_2b8_1 = r8_2
                        r11_1 = *rdx_61
                        
                        if ((r11_1.b & 1) != 0)
                            r11_1 = (r11_1 s>> 1) + rdx_61
                        
                        *r8_2 = r11_1
                        var_2a0_1 = r11_1
                        r8_2[1].d = *(*(r9_1 + 0x1e8) + (sx.q(r14_1.d) << 2))
                        int32_t rdx_62 = *(rdx_61 + 8)
                        *(r8_2 + 0xc) = rdx_62
                        int32_t rax_128 = *(*(r9_1 + 0x1e8) + (sx.q(r14_1.d + 1) << 2))
                        int32_t rcx_87 = (r14_1.d + 1) << 8
                        r14_1 = zx.q(r14_1.d + 2)
                        int32_t rax_129 = rax_128 + rcx_87
                        r8_2[2].d = r14_1.d
                        
                        if (rdx_62 != 0)
                            goto label_140d28b39
                        
                        uint32_t rcx_89 = rax_129 u>> 8
                        r14_1 = zx.q(rcx_89)
                        r10_1 = zx.d(*(*(r9_1 + 0x1e8) + (zx.q(rcx_89) << 2) - 4)) - zx.d(rax_129.b)
                        var_2c8_1 = r10_1
                        i_17 = 0
                        continue
                        continue
                
                if (rcx_9 == 0xd)
                    break
                
                r8_2 = var_2b8_1
                rbx_2 = rax_5
            
            rbx = arg2
            rdi += 1
            rsi = var_210
            r8 = var_248
            rcx_3 = *(rbx + 8)
            
            if (rdi s>= rcx_3)
                break
    
    if (*(r12 + 8) != 0)
        if (rbx != r12)
            int128_t zmm1_1 = *rbx
            *rbx = *r12
            *r12 = zmm1_1
        
        *(r12 + 8) = 0
        rdi = 0
        var_248 = 0
    
    int64_t* rcx_204 = var_230_1.q
    var_238 = &data_142ead820
    
    if (rcx_204 != 0)
        (**rcx_204)(rcx_204, 1)
    
    int64_t* rcx_205 = var_230_1:8.q
    
    if (rcx_205 != 0)
        (**rcx_205)(rcx_205, 1)
    
    rcx_3 = *(rbx + 8)
    r8 = var_248
    
    if (rdi s>= rcx_3)
        break

int32_t rax_272 = *(r12 + 0xc)
void* rbx_33 = r15[1]
*(r12 + 8) = 0

if (rax_272 s< 0 && rax_272 != 0)
    sub_1405c5570(r12, 0)

int64_t result = sub_140ccd380(rbx_33, r12)

if (rsi != 0)
    result = sub_140a74f90(rsi)

__security_check_cookie(rax_1 ^ &var_308)
return result
