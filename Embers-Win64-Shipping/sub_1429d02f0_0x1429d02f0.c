// 函数: sub_1429d02f0
// 地址: 0x1429d02f0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t var_1f8 = -2
void var_2c8
int64_t var_38 = __security_cookie ^ &var_2c8
int64_t* rdi = arg1
int32_t r9 = arg1[1].d
int32_t r9_2 = r9 u>> 2 & 7
int64_t rax_1
rax_1.b = r9_2 == 5
*(arg1 + 0xc) = rax_1.b
bool rdx = r9_2 - 4 u<= 1
*(arg1 + 0xd) = rdx
arg1.b = r9_2 - 2 u<= 1
*(rdi + 0xe) = arg1.b
char var_2a4_1

if ((r9 & 3) != 2)
    var_2a4_1 = 1

if ((r9 & 3) == 2 || r9_2 == 0)
    var_2a4_1 = 0

char var_2a3_1

if (r9_2 != 3)
    var_2a3_1 = 0

if (r9_2 == 3 || rdx != 0)
    var_2a3_1 = 1

int16_t var_2a6 = 0
void* rax_4 = *rdi
int128_t var_250
__builtin_memset(&var_250, 0, 0x18)
sub_1429d0130(&var_250, sx.q(*(rax_4 + 8)), &var_2a6)
var_2a6 = 0
void* rax_5 = *rdi
sub_1429d19e0(&rdi[0xf], sx.q(((*(rax_5 + 0x128) - *(rax_5 + 0x120)) s>> 2).d), &var_2a6)
uint64_t rbx = zx.q(*(*rdi + 0x14))
void var_148
void* var_158 = &var_148
int32_t var_150 = rbx.d
int32_t var_14c = 0x10
void* var_108 = nullptr

if (rbx.d u> 0x10)
    void* rax_7 = j_sub_140a82f30(zx.q(rbx.d) << 2)
    var_108 = rax_7
    var_158 = rax_7
    int32_t var_14c_1 = rbx.d

void var_1a8
void* var_1b8 = &var_1a8
int32_t var_1b0 = rbx.d
int32_t var_1ac = 0x10
void* var_168 = nullptr

if (rbx.d u> 0x10)
    void* rax_8 = j_sub_140a82f30(rbx << 2)
    var_168 = rax_8
    var_1b8 = rax_8
    int32_t var_1ac_1 = rbx.d

void var_1e0
void* var_290 = &var_1e0
void* var_1f0 = &var_1e0
int32_t var_1e8 = rbx.d
int32_t var_1e4 = 0x10
void* var_1c0 = nullptr

if (rbx.d u> 0x10)
    void* rax_9 = j_sub_140a82f30(rbx * 2)
    var_290 = rax_9
    var_1c0 = rax_9
    var_1f0 = rax_9
    int32_t var_1e4_1 = rbx.d

void var_e8
void* var_f8 = &var_e8
int32_t var_f0 = rbx.d
int32_t var_ec = 0x10
void* var_48 = nullptr

if (rbx.d u> 0x10)
    void* rax_10 = j_sub_140a82f30(rbx * 0xa)
    var_48 = rax_10
    var_f8 = rax_10
    int32_t var_ec_1 = rbx.d
    var_290 = var_1f0

void* rbx_1 = var_1b8
void* var_230 = rbx_1
int32_t rdx_3 = 0
int32_t var_298 = 0
int32_t r13 = 0
int32_t var_2a0 = 0
int16_t* rsi = var_250.q

