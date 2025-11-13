// 函数: sub_1422bb850
// 地址: 0x1422bb850
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void var_1e8
int64_t rax_1 = __security_cookie ^ &var_1e8
wchar32 rcx_1 = (*U"1111")[3]
void* var_b8 = arg7
void* var_88 = arg2
int64_t r8
int64_t var_80 = r8
int64_t r9
int64_t var_78 = r9
int64_t var_70 = arg3
int64_t var_68 = arg4
int64_t var_60 = arg5
void* var_108
sub_1419a2ec0(std::_Get_future_error_what(rcx_1), &var_108, &data_143f53cd0, 0)
void* rsi_1 = var_108
void* rdi_1 = nullptr
void* var_198 = rsi_1

if (rsi_1 != 0)
    int64_t rdx_2 = sx.q(*(rsi_1 + 0x10c))
    void* var_100
    int64_t* rbx_1 = *(var_100 + 0x10)
    int64_t rdi_2 = rbx_1[3]
    
    if (*(rdi_2 + (rdx_2 << 3)) == 0)
        sub_1419ccf30(rbx_1, rdx_2.d)
        rdi_2 = rbx_1[3]
    
    rdi_1 = *(rdi_2 + (rdx_2 << 3))
    rsi_1 = var_198

*(arg1 + 0x1b0) = rdi_1
sub_14198aa60(rdi_1)
void*** rcx_7 = (*(arg1 + 0x30) + 7) & 0xfffffffffffffff8
void* rax_6 = &rcx_7[3]

if (rax_6 u> *(arg1 + 0x38))
    sub_140b0e3d0(arg1 + 0x30, 0x20)
    rcx_7 = (*(arg1 + 0x30) + 7) & 0xfffffffffffffff8
    rax_6 = &rcx_7[3]

*(arg1 + 0x30) = rax_6
*(arg1 + 0x14) += 1
**(arg1 + 8) = rcx_7
*(arg1 + 8) = &rcx_7[1]
rcx_7[1] = 0
*rcx_7 = &data_142dd5b40
TEB* gsbase
void* ThreadLocalStoragePointer = gsbase->ThreadLocalStoragePointer
rcx_7[2] = rdi_1
int32_t rdi_3 = *(arg2 + 0x18)

if (data_143cda914 s> *(0x14 + *(ThreadLocalStoragePointer + (zx.q(data_14401b1a0) << 3))))
    _Init_thread_header(&data_143cda914)
    
    if (data_143cda914 == 0xffffffff)
        data_143cda910 = 0x3fb8aa3b
        _Init_thread_footer(&data_143cda914)

int64_t i_1 = 6
int32_t rdi_4 = rdi_3 & 0xfffffffc
int32_t var_1a8 = rdi_4
int64_t r12 = 0
int64_t i

