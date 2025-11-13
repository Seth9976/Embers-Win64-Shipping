// 函数: sub_1422bab30
// 地址: 0x1422bab30
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void var_238
int64_t rax_1 = __security_cookie ^ &var_238
void* var_e0
sub_1419a2ec0(std::_Get_future_error_what((*U"1111")[3]), &var_e0, &data_143f53bd0, 0)
void* rdx_1 = var_e0
void* r14 = nullptr

if (rdx_1 != 0)
    int64_t rdx_2 = sx.q(*(rdx_1 + 0x10c))
    void* var_d8
    int64_t* rbx_1 = *(var_d8 + 0x10)
    int64_t r14_1 = rbx_1[3]
    
    if (*(r14_1 + (rdx_2 << 3)) == 0)
        sub_1419ccf30(rbx_1, rdx_2.d)
        r14_1 = rbx_1[3]
    
    r14 = *(r14_1 + (rdx_2 << 3))

*(arg1 + 0x1b0) = r14
sub_14198aa60(r14)
void*** rcx_6 = (*(arg1 + 0x30) + 7) & 0xfffffffffffffff8
void* rax_8 = &rcx_6[3]

if (rax_8 u> *(arg1 + 0x38))
    sub_140b0e3d0(arg1 + 0x30, 0x20)
    rcx_6 = (*(arg1 + 0x30) + 7) & 0xfffffffffffffff8
    rax_8 = &rcx_6[3]

*(arg1 + 0x30) = rax_8
void**** rax_9 = *(arg1 + 8)
int32_t temp1 = *(arg1 + 0x14)
*(arg1 + 0x14) += 1
void* var_80 = arg4
*rax_9 = rcx_6
*(arg1 + 8) = &rcx_6[1]
rcx_6[1] = 0
*rcx_6 = &data_142dd5b40
int64_t* var_88 = arg3
void* var_78 = arg5
void* var_70 = arg6
rcx_6[2] = r14
int64_t* rcx_10 = *arg2
void* var_68 = arg7
void* var_60 = arg8
int32_t var_f0
(*(*rcx_10 + 0x30))(rcx_10, &var_f0)
int32_t var_ec
uint64_t rflags
int32_t temp0
temp0, rflags = _bit_scan_reverse(var_ec)
int32_t var_160 = temp0
int32_t rdx_4

if (temp1 == 0xffffffff)
    rdx_4 = 0x20
else
    rdx_4 = 0x1f - temp0

int32_t rdx_6 = rdx_4 << 0x1a s>> 0x1f
bool cond:2 = rdx_6 == 0
uint64_t rflags_1
int32_t temp0_1
temp0_1, rflags_1 = _bit_scan_reverse(var_ec - 1)
int32_t var_15c = temp0_1
int32_t r11

if (rdx_6 == 0)
    r11 = 0x20
else
    r11 = 0x1f - temp0_1
    cond:2 = 0x1f == temp0_1

int32_t r9 = var_f0
uint64_t rflags_2
int32_t temp0_2
temp0_2, rflags_2 = _bit_scan_reverse(r9)
int32_t var_158 = temp0_2
int32_t rcx_13

rcx_13 = cond:2 ? 0x20 : 0x1f - temp0_2

int32_t rcx_15 = rcx_13 << 0x1a s>> 0x1f
uint64_t rflags_3
int32_t temp0_3
temp0_3, rflags_3 = _bit_scan_reverse(r9 - 1)
int32_t var_148 = temp0_3
int32_t r8

if (rcx_15 == 0)
    r8 = 0x20
else
    r8 = 0x1f - temp0_3

arg9[2] = 1
int32_t r14_3 = (0x20 - r11) & not.d(rdx_6)
int32_t rsi_3 = (0x20 - r8) & not.d(rcx_15)
int32_t r9_2 = 0
int32_t r10 = 0
int32_t i = 1

if (rsi_3 u<= r14_3)
    r14_3 = rsi_3

int32_t r8_1 = 1 << r14_3.b
*arg9 = r8_1
uint64_t r11_2 = zx.q(r8_1 * r8_1)
arg9[1] = r8_1

