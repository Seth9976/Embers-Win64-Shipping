// 函数: sub_14151a4e0
// 地址: 0x14151a4e0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void var_298
int64_t rax_1 = __security_cookie ^ &var_298
int64_t rax_2 = *(arg4 + 0x10)
void* r12 = arg5
int64_t rax_3 = *(arg4 + 0x20)
int32_t* result_1 = *(arg4 + 0x28)
void* var_1b8
*(arg4 + 0x28) = &var_1b8
var_1b8 = arg4 + 0x10
char var_1a0 = 0
*(arg4 + 0x30) += 1
uint64_t rcx_1 = zx.q(*(r12 + 0xb028) << 3)
uint64_t count = 4 * rcx_1
void* var_1e0 = r12
int64_t i_7 = 0x10

if (mulu.dp.q(4, rcx_1) u>> 0x40 != zx.o(0))
    count = -1

int32_t rcx_2 = 8
int64_t r15 = sx.q(count.d)
int64_t rsi = 8

if (count.d s>= 0x10)
    rsi = 0x10

int64_t r14_1 = not.q(rsi - 1)
int64_t r13_3 = (*(arg4 + 0x10) - 1 + rsi) & r14_1
int64_t var_210 = r13_3
int64_t rax_5 = r15 + r13_3

if (rax_5 u> *(arg4 + 0x18))
    if (count.d s>= 0x10)
        rcx_2 = 0x10
    
    sub_140b0e3d0(arg4 + 0x10, count.d + rcx_2)
    r13_3 = (*(arg4 + 0x10) - 1 + rsi) & r14_1
    var_210 = r13_3
    rax_5 = r15 + r13_3

*(arg4 + 0x10) = rax_5
memset(r13_3, 0xff, count)
uint64_t r15_1 = 0
int32_t var_244 = 0
int32_t rdx_1 = 1
int32_t var_23c
int64_t var_1c8

