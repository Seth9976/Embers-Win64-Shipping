// 函数: sub_141a3f350
// 地址: 0x141a3f350
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void var_2d8
int64_t rax_1 = __security_cookie ^ &var_2d8
void* r15 = arg1
int128_t* rsi = arg3
int64_t rdi = 0
int32_t var_2a8 = 0
int32_t* result = arg2
int64_t* rcx = *(arg1 + 0x38)
char var_1f8
char rbx = (var_1f8 & 0xfe) | 2
uint128_t var_b8 = *arg3
int32_t var_a8 = 0xffffffff
char var_a4 = 0
void* var_70 = nullptr
int32_t var_68 = 0
int32_t var_64 = 4
char var_1f8_1 = rbx
int64_t* var_208

if (rcx != 0)
    int64_t* var_58
    int128_t* rax_3 = (*(*rcx + 0x268))(rcx, &var_58)
    rbx = var_1f8_1
    
    if ((rbx & 1) != 0)
        int64_t* rcx_1 = &var_208
        
        if ((rbx & 2) == 0)
            rcx_1 = var_208
        
        var_1f8_1 = rbx & 0xfe
        (**rcx_1)(rcx_1, 0)
        rbx = var_1f8_1
        
        if ((rbx & 2) == 0)
            sub_140a74f90(var_208)
            rbx = var_1f8_1
    
    if ((rax_3[1].b & 1) != 0)
        rax_3[1].b &= 0xfe
        rbx |= 1
        rbx ^= (rbx ^ rax_3[1].b) & 2
        var_1f8_1 = rbx
        var_208.o = *rax_3
    
    char var_48
    
    if ((var_48 & 1) != 0)
        int64_t* rcx_3 = &var_58
        
        if ((var_48 & 2) == 0)
            rcx_3 = var_58
        
        (**rcx_3)(rcx_3, 0)
        
        if ((var_48 & 2) == 0)
            sub_140a74f90(var_58)
        
        rbx = var_1f8_1
    
    rsi = arg3

int64_t* r12

if ((rbx & 1) == 0)
    r12 = nullptr
else
    r12 = &var_208
    
    if ((rbx & 2) == 0)
        r12 = var_208

void* var_250
sub_141a2ec10(&var_250, r15 + 0x40, rsi[1].q)
int32_t var_298
uint128_t var_288
int32_t var_278
int32_t var_274
void* var_248
uint128_t var_1e8
uint128_t var_1b8
int32_t var_1a8
uint128_t var_118
int32_t var_d0
void var_a0