if (r14_3 u>= 1)
    if (r14_3 u>= 2)
        do
            int32_t rax_22 = r8_1 s>> i.b
            char rcx_19 = i.b + 1
            i += 2
            r9_2 += rax_22 * rax_22
            int32_t rax_25 = r8_1 s>> rcx_19
            r10 += rax_25 * rax_25
        while (i u<= r14_3 - 1)
    
    if (i u<= r14_3)
        int32_t r8_2 = r8_1 s>> i.b
        r11_2 = zx.q(r11_2.d + r8_2 * r8_2)
    
    r11_2 = zx.q(r11_2.d + r9_2 + r10)

uint32_t r13_1 = (r11_2 << 2).d
int64_t** r15_1 = &var_88
int64_t i_4 = 6
int64_t i_1

do
    int64_t* r14_4 = *r15_1
    int32_t var_b8_1 = 1
    int64_t var_c8 = 0
    char var_a0_1 = 0
    r14_4[3].d = r13_1
    int64_t* rcx_22 = data_143f0f180
    int32_t var_90_1 = 0
    int64_t var_c0_1 = 0
    int64_t var_98_1 = 0
    int128_t var_b4_1 = data_143dbb1e0
    int32_t var_a4_1 = (1 << (data_1439c7a34).b) - 1
    void var_1a8
    (*(*rcx_22 + 0x498))(rcx_22, &var_1a8, &data_143f02b98, zx.q(r13_1), 0x208, &var_c8)
    sub_1405d1600(r14_4, &var_1a8)
    sub_1405d1550(&var_1a8)
    int64_t* rcx_25 = data_143f0f180
    int32_t var_218_1
    var_218_1.b = 0xd
    int64_t var_1e8
    (*(*rcx_25 + 0x590))(rcx_25, &var_1e8, &data_143f02b98, *r14_4, var_218_1)
    
    if (&r14_4[1] != &var_1e8)
        int64_t* rsi_5 = r14_4[1]
        r14_4[1] = var_1e8
        var_1e8 = 0
        
        if (rsi_5 != 0)
            rsi_5[1].d -= 1
            
            if (rsi_5[1].d == 1)
                char rax_34
                
                if (rsi_5[2].b == 0 && data_143f0f1d0 == 0)
                    rax_34 = sub_1405949a0()
                
                if (rsi_5[2].b != 0 || (data_143f0f1d0 == 0 && rax_34 != 0))
                    (**rsi_5)(rsi_5, 1)
                else
                    bool z_1
                    
                    if (0 == *(rsi_5 + 0xc))
                        *(rsi_5 + 0xc) = 1
                        z_1 = true
                    else
                        *(rsi_5 + 0xc)
                        z_1 = false
                    
                    if (z_1)
                        int32_t rax_36 = sub_140a20af0()
                        uint64_t rdx_11 = zx.q(rax_36)
                        void* const rax_37
                        
                        if (rax_36 != 0)
                            rax_37 = *((rdx_11 u>> 0xe << 3) + &data_143cf0bf8)
                                + (zx.q(rdx_11.d) & 0x3fff) * 0x18
                        else
                            rax_37 = nullptr
                        
                        *(rax_37 + 8) = rsi_5
                        sub_1405a42f0(&data_143f02390, rdx_11.d)
    
    sub_1405d1550(&var_1e8)
    int64_t* rcx_32 = data_143f0f180
    int64_t* var_210_1
    var_210_1.b = 0xd
    void var_1a0
    (*(*rcx_32 + 0x4b8))(rcx_32, &var_1a0, &data_143f02b98, *r14_4, 4, var_210_1)
    sub_1405d1600(&r14_4[2], &var_1a0)
    sub_1405ec8a0(&var_1a0)
    r15_1 = &r15_1[1]
    i_1 = i_4
    i_4 -= 1
while (i_1 != 1)
int32_t r15_2 = i_4.d
int32_t var_208 = i_4.d
int16_t* rcx_35 = rdx_1 + 0x120
void* r14_5 = rdx_1 + 0x126
int16_t* var_1c0 = rcx_35
void* var_1b8 = r14_5