if (*(r12 + 0xb028) u> 0)
    do
        int32_t r11_1 = *(r12 + 0xb02c)
        int32_t* rdi = arg1
        r13_3.b = r15_1.d u< r11_1
        int64_t rbx_2 = *(*(r12 + 0xb000) + (r15_1 << 3))
        var_23c = rbx_2.d
        int32_t r12_1 = 0
        void* r14_4 = (zx.q(rbx_2.d) & 0x3fffff) * 0x60 + *(rdi + 0x98)
        int32_t var_21c_1 = 0
        uint32_t rsi_1 = zx.d(*(r15_1 + *(r12 + 0xb020)))
        uint32_t var_240_1 = rsi_1
        char i_10 = *(r14_4 + 0x26)
        
        if (i_10 != 0)
            void* r8_1 = r14_4 + 0x30
            uint64_t i_8 = zx.q(i_10)
            uint64_t i
            
            do
                uint32_t rax_9 = zx.d(*r8_1)
                r8_1 += 1
                int32_t rcx_5 = r12_1
                r12_1 |= rdx_1
                
                if (not(test_bit(rsi_1, rax_9)))
                    r12_1 = rcx_5
                
                rdx_1 = rol.d(rdx_1, 1)
                i = i_8
                i_8 -= 1
            while (i != 1)
            var_21c_1 = r12_1
        
        int32_t rax_10 = rbx_2:4.d
        int64_t* rcx_6 = *(r14_4 + 0x48)
        uint32_t rax_11 = rax_10 u>> 0x18
        int32_t rdx_3 = rax_10 & 0xffffff
        char r8_2 = rax_11.b & 0xf
        int32_t rax_12
        rax_12.b = r15_1.d u< r11_1
        char var_268
        var_268.d = rax_12
        int16_t var_260
        int64_t var_258
        int128_t* var_250
        char var_248
        char var_238
        int32_t var_208
        (*(*rcx_6 + 0x10))(rcx_6, &var_1c8, &var_23c, zx.q(r12_1.b), r8_2, rdx_3, var_268, var_260, 
            var_258, var_250, var_248, var_240_1, var_238, rax_11, arg1, r11_1, arg3, var_210, 
            var_208, rbx_2, rbx_2)
        int32_t var_1c0
        int32_t rax_13 = var_1c0
        
        if (rax_13 == 2 && (r15_1.d u< r11_1 || arg6 == 0))
            rax_13 = 3
            var_1c0 = 3
        
        int64_t* rdx_5
        rdx_5.b = 0
        var_248 = 0
        
        if (rax_13 != 0 && rax_13 == 3)
            char r10_2 = *(r14_4 + 0x2f)
            int128_t zmm0_1 = zx.o(0)
            int64_t var_180
            __builtin_memset(&var_180, 0xff, 0x20)
            int128_t zmm1 = zx.o(0)
            uint64_t rdi_1 = 0
            uint64_t rax_14
            rax_14.b = 1
            var_238 = 1
            int128_t var_158 = zmm0_1
            int128_t var_138_1 = zmm1
            int128_t var_118_1 = zmm0_1
            int128_t var_f8_1 = zmm1
            int128_t var_d8_1 = zmm0_1
            int128_t var_b8_1 = zmm1
            int128_t var_98_1 = zmm0_1
            int128_t var_78_1 = zmm1
            void var_140
            
            if (r10_2 != 0)
                while (true)
                    if (test_bit(rsi_1, rdi_1.d))
                        void* r15_2 = *(*(r14_4 + 0x38) + (sx.q(rdi_1.d) << 3))
                        int32_t r8_4
                        
                        if (*(r15_2 + 0x48) u> 0)
                            r8_4 = *arg1
                        
                        if (*(r15_2 + 0x48) u<= 0
                                || *(*(r15_2 + 0x60) + (zx.q(**(r15_2 + 0x58)) << 2)) u>> 4
                                == r8_4)
                            rax_14.b = 0
                            break
                        
                        var_260.b = r13_3.b
                        int32_t rax_18 = sub_1414fe680(r15_2 + 0x20, arg1, r8_4, &var_23c, rdi_1.b, 
                            rdx_3, rax_11.b & 0xf, var_260.b)
                        char i_11 = *(r14_4 + 0x26)
                        
                        if (i_11 != 0)
                            void* r10_3 = r14_4 + 0x30
                            uint64_t i_9 = zx.q(i_11)
                            void* r8_5 = &var_140
                            void* r9_4 = r15_2 + 0x178
                            uint64_t i_1
                            
                            do
                                if (zx.d(*r10_3) == rdi_1.d)
                                    void* rax_19 = *(r9_4 - 0xc0)
                                    *(&var_180 + (rdi_1 << 2)) = rax_18
                                    *(r8_5 - 0x18) = *(rax_19 + 0x10)
                                    *(r8_5 - 0x10) = *r9_4
                                    uint32_t rax_21 = zx.d(rax_18.w)
                                    int32_t temp2_1 = *(r15_2 + 0x1b8)
                                    *r8_5 = 0
                                    r9_4 += 8
                                    *(r8_5 - 8) = modu.dp.d(0:rax_21, temp2_1)
                                    *(r8_5 - 4) = divu.dp.d(0:rax_21, temp2_1)
                                
                                r10_3 += 1
                                r8_5 += 0x20
                                i_1 = i_9
                                i_9 -= 1
                            while (i_1 != 1)
                        
                        rsi_1 = var_240_1
                    
                    uint32_t rax_23 = zx.d(*(r14_4 + 0x2f))
                    rdi_1 = zx.q(rdi_1.d + 1)
                    r10_2 = rax_23.b
                    
                    if (rdi_1.d u>= rax_23)
                        rax_14 = zx.q(var_238)
                        break
                
                r15_1 = zx.q(var_244)
            
            if (rax_14.b == 0)
                uint64_t rdi_4 = 0
                
                if (r10_2 == 0)
                    rdx_5 = nullptr
                    rdi = arg1
                else
                    do
                        int32_t rdx_29 = *(&var_180 + (rdi_4 << 2))
                        
                        if (rdx_29 != 0xffffffff)
                            sub_141507940(*(*(r14_4 + 0x38) + (sx.q(rdi_4.d) << 3)) + 0x20, arg1, 
                                rdx_29.w)
                        
                        rdi_4 = zx.q(rdi_4.d + 1)
                    while (rdi_4.d u< zx.d(*(r14_4 + 0x2f)))
                    
                    rdx_5 = zx.q(var_248)
                    rdi = arg1
            else
                int32_t i_2 = 0
                
                if (r10_2 != 0)
                    int32_t rcx_11 = var_23c
                    
                    do
                        if (not(test_bit(rsi_1, i_2)))
                            var_208 = rcx_11
                            void* rsi_3 = *(*(r14_4 + 0x38) + (sx.q(i_2) << 3))
                            int32_t var_204_1 = (zx.d(i_2.b) << 4 | (rax_11 & 0xf)) << 0x18 | rdx_3
                            int64_t j = var_208.q
                            int64_t rdx_19 = (j u>> 0x21 ^ j) * -0xae502812aa7333
                            int64_t r9_8 = (rdx_19 u>> 0x21 ^ rdx_19) * -0x3b314601e57a13ad
                            int32_t r9_9 = *(*(rsi_3 + 0x80)
                                + (((r9_8 u>> 0x21 ^ r9_8) & zx.q(*(rsi_3 + 0x74))) << 2))
                            
                            if (r9_9 == 0xffffffff)
                            label_14151a974:
                                r9_9 = -1
                            else
                                while (*(*(rsi_3 + 0x90) + (sx.q(r9_9) << 3)) != j)
                                    r9_9 = *(*(rsi_3 + 0x88) + (zx.q(r9_9) << 2))
                                    
                                    if (r9_9 == 0xffffffff)
                                        goto label_14151a974
                            
                            char j_6 = *(r14_4 + 0x26)
                            
                            if (j_6 != 0)
                                void* r11_3 = r14_4 + 0x30
                                uint64_t j_4 = zx.q(j_6)
                                void* r8_13 = &var_140
                                void* r10_5 = rsi_3 + 0x178
                                uint64_t j_1
                                
                                do
                                    if (zx.d(*r11_3) == i_2)
                                        *(r8_13 - 0x18) = *(*(r10_5 - 0xc0) + 0x10)
                                        *(r8_13 - 0x10) = *r10_5
                                        uint32_t rax_31 = zx.d(r9_9.w)
                                        int32_t temp2_2 = *(rsi_3 + 0x1b8)
                                        *r8_13 = 0
                                        r10_5 += 8
                                        *(r8_13 - 8) = modu.dp.d(0:rax_31, temp2_2)
                                        *(r8_13 - 4) = divu.dp.d(0:rax_31, temp2_2)
                                    
                                    r11_3 += 1
                                    r8_13 += 0x20
                                    j_1 = j_4
                                    j_4 -= 1
                                while (j_1 != 1)
                            
                            rsi_1 = var_240_1
                        else
                            *(var_210 + (zx.q(i_2 + (r15_1 << 3).d) << 2)) =
                                *(&var_180 + (zx.q(i_2) << 2))
                        
                        i_2 += 1
                        r15_1 = zx.q(var_244)
                    while (i_2 u< zx.d(*(r14_4 + 0x2f)))
                    
                    r12_1 = var_21c_1
                
                int64_t* rcx_12 = *(r14_4 + 0x48)
                var_250 = &var_158
                var_258 = var_1c8
                var_260.d = rdx_3
                int32_t var_270_1
                var_270_1.b = r12_1.b
                char var_278_1
                var_278_1.q = &var_23c
                int64_t i_3
                i_3, rdx_5 = (*(*rcx_12 + 0x18))(rcx_12, arg2, zx.q(arg3), 0, var_278_1, var_270_1, 
                    r8_2, var_260, var_258, var_250, var_248)
                
                if (i_3 != 0)
                    int64_t* r8_15 = *(arg1 + 0x300)
                    int64_t r9_10 = sx.q(arg1[0xc2])
                    rdx_5 = r8_15
                    void* rax_37 = &r8_15[r9_10]
                    
                    if (r8_15 != rax_37)
                        while (*rdx_5 != i_3)
                            rdx_5 = &rdx_5[1]
                            
                            if (rdx_5 == rax_37)
                                goto label_14151aa90
                    
                    if (r8_15 == rax_37 || ((rdx_5 - r8_15) s>> 3).d == 0xffffffff)
                    label_14151aa90:
                        int32_t rax_38 = (r9_10 + 1).d
                        arg1[0xc2] = rax_38
                        
                        if (rax_38 s> arg1[0xc3])
                            sub_1405a4d70(&arg1[0xc0])
                        
                        *((r9_10 << 3) + *(arg1 + 0x300)) = i_3
                
                r15_1 = zx.q(var_244)
                rdx_5.b = 1
                rdi = arg1
        
        if (r15_1.d u< r11_1 && rdx_5.b == 0)
            int64_t rsi_5 = sx.q(rdi[0x70])
            int32_t rax_42 = (rsi_5 + 1).d
            rdi[0x70] = rax_42
            
            if (rax_42 s> rdi[0x71])
                sub_1405a4d70(&rdi[0x6e])
            
            *(*(rdi + 0x1b8) + (rsi_5 << 3)) = rbx_2
        
        r12 = var_1e0
        r15_1 = zx.q(r15_1.d + 1)
        var_244 = r15_1.d
        rdx_1 = 1
    while (r15_1.d u< *(r12 + 0xb028))
    
    r13_3 = var_210

