// 函数: sub_14147cb80
// 地址: 0x14147cb80
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void var_228
int64_t rax_1 = __security_cookie ^ &var_228
void* r13 = arg1
uint64_t r12 = arg2
uint64_t var_110 = arg2
int64_t* var_118 = &data_143ec4c60
void* rdx_1 = *(r13 + 8) + 0xee8
void** var_1d0_1
__builtin_memset(&var_1d0_1, 0, 0x18)
void** var_1a8 = nullptr
int32_t i_8 = 0
int32_t var_19c = 0
void** var_158
__builtin_memset(&var_158, 0, 0x40)
int64_t* var_e8
sub_1407453e0(&var_e8, rdx_1)
int32_t i_5
int32_t i = i_5
void** var_1c8
int64_t var_1c0_1
void* var_1a0
void** var_148
void** var_138
void** var_128
double var_e0[0x2]
void* var_d8
double var_c8[0x2]
wchar16 const* const var_a8

if (i s< *(var_d8 + 0x18))
    char var_1e8
    char rbx_1 = var_1e8
    char rdi_1 = var_1e8
    int32_t var_d0
    
    do
        int32_t j = 0
        void** var_168 = nullptr
        int64_t var_160_1 = 0
        void* rax_5 = *(*var_e8 + sx.q(i) * 0x30 + 0x20)
        void* rsi_2 = sx.q(*(rax_5 + 0x28)) * 0x70 + *(r13 + 0x2f0)
        
        if (*(rsi_2 + 0x18) s> 0)
            void* rdi_2 = rsi_2
            int64_t rbx_2 = 0
            
            do
                int64_t r14
                r14.b = 0
                int64_t k_1 = sx.q(*(r13 + 0xa8))
                void* r15_1 = *(*(rdi_2 + 0x10) + (rbx_2 << 3))
                
                if (k_1 s> 0)
                    int64_t r10_1 = *(r15_1 + 0x48)
                    int64_t r9_1 = *(r13 + 0xa0)
                    int64_t k
                    
                    do
                        if (r10_1 == 0 || r10_1 == r9_1)
                            void* r8_2 = sx.q(*(rax_5 + 0x28)) * 0x78 + *(r9_1 + 0x18d0)
                            int64_t zmm0_1 = (*(*(r8_2 + 0x30) + rbx_2 * 0x10)).q
                            int32_t rdx_5 = *(r15_1 + 0x570) & 0x100
                            uint64_t rax_9
                            
                            if (rdx_5 == 0)
                                if (rdx_5 == 0 && ((zmm0_1 u>> 0x10).b & 1) != 0)
                                    goto label_14147cd25
                                
                                rax_9.b = 0
                            else
                                rax_9 = zmm0_1 u>> 0x10
                                
                                if ((rax_9.b & 0x10) != 0 || (rax_9.b & 0x40) != 0
                                    || (rax_9.b & 0x20) != 0
                                    || (rdx_5 == 0 && ((zmm0_1 u>> 0x10).b & 1) != 0))
                                label_14147cd25:
                                    void* rax_11 = *(r8_2 + 0x20)
                                    void* rcx_8 = r8_2 + 0x10
                                    
                                    if (rax_11 != 0)
                                        rcx_8 = rax_11
                                    
                                    int32_t j_3 = j
                                    
                                    if (j s< 0)
                                        j_3 = j + 0x1f
                                    
                                    if ((*(rcx_8 + (sx.q(j_3 s>> 5) << 2)) & rol.d(1, j.b)) == 0)
                                        rax_9.b = 0
                                    else
                                        rax_9.b = 1
                                else
                                    rax_9.b = 0
                            
                            r14.b |= rax_9.b
                        
                        r9_1 += 0x5240
                        k = k_1
                        k_1 -= 1
                    while (k != 1)
                    rdi_2 = rsi_2
                
                int32_t r11_1 = *(r15_1 + 0x40)
                
                if (r11_1 == 0 && *(r15_1 + 0x610) s<= r11_1 && *(r15_1 + 0x84c) s<= r11_1
                        && *(r15_1 + 0x660) s<= r11_1)
                    void* r9_2 = *(r13 + 8)
                    
                    if (*(r9_2 + 0x1ac0) == *(r9_2 + 0x1aec))
                    label_14147ce0f:
                        r14 = zx.q(r14.b)
                        
                        if (*0x27c == 0)
                            r14 = 0
                    else
                        void* r8_3 = r9_2 + 0x1af0
                        void* rdx_6 = *(r8_3 + 8)
                        int64_t r10_2 = sx.q(*(*(r15_1 + 0x5c0) + 0x28))
                        
                        if (rdx_6 != 0)
                            r8_3 = rdx_6
                        
                        int32_t rax_15 = *(r8_3 + (((sx.q(*(r9_2 + 0x1b00)) - 1) & r10_2) << 2))
                        
                        if (rax_15 == 0xffffffff)
                            goto label_14147ce0f
                        
                        int32_t* rcx_14
                        
                        while (true)
                            rcx_14 = sx.q(rax_15) * 0x290 + *(r9_2 + 0x1ab8)
                            
                            if (*rcx_14 == r10_2.d)
                                break
                            
                            rax_15 = rcx_14[0xa0]
                            
                            if (rax_15 == 0xffffffff)
                                goto label_14147ce0f
                        
                        if (rax_15 == 0xffffffff)
                            goto label_14147ce0f
                        
                        r14 = zx.q(r14.b)
                        
                        if (rcx_14[0x9f].b == 0)
                            r14 = 0
                
                int32_t r8_5 = *(r13 + 0x3b0)
                
                if (r8_5 s< 3)
                    int32_t rcx_16 = *(r15_1 + 0x570)
                    
                    if (not(test_bit(rcx_16, 0xd)))
                        rcx_16.b &= 0x50
                        r14 = zx.q(r14.b)
                        
                        if (rcx_16.b != 0x50)
                            r14 = 0
                
                int64_t rax_16 = sx.q(*(r13 + 0x3b4))
                
                if (not(test_bit(data_143f13ca8, zx.q(rax_16.d))))
                label_14147ced8:
                    
                    if (r14.b != 0)
                        if (r11_1 != 1)
                            int32_t rax_20 = *(r15_1 + 0x570)
                            
                            if (r8_5 s>= 3 || test_bit(rax_20, 0xd))
                                int64_t rax_24
                                
                                if (rax_20.b s< 0)
                                    r14 = sx.q(*(rdi_2 + 0x48))
                                    int32_t rax_21 = (r14 + 1).d
                                    *(rdi_2 + 0x48) = rax_21
                                    
                                    if (rax_21 s> *(rdi_2 + 0x4c))
                                        sub_14083a310(rdi_2 + 0x40, r14.d)
                                    
                                    rax_24 = *(rdi_2 + 0x40)
                                else if (not(test_bit(rax_20, 0xa)))
                                    r14 = sx.q(*(rdi_2 + 0x28))
                                    int32_t rax_23 = (r14 + 1).d
                                    *(rdi_2 + 0x28) = rax_23
                                    
                                    if (rax_23 s> *(rdi_2 + 0x2c))
                                        sub_14083a310(rdi_2 + 0x20, r14.d)
                                    
                                    rax_24 = *(rdi_2 + 0x20)
                                else
                                    r14 = sx.q(*(rdi_2 + 0x38))
                                    int32_t rax_22 = (r14 + 1).d
                                    *(rdi_2 + 0x38) = rax_22
                                    
                                    if (rax_22 s> *(rdi_2 + 0x3c))
                                        sub_14083a310(rdi_2 + 0x30, r14.d)
                                    
                                    rax_24 = *(rdi_2 + 0x30)
                                
                                *(rax_24 + (r14 << 3)) = r15_1
                        
                        int32_t rcx_23 = *(r15_1 + 0x570)
                        
                        if ((rcx_23 & 0x600) == 0)
                            void** rcx_31
                            int64_t i_12
                            
                            if (rcx_23.b s< 0)
                                int64_t var_140_1
                                i_12 = sx.q(var_140_1.d)
                                int32_t rax_25 = (i_12 + 1).d
                                var_140_1.d = rax_25
                                
                                if (rax_25 s> var_140_1:4.d)
                                    sub_14083a310(&var_148, i_12.d)
                                
                                rcx_31 = var_148
                            else if ((rcx_23 & 0x804) == 0x804)
                                i_12 = sx.q(i_8)
                                int32_t i_11 = (i_12 + 1).d
                                i_8 = i_11
                                var_1a0.d = i_11
                                
                                if (i_11 s> var_19c)
                                    sub_14083a310(&var_1a8, i_12.d)
                                    i_8 = var_1a0.d
                                    var_1d0_1 = var_1a8
                                
                                rcx_31 = var_1d0_1
                            else if ((rcx_23.b & 0x50) == 0x50)
                                i_12 = sx.q(var_160_1.d)
                                int32_t rax_32 = (i_12 + 1).d
                                var_160_1.d = rax_32
                                
                                if (rax_32 s> var_160_1:4.d)
                                    sub_14083a310(&var_168, i_12.d)
                                
                                rcx_31 = var_168
                            else if ((rcx_23.b & 0x20) != 0)
                                int64_t var_150_1
                                i_12 = sx.q(var_150_1.d)
                                int32_t rax_33 = (i_12 + 1).d
                                var_150_1.d = rax_33
                                
                                if (rax_33 s> var_150_1:4.d)
                                    sub_14083a310(&var_158, i_12.d)
                                
                                rcx_31 = var_158
                            else if (test_bit(rcx_23, 8))
                                i_12 = sx.q(var_1c0_1.d)
                                int32_t rax_34 = (i_12 + 1).d
                                var_1c0_1.d = rax_34
                                
                                if (rax_34 s> var_1c0_1:4.d)
                                    sub_14083a310(&var_1c8, i_12.d)
                                
                                rcx_31 = var_1c8
                            else if (*(r15_1 + 0x40) != 1)
                                int64_t var_120_1
                                i_12 = sx.q(var_120_1.d)
                                int32_t rax_36 = (i_12 + 1).d
                                var_120_1.d = rax_36
                                
                                if (rax_36 s> var_120_1:4.d)
                                    sub_14083a310(&var_128, i_12.d)
                                
                                rcx_31 = var_128
                            else
                                int64_t var_130_1
                                i_12 = sx.q(var_130_1.d)
                                int32_t rax_35 = (i_12 + 1).d
                                var_130_1.d = rax_35
                                
                                if (rax_35 s> var_130_1:4.d)
                                    sub_14083a310(&var_138, i_12.d)
                                
                                rcx_31 = var_138
                            
                            rcx_31[i_12] = r15_1
                else
                    if (rax_16.d u> 0x30)
                    label_14147cea5:
                        
                        if (*(rax_16 * 0x14 + 0x143f025f8) s< 3)
                            goto label_14147ced8
                        
                        goto label_14147ceb0
                    
                    switch (rax_16)
                        case 0, 2, 4, 6, 0xc, 0xd, 0x10, 0x12, 0x14, 0x19, 0x1b, 0x1c, 0x1f, 0x30
                        label_14147ceb0:
                            void* rax_18 = *(r15_1 + 0x5c0)
                            void* rcx_19 = *(rax_18 + 0x20)
                            int32_t rax_19
                            
                            if ((*(rcx_19 + 0x138) & 8) == 0)
                                rax_19 = *(rax_18 + 0x60)
                            else
                                rax_19 = *(rcx_19 + 0xfc)
                            
                            if (rax_19 != 0xffffffff)
                                goto label_14147ced8
                        case 1, 3, 5, 7, 8, 9, 0xa, 0x13, 0x17, 0x20, 0x21, 0x22, 0x23, 0x24, 0x25, 
                                0x26, 0x27, 0x28, 0x29, 0x2a, 0x2b, 0x2c, 0x2d, 0x2e, 0x2f
                            goto label_14147cea5
                        case 0xb, 0xe, 0xf, 0x11, 0x15, 0x16, 0x18, 0x1a, 0x1d, 0x1e
                            goto label_14147ced8
                
                j += 1
                rbx_2 += 1
            while (j s< *(rdi_2 + 0x18))
            
            rbx_1 = var_1e8
            rdi_1 = var_1e8
        
        sub_14146fc10(*(rsi_2 + 0x20), *(rsi_2 + 0x28), rbx_1)
        sub_14146fc10(*(rsi_2 + 0x40), *(rsi_2 + 0x48), rdi_1)
        r12 = var_110
        sub_14147ad80(r13, r12, &var_168)
        var_d0 &= not.d(var_e0[0]:4.d)
        sub_14059bdd0(&var_e0)
        i = i_5
    while (i s< *(var_d8 + 0x18))
    
    uint64_t i_7 = zx.q(i_8)
    
    if (i_7.d s> 0)
        void* rcx_36 = *(r13 + 8)
        
        if (*(rcx_36 + 0x1b08) == 0)
            int32_t* rax_40 = sub_14139d2b0(var_118, &var_110)
            int32_t rcx_38 = data_143f02318
            int128_t zmm0_2 = data_143f02308
            int64_t rax_41 = *rax_40
            int64_t* r9_4 = *(r13 + 8) + 0x1b08
            var_d8:4.d = rax_41.d
            var_d0 = rax_41:4.d
            var_c8[0].d = 1
            int64_t var_c0
            var_c0.w = 1
            char var_1f0_1 = 0
            var_a8 = u"UnknownTexture2D"
            var_d8.d = rcx_38
            int16_t var_b0_1 = 0
            var_e8.o = zmm0_2
            int32_t var_cc = 0
            var_c8[0]:4.d = 0x10000
            var_c0 = 0xc
            int32_t var_b4_1 = 0xc
            int16_t var_9f_1 = 0
            char var_a0_1 = 0
            sub_1419a0ce0(&data_1439c9260, r12, &var_e8, r9_4, PreShadowCacheDepthZ", 1, 0, 
                var_1f0_1)
            rcx_36 = *(r13 + 8)
        
        int64_t* rcx_39 = *(rcx_36 + 0x1b08)
        int64_t* rbx_3 = *(r13 + 0x370)
        *(r13 + 0x370) = rcx_39
        
        if (rcx_39 != 0)
            (*(*rcx_39 + 0x30))()
        
        if (rbx_3 != 0)
            (*(*rbx_3 + 0x38))(rbx_3)
        
        if (i_7.d s> 0)
            void** r15_2 = var_1d0_1
            uint64_t i_1
            
            do
                void* rsi_4 = *r15_2
                *(rsi_4 + 0x38) = *(*(r13 + 8) + 0x1b08)
                sub_1414a2f50(rsi_4, r12, r13)
                int64_t rdi_4 = sx.q(*(r13 + 0x380))
                int32_t rax_46 = (rdi_4 + 1).d
                *(r13 + 0x380) = rax_46
                
                if (rax_46 s> *(r13 + 0x384))
                    sub_14083a310(r13 + 0x378, rdi_4.d)
                
                r15_2 = &r15_2[1]
                *(*(r13 + 0x378) + (rdi_4 << 3)) = rsi_4
                i_1 = i_7
                i_7 -= 1
            while (i_1 != 1)