do
    int64_t* r14_1 = *(&var_b8 + r12)
    int64_t var_f8
    int64_t* var_1c0_1 = &var_f8
    var_f8 = 0
    int32_t var_e8_1 = 1
    r14_1[3].d = rdi_4
    int64_t* rcx_14 = data_143f0f180
    int128_t var_e4_1 = data_143dbb1e0
    int32_t var_d4_1 = (1 << (data_1439c7a34).b) - 1
    char var_d0_1 = 0
    int32_t var_c0_1 = 0
    int64_t var_f0_1 = 0
    int64_t var_c8_1 = 0
    void var_190
    (*(*rcx_14 + 0x498))(rcx_14, &var_190, &data_143f02b98, zx.q(rdi_4), 0x208, var_1c0_1)
    sub_1405d1600(r14_1, &var_190)
    sub_1405d1550(&var_190)
    int64_t* rcx_17 = data_143f0f180
    int32_t var_1c8_1
    var_1c8_1.b = 0xd
    int64_t var_1b8
    (*(*rcx_17 + 0x590))(rcx_17, &var_1b8, &data_143f02b98, *r14_1, var_1c8_1)
    
    if (&r14_1[1] != &var_1b8)
        int64_t* rdi_5 = r14_1[1]
        r14_1[1] = var_1b8
        var_1b8 = 0
        
        if (rdi_5 != 0)
            rdi_5[1].d -= 1
            
            if (rdi_5[1].d == 1)
                char rax_18
                
                if (rdi_5[2].b == 0 && data_143f0f1d0 == 0)
                    rax_18 = sub_1405949a0()
                
                if (rdi_5[2].b != 0 || (data_143f0f1d0 == 0 && rax_18 != 0))
                    (**rdi_5)(rdi_5, 1)
                else
                    bool z_1
                    
                    if (0 == *(rdi_5 + 0xc))
                        *(rdi_5 + 0xc) = 1
                        z_1 = true
                    else
                        *(rdi_5 + 0xc)
                        z_1 = false
                    
                    if (z_1)
                        int32_t rax_20 = sub_140a20af0()
                        uint64_t rdx_6 = zx.q(rax_20)
                        void* const rax_21
                        
                        if (rax_20 != 0)
                            rax_21 = *(&data_143cf0bf8 + (rdx_6 u>> 0xe << 3))
                                + (zx.q(rdx_6.d) & 0x3fff) * 0x18
                        else
                            rax_21 = nullptr
                        
                        *(rax_21 + 8) = rdi_5
                        sub_1405a42f0(&data_143f02390, rdx_6.d)
    
    sub_1405d1550(&var_1b8)
    int64_t* rcx_24 = data_143f0f180
    var_1c0_1.b = 0xd
    void var_188
    (*(*rcx_24 + 0x4b8))(rcx_24, &var_188, &data_143f02b98, *r14_1, 4, var_1c0_1)
    sub_1405d1600(&r14_1[2], &var_188)
    sub_1405ec8a0(&var_188)
    void* rax_27 = *(&var_88 + r12)
    int64_t* rsi_4 = r14_1
    int64_t rdi_6 = *(arg1 + 0x1b0)
    int32_t var_1b0 = 0
    int64_t var_1a0 = rdi_6
    int64_t r13_1 = *(rax_27 + 0x10)
    
    if (*(var_198 + 0x11a) u> 0)
        uint32_t rsi_5 = zx.d(*(var_198 + 0x118))
        void*** rcx_29 = (*(arg1 + 0x30) + 7) & 0xfffffffffffffff8
        void* rax_29 = &rcx_29[5]
        
        if (rax_29 u> *(arg1 + 0x38))
            sub_140b0e3d0(arg1 + 0x30, 0x30)
            rcx_29 = (*(arg1 + 0x30) + 7) & 0xfffffffffffffff8
            rax_29 = &rcx_29[5]
        
        *(arg1 + 0x30) = rax_29
        void**** rax_30 = *(arg1 + 8)
        *(arg1 + 0x14) += 1
        *rax_30 = rcx_29
        *(arg1 + 8) = &rcx_29[1]
        rcx_29[1] = 0
        rcx_29[3].d = rsi_5
        rsi_4 = *(&var_b8 + r12)
        *rcx_29 = &data_142d99560
        rcx_29[2] = rdi_6
        rcx_29[4] = r13_1
    
    sub_14077c5f0(arg1, &var_1a0, rsi_1 + 0x11c, arg6, 0)
    sub_140741e30(arg1, &var_1a0, rsi_1 + 0x122, &var_1b0, 0)
    sub_14077c370(rsi_1 + 0x128, arg1, &var_1a0, r14_1)
    int32_t temp1_1
    int32_t temp2_1
    temp1_1:temp2_1 = sx.q(*arg6 + 7)
    int32_t temp3_1
    int32_t temp4_1
    temp3_1:temp4_1 = sx.q(arg6[1] + 7)
    sub_1419cd1c0(arg1, var_198, ((temp1_1 & 7) + temp2_1) s>> 3, ((temp3_1 & 7) + temp4_1) s>> 3, 
        1)
    sub_14077cfd0(rsi_1 + 0x128, arg1, *(arg1 + 0x1b0))
    int64_t rax_37 = rsi_4[1]
    int64_t* rdi_10 = (*(arg1 + 0x30) + 7) & 0xfffffffffffffff8
    void* rcx_39 = &rdi_10[1]
    
    if (rcx_39 u> *(arg1 + 0x38))
        sub_140b0e3d0(arg1 + 0x30, 0x10)
        rdi_10 = (*(arg1 + 0x30) + 7) & 0xfffffffffffffff8
        rcx_39 = &rdi_10[1]
    
    *(arg1 + 0x30) = rcx_39
    *rdi_10 = rax_37
    void*** rcx_43 = (*(arg1 + 0x30) + 7) & 0xfffffffffffffff8
    void* rax_38 = &rcx_43[6]
    
    if (rax_38 u> *(arg1 + 0x38))
        sub_140b0e3d0(arg1 + 0x30, 0x38)
        rcx_43 = (*(arg1 + 0x30) + 7) & 0xfffffffffffffff8
        rax_38 = &rcx_43[6]
    
    *(arg1 + 0x30) = rax_38
    void**** rax_39 = *(arg1 + 8)
    *(arg1 + 0x14) += 1
    r12 += 8
    i = i_1
    i_1 -= 1
    *rax_39 = rcx_43
    *(arg1 + 8) = &rcx_43[1]
    rcx_43[3] = rdi_10
    rdi_4 = var_1a8
    rcx_43[1] = 0
    *rcx_43 = &data_142da7798
    rcx_43[2].d = 1
    rcx_43[4].d = 2
    *(rcx_43 + 0x24) = 3
    rcx_43[5] = 0
