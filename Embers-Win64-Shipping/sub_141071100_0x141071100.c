// 函数: sub_141071100
// 地址: 0x141071100
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void var_388
int64_t rax_1 = __security_cookie ^ &var_388
void* rax_5 = *(arg2 + 0x78)
void* const var_268

if (arg4 == 0)
    var_268 = nullptr
else
    var_268 = *(arg4 + 0x110)

int64_t var_120 = 0
int32_t var_118 = 0
int32_t var_114 = 2
void var_110
memset(&var_110, 0, 0x50)
char var_4f = arg7[7].b
int32_t var_c0 = 0
int64_t var_88 = 0
int32_t var_80 = 0
int32_t var_70 = 0
int64_t var_150 = 0
int32_t var_138 = 0
int32_t var_134 = *(arg2 + 0x9c) u>> 7 & 0x3f
int32_t var_7c = 4
int32_t var_168 = 0xffffffff
char rax_12 = arg12 & 1

if ((arg12 & 2) != 0)
    rax_12 = 2

uint32_t rcx_2 = zx.d(rax_12)
int128_t var_1a8
__builtin_memset(&var_1a8, 0, 0x30)
int128_t var_160 = zx.o(0)
int128_t var_178 = data_142d3f800
int128_t var_148 = *(arg5 + 0x170)
int64_t* rdx

if (rax_12 == 0)
    rdx = 0x118
else if (rcx_2 == 1)
    rdx = 0x120
else if (rcx_2 != 2)
    rdx = 0x118
else
    rdx = 0x128

int64_t rax_13 = *arg8
int128_t zmm0 = *(arg8 + 0x40)
int64_t var_218 = rax_13
void* rax_14 = arg8[1]
void* var_210 = rax_14
int64_t var_208 = arg8[2]
int64_t var_200 = arg8[3]
int64_t var_1f8 = arg8[4]
int128_t var_1d8 = zmm0
int64_t var_1f0 = arg8[5]
int64_t var_1e8 = arg8[6]
int128_t var_1c8 = *(arg8 + 0x50)
int64_t var_1e0 = arg8[7]
int128_t var_1b8 = *(arg8 + 0x60)
void var_130
sub_141298f00(&var_130, *(rdx + rax_5), &var_218, &var_1a8)
int64_t rax_21

if (arg9 == 0)
    if (arg10 == 0)
        rax_21 = data_1439b5590
    else
        rax_21 = data_1439b5578
        
        if (arg10 != 2)
            rax_21 = data_1439b5560
else if (arg9 == 1)
    if (arg10 == 0)
        rax_21 = data_1439b5548
    else
        rax_21 = data_1439b5530
        
        if (arg10 != 2)
            rax_21 = data_1439b5518
else if (arg10 == 0)
    rax_21 = data_14395da18
else
    rax_21 = data_1439b5500
    
    if (arg10 != 2)
        rax_21 = data_1439b54e8

var_160:8.q = rax_21
var_160.q = *arg7
int64_t var_150_1 = arg7[1]
void var_b8
sub_1419cf510(rax_5, *(arg1 + 0x10), rax_12, &var_b8)
bool cond:3 = *arg8 == 0
int32_t var_318 = 0
char var_50 = *(zx.q(rax_12) + rax_5 + 0xa2)
uint64_t var_290
uint64_t rax_24
uint64_t rcx_9
int32_t r8_2