sub_14147b970(r13, r12, &var_158)
sub_14147c530(r13, r12, &var_148)
sub_14147b540(r13, r12, &var_138)
sub_14147bde0(r13, r12, &var_128)
int128_t zmm6 = sub_14147d6e0(r13, r12, &var_1c8)
uint64_t i_10 = zx.q(var_1c0_1.d)

if (i_10.d s> 0)
    void** r12_1 = var_1c8
    uint64_t i_6 = zx.q(i_10.d)
    void* rcx_49 = arg1
    void** var_1d0_2 = r12_1
    uint64_t i_9 = i_10
    uint64_t i_2
    
    do
        int32_t j_1 = 0
        void* r15_3 = *r12_1
        int64_t rsi_5 = sx.q(*(*(r15_3 + 0x600) + 0x110))
        
        if (*(rcx_49 + 0xa8) s> 0)
            int64_t rbx_4 = 0
            
            do
                void* r9_5 = *(arg1 + 0xa0)
                void* const rcx_52
                
                if (*(r9_5 + rbx_4 + 0x1760) == *(r9_5 + rbx_4 + 0x178c))
                label_14147d3c0:
                    rcx_52 = nullptr
                else
                    void* r8_17 = r9_5 + 0x1790 + rbx_4
                    void* rcx_50 = *(r8_17 + 8)
                    
                    if (rcx_50 != 0)
                        r8_17 = rcx_50
                    
                    int32_t rax_50 =
                        *(r8_17 + (((sx.q(*(r9_5 + rbx_4 + 0x17a0)) - 1) & rsi_5) << 2))
                    
                    if (rax_50 == 0xffffffff)
                    label_14147d3c0_1:
                        rcx_52 = nullptr
                    else
                        int64_t r8_18 = *(r9_5 + rbx_4 + 0x1758)
                        
                        while (true)
                            int64_t rdx_35 = sx.q(rax_50) * 3
                            rcx_52 = r8_18 + (rdx_35 << 3)
                            
                            if (*(r8_18 + (rdx_35 << 3)) == rsi_5.d)
                                break
                            
                            rax_50 = *(rcx_52 + 0x10)
                            
                            if (rax_50 == 0xffffffff)
                                goto label_14147d3c0_2
                        
                        if (rax_50 == 0xffffffff)
                        label_14147d3c0_2:
                            rcx_52 = nullptr
                
                void* rdi_5 = rcx_52 + 8
                
                if (rcx_52 == 0)
                    rdi_5 = nullptr
                
                if (rdi_5 != 0)
                    __builtin_memcpy(&var_a8, 
                        "\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x80\x3f\x00\x00\x00\x"
                    "00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x80\x3f\x00\x00\x00\x00\x00\x00\x00"
                    "00\x00\x00\x00\x00\x00\x00\x80\x3f", 
                        0x30)
                    int128_t var_78
                    __builtin_memset(&var_78, 0, 0x20)
                    zmm6 = sub_1414a3270(r15_3, &var_e8)
                    int64_t* rcx_54 = data_143f0f180
                    (*(*rcx_54 + 0x100))(rcx_54, *rdi_5, &var_e8)
                
                j_1 += 1
                rbx_4 += 0x5240
            while (j_1 s< *(arg1 + 0xa8))
            
            r12_1 = var_1d0_2
            i_6 = i_9
            rcx_49 = arg1
        
        r12_1 = &r12_1[1]
        i_2 = i_6
        i_6 -= 1
        var_1d0_2 = r12_1
        i_9 = i_6
    while (i_2 != 1)
    r13 = arg1