while (i != 1)
void var_140
sub_140b58260(&var_140, u"SkyLightMipTreePdf", 1)
int64_t* rcx_48 = data_143f0f180
int64_t var_178
(*(*rcx_48 + 0x98))(rcx_48, &var_178, &var_140)
int64_t* rdi_15 = (*(arg1 + 0x30) + 7) & 0xfffffffffffffff8
int64_t rcx_49 = *(var_b8 + 8)
void* rax_43 = &rdi_15[1]

if (rax_43 u> *(arg1 + 0x38))
    sub_140b0e3d0(arg1 + 0x30, 0x10)
    rdi_15 = (*(arg1 + 0x30) + 7) & 0xfffffffffffffff8
    rax_43 = &rdi_15[1]

*(arg1 + 0x30) = rax_43
*rdi_15 = rcx_49
void*** rcx_53 = (*(arg1 + 0x30) + 7) & 0xfffffffffffffff8
void* rax_44 = &rcx_53[6]

if (rax_44 u> *(arg1 + 0x38))
    sub_140b0e3d0(arg1 + 0x30, 0x38)
    rcx_53 = (*(arg1 + 0x30) + 7) & 0xfffffffffffffff8
    rax_44 = &rcx_53[6]

*(arg1 + 0x30) = rax_44
*(arg1 + 0x14) += 1
**(arg1 + 8) = rcx_53
*(arg1 + 8) = &rcx_53[1]
rcx_53[1] = 0
rcx_53[3] = rdi_15
*rcx_53 = &data_142da7798
rcx_53[2].d = 1
rcx_53[4].d = 2
*(rcx_53 + 0x24) = 3
rcx_53[5] = 0
int64_t rcx_57 = *(arg8 + 8)
int64_t* rdi_20 = (*(arg1 + 0x30) + 7) & 0xfffffffffffffff8
void* rax_48 = &rdi_20[1]

if (rax_48 u> *(arg1 + 0x38))
    sub_140b0e3d0(arg1 + 0x30, 0x10)
    rdi_20 = (*(arg1 + 0x30) + 7) & 0xfffffffffffffff8
    rax_48 = &rdi_20[1]

*(arg1 + 0x30) = rax_48
*rdi_20 = rcx_57
void*** rcx_61 = (*(arg1 + 0x30) + 7) & 0xfffffffffffffff8
void* rax_49 = &rcx_61[6]

if (rax_49 u> *(arg1 + 0x38))
    sub_140b0e3d0(arg1 + 0x30, 0x38)
    rcx_61 = (*(arg1 + 0x30) + 7) & 0xfffffffffffffff8
    rax_49 = &rcx_61[6]

*(arg1 + 0x30) = rax_49
*(arg1 + 0x14) += 1
**(arg1 + 8) = rcx_61
*(arg1 + 8) = &rcx_61[1]
rcx_61[1] = 0
rcx_61[3] = rdi_20
*rcx_61 = &data_142da7798
rcx_61[2].d = 1
rcx_61[4].d = 2
*(rcx_61 + 0x24) = 3
rcx_61[5] = 0
int64_t rcx_65 = *(arg9 + 8)
int64_t* rdi_25 = (*(arg1 + 0x30) + 7) & 0xfffffffffffffff8
void* rax_53 = &rdi_25[1]

if (rax_53 u> *(arg1 + 0x38))
    sub_140b0e3d0(arg1 + 0x30, 0x10)
    rdi_25 = (*(arg1 + 0x30) + 7) & 0xfffffffffffffff8
    rax_53 = &rdi_25[1]

*(arg1 + 0x30) = rax_53
*rdi_25 = rcx_65
void*** rcx_69 = (*(arg1 + 0x30) + 7) & 0xfffffffffffffff8
void* rax_54 = &rcx_69[6]

if (rax_54 u> *(arg1 + 0x38))
    sub_140b0e3d0(arg1 + 0x30, 0x38)
    rcx_69 = (*(arg1 + 0x30) + 7) & 0xfffffffffffffff8
    rax_54 = &rcx_69[6]