if (*(*rdi + 8) s> 0)
    int32_t* r12_1 = nullptr
    int32_t* var_278_1 = nullptr
    void* var_218_1 = nullptr
    int16_t* var_280_1 = rsi
    int64_t rax_14 = neg.q(rsi)
    
    while (true)
        void* rdx_4 = *rdi
        int64_t rax_15 = *(rdx_4 + 0x108)
        int32_t i_1 = *(r12_1 + rax_15)
        int32_t* r9_3 = *(rdx_4 + 0x120) + (sx.q(*(r12_1 + rax_15 + 4)) << 2)
        int16_t* r10_1 = *(rdx_4 + 0x138) + (sx.q(*(r12_1 + *(rdx_4 + 0x108) + 4)) << 1)
        
        if (i_1 s> 0)
            void* r8_4 = var_158
            uint64_t i_9 = zx.q(i_1)
            uint64_t i
            
            do
                *r8_4 = *(rdi[3] + (
                    sx.q(zx.d(*r10_1) + *(*(*rdi + 0x18) + (sx.q(((zx.q(*r9_3) << 1) + 1).d) << 2)))
                    << 2))
                r10_1 = &r10_1[1]
                r9_3 = &r9_3[1]
                r8_4 += 4
                i = i_9
                i_9 -= 1
            while (i != 1)
        
        void* rdx_8 = *rdi
        int64_t rax_23 = *(rdx_8 + 0x150)
        uint64_t i_8 = zx.q(*(r12_1 + rax_23))
        int32_t i_11 = i_8.d
        int32_t* r9_4 = *(rdx_8 + 0x168) + (sx.q(*(r12_1 + rax_23 + 4)) << 2)
        int16_t* r11_1 = *(rdx_8 + 0x180) + (sx.q(*(r12_1 + *(rdx_8 + 0x150) + 4)) << 1)
        int16_t* var_258_1 = r11_1
        char* r10_3 = rax_14 + rsi
        int64_t rax_27 = *(rdx_8 + 0x1b0)
        char rcx_20 = not.b(r10_3[rax_27]) & 1
        char var_2a8_1 = rcx_20
        uint8_t r12_2 = r10_3[rax_27] u>> 2 & 1
        var_2a6.b = r12_2
        
        if (rcx_20 != 0)
            uint64_t r11_2 = zx.q(r12_2)
            
            if (r11_2.d s< i_1)
                int32_t* rbx_2 = &r9_4[r11_2]
                int64_t r12_3 = var_250.q
                
                do
                    int32_t rax_28 = (r11_2 - 1).d
                    
                    if (r11_2.d == 0)
                        rax_28 = i_1 - 1
                    
                    if (*(var_158 - r9_4 + rbx_2) != *(var_158 + (sx.q(rax_28) << 2)))
                        int64_t r8_5 = sx.q(*rbx_2)
                        int32_t* r9_5 = *(*rdi + 0x78) + (sx.q((r8_5 * 2).d) << 2)
                        *(r12_3 + (sx.q(*r9_5) << 1)) = 1
                        *(r12_3 + (sx.q(r9_5[1]) << 1)) = 1
                        char* r10_5 = r8_5 + rdi[6]
                        char rdx_10 = 0
                        char rcx_23 = 0
                        
                        if (*r9_5 == r13)
                            rcx_23 = 2
                        
                        rcx_23 |= *r10_5 & 0xfd
                        *r10_5 = rcx_23
                        
                        if (r9_5[1] == r13)
                            rdx_10 = 4
                        
                        rdx_10 = rdx_10 | (rcx_23 & 0xfb) | 1
                        *r10_5 = rdx_10
                        *r10_5 = ((*(rdi + 0xd) << 3 ^ rdx_10) & 8) ^ rdx_10
                    
                    r11_2 = zx.q(r11_2.d + 1)
                    rbx_2 = &rbx_2[1]
                while (r11_2.d s< i_1)
                
            label_1429d08df:
                rcx_20 = var_2a8_1
                rsi = var_280_1
                r12_2 = var_2a6.b
                i_8 = zx.q(i_11)
                rbx_1 = var_230
        else if (i_1 s> 0 && i_8.d s> 0)
            int32_t* r10_6 = r9_4
            int32_t* var_260_1 = r9_4
            uint64_t i_12 = i_8
            
            while (true)
                int32_t rax_36 = *r10_6
                void* r15_2 = *rdi
                int32_t rcx_24 = rax_36 * 2
                int32_t* rdx_11 = *(r15_2 + 0x90)
                int32_t r12_4 = rdx_11[sx.q(rcx_24)]
                int64_t rdx_12 = *(r15_2 + 0xa8) + (sx.q(rdx_11[sx.q(rcx_24 + 1)]) << 2)
                int64_t var_208_1 = rdx_12
                
                if (r12_4 s>= 2)
                    int32_t* r13_2 = *(r15_2 + 0x78) + (sx.q(rcx_24) << 2)
                    rsi.b = 0
                    int32_t r14_1 = 0
                    int32_t r11_3 = 0
                    int64_t rbx_3 = 0
                    
                    while (true)
                        if (r11_3 s< r12_4)
                            int32_t r8_7 = *(rdx_12 + (rbx_3 << 2)) * 2
                            int64_t r9_7 = sx.q(r8_7 + 1) << 2
                            void* rcx_29 = *(r15_2 + 0x18)
                            int64_t r9_8 = rdi[3] + (sx.q(*(r9_7 + rcx_29)) << 2)
                            uint64_t rdx_14 = zx.q(*(*(r15_2 + 0xc0)
                                + (sx.q(*(*(r15_2 + 0x90) + (sx.q(rcx_24 + 1) << 2))) << 1)
                                + (rbx_3 << 1)))
                            int32_t rcx_31
                            rcx_31.b = *r13_2 !=
                                *(*(r15_2 + 0x30) + (sx.q(*(rcx_29 + r9_7)) << 2) + (rdx_14 << 2))
                            int32_t rax_51
                            rax_51.b = zx.d(*r11_1) != rcx_31
                            uint64_t rax_52 = zx.q(rax_51 + rdx_14.d)
                            
                            if (rax_52.d == *(rcx_29 + (sx.q(r8_7) << 2)))
                                rax_52 = 0
                            
                            if (rbx_3 != 0)
                                rsi.b = *(r9_8 + (rax_52 << 2)) != r14_1
                            else
                                r14_1 = *(r9_8 + (rax_52 << 2))
                            
                            r11_3 += 1
                            rbx_3 += 1
                            rdx_12 = var_208_1
                            
                            if (rsi.b == 0)
                                continue
                        else if (rsi.b == 0)
                            break
                        
                        int64_t rcx_32 = var_250.q
                        *(rcx_32 + (sx.q(*r13_2) << 1)) = 1
                        *(rcx_32 + (sx.q(r13_2[1]) << 1)) = 1
                        char* r8_10 = sx.q(rax_36) + rdi[6]
                        char rdx_15 = 0
                        char rcx_33 = 0
                        
                        if (*r13_2 == var_2a0)
                            rcx_33 = 2
                        
                        rcx_33 |= *r8_10 & 0xfd
                        *r8_10 = rcx_33
                        
                        if (r13_2[1] == var_2a0)
                            rdx_15 = 4
                        
                        rdx_15 = rdx_15 | (rcx_33 & 0xfb) | 1
                        *r8_10 = rdx_15
                        *r8_10 = ((*(rdi + 0xd) << 3 ^ rdx_15) & 8) ^ rdx_15
                        break
                    
                    r11_1 = var_258_1
                    r10_6 = var_260_1
                
                r10_6 = &r10_6[1]
                var_260_1 = r10_6
                r11_1 = &r11_1[1]
                var_258_1 = r11_1
                uint64_t i_13 = i_12
                i_12 -= 1
                
                if (i_13 == 1)
                    break
            
            r13 = var_2a0
            goto label_1429d08df
        
        if (r12_2 != 0 && *rsi == 0)
            if (*(rdi + 0xd) != 0 && i_1 s> 0)
                *rsi = 1
                
                if (rcx_20 != 0)
                    int64_t rcx_34 = sx.q(*r9_4)
                    int64_t rax_57 = rdi[6]
                    *(rcx_34 + rax_57) |= 8
                    int64_t rdx_16 = sx.q(r9_4[sx.q((i_8 - 1).d)])
                    int64_t rax_59 = rdi[6]
                    *(rdx_16 + rax_59) |= 8
                else if (i_8.d s> 0)
                    uint64_t i_2
                    
                    do
                        int64_t rdx_17 = sx.q(*r9_4)
                        
                        if ((*(rdx_17 + *(*rdi + 0xf0)) & 2) != 0)
                            int64_t rax_62 = rdi[6]
                            *(rdx_17 + rax_62) |= 8
                        
                        r9_4 = &r9_4[1]
                        i_2 = i_8
                        i_8 -= 1
                    while (i_2 != 1)
            else if (i_1 == 1 && var_2a4_1 != 0)
                *rsi = 1
        
        int32_t rcx_36 = 1
        *rbx_1 = *var_158
        void* r11_4 = var_290
        *r11_4 = 0
        
        if (i_1 s> 1)
            int16_t* r9_10 = r11_4 + 2
            void* r8_11 = var_158 + 4
            uint64_t i_10 = zx.q(i_1 - 1)
            uint64_t i_3
            
            do
                if (*r8_11 != *(r8_11 - 4))
                    *r9_10 = rcx_36.w
                    
                    if (rcx_36 != 1)
                        int32_t rax_68
                        
                        if (rcx_36 == 2)
                            rax_68 = *r8_11
                        
                        if (rcx_36 != 2 || *rbx_1 == rax_68)
                            void* rdx_18 = rbx_1 + (sx.q(rcx_36) << 2)
                            void* rax_70 = rbx_1
                            
                            if (rbx_1 != rdx_18)
                                while (*rax_70 != *r8_11)
                                    rax_70 += 4
                                    
                                    if (rax_70 == rdx_18)
                                        goto label_1429d0a36
                            
                            if (rbx_1 == rdx_18 || rax_70 == rdx_18)
                            label_1429d0a36:
                                *rdx_18 = *r8_11
                                rcx_36 += 1
                            else
                                *r9_10 = ((rax_70 - rbx_1) s>> 2).w
                        else
                            *(rbx_1 + 8) = rax_68
                            rcx_36 = 3
                    else
                        *(rbx_1 + 4) = *r8_11
                        rcx_36 = 2
                else
                    *r9_10 = r9_10[-1]
                
                r8_11 += 4
                r9_10 = &r9_10[1]
                i_3 = i_10
                i_10 -= 1
            while (i_3 != 1)
            r13 = var_2a0
            r11_4 = var_290
        
        if (var_2a8_1 == 0 && *rsi == 0)
            int16_t rax_64
            rax_64.b = rcx_36 s> 1
            *rsi = rax_64
        
        *(rax_14 + rsi + rdi[9]) = rcx_36.w
        int32_t* r9_11 = var_218_1
        *(r9_11 + rdi[0xc]) = var_298
        rdx_3 = var_298 + rcx_36
        var_298 = rdx_3
        
        if (rcx_36 s> 1)
            int16_t* rdx_22 = rdi[0xf] + (sx.q(*(var_278_1 + *(*rdi + 0x108) + 4)) << 1)
            
            if (i_1 s> 0)
                void* r8_13 = r11_4 - rdx_22
                uint64_t i_7 = zx.q(i_1)
                uint64_t i_4
                
                do
                    *rdx_22 = *(r8_13 + rdx_22)
                    rdx_22 = &rdx_22[1]
                    i_4 = i_7
                    i_7 -= 1
                while (i_4 != 1)
            
            rdx_3 = var_298
        
        r13 += 1
        var_2a0 = r13
        rsi = &rsi[1]
        var_280_1 = rsi
        var_218_1 = &r9_11[1]
        r12_1 = &var_278_1[2]
        var_278_1 = r12_1
        
        if (r13 s>= *(*rdi + 8))
            break
    
    rsi = var_250.q