int32_t* r14_6 = arg1
uint64_t rdi_5 = 0

if (*(r12 + 0xb034) u> 0)
    do
        int64_t rdx_32 = *(*(r12 + 0xb010) + (rdi_5 << 3))
        uint32_t rbx_5 = (rdx_32 u>> 0x20).d
        void* r8_17 = *(*(r14_6 + 0x88) + (zx.q((zx.q(rbx_5) u>> 0x10).b) << 3))
        sub_14150be40(r8_17 + 0x20, *(r14_6 + (zx.q(rdx_32.d) u>> 0x1c << 3) + 8), r8_17, 
            (rbx_5 u>> 0x1c).b, (rdx_32.d u>> 0x18).b & 0xf, rdx_32.d & 0xffffff, 
            (rbx_5 u>> 0x18).b & 0xf, (rdx_32 u>> 0x20).w)
        rdi_5 = zx.q(rdi_5.d + 1)
    while (rdi_5.d u< *(r12 + 0xb034))

uint64_t rbx_7 = 0

if (*(r12 + 0xb030) u> 0)
    do
        int64_t rdi_6 = *(*(r12 + 0xb008) + (rbx_7 << 3))
        uint64_t r9_14 = rdi_6 u>> 0x20
        int32_t rsi_6 = *(r13_3 + (zx.q((r9_14.d u>> 0x14 & 0xf) + (zx.d(r9_14.w) << 3)) << 2))
        
        if (rsi_6 != 0xffffffff)
            void* r8_20 = *(*((zx.q(*(*(r12 + 0xb000) + (zx.q(r9_14.w) << 3))) & 0x3fffff) * 0x60
                + *(r14_6 + 0x98) + 0x38) + ((zx.q((r9_14 u>> 0x14).d) & 0xf) << 3))
            sub_14150be40(r8_20 + 0x20, *(r14_6 + (zx.q(rdi_6.d) u>> 0x1c << 3) + 8), r8_20, 
                (r9_14.d u>> 0x18).b & 0xf, (rdi_6.d u>> 0x18).b & 0xf, rdi_6.d & 0xffffff, 
                (r9_14.d u>> 0x10).b & 0xf, rsi_6.w)
        
        rbx_7 = zx.q(rbx_7.d + 1)
    while (rbx_7.d u< *(r12 + 0xb030))

