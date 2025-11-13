// 函数: sub_141cec030
// 地址: 0x141cec030
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void var_338
int64_t rax_1 = __security_cookie ^ &var_338
int32_t r13 = arg2
int128_t zmm6
float zmm7[0x4]
int128_t zmm8

if (arg1[0x16].d - *(arg1 + 0xdc) s< arg1[0x1d].d - *(arg1 + 0x114))
    zmm6, zmm7, zmm8 = sub_141ce2830(arg1)

uint32_t rax_5 = r13 & 3
bool cond:0 = rax_5 != 0
uint32_t var_2bc = rax_5

if (rax_5 == 0 || ((r13 u>> 2).b & 1) == 0)
    rax_5.b = 0
else
    rax_5.b = 1

char var_308 = rax_5.b
uint8_t rbx_1 = (r13 u>> 3).b & 1
sub_141ceb9d0(arg1, r13.b & 1, cond:0)
int32_t var_1ec = 0x80
int64_t var_218
__builtin_memset(&var_218, 0, 0x2c)
int32_t var_1e8 = 0xffffffff
int32_t var_1e4 = 0
void* var_1d8 = nullptr
int32_t var_1d0 = 0
float var_2a0[0x4]
int64_t* var_278
int64_t** var_240
int64_t var_210
float zmm0_1[0x4]

