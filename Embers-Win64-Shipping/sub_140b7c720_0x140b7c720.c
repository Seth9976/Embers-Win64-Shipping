// 函数: sub_140b7c720
// 地址: 0x140b7c720
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void var_2a8
int64_t rax_1 = __security_cookie ^ &var_2a8
bool cond:0 = arg4 == 4
bool r14 = arg3
int64_t var_e8
__builtin_memset(&var_e8, 0, 0x2c)
int32_t var_bc = 0x80
int32_t var_b8 = 0xffffffff
int32_t var_b4 = 0
int64_t var_a8 = 0
int32_t var_a0 = 0
int64_t var_98
__builtin_memset(&var_98, 0, 0x2c)
int32_t var_6c = 0x80
int32_t var_68 = 0xffffffff
int32_t var_64 = 0
int64_t var_58 = 0
int32_t var_50 = 0
bool var_257 = true

if (arg1 == 0)
    goto label_140b7c981

int64_t* i_1 = nullptr
int32_t i_7 = *(arg1 + 0x50)
int64_t* rdi_1 = *(arg1 + 0x48)
var_257 = *(arg1 + 0x111) == 0
uint64_t i_5 = 0
int32_t i_12 = i_7

if (i_7 != 0)
    sub_140976950(&i_5, i_7, 0)
    i_1 = i_5
    void* r14_2 = i_1 - rdi_1
    int32_t i
    
    do
        sub_140b78080(r14_2 + rdi_1, rdi_1)
        rdi_1 = &rdi_1[0x15]
        i = i_7
        i_7 -= 1
    while (i != 1)
    i_7 = i_12
    r14 = arg3
else
    int32_t var_1ec_1 = 0

void* rsi_2 = sx.q(i_7) * 0xa8 + i_1
void var_230
int64_t* var_220
void var_1e8

if (i_1 == rsi_2)
label_140b7c97a:
    sub_140b786a0(&i_5)