sub_1429d1e80(rdi, rdx_3)
int32_t i_6 = 0

if (*(*rdi + 8) s> 0)
    void* r11_5 = nullptr
    void* var_290_1 = nullptr
    void* r12_6 = nullptr
    void* var_280_2 = nullptr
    int32_t* r8_14 = nullptr
    int32_t* var_278_2 = nullptr
    int32_t i_5
    
    do
        void* rdx_23 = *rdi
        int64_t rax_82 = *(rdx_23 + 0x108)
        int32_t r15_3 = *(r8_14 + rax_82)
        int16_t var_288_2 = r15_3.w
        int32_t* r9_13 = *(rdx_23 + 0x120) + (sx.q(*(r8_14 + rax_82 + 4)) << 2)
        int16_t* rbx_4 = *(rdx_23 + 0x138) + (sx.q(*(r8_14 + *(rdx_23 + 0x108) + 4)) << 1)
        uint64_t r14_2 = zx.q(*(rdi[9] + r12_6))
        int32_t* r11_6 = rdi[0x12] + (sx.q(*(r11_5 + rdi[0xc])) << 2)
        
        if (r15_3 s<= 0)
            *r11_6 = 0
        else
            *r11_6 = *(rdi[3] + (
                sx.q(zx.d(*rbx_4) + *(*(rdx_23 + 0x18) + (sx.q(((zx.q(*r9_13) << 1) + 1).d) << 2)))
                << 2))
        
        if (*(rsi + r12_6) != 0)
            if (r14_2.d s> 1)
                int32_t r10_9 = 1
                
                if (r15_3 s> 1)
                    void* r11_7 = &r11_6[1]
                    void* r8_15 = &rbx_4[1]
                    void* r9_14 = &r9_13[1]
                    void* rsi_4 = rdi[0xf] + (sx.q(*(*(*rdi + 0x108) + r8_14 + 4)) << 1) - rbx_4
                    uint64_t j_1 = zx.q(r15_3 - 1)
                    uint64_t j
                    
                    do
                        if (zx.d(*(rsi_4 + r8_15)) == r10_9)
                            *r11_7 = *(rdi[3] + (sx.q(zx.d(*r8_15)
                                + *(*(*rdi + 0x18) + (sx.q(((zx.q(*r9_14) << 1) + 1).d) << 2))) << 2))
                            r10_9 += 1
                            r11_7 += 4
                        
                        r9_14 += 4
                        r8_15 += 2
                        j = j_1
                        j_1 -= 1
                    while (j != 1)
            
            int64_t r13_4 = sx.q(*(var_290_1 + rdi[0xc])) + rdi[0x15]
            char rbx_5 = (*(r12_6 + *(*rdi + 0x1b0))).b
            
            if (*(rdi + 0xd) != 0 || (rbx_5 & 0x11) != 0 || (*(rdi + 0xe) != 0 && r14_2.d s> 2)
                    || (var_2a3_1 != 0 && r14_2.d == 1 && (rbx_5 & 4) == 0))
                r15_3.b = 1
            else
                r15_3.b = 0
            
            int16_t* rsi_5 = var_f8
            memset(rsi_5, 0, sx.q(r14_2.d) * 0xa)
            sub_1429d1060(rdi, i_6, rsi_5)
            r12_6.b = 0
            int32_t r10_10
            
            if (r15_3.b != 0 || *(rdi + 0xe) == r15_3.b || r14_2.d != 2)
                r10_10 = r9_2
            else
                if (rsi_5[4] != 0 || rsi_5[9] != 0 || rsi_5[2] != 0 || rsi_5[7] != 0)
                    r15_3.b = 1
                
                r10_10 = r9_2
                
                if (r10_10 == 3)
                    char rax_105
                    
                    if (*rsi_5 == 1 || rsi_5[5] == 1)
                        rax_105 = 1
                    else
                        rax_105 = 0
                    
                    r15_3.b |= rax_105
                
                int32_t rcx_52
                rcx_52.b = rsi_5[8] u> 0
                int32_t rax_106
                rax_106.b = rsi_5[3] u> 0
                r12_6.b = rax_106 != rcx_52
            
            char rcx_53 = 0
            char* r9_15 = nullptr
            
            if (r14_2.d s> 0)
                uint64_t r11_8 = r14_2
                
                while (true)
                    r9_15[r13_4] = 0
                    r9_15[r13_4] |= 1
                    char rdx_30 = r9_15[r13_4]
                    void* r8_19 = &rsi_5[r9_15 * 5]
                    
                    if (*(r8_19 + 4) == 0)
                        if (r15_3.b != 0 || *(r8_19 + 8) != 0 || (*r8_19 == 1 && r10_10 != 0))
                            r10_10.b = 1
                        else
                            r10_10.b = 0
                        
                        int16_t rax_108 = *r8_19
                        
                        if (rax_108 != 1)
                            if (zx.d(rax_108) != arg2)
                                rcx_53 = 2
                            
                            r9_15[r13_4] = rcx_53 | (rdx_30 & 0xfd)
                        else
                            r9_15[r13_4] = ((r10_10.b ^ 1) * 2) | (rdx_30 & 0xfd)
                        
                        char rdx_31 = 0
                        
                        if (*(r8_19 + 8) u> 0)
                            rdx_31 = 0x40
                        
                        rdx_31 |= r9_15[r13_4] & 0xbf
                        r9_15[r13_4] = rdx_31
                        int16_t rax_112 = *(r8_19 + 8)
                        bool rax_114
                        
                        if (rax_112 != 0)
                            rax_114 = zx.d(*r8_19) - zx.d(rax_112) s> 1
                        else if (r10_10.b == 0)
                            rax_114 = rdx_31 u>> 1 & 1
                        else
                            rax_114 = *r8_19 u> 1
                        
                        rdx_31 = (rdx_31 & 0x7f) | rax_114 << 7
                        r9_15[r13_4] = rdx_31
                        
                        if (r10_10.b == 0)
                            if (*(r8_19 + 6) != 0 || (rbx_5 & 0x20) != 0)
                                rdx_31 |= 0x10
                            else if (r12_6.b == 0)
                                rdx_31 |= 8
                            else
                                rdx_31 |= 0x30
                            
                            r9_15[r13_4] = rdx_31
                            
                            if (*(rdi + 0xd) == 0)
                                int64_t rcx_58 = rdi[0x18] + (sx.q(*(var_290_1 + rdi[0xc])) << 2)
                                *(rcx_58 + (r9_15 << 2)) = *(r8_19 + 2)
                                int16_t rax_120
                                
                                if (r9_15 == 0)
                                    rax_120 = *(r8_19 + 2)
                                
                                if (r9_15 != 0 || rax_120 == 0)
                                    rax_120 = *r8_19 - 1 + *(r8_19 + 2)
                                else
                                    rax_120 = rax_120 - var_288_2 - 1 + *r8_19
                                
                                *(rcx_58 + (r9_15 << 2) + 2) = rax_120
                    else
                        r9_15[r13_4] = rdx_30 | 4
                    
                    r9_15 = &r9_15[1]
                    uint64_t temp6_1 = r11_8
                    r11_8 -= 1
                    r10_10 = r9_2
                    
                    if (temp6_1 == 1)
                        break
                    
                    rcx_53 = 0
            
            rsi = var_250.q
            r8_14 = var_278_2
            r12_6 = var_280_2
        
        i_5 = i_6 + 1
        i_6 = i_5
        r8_14 = &r8_14[2]
        var_278_2 = r8_14
        r12_6 += 2
        var_280_2 = r12_6
        r11_5 = var_290_1 + 4
        var_290_1 = r11_5
    while (i_5 s< *(*rdi + 8))