do
    int32_t i_2 = i_4.d
    int64_t** r12_1 = &var_88
    int64_t** var_1f0_1 = &var_88
    
    do
        void* rsi_6 = *arg2
        void* var_138 = rsi_6
        
        if (rsi_6 != 0)
            *(rsi_6 + 8) += 1
        
        int64_t* rax_46 = *r12_1
        int32_t var_1d8 = r15_2
        int64_t r15_3 = *(arg1 + 0x1b0)
        int32_t var_218_3 = 0
        int64_t var_200 = r15_3
        int32_t i_3 = i_2
        sub_14077c5f0(arg1, &var_200, rcx_35, arg9, var_218_3)
        sub_140741e30(arg1, &var_200, r14_5, &i_3, 0)
        sub_140741e30(arg1, &var_200, rdx_1 + 0x12c, &var_1d8, 0)
        void* rdx_18 = rdx_1
        int64_t* r14_6 = data_14395f4d0
        
        if (*(rdx_18 + 0x11a) u> 0)
            uint32_t r12_2 = zx.d(*(rdx_18 + 0x118))
            void*** rcx_41 = (*(arg1 + 0x30) + 7) & 0xfffffffffffffff8
            void* rax_47 = &rcx_41[5]
            
            if (rax_47 u> *(arg1 + 0x38))
                sub_140b0e3d0(arg1 + 0x30, 0x30)
                rdx_18 = rdx_1
                rcx_41 = (*(arg1 + 0x30) + 7) & 0xfffffffffffffff8
                rax_47 = &rcx_41[5]
            
            *(arg1 + 0x30) = rax_47
            void**** rax_48 = *(arg1 + 8)
            *(arg1 + 0x14) += 1
            *rax_48 = rcx_41
            *(arg1 + 8) = &rcx_41[1]
            rcx_41[1] = 0
            rcx_41[3].d = r12_2
            r12_1 = var_1f0_1
            *rcx_41 = &data_142da77b8
            rcx_41[2] = r15_3
            rcx_41[4] = rsi_6
        
        if (*(rdx_18 + 0x11e) u> 0)
            uint32_t rsi_7 = zx.d(*(rdx_18 + 0x11c))
            
            if ((*(*r14_6 + 8))(r14_6, rdx_18) == 0)
                void*** rcx_48 = (*(arg1 + 0x30) + 7) & 0xfffffffffffffff8
                void* rax_52 = &rcx_48[5]
                
                if (rax_52 u> *(arg1 + 0x38))
                    sub_140b0e3d0(arg1 + 0x30, 0x30)
                    rcx_48 = (*(arg1 + 0x30) + 7) & 0xfffffffffffffff8
                    rax_52 = &rcx_48[5]
                
                *(arg1 + 0x30) = rax_52
                void** rax_53 = *(arg1 + 8)
                *(arg1 + 0x14) += 1
                *rax_53 = rcx_48
                *(arg1 + 8) = &rcx_48[1]
                rcx_48[1] = 0
                *rcx_48 = &data_142da77c8
                rcx_48[2] = r15_3
                rcx_48[3].d = rsi_7
                rcx_48[4] = r14_6
        
        sub_14077c370(rdx_1 + 0x132, arg1, &var_200, rax_46)
        sub_1405d1550(&var_138)
        r15_2 = var_208
        char rcx_54 = r15_2.b
        int32_t temp4_1
        int32_t temp5_1
        temp4_1:temp5_1 = sx.q((*arg9 s>> rcx_54) + 7)
        int32_t temp6_1
        int32_t temp7_1
        temp6_1:temp7_1 = sx.q((arg9[1] s>> rcx_54) + 7)
        sub_1419cd1c0(arg1, rdx_1, ((temp4_1 & 7) + temp5_1) s>> 3, 
            ((temp6_1 & 7) + temp7_1) s>> 3, 1)
        sub_14077cfd0(rdx_1 + 0x132, arg1, *(arg1 + 0x1b0))
        int64_t* rsi_10 = (*(arg1 + 0x30) + 7) & 0xfffffffffffffff8
        int64_t rcx_57 = (*r12_1)[1]
        void* rax_62 = &rsi_10[1]
        
        if (rax_62 u> *(arg1 + 0x38))
            sub_140b0e3d0(arg1 + 0x30, 0x10)
            rsi_10 = (*(arg1 + 0x30) + 7) & 0xfffffffffffffff8
            rax_62 = &rsi_10[1]
        
        *(arg1 + 0x30) = rax_62
        *rsi_10 = rcx_57
        void*** rcx_61 = (*(arg1 + 0x30) + 7) & 0xfffffffffffffff8
        void* rax_63 = &rcx_61[6]
        
        if (rax_63 u> *(arg1 + 0x38))
            sub_140b0e3d0(arg1 + 0x30, 0x38)
            rcx_61 = (*(arg1 + 0x30) + 7) & 0xfffffffffffffff8
            rax_63 = &rcx_61[6]
        
        r14_5 = var_1b8
        *(arg1 + 0x30) = rax_63
        r12_1 = &r12_1[1]
        void**** rax_64 = *(arg1 + 8)
        i_2 += 1
        *(arg1 + 0x14) += 1
        var_1f0_1 = r12_1
        *rax_64 = rcx_61
        *(arg1 + 8) = &rcx_61[1]
        rcx_61[1] = 0
        *rcx_61 = &data_142da7798
        rcx_61[2].d = 1
        rcx_61[3] = rsi_10
        rcx_61[4].d = 2
        *(rcx_61 + 0x24) = 3
        rcx_61[5] = 0
        rcx_35 = var_1c0
    while (i_2 u< 6)
    
    void var_130
    sub_140b58260(&var_130, u"SkyLightMipTree", 1)
    int64_t* rcx_66 = data_143f0f180
    int64_t* var_168
    (*(*rcx_66 + 0x98))(rcx_66, &var_168, &var_130)
    int64_t* rsi_15 = (*(arg1 + 0x30) + 7) & 0xfffffffffffffff8
    int64_t rax_67 = arg3[1]
    void* rcx_68 = &rsi_15[1]
    
    if (rcx_68 u> *(arg1 + 0x38))
        sub_140b0e3d0(arg1 + 0x30, 0x10)
        rsi_15 = (*(arg1 + 0x30) + 7) & 0xfffffffffffffff8
        rcx_68 = &rsi_15[1]
    
    *(arg1 + 0x30) = rcx_68
    *rsi_15 = rax_67
    void*** rcx_72 = (*(arg1 + 0x30) + 7) & 0xfffffffffffffff8
    void* rax_68 = &rcx_72[6]
    
    if (rax_68 u> *(arg1 + 0x38))
        sub_140b0e3d0(arg1 + 0x30, 0x38)
        rcx_72 = (*(arg1 + 0x30) + 7) & 0xfffffffffffffff8
        rax_68 = &rcx_72[6]
    
    *(arg1 + 0x30) = rax_68
    *(arg1 + 0x14) += 1
    i_4 = 0
    **(arg1 + 8) = rcx_72
    *(arg1 + 8) = &rcx_72[1]
    rcx_72[3] = rsi_15
    rcx_72[1] = 0
    *rcx_72 = &data_142da7798
    rcx_72[2].d = 1
    rcx_72[4].d = 2
    *(rcx_72 + 0x24) = 3
    rcx_72[5] = 0
    int64_t rax_72 = *(arg4 + 8)
    int64_t* rsi_20 = (*(arg1 + 0x30) + 7) & 0xfffffffffffffff8
    void* rcx_76 = &rsi_20[1]
    
    if (rcx_76 u> *(arg1 + 0x38))
        sub_140b0e3d0(arg1 + 0x30, 0x10)
        rsi_20 = (*(arg1 + 0x30) + 7) & 0xfffffffffffffff8
        rcx_76 = &rsi_20[1]
    
    *(arg1 + 0x30) = rcx_76
    *rsi_20 = rax_72
    void*** rcx_80 = (*(arg1 + 0x30) + 7) & 0xfffffffffffffff8
    void* rax_73 = &rcx_80[6]
    
    if (rax_73 u> *(arg1 + 0x38))
        sub_140b0e3d0(arg1 + 0x30, 0x38)
        rcx_80 = (*(arg1 + 0x30) + 7) & 0xfffffffffffffff8
        rax_73 = &rcx_80[6]
    
    *(arg1 + 0x30) = rax_73
    *(arg1 + 0x14) += 1
    **(arg1 + 8) = rcx_80
    *(arg1 + 8) = &rcx_80[1]
    rcx_80[3] = rsi_20
    rcx_80[1] = 0
    *rcx_80 = &data_142da7798
    rcx_80[2].d = 1
    rcx_80[4].d = 2
    *(rcx_80 + 0x24) = 3
    rcx_80[5] = 0
    int64_t rax_77 = *(arg5 + 8)
    int64_t* rsi_25 = (*(arg1 + 0x30) + 7) & 0xfffffffffffffff8
    void* rcx_84 = &rsi_25[1]
    
    if (rcx_84 u> *(arg1 + 0x38))
        sub_140b0e3d0(arg1 + 0x30, 0x10)
        rsi_25 = (*(arg1 + 0x30) + 7) & 0xfffffffffffffff8
        rcx_84 = &rsi_25[1]
    
    *(arg1 + 0x30) = rcx_84
    *rsi_25 = rax_77
    void*** rcx_88 = (*(arg1 + 0x30) + 7) & 0xfffffffffffffff8
    void* rax_78 = &rcx_88[6]
    
    if (rax_78 u> *(arg1 + 0x38))
        sub_140b0e3d0(arg1 + 0x30, 0x38)
        rcx_88 = (*(arg1 + 0x30) + 7) & 0xfffffffffffffff8
        rax_78 = &rcx_88[6]
    
    *(arg1 + 0x30) = rax_78
    *(arg1 + 0x14) += 1
    **(arg1 + 8) = rcx_88
    *(arg1 + 8) = &rcx_88[1]
    rcx_88[3] = rsi_25
    rcx_88[1] = 0
    *rcx_88 = &data_142da7798
    rcx_88[2].d = 1
    rcx_88[4].d = 2
    *(rcx_88 + 0x24) = 3
    rcx_88[5] = 0
    int64_t rax_82 = *(arg6 + 8)
    int64_t* rsi_30 = (*(arg1 + 0x30) + 7) & 0xfffffffffffffff8
    void* rcx_92 = &rsi_30[1]
    
    if (rcx_92 u> *(arg1 + 0x38))
        sub_140b0e3d0(arg1 + 0x30, 0x10)
        rsi_30 = (*(arg1 + 0x30) + 7) & 0xfffffffffffffff8
        rcx_92 = &rsi_30[1]
    
    *(arg1 + 0x30) = rcx_92
    *rsi_30 = rax_82
    void*** rcx_96 = (*(arg1 + 0x30) + 7) & 0xfffffffffffffff8
    void* rax_83 = &rcx_96[6]
    
    if (rax_83 u> *(arg1 + 0x38))
        sub_140b0e3d0(arg1 + 0x30, 0x38)
        rcx_96 = (*(arg1 + 0x30) + 7) & 0xfffffffffffffff8
        rax_83 = &rcx_96[6]
    
    *(arg1 + 0x30) = rax_83
    *(arg1 + 0x14) += 1
    **(arg1 + 8) = rcx_96
    *(arg1 + 8) = &rcx_96[1]
    rcx_96[3] = rsi_30
    rcx_96[1] = 0
    *rcx_96 = &data_142da7798
    rcx_96[2].d = 1
    rcx_96[4].d = 2
    *(rcx_96 + 0x24) = 3
    rcx_96[5] = 0
    int64_t rax_87 = *(arg7 + 8)
    int64_t* rsi_35 = (*(arg1 + 0x30) + 7) & 0xfffffffffffffff8
    void* rcx_100 = &rsi_35[1]
    
    if (rcx_100 u> *(arg1 + 0x38))
        sub_140b0e3d0(arg1 + 0x30, 0x10)
        rsi_35 = (*(arg1 + 0x30) + 7) & 0xfffffffffffffff8
        rcx_100 = &rsi_35[1]
    
    *(arg1 + 0x30) = rcx_100
    *rsi_35 = rax_87
    void*** rcx_104 = (*(arg1 + 0x30) + 7) & 0xfffffffffffffff8
    void* rax_88 = &rcx_104[6]
    
    if (rax_88 u> *(arg1 + 0x38))
        sub_140b0e3d0(arg1 + 0x30, 0x38)
        rcx_104 = (*(arg1 + 0x30) + 7) & 0xfffffffffffffff8
        rax_88 = &rcx_104[6]
    
    *(arg1 + 0x30) = rax_88
    *(arg1 + 0x14) += 1
    **(arg1 + 8) = rcx_104
    *(arg1 + 8) = &rcx_104[1]
    rcx_104[3] = rsi_35
    rcx_104[1] = 0
    *rcx_104 = &data_142da7798
    rcx_104[2].d = 1
    rcx_104[4].d = 2
    *(rcx_104 + 0x24) = 3
    rcx_104[5] = 0
    int64_t rax_92 = *(arg8 + 8)
    int64_t* r14_7 = var_168
    int64_t* rsi_40 = (*(arg1 + 0x30) + 7) & 0xfffffffffffffff8
    void* rcx_108 = &rsi_40[1]
    
    if (rcx_108 u> *(arg1 + 0x38))
        sub_140b0e3d0(arg1 + 0x30, 0x10)
        rsi_40 = (*(arg1 + 0x30) + 7) & 0xfffffffffffffff8
        rcx_108 = &rsi_40[1]
    
    *(arg1 + 0x30) = rcx_108
    *rsi_40 = rax_92
    void*** rcx_112 = (*(arg1 + 0x30) + 7) & 0xfffffffffffffff8
    void* rax_93 = &rcx_112[6]
    
    if (rax_93 u> *(arg1 + 0x38))
        sub_140b0e3d0(arg1 + 0x30, 0x38)
        rcx_112 = (*(arg1 + 0x30) + 7) & 0xfffffffffffffff8
        rax_93 = &rcx_112[6]
    
    *(arg1 + 0x30) = rax_93
    void**** rax_94 = *(arg1 + 8)
    *(arg1 + 0x14) += 1
    *rax_94 = rcx_112
    *(arg1 + 8) = &rcx_112[1]
    rcx_112[1] = 0
    *rcx_112 = &data_142da7798
    rcx_112[2].d = 1
    rcx_112[3] = rsi_40
    rcx_112[4].d = 2
    *(rcx_112 + 0x24) = 3
    rcx_112[5] = r14_7
    int64_t* rsi_43 = var_168
    
    if (rsi_43 != 0)
        rsi_43[1].d -= 1
        
        if (rsi_43[1].d == 1)
            char rax_97
            
            if (rsi_43[2].b == 0 && data_143f0f1d0 == 0)
                rax_97 = sub_1405949a0()
            
            if (rsi_43[2].b != 0 || (data_143f0f1d0 == 0 && rax_97 != 0))
                (**rsi_43)(rsi_43, 1)
            else
                bool z_2
                
                if (0 == *(rsi_43 + 0xc))
                    *(rsi_43 + 0xc) = 1
                    z_2 = true
                else
                    *(rsi_43 + 0xc)
                    z_2 = false
                
                if (z_2)
                    int32_t rax_99 = sub_140a20af0()
                    uint64_t rdx_28 = zx.q(rax_99)
                    void* const rax_100
                    
                    if (rax_99 != 0)
                        rax_100 = *((rdx_28 u>> 0xe << 3) + &data_143cf0bf8)
                            + (zx.q(rdx_28.d) & 0x3fff) * 0x18
                    else
                        rax_100 = nullptr
                    
                    *(rax_100 + 8) = rsi_43
                    sub_1405a42f0(&data_143f02390, rdx_28.d)
    
    rcx_35 = var_1c0
    r15_2 += 1
    r14_5 = var_1b8
    var_208 = r15_2
while (r15_2 u<= r14_3)

int64_t result = sub_1405d1550(arg2)
__security_check_cookie(rax_1 ^ &var_238)
return result