if (not(cond:3))
    sub_141097100(&var_130, &var_290, 0, &var_318)
    void* rbx_2 = *(arg1 + 8)
    void* rdi_1 = *arg8
    int64_t* var_348_1 = &var_290
    rcx_9, r8_2 = sub_141456250(rdi_1, rbx_2, *(arg1 + 0x10), arg4, arg5, arg6, arg7, arg13)
    int16_t r11_1 = *(rdi_1 + 0x140)
    int64_t rbx_3
    int32_t r9_5
    int64_t r10_1
    
    if (rbx_2 == 0)
        rbx_3 = arg7[5]
        
        if (r11_1 != 0xffff)
            rax_24 = var_290
            r10_1 = *rax_24
            
            if ((r10_1.b & 1) != 0)
                r10_1 = (r10_1 s>> 1) + rax_24
            
            r8_2 = 0
            r9_5 = *(rax_24 + 8) - 1
            
            if (r9_5 s> 0)
                do
                    int32_t temp1_1
                    int32_t temp2_1
                    temp1_1:temp2_1 = sx.q(r9_5 + r8_2)
                    rax_24 = zx.q((temp2_1 - temp1_1) s>> 1)
                    
                    if (*(r10_1 + (sx.q(rax_24.d) << 2)) u>= r11_1)
                        r9_5 = rax_24.d
                    else if (r8_2 != rax_24.d)
                        r8_2 = rax_24.d
                    else
                        r8_2 += 1
                while (r8_2 s< r9_5)
            
        label_14107154a:
            
            if (r8_2 == r9_5)
                rcx_9 = sx.q(r8_2)
                uint64_t var_288
                
                if (*(r10_1 + (rcx_9 << 2)) == r11_1 && r8_2 s>= 0)
                    *(var_288 + (rcx_9 << 3)) = rbx_3
    else
        rbx_3 = *(rbx_2 + 0x48)
        
        if (r11_1 != 0xffff)
            rax_24 = var_290
            r10_1 = *rax_24
            
            if ((r10_1.b & 1) != 0)
                r10_1 = (r10_1 s>> 1) + rax_24
            
            r8_2 = 0
            r9_5 = *(rax_24 + 8) - 1
            
            if (r9_5 s> 0)
                do
                    int32_t temp3_1
                    int32_t temp4_1
                    temp3_1:temp4_1 = sx.q(r9_5 + r8_2)
                    rax_24 = zx.q((temp4_1 - temp3_1) s>> 1)
                    
                    if (*(r10_1 + (sx.q(rax_24.d) << 2)) u>= r11_1)
                        r9_5 = rax_24.d
                    else if (r8_2 != rax_24.d)
                        r8_2 = rax_24.d
                    else
                        r8_2 += 1
                while (r8_2 s< r9_5)
            
            goto label_14107154a

void* rdi_2 = arg8[2]
void* rbx_4 = arg8[4]
rcx_9.b = rdi_2 != 0
rax_24.b = rbx_4 != 0
rcx_9.b &= rax_24.b
char var_314 = rcx_9.b
void* const var_2b8
void* const var_280
void* rdi_3
void* r13_1

if (rcx_9.b == 0)
    rdi_3 = arg1
    r13_1 = arg4
else
    r8_2.b = 1
    sub_141097100(&var_130, &var_2b8, r8_2.b, &var_318)
    sub_141097100(&var_130, &var_280, 2, &var_318)
    int64_t* var_348_2 = &var_2b8
    sub_141456250(rdi_2, *(arg1 + 8), *(arg1 + 0x10), arg4, arg5, arg6, arg7, arg13)
    rdi_3 = arg1
    r13_1 = arg4
    int64_t* var_348_3 = &var_280
    sub_141456250(rbx_4, *(rdi_3 + 8), *(rdi_3 + 0x10), r13_1, arg5, arg6, arg7, arg13)

uint64_t rax_34 = arg8[6]
var_290 = rax_34
int64_t var_2c8