if (rbx_1 != 0)
    int128_t var_68_1 = zmm8
    void** rax_7 = sub_14090aa40(&arg1[0x2a], &var_240, data_143f35cc8)
    int32_t rsi_2 = arg1[0x16].d - *(arg1 + 0xdc)
    void* rbx_2 = *rax_7
    
    if (rsi_2 s> var_210.d - var_1e4)
        sub_141cefb20(&var_218, rsi_2)
        int32_t rdx_4
        
        if (rsi_2 u< 4)
            rdx_4 = 1
        else
            uint32_t rsi_3 = rsi_2 u>> 1
            uint64_t rflags_1
            int32_t temp0_2
            temp0_2, rflags_1 = _bit_scan_reverse(rsi_3 + 8)
            int32_t rcx_6
            
            if (rsi_3 == 0xfffffff8)
                rcx_6 = 0x20
            else
                rcx_6 = 0x1f - temp0_2
            
            int32_t rcx_8 = rcx_6 << 0x1a s>> 0x1f
            uint64_t rflags_2
            char temp0_3
            temp0_3, rflags_2 = _bit_scan_reverse(rsi_3 + 7)
            char rdx_3
            
            if (rcx_8 == 0)
                rdx_3 = 0x20
            else
                rdx_3 = 0x1f - temp0_3
            
            rdx_4 = 1 << ((not.d(rcx_8)).b & (0x20 - rdx_3))
        
        if (var_1d0 == 0 || var_1d0 s< rdx_4)
            var_1d0 = rdx_4
            sub_141cef690(&var_218)
    
    int32_t r11_1 = arg1[0x1a].d
    void* r9_1 = &arg1[0x17]
    int32_t rcx_12 = 0
    int32_t var_2fc_1 = 1
    int32_t r8_3 = 0
    int32_t var_300_1 = 0
    void* var_2f8_1 = r9_1
    int32_t var_2f0_1 = 0xffffffff
    int64_t var_2ec_1 = 0
    
    if (r11_1 != 0)
        void* rax_14 = *(r9_1 + 0x10)
        
        if (rax_14 != 0)
            r9_1 = rax_14
        
        int32_t temp3_1
        int32_t temp4_1
        temp3_1:temp4_1 = sx.q(r11_1 - 1)
        int32_t rdx_7 = *r9_1
        
        if (rdx_7 != 0)
        label_141cec24b:
            int32_t rax_21 = neg.d(rdx_7) & rdx_7
            uint64_t rflags_3
            int32_t temp0_4
            temp0_4, rflags_3 = _bit_scan_reverse(rax_21)
            int32_t var_2fc_2 = rax_21
            int32_t rax_22
            
            if (rax_21 == 0)
                rax_22 = 0x20
            else
                rax_22 = 0x1f - temp0_4
            
            var_2ec_1.d = r8_3 - rax_22 + 0x1f
            
            if (r8_3 - rax_22 + 0x1f s> r11_1)
                var_2ec_1.d = r11_1
        else
            while (true)
                int64_t rdx_8 = sx.q(rcx_12)
                r8_3 += 0x20
                rcx_12 += 1
                var_2ec_1:4.d = r8_3
                var_300_1 = rcx_12
                
                if (rdx_8.d s>= (temp4_1 + (temp3_1 & 0x1f)) s>> 5)
                    break
                
                rdx_7 = *(r9_1 + (rdx_8 << 2) + 4)
                int32_t var_2f0_2 = 0xffffffff
                
                if (rdx_7 != 0)
                    goto label_141cec24b
            
            var_2ec_1.d = r11_1
    
    int32_t rdx_9 = arg1[0x1a].d
    void* r10_1 = &arg1[0x17]
    int32_t rsi_5 = *(r10_1 + 0x18)
    var_278 = &arg1[0x15]
    int128_t var_260_1 = 0xffffffff
    float var_270_1[0x4] = var_300_1.o
    int32_t r14_1 = 0xffffffff << (rdx_9.b & 0x1f)
    zmm0_1 = var_278.o
    int32_t r8_6 = rdx_9 s>> 5
    int32_t r9_3 = rdx_9 & 0xffffffe0
    int64_t var_280_1 = (_mm_unpackhi_pd(0xffffffff, 0xffffffff)).q
    int32_t var_2f0_3 = r14_1
    var_2ec_1.d = rdx_9
    var_2a0 = zmm0_1
    
    if (rdx_9 != rsi_5)
        void* rax_24 = *(r10_1 + 0x10)
        
        if (rax_24 != 0)
            r10_1 = rax_24
        
        int32_t temp7_1
        int32_t temp8_1
        temp7_1:temp8_1 = sx.q(rsi_5 - 1)
        int32_t rdx_13 = *(r10_1 + (sx.q(r8_6) << 2)) & r14_1
        
        if (rdx_13 != 0)
        label_141cec323:
            int32_t rax_31 = neg.d(rdx_13) & rdx_13
            uint64_t rflags_4
            int32_t temp0_6
            temp0_6, rflags_4 = _bit_scan_reverse(rax_31)
            int32_t rax_32
            
            if (rax_31 == 0)
                rax_32 = 0x20
            else
                rax_32 = 0x1f - temp0_6
            
            var_2ec_1.d = r9_3 - rax_32 + 0x1f
            
            if (r9_3 - rax_32 + 0x1f s> rsi_5)
                var_2ec_1.d = rsi_5
        else
            while (true)
                int64_t rcx_17 = sx.q(r8_6)
                r9_3 += 0x20
                r8_6 += 1
                
                if (rcx_17.d s>= (temp8_1 + (temp7_1 & 0x1f)) s>> 5)
                    break
                
                rdx_13 = *(r10_1 + (rcx_17 << 2) + 4)
                var_2f0_3 = 0xffffffff
                
                if (rdx_13 != 0)
                    goto label_141cec323
            
            var_2ec_1.d = rsi_5
    
    zmm8 = 0x3f000000
    int128_t var_48_1 = zmm6
    float var_58_1[0x4] = zmm7
    
    while (true)
        float rax_34 = var_270_1[3]
        int64_t rcx_19 = var_270_1[0].q
        
        if (rax_34 == (var_2f0_3.q u>> 0x20).d && rcx_19 == &arg1[0x17]
                && var_2a0[0].q == &arg1[0x15])
            break
        
        int64_t rdx_14 = arg1[7]
        float r10_2 = data_143a1c6c0
        
        if (rax_34 s< *(rcx_19 + 0x18))
            r10_2 = rax_34
        
        int64_t* rax_35 = *(rbx_2 + 0x18)
        float var_2d0 = r10_2
        int64_t r9_5 = sx.q(r10_2)
        int64_t r8_7 = *rax_35
        int32_t* rsi_8 = (r9_5 << 4) + arg1[0x15]
        int32_t* r11_2 = r8_7 + sx.q(*(rdx_14 + sx.q(*rsi_8) * 0x18)) * 0xc
        int128_t* var_2b0_1 = r11_2
        int128_t* rax_40 = r8_7 + sx.q(*(rdx_14 + sx.q(rsi_8[1]) * 0x18)) * 0xc
        int32_t* rax_43 = r8_7 + sx.q(*(rdx_14 + sx.q(rsi_8[2]) * 0x18)) * 0xc
        void* r14_2
        
        if (var_210.d == var_1e4)
        label_141cec45c:
            char* var_318_1 = nullptr
            float* var_228 = &var_2d0
            int32_t var_2cc
            sub_141ce89d0(&var_218, &var_2cc, r10_2, &var_228, var_318_1)
            r11_2 = var_2b0_1
            r14_2 = var_218 + sx.q(var_2cc) * 0x28
        else
            void var_1e0
            void* rcx_26 = &var_1e0
            
            if (var_1d8 != 0)
                rcx_26 = var_1d8
            
            int32_t rax_48 = *(rcx_26 + ((sx.q(var_1d0 - 1) & r9_5) << 2))
            
            if (rax_48 == 0xffffffff)
                goto label_141cec45c
            
            int64_t r8_8 = var_218
            int64_t rdx_17
            
            while (true)
                rdx_17 = sx.q(rax_48) * 5
                
                if (*(r8_8 + (rdx_17 << 3)) == r10_2)
                    break
                
                rax_48 = *(r8_8 + (rdx_17 << 3) + 0x20)
                
                if (rax_48 == 0xffffffff)
                    goto label_141cec45c
            
            if (rax_48 == 0xffffffff)
                goto label_141cec45c
            
            r14_2 = r8_8 + (rdx_17 << 3)
            
            if (r14_2 == 0)
                goto label_141cec45c
        
        int128_t* rcx_30 = rax_43
        float zmm4[0x4] = *(rax_40 + 4)
        double zmm2_1[0x2] = *(rax_40 + 8)
        zmm2_1[0].d = zmm2_1[0].d f- r11_2[2]
        zmm4[0] = zmm4[0] f- r11_2[1]
        float zmm5 = *(rcx_30 + 4) f- r11_2[1]
        float zmm3 = *(rcx_30 + 8) f- r11_2[2]
        zmm7 = *rax_40
        zmm0_1 = zmm2_1
        zmm7[0] = zmm7[0] f- *r11_2
        zmm6.d = (*rcx_30).d f- *r11_2
        zmm0_1[0] = zmm0_1[0] * zmm5
        zmm4[0] = zmm4[0] * zmm3
        zmm2_1[0].d = zmm2_1[0].d f* zmm6.d
        zmm4[0] = zmm4[0] - zmm0_1[0]
        zmm4[0] = zmm4[0] f* zmm6.d
        zmm7[0] = zmm7[0] * zmm5
        zmm7[0] = zmm7[0] * zmm3
        zmm7[0] = zmm7[0] - zmm4[0]
        zmm4[0] = zmm4[0] * zmm4[0]
        zmm2_1[0].d = zmm2_1[0].d f- zmm7[0]
        zmm7[0] = zmm7[0] * zmm7[0]
        zmm2_1[0].d = zmm2_1[0].d f* zmm2_1[0].d
        zmm2_1[0].d = zmm2_1[0].d f+ zmm4[0]
        zmm2_1[0].d = zmm2_1[0].d f+ zmm7[0]
        float temp0_7[0x4] = _mm_sqrt_ss(0, zmm2_1[0].d)
        temp0_7[0] = temp0_7[0] f* zmm8.d
        *(r14_2 + 4) = temp0_7[0]
        int32_t zmm0_2 = sub_141cec9a0(r11_2, rax_40, rcx_30)
        int32_t rax_52 = *rsi_8
        *(r14_2 + 0xc) = zmm0_2
        *(r14_2 + 8) = rax_52
        int32_t zmm0_3 = sub_141cec9a0(rax_40, rax_43, var_2b0_1)
        int32_t rax_53 = rsi_8[1]
        *(r14_2 + 0x14) = zmm0_3
        *(r14_2 + 0x10) = rax_53
        zmm0_1, zmm8 = sub_141cec9a0(rax_43, var_2b0_1, rax_40)
        *(r14_2 + 0x18) = rsi_8[2]
        int32_t rax_56 = not.d(var_2a0[3])
        *(r14_2 + 0x1c) = zmm0_1[0]
        var_270_1[2] &= rax_56
        sub_14059bdd0(&var_2a0[2])
    
    r13 = arg2

