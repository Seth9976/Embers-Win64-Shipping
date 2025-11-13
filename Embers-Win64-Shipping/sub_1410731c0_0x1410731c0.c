// 函数: sub_1410731c0
// 地址: 0x1410731c0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void var_388
int64_t rax_1 = __security_cookie ^ &var_388
void* rcx_3 = *(arg2 + 0x78)
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
int32_t var_134 = *(arg2 + 0x9c) u>> 7 & 0x3f
int64_t var_88 = 0
int32_t var_80 = 0
int32_t var_70 = 0
int64_t var_150 = 0
int32_t var_138 = 0
int32_t var_7c = 4
int32_t var_168 = 0xffffffff
char rax_7 = arg12 & 1

if ((2 & arg12) != 0)
    rax_7 = 2

uint32_t rcx_6 = zx.d(rax_7)
int128_t var_1a8
__builtin_memset(&var_1a8, 0, 0x30)
int128_t var_160 = zx.o(0)
int128_t var_178 = data_142d3f800
int128_t var_148 = *(arg5 + 0x170)
int64_t* rdx

if (rax_7 == 0)
    rdx = 0x118
else if (rcx_6 == 1)
    rdx = 0x120
else if (rcx_6 != 2)
    rdx = 0x118
else
    rdx = 0x128

int64_t rax_8 = *arg8
int128_t zmm0 = *(arg8 + 0x40)
void* rdi_2 = arg8[2]
void* rbx_1 = arg8[4]
int64_t rdx_1 = *(rdx + rcx_3)
int64_t var_218 = rax_8
void* rax_9 = arg8[1]
void* var_210 = rax_9
int64_t var_200 = arg8[3]
int128_t var_1d8 = zmm0
int64_t var_1f0 = arg8[5]
int64_t var_1e8 = arg8[6]
int128_t var_1c8 = *(arg8 + 0x50)
int64_t var_1e0 = arg8[7]
void* var_208 = rdi_2
void* var_1f8 = rbx_1
int128_t var_1b8 = *(arg8 + 0x60)
void var_130
sub_141298f00(&var_130, rdx_1, &var_218, &var_1a8)
int64_t rax_14

if (arg9 == 0)
    if (arg10 == 0)
        rax_14 = data_1439b5590
    else
        rax_14 = data_1439b5578
        
        if (arg10 != 2)
            rax_14 = data_1439b5560
else if (arg9 == 1)
    if (arg10 == 0)
        rax_14 = data_1439b5548
    else
        rax_14 = data_1439b5530
        
        if (arg10 != 2)
            rax_14 = data_1439b5518
else if (arg10 == 0)
    rax_14 = data_14395da18
else
    rax_14 = data_1439b5500
    
    if (arg10 != 2)
        rax_14 = data_1439b54e8

var_160:8.q = rax_14
var_160.q = *arg7
int64_t var_150_1 = arg7[1]
void var_b8
sub_1419cf510(rcx_3, *(arg1 + 0x10), rax_7, &var_b8)
bool var_50 = *(zx.q(rax_7) + rcx_3 + 0xa2)
int32_t var_318 = 0
void** var_2b8