if (rax_34 != 0)
    r8_2.b = 3
    sub_141097100(&var_130, &var_2c8, r8_2.b, &var_318)
    void* rbx_5 = *(rdi_3 + 8)
    int64_t* var_348_4 = &var_2c8
    sub_141456250(arg8[6], rbx_5, *(rdi_3 + 0x10), r13_1, arg5, arg6, arg7, arg13)
    int16_t r11_2 = *(arg8[6] + 0x148)
    int64_t rbx_6
    int32_t r8_8
    int32_t r9_14
    void* r10_4
    
    if (rbx_5 == 0)
        rbx_6 = arg7[5]
        
        if (r11_2 != 0xffff)
            void** rax_42 = var_2c8
            r10_4 = *rax_42
            
            if ((r10_4.b & 1) != 0)
                r10_4 = (r10_4 s>> 1) + rax_42
            
            r8_8 = 0
            r9_14 = rax_42[1].d - 1
            
            if (r9_14 s> 0)
                do
                    int32_t temp7_1
                    int32_t temp8_1
                    temp7_1:temp8_1 = sx.q(r9_14 + r8_8)
                    int32_t rax_46 = (temp8_1 - temp7_1) s>> 1
                    
                    if (*(r10_4 + (sx.q(rax_46) << 2)) u>= r11_2)
                        r9_14 = rax_46
                    else if (r8_8 != rax_46)
                        r8_8 = rax_46
                    else
                        r8_8 += 1
                while (r8_8 s< r9_14)
            
        label_14107176a:
            
            if (r8_8 == r9_14)
                int64_t rcx_20 = sx.q(r8_8)
                int64_t var_2c0
                
                if (*(r10_4 + (rcx_20 << 2)) == r11_2 && r8_8 s>= 0)
                    *(var_2c0 + (rcx_20 << 3)) = rbx_6
    else
        rbx_6 = *(rbx_5 + 0x48)
        
        if (r11_2 != 0xffff)
            int64_t* rax_37 = var_2c8
            r10_4 = *rax_37
            
            if ((r10_4.b & 1) != 0)
                r10_4 = (r10_4 s>> 1) + rax_37
            
            r8_8 = 0
            r9_14 = rax_37[1].d - 1
            
            if (r9_14 s> 0)
                do
                    int32_t temp5_1
                    int32_t temp6_1
                    temp5_1:temp6_1 = sx.q(r9_14 + r8_8)
                    int32_t rax_41 = (temp6_1 - temp5_1) s>> 1
                    
                    if (*(r10_4 + (sx.q(rax_41) << 2)) u>= r11_2)
                        r9_14 = rax_41
                    else if (r8_8 != rax_41)
                        r8_8 = rax_41
                    else
                        r8_8 += 1
                while (r8_8 s< r9_14)
            
            goto label_14107176a
    void* rcx_21 = arg8[6]
    int16_t* r8_9 = rcx_21 + 0x140
    
    if (rcx_21 == 0)
        r8_9 = nullptr
    
    sub_141227bc0(r13_1, &arg13[2], r8_9, &var_2c8)

void* rbx_7 = arg8[8]

if (rbx_7 != 0)
    r8_2.b = 4
    sub_141097100(&var_130, &var_2b8, r8_2.b, &var_318)
    int64_t* var_348_5 = &var_2b8
    sub_141456250(rbx_7, *(rdi_3 + 8), *(rdi_3 + 0x10), r13_1, arg5, arg6, arg7, arg13)

void* r9_19 = arg2
int64_t rdx_19 = 0
int32_t rcx_25 = 0
var_318 = 0
int32_t r8_11 = *(r9_19 + 0x70)
int32_t var_2a0 = r8_11