if (var_248 != 0)
    int64_t rcx_6 = sx.q(*(var_248 + 0x1c))
    void* rsi_2 = var_250
    
    if (rcx_6.d == 0xffffffff)
        var_2a8.q = 0
        int32_t var_2a0_2 = 0
    else
        int64_t rax_9 = *(rsi_2 + 0x40)
        int64_t rcx_7 = rcx_6 * 3
        var_2a8.q = *(rsi_2 + 0x50) + sx.q(*(rax_9 + (rcx_7 << 2))) * 0xc
        int32_t var_2a0_1 = *(rax_9 + (rcx_7 << 2) + 4)
    
    uint128_t var_198 = var_2a8.o
    int32_t var_240
    
    if (var_240 s>= 0 && var_240 s< var_198:8.d)
        int64_t* rcx_10 = *(r15 + 0x38)
        int128_t* var_d8_1 = nullptr
        var_d0 = 0
        int32_t var_cc_1 = 4
        uint32_t var_1d8
        uint128_t* rcx_11
        char rdx_4
        int32_t rbx_1
        
        if (rcx_10 == 0)
            rcx_11 = &var_1e8
            rbx_1 = 2
            rdx_4 = (var_1d8.b & 0xfe) | 2
            var_1d8.b = rdx_4
        else
            rdx_4 = var_1d8.b
            rbx_1 = 1
            rcx_11 = (*(*rcx_10 + 0x260))(rcx_10, &var_198)
        
        char r8_1 = var_1a8.b & 0xfe
        var_1a8.b = r8_1 | 2
        
        if ((rcx_11[1].b & 1) != 0)
            var_1a8.b = r8_1 | 3
            rcx_11[1].b &= 0xfe
            rdx_4 = var_1d8.b
            var_1a8.b ^= (var_1a8.b ^ rcx_11[1].b) & 2
            var_1b8 = *rcx_11
        
        if ((rbx_1.b & 2) != 0)
            rbx_1 &= 0xfffffffd
            
            if ((rdx_4 & 1) != 0)
                uint128_t* rcx_12 = &var_1e8
                
                if ((rdx_4 & 2) == 0)
                    rcx_12 = var_1e8.q
                
                var_1d8.b = rdx_4 & 0xfe
                (**rcx_12)(rcx_12, 0)
                
                if ((var_1d8.b & 2) == 0)
                    sub_140a74f90(var_1e8.q)
        
        char var_188
        
        if ((rbx_1.b & 1) != 0 && (var_188 & 1) != 0)
            uint128_t* rcx_14 = &var_198
            
            if ((var_188 & 2) == 0)
                rcx_14 = var_198.q
            
            var_188 &= 0xfe
            (**rcx_14)(rcx_14, 0)
            
            if ((var_188 & 2) == 0)
                sub_140a74f90(var_198.q)
        
        int64_t* rcx_16 = &var_288
        var_2a8.q = -1
        int64_t r8_2 = var_2a8.q
        var_1e8 = var_250.o
        var_1d8 = (var_240.q).d
        int64_t var_228
        int64_t var_218
        
        if ((var_1a8.b & 1) == 0)
            sub_141a2ec10(rcx_16, rsi_2, r8_2)
            void* i_3 = var_1e8.q
            int64_t r13 = var_288:8.q
            uint32_t rsi_5 = var_1d8
            void* const i = var_1e8:8.q
            
            while (i_3 != var_288.q || i != r13 || rsi_5 != var_278)
                int64_t rax_69 = sx.q(*(i + 0x1c))
                void** rax_74
                
                if (rax_69.d == 0xffffffff)
                    var_250 = nullptr
                    rax_74 = &var_250
                    var_248.d = 0
                else
                    int64_t rcx_45 = rax_69 * 3
                    int64_t rax_70 = *(i_3 + 0x40)
                    var_198:8.d = *(rax_70 + (rcx_45 << 2) + 4)
                    rax_74 = &var_198
                    var_198.q = *(i_3 + 0x50) + sx.q(*(rax_70 + (rcx_45 << 2))) * 0xc
                
                int64_t rcx_48 = sx.q(rsi_5) * 3
                int64_t rax_76 = (*rax_74).q
                int32_t* r15_2 = rax_76 + (rcx_48 << 2)
                int64_t rax_77 = sx.q(*(rax_76 + (rcx_48 << 2)))
                int64_t rcx_52
                
                if (rax_77.d s< 0 || rax_77.d s>= *(arg1 + 0xa8))
                    rcx_52 = 0
                else
                    void** rcx_50 = rax_77 * 0x88 + *(arg1 + 0xa0)
                    
                    if ((rcx_50[0x10].b & 2) == 0)
                        rcx_50 = *rcx_50
                    
                    rcx_52 = sub_140d3c6e0(rcx_50 + 0x14)
                    rax_77 = zx.q(*r15_2)
                
                int32_t var_2a0_4 = rax_77.d
                int64_t r15_3 = sx.q(var_d0)
                char var_29c_2 = r15_2[2].b
                var_2a8.q = rcx_52
                int32_t rax_80 = (r15_3 + 1).d
                var_d0 = rax_80
                
                if (rax_80 s> var_cc_1)
                    sub_141a63f80(&var_118, r15_3.d)
                
                int128_t* rcx_54 = &var_118
                
                if (var_d8_1 != 0)
                    rcx_54 = var_d8_1
                
                rsi_5 += 1
                rcx_54[r15_3] = var_2a8.o
                
                do
                    int64_t rax_84 = sx.q(*(i + 0x1c))
                    uint128_t* rax_89
                    
                    if (rax_84.d == 0xffffffff)
                        var_228 = 0
                        rax_89 = &var_228
                        int32_t var_220_2 = 0
                    else
                        int64_t rcx_55 = rax_84 * 3
                        int64_t rax_85 = *(i_3 + 0x40)
                        int32_t var_210_2 = *(rax_85 + (rcx_55 << 2) + 4)
                        rax_89 = &var_218
                        var_218 = *(i_3 + 0x50) + sx.q(*(rax_85 + (rcx_55 << 2))) * 0xc
                    
                    var_1e8 = *rax_89
                    
                    if (rsi_5 s>= 0 && rsi_5 s< var_1e8:8.d)
                        break
                    
                    if (*(i + 0x10) != 0xffffffff || *(i + 0x14) == 0)
                        int64_t rdx_27 = *(i + 0x10)
                        
                        if (rdx_27.d == 0xffffffff)
                            i = i_3
                        else
                            i = ((sx.q(*(*(i_3 + 0x20) + sx.q(rdx_27.d) * 0xc))
                                + sx.q((rdx_27 u>> 0x20).d)) << 5) + *(i_3 + 0x30)
                    else
                        i = nullptr
                    
                    rsi_5 = 0
                while (i != 0)
            
            r15 = arg1
        else
            int64_t var_168 = 0
            int32_t var_160_1 = 0
            int32_t var_13c_1 = 0x80
            int64_t var_158
            __builtin_memset(&var_158, 0, 0x1c)
            int32_t var_138_1 = 0xffffffff
            int32_t var_134_1 = 0
            void* var_128_1 = nullptr
            int32_t var_120_1 = 0
            sub_141a2ec10(rcx_16, rsi_2, r8_2)
            void* i_2 = var_1e8.q
            uint32_t rsi_3 = var_1d8
            void* const i_1 = var_1e8:8.q
            
            while (i_2 != var_288.q || i_1 != var_288:8.q || rsi_3 != var_278)
                int64_t rax_21 = sx.q(*(i_1 + 0x1c))
                int64_t* rax_26
                
                if (rax_21.d == 0xffffffff)
                    var_218 = 0
                    rax_26 = &var_218
                    int32_t var_210_1 = 0
                else
                    int64_t rcx_17 = rax_21 * 3
                    int64_t rax_22 = *(i_2 + 0x40)
                    int32_t var_220_1 = *(rax_22 + (rcx_17 << 2) + 4)
                    rax_26 = &var_228
                    var_228 = *(i_2 + 0x50) + sx.q(*(rax_22 + (rcx_17 << 2))) * 0xc
                
                int64_t rcx_20 = sx.q(rsi_3) * 3
                int64_t rax_28 = (*rax_26).q
                int32_t* r14_1 = rax_28 + (rcx_20 << 2)
                void** rcx_22 = sx.q(*(rax_28 + (rcx_20 << 2))) * 0x88 + *(r15 + 0xa0)
                
                if ((rcx_22[0x10].b & 2) == 0)
                    rcx_22 = *rcx_22
                
                void* rax_30 = sub_140d3c6e0(rcx_22 + 0x14)
                
                if (rax_30 != 0)
                    int64_t r9_1 = sx.q(*(rax_30 + 0xa8))
                    var_2a8.q = rax_30
                    int32_t var_2a0_3 = *r14_1
                    char var_29c_1 = r14_1[2].b
                    var_298 = r9_1.d
                    void* r14_2
                    
                    if (var_160_1 == var_134_1)
                    labelid_1b:
                        r14_2 = sub_141a2a630(&var_168, r9_1.d, &var_298)
                    else
                        void var_130
                        void* rcx_24 = &var_130
                        
                        if (var_128_1 != 0)
                            rcx_24 = var_128_1
                        
                        int32_t rax_37 = *(rcx_24 + ((sx.q(var_120_1 - 1) & r9_1) << 2))
                        
                        if (rax_37 == 0xffffffff)
                        label_141a3f802:
                            r14_2 = sub_141a2a630(&var_168, r9_1.d, &var_298)
                        else
                            int64_t r8_3 = var_168
                            int64_t rdx_10
                            
                            while (true)
                                rdx_10 = sx.q(rax_37) * 0x60
                                
                                if (*(rdx_10 + r8_3) == r9_1.d)
                                    break
                                
                                rax_37 = *(rdx_10 + r8_3 + 0x58)
                                
                                if (rax_37 == 0xffffffff)
                                    goto label_141a3f802_2
                            
                            if (rax_37 == 0xffffffff)
                            label_141a3f802_1:
                                r14_2 = sub_141a2a630(&var_168, r9_1.d, &var_298)
                            else
                                void* r14_3 = rdx_10 + r8_3
                                
                                if (r14_3 == 0)
                                label_141a3f802_2:
                                    r14_2 = sub_141a2a630(&var_168, r9_1.d, &var_298)
                                else
                                    r14_2 = r14_3 + 8
                    
                    int64_t r15_1 = sx.q(*(r14_2 + 0x48))
                    int32_t rax_39 = (r15_1 + 1).d
                    *(r14_2 + 0x48) = rax_39
                    
                    if (rax_39 s> *(r14_2 + 0x4c))
                        sub_141a63f80(r14_2, r15_1.d)
                    
                    void* rax_40 = *(r14_2 + 0x40)
                    
                    if (rax_40 != 0)
                        r14_2 = rax_40
                    
                    r15 = arg1
                    *(r14_2 + r15_1 * 0x10) = var_2a8.o
                
                rsi_3 += 1
                
                do
                    int64_t rax_43 = sx.q(*(i_1 + 0x1c))
                    uint128_t* rax_48
                    
                    if (rax_43.d == 0xffffffff)
                        var_198.q = 0
                        rax_48 = &var_198
                        var_198:8.d = 0
                    else
                        int64_t rcx_29 = rax_43 * 3
                        int64_t rax_44 = *(i_2 + 0x40)
                        var_248.d = *(rax_44 + (rcx_29 << 2) + 4)
                        rax_48 = &var_250
                        var_250 = *(i_2 + 0x50) + sx.q(*(rax_44 + (rcx_29 << 2))) * 0xc
                    
                    var_1e8 = *rax_48
                    
                    if (rsi_3 s>= 0 && rsi_3 s< var_1e8:8.d)
                        break
                    
                    if (*(i_1 + 0x10) != 0xffffffff || *(i_1 + 0x14) == 0)
                        int64_t rdx_14 = *(i_1 + 0x10)
                        
                        if (rdx_14.d == 0xffffffff)
                            i_1 = i_2
                        else
                            i_1 = ((sx.q(*(*(i_2 + 0x20) + sx.q(rdx_14.d) * 0xc))
                                + sx.q((rdx_14 u>> 0x20).d)) << 5) + *(i_2 + 0x30)
                    else
                        i_1 = nullptr
                    
                    rsi_3 = 0
                while (i_1 != 0)
            
            var_288:8.q = &var_158
            int32_t rcx_33 = 0
            var_288.d = 0
            int32_t var_278_1 = 0xffffffff
            int32_t r8_5 = 0
            var_288:4.d = 1
            var_274.q = 0
            int32_t var_140
            
            if (var_140 != 0)
                int64_t* r9_2 = &var_158
                int64_t* var_148
                
                if (var_148 != 0)
                    r9_2 = var_148
                
                int32_t temp0_1
                int32_t temp1_1
                temp0_1:temp1_1 = sx.q(var_140 - 1)
                int32_t rdx_18 = *r9_2
                
                if (rdx_18 != 0)
                label_141a3f999:
                    int32_t rax_58 = neg.d(rdx_18) & rdx_18
                    uint64_t rflags_1
                    int32_t temp0_2
                    temp0_2, rflags_1 = _bit_scan_reverse(rax_58)
                    var_288:4.d = rax_58
                    int32_t rax_59
                    
                    if (rax_58 == 0)
                        rax_59 = 0x20
                    else
                        rax_59 = 0x1f - temp0_2
                    
                    int32_t rax_60 = r8_5 - rax_59 + 0x1f
                    
                    if (rax_60 s> var_140)
                        rax_60 = var_140
                    
                    int32_t var_274_2 = rax_60
                else
                    while (true)
                        int64_t rax_55 = sx.q(rcx_33)
                        r8_5 += 0x20
                        rcx_33 += 1
                        int32_t var_270_1 = r8_5
                        var_288.d = rcx_33
                        
                        if (rax_55.d s>= ((temp0_1 & 0x1f) + temp1_1) s>> 5)
                            int32_t var_274_1 = var_140
                            break
                        
                        rdx_18 = *(r9_2 + (rax_55 << 2) + 4)
                        var_278_1 = 0xffffffff
                        
                        if (rdx_18 != 0)
                            goto label_141a3f999
            
            arg4 = var_278_1.o
            var_274 = var_140
            double var_180_1[0x2] = arg4
            var_198 = var_288
            var_198.q = &var_168
            uint128_t zmm0_2 = var_198
            var_278 = 0xffffffff << (var_140.b & 0x1f)
            arg4 = _mm_unpackhi_pd(arg4, arg4[0])
            var_1e8 = zmm0_2
            uint128_t var_1d8_1 = var_188.o
            int64_t var_1c8_1 = arg4.q
            
            while (true)
                int64_t rax_61 = sx.q(var_1d8_1:0xc.d)
                int64_t rcx_37 = var_1e8.q
                
                if (rax_61.d == (var_278.q u>> 0x20).d && var_1d8_1.q == &var_158
                        && rcx_37 == &var_168)
                    break
                
                uint128_t* rcx_38 = &var_1b8
                
                if ((var_1a8.b & 2) == 0)
                    rcx_38 = var_1b8.q
                
                void* rbx_8 = rax_61 * 0x60 + *rcx_37 + 8
                (*(*rcx_38 + 8))(rcx_38, rbx_8)
                int64_t rsi_4 = sx.q(*(rbx_8 + 0x48))
                
                if (rsi_4.d != 0)
                    int32_t r9_3 = var_d0
                    int32_t rdx_21 = rsi_4.d + r9_3
                    
                    if (rdx_21 s> var_cc_1)
                        sub_141a642e0(&var_118, rdx_21)
                        r9_3 = var_d0
                    
                    void* rax_63 = *(rbx_8 + 0x40)
                    int128_t* rcx_40 = &var_118
                    
                    if (rax_63 != 0)
                        rbx_8 = rax_63
                    
                    if (var_d8_1 != 0)
                        rcx_40 = var_d8_1
                    
                    memcpy(&rcx_40[sx.q(r9_3)], rbx_8, (rsi_4 << 4).d)
                    var_d0 += rsi_4.d
                
                var_1d8_1:8.d &= not.d(var_1e8:0xc.d)
                sub_14059bdd0(&var_1e8:8)
            
            int32_t var_120_2 = 0
            
            if (var_128_1 != 0)
                sub_140a74f90(var_128_1)
            
            sub_141a32390(&var_168)
        
        if (r12 != 0)
            (*(*r12 + 0x10))(r12, &var_118, arg4)
        
        int128_t* rcx_62 = var_d8_1
        int128_t* rbx_12 = &var_118
        
        if (rcx_62 != 0)
            rbx_12 = rcx_62
        
        void* r14_8 = &rbx_12[sx.q(var_d0)]
        
        if (rbx_12 != r14_8)
            do
                int64_t rsi_6 = sx.q(var_68)
                int64_t* var_260
                var_260.d = *(rbx_12 + 8)
                char rax_95 = *(rbx_12 + 0xc)
                int32_t rax_96 = (rsi_6 + 1).d
                var_260:4.d = 0x80000000
                var_68 = rax_96
                
                if (rax_96 s> var_64)
                    sub_140775760(&var_a0, rsi_6.d)
                
                int64_t rcx_61 = rsi_6 * 3
                void* rdx_31 = &var_a0
                
                if (var_70 != 0)
                    rdx_31 = var_70
                
                rbx_12 = &rbx_12[1]
                *(rdx_31 + (rcx_61 << 2)) = var_260
                *(rdx_31 + (rcx_61 << 2) + 8) = rax_95.d
            while (rbx_12 != r14_8)
            
            rcx_62 = var_d8_1
        
        char rax_99 = var_1a8.b
        
        if ((rax_99 & 1) != 0)
            uint128_t* rcx_63 = &var_1b8
            
            if ((rax_99 & 2) == 0)
                rcx_63 = var_1b8.q
            
            var_1a8.b = rax_99 & 0xfe
            (**rcx_63)(rcx_63, 0)
            
            if ((var_1a8.b & 2) == 0)
                sub_140a74f90(var_1b8.q)
            
            rcx_62 = var_d8_1
        
        if (rcx_62 != 0)
            sub_140a74f90(rcx_62)
        
        result = arg2
        rbx = var_1f8_1
    
    rsi = arg3