int32_t rbx_3 = 0
int32_t rdx_23 = arg1[1].d - *(arg1 + 0x34)
int64_t var_2e0 = 0
int32_t var_2d8 = 0
int32_t var_2d4 = 0

if (rdx_23 s> 0)
    sub_1405dadb0(&var_2e0, rdx_23)
    rbx_3 = var_2d8

int32_t r10_3 = arg1[5].d
void* r9_7 = &arg1[2]
int32_t var_2fc_3 = 1
int32_t rcx_36 = 0
int32_t var_300_2 = 0
int32_t r8_13 = 0
void* var_2f8_2 = r9_7
int32_t var_2f0_4 = 0xffffffff
int64_t var_2ec_2 = 0

if (r10_3 != 0)
    void* rax_57 = *(r9_7 + 0x10)
    
    if (rax_57 != 0)
        r9_7 = rax_57
    
    int32_t temp1_1
    int32_t temp2_1
    temp1_1:temp2_1 = sx.q(r10_3 - 1)
    int32_t rdx_26 = *r9_7
    
    if (rdx_26 != 0)
    label_141cec66b:
        int32_t rax_64 = neg.d(rdx_26) & rdx_26
        uint64_t rflags_5
        int32_t temp0_8
        temp0_8, rflags_5 = _bit_scan_reverse(rax_64)
        int32_t var_2fc_4 = rax_64
        int32_t rax_65
        
        if (rax_64 == 0)
            rax_65 = 0x20
        else
            rax_65 = 0x1f - temp0_8
        
        var_2ec_2.d = r8_13 - rax_65 + 0x1f
        
        if (r8_13 - rax_65 + 0x1f s> r10_3)
            var_2ec_2.d = r10_3
    else
        while (true)
            int64_t rdx_27 = sx.q(rcx_36)
            r8_13 += 0x20
            rcx_36 += 1
            var_2ec_2:4.d = r8_13
            var_300_2 = rcx_36
            
            if (rdx_27.d s>= (temp2_1 + (temp1_1 & 0x1f)) s>> 5)
                break
            
            rdx_26 = *(r9_7 + (rdx_27 << 2) + 4)
            int32_t var_2f0_5 = 0xffffffff
            
            if (rdx_26 != 0)
                goto label_141cec66b
        
        var_2ec_2.d = r10_3