int64_t* r10_4 = *(r13 + 8) + 0x1ab8
int32_t rbx_5 = r10_4[5].d
void* r9_6 = &r10_4[2]
int32_t rcx_55 = 0
var_1a8.d = 0
int32_t r8_20 = 0
var_1a8:4.d = 1
var_1a0 = r9_6
int32_t var_198 = 0xffffffff
int64_t var_194 = 0

if (rbx_5 != 0)
    void* rax_52 = *(r9_6 + 0x10)
    
    if (rax_52 != 0)
        r9_6 = rax_52
    
    int32_t temp0_1
    int32_t temp1_1
    temp0_1:temp1_1 = sx.q(rbx_5 - 1)
    int32_t rdx_40 = *r9_6
    
    if (rdx_40 != 0)
    label_14147d508:
        int32_t rax_59 = neg.d(rdx_40) & rdx_40
        uint64_t rflags_1
        int32_t temp0_2
        temp0_2, rflags_1 = _bit_scan_reverse(rax_59)
        var_1a8:4.d = rax_59
        int32_t rax_60
        
        if (rax_59 == 0)
            rax_60 = 0x20
        else
            rax_60 = 0x1f - temp0_2
        
        var_194.d = r8_20 - rax_60 + 0x1f
        
        if (r8_20 - rax_60 + 0x1f s> rbx_5)
            var_194.d = rbx_5
    else
        while (true)
            int64_t rdx_41 = sx.q(rcx_55)
            r8_20 += 0x20
            rcx_55 += 1
            var_194:4.d = r8_20
            var_1a8.d = rcx_55
            
            if (rdx_41.d s>= (temp1_1 + (temp0_1 & 0x1f)) s>> 5)
                break
            
            rdx_40 = *(r9_6 + (rdx_41 << 2) + 4)
            var_198 = 0xffffffff
            
            if (rdx_40 != 0)
                goto label_14147d508
        
        var_194.d = rbx_5