if (r8_11 s> 0)
    int64_t rax_49 = 1
    int64_t r10_7 = arg3
    var_2c8 = 1
    int64_t var_258_1 = 0
    
    do
        if ((r10_7 & rax_49) != 0)
            void* rax_50 = *(r9_19 + 0x68)
            void* rsi_1 = r9_19
            int64_t* rcx_26 = *(rdi_3 + 0x20)
            
            if (rax_50 != 0)
                rsi_1 = rax_50
            
            void* rsi_3 = rsi_1 + rdx_19
            void* var_298_1 = rsi_3
            void* rax_52 = (*(*rcx_26 + 8))(rcx_26, &var_130)
            int64_t r10_8 = rax_13
            int32_t r12_1 = 0
            int32_t r15_1 = 0
            int64_t* var_360
            int64_t* var_358
            void** var_330
            void* var_328
            void* r14_1
            
            if (r10_8 == 0)
                r14_1 = rax_52 + 0x78
            else
                uint64_t rdx_24 = ((zx.q(*(rax_52 + 0x70)) & 1) * 0x101010101010101) u>> 0x38
                void* const var_250
                
                if (rdx_24.d u< 1)
                    var_250 = 0x98
                    int64_t var_248_2 = 0
                else
                    void* rax_53 = *(rax_52 + 0x10)
                    void* rcx_27 = rax_52
                    
                    if (rax_53 != 0)
                        rcx_27 = rax_53
                    
                    void* rdi_4 = *(rcx_27 + (rdx_24 << 3) - 8)
                    int32_t rax_54 = *(rdi_4 + 0x28)
                    int32_t rax_55 = rax_54 + 7
                    
                    if (rax_54 + 7 s< 0)
                        rax_55 += 7
                    
                    int64_t i_4 = sx.q(*(rdi_4 + 0x38))
                    int32_t r9_20 = 0
                    
                    if (i_4 s> 0)
                        int64_t rcx_31 = 0
                        int64_t i
                        
                        do
                            void* rax_58 = *(rdi_4 + 0x30)
                            
                            if ((*(rdi_4 + 0x30) & 1) != 0)
                                rax_58 = (rax_58 s>> 1) + rdi_4 + 0x30
                            
                            uint32_t rax_59 = zx.d(*(rax_58 + rcx_31 + 2))
                            rcx_31 += 0x18
                            r9_20 += rax_59
                            i = i_4
                            i_4 -= 1
                        while (i != 1)
                        r10_8 = rax_13
                    
                    int64_t* rax_60 = rax_52 + 0x20
                    r12_1 = ((rax_55 s>> 3) + ((*(rdi_4 + 0x18) + *(rdi_4 + 8) + rax_54) << 3) + 7
                        + r9_20) & 0xfffffff8
                    
                    if (*(rax_52 + 0x72) u> 0x50)
                        rax_60 = *rax_60
                    
                    rsi_3 = var_298_1
                    r15_1 = r12_1
                    var_250 = rdi_4
                    rdi_3 = arg1
                    int64_t* var_248_1 = rax_60
                
                r14_1 = rax_52 + 0x78
                var_328 = r14_1
                var_330 = &var_250
                int64_t* var_338_1 = arg13
                void* var_340_1 = rsi_3
                void* var_348_6 = arg2
                var_358.d = *(rdi_3 + 0x10)
                var_360.b = rax_12
                sub_141455490(r10_8, *(rax_14 + 0x20), *(rdi_3 + 8), (*(rdi_3 + 0x18)).b, rax_5.d, 
                    var_360, var_358, arg4)
            
            if (var_314 != 0)
                uint32_t r14_2 = zx.d(*(rax_52 + 0x70))
                uint64_t rcx_37 = zx.q(r14_2) & 3
                uint64_t rcx_38 = rcx_37 - (zx.q(rcx_37.d) u>> 1)
                int64_t rax_69 = (rcx_38 u>> 2 & 0x3333333333333333) + (rcx_38 & 0x3333333333333333)
                uint64_t rdx_32 =
                    ((((rax_69 u>> 4) + rax_69) & 0xf0f0f0f0f0f0f0f) * 0x101010101010101) u>> 0x38
                void* const var_240
                int32_t rsi_5
                
                if (rdx_32.d u< 1)
                    var_240 = 0x98
                    rsi_5 = r15_1
                    int64_t var_238_2 = 0
                else
                    void* rax_70 = *(rax_52 + 0x10)
                    void* rcx_40 = rax_52
                    
                    if (rax_70 != 0)
                        rcx_40 = rax_70
                    
                    void* rdi_5 = *(rcx_40 + (rdx_32 << 3) - 8)
                    int32_t rax_71 = *(rdi_5 + 0x28)
                    int32_t rax_72 = rax_71 + 7
                    
                    if (rax_71 + 7 s< 0)
                        rax_72 += 7
                    
                    int32_t r9_22 = 0
                    int64_t i_5 = sx.q(*(rdi_5 + 0x38))
                    
                    if (i_5 s> 0)
                        int64_t rcx_44 = 0
                        int64_t i_1
                        
                        do
                            void* rax_75 = *(rdi_5 + 0x30)
                            
                            if ((*(rdi_5 + 0x30) & 1) != 0)
                                rax_75 = (rax_75 s>> 1) + rdi_5 + 0x30
                            
                            uint32_t rax_76 = zx.d(*(rax_75 + rcx_44 + 2))
                            rcx_44 += 0x18
                            r9_22 += rax_76
                            i_1 = i_5
                            i_5 -= 1
                        while (i_1 != 1)
                    
                    void* rcx_45 = rax_52 + 0x20
                    r12_1 += ((rax_72 s>> 3) + ((*(rdi_5 + 0x18) + *(rdi_5 + 8) + rax_71) << 3) + 7
                        + r9_22) & 0xfffffff8
                    
                    if (*(rax_52 + 0x72) u> 0x50)
                        rcx_45 = *rcx_45
                    
                    rsi_5 = r12_1
                    var_240 = rdi_5
                    rdi_3 = arg1
                    void* var_238_1 = sx.q(r15_1) + rcx_45
                
                uint64_t r14_3 = zx.q(r14_2) & 7
                int64_t r14_4 = r14_3 - (zx.q(r14_3.d) u>> 1 & 0x5555555555555555)
                int64_t rax_88 = (r14_4 u>> 2 & 0x3333333333333333) + (r14_4 & 0x3333333333333333)
                uint64_t rdx_39 =
                    ((((rax_88 u>> 4) + rax_88) & 0xf0f0f0f0f0f0f0f) * 0x101010101010101) u>> 0x38
                void* const var_230
                
                if (rdx_39.d u< 1)
                    var_230 = 0x98
                    r15_1 = rsi_5
                    int64_t var_228_2 = 0
                else
                    void* rax_89 = *(rax_52 + 0x10)
                    void* rcx_46 = rax_52
                    
                    if (rax_89 != 0)
                        rcx_46 = rax_89
                    
                    void* rdi_6 = *(rcx_46 + (rdx_39 << 3) - 8)
                    int32_t rax_90 = *(rdi_6 + 0x28)
                    int32_t rax_91 = rax_90 + 7
                    
                    if (rax_90 + 7 s< 0)
                        rax_91 += 7
                    
                    int32_t r9_23 = 0
                    int64_t i_6 = sx.q(*(rdi_6 + 0x38))
                    
                    if (i_6 s> 0)
                        int64_t rcx_50 = 0
                        int64_t i_2
                        
                        do
                            void* rax_94 = *(rdi_6 + 0x30)
                            
                            if ((*(rdi_6 + 0x30) & 1) != 0)
                                rax_94 = (rax_94 s>> 1) + rdi_6 + 0x30
                            
                            uint32_t rax_95 = zx.d(*(rax_94 + rcx_50 + 2))
                            rcx_50 += 0x18
                            r9_23 += rax_95
                            i_2 = i_6
                            i_6 -= 1
                        while (i_2 != 1)
                    
                    void* rcx_51 = rax_52 + 0x20
                    r12_1 += ((rax_91 s>> 3) + ((*(rdi_6 + 0x18) + *(rdi_6 + 8) + rax_90) << 3) + 7
                        + r9_23) & 0xfffffff8
                    r15_1 = r12_1
                    
                    if (*(rax_52 + 0x72) u> 0x50)
                        rcx_51 = *rcx_51
                    
                    var_230 = rdi_6
                    rdi_3 = arg1
                    void* var_228_1 = sx.q(rsi_5) + rcx_51
                
                r14_1 = rax_52 + 0x78
                rsi_3 = var_298_1
                void* var_328_1 = r14_1
                void** var_330_1 = &var_240
                int64_t* var_338_2 = arg13
                void* var_340_2 = rsi_3
                void* var_348_7 = arg2
                var_358.d = *(rdi_3 + 0x10)
                var_360.b = 0
                sub_141455490(arg8[2], *(arg8[3] + 0x20), *(rdi_3 + 8), (*(rdi_3 + 0x18)).b, 
                    rax_5.d, var_360, var_358, arg4)
                var_328 = r14_1
                var_330 = &var_230
                int64_t* var_338_3 = arg13
                void* var_340_3 = rsi_3
                void* var_348_8 = arg2
                var_358.d = *(rdi_3 + 0x10)
                var_360.b = 0
                sub_141455490(arg8[4], *(arg8[5] + 0x20), *(rdi_3 + 8), (*(rdi_3 + 0x18)).b, 
                    rax_5.d, var_360, var_358, arg4)
            
            int64_t* r12_4
            
            if (var_290 == 0)
                r12_4 = arg8
            else
                uint64_t rcx_57 = zx.q(*(rax_52 + 0x70)) & 0xf
                int64_t rcx_58 = rcx_57 - (zx.q(rcx_57.d) u>> 1 & 0x5555555555555555)
                int64_t rax_111 =
                    (rcx_58 u>> 2 & 0x3333333333333333) + (rcx_58 & 0x3333333333333333)
                uint64_t rdx_50 =
                    ((((rax_111 u>> 4) + rax_111) & 0xf0f0f0f0f0f0f0f) * 0x101010101010101) u>> 0x38
                void* rax_120
                
                if (rdx_50.d u< 1)
                    var_280 = 0x98
                    rax_120 = nullptr
                else
                    void* rax_112 = *(rax_52 + 0x10)
                    void* rcx_60 = rax_52
                    
                    if (rax_112 != 0)
                        rcx_60 = rax_112
                    
                    void* rdi_7 = *(rcx_60 + (rdx_50 << 3) - 8)
                    int32_t rax_113 = *(rdi_7 + 0x28)
                    int32_t rax_114 = rax_113 + 7
                    
                    if (rax_113 + 7 s< 0)
                        rax_114 += 7
                    
                    int64_t i_7 = sx.q(*(rdi_7 + 0x38))
                    int32_t r9_26 = 0
                    
                    if (i_7 s> 0)
                        int64_t rcx_64 = 0
                        int64_t i_3
                        
                        do
                            void* rax_117 = *(rdi_7 + 0x30)
                            
                            if ((*(rdi_7 + 0x30) & 1) != 0)
                                rax_117 = (rax_117 s>> 1) + rdi_7 + 0x30
                            
                            uint32_t rax_118 = zx.d(*(rcx_64 + rax_117 + 2))
                            rcx_64 += 0x18
                            r9_26 += rax_118
                            i_3 = i_7
                            i_7 -= 1
                        while (i_3 != 1)
                    
                    void* rcx_65 = rax_52 + 0x20
                    
                    if (*(rax_52 + 0x72) u> 0x50)
                        rcx_65 = *rcx_65
                    
                    rsi_3 = var_298_1
                    int64_t rax_119 = sx.q(r15_1)
                    r15_1 = (((rax_114 s>> 3) + ((*(rdi_7 + 0x18) + *(rdi_7 + 8) + rax_113) << 3)
                        + 7 + r9_26) & 0xfffffff8) + r12_1
                    var_280 = rdi_7
                    rax_120 = rax_119 + rcx_65
                    rdi_3 = arg1
                
                r12_4 = arg8
                var_328 = r14_1
                var_330 = &var_280
                int64_t* var_338_4 = arg13
                void* var_340_4 = rsi_3
                void* var_348_9 = arg2
                void* var_278_1 = rax_120
                var_358.d = *(rdi_3 + 0x10)
                var_360.b = 0
                sub_141455490(r12_4[6], *(r12_4[7] + 0x20), *(rdi_3 + 8), (*(rdi_3 + 0x18)).b, 
                    rax_5.d, var_360, var_358, arg4)
            
            if (r12_4[8] != 0)
                uint64_t rcx_71 = zx.q(*(rax_52 + 0x70)) & 0x1f
                int64_t rcx_72 = rcx_71 - (zx.q(rcx_71.d) u>> 1 & 0x5555555555555555)
                int64_t rax_129 =
                    (rcx_72 u>> 2 & 0x3333333333333333) + (rcx_72 & 0x3333333333333333)
                uint64_t rcx_79 =
                    ((((rax_129 u>> 4) + rax_129) & 0xf0f0f0f0f0f0f0f) * 0x101010101010101) u>> 0x38
                void* rax_134
                
                if (rcx_79.d u< 1)
                    var_2b8 = 0x98
                    rax_134 = nullptr
                else
                    void* rax_130 = *(rax_52 + 0x10)
                    void* rdx_58 = rax_52
                    
                    if (rax_130 != 0)
                        rdx_58 = rax_130
                    
                    void* rcx_80 = rax_52 + 0x20
                    
                    if (*(rax_52 + 0x72) u> 0x50)
                        rcx_80 = *rcx_80
                    
                    var_2b8 = *(rdx_58 + ((rcx_79 - 1) << 3))
                    rax_134 = sx.q(r15_1) + rcx_80
                
                var_328 = r14_1
                var_330 = &var_2b8
                int64_t* var_338_5 = arg13
                void* var_340_5 = rsi_3
                void* var_348_10 = arg2
                void* var_2b0_1 = rax_134
                var_358.d = *(rdi_3 + 0x10)
                var_360.b = 0
                sub_141455490(r12_4[8], *(r12_4[9] + 0x20), *(rdi_3 + 8), (*(rdi_3 + 0x18)).b, 
                    rax_5.d, var_360, var_358, arg4)
            
            int32_t var_2a8
            int32_t var_2a4
            sub_14126c0d0(rdi_3, var_268, rsi_3, &var_2a4, &var_2a8)
            int128_t zmm0_1 = *(r12_4 + 0x40)
            int128_t zmm1_1 = *(r12_4 + 0x50)
            int64_t* rcx_86 = *(rdi_3 + 0x20)
            uint64_t r9_30 = zx.q(var_2a4)
            uint64_t r8_25 = zx.q(var_318)
            var_218 = *r12_4
            int64_t var_210_1 = r12_4[1]
            int64_t var_208_1 = r12_4[2]
            int64_t var_200_1 = r12_4[3]
            int64_t var_1f8_1 = r12_4[4]
            int64_t var_1f0_1 = r12_4[5]
            int64_t var_1e8_1 = r12_4[6]
            int64_t var_1e0_1 = r12_4[7]
            int128_t var_1d8_1 = zmm0_1
            var_358.d = arg10
            var_360.d = arg9
            int128_t var_1c8_1 = zmm1_1
            int128_t var_1b8_1 = *(r12_4 + 0x60)
            int32_t* var_368_11
            var_368_11.d = var_2a8
            (*(*rcx_86 + 0x10))(rcx_86, arg2, r8_25, r9_30, var_368_11, var_360, var_358, arg11, 
                &var_1a8, &var_218, rax_52, var_330, var_328)
            rax_49 = var_2c8
            rcx_25 = var_318
            rdx_19 = var_258_1
            r8_11 = var_2a0
            r9_19 = arg2
            r10_7 = arg3
        
        rcx_25 += 1
        rax_49 = rol.q(rax_49, 1)
        rdx_19 += 0x68
        var_318 = rcx_25
        var_258_1 = rdx_19
        var_2c8 = rax_49
    while (rcx_25 s< r8_11)

int128_t var_188
int64_t* rcx_87 = var_188:8.q

if (rcx_87 != 0)
    sub_1419d6470(rcx_87)

int64_t* rcx_88 = var_188.q

if (rcx_88 != 0)
    sub_1419d6470(rcx_88)

int128_t var_198
int64_t* rcx_89 = var_198:8.q

if (rcx_89 != 0)
    sub_1419d6470(rcx_89)

int64_t* rcx_90 = var_198.q

if (rcx_90 != 0)
    sub_1419d6470(rcx_90)

int64_t* rcx_91 = var_1a8:8.q

if (rcx_91 != 0)
    sub_1419d6470(rcx_91)

if (var_88 != 0)
    sub_140a74f90(var_88)

int64_t result = sub_14125cf90(&var_130)
__security_check_cookie(rax_1 ^ &var_388)
return result