int32_t rdx_28 = arg1[5].d
var_278 = arg1
int128_t var_260_2 = 0xffffffff
float var_270_2[0x4] = var_300_2.o
int32_t r14_3 = 0xffffffff << (rdx_28.b & 0x1f)
int32_t r9_9 = rdx_28 & 0xffffffe0
zmm0_1 = var_278.o
int32_t r8_16 = rdx_28 s>> 5
int64_t var_280_2 = (_mm_unpackhi_pd(0xffffffff, 0xffffffff)).q
int32_t var_2f0_6 = r14_3
var_2ec_2.d = rdx_28
var_2a0 = zmm0_1

if (rdx_28 != r10_3)
    void* rax_67 = arg1[4]
    void* r11_3 = &arg1[2]
    
    if (rax_67 != 0)
        r11_3 = rax_67
    
    int32_t temp5_1
    int32_t temp6_1
    temp5_1:temp6_1 = sx.q(r10_3 - 1)
    int32_t rdx_32 = *(r11_3 + (sx.q(r8_16) << 2)) & r14_3
    
    if (rdx_32 != 0)
    label_141cec743:
        int32_t rax_74 = neg.d(rdx_32) & rdx_32
        uint64_t rflags_6
        int32_t temp0_10
        temp0_10, rflags_6 = _bit_scan_reverse(rax_74)
        int32_t r12_2
        
        if (rax_74 == 0)
            r12_2 = 0x20
        else
            r12_2 = 0x1f - temp0_10
        
        var_2ec_2.d = r9_9 - r12_2 + 0x1f
        
        if (r9_9 - r12_2 + 0x1f s> r10_3)
            var_2ec_2.d = r10_3
    else
        while (true)
            int64_t rcx_41 = sx.q(r8_16)
            r9_9 += 0x20
            r8_16 += 1
            
            if (rcx_41.d s>= (temp6_1 + (temp5_1 & 0x1f)) s>> 5)
                break
            
            rdx_32 = *(r11_3 + (rcx_41 << 2) + 4)
            var_2f0_6 = 0xffffffff
            
            if (rdx_32 != 0)
                goto label_141cec743
        
        var_2ec_2.d = r10_3