double zmm4[0x2] = var_198.o
int64_t* var_c0_1 = r10_4
double zmm0_3[0x2] = var_1a8.o
var_e8 = r10_4
double var_d0_1[0x2] = zmm4
var_e0 = zmm0_3
int16_t var_170 = 0
int128_t zmm3 = var_d8.o
void* result = zmm3.q
var_198.o = zmm3
var_1a8.o = var_e8.o
double rcx_57 = zmm4[0]
var_c8[0] = (_mm_unpackhi_pd(zmm4, zmm4[0])).q
double var_188[0x2] = var_c8

if ((rcx_57 u>> 0x20).d s< *(result + 0x18))
    int32_t i_4
    int32_t i_3 = i_4
    int128_t var_48_1 = zmm6
    
    do
        int64_t rcx_59 = sx.q(i_3) * 0x290
        void* rdx_42 = *var_1a8
        void* rbx_7 = rdx_42 + 0x240 + rcx_59
        
        if (*(rbx_7 + 0x30) != 0 || *(rbx_7 + 0x28) s> 0)
            zmm0_3 = *(r13 + 0x48)
            zmm0_3[0].d = zmm0_3[0].d f- *(rcx_59 + rdx_42 + 0x278)
            
            if (not(zmm0_3[0].d f<= 2f))
                int32_t j_2 = 0
                
                if (*(rbx_7 + 0x28) s> 0)
                    int64_t rsi_6 = 0
                    
                    do
                        void* rax_64 = *(rbx_7 + 0x20)
                        void* rdx_43 = rbx_7
                        
                        if (rax_64 != 0)
                            rdx_43 = rax_64
                        
                        int64_t* rcx_60 = *(rdx_43 + rsi_6)
                        *(rdx_43 + rsi_6) = 0
                        
                        if (rcx_60 != 0)
                            (*(*rcx_60 + 0x38))(rcx_60)
                        
                        j_2 += 1
                        rsi_6 += 8
                    while (j_2 s< *(rbx_7 + 0x28))
                
                sub_141489200(rbx_7, 0)
                int64_t* rcx_62 = *(rbx_7 + 0x30)
                *(rbx_7 + 0x30) = 0
                
                if (rcx_62 != 0)
                    (*(*rcx_62 + 0x38))(rcx_62)
        
        var_194:4.d &= not.d(var_19c)
        sub_14059bdd0(&var_1a0)
        result = var_198.q
        i_3 = i_4
    while (i_3 s< *(result + 0x18))
    
    if (var_170.b != 0 && var_170:1.b != 0)
        result = sub_141482cc0(r10_4, r10_4[1].d - *(r10_4 + 0x34), 1)

__security_check_cookie(rax_1 ^ &var_228)
return result