int32_t i_4 = 0
int32_t i_6 = 0

if (r14_6[0xbe] u> 0)
    do
        int32_t rdi_7 = 0
        int32_t var_244_1 = 0
        int32_t r9_16 = 0
        int32_t var_240_2 = 0
        int64_t r11_8 = sx.q(i_4) << 3
        int64_t rax_58 = *(r14_6 + 0x2f0)
        var_1c8 = r11_8
        void* rsi_7 = *(r11_8 + rax_58)
        void* var_188_1 = rsi_7
        int32_t rdx_41 = *(rsi_7 + 0x60)
        void* r10_11 = *(rsi_7 + 0x70)
        int32_t rax_60 = rdx_41 & 0x55555555
        int32_t rdx_43 = rdx_41 u>> 1 & 0x55555555
        void* var_1f8_2 = r10_11
        int32_t rcx_32 = (rax_60 u>> 1 ^ rax_60) & 0x33333333
        int32_t rax_64 = (rcx_32 u>> 2 ^ rcx_32) & 0xf0f0f0f
        int32_t rcx_36 = (rax_64 u>> 4 ^ rax_64) & 0xff00ff
        int32_t rax_71 = (rdx_43 u>> 1 ^ rdx_43) & 0x33333333
        int32_t rcx_40 = (rax_71 u>> 2 ^ rax_71) & 0xf0f0f0f
        int32_t rax_75 = (rcx_40 u>> 4 ^ rcx_40) & 0xff00ff
        int32_t r15_5 = rax_75 u>> 8 ^ rax_75
        int32_t rax_76 = *(rsi_7 + 0x90)
        var_1e0.d = r15_5
        
        if (rax_76 != 0)
            do
                int64_t rax_77 = *(rsi_7 + 0x78)
                int64_t* rdx_46 = (sx.q(r9_16) << 4) + *(rsi_7 + 0x88)
                uint64_t rcx_41 = zx.q(rdx_46[1].b)
                int32_t rbx_8 = *(rax_77 + (rcx_41 << 3))
                uint64_t rax_79 = zx.q(rbx_8) & 0x3fffff
                void* const rcx_44
                
                if (rax_79.d u< r14_6[0x28])
                    rcx_44 = rax_79 * 0x60 + *(r14_6 + 0x98)
                
                if (rax_79.d u>= r14_6[0x28] || *(rcx_44 + 0x5c) != (rbx_8 u>> 0x16).w)
                    rcx_44 = nullptr
                
                if (rcx_44 != 0)
                    char rax_82 = *(rdx_46 + 9)
                    uint32_t r11_9 = zx.d(*(rax_77 + (rcx_41 << 3) + 4))
                    uint32_t j_3 = *(rsi_7 + 0x5c)
                    int32_t r12_5 = zx.d(*(rcx_44 + 0x20)) * *(rcx_44 + 0x14)
                    int32_t rax_84 = zx.d(*(rcx_44 + 0x22)) * *(rcx_44 + 0x18)
                    uint32_t var_220_2 = r11_9
                    var_210.d = r12_5
                    uint32_t j_7 = zx.d(*(rcx_44 + 0x25))
                    
                    if (j_7 u<= j_3)
                        j_3 = j_7
                    
                    void* rax_85 = *rdx_46
                    int32_t rdx_48 = neg.d(r11_9)
                    uint32_t j_2 = j_3
                    j_3.b = 0
                    var_23c = rdx_48
                    char j_5 = 0
                    void* r14_8 = zx.q(r9_16) * 0xa8 + r10_11
                    
                    do
                        char rcx_45 = r11_9.b
                        uint32_t rax_88 = r12_5 u>> rcx_45
                        uint32_t r13_7 = 1
                        
                        if (rax_88 u>= 1)
                            r13_7 = rax_88
                        
                        uint32_t rax_90 = rax_84 u>> rcx_45
                        uint32_t rcx_46 = 1
                        int32_t r12_6 = 0
                        
                        if (rax_90 u>= 1)
                            rcx_46 = rax_90
                        
                        int32_t rax_91 = 0
                        int32_t var_234_2 = 0
                        uint32_t var_1e8_1 = rcx_46
                        
                        if (rcx_46 == 0)
                            goto label_14151b155
                        
                        do
                            int32_t rdi_8 = 0
                            
                            if (r13_7 != 0)
                                uint32_t r15_6 = zx.d(r11_9.b)
                                uint32_t r10_12 = zx.d((rax_91 << r11_9.b).w + r15_5.w)
                                uint32_t r8_23 = r15_6 << 0x18
                                uint32_t var_1f0_1 = r8_23
                                uint32_t var_1ec_1 = r10_12
                                
                                do
                                    uint32_t rcx_49 =
                                        zx.d((rdi_8 << r11_9.b).w + ((rcx_36 u>> 8).w ^ rcx_36.w))
                                    int32_t rdx_52 = (rcx_49 << 8 ^ rcx_49) & 0xff00ff
                                    int32_t rcx_53 = (r10_12 << 8 ^ r10_12) & 0xff00ff
                                    uint64_t rax_100 =
                                        (zx.q(rdx_52 << 4) ^ zx.q(rdx_52)) & 0xf0f0f0f
                                    int32_t rdx_55 = ((rax_100 << 2).d ^ rax_100.d) & 0x33333333
                                    uint64_t rax_104 =
                                        (zx.q(rcx_53 << 4) ^ zx.q(rcx_53)) & 0xf0f0f0f
                                    int32_t rcx_56 = ((rax_104 << 2).d ^ rax_104.d) & 0x33333333
                                    int32_t r10_19 = (((((rcx_56 * 2) ^ rcx_56 ^ rdx_55) * 2)
                                        ^ rdx_55) & 0x55555555) ^ (((rcx_56 * 2) ^ rcx_56) * 2)
                                    int32_t k = (r10_19 & 0xffffff) | r8_23
                                    int32_t rdx_56 = (k u>> 0x10 ^ k) * 0x85ebca6b
                                    int32_t rcx_63 = (rdx_56 u>> 0xd ^ rdx_56) * 0xc2b2ae35
                                    int32_t r8_24 = *(*(r14_8 + 0xc0) + (((zx.q(rcx_63) u>> 0x10
                                        ^ zx.q(rcx_63.w)) & zx.q(*(r14_8 + 0xb4))) << 2))
                                    
                                    if (r8_24 == 0xffffffff)
                                        goto label_14151b001
                                    
                                    while (*(*(r14_8 + 0xa0) + sx.q(r8_24) * 0x10) != k)
                                        r8_24 = *(*(r14_8 + 0xc8) + (zx.q(r8_24) << 2))
                                        
                                        if (r8_24 == 0xffffffff)
                                            goto label_14151affc
                                    
                                    if (r8_24 == 0xffffffff)
                                    label_14151affc:
                                        r9_16 = var_240_2
                                    label_14151b001:
                                        uint32_t rax_110 = zx.d(rdi_8.w)
                                        uint32_t rdx_62
                                        rdx_62.b = r11_9.b + var_23c.b
                                        int64_t k_1
                                        k_1.d = rbx_8
                                        int32_t rcx_73 = (rax_110 << 8 ^ rax_110) & 0xff00ff
                                        uint64_t rax_114 =
                                            (zx.q(rcx_73 << 4) ^ zx.q(rcx_73)) & 0xf0f0f0f
                                        uint32_t rax_115 = zx.d(var_234_2.w)
                                        int32_t r8_27 = ((rax_114 << 2).d ^ rax_114.d) & 0x33333333
                                        int32_t rcx_77 = (rax_115 << 8 ^ rax_115) & 0xff00ff
                                        uint64_t rax_119 =
                                            (zx.q(rcx_77 << 4) ^ zx.q(rcx_77)) & 0xf0f0f0f
                                        int32_t rcx_80 = ((rax_119 << 2).d ^ rax_119.d) & 0x33333333
                                        k_1:4.d = ((((rdx_62 & 0xf) | zx.d(rax_82) << 4) << 0x17
                                            | (((rcx_80 * 2) ^ rcx_80) & 0x555555)) * 2)
                                            | (((r8_27 * 2) ^ r8_27) & 0x555555)
                                        int64_t rcx_84 = (k_1 u>> 0x21 ^ k_1) * -0xae502812aa7333
                                        int64_t r8_31 =
                                            (rcx_84 u>> 0x21 ^ rcx_84) * -0x3b314601e57a13ad
                                        int32_t rcx_87 = *(*(rax_85 + 0x80) + (((r8_31 u>> 0x21
                                            ^ r8_31) & zx.q(*(rax_85 + 0x74))) << 2))
                                        
                                        if (rcx_87 == 0xffffffff)
                                        label_14151b10b:
                                            r12_6 += 1
                                        else
                                            while (*(*(rax_85 + 0x90) + (sx.q(rcx_87) << 3)) != k_1)
                                                rcx_87 = *(*(rax_85 + 0x88) + (zx.q(rcx_87) << 2))
                                                
                                                if (rcx_87 == 0xffffffff)
                                                    goto label_14151b10b_1
                                            
                                            if (rcx_87 == 0xffffffff)
                                            label_14151b10b_1:
                                                r12_6 += 1
                                            else
                                                sub_14150be40(rax_85 + 0x20, var_1f8_2, rax_85, 
                                                    r9_16.b, r15_6.b, r10_19, r15_6.b, rcx_87.w)
                                                r11_9 = var_220_2
                                    
                                    r8_23 = var_1f0_1
                                    rdi_8 += 1
                                    r9_16 = var_240_2
                                    r10_12 = var_1ec_1
                                while (rdi_8 u< r13_7)
                                
                                rax_91 = var_234_2
                                rcx_46 = var_1e8_1
                                r15_5 = var_1e0.d
                            
                            rax_91 += 1
                            var_234_2 = rax_91
                        while (rax_91 u< rcx_46)
                        
                        rdx_48 = var_23c
                        j_3 = zx.d(j_5)
                        
                        if (r12_6 == 0)
                            rdi_7 = var_244_1
                        label_14151b155:
                            
                            if (j_3.b == 0)
                                j_3.b = 1
                                j_5 = 1
                                var_244_1 = rdi_7 + 1
                        
                        rdi_7 = var_244_1
                        r11_9 += 1
                        r12_5 = var_210.d
                        var_220_2 = r11_9
                    while (rdx_48 + r11_9 u<= j_2)
                    
                    r10_11 = var_1f8_2
                    rsi_7 = var_188_1
                    r14_6 = arg1
                else
                    rdi_7 += 1
                    var_244_1 = rdi_7
                
                rax_76 = *(rsi_7 + 0x90)
                r9_16 += 1
                var_240_2 = r9_16
            while (r9_16 u< rax_76)
            
            i_4 = i_6
            r11_8 = var_1c8
        
        if (rdi_7 u>= rax_76)
            int32_t rdx_76 = r14_6[0xbe]
            int32_t rax_132 = rdx_76 - i_4 - 1
            
            if (rax_132 s>= 1)
                rax_132 = 1
            
            if (rax_132 != 0)
                int64_t rcx_90 = *(r14_6 + 0x2f0)
                memcpy(rcx_90 + r11_8, rcx_90 + (sx.q(rdx_76 - rax_132) << 3), rax_132 << 3)
                rdx_76 = r14_6[0xbe]
                i_4 = i_6
            
            r14_6[0xbe] = rdx_76 - 1
        else
            i_4 += 1
            i_6 = i_4
    while (i_4 u< r14_6[0xbe])