if (*arg8 != 0)
    sub_141097100(&var_130, &var_2b8, 0, &var_318)
    void* rbx_2 = *(arg1 + 8)
    int64_t* var_348_1 = &var_2b8
    sub_141456250(*arg8, rbx_2, *(arg1 + 0x10), arg4, arg5, arg6, arg7, arg13)
    int16_t r11_1 = *(*arg8 + 0x146)
    int64_t rbx_3
    int32_t r8_4
    int32_t r9_5
    void* r10_1
    
    if (rbx_2 == 0)
        rbx_3 = arg7[5]
        
        if (r11_1 != 0xffff)
            void** rax_26 = var_2b8
            r10_1 = *rax_26
            
            if ((r10_1.b & 1) != 0)
                r10_1 = (r10_1 s>> 1) + rax_26
            
            r9_5 = rax_26[1].d - 1
            r8_4 = 0
            
            if (r9_5 s> 0)
                do
                    int32_t temp1_1
                    int32_t temp2_1
                    temp1_1:temp2_1 = sx.q(r9_5 + r8_4)
                    int32_t rax_30 = (temp2_1 - temp1_1) s>> 1
                    
                    if (*(r10_1 + (sx.q(rax_30) << 2)) u>= r11_1)
                        r9_5 = rax_30
                    else if (r8_4 != rax_30)
                        r8_4 = rax_30
                    else
                        r8_4 += 1
                while (r8_4 s< r9_5)
            
        label_14107360a:
            
            if (r8_4 == r9_5)
                int64_t rcx_20 = sx.q(r8_4)
                int64_t var_2b0
                
                if (*(r10_1 + (rcx_20 << 2)) == r11_1 && r8_4 s>= 0)
                    *(var_2b0 + (rcx_20 << 3)) = rbx_3
    else
        rbx_3 = *(rbx_2 + 0x48)
        
        if (r11_1 != 0xffff)
            int64_t* rax_21 = var_2b8
            r10_1 = *rax_21
            
            if ((r10_1.b & 1) != 0)
                r10_1 = (r10_1 s>> 1) + rax_21
            
            r9_5 = rax_21[1].d - 1
            r8_4 = 0
            
            if (r9_5 s> 0)
                do
                    int32_t temp3_1
                    int32_t temp4_1
                    temp3_1:temp4_1 = sx.q(r9_5 + r8_4)
                    int32_t rax_25 = (temp4_1 - temp3_1) s>> 1
                    
                    if (*(r10_1 + (sx.q(rax_25) << 2)) u>= r11_1)
                        r9_5 = rax_25
                    else if (r8_4 != rax_25)
                        r8_4 = rax_25
                    else
                        r8_4 += 1
                while (r8_4 s< r9_5)
            
            goto label_14107360a
    void* rcx_21 = *arg8
    int16_t* r8_5 = rcx_21 + 0x140
    
    if (rcx_21 == 0)
        r8_5 = nullptr
    
    sub_141227c90(arg4, &arg13[2], r8_5, &var_2b8)
    rbx_1 = arg8[4]
    rdi_2 = arg8[2]

void* const var_2a8
void* const var_280
void* rdi_4
void* r13_1

if ((rdi_2 != 0 & rbx_1 != 0) == 0)
    rdi_4 = arg1
    r13_1 = arg4
else
    sub_141097100(&var_130, &var_2a8, 1, &var_318)
    sub_141097100(&var_130, &var_280, 2, &var_318)
    int64_t* var_348_2 = &var_2a8
    sub_141456250(rdi_2, *(arg1 + 8), *(arg1 + 0x10), arg4, arg5, arg6, arg7, arg13)
    rdi_4 = arg1
    r13_1 = arg4
    int64_t* var_348_3 = &var_280
    sub_141456250(rbx_1, *(rdi_4 + 8), *(rdi_4 + 0x10), r13_1, arg5, arg6, arg7, arg13)

void** rax_34 = arg8[6]
var_2b8 = rax_34
int64_t var_2c8