*(arg1 + 0x30) = rax_54
*(arg1 + 0x14) += 1
**(arg1 + 8) = rcx_69
*(arg1 + 8) = &rcx_69[1]
rcx_69[1] = 0
rcx_69[3] = rdi_25
*rcx_69 = &data_142da7798
rcx_69[2].d = 1
rcx_69[4].d = 2
*(rcx_69 + 0x24) = 3
rcx_69[5] = 0
int64_t rcx_73 = *(arg10 + 8)
int64_t* rdi_30 = (*(arg1 + 0x30) + 7) & 0xfffffffffffffff8
void* rax_58 = &rdi_30[1]

if (rax_58 u> *(arg1 + 0x38))
    sub_140b0e3d0(arg1 + 0x30, 0x10)
    rdi_30 = (*(arg1 + 0x30) + 7) & 0xfffffffffffffff8
    rax_58 = &rdi_30[1]

*(arg1 + 0x30) = rax_58
*rdi_30 = rcx_73
void*** rcx_77 = (*(arg1 + 0x30) + 7) & 0xfffffffffffffff8
void* rax_59 = &rcx_77[6]

if (rax_59 u> *(arg1 + 0x38))
    sub_140b0e3d0(arg1 + 0x30, 0x38)
    rcx_77 = (*(arg1 + 0x30) + 7) & 0xfffffffffffffff8
    rax_59 = &rcx_77[6]

*(arg1 + 0x30) = rax_59
*(arg1 + 0x14) += 1
**(arg1 + 8) = rcx_77
*(arg1 + 8) = &rcx_77[1]
rcx_77[1] = 0
rcx_77[3] = rdi_30
*rcx_77 = &data_142da7798
rcx_77[2].d = 1
rcx_77[4].d = 2
*(rcx_77 + 0x24) = 3
rcx_77[5] = 0
int64_t rcx_81 = *(arg11 + 8)
int64_t* rdi_35 = (*(arg1 + 0x30) + 7) & 0xfffffffffffffff8
void* rax_63 = &rdi_35[1]

if (rax_63 u> *(arg1 + 0x38))
    sub_140b0e3d0(arg1 + 0x30, 0x10)
    rdi_35 = (*(arg1 + 0x30) + 7) & 0xfffffffffffffff8
    rax_63 = &rdi_35[1]

*(arg1 + 0x30) = rax_63
*rdi_35 = rcx_81
void*** rcx_85 = (*(arg1 + 0x30) + 7) & 0xfffffffffffffff8
void* rax_64 = &rcx_85[6]

if (rax_64 u> *(arg1 + 0x38))
    sub_140b0e3d0(arg1 + 0x30, 0x38)
    rcx_85 = (*(arg1 + 0x30) + 7) & 0xfffffffffffffff8
    rax_64 = &rcx_85[6]

*(arg1 + 0x30) = rax_64
*(arg1 + 0x14) += 1
**(arg1 + 8) = rcx_85
*(arg1 + 8) = &rcx_85[1]
rcx_85[1] = 0
rcx_85[3] = rdi_35
*rcx_85 = &data_142da7798
rcx_85[2].d = 1
rcx_85[4].d = 2
*(rcx_85 + 0x24) = 3
rcx_85[5] = 0
int64_t rcx_89 = *(arg12 + 8)
int64_t rsi_6 = var_178
int64_t* rdi_40 = (*(arg1 + 0x30) + 7) & 0xfffffffffffffff8
void* rax_68 = &rdi_40[1]

if (rax_68 u> *(arg1 + 0x38))
    sub_140b0e3d0(arg1 + 0x30, 0x10)
    rdi_40 = (*(arg1 + 0x30) + 7) & 0xfffffffffffffff8
    rax_68 = &rdi_40[1]

*(arg1 + 0x30) = rax_68
*rdi_40 = rcx_89
void*** rcx_93 = (*(arg1 + 0x30) + 7) & 0xfffffffffffffff8
void* rax_69 = &rcx_93[6]

if (rax_69 u> *(arg1 + 0x38))
    sub_140b0e3d0(arg1 + 0x30, 0x38)
    rcx_93 = (*(arg1 + 0x30) + 7) & 0xfffffffffffffff8
    rax_69 = &rcx_93[6]

*(arg1 + 0x30) = rax_69
void**** rax_70 = *(arg1 + 8)
*(arg1 + 0x14) += 1
*rax_70 = rcx_93
*(arg1 + 8) = &rcx_93[1]
*rcx_93 = &data_142da7798
rcx_93[2].d = 1
rcx_93[3] = rdi_40
rcx_93[4].d = 2
*(rcx_93 + 0x24) = 3
rcx_93[5] = rsi_6
rcx_93[1] = 0
int64_t result = sub_1405d1550(&var_178)
__security_check_cookie(rax_1 ^ &var_1e8)
return result