int32_t rdx_79 = r14_6[0xbe]

if (r14_6[0xbf] != rdx_79)
    sub_1405c5570(&r14_6[0xbc], rdx_79)

int64_t rdi_10 = 0
int64_t* rbx_9 = *(r14_6 + 0x300)
uint64_t rsi_10 = sx.q(r14_6[0xc2]) << 3 u>> 3

if (rbx_9 u> &rbx_9[sx.q(r14_6[0xc2])])
    rsi_10 = 0

if (rsi_10 != 0)
    do
        int64_t* rcx_93 = *rbx_9
        (**rcx_93)(rcx_93, arg2)
        rdi_10 += 1
        rbx_9 = &rbx_9[1]
    while (rdi_10 != rsi_10)

int32_t rax_138 = r14_6[0xc3]
r14_6[0xc2] = 0

if (rax_138 s< 0 && rax_138 != 0)
    sub_1405c5570(&r14_6[0xc0], 0)

int32_t* result = arg1
void** rbx_10 = &result[2]
int64_t i_5

do
    void* rcx_95 = *rbx_10
    
    if (rcx_95 != 0)
        sub_1414ff710(rcx_95, result, arg2)
        result = arg1
    
    rbx_10 = &rbx_10[1]
    i_5 = i_7
    i_7 -= 1
while (i_5 != 1)
*result += 1

if (var_1a0 == 0)
    void* rax_139 = var_1b8
    char var_1a0_1 = 1
    *(rax_139 + 0x20) -= 1
    void* rcx_96 = var_1b8
    
    if (rax_3 != *(rcx_96 + 0x10))
        sub_140b16b40(rcx_96, rax_3)
        rcx_96 = var_1b8
    
    *rcx_96 = rax_2
    result = result_1
    *(var_1b8 + 0x18) = result

__security_check_cookie(rax_1 ^ &var_298)
return result