if (rax_34 != 0)
    sub_141097100(&var_130, &var_2c8, 3, &var_318)
    void* rbx_4 = *(rdi_4 + 8)
    int64_t* var_348_4 = &var_2c8
    sub_141456250(arg8[6], rbx_4, *(rdi_4 + 0x10), r13_1, arg5, arg6, arg7, arg13)
    int16_t r11_2 = *(arg8[6] + 0x146)
    int64_t rbx_5
    int32_t r8_10
    int32_t r9_15
    void* r10_4
    
    if (rbx_4 == 0)
        rbx_5 = arg7[5]
        
        if (r11_2 != 0xffff)
            void** rax_42 = var_2c8
            r10_4 = *rax_42
            
            if ((r10_4.b & 1) != 0)
                r10_4 = (r10_4 s>> 1) + rax_42
            
            r9_15 = rax_42[1].d - 1
            r8_10 = 0
            
            if (r9_15 s> 0)
                do
                    int32_t temp5_1
                    int32_t temp6_1
                    temp5_1:temp6_1 = sx.q(r9_15 + r8_10)
                    int32_t rax_46 = (temp6_1 - temp5_1) s>> 1
                    
                    if (*(r10_4 + (sx.q(rax_46) << 2)) u>= r11_2)
                        r9_15 = rax_46
                    else if (r8_10 != rax_46)
                        r8_10 = rax_46
                    else
                        r8_10 += 1
                while (r8_10 s< r9_15)
            
        label_14107385a:
            
            if (r8_10 == r9_15)
                int64_t rcx_31 = sx.q(r8_10)
                int64_t var_2c0
                
                if (*(r10_4 + (rcx_31 << 2)) == r11_2 && r8_10 s>= 0)
                    *(var_2c0 + (rcx_31 << 3)) = rbx_5
    else
        rbx_5 = *(rbx_4 + 0x48)
        
        if (r11_2 != 0xffff)
            int64_t* rax_37 = var_2c8
            r10_4 = *rax_37
            
            if ((r10_4.b & 1) != 0)
                r10_4 = (r10_4 s>> 1) + rax_37
            
            r9_15 = rax_37[1].d - 1
            r8_10 = 0
            
            if (r9_15 s> 0)
                do
                    int32_t temp7_1
                    int32_t temp8_1
                    temp7_1:temp8_1 = sx.q(r9_15 + r8_10)
                    int32_t rax_41 = (temp8_1 - temp7_1) s>> 1
                    
                    if (*(r10_4 + (sx.q(rax_41) << 2)) u>= r11_2)
                        r9_15 = rax_41
                    else if (r8_10 != rax_41)
                        r8_10 = rax_41
                    else
                        r8_10 += 1
                while (r8_10 s< r9_15)
            
            goto label_14107385a
    void* rcx_32 = arg8[6]
    int16_t* r8_11 = rcx_32 + 0x140
    
    if (rcx_32 == 0)
        r8_11 = nullptr
    
    sub_141227c90(r13_1, &arg13[2], r8_11, &var_2c8)

void* rbx_6 = arg8[8]

if (rbx_6 != 0)
    sub_141097100(&var_130, &var_2a8, 4, &var_318)
    int64_t* var_348_5 = &var_2a8
    sub_141456250(rbx_6, *(rdi_4 + 8), *(rdi_4 + 0x10), r13_1, arg5, arg6, arg7, arg13)

void* r9_20 = arg2
int64_t rdx_21 = 0
int32_t rcx_36 = 0
var_318 = 0
int32_t r8_13 = *(r9_20 + 0x70)
int32_t var_290 = r8_13