while (true)
    float rax_76 = var_270_2[3]
    int64_t rcx_43 = var_270_2[0].q
    
    if (rax_76 == (var_2f0_6.q u>> 0x20).d && rcx_43 == &arg1[2] && var_2a0[0].q == arg1)
        int32_t var_2c4 = 0x20000
        int32_t temp9
        int32_t temp10
        temp9:temp10 = sx.q(rbx_3)
        var_260_2.q = arg1
        var_278 = &var_2e0
        var_270_2[0].q = &var_2c4
        var_270_2[2].q = &var_308
        var_260_2:8.b = rbx_1
        int64_t* var_250 = &var_218
        var_240 = sub_141ceb9b0
        int64_t** var_238 = &var_278
        sub_14077b750(((temp10 + (temp9 & 0x1ffff)) s>> 0x11) + 1, &var_240, 0)
        
        if (var_2bc != 0 && var_308 != 0)
            if (*(arg1 + 0x114) != 0)
                void var_1c8
                sub_1409a9e60(&var_1c8)
                sub_141cd8fa0(arg1, &var_1c8)
                sub_1409ab180(&var_1c8)
            
            var_260_2.q = sub_141cef050
            int64_t* var_238_1 = arg1
            var_278 = sub_141cef150
            int64_t var_248_1 = 0
            var_270_2[0].q = sub_141cef160
            int32_t var_230_1 = r13 u>> 5 & 1
            var_270_2[2].q = sub_141cef1c0
            var_260_2:8.q = sub_141cef2d0
            int64_t (* var_250_1)(void* arg1, int32_t* arg2, int128_t arg3 @ zmm2, int32_t arg4, 
                int32_t arg5) = sub_141cef340
            var_240 = &var_278
            sub_1429c8af0(&var_240)
        
        int64_t rcx_53 = var_2e0
        
        if (rcx_53 != 0)
            sub_140a74f90(rcx_53)
        
        int32_t var_1d0_1 = 0
        
        if (var_1d8 != 0)
            sub_140a74f90(var_1d8)
        
        bool cond:12 = var_210:4.d == 0
        var_210.d = 0
        
        if (not(cond:12))
            sub_1405c5660(&var_218, 0)
        
        int32_t var_1e8_1 = 0xffffffff
        int32_t var_1e4_1 = 0
        int64_t var_208
        void* result = sub_14059a8e0(&var_208, 0)
        int64_t var_1f8
        
        if (var_1f8 != 0)
            result = sub_140a74f90(var_1f8)
        
        int64_t rcx_58 = var_218
        
        if (rcx_58 != 0)
            result = sub_140a74f90(rcx_58)
        
        __security_check_cookie(rax_1 ^ &var_338)
        return result
    
    float rsi_9 = data_143a1c6b4
    
    if (rax_76 s< *(rcx_43 + 0x18))
        rsi_9 = rax_76
    
    if (rbx_3 + 1 s> var_2d4)
        sub_1405a4cf0(&var_2e0)
    
    *(var_2e0 + (sx.q(rbx_3) << 2)) = rsi_9
    var_270_2[2] &= not.d(var_2a0[3])
    sub_14059bdd0(&var_2a0[2])
    rbx_3 += 1