j_sub_140a74f90(var_48)
void* var_f8_1 = &var_e8
int32_t var_ec_2 = 0x10
j_sub_140a74f90(var_1c0)
void* var_1f0_1 = &var_1e0
int32_t var_1e4_2 = 0x10
j_sub_140a74f90(var_168)
void* var_1b8_1 = &var_1a8
int32_t var_1ac_2 = 0x10
j_sub_140a74f90(var_108)
void* result = &var_148
void* var_158_1 = &var_148
int32_t var_14c_2 = 0x10

if (rsi != 0)
    int64_t var_240
    int64_t rax_124 = (var_240 - rsi) s>> 1
    
    if (rax_124 u> 0x7fffffffffffffff)
        _invalid_parameter_noinfo_noreturn()
        noreturn
    
    if (rax_124 * 2 u>= 0x1000)
        if ((rsi.b & 0x1f) != 0)
            _invalid_parameter_noinfo_noreturn()
            noreturn
        
        int16_t* rax_126 = *(rsi - 8)
        
        if (rax_126 u>= rsi)
            _invalid_parameter_noinfo_noreturn()
            noreturn
        
        void* rsi_6 = rsi - rax_126
        
        if (rsi_6 u< 8)
            _invalid_parameter_noinfo_noreturn()
            noreturn
        
        if (rsi_6 u> 0x27)
            _invalid_parameter_noinfo_noreturn()
            noreturn
        
        rsi = rax_126
    
    result = j_sub_140a74f90(rsi)

__security_check_cookie(var_38 ^ &var_2c8)
return result