if (r8_13 s> 0)
    int64_t rax_49 = 1
    int64_t r10_7 = arg3
    var_2c8 = 1
    int64_t var_258_1 = 0
    
    do
        if ((r10_7 & rax_49) != 0)
            void* rax_50 = *(r9_20 + 0x68)
            void* rsi_1 = r9_20
            int64_t* rcx_37 = *(rdi_4 + 0x20)
            
            if (rax_50 != 0)
                rsi_1 = rax_50
            
            void* rsi_3 = rsi_1 + rdx_21
            void* var_288_1 = rsi_3
            void* rax_52 = (*(*rcx_37 + 8))(rcx_37, &var_130)
            int64_t r10_8 = rax_8
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
                uint64_t rdx_26 = ((zx.q(*(rax_52 + 0x70)) & 1) * 0x101010101010101) u>> 0x38
                void* const var_250
                
                if (rdx_26.d u< 1)
                    var_250 = 0x98
                    int64_t var_248_2 = 0
                else
                    void* rax_53 = *(rax_52 + 0x10)
                    void* rcx_39 = rax_52
                    
                    if (rax_53 != 0)
                        rcx_39 = rax_53
                    
                    void* rdi_5 = *(rcx_39 + (rdx_26 << 3) - 8)
                    int32_t rax_54 = *(rdi_5 + 0x28)
                    int32_t rax_55 = rax_54 + 7
                    
                    if (rax_54 + 7 s< 0)
                        rax_55 += 7
                    
                    int64_t i_4 = sx.q(*(rdi_5 + 0x38))
                    int32_t r9_21 = 0
                    
                    if (i_4 s> 0)
                        int64_t rcx_43 = 0
                        int64_t i
                        
                        do
                            void* rax_58 = *(rdi_5 + 0x30)
                            
                            if ((*(rdi_5 + 0x30) & 1) != 0)
                                rax_58 = (rax_58 s>> 1) + rdi_5 + 0x30
                            
                            uint32_t rax_59 = zx.d(*(rax_58 + rcx_43 + 2))
                            rcx_43 += 0x18
                            r9_21 += rax_59
                            i = i_4
                            i_4 -= 1
                        while (i != 1)
                        r10_8 = rax_8
                    
                    int64_t* rax_60 = rax_52 + 0x20
                    r12_1 = ((rax_55 s>> 3) + ((*(rdi_5 + 0x18) + *(rdi_5 + 8) + rax_54) << 3) + 7
                        + r9_21) & 0xfffffff8
                    
                    if (*(rax_52 + 0x72) u> 0x50)
                        rax_60 = *rax_60
                    
                    rsi_3 = var_288_1
                    r15_1 = r12_1
                    var_250 = rdi_5
                    rdi_4 = arg1
                    int64_t* var_248_1 = rax_60
                
                r14_1 = rax_52 + 0x78
                var_328 = r14_1
                var_330 = &var_250
                int64_t* var_338_1 = arg13
                void* var_340_1 = rsi_3
                void* var_348_6 = arg2
                var_358.d = *(rdi_4 + 0x10)
                var_360.b = rax_7
                sub_141455490(r10_8, *(rax_9 + 0x20), *(rdi_4 + 8), (*(rdi_4 + 0x18)).b, rcx_3.d, 
                    var_360, var_358, arg4)
            
            int64_t* rax_64
            rax_64.b = arg8[4] != 0
            
            if ((rax_64.b & arg8[2] != 0) != 0)
                uint32_t r14_2 = zx.d(*(rax_52 + 0x70))
                uint64_t rcx_49 = zx.q(r14_2) & 3
                uint64_t rcx_50 = rcx_49 - (zx.q(rcx_49.d) u>> 1)
                int64_t rax_70 = (rcx_50 u>> 2 & 0x3333333333333333) + (rcx_50 & 0x3333333333333333)
                uint64_t rdx_34 =
                    ((((rax_70 u>> 4) + rax_70) & 0xf0f0f0f0f0f0f0f) * 0x101010101010101) u>> 0x38
                void* const var_240
                int32_t rsi_5
                
                if (rdx_34.d u< 1)
                    var_240 = 0x98
                    rsi_5 = r15_1
                    int64_t var_238_2 = 0
                else
                    void* rax_71 = *(rax_52 + 0x10)
                    void* rcx_52 = rax_52
                    
                    if (rax_71 != 0)
                        rcx_52 = rax_71
                    
                    void* rdi_6 = *(rcx_52 + (rdx_34 << 3) - 8)
                    int32_t rax_72 = *(rdi_6 + 0x28)
                    int32_t rax_73 = rax_72 + 7
                    
                    if (rax_72 + 7 s< 0)
                        rax_73 += 7
                    
                    int32_t r9_23 = 0
                    int64_t i_5 = sx.q(*(rdi_6 + 0x38))
                    
                    if (i_5 s> 0)
                        int64_t rcx_56 = 0
                        int64_t i_1
                        
                        do
                            void* rax_76 = *(rdi_6 + 0x30)
                            
                            if ((*(rdi_6 + 0x30) & 1) != 0)
                                rax_76 = (rax_76 s>> 1) + rdi_6 + 0x30
                            
                            uint32_t rax_77 = zx.d(*(rax_76 + rcx_56 + 2))
                            rcx_56 += 0x18
                            r9_23 += rax_77
                            i_1 = i_5
                            i_5 -= 1
                        while (i_1 != 1)
                    
                    void* rcx_57 = rax_52 + 0x20
                    r12_1 += ((rax_73 s>> 3) + ((*(rdi_6 + 0x18) + *(rdi_6 + 8) + rax_72) << 3) + 7
                        + r9_23) & 0xfffffff8
                    
                    if (*(rax_52 + 0x72) u> 0x50)
                        rcx_57 = *rcx_57
                    
                    rsi_5 = r12_1
                    var_240 = rdi_6
                    rdi_4 = arg1
                    void* var_238_1 = sx.q(r15_1) + rcx_57
                
                uint64_t r14_3 = zx.q(r14_2) & 7
                int64_t r14_4 = r14_3 - (zx.q(r14_3.d) u>> 1 & 0x5555555555555555)
                int64_t rax_89 = (r14_4 u>> 2 & 0x3333333333333333) + (r14_4 & 0x3333333333333333)
                uint64_t rdx_41 =
                    ((((rax_89 u>> 4) + rax_89) & 0xf0f0f0f0f0f0f0f) * 0x101010101010101) u>> 0x38
                void* const var_230
                
                if (rdx_41.d u< 1)
                    var_230 = 0x98
                    r15_1 = rsi_5
                    int64_t var_228_2 = 0
                else
                    void* rax_90 = *(rax_52 + 0x10)
                    void* rcx_58 = rax_52
                    
                    if (rax_90 != 0)
                        rcx_58 = rax_90
                    
                    void* rdi_7 = *(rcx_58 + (rdx_41 << 3) - 8)
                    int32_t rax_91 = *(rdi_7 + 0x28)
                    int32_t rax_92 = rax_91 + 7
                    
                    if (rax_91 + 7 s< 0)
                        rax_92 += 7
                    
                    int32_t r9_24 = 0
                    int64_t i_6 = sx.q(*(rdi_7 + 0x38))
                    
                    if (i_6 s> 0)
                        int64_t rcx_62 = 0
                        int64_t i_2
                        
                        do
                            void* rax_95 = *(rdi_7 + 0x30)
                            
                            if ((*(rdi_7 + 0x30) & 1) != 0)
                                rax_95 = (rax_95 s>> 1) + rdi_7 + 0x30
                            
                            uint32_t rax_96 = zx.d(*(rax_95 + rcx_62 + 2))
                            rcx_62 += 0x18
                            r9_24 += rax_96
                            i_2 = i_6
                            i_6 -= 1
                        while (i_2 != 1)
                    
                    void* rcx_63 = rax_52 + 0x20
                    r12_1 += ((rax_92 s>> 3) + ((*(rdi_7 + 0x18) + *(rdi_7 + 8) + rax_91) << 3) + 7
                        + r9_24) & 0xfffffff8
                    r15_1 = r12_1
                    
                    if (*(rax_52 + 0x72) u> 0x50)
                        rcx_63 = *rcx_63
                    
                    var_230 = rdi_7
                    rdi_4 = arg1
                    void* var_228_1 = sx.q(rsi_5) + rcx_63
                
                r14_1 = rax_52 + 0x78
                rsi_3 = var_288_1
                void* var_328_1 = r14_1
                void** var_330_1 = &var_240
                int64_t* var_338_2 = arg13
                void* var_340_2 = rsi_3
                void* var_348_7 = arg2
                var_358.d = *(rdi_4 + 0x10)
                var_360.b = 0
                sub_141455490(arg8[2], *(arg8[3] + 0x20), *(rdi_4 + 8), (*(rdi_4 + 0x18)).b, 
                    rcx_3.d, var_360, var_358, arg4)
                var_328 = r14_1
                var_330 = &var_230
                int64_t* var_338_3 = arg13
                void* var_340_3 = rsi_3
                void* var_348_8 = arg2
                var_358.d = *(rdi_4 + 0x10)
                var_360.b = 0
                sub_141455490(arg8[4], *(arg8[5] + 0x20), *(rdi_4 + 8), (*(rdi_4 + 0x18)).b, 
                    rcx_3.d, var_360, var_358, arg4)
            
            int64_t* r12_4
            
            if (var_2b8 == 0)
                r12_4 = arg8
            else
                uint64_t rcx_69 = zx.q(*(rax_52 + 0x70)) & 0xf
                int64_t rcx_70 = rcx_69 - (zx.q(rcx_69.d) u>> 1 & 0x5555555555555555)
                int64_t rax_112 =
                    (rcx_70 u>> 2 & 0x3333333333333333) + (rcx_70 & 0x3333333333333333)
                uint64_t rdx_52 =
                    ((((rax_112 u>> 4) + rax_112) & 0xf0f0f0f0f0f0f0f) * 0x101010101010101) u>> 0x38
                void* rax_121
                
                if (rdx_52.d u< 1)
                    var_280 = 0x98
                    rax_121 = nullptr
                else
                    void* rax_113 = *(rax_52 + 0x10)
                    void* rcx_72 = rax_52
                    
                    if (rax_113 != 0)
                        rcx_72 = rax_113
                    
                    void* rdi_8 = *(rcx_72 + (rdx_52 << 3) - 8)
                    int32_t rax_114 = *(rdi_8 + 0x28)
                    int32_t rax_115 = rax_114 + 7
                    
                    if (rax_114 + 7 s< 0)
                        rax_115 += 7
                    
                    int64_t i_7 = sx.q(*(rdi_8 + 0x38))
                    int32_t r9_27 = 0
                    
                    if (i_7 s> 0)
                        int64_t rcx_76 = 0
                        int64_t i_3
                        
                        do
                            void* rax_118 = *(rdi_8 + 0x30)
                            
                            if ((*(rdi_8 + 0x30) & 1) != 0)
                                rax_118 = (rax_118 s>> 1) + rdi_8 + 0x30
                            
                            uint32_t rax_119 = zx.d(*(rcx_76 + rax_118 + 2))
                            rcx_76 += 0x18
                            r9_27 += rax_119
                            i_3 = i_7
                            i_7 -= 1
                        while (i_3 != 1)
                    
                    void* rcx_77 = rax_52 + 0x20
                    
                    if (*(rax_52 + 0x72) u> 0x50)
                        rcx_77 = *rcx_77
                    
                    rsi_3 = var_288_1
                    int64_t rax_120 = sx.q(r15_1)
                    r15_1 = (((rax_115 s>> 3) + ((*(rdi_8 + 0x18) + *(rdi_8 + 8) + rax_114) << 3)
                        + 7 + r9_27) & 0xfffffff8) + r12_1
                    var_280 = rdi_8
                    rax_121 = rax_120 + rcx_77
                    rdi_4 = arg1
                
                r12_4 = arg8
                var_328 = r14_1
                var_330 = &var_280
                int64_t* var_338_4 = arg13
                void* var_340_4 = rsi_3
                void* var_348_9 = arg2
                void* var_278_1 = rax_121
                var_358.d = *(rdi_4 + 0x10)
                var_360.b = 0
                sub_141455490(r12_4[6], *(r12_4[7] + 0x20), *(rdi_4 + 8), (*(rdi_4 + 0x18)).b, 
                    rcx_3.d, var_360, var_358, arg4)
            
            if (r12_4[8] != 0)
                uint64_t rcx_83 = zx.q(*(rax_52 + 0x70)) & 0x1f
                int64_t rcx_84 = rcx_83 - (zx.q(rcx_83.d) u>> 1 & 0x5555555555555555)
                int64_t rax_130 =
                    (rcx_84 u>> 2 & 0x3333333333333333) + (rcx_84 & 0x3333333333333333)
                uint64_t rcx_91 =
                    ((((rax_130 u>> 4) + rax_130) & 0xf0f0f0f0f0f0f0f) * 0x101010101010101) u>> 0x38
                void* rax_135
                
                if (rcx_91.d u< 1)
                    var_2a8 = 0x98
                    rax_135 = nullptr
                else
                    void* rax_131 = *(rax_52 + 0x10)
                    void* rdx_60 = rax_52
                    
                    if (rax_131 != 0)
                        rdx_60 = rax_131
                    
                    void* rcx_92 = rax_52 + 0x20
                    
                    if (*(rax_52 + 0x72) u> 0x50)
                        rcx_92 = *rcx_92
                    
                    var_2a8 = *(rdx_60 + ((rcx_91 - 1) << 3))
                    rax_135 = sx.q(r15_1) + rcx_92
                
                var_328 = r14_1
                var_330 = &var_2a8
                int64_t* var_338_5 = arg13
                void* var_340_5 = rsi_3
                void* var_348_10 = arg2
                void* var_2a0_1 = rax_135
                var_358.d = *(rdi_4 + 0x10)
                var_360.b = 0
                sub_141455490(r12_4[8], *(r12_4[9] + 0x20), *(rdi_4 + 8), (*(rdi_4 + 0x18)).b, 
                    rcx_3.d, var_360, var_358, arg4)
            
            int32_t var_298
            int32_t var_294
            sub_14126c0d0(rdi_4, var_268, rsi_3, &var_294, &var_298)
            int128_t zmm0_1 = *(r12_4 + 0x40)
            int128_t zmm1_1 = *(r12_4 + 0x50)
            int64_t* rcx_98 = *(rdi_4 + 0x20)
            uint64_t r9_31 = zx.q(var_294)
            uint64_t r8_27 = zx.q(var_318)
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
            var_368_11.d = var_298
            (*(*rcx_98 + 0x10))(rcx_98, arg2, r8_27, r9_31, var_368_11, var_360, var_358, arg11, 
                &var_1a8, &var_218, rax_52, var_330, var_328)
            rax_49 = var_2c8
            rcx_36 = var_318
            rdx_21 = var_258_1
            r8_13 = var_290
            r9_20 = arg2
            r10_7 = arg3
        
        rcx_36 += 1
        rax_49 = rol.q(rax_49, 1)
        rdx_21 += 0x68
        var_318 = rcx_36
        var_258_1 = rdx_21
        var_2c8 = rax_49
    while (rcx_36 s< r8_13)

int128_t var_188
int64_t* rcx_99 = var_188:8.q

if (rcx_99 != 0)
    sub_1419d6470(rcx_99)

int64_t* rcx_100 = var_188.q

if (rcx_100 != 0)
    sub_1419d6470(rcx_100)

int128_t var_198
int64_t* rcx_101 = var_198:8.q

if (rcx_101 != 0)
    sub_1419d6470(rcx_101)

int64_t* rcx_102 = var_198.q

if (rcx_102 != 0)
    sub_1419d6470(rcx_102)

int64_t* rcx_103 = var_1a8:8.q

if (rcx_103 != 0)
    sub_1419d6470(rcx_103)

if (var_88 != 0)
    sub_140a74f90(var_88)

int64_t result = sub_14125cf90(&var_130)
__security_check_cookie(rax_1 ^ &var_388)
return result