char rax_106

if (var_68 != 0)
label_141a3fff1:
    
    if (r12 == 0)
        rax_106 = 0
    else
        rax_106 = r12[1].b
else
    if (r12 != 0)
        if (*(r12 + 9) != 0)
            sub_141a5d850(rsi, &var_288)
            sub_141a58d20(rsi, &var_1b8)
            int32_t rbx_13
            
            if (var_278 != 0xffffffff || var_274 == 0)
                var_1e8 = var_288
                sub_141a4ade0(r15, &var_298, &var_1e8)
                rbx_13 = var_298
                
                if (rbx_13 == 0xffffffff)
                    var_1e8 = var_288
                    uint128_t var_1d8_2 = var_278.o
                    sub_141a3f350(r15, &var_2a8, &var_1e8)
                    rbx_13 = var_2a8
            else
                rbx_13 = -1
            
            int32_t var_1a4
            int32_t rdx_36
            
            if (var_1a8 != 0xffffffff || var_1a4 == 0)
                var_1e8 = var_1b8
                sub_141a4ade0(r15, &var_2a8, &var_1e8)
                rdx_36 = var_2a8
                
                if (rdx_36 == 0xffffffff)
                    var_288 = var_1b8
                    var_278.o = var_1a8.o
                    sub_141a3f350(r15, &var_298, &var_288)
                    rdx_36 = var_298
            else
                rdx_36 = -1
            
            int64_t r9_5
            
            if (rbx_13 == 0xffffffff)
                r9_5 = 0
            else
                r9_5 = sx.q(*(*(r15 + 0x18) + (sx.q(rbx_13) << 2))) * 0x58 + *(r15 + 0x28)
            
            if (rdx_36 != 0xffffffff)
                rdi = sx.q(*(*(r15 + 0x18) + (sx.q(rdx_36) << 2))) * 0x58 + *(r15 + 0x28)
            
            (*(*r12 + 8))(r12, &var_118, &var_b8, r9_5, rdi)
            char var_c0
            char rax_104 = var_c0
            
            if (rax_104 != 0)
                int32_t var_c8
                int64_t rdi_2 = sx.q(var_c8)
                void* rbx_14 = var_d0.q
                var_68 = rdi_2.d
                var_b8 = var_118
                
                if (rdi_2.d != 0 || var_64 != 0)
                    sub_14174ff90(&var_a0, rdi_2.d, var_64)
                    void var_100
                    void* rdx_41 = &var_100
                    void* rcx_77 = &var_a0
                    
                    if (rbx_14 != 0)
                        rdx_41 = rbx_14
                    
                    if (var_70 != 0)
                        rcx_77 = var_70
                    
                    memcpy(rcx_77, rdx_41, (rdi_2 * 0xc).d)
                    rax_104 = var_c0
                    rbx_14 = var_d0.q
                else
                    int32_t var_64_1 = 4
                
                if (rax_104 != 0)
                    char var_c0_1 = 0
                    
                    if (rbx_14 != 0)
                        sub_140a74f90(rbx_14)
            
            rbx = var_1f8_1
        
        goto label_141a3fff1
    
    rax_106 = 0

char var_a4_1 = rax_106
char var_1f8_3
int64_t* rcx_79

if (rax_106 != 0 || var_68 != 0)
    sub_141a36f70(r15 + 0x18, result, &var_b8)
    
    if ((var_1f8_1 & 1) != 0)
        rcx_79 = &var_208
        
        if ((var_1f8_1 & 2) == 0)
            rcx_79 = var_208
        
        var_1f8_3 = var_1f8_1 & 0xfe
    label_141a40084:
        (**rcx_79)(rcx_79, 0)
        
        if ((var_1f8_3 & 2) == 0)
            sub_140a74f90(var_208)
else
    *result = 0xffffffff
    
    if ((rbx & 1) != 0)
        rcx_79 = &var_208
        
        if ((rbx & 2) == 0)
            rcx_79 = var_208
        
        var_1f8_3 = rbx & 0xfe
        goto label_141a40084

if (var_70 != 0)
    sub_140a74f90(var_70)

__security_check_cookie(rax_1 ^ &var_2d8)
return result