label_140b7c981:
    int32_t i_11 = arg5[5].d
    void* rsi_3 = &arg5[2]
    int32_t var_250_1 = 0
    int32_t var_24c_1 = 1
    void* var_248_1 = rsi_3
    int32_t rcx_9 = 0
    int32_t var_240_1 = 0xffffffff
    int32_t r8_3 = 0
    int64_t var_23c_1 = 0
    
    if (i_11 != 0)
        void* rax_8 = *(rsi_3 + 0x10)
        void* r9_1 = rsi_3
        
        if (rax_8 != 0)
            r9_1 = rax_8
        
        int32_t temp0_1
        int32_t temp1_1
        temp0_1:temp1_1 = sx.q(i_11 - 1)
        int32_t rdx_7 = *r9_1
        
        if (rdx_7 != 0)
        label_140b7ca0d:
            int32_t rax_15 = neg.d(rdx_7) & rdx_7
            uint64_t rflags_1
            int32_t temp0_2
            temp0_2, rflags_1 = _bit_scan_reverse(rax_15)
            int32_t var_24c_2 = rax_15
            int32_t rax_16
            
            if (rax_15 == 0)
                rax_16 = 0x20
            else
                rax_16 = 0x1f - temp0_2
            
            var_23c_1.d = r8_3 - rax_16 + 0x1f
            
            if (r8_3 - rax_16 + 0x1f s> i_11)
                var_23c_1.d = i_11
        else
            while (true)
                int64_t rdx_8 = sx.q(rcx_9)
                r8_3 += 0x20
                rcx_9 += 1
                var_23c_1:4.d = r8_3
                var_250_1 = rcx_9
                
                if (rdx_8.d s>= (temp1_1 + (temp0_1 & 0x1f)) s>> 5)
                    break
                
                rdx_7 = *(r9_1 + (rdx_8 << 2) + 4)
                var_240_1 = 0xffffffff
                
                if (rdx_7 != 0)
                    goto label_140b7ca0d
            
            var_23c_1.d = i_11
    
    int64_t* r10_1 = arg5
    var_220 = r10_1
    i_1 = zx.q(i_11)
    double zmm2[0x2] = var_240_1.o
    int32_t rdx_9 = r10_1[5].d
    int128_t var_218_1 = var_250_1.o
    int128_t zmm0 = var_220.o
    int32_t r8_6 = rdx_9 s>> 5
    double var_208_1[0x2] = zmm2
    int32_t rdi_2 = 0xffffffff << (rdx_9.b & 0x1f)
    int32_t r9_3 = rdx_9 & 0xffffffe0
    int64_t var_1c0_1 = (_mm_unpackhi_pd(zmm2, zmm2[0])).q
    int128_t zmm1 = var_218_1
    var_218_1:8.d = rdi_2
    var_218_1:0xc.d = rdx_9
    int128_t var_1e0 = zmm0
    int128_t var_1d0_1 = zmm1
    
    if (rdx_9 != i_11)
        void* rax_19 = *(rsi_3 + 0x10)
        void* r10_2 = rsi_3
        
        if (rax_19 != 0)
            r10_2 = rax_19
        
        int32_t temp3_1
        int32_t temp4_1
        temp3_1:temp4_1 = sx.q(i_11 - 1)
        int32_t rdx_13 = *(r10_2 + (sx.q(r8_6) << 2)) & rdi_2
        
        if (rdx_13 != 0)
        label_140b7cb8f:
            int32_t rax_26 = neg.d(rdx_13) & rdx_13
            uint64_t rflags_2
            int32_t temp0_4
            temp0_4, rflags_2 = _bit_scan_reverse(rax_26)
            int32_t rax_27
            
            if (rax_26 == 0)
                rax_27 = 0x20
            else
                rax_27 = 0x1f - temp0_4
            
            var_218_1:0xc.d = r9_3 - rax_27 + 0x1f
            
            if (r9_3 - rax_27 + 0x1f s> i_1.d)
                var_218_1:0xc.d = i_1.d
        else
            while (true)
                int64_t rcx_21 = sx.q(r8_6)
                r9_3 += 0x20
                r8_6 += 1
                
                if (rcx_21.d s>= (temp4_1 + (temp3_1 & 0x1f)) s>> 5)
                    break
                
                rdx_13 = *(r10_2 + (rcx_21 << 2) + 4)
                var_218_1:8.d = 0xffffffff
                
                if (rdx_13 != 0)
                    goto label_140b7cb8f
            
            var_218_1:0xc.d = i_1.d
        
        r10_1 = arg5
    
    uint64_t i_16 = var_218_1:8.q u>> 0x20
    i_5 = i_16
    
    while (true)
        int64_t rax_29 = sx.q(var_1d0_1:0xc.d)
        int64_t* rdx_14 = var_1e0.q
        
        if (rax_29.d == i_16.d && var_1d0_1.q == rsi_3 && rdx_14 == r10_1)
            if (arg4 - 4 u<= 1 || r14 - 4 u> 1)
                r14 = true
            else
                r14 = false
            
            int32_t var_240_2 = 0xffffffff
            int64_t* r15
            r15.b = arg4 != 4
            int32_t var_24c_3 = 1
            int64_t var_d8
            int64_t* var_248_2 = &var_d8
            int32_t rcx_45 = 0
            int32_t var_250_2 = 0
            int32_t r8_10 = 0
            int64_t var_23c_2 = 0
            int32_t var_c0
            
            if (var_c0 != 0)
                int64_t* r10_3 = &var_d8
                int64_t* var_c8
                
                if (var_c8 != 0)
                    r10_3 = var_c8
                
                int32_t temp5_1
                int32_t temp6_1
                temp5_1:temp6_1 = sx.q(var_c0 - 1)
                int32_t rdx_21 = *r10_3
                
                if (rdx_21 != 0)
                label_140b7cf4a:
                    int32_t rax_49 = neg.d(rdx_21) & rdx_21
                    uint64_t rflags_3
                    int32_t temp0_5
                    temp0_5, rflags_3 = _bit_scan_reverse(rax_49)
                    int32_t var_24c_4 = rax_49
                    int32_t rax_50
                    
                    if (rax_49 == 0)
                        rax_50 = 0x20
                    else
                        rax_50 = 0x1f - temp0_5
                    
                    int32_t rax_51 = r8_10 - rax_50 + 0x1f
                    
                    if (rax_51 s> var_c0)
                        rax_51 = var_c0
                    
                    var_23c_2.d = rax_51
                else
                    while (true)
                        int64_t rdx_22 = sx.q(rcx_45)
                        r8_10 += 0x20
                        rcx_45 += 1
                        var_23c_2:4.d = r8_10
                        var_250_2 = rcx_45
                        
                        if (rdx_22.d s>= (temp6_1 + (temp5_1 & 0x1f)) s>> 5)
                            var_23c_2.d = var_c0
                            break
                        
                        rdx_21 = *(r10_3 + (rdx_22 << 2) + 4)
                        int32_t var_240_3 = 0xffffffff
                        
                        if (rdx_21 != 0)
                            goto label_140b7cf4a
            
            var_220 = &var_e8
            int128_t var_218_2 = var_250_2.o
            zmm0 = var_220.o
            var_23c_2.d = var_c0
            int128_t var_208_2 = 0xffffffff
            double temp0_6[0x2] = _mm_unpackhi_pd(0xffffffff, 0xffffffff)
            var_1e0 = zmm0
            int128_t var_1d0_2 = var_218_2
            int64_t var_1c0_2 = temp0_6.q
            
            while (true)
                int64_t rcx_49 = sx.q(var_1d0_2:0xc.d)
                int64_t rax_52 = var_1e0.q
                
                if (rcx_49.d == ((0xffffffff << (var_c0.b & 0x1f)).q u>> 0x20).d
                        && var_1d0_2.q == &var_d8 && rax_52 == &var_e8)
                    break
                
                int64_t* rsi_7 = (rcx_49 << 5) + *rax_52
                void* rax_53 = rsi_7[2]
                i_1 = *(rax_53 + 0x100)
                
                for (void* rdi_5 = &i_1[sx.q(*(rax_53 + 0x108)) * 0x14]; i_1 != rdi_5; 
                        i_1 = &i_1[0x14])
                    char var_278_3 = r15.b
                    var_220 = nullptr
                    var_218_2.q = 0
                    
                    if (sub_140b7e470(i_1, arg2, arg3, &var_220, arg4, r14, var_278_3) != 0)
                        sub_1406b3860(arg6, &var_230, rsi_7, nullptr)
                        break
                
                var_1d0_2:8.d &= not.d(var_1e0:0xc.d)
                sub_14059bdd0(&var_1e0:8)
            
            i_1.b = 1
            break
        
        int64_t rcx_24 = rax_29 * 5
        int64_t rax_30 = *rdx_14
        int64_t* rsi_4 = rax_30 + (rcx_24 << 3)
        uint64_t rcx_25 = *(rax_30 + (rcx_24 << 3) + 0x10)
        char rax_31 = *(rcx_25 + 0x120)
        
        if (rax_31 == 1)
            bool cond:5_1 = *(rcx_25 + 0x1e0) u> 1
            rcx_25 = zx.q(var_257)
            int32_t rax_32
            rax_32.b = cond:5_1
            
            if (rax_32 == 1)
                rcx_25 = 1
            
            goto label_140b7cc3a
        
        if (rax_31 != 2)
            rcx_25.b = *(rcx_25 + 0x1e0) u> 1
        label_140b7cc3a:
            
            if (rcx_25.b != 0 && *sub_140960120(&var_98, &var_230, rsi_4) == 0xffffffff)
                var_220 = nullptr
                var_218_1.q = 0
                int64_t var_1a8
                sub_140596d10(&var_1a8, rsi_4)
                int16_t var_198_1 = 1
                int64_t* var_268_2 = &var_e8
                int64_t var_190
                __builtin_memset(&var_190, 0, 0x2c)
                int64_t* var_160_1 = nullptr
                int32_t i_14 = 0
                int64_t var_150
                __builtin_memset(&var_150, 0, 0x4c)
                int32_t i_15
                int32_t i_8 = i_15
                bool cond:7_1 = sub_140b7a2c0(&var_1a8, arg1, &var_220, arg2, r14, arg4, cond:0, 
                    arg5, var_268_2, arg7) == 0
                int64_t* var_110
                int64_t* rbx_1 = var_110
                
                if (i_8 != 0)
                    int32_t i_2
                    
                    do
                        int64_t rcx_29 = *rbx_1
                        
                        if (rcx_29 != 0)
                            sub_140a74f90(rcx_29)
                        
                        rbx_1 = &rbx_1[2]
                        i_2 = i_8
                        i_8 -= 1
                    while (i_2 != 1)
                    rbx_1 = var_110
                
                if (rbx_1 != 0)
                    sub_140a74f90(rbx_1)
                
                int64_t var_120
                
                if (var_120 != 0)
                    sub_140a74f90(var_120)
                
                int64_t var_130
                
                if (var_130 != 0)
                    sub_140a74f90(var_130)
                
                int64_t var_140
                
                if (var_140 != 0)
                    sub_140a74f90(var_140)
                
                int64_t rcx_34 = var_150
                
                if (rcx_34 != 0)
                    sub_140a74f90(rcx_34)
                
                int32_t i_9 = i_14
                int64_t* rbx_2 = var_160_1
                
                if (i_9 != 0)
                    int32_t i_3
                    
                    do
                        int64_t rcx_35 = *rbx_2
                        
                        if (rcx_35 != 0)
                            sub_140a74f90(rcx_35)
                        
                        rbx_2 = &rbx_2[2]
                        i_3 = i_9
                        i_9 -= 1
                    while (i_3 != 1)
                    rbx_2 = var_160_1
                
                if (rbx_2 != 0)
                    sub_140a74f90(rbx_2)
                
                int32_t i_13
                int32_t i_10 = i_13
                int64_t* i_6
                i_1 = i_6
                
                if (i_10 != 0)
                    int32_t i_4
                    
                    do
                        int64_t rcx_37 = *i_1
                        
                        if (rcx_37 != 0)
                            sub_140a74f90(rcx_37)
                        
                        i_1 = &i_1[2]
                        i_4 = i_10
                        i_10 -= 1
                    while (i_4 != 1)
                    i_1 = i_6
                
                if (i_1 != 0)
                    sub_140a74f90(i_1)
                
                int64_t var_180
                
                if (var_180 != 0)
                    sub_140a74f90(var_180)
                
                int64_t rcx_40 = var_190
                
                if (rcx_40 != 0)
                    sub_140a74f90(rcx_40)
                
                int64_t rcx_41 = var_1a8
                
                if (rcx_41 != 0)
                    sub_140a74f90(rcx_41)
                
                int64_t* rcx_42 = var_220
                
                if (rcx_42 != 0)
                    sub_140a74f90(rcx_42)
                
                if (cond:7_1 != 0)
                    goto label_140b7ca31
                
                sub_1406b3860(&var_98, &var_1e8, rsi_4, nullptr)
        
        var_1d0_1:8.d &= not.d(var_1e0:0xc.d)
        sub_14059bdd0(&var_1e0:8)
        i_16 = i_5
        r10_1 = arg5
        r14 = arg3
        rsi_3 = var_248_1
else
    while (true)
        if (*sub_140960120(&var_98, &var_1e8, i_1) == 0xffffffff)
            var_220 = nullptr
            int128_t var_218
            var_218.q = 0
            char rax_7 =
                sub_140b7a2c0(i_1, arg1, &var_220, arg2, r14, arg4, cond:0, arg5, &var_e8, arg7)
            int64_t* rcx_6 = var_220
            rdi_1.b = rax_7 == 0
            
            if (rcx_6 != 0)
                sub_140a74f90(rcx_6)
            
            if (rdi_1.b != 0)
                sub_140b786a0(&i_5)
            label_140b7ca31:
                i_1.b = 0
                break
            
            sub_1406b3860(&var_98, &var_230, i_1, nullptr)
        
        i_1 = &i_1[0x15]
        
        if (i_1 == rsi_2)
            goto label_140b7c97a
int32_t var_50_1 = 0

if (var_58 != 0)
    sub_140a74f90(var_58)

sub_140669e00(&var_98)
int32_t var_a0_1 = 0

if (var_a8 != 0)
    sub_140a74f90(var_a8)

sub_1405df330(&var_e8)
__security_check_cookie(rax_1 ^ &var_2a8)
return zx.q(i_1.b)
