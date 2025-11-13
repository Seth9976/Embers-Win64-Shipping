// 函数: sub_1418318f0
// 地址: 0x1418318f0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void var_4a8
int64_t rax_1 = __security_cookie ^ &var_4a8
int64_t* r15 = nullptr
int32_t rbx = 0
int32_t var_448 = 0
int128_t var_260 = zx.o(0)
void*** rax_2 = j_sub_140a82f30(0x88)
void*** rdi_1

if (rax_2 == 0)
    rdi_1 = nullptr
else
    rdi_1 = sub_1406ca050(rax_2, arg2)

void*** rax_4 = j_sub_140a82f30(0x18)

if (rax_4 == 0)
    rax_4 = nullptr
else
    rax_4[1].d = 1
    *rax_4 = &data_142d83c20
    *(rax_4 + 0xc) = 1
    rax_4[2] = rdi_1

void*** var_3d8 = rdi_1
uint128_t zmm0 = var_3d8.o
uint128_t var_248 = zmm0
void* rax_5 = _mm_bsrli_si128(zmm0, 8).q

if (rax_5 != 0)
    *(rax_5 + 8) += 1
    
    if (rax_4 != 0)
        rax_4[1].d -= 1
        
        if (rax_4[1].d == 1)
            (**rax_4)(rax_4)
            int32_t temp1_1 = *(rax_4 + 0xc)
            *(rax_4 + 0xc) -= 1
            
            if (temp1_1 == 1)
                (*rax_4)[1](rax_4, 1)

sub_141834c60(arg1)
char rax_8 = sub_1409173d0(&var_248, &var_260, 0)
int64_t* r13_1

if (rax_8 != 0)
    r13_1 = var_260.q

if (rax_8 == 0 || r13_1 == 0)
    rdi_1.b = 0
else
    int64_t var_f8
    __builtin_memset(&var_f8, 0, 0x2c)
    int32_t var_cc_1 = 0x80
    int32_t var_c8_1 = 0xffffffff
    int32_t var_c4_1 = 0
    int64_t var_b8_1 = 0
    int32_t var_b0_1 = 0
    int32_t var_3c8 = 0
    int64_t* var_470 = nullptr
    int32_t var_468_1 = 0
    sub_1405947f0(&var_470, 0x14)
    int32_t rax_9 = var_468_1 + 0x14
    var_468_1 = rax_9
    
    if (rax_9 s> 0)
        sub_140594770(&var_470)
    
    int64_t* rsi_1 = var_470
    UnDecorator::getReferenceType(rsi_1, u"ManifestFileVersion", 0x28)
    int32_t i_10
    sub_14062d6e0(r13_1, &i_10, &var_470)
    int64_t i_20 = sx.q(i_10)
    void* rcx_9
    
    if (i_20.d != 0xffffffff)
        rcx_9 = *r13_1 + i_20 * 0x28
    
    int64_t* var_280_1
    int64_t* rdi_2
    
    if (i_20.d == 0xffffffff || rcx_9 == 0)
        rdi_2 = nullptr
        var_280_1 = nullptr
    else
        int64_t* rax_11 = *(rcx_9 + 0x18)
        rdi_2 = *(rcx_9 + 0x10)
        var_280_1 = rax_11
        
        if (rax_11 != 0)
            rax_11[1].d += 1
    
    if (rsi_1 != 0)
        sub_140a74f90(rsi_1)
    
    void* i_19
    char rax_13
    
    if (rdi_2 != 0)
        rbx = 1
        rax_13 = sub_140a35530(sub_140b74df0(rdi_2, &i_19), &var_3c8, 4)
    
    if (rdi_2 == 0 || rax_13 == 0)
        rdi_2.b = 0
    else
        rdi_2 = 1
    
    if ((rbx.b & 1) != 0)
        void* i_31 = i_19
        rbx &= 0xfffffffe
        
        if (i_31 != 0)
            sub_140a74f90(i_31)
    
    if (rdi_2.b == 0)
        *(arg1 + 8) = 1
    else
        int32_t rax_14 = var_3c8
        *(arg1 + 8) = rax_14
        
        if (rax_14 == 0xff)
            *(arg1 + 8) = 8
    
    var_470 = nullptr
    int32_t var_468_2 = 0
    sub_1405947f0(&var_470, 6)
    int32_t rax_15 = var_468_2 + 6
    var_468_2 = rax_15
    
    if (rax_15 s> 0)
        sub_140594770(&var_470)
    
    int64_t* rdi_3 = var_470
    UnDecorator::getReferenceType(rdi_3, u"AppID", 0xc)
    sub_14062d6e0(r13_1, &i_10, &var_470)
    int64_t i_21 = sx.q(i_10)
    void* rcx_17
    
    if (i_21.d != 0xffffffff)
        rcx_17 = *r13_1 + i_21 * 0x28
    
    int64_t* var_410
    int64_t* var_278_1
    
    if (i_21.d == 0xffffffff || rcx_17 == 0)
        var_410 = nullptr
        var_278_1 = nullptr
    else
        int64_t* rdx_10 = *(rcx_17 + 0x18)
        var_410 = *(rcx_17 + 0x10)
        var_278_1 = rdx_10
        
        if (rdx_10 != 0)
            rdx_10[1].d += 1
    
    if (rdi_3 != 0)
        sub_140a74f90(rdi_3)
    
    var_470 = nullptr
    int32_t var_468_3 = 0
    sub_1405947f0(&var_470, 0xe)
    int32_t rax_18 = var_468_3 + 0xe
    var_468_3 = rax_18
    
    if (rax_18 s> 0)
        sub_140594770(&var_470)
    
    int64_t* rdi_4 = var_470
    UnDecorator::getReferenceType(rdi_4, u"AppNameString", 0x1c)
    sub_14062d6e0(r13_1, &i_10, &var_470)
    int64_t i_22 = sx.q(i_10)
    void* rcx_23
    
    if (i_22.d != 0xffffffff)
        rcx_23 = *r13_1 + i_22 * 0x28
    
    int64_t* var_408_1
    int64_t* var_288_1
    
    if (i_22.d == 0xffffffff || rcx_23 == 0)
        var_408_1 = nullptr
        var_288_1 = nullptr
    else
        int64_t* rdx_14 = *(rcx_23 + 0x18)
        var_408_1 = *(rcx_23 + 0x10)
        var_288_1 = rdx_14
        
        if (rdx_14 != 0)
            rdx_14[1].d += 1
    
    if (rdi_4 != 0)
        sub_140a74f90(rdi_4)
    
    var_470 = nullptr
    int32_t var_468_4 = 0
    sub_1405947f0(&var_470, 0x13)
    int32_t rax_21 = var_468_4 + 0x13
    var_468_4 = rax_21
    
    if (rax_21 s> 0)
        sub_140594770(&var_470)
    
    int64_t* rdi_5 = var_470
    UnDecorator::getReferenceType(rdi_5, u"BuildVersionString", 0x26)
    sub_14062d6e0(r13_1, &i_10, &var_470)
    int64_t i_23 = sx.q(i_10)
    void* rcx_29
    
    if (i_23.d != 0xffffffff)
        rcx_29 = *r13_1 + i_23 * 0x28
    
    int64_t* var_400
    int64_t* var_270_1
    
    if (i_23.d == 0xffffffff || rcx_29 == 0)
        var_400 = nullptr
        var_270_1 = nullptr
    else
        int64_t* rdx_18 = *(rcx_29 + 0x18)
        var_400 = *(rcx_29 + 0x10)
        var_270_1 = rdx_18
        
        if (rdx_18 != 0)
            rdx_18[1].d += 1
    
    if (rdi_5 != 0)
        sub_140a74f90(rdi_5)
    
    var_470 = nullptr
    int32_t var_468_5 = 0
    sub_1405947f0(&var_470, 0x10)
    int32_t rax_24 = var_468_5 + 0x10
    var_468_5 = rax_24
    
    if (rax_24 s> 0)
        sub_140594770(&var_470)
    
    int64_t* rsi_2 = var_470
    int32_t rdi_6 = 0x20
    UnDecorator::getReferenceType(rsi_2, u"LaunchExeString", 0x20)
    sub_14062d6e0(r13_1, &i_10, &var_470)
    int64_t i_24 = sx.q(i_10)
    void* rcx_35
    
    if (i_24.d != 0xffffffff)
        rcx_35 = *r13_1 + i_24 * 0x28
    
    int64_t* var_268_1
    
    if (i_24.d == 0xffffffff || rcx_35 == 0)
        var_448.q = 0
        var_268_1 = nullptr
    else
        int64_t* rdx_22 = *(rcx_35 + 0x18)
        var_448.q = *(rcx_35 + 0x10)
        var_268_1 = rdx_22
        
        if (rdx_22 != 0)
            rdx_22[1].d += 1
    
    if (rsi_2 != 0)
        sub_140a74f90(rsi_2)
    
    var_470 = nullptr
    int32_t var_468_6 = 0
    sub_1405947f0(&var_470, 0xe)
    int32_t rax_27 = var_468_6 + 0xe
    var_468_6 = rax_27
    
    if (rax_27 s> 0)
        sub_140594770(&var_470)
    
    int64_t* rsi_3 = var_470
    UnDecorator::getReferenceType(rsi_3, u"LaunchCommand", 0x1c)
    sub_14062d6e0(r13_1, &i_10, &var_470)
    int64_t i_25 = sx.q(i_10)
    void* rcx_41
    
    if (i_25.d != 0xffffffff)
        rcx_41 = *r13_1 + i_25 * 0x28
    
    int64_t* var_290_1
    int64_t* r12_1
    
    if (i_25.d == 0xffffffff || rcx_41 == 0)
        r12_1 = nullptr
        var_290_1 = nullptr
    else
        int64_t* rax_29 = *(rcx_41 + 0x18)
        r12_1 = *(rcx_41 + 0x10)
        var_290_1 = rax_29
        
        if (rax_29 != 0)
            rax_29[1].d += 1
    
    if (rsi_3 != 0)
        sub_140a74f90(rsi_3)
    
    var_470 = nullptr
    int32_t var_468_7 = 0
    sub_1405947f0(&var_470, 0xb)
    int32_t rax_30 = var_468_7 + 0xb
    var_468_7 = rax_30
    
    if (rax_30 s> 0)
        sub_140594770(&var_470)
    
    int64_t* rsi_4 = var_470
    UnDecorator::getReferenceType(rsi_4, u"PrereqName", 0x16)
    sub_14062d6e0(r13_1, &i_10, &var_470)
    int64_t i_26 = sx.q(i_10)
    void* rcx_47
    
    if (i_26.d != 0xffffffff)
        rcx_47 = *r13_1 + i_26 * 0x28
    
    int64_t* var_298_1
    int64_t* r14_1
    
    if (i_26.d == 0xffffffff || rcx_47 == 0)
        r14_1 = nullptr
        var_298_1 = nullptr
    else
        int64_t* rax_32 = *(rcx_47 + 0x18)
        r14_1 = *(rcx_47 + 0x10)
        var_298_1 = rax_32
        
        if (rax_32 != 0)
            rax_32[1].d += 1
    
    if (rsi_4 != 0)
        sub_140a74f90(rsi_4)
    
    var_470 = nullptr
    int32_t var_468_8 = 0
    sub_1405947f0(&var_470, 0xb)
    int32_t rax_33 = var_468_8 + 0xb
    var_468_8 = rax_33
    
    if (rax_33 s> 0)
        sub_140594770(&var_470)
    
    int64_t* rsi_5 = var_470
    UnDecorator::getReferenceType(rsi_5, u"PrereqPath", 0x16)
    sub_14062d6e0(r13_1, &i_10, &var_470)
    int64_t i_27 = sx.q(i_10)
    void* rcx_53
    
    if (i_27.d != 0xffffffff)
        rcx_53 = *r13_1 + i_27 * 0x28
    
    int64_t* var_2a0_1
    
    if (i_27.d == 0xffffffff || rcx_53 == 0)
        var_2a0_1 = nullptr
    else
        int64_t* rax_35 = *(rcx_53 + 0x18)
        r15 = *(rcx_53 + 0x10)
        var_2a0_1 = rax_35
        
        if (rax_35 != 0)
            rax_35[1].d += 1
    
    if (rsi_5 != 0)
        sub_140a74f90(rsi_5)
    
    var_470 = nullptr
    int32_t var_468_9 = 0
    sub_1405947f0(&var_470, 0xb)
    int32_t rax_36 = var_468_9 + 0xb
    var_468_9 = rax_36
    
    if (rax_36 s> 0)
        sub_140594770(&var_470)
    
    int64_t* rsi_6 = var_470
    UnDecorator::getReferenceType(rsi_6, u"PrereqArgs", 0x16)
    sub_14062d6e0(r13_1, &i_10, &var_470)
    int64_t i_28 = sx.q(i_10)
    void* rcx_59
    
    if (i_28.d != 0xffffffff)
        rcx_59 = *r13_1 + i_28 * 0x28
    
    int64_t* var_2a8_1
    int64_t* r13_2
    
    if (i_28.d == 0xffffffff || rcx_59 == 0)
        r13_2 = nullptr
        var_2a8_1 = nullptr
    else
        int64_t* rax_38 = *(rcx_59 + 0x18)
        r13_2 = *(rcx_59 + 0x10)
        var_2a8_1 = rax_38
        
        if (rax_38 != 0)
            rax_38[1].d += 1
    
    if (rsi_6 != 0)
        sub_140a74f90(rsi_6)
    
    int64_t* rax_39 = var_410
    
    if (rax_39 == 0)
        r12_1.b = 0
    else
        char rax_41 = sub_140a35530(sub_140b74df0(rax_39, &i_19), arg1 + 0x10, 4)
        void* i_32 = i_19
        rsi_6.b = rax_41 != 0
        rbx = (rbx | 2) & 0xfffffffd
        
        if (i_32 != 0)
            sub_140a74f90(i_32)
        
        if (rsi_6.b == 0 || var_408_1 == 0)
            r12_1.b = 0
        else
            sub_140597da0(arg1 + 0x18, sub_140b74df0(var_408_1, &i_19))
            void* i_33 = i_19
            
            if (i_33 != 0)
                sub_140a74f90(i_33)
            
            int64_t* rax_44 = var_400
            
            if (rax_44 == 0)
                r12_1.b = 0
            else
                sub_140597da0(arg1 + 0x28, sub_140b74df0(rax_44, &i_19))
                void* i_34 = i_19
                
                if (i_34 != 0)
                    sub_140a74f90(i_34)
                
                int64_t* rax_46 = var_448.q
                
                if (rax_46 == 0)
                    r12_1.b = 0
                else
                    sub_140597da0(arg1 + 0x38, sub_140b74df0(rax_46, &i_19))
                    void* i_35 = i_19
                    
                    if (i_35 != 0)
                        sub_140a74f90(i_35)
                    
                    if (r12_1 == 0)
                        r12_1.b = 0
                    else
                        sub_140597da0(arg1 + 0x48, sub_140b74df0(r12_1, &i_19))
                        void* i_36 = i_19
                        
                        if (i_36 != 0)
                            sub_140a74f90(i_36)
                        
                        r12_1.b = 1
    
    int64_t* var_440
    int32_t i_9
    int64_t* rcx_72
    int32_t rbx_2
    int64_t* rsi_8
    
    if (r14_1 == 0)
        rbx_2 = rbx | 8
        rsi_8 = &var_440
        rcx_72 = nullptr
        var_440 = nullptr
        i_9 = 0
    else
        rbx_2 = rbx | 4
        int64_t* rax_49 = sub_140b74df0(r14_1, &i_19)
        rcx_72 = var_440
        rsi_8 = rax_49
    
    if (arg1 + 0xa8 != rsi_8)
        int64_t rcx_73 = *(arg1 + 0xa8)
        
        if (rcx_73 != 0)
            sub_140a74f90(rcx_73)
        
        *(arg1 + 0xa8) = *rsi_8
        *rsi_8 = 0
        *(arg1 + 0xb0) = rsi_8[1].d
        *(arg1 + 0xb4) = *(rsi_8 + 0xc)
        rsi_8[1] = 0
        rcx_72 = var_440
    
    if ((rbx_2.b & 8) != 0)
        rbx_2 &= 0xfffffff7
        
        if (rcx_72 != 0)
            sub_140a74f90(rcx_72)
    
    if ((rbx_2.b & 4) != 0)
        void* i_37 = i_19
        rbx_2 &= 0xfffffffb
        
        if (i_37 != 0)
            sub_140a74f90(i_37)
    
    int64_t* rcx_75
    int64_t* rsi_9
    
    if (r15 == 0)
        rcx_75 = r15
        i_9 = r15.d
        var_440 = rcx_75
        rsi_9 = &var_440
    else
        int64_t* rax_53 = sub_140b74df0(r15, &i_19)
        rcx_75 = var_440
        rsi_9 = rax_53
        r15 = nullptr
        rdi_6 = 0x10
    
    void* r14_4 = arg1
    int32_t rdi_7 = rdi_6 | rbx_2
    
    if (r14_4 + 0xb8 != rsi_9)
        int64_t rcx_76 = *(r14_4 + 0xb8)
        
        if (rcx_76 != 0)
            sub_140a74f90(rcx_76)
        
        *(r14_4 + 0xb8) = *rsi_9
        *rsi_9 = r15
        *(r14_4 + 0xc0) = rsi_9[1].d
        *(r14_4 + 0xc4) = *(rsi_9 + 0xc)
        rsi_9[1] = 0
        rcx_75 = var_440
    
    if ((rdi_7.b & 0x20) != 0)
        rdi_7 &= 0xffffffdf
        
        if (rcx_75 != 0)
            sub_140a74f90(rcx_75)
    
    if ((rdi_7.b & 0x10) != 0)
        void* i_38 = i_19
        rdi_7 &= 0xffffffef
        
        if (i_38 != 0)
            sub_140a74f90(i_38)
    
    int64_t* rcx_78
    int64_t* rbx_4
    int32_t r13_3
    
    if (r13_2 == 0)
        rcx_78 = r15
        i_9 = 0
        var_440 = rcx_78
        rbx_4 = &var_440
        r13_3 = 0x80
    else
        int64_t* rax_57 = sub_140b74df0(r13_2, &i_19)
        rcx_78 = var_440
        rbx_4 = rax_57
        r13_3 = 0x40
    
    int32_t r13_4 = r13_3 | rdi_7
    int32_t var_450_1 = r13_4
    
    if (r14_4 + 0xc8 != rbx_4)
        int64_t rcx_79 = *(r14_4 + 0xc8)
        
        if (rcx_79 != 0)
            sub_140a74f90(rcx_79)
        
        *(r14_4 + 0xc8) = *rbx_4
        *rbx_4 = r15
        *(r14_4 + 0xd0) = rbx_4[1].d
        *(r14_4 + 0xd4) = *(rbx_4 + 0xc)
        rbx_4[1] = 0
        rcx_78 = var_440
    
    if (r13_4.b s< 0)
        r13_4 &= 0xffffff7f
        var_450_1 = r13_4
        
        if (rcx_78 != 0)
            sub_140a74f90(rcx_78)
    
    if ((r13_4.b & 0x40) != 0)
        void* i_39 = i_19
        r13_4 &= 0xffffffbf
        var_450_1 = r13_4
        
        if (i_39 != 0)
            sub_140a74f90(i_39)
    
    var_470 = r15
    int32_t var_468_10 = 0
    sub_1405947f0(&var_470, 0x11)
    int32_t rax_61 = var_468_10 + 0x11
    var_468_10 = rax_61
    
    if (rax_61 s> 0)
        sub_140594770(&var_470)
    
    int64_t* rbx_5 = var_470
    UnDecorator::getReferenceType(rbx_5, u"FileManifestList", 0x22)
    sub_14062d6e0(r13_1, &i_10, &var_470)
    int64_t i_29 = sx.q(i_10)
    void* rcx_84
    
    if (i_29.d != 0xffffffff)
        rcx_84 = *r13_1 + i_29 * 0x28
    
    int64_t* var_2b0_1
    int64_t* rdi_9
    
    if (i_29.d == 0xffffffff || rcx_84 == 0)
        rdi_9 = r15
        var_2b0_1 = r15
    else
        int64_t* rax_63 = *(rcx_84 + 0x18)
        rdi_9 = *(rcx_84 + 0x10)
        var_2b0_1 = rax_63
        
        if (rax_63 != 0)
            rax_63[1].d += 1
    
    if (rbx_5 != 0)
        sub_140a74f90(rbx_5)
    
    char var_478
    void*** var_460
    int32_t var_420
    void* i_6
    int64_t* var_320
    int64_t* var_318
    int64_t var_310
    int64_t* var_308
    int32_t var_1e8
    double var_1a8[0x2]
    int64_t* var_128
    
    if (r12_1.b == 0 || rdi_9 == 0)
        var_478 = 0
    else
        r12_1.b = 1
        var_478 = 1
        int64_t* rax_64 = sub_140b74a70(rdi_9)
        int64_t* rdx_52 = r15
        var_440 = rdx_52
        int32_t i_8 = rax_64[1].d
        int64_t rbx_6 = *rax_64
        i_10 = i_8
        i_9 = i_8
        
        if (i_8 != 0)
            sub_14061cb30(&var_440, i_8, 0)
            rdx_52 = var_440
            int64_t* rcx_88 = rdx_52
            void* rbx_7 = rbx_6 - rdx_52
            int32_t i
            
            do
                *rcx_88 = *(rbx_7 + rcx_88)
                void* rax_66 = *(rbx_7 + rcx_88 + 8)
                rcx_88[1] = rax_66
                
                if (rax_66 != 0)
                    *(rax_66 + 8) += 1
                
                rcx_88 = &rcx_88[2]
                i = i_8
                i_8 -= 1
            while (i != 1)
            i_8 = i_9
            i_10 = i_8
        else
            i_9 = r15.d
        
        int32_t i_1 = r15.d
        
        while (i_1 s>= 0)
            if (i_1 s>= i_8)
                break
            
            if (r12_1.b == 0)
                break
            
            int64_t* rcx_89 = rdx_52[sx.q(i_1) * 2]
            int64_t** rax_70 = (**rcx_89)(rcx_89)
            void* i_11 = rax_70[1]
            int64_t* rsi_11 = *rax_70
            var_410 = rsi_11
            i_6 = i_11
            
            if (i_11 != 0)
                *(i_11 + 8) += 1
            
            int64_t rdi_10 = sx.q(*(r14_4 + 0x100))
            int64_t var_88_1 = 0
            int64_t var_80_1 = 0
            int32_t rax_71 = (rdi_10 + 1).d
            *(r14_4 + 0x100) = rax_71
            
            if (rax_71 s> *(r14_4 + 0x104))
                sub_14090a6a0(r14_4 + 0xf8)
            
            int64_t rax_72 = *(r14_4 + 0xf8)
            int64_t rcx_92 = rdi_10 * 0x60
            int64_t* var_330 = r15
            int32_t var_328_1 = 0
            *(rcx_92 + rax_72) = r15
            *(rcx_92 + rax_72 + 8) = 0
            *(rcx_92 + rax_72 + 0x10) = r15
            *(rcx_92 + rax_72 + 0x18) = 0
            *(rcx_92 + rax_72 + 0x20) = var_88_1.o
            *(rcx_92 + rax_72 + 0x30) = 0
            *(rcx_92 + rax_72 + 0x34) = 0
            *(rcx_92 + rax_72 + 0x38) = r15
            *(rcx_92 + rax_72 + 0x40) = 0
            *(rcx_92 + rax_72 + 0x48) = r15
            *(rcx_92 + rax_72 + 0x50) = 0
            *(rcx_92 + rax_72 + 0x58) = r15
            int64_t* rdi_12 = *(r14_4 + 0xf8) + rcx_92
            int64_t* var_408_2 = rdi_12
            sub_1405947f0(&var_330, 9)
            int32_t rax_73 = var_328_1 + 9
            var_328_1 = rax_73
            
            if (rax_73 s> 0)
                sub_140594770(&var_330)
            
            UnDecorator::getReferenceType(var_330, u"Filename", 0x12)
            int64_t var_238
            sub_140597da0(rdi_12, sub_140b75430(rsi_11, &var_238, &var_330))
            int64_t rcx_98 = var_238
            
            if (rcx_98 != 0)
                sub_140a74f90(rcx_98)
            
            int64_t* rcx_99 = var_330
            
            if (rcx_99 != 0)
                sub_140a74f90(rcx_99)
            
            int64_t* var_3c0 = r15
            int32_t var_3b8_1 = 0
            sub_1405947f0(&var_3c0, 9)
            int32_t rax_75 = var_3b8_1 + 9
            var_3b8_1 = rax_75
            
            if (rax_75 s> 0)
                sub_140594770(&var_3c0)
            
            UnDecorator::getReferenceType(var_3c0, u"FileHash", 0x12)
            int64_t var_228
            char rax_77 = sub_140a35530(sub_140b75430(rsi_11, &var_228, &var_3c0), &rdi_12[4], 0x14)
            int64_t rcx_105 = var_228
            r12_1.b = rax_77 != 0
            
            if (rcx_105 != 0)
                sub_140a74f90(rcx_105)
            
            int64_t* rcx_106 = var_3c0
            int32_t r13_7 = (r13_4 | 0x300) & 0xfffffcff
            int32_t var_450_2 = r13_7
            
            if (rcx_106 != 0)
                sub_140a74f90(rcx_106)
            
            int64_t* var_3b0 = r15
            int32_t var_3a8_1 = 0
            sub_1405947f0(&var_3b0, 0xf)
            int32_t rax_78 = var_3a8_1 + 0xf
            var_3a8_1 = rax_78
            
            if (rax_78 s> 0)
                sub_140594770(&var_3b0)
            
            UnDecorator::getReferenceType(var_3b0, u"FileChunkParts", 0x1e)
            int64_t* rax_79 = sub_140b750d0(rsi_11, &var_3b0)
            int64_t* rsi_12 = r15
            uint64_t var_2c0 = r15
            int32_t j_5 = rax_79[1].d
            void* rbx_9 = *rax_79
            int32_t j_7 = j_5
            int32_t j_8 = j_5
            
            if (j_5 != 0)
                sub_14061cb30(&var_2c0, j_5, 0)
                rsi_12 = var_2c0
                int64_t* rcx_112 = rsi_12
                rbx_9 -= rsi_12
                int32_t j
                
                do
                    *rcx_112 = *(rbx_9 + rcx_112)
                    void* rax_81 = *(rbx_9 + rcx_112 + 8)
                    rcx_112[1] = rax_81
                    
                    if (rax_81 != 0)
                        *(rax_81 + 8) += 1
                    
                    rcx_112 = &rcx_112[2]
                    j = j_5
                    j_5 -= 1
                while (j != 1)
                j_5 = j_8
                j_7 = j_5
            else
                int32_t var_2b4_1 = r15.d
            
            int64_t* rcx_113 = var_3b0
            
            if (rcx_113 != 0)
                sub_140a74f90(rcx_113)
            
            while (r15.d s>= 0)
                if (r15.d s>= j_5)
                    break
                
                if (r12_1.b == 0)
                    break
                
                r12_1 = nullptr
                int64_t rdi_13 = sx.q(rdi_12[0xa].d)
                __builtin_memset(&var_1e8, 0, 0x18)
                int32_t rax_82 = (rdi_13 + 1).d
                rdi_12[0xa].d = rax_82
                
                if (rax_82 s> *(rdi_12 + 0x54))
                    sub_1405a4df0(&rdi_12[9])
                
                int64_t rax_83 = rdi_12[9]
                int64_t rcx_115 = rdi_13 * 3
                *(rax_83 + (rcx_115 << 3)) = var_1e8.o
                int32_t var_1d8
                *(rax_83 + (rcx_115 << 3) + 0x10) = var_1d8.q
                int128_t* r14_5 = rdi_12[9] + (rcx_115 << 3)
                int64_t* rcx_116 = rsi_12[sx.q(r15.d) * 2]
                int64_t* rax_88 = (**rcx_116)(rcx_116)
                int64_t* rdi_14 = rax_88[1]
                int64_t* rsi_13 = *rax_88
                
                if (rdi_14 != 0)
                    rdi_14[1].d += 1
                
                int64_t var_3a0 = 0
                int32_t var_398_1 = 0
                sub_1405947f0(&var_3a0, 5)
                int32_t rax_89 = var_398_1 + 5
                var_398_1 = rax_89
                
                if (rax_89 s> 0)
                    sub_140594770(&var_3a0)
                
                UnDecorator::getReferenceType(var_3a0, u"Guid", 0xa)
                int64_t var_218
                char rax_91 = sub_140b21e10(sub_140b75430(rsi_13, &var_218, &var_3a0), r14_5)
                int64_t rcx_122 = var_218
                rbx_9.b = rax_91 != 0
                
                if (rcx_122 != 0)
                    sub_140a74f90(rcx_122)
                
                int64_t rcx_123 = var_3a0
                r13_7 = (r13_7 | 0xc00) & 0xfffff3ff
                
                if (rcx_123 != 0)
                    sub_140a74f90(rcx_123)
                
                int64_t var_390
                int64_t var_208
                char rax_94
                
                if (rbx_9.b != 0)
                    var_390 = 0
                    int32_t var_388_1 = 0
                    sub_1405947f0(&var_390, 7)
                    int32_t rax_92 = var_388_1 + 7
                    var_388_1 = rax_92
                    
                    if (rax_92 s> 0)
                        sub_140594770(&var_390)
                    
                    UnDecorator::getReferenceType(var_390, u"Offset", 0xe)
                    r13_7 |= 0x3000
                    rax_94 = sub_140a35530(sub_140b75430(rsi_13, &var_208, &var_390), &r14_5[1], 4)
                
                if (rbx_9.b == 0 || rax_94 == 0)
                    rbx_9.b = 0
                else
                    rbx_9.b = 1
                
                if (test_bit(r13_7, 0xd))
                    int64_t rcx_129 = var_208
                    r13_7 &= 0xffffdfff
                    
                    if (rcx_129 != 0)
                        sub_140a74f90(rcx_129)
                
                if (test_bit(r13_7, 0xc))
                    int64_t rcx_130 = var_390
                    r13_7 &= 0xffffefff
                    
                    if (rcx_130 != 0)
                        sub_140a74f90(rcx_130)
                
                int64_t var_380
                int64_t var_1f8
                
                if (rbx_9.b != 0)
                    var_380 = 0
                    int32_t var_378_1 = 0
                    sub_1405947f0(&var_380, 5)
                    int32_t rax_95 = var_378_1 + 5
                    var_378_1 = rax_95
                    
                    if (rax_95 s> 0)
                        sub_140594770(&var_380)
                    
                    UnDecorator::getReferenceType(var_380, u"Size", 0xa)
                    r13_7 |= 0xc000
                    
                    if (sub_140a35530(sub_140b75430(rsi_13, &var_1f8, &var_380), r14_5 + 0x14, 4)
                            != 0)
                        r12_1.b = 1
                
                if (test_bit(r13_7, 0xf))
                    int64_t rcx_136 = var_1f8
                    r13_7 &= 0xffff7fff
                    
                    if (rcx_136 != 0)
                        sub_140a74f90(rcx_136)
                
                if (test_bit(r13_7, 0xe))
                    int64_t rcx_137 = var_380
                    r13_7 &= 0xffffbfff
                    
                    if (rcx_137 != 0)
                        sub_140a74f90(rcx_137)
                
                sub_140acafe0(&var_f8, &var_400, r14_5, nullptr)
                
                if (rdi_14 != 0)
                    rdi_14[1].d -= 1
                    
                    if (rdi_14[1].d == 1)
                        (**rdi_14)(rdi_14)
                        int32_t temp20_1 = *(rdi_14 + 0xc)
                        *(rdi_14 + 0xc) -= 1
                        
                        if (temp20_1 == 1)
                            (*(*rdi_14 + 8))(rdi_14, 1)
                
                j_5 = j_7
                r15 = zx.q(r15.d + 1)
                rdi_12 = var_408_2
                rsi_12 = var_2c0
            
            var_478 = r12_1.b
            int64_t var_300 = 0
            int32_t var_2f8_1 = 0
            sub_1405947f0(&var_300, 0xc)
            int32_t rax_100 = var_2f8_1 + 0xc
            var_2f8_1 = rax_100
            
            if (rax_100 s> 0)
                sub_140594770(&var_300)
            
            int64_t rdi_15 = var_300
            UnDecorator::getReferenceType(rdi_15, u"InstallTags", 0x18)
            int64_t* rsi_14 = var_410
            sub_14062d6e0(rsi_14, &var_320, &var_300)
            int64_t rax_101 = sx.q(var_320.d)
            void* const rcx_145
            
            if (rax_101.d == 0xffffffff)
                rcx_145 = nullptr
            else
                rcx_145 = *rsi_14 + rax_101 * 0x28
            
            int64_t* rax_103 = rcx_145 + 0x10
            
            if (rcx_145 == 0)
                rax_103 = nullptr
            
            void* rcx_146
            
            if (rax_103 != 0)
                rcx_146 = *rax_103
            
            if (rax_103 == 0 || rcx_146 == 0 || *(rcx_146 + 8) != 5)
                rbx_9.b = 0
            else
                rbx_9.b = 1
            
            if (rdi_15 != 0)
                sub_140a74f90(rdi_15)
            
            if (rbx_9.b != 0)
                int64_t var_370 = 0
                int32_t var_368_1 = 0
                sub_1405947f0(&var_370, 0xc)
                int32_t rax_104 = var_368_1 + 0xc
                var_368_1 = rax_104
                
                if (rax_104 s> 0)
                    sub_140594770(&var_370)
                
                UnDecorator::getReferenceType(var_370, u"InstallTags", 0x18)
                void** rax_105 = sub_140b750d0(rsi_14, &var_370)
                void*** r12_2 = nullptr
                var_3d8 = nullptr
                int32_t j_6 = rax_105[1].d
                rbx_9 = *rax_105
                void*** var_3d0
                var_3d0.d = j_6
                
                if (j_6 != 0)
                    sub_14061cb30(&var_3d8, j_6, 0)
                    r12_2 = var_3d8
                    void*** rcx_153 = r12_2
                    rbx_9 -= r12_2
                    int32_t j_1
                    
                    do
                        *rcx_153 = *(rbx_9 + rcx_153)
                        void* rax_107 = *(rbx_9 + rcx_153 + 8)
                        rcx_153[1] = rax_107
                        
                        if (rax_107 != 0)
                            *(rax_107 + 8) += 1
                        
                        rcx_153 = &rcx_153[2]
                        j_1 = j_6
                        j_6 -= 1
                    while (j_1 != 1)
                    j_6 = var_3d0.d
                else
                    var_3d0:4.d = 0
                
                int64_t rcx_154 = var_370
                
                if (rcx_154 != 0)
                    sub_140a74f90(rcx_154)
                
                char r13_10 = var_478
                
                for (int32_t j_2 = 0; j_2 s>= 0; j_2 += 1)
                    if (j_2 s>= j_6)
                        break
                    
                    if (r13_10 == 0)
                        break
                    
                    int64_t* rax_110 = sub_140b74df0(r12_2[sx.q(j_2) * 2], &var_128)
                    int64_t r14_6 = sx.q(var_408_2[8].d)
                    int32_t rcx_156 = (r14_6 + 1).d
                    var_408_2[8].d = rcx_156
                    
                    if (rcx_156 s> *(var_408_2 + 0x44))
                        sub_1405a4f90(&var_408_2[7])
                    
                    int64_t* rcx_160 = (r14_6 << 4) + var_408_2[7]
                    *rcx_160 = 0
                    *rcx_160 = *rax_110
                    *rax_110 = 0
                    rcx_160[1].d = rax_110[1].d
                    *(rcx_160 + 0xc) = *(rax_110 + 0xc)
                    rax_110[1] = 0
                    int64_t* rcx_161 = var_128
                    
                    if (rcx_161 != 0)
                        sub_140a74f90(rcx_161)
                
                if (j_6 != 0)
                    void* rdi_17 = &r12_2[1]
                    int32_t j_3
                    
                    do
                        rbx_9 = *rdi_17
                        
                        if (rbx_9 != 0)
                            int32_t temp22_1 = *(rbx_9 + 8)
                            *(rbx_9 + 8) -= 1
                            
                            if (temp22_1 == 1)
                                (**rbx_9)(rbx_9)
                                int32_t temp23_1 = *(rbx_9 + 0xc)
                                *(rbx_9 + 0xc) -= 1
                                
                                if (temp23_1 == 1)
                                    (*(*rbx_9 + 8))(rbx_9, 1)
                        
                        rdi_17 += 0x10
                        j_3 = j_6
                        j_6 -= 1
                    while (j_3 != 1)
                
                if (r12_2 != 0)
                    sub_140a74f90(r12_2)
                
                rsi_14 = var_410
                j_5 = j_7
                r12_1 = zx.q(var_478)
            
            int64_t var_2f0 = 0
            int32_t var_2e8_1 = 0
            sub_1405947f0(&var_2f0, 0x12)
            int32_t rax_116 = var_2e8_1 + 0x12
            var_2e8_1 = rax_116
            
            if (rax_116 s> 0)
                sub_140594770(&var_2f0)
            
            int64_t rdi_18 = var_2f0
            UnDecorator::getReferenceType(rdi_18, u"bIsUnixExecutable", 0x24)
            int32_t r13_11 = r13_7 | 0x10000
            sub_14062d6e0(rsi_14, &var_308, &var_2f0)
            int64_t rax_117 = sx.q(var_308.d)
            void* const rcx_169
            
            if (rax_117.d == 0xffffffff)
                rcx_169 = nullptr
            else
                rcx_169 = *rsi_14 + rax_117 * 0x28
            
            int64_t* rax_119 = rcx_169 + 0x10
            
            if (rcx_169 == 0)
                rax_119 = nullptr
            
            int64_t var_360
            char rax_121
            
            if (rax_119 != 0 && *rax_119 != 0)
                var_360 = 0
                int32_t var_358_1 = 0
                sub_1405947f0(&var_360, 0x12)
                int32_t rax_120 = var_358_1 + 0x12
                var_358_1 = rax_120
                
                if (rax_120 s> 0)
                    sub_140594770(&var_360)
                
                UnDecorator::getReferenceType(var_360, u"bIsUnixExecutable", 0x24)
                r13_11 |= 0x20000
                rax_121 = sub_140b75220(rsi_14, &var_360)
            
            if (rax_119 == 0 || *rax_119 == 0 || rax_121 == 0)
                rbx_9.b = 0
            else
                rbx_9.b = 1
            
            if (test_bit(r13_11, 0x11))
                int64_t rcx_174 = var_360
                r13_11 &= 0xfffdffff
                
                if (rcx_174 != 0)
                    sub_140a74f90(rcx_174)
            
            if (rdi_18 != 0)
                sub_140a74f90(rdi_18)
            
            if (rbx_9.b != 0)
                *(var_408_2 + 0x34) |= 4
            
            char rbx_11 = 0
            int64_t var_2e0 = 0
            int32_t var_2d8_1 = 0
            sub_1405947f0(&var_2e0, 0xc)
            int32_t rax_122 = var_2d8_1 + 0xc
            var_2d8_1 = rax_122
            
            if (rax_122 s> 0)
                sub_140594770(&var_2e0)
            
            int64_t rdi_19 = var_2e0
            UnDecorator::getReferenceType(rdi_19, u"bIsReadOnly", 0x18)
            int32_t r13_13 = (r13_11 & 0xfffeffff) | 0x40000
            sub_14062d6e0(rsi_14, &var_318, &var_2e0)
            int64_t rax_123 = sx.q(var_318.d)
            void* const rcx_180
            
            if (rax_123.d == 0xffffffff)
                rcx_180 = nullptr
            else
                rcx_180 = *rsi_14 + rax_123 * 0x28
            
            int64_t* rax_125 = rcx_180 + 0x10
            
            if (rcx_180 == 0)
                rax_125 = nullptr
            
            int64_t var_350
            
            if (rax_125 != 0 && *rax_125 != 0)
                var_350 = 0
                int32_t var_348_1 = 0
                sub_1405947f0(&var_350, 0xc)
                int32_t rax_126 = var_348_1 + 0xc
                var_348_1 = rax_126
                
                if (rax_126 s> 0)
                    sub_140594770(&var_350)
                
                UnDecorator::getReferenceType(var_350, u"bIsReadOnly", 0x18)
                r13_13 |= 0x80000
                
                if (sub_140b75220(rsi_14, &var_350) != 0)
                    rbx_11 = 1
            
            if (test_bit(r13_13, 0x13))
                int64_t rcx_185 = var_350
                r13_13 &= 0xfff7ffff
                
                if (rcx_185 != 0)
                    sub_140a74f90(rcx_185)
            
            if (rdi_19 != 0)
                sub_140a74f90(rdi_19)
            
            if (rbx_11 != 0)
                *(var_408_2 + 0x34) |= 1
            
            char rbx_12 = 0
            int64_t var_2d0 = 0
            int32_t var_2c8_1 = 0
            sub_1405947f0(&var_2d0, 0xe)
            int32_t rax_128 = var_2c8_1 + 0xe
            var_2c8_1 = rax_128
            
            if (rax_128 s> 0)
                sub_140594770(&var_2d0)
            
            int64_t rdi_20 = var_2d0
            UnDecorator::getReferenceType(rdi_20, u"bIsCompressed", 0x1c)
            int32_t r13_15 = (r13_13 & 0xfffbffff) | 0x100000
            sub_14062d6e0(rsi_14, &var_310, &var_2d0)
            int64_t rax_129 = sx.q(var_310.d)
            void* const rcx_191
            
            if (rax_129.d == 0xffffffff)
                rcx_191 = nullptr
            else
                rcx_191 = *rsi_14 + rax_129 * 0x28
            
            int64_t* rax_131 = rcx_191 + 0x10
            
            if (rcx_191 == 0)
                rax_131 = nullptr
            
            int64_t var_340
            
            if (rax_131 != 0 && *rax_131 != 0)
                var_340 = 0
                int32_t var_338_1 = 0
                sub_1405947f0(&var_340, 0xe)
                int32_t rax_132 = var_338_1 + 0xe
                var_338_1 = rax_132
                
                if (rax_132 s> 0)
                    sub_140594770(&var_340)
                
                UnDecorator::getReferenceType(var_340, u"bIsCompressed", 0x1c)
                r13_15 |= 0x200000
                
                if (sub_140b75220(rsi_14, &var_340) != 0)
                    rbx_12 = 1
            
            if (test_bit(r13_15, 0x15))
                int64_t rcx_196 = var_340
                r13_15 &= 0xffdfffff
                
                if (rcx_196 != 0)
                    sub_140a74f90(rcx_196)
            
            if (rdi_20 != 0)
                sub_140a74f90(rdi_20)
            
            if (rbx_12 != 0)
                *(var_408_2 + 0x34) |= 2
            
            var_460 = nullptr
            int32_t var_458_1 = 0
            sub_1405947f0(&var_460, 0xe)
            int32_t rax_134 = var_458_1 + 0xe
            var_458_1 = rax_134
            
            if (rax_134 s> 0)
                sub_140594770(&var_460)
            
            void*** rsi_15 = var_460
            UnDecorator::getReferenceType(rsi_15, u"SymlinkTarget", 0x1c)
            int64_t* rbx_13 = var_410
            sub_14062d6e0(rbx_13, &var_448, &var_460)
            int64_t rax_135 = sx.q(var_448)
            void* const rcx_202
            
            if (rax_135.d == 0xffffffff)
                rcx_202 = nullptr
            else
                rcx_202 = *rbx_13 + rax_135 * 0x28
            
            int64_t* rax_137 = rcx_202 + 0x10
            
            if (rcx_202 == 0)
                rax_137 = nullptr
            
            int32_t rax_140
            int64_t* rbx_14
            
            if (rax_137 == 0 || *rax_137 == 0)
                i_19 = nullptr
                rbx_14 = &i_19
                var_420 = 0
                rax_140 = 0x1000000
            else
                var_470 = nullptr
                int32_t var_468_11 = 0
                sub_1405947f0(&var_470, 0xe)
                int32_t rax_138 = var_468_11 + 0xe
                var_468_11 = rax_138
                
                if (rax_138 s> 0)
                    sub_140594770(&var_470)
                
                UnDecorator::getReferenceType(var_470, u"SymlinkTarget", 0x1c)
                rbx_14 = sub_140b75430(rbx_13, &var_1a8, &var_470)
                rax_140 = 0xc00000
            
            r13_4 = (r13_15 & 0xffefffff) | rax_140
            var_450_1 = r13_4
            
            if (&var_408_2[2] == rbx_14)
                r15 = nullptr
            else
                int64_t rcx_207 = var_408_2[2]
                
                if (rcx_207 != 0)
                    sub_140a74f90(rcx_207)
                
                r15 = nullptr
                var_408_2[2] = *rbx_14
                *rbx_14 = 0
                var_408_2[3].d = rbx_14[1].d
                *(var_408_2 + 0x1c) = *(rbx_14 + 0xc)
                rbx_14[1] = 0
            
            if (test_bit(r13_4, 0x18))
                void* i_30 = i_19
                r13_4 &= 0xfeffffff
                var_450_1 = r13_4
                
                if (i_30 != 0)
                    sub_140a74f90(i_30)
            
            if (test_bit(r13_4, 0x17))
                double rcx_209 = var_1a8[0]
                r13_4 &= 0xff7fffff
                var_450_1 = r13_4
                
                if (rcx_209 != 0)
                    sub_140a74f90(rcx_209)
            
            if (test_bit(r13_4, 0x16))
                int64_t* rcx_210 = var_470
                r13_4 &= 0xffbfffff
                var_450_1 = r13_4
                
                if (rcx_210 != 0)
                    sub_140a74f90(rcx_210)
            
            if (rsi_15 != 0)
                sub_140a74f90(rsi_15)
            
            uint64_t rsi_16 = var_2c0
            
            if (j_5 != 0)
                int64_t* rdi_22 = rsi_16 + 8
                int32_t j_4
                
                do
                    int64_t* rbx_15 = *rdi_22
                    
                    if (rbx_15 != 0)
                        rbx_15[1].d -= 1
                        
                        if (rbx_15[1].d == 1)
                            (**rbx_15)(rbx_15)
                            int32_t temp63_1 = *(rbx_15 + 0xc)
                            *(rbx_15 + 0xc) -= 1
                            
                            if (temp63_1 == 1)
                                (*(*rbx_15 + 8))(rbx_15, 1)
                    
                    rdi_22 = &rdi_22[2]
                    j_4 = j_5
                    j_5 -= 1
                while (j_4 != 1)
            
            if (rsi_16 != 0)
                sub_140a74f90(rsi_16)
            
            void* i_16 = i_6
            
            if (i_16 != 0)
                int32_t temp57_1 = *(i_16 + 8)
                *(i_16 + 8) -= 1
                
                if (temp57_1 == 1)
                    (**i_16)(i_16)
                    int32_t temp62_1 = *(i_16 + 0xc)
                    *(i_16 + 0xc) -= 1
                    
                    if (temp62_1 == 1)
                        (*(*i_16 + 8))(i_16, 1)
            
            i_8 = i_10
            i_1 += 1
            r14_4 = arg1
            rdx_52 = var_440
        
        sub_140627040(&var_440)
    
    void* i_17 = *(r14_4 + 0xf8)
    void* rdi_25 = sx.q(*(r14_4 + 0x100)) * 0x60 + i_17
    
    if (i_17 != rdi_25)
        var_420 = &i_6
        
        do
            i_6 = i_17
            i_19 = i_17
            sub_141818c20(r14_4 + 0x1b0, &var_400, &i_19, nullptr)
            i_17 += 0x60
        while (i_17 != rdi_25)
    
    int32_t var_d0
    int32_t r8_24 = var_d0
    int32_t var_1e4_1 = 1
    var_1e8 = 0
    int64_t var_e8
    int64_t* var_1e0 = &var_e8
    int32_t var_1d8_1 = 0xffffffff
    int64_t var_1d4_1 = 0
    
    if (r8_24 != 0)
        sub_14059bdd0(&var_1e8)
        r8_24 = var_d0
    
    double zmm2[0x2] = var_1d8_1.o
    var_1d4_1.d = r8_24
    double var_110_1[0x2] = zmm2
    int32_t rdx_104 = 0xffffffff << (r8_24.b & 0x1f)
    double var_120_1[0x2] = var_1e8.o
    var_128 = &var_f8
    double zmm0_1[0x2] = var_128.o
    double temp0_2[0x2] = _mm_unpackhi_pd(zmm2, zmm2[0])
    var_1a8 = zmm0_1
    double var_198_1[0x2] = var_120_1
    int64_t var_188_1 = temp0_2.q
    
    while (true)
        int64_t rax_151 = sx.q(var_198_1[1]:4.d)
        double rdx_105 = var_1a8[0]
        
        if (rax_151.d == (rdx_104.q u>> 0x20).d && var_198_1[0] == &var_e8 && rdx_105 == &var_f8)
            break
        
        __builtin_memset(&var_1e8, 0, 0x2d)
        int64_t rdi_26 = sx.q(*(arg1 + 0xf0))
        int32_t var_1b8_1 = 0x100000
        int128_t* rsi_17 = *rdx_105 + rax_151 * 0x18
        int64_t var_1b0_1 = 0
        int32_t rax_153 = (rdi_26 + 1).d
        *(arg1 + 0xf0) = rax_153
        
        if (rax_153 s> *(arg1 + 0xf4))
            sub_1405c4fe0(arg1 + 0xe8)
        
        int64_t rax_154 = *(arg1 + 0xe8)
        int64_t rcx_225 = rdi_26 << 6
        *(rcx_225 + rax_154) = var_1e8.o
        *(rcx_225 + rax_154 + 0x10) = rdx_104.o
        int64_t var_1c8
        *(rcx_225 + rax_154 + 0x20) = var_1c8.o
        *(rcx_225 + rax_154 + 0x30) = var_1b8_1.o
        *(rcx_225 + *(arg1 + 0xe8)) = *rsi_17
        var_198_1[1].d &= not.d(var_1a8[1]:4.d)
        sub_14059bdd0(&var_1a8[1])
    
    int128_t* i_2 = *(arg1 + 0xe8)
    void* r14_9 = arg1
    char r15_3 = var_478
    void* rdi_29 = &i_2[sx.q(*(arg1 + 0xf0)) * 4]
    int64_t var_178
    __builtin_memset(&var_178, 0, 0x2c)
    int32_t var_144_1 = 0
    int64_t var_138_1 = 0
    int32_t var_130_1 = 0
    int32_t r13_17 = var_450_1
    int32_t var_14c_1 = 0x80
    int32_t var_148_1 = 0xffffffff
    
    for (; i_2 != rdi_29; i_2 = &i_2[4])
        i_6 = i_2
        sub_1418182f0(&var_178, i_2, &i_6)
    
    int64_t* rbx_17 = nullptr
    r12_1.b = 0
    var_460 = nullptr
    int32_t var_458_2 = 0
    sub_1405947f0(&var_460, 0xe)
    int32_t rax_158 = var_458_2 + 0xe
    var_458_2 = rax_158
    
    if (rax_158 s> 0)
        sub_140594770(&var_460)
    
    rdi_1 = var_460
    UnDecorator::getReferenceType(rdi_1, u"ChunkHashList", 0x1c)
    sub_14062d6e0(r13_1, &var_448, &var_460)
    int64_t rax_159 = sx.q(var_448)
    void* rcx_232
    
    if (rax_159.d != 0xffffffff)
        rcx_232 = *r13_1 + rax_159 * 0x28
    
    if (rax_159.d == 0xffffffff || rcx_232 == 0)
        i_10.q = 0
    else
        void* rax_161 = *(rcx_232 + 0x18)
        rbx_17 = *(rcx_232 + 0x10)
        i_10.q = rax_161
        
        if (rax_161 != 0)
            *(rax_161 + 8) += 1
    
    if (rdi_1 != 0)
        sub_140a74f90(rdi_1)
    
    int32_t var_1d8_2
    int32_t i_7
    
    if (r15_3 == 0 || rbx_17 == 0)
        rdi_1.b = 0
    else
        rdi_1.b = 1
        int64_t* rax_163 = (**rbx_17)(rbx_17)
        int64_t* rsi_19 = rax_163[1]
        void* rbx_18 = *rax_163
        
        if (rsi_19 != 0)
            rsi_19[1].d += 1
        
        int32_t var_1e4_2 = 1
        int64_t* rcx_235 = rbx_18 + 0x10
        var_1e8 = 0
        var_1e0 = rcx_235
        var_1d8_2 = 0xffffffff
        var_1d4_1 = 0
        
        if (*(rbx_18 + 0x28) != 0)
            sub_14059bdd0(&var_1e8)
            rcx_235 = var_1e0
        
        zmm2 = var_1d8_2.o
        var_1a8[0] = rbx_18
        var_198_1 = zmm2
        var_1a8 = var_1e8.o
        var_1e8.o = var_1a8
        uint32_t rax_165 = (zmm2[0] u>> 0x20).d
        int64_t var_1c8_1 = (_mm_unpackhi_pd(zmm2, zmm2[0])).q
        var_1d8_2.o = var_198_1
        
        if (rax_165 s< rcx_235[3].d)
            int32_t i_12 = i_7
            
            while (rdi_1.b != 0)
                int64_t* rbx_19 = var_1e8.q
                var_440 = nullptr
                int64_t var_438 = 0
                var_410 = nullptr
                rdi_1 = sx.q(i_12) * 0x28
                char rax_167 = sub_140b21e10(rdi_1 + *rbx_19, &var_440)
                char rax_170
                
                if (rax_167 != 0)
                    r13_17 |= 0x2000000
                    rax_170 = sub_140a35530(sub_140b74df0(*(*rbx_19 + rdi_1 + 0x10), &var_1a8), 
                        &var_410, 8)
                
                if (rax_167 == 0 || rax_170 == 0)
                    rdi_1.b = 0
                else
                    rdi_1.b = 1
                
                if (test_bit(r13_17, 0x19))
                    double rcx_241 = var_1a8[0]
                    r13_17 &= 0xfdffffff
                    
                    if (rcx_241 != 0)
                        sub_140a74f90(rcx_241)
                
                if (rdi_1.b != 0 && *sub_140cba0f0(&var_178, &var_400, &var_440) != 0xffffffff)
                    sub_140cba0f0(&var_178, &var_448, &var_440)
                    int64_t rax_172 = sx.q(var_448)
                    void* const rcx_246
                    
                    if (rax_172.d == 0xffffffff)
                        rcx_246 = nullptr
                    else
                        rcx_246 = (rax_172 << 5) + var_178
                    
                    r12_1.b = 1
                    *(*(rcx_246 + 0x10) + 0x10) = var_410
                
                var_1d4_1:4.d &= not.d(var_1e0:4.d)
                sub_14059bdd0(&var_1e0)
                i_12 = i_7
                
                if (i_12 s>= *(var_1d8_2.q + 0x18))
                    break
        
        if (rsi_19 != 0)
            rsi_19[1].d -= 1
            
            if (rsi_19[1].d == 1)
                (**rsi_19)(rsi_19)
                int32_t temp8_1 = *(rsi_19 + 0xc)
                *(rsi_19 + 0xc) -= 1
                
                if (temp8_1 == 1)
                    (*(*rsi_19 + 8))(rsi_19, 1)
    
    var_460 = nullptr
    int32_t var_458_3 = 0
    sub_1405947f0(&var_460, 0xd)
    int32_t rax_179 = var_458_3 + 0xd
    var_458_3 = rax_179
    
    if (rax_179 s> 0)
        sub_140594770(&var_460)
    
    void*** rsi_20 = var_460
    UnDecorator::getReferenceType(rsi_20, u"ChunkShaList", 0x1a)
    int64_t* r15_4 = r13_1
    sub_14062d6e0(r15_4, &var_448, &var_460)
    int64_t rax_180 = sx.q(var_448)
    void* rcx_255
    
    if (rax_180.d != 0xffffffff)
        rcx_255 = *r15_4 + rax_180 * 0x28
    
    int64_t* rbx_20
    
    if (rax_180.d == 0xffffffff || rcx_255 == 0)
        var_320 = nullptr
        rbx_20 = nullptr
    else
        int64_t* rax_182 = *(rcx_255 + 0x18)
        rbx_20 = *(rcx_255 + 0x10)
        var_320 = rax_182
        
        if (rax_182 != 0)
            rax_182[1].d += 1
    
    if (rsi_20 != 0)
        sub_140a74f90(rsi_20)
    
    if (rbx_20 != 0)
        int64_t* rax_184 = (**rbx_20)(rbx_20)
        int64_t* rsi_21 = rax_184[1]
        void* rbx_21 = *rax_184
        
        if (rsi_21 != 0)
            rsi_21[1].d += 1
        
        int32_t var_1e4_3 = 1
        int64_t* rcx_258 = rbx_21 + 0x10
        var_1e8 = 0
        var_1e0 = rcx_258
        var_1d8_2 = 0xffffffff
        var_1d4_1 = 0
        
        if (*(rbx_21 + 0x28) != 0)
            sub_14059bdd0(&var_1e8)
            rcx_258 = var_1e0
        
        zmm2 = var_1d8_2.o
        var_1a8[0] = rbx_21
        var_198_1 = zmm2
        var_1a8 = var_1e8.o
        var_1e8.o = var_1a8
        uint32_t rax_186 = (zmm2[0] u>> 0x20).d
        int64_t var_1c8_2 = (_mm_unpackhi_pd(zmm2, zmm2[0])).q
        var_1d8_2.o = var_198_1
        
        if (rax_186 s< rcx_258[3].d)
            int32_t i_13 = i_7
            
            while (rdi_1.b != 0)
                int64_t* rbx_22 = var_1e8.q
                __builtin_memset(&var_128, 0, 0x14)
                var_440 = nullptr
                int64_t var_438_1 = 0
                rdi_1 = sx.q(i_13) * 0x28
                char rax_188 = sub_140b21e10(rdi_1 + *rbx_22, &var_440)
                int64_t* rax_190
                int32_t rdx_123
                
                if (rax_188 != 0)
                    r13_17 |= 0x4000000
                    rax_190 = sub_140b74df0(*(rdi_1 + *rbx_22 + 0x10), &var_1a8)
                    int32_t rcx_263 = rax_190[1].d
                    rdx_123 = rcx_263 - 1
                    
                    if (rcx_263 == 0)
                        rdx_123 = 0
                
                if (rax_188 == 0 || rdx_123 != 0x28)
                    rdi_1.b = 0
                else
                    sub_140a246d0(rax_190, &var_128)
                    rdi_1.b = 1
                
                if (test_bit(r13_17, 0x1a))
                    double rcx_265 = var_1a8[0]
                    r13_17 &= 0xfbffffff
                    
                    if (rcx_265 != 0)
                        sub_140a74f90(rcx_265)
                
                if (rdi_1.b != 0 && *sub_140cba0f0(&var_178, &var_400, &var_440) != 0xffffffff)
                    sub_140cba0f0(&var_178, &var_448, &var_440)
                    int64_t rax_192 = sx.q(var_448)
                    void* const rcx_270
                    
                    if (rax_192.d == 0xffffffff)
                        rcx_270 = nullptr
                    else
                        rcx_270 = (rax_192 << 5) + var_178
                    
                    void* rcx_271 = *(rcx_270 + 0x10)
                    *(rcx_271 + 0x18) = var_128.o
                    *(rcx_271 + 0x28) = var_120_1[1].d
                
                var_1d4_1:4.d &= not.d(var_1e0:4.d)
                sub_14059bdd0(&var_1e0)
                i_13 = i_7
                
                if (i_13 s>= *(var_1d8_2.q + 0x18))
                    break
            
            r14_9 = arg1
        
        if (rsi_21 != 0)
            rsi_21[1].d -= 1
            
            if (rsi_21[1].d == 1)
                (**rsi_21)(rsi_21)
                int32_t temp11_1 = *(rsi_21 + 0xc)
                *(rsi_21 + 0xc) -= 1
                
                if (temp11_1 == 1)
                    (*(*rsi_21 + 8))(rsi_21, 1)
    
    int64_t* rbx_23 = nullptr
    var_460 = nullptr
    int32_t var_458_4 = 0
    sub_1405947f0(&var_460, 0xa)
    int32_t rax_199 = var_458_4 + 0xa
    var_458_4 = rax_199
    
    if (rax_199 s> 0)
        sub_140594770(&var_460)
    
    void*** rsi_22 = var_460
    UnDecorator::getReferenceType(rsi_22, u"PrereqIds", 0x14)
    sub_14062d6e0(r15_4, &var_448, &var_460)
    int64_t rax_200 = sx.q(var_448)
    void* rcx_279
    
    if (rax_200.d != 0xffffffff)
        rcx_279 = *r15_4 + rax_200 * 0x28
    
    if (rax_200.d == 0xffffffff || rcx_279 == 0)
        var_308 = nullptr
    else
        int64_t* rax_202 = *(rcx_279 + 0x18)
        rbx_23 = *(rcx_279 + 0x10)
        var_308 = rax_202
        
        if (rax_202 != 0)
            rax_202[1].d += 1
    
    if (rsi_22 != 0)
        sub_140a74f90(rsi_22)
    
    if (rdi_1.b == 0 || rbx_23 == 0)
        sub_140596d10(&i_19, r14_9 + 0xb8)
        sub_140a306e0(&i_19, &(*U"{}[\nt")[3], &data_142d5a024, 1)
        sub_1408f1b50(r14_9 + 0x1b0, &var_448, &i_19)
        int64_t rax_207 = sx.q(var_448)
        void* const rcx_294
        
        if (rax_207.d == 0xffffffff)
            rcx_294 = nullptr
        else
            rcx_294 = (rax_207 << 5) + *(r14_9 + 0x1b0)
        
        void** rax_208 = rcx_294 + 0x10
        
        if (rcx_294 == 0)
            rax_208 = nullptr
        
        if (rax_208 != 0)
            void* rax_209 = *rax_208
            var_198_1[0].d = *(rax_209 + 0x30)
            var_1a8 = *(rax_209 + 0x20)
            sub_141829dd0(&var_3d8, &var_1a8, 0x14)
            sub_140a5cad0(r14_9 + 0x58, &var_400, &var_3d8, nullptr)
            void*** rcx_297 = var_3d8
            
            if (rcx_297 != 0)
                sub_140a74f90(rcx_297)
        
        void* i_40 = i_19
        
        if (i_40 != 0)
            sub_140a74f90(i_40)
    else
        int64_t** rax_203 = sub_140b74a70(rbx_23)
        i_19 = nullptr
        sub_140664cf0(&i_19, *rax_203, rax_203[1].d, 0, 0)
        void* i_41 = i_19
        void* r14_12 = (sx.q(var_420) << 4) + i_41
        
        if (i_41 != r14_12)
            do
                int64_t* rbx_24 = *(i_41 + 8)
                
                if (rbx_24 != 0)
                    rbx_24[1].d += 1
                
                sub_140a5cad0(arg1 + 0x58, &var_400, sub_140b74df0(*i_41, &var_1a8), nullptr)
                double rcx_285 = var_1a8[0]
                
                if (rcx_285 != 0)
                    sub_140a74f90(rcx_285)
                
                if (rbx_24 != 0)
                    rbx_24[1].d -= 1
                    
                    if (rbx_24[1].d == 1)
                        (**rbx_24)(rbx_24)
                        int32_t temp13_1 = *(rbx_24 + 0xc)
                        *(rbx_24 + 0xc) -= 1
                        
                        if (temp13_1 == 1)
                            (*(*rbx_24 + 8))(rbx_24, 1)
                
                i_41 += 0x10
            while (i_41 != r14_12)
            
            r15_4 = r13_1
        
        sub_140627040(&i_19)
        r14_9 = arg1
    
    var_460 = nullptr
    int32_t var_458_5 = 0
    sub_1405947f0(&var_460, 0xe)
    int32_t rax_211 = var_458_5 + 0xe
    var_458_5 = rax_211
    
    if (rax_211 s> 0)
        sub_140594770(&var_460)
    
    void*** rsi_23 = var_460
    UnDecorator::getReferenceType(rsi_23, u"DataGroupList", 0x1c)
    sub_14062d6e0(r15_4, &var_448, &var_460)
    int64_t rax_212 = sx.q(var_448)
    void* rcx_302
    
    if (rax_212.d != 0xffffffff)
        rcx_302 = *r15_4 + rax_212 * 0x28
    
    int64_t* rbx_25
    
    if (rax_212.d == 0xffffffff || rcx_302 == 0)
        var_318 = nullptr
        rbx_25 = nullptr
    else
        int64_t* rax_214 = *(rcx_302 + 0x18)
        rbx_25 = *(rcx_302 + 0x10)
        var_318 = rax_214
        
        if (rax_214 != 0)
            rax_214[1].d += 1
    
    if (rsi_23 != 0)
        sub_140a74f90(rsi_23)
    
    if (rbx_25 != 0)
        int64_t* rax_216 = (**rbx_25)(rbx_25)
        int64_t* rsi_24 = rax_216[1]
        int64_t rbx_26 = *rax_216
        
        if (rsi_24 != 0)
            rsi_24[1].d += 1
        
        int32_t* rax_217 = sub_1406c8970(&var_1e8, rbx_26 + 0x10, 0)
        var_1a8[0] = rbx_26
        zmm2 = *(rax_217 + 0x10)
        var_1a8 = *rax_217
        double rax_218 = zmm2[0]
        var_1e8.o = var_1a8
        uint32_t rcx_307 = (zmm2[0] u>> 0x20).d
        var_1d8_2.o = zmm2
        int64_t var_1c8_3 = (_mm_unpackhi_pd(zmm2, zmm2[0])).q
        
        if (rcx_307 s< *(rax_218 i+ 0x18))
            int32_t i_14 = i_7
            
            while (rdi_1.b != 0)
                void** rbx_27 = var_1e8.q
                var_440 = nullptr
                int64_t var_438_2 = 0
                var_478 = 0xff
                rdi_1 = sx.q(i_14) * 0x28
                char rax_220 = sub_140b21e10(*rbx_27 + rdi_1, &var_440)
                char rax_223
                
                if (rax_220 != 0)
                    r13_17 |= 0x8000000
                    rax_223 = sub_140a35530(sub_140b74df0(*(*rbx_27 + rdi_1 + 0x10), &var_1a8), 
                        &var_478, 1)
                
                if (rax_220 == 0 || rax_223 == 0)
                    rdi_1.b = 0
                else
                    rdi_1.b = 1
                
                if (test_bit(r13_17, 0x1b))
                    double rcx_312 = var_1a8[0]
                    r13_17 &= 0xf7ffffff
                    
                    if (rcx_312 != 0)
                        sub_140a74f90(rcx_312)
                
                if (rdi_1.b != 0 && *sub_140cba0f0(&var_178, &var_400, &var_440) != 0xffffffff)
                    sub_140cba0f0(&var_178, &var_448, &var_440)
                    int64_t rax_225 = sx.q(var_448)
                    void* const rcx_317
                    
                    if (rax_225.d == 0xffffffff)
                        rcx_317 = nullptr
                    else
                        rcx_317 = (rax_225 << 5) + var_178
                    
                    *(*(rcx_317 + 0x10) + 0x2c) = var_478
                
                var_1d4_1:4.d &= not.d(var_1e0:4.d)
                sub_14059bdd0(&var_1e0)
                i_14 = i_7
                
                if (i_14 s>= *(var_1d8_2.q + 0x18))
                    break
        
        if (rsi_24 != 0)
            rsi_24[1].d -= 1
            
            if (rsi_24[1].d == 1)
                (**rsi_24)(rsi_24)
                int32_t temp19_1 = *(rsi_24 + 0xc)
                *(rsi_24 + 0xc) -= 1
                
                if (temp19_1 == 1)
                    (*(*rsi_24 + 8))(rsi_24, 1)
    else if (rdi_1.b != 0)
        char* i_3 = *(r14_9 + 0xe8)
        
        for (void* rsi_27 = &i_3[sx.q(*(r14_9 + 0xf0)) << 6]; i_3 != rsi_27; i_3 = &i_3[0x40])
            i_3[0x2c] = (sub_140b212b0(i_3, 0x10, 0) u% 0x64).b
    
    char r15_6 = 0
    var_460 = nullptr
    int32_t var_458_6 = 0
    sub_1405947f0(&var_460, 0x12)
    int32_t rax_234 = var_458_6 + 0x12
    var_458_6 = rax_234
    
    if (rax_234 s> 0)
        sub_140594770(&var_460)
    
    void*** rsi_28 = var_460
    UnDecorator::getReferenceType(rsi_28, u"ChunkFilesizeList", 0x24)
    sub_14062d6e0(r13_1, &var_448, &var_460)
    int64_t rax_235 = sx.q(var_448)
    void* r13_18
    
    if (rax_235.d != 0xffffffff)
        r13_18 = *r13_1 + rax_235 * 0x28
    
    int64_t* rbx_29
    int64_t* r13_19
    
    if (rax_235.d == 0xffffffff || r13_18 == 0)
        r13_19 = nullptr
        var_410 = nullptr
        rbx_29 = nullptr
    else
        rbx_29 = *(r13_18 + 0x10)
        r13_19 = *(r13_18 + 0x18)
        var_410 = r13_19
        
        if (r13_19 != 0)
            r13_19[1].d += 1
    
    if (rsi_28 != 0)
        sub_140a74f90(rsi_28)
    
    if (rbx_29 != 0)
        int64_t* rax_238 = (**rbx_29)(rbx_29)
        int64_t* r14_13 = rax_238[1]
        int64_t rbx_30 = *rax_238
        
        if (r14_13 != 0)
            r14_13[1].d += 1
        
        double (* rax_239)[0x2] = sub_1406c8970(&var_1e8, rbx_30 + 0x10, 0)
        var_1a8[0] = rbx_30
        zmm2 = rax_239[1]
        var_1a8 = *rax_239
        double rax_240 = zmm2[0]
        var_1e8.o = var_1a8
        uint32_t rcx_332 = (zmm2[0] u>> 0x20).d
        var_1d8_2.o = zmm2
        int64_t var_1c8_4 = (_mm_unpackhi_pd(zmm2, zmm2[0])).q
        
        if (rcx_332 s< *(rax_240 i+ 0x18))
            int32_t i_4 = i_7
            
            do
                int64_t* rbx_31 = var_1e8.q
                var_440 = nullptr
                int64_t var_438_3 = 0
                var_310 = 0
                int64_t rsi_29 = sx.q(i_4) * 0x28
                
                if (sub_140b21e10(rsi_29 + *rbx_31, &var_440) != 0)
                    sub_140a35530(sub_140b74df0(*(rsi_29 + *rbx_31 + 0x10), &var_1a8), &var_310, 8)
                    double rcx_337 = var_1a8[0]
                    
                    if (rcx_337 != 0)
                        sub_140a74f90(rcx_337)
                    
                    if (*sub_140cba0f0(&var_178, &var_400, &var_440) != 0xffffffff)
                        sub_140cba0f0(&var_178, &var_448, &var_440)
                        int64_t rax_246 = sx.q(var_448)
                        void* const rcx_342
                        
                        if (rax_246.d == 0xffffffff)
                            rcx_342 = nullptr
                        else
                            rcx_342 = (rax_246 << 5) + var_178
                        
                        r15_6 = 1
                        *(*(rcx_342 + 0x10) + 0x38) = var_310
                
                var_1d4_1:4.d &= not.d(var_1e0:4.d)
                sub_14059bdd0(&var_1e0)
                i_4 = i_7
            while (i_4 s< *(var_1d8_2.q + 0x18))
            
            r13_19 = var_410
        
        if (r14_13 != 0)
            r14_13[1].d -= 1
            
            if (r14_13[1].d == 1)
                (**r14_13)(r14_13)
                int32_t temp25_1 = *(r14_13 + 0xc)
                *(r14_13 + 0xc) -= 1
                
                if (temp25_1 == 1)
                    (*(*r14_13 + 8))(r14_13, 1)
    
    if (rbx_29 == 0 || r15_6 == 0)
        void* i_5 = *(arg1 + 0xe8)
        
        for (void* rcx_350 = (sx.q(*(arg1 + 0xf0)) << 6) + i_5; i_5 != rcx_350; i_5 += 0x40)
            *(i_5 + 0x38) = 0x100000
    
    int64_t* rbx_32 = nullptr
    var_460 = nullptr
    int32_t var_458_7 = 0
    sub_1405947f0(&var_460, 0xc)
    int32_t rax_253 = var_458_7 + 0xc
    var_458_7 = rax_253
    
    if (rax_253 s> 0)
        sub_140594770(&var_460)
    
    void*** rsi_30 = var_460
    UnDecorator::getReferenceType(rsi_30, u"bIsFileData", 0x18)
    sub_14062d6e0(r13_1, &var_448, &var_460)
    int64_t rax_254 = sx.q(var_448)
    int64_t r15_7
    
    if (rax_254.d != 0xffffffff)
        r15_7 = *r13_1 + rax_254 * 0x28
    
    int64_t* var_3f0_2
    int64_t* r15_8
    
    if (rax_254.d == 0xffffffff || r15_7 == 0)
        r15_8 = nullptr
        var_3f0_2 = nullptr
    else
        rbx_32 = *(r15_7 + 0x10)
        r15_8 = *(r15_7 + 0x18)
        var_3f0_2 = r15_8
        
        if (r15_8 != 0)
            r15_8[1].d += 1
    
    if (rsi_30 != 0)
        sub_140a74f90(rsi_30)
    
    uint64_t rax_255
    
    if (rbx_32 == 0 || rbx_32[1].d != 4)
        rax_255.b = r12_1.b == 0
    else
        rax_255 = sub_140b74b60(rbx_32)
    
    void* r12_3 = arg1
    int64_t* rbx_33 = nullptr
    *(r12_3 + 0xc) = rax_255.b
    var_460 = nullptr
    int32_t var_458_8 = 0
    sub_1405947f0(&var_460, 0xd)
    int32_t rax_256 = var_458_8 + 0xd
    var_458_8 = rax_256
    
    if (rax_256 s> 0)
        sub_140594770(&var_460)
    
    void*** rsi_31 = var_460
    UnDecorator::getReferenceType(rsi_31, u"CustomFields", 0x1a)
    sub_14062d6e0(r13_1, &var_448, &var_460)
    int64_t rax_257 = sx.q(var_448)
    void* r14_15
    
    if (rax_257.d != 0xffffffff)
        r14_15 = *r13_1 + rax_257 * 0x28
    
    int64_t* r14_16
    
    if (rax_257.d == 0xffffffff || r14_15 == 0)
        r14_16 = nullptr
    else
        rbx_33 = *(r14_15 + 0x10)
        r14_16 = *(r14_15 + 0x18)
        
        if (r14_16 != 0)
            r14_16[1].d += 1
    
    if (rsi_31 != 0)
        sub_140a74f90(rsi_31)
    
    if (rbx_33 != 0)
        int64_t* rax_260 = (**rbx_33)(rbx_33)
        int64_t* rsi_32 = rax_260[1]
        int64_t rbx_34 = *rax_260
        
        if (rsi_32 != 0)
            rsi_32[1].d += 1
        
        int32_t* rax_261 = sub_1406c8970(&var_1e8, rbx_34 + 0x10, 0)
        var_1a8[0] = rbx_34
        zmm2 = *(rax_261 + 0x10)
        var_1a8 = *rax_261
        double rax_262 = zmm2[0]
        var_1e8.o = var_1a8
        uint32_t rcx_365 = (zmm2[0] u>> 0x20).d
        var_1d8_2.o = zmm2
        int64_t var_1c8_5 = (_mm_unpackhi_pd(zmm2, zmm2[0])).q
        
        if (rcx_365 s< *(rax_262 i+ 0x18))
            int32_t i_15 = i_7
            
            while (rdi_1.b != 0)
                int64_t rdx_166 = sx.q(i_15) * 5
                int64_t rcx_366 = *var_1e8.q
                sub_140917df0(r12_3 + 0x108, rcx_366 + (rdx_166 << 3), 
                    sub_140b74df0(*(rcx_366 + (rdx_166 << 3) + 0x10), &var_1a8))
                double rcx_369 = var_1a8[0]
                
                if (rcx_369 != 0)
                    sub_140a74f90(rcx_369)
                
                var_1d4_1:4.d &= not.d(var_1e0:4.d)
                sub_14059bdd0(&var_1e0)
                i_15 = i_7
                
                if (i_15 s>= *(var_1d8_2.q + 0x18))
                    break
        
        if (rsi_32 != 0)
            rsi_32[1].d -= 1
            
            if (rsi_32[1].d == 1)
                (**rsi_32)(rsi_32)
                int32_t temp28_1 = *(rsi_32 + 0xc)
                *(rsi_32 + 0xc) -= 1
                
                if (temp28_1 == 1)
                    (*(*rsi_32 + 8))(rsi_32, 1)
    
    void** rsi_33 = r14_4 + 0xf8
    
    if (*(r12_3 + 0xc) != 0)
        void* i_18 = *rsi_33
        void* r12_6 = sx.q(rsi_33[1].d) * 0x60 + i_18
        
        if (i_18 != r12_6)
            do
                if (*(i_18 + 0x50) != 1)
                    rdi_1.b = 0
                else
                    int64_t* rsi_34 = *(i_18 + 0x48)
                    i_6 = i_18
                    sub_141818450(arg1 + 0x160, rsi_34, &i_6)
                    
                    if (*sub_140cba0f0(&var_178, &var_400, rsi_34) != 0xffffffff)
                        sub_140cba0f0(&var_178, &var_448, rsi_34)
                        int64_t rax_273 = sx.q(var_448)
                        void* const rcx_378
                        
                        if (rax_273.d == 0xffffffff)
                            rcx_378 = nullptr
                        else
                            rcx_378 = (rax_273 << 5) + var_178
                        
                        void* rcx_379 = *(rcx_378 + 0x10)
                        *(rcx_379 + 0x38) = *(i_18 + 0x58)
                        *(rcx_379 + 0x18) = *(i_18 + 0x20)
                        *(rcx_379 + 0x28) = *(i_18 + 0x30)
                
                i_18 += 0x60
            while (i_18 != r12_6)
            
            r15_8 = var_3f0_2
            r13_19 = var_410
            rsi_33 = r14_4 + 0xf8
        
        r12_3 = arg1
    
    char rdx_174 = sub_140597da0(r12_3 + 0xd8, sub_141839580(&var_1a8, r12_3 + 8))
    double rcx_382 = var_1a8[0]
    
    if (rcx_382 != 0)
        rdx_174 = sub_140a74f90(rcx_382)
    
    sub_141845210(rsi_33, rdx_174)
    *(r12_3 + 0x2b0) = 1
    sub_141840c70(r12_3)
    
    if (rdi_1.b == 0)
        sub_141834c60(r12_3)
    
    if (r14_16 != 0)
        r14_16[1].d -= 1
        
        if (r14_16[1].d == 1)
            (**r14_16)(r14_16)
            int32_t temp30_1 = *(r14_16 + 0xc)
            *(r14_16 + 0xc) -= 1
            
            if (temp30_1 == 1)
                (*(*r14_16 + 8))(r14_16, 1)
    
    if (r15_8 != 0)
        r15_8[1].d -= 1
        
        if (r15_8[1].d == 1)
            (**r15_8)(r15_8)
            int32_t temp32_1 = *(r15_8 + 0xc)
            *(r15_8 + 0xc) -= 1
            
            if (temp32_1 == 1)
                (*(*r15_8 + 8))(r15_8, 1)
    
    if (r13_19 != 0)
        r13_19[1].d -= 1
        
        if (r13_19[1].d == 1)
            (**r13_19)(r13_19)
            int32_t temp34_1 = *(r13_19 + 0xc)
            *(r13_19 + 0xc) -= 1
            
            if (temp34_1 == 1)
                (*(*r13_19 + 8))(r13_19, 1)
    
    int64_t* rbx_36 = var_318
    
    if (rbx_36 != 0)
        rbx_36[1].d -= 1
        
        if (rbx_36[1].d == 1)
            (**rbx_36)(rbx_36)
            int32_t temp36_1 = *(rbx_36 + 0xc)
            *(rbx_36 + 0xc) -= 1
            
            if (temp36_1 == 1)
                (*(*rbx_36 + 8))(rbx_36, 1)
    
    int64_t* rbx_37 = var_308
    
    if (rbx_37 != 0)
        rbx_37[1].d -= 1
        
        if (rbx_37[1].d == 1)
            (**rbx_37)(rbx_37)
            int32_t temp38_1 = *(rbx_37 + 0xc)
            *(rbx_37 + 0xc) -= 1
            
            if (temp38_1 == 1)
                (*(*rbx_37 + 8))(rbx_37, 1)
    
    int64_t* rbx_38 = var_320
    
    if (rbx_38 != 0)
        rbx_38[1].d -= 1
        
        if (rbx_38[1].d == 1)
            (**rbx_38)(rbx_38)
            int32_t temp40_1 = *(rbx_38 + 0xc)
            *(rbx_38 + 0xc) -= 1
            
            if (temp40_1 == 1)
                (*(*rbx_38 + 8))(rbx_38, 1)
    
    int64_t* rbx_39 = i_10.q
    
    if (rbx_39 != 0)
        rbx_39[1].d -= 1
        
        if (rbx_39[1].d == 1)
            (**rbx_39)(rbx_39)
            int32_t temp42_1 = *(rbx_39 + 0xc)
            *(rbx_39 + 0xc) -= 1
            
            if (temp42_1 == 1)
                (*(*rbx_39 + 8))(rbx_39, 1)
    
    sub_1405ae100(&var_178)
    
    if (var_2b0_1 != 0)
        var_2b0_1[1].d -= 1
        
        if (var_2b0_1[1].d == 1)
            (**var_2b0_1)(var_2b0_1)
            int32_t temp44_1 = *(var_2b0_1 + 0xc)
            *(var_2b0_1 + 0xc) -= 1
            
            if (temp44_1 == 1)
                (*(*var_2b0_1 + 8))(var_2b0_1, 1)
    
    if (var_2a8_1 != 0)
        var_2a8_1[1].d -= 1
        
        if (var_2a8_1[1].d == 1)
            (**var_2a8_1)(var_2a8_1)
            int32_t temp46_1 = *(var_2a8_1 + 0xc)
            *(var_2a8_1 + 0xc) -= 1
            
            if (temp46_1 == 1)
                (*(*var_2a8_1 + 8))(var_2a8_1, 1)
    
    if (var_2a0_1 != 0)
        var_2a0_1[1].d -= 1
        
        if (var_2a0_1[1].d == 1)
            (**var_2a0_1)(var_2a0_1)
            int32_t temp48_1 = *(var_2a0_1 + 0xc)
            *(var_2a0_1 + 0xc) -= 1
            
            if (temp48_1 == 1)
                (*(*var_2a0_1 + 8))(var_2a0_1, 1)
    
    if (var_298_1 != 0)
        var_298_1[1].d -= 1
        
        if (var_298_1[1].d == 1)
            (**var_298_1)(var_298_1)
            int32_t temp50_1 = *(var_298_1 + 0xc)
            *(var_298_1 + 0xc) -= 1
            
            if (temp50_1 == 1)
                (*(*var_298_1 + 8))(var_298_1, 1)
    
    if (var_290_1 != 0)
        var_290_1[1].d -= 1
        
        if (var_290_1[1].d == 1)
            (**var_290_1)(var_290_1)
            int32_t temp52_1 = *(var_290_1 + 0xc)
            *(var_290_1 + 0xc) -= 1
            
            if (temp52_1 == 1)
                (*(*var_290_1 + 8))(var_290_1, 1)
    
    if (var_268_1 != 0)
        var_268_1[1].d -= 1
        
        if (var_268_1[1].d == 1)
            (**var_268_1)(var_268_1)
            int32_t temp54_1 = *(var_268_1 + 0xc)
            *(var_268_1 + 0xc) -= 1
            
            if (temp54_1 == 1)
                (*(*var_268_1 + 8))(var_268_1, 1)
    
    if (var_270_1 != 0)
        var_270_1[1].d -= 1
        
        if (var_270_1[1].d == 1)
            (**var_270_1)(var_270_1)
            int32_t temp56_1 = *(var_270_1 + 0xc)
            *(var_270_1 + 0xc) -= 1
            
            if (temp56_1 == 1)
                (*(*var_270_1 + 8))(var_270_1, 1)
    
    if (var_288_1 != 0)
        var_288_1[1].d -= 1
        
        if (var_288_1[1].d == 1)
            (**var_288_1)(var_288_1)
            int32_t temp61_1 = *(var_288_1 + 0xc)
            *(var_288_1 + 0xc) -= 1
            
            if (temp61_1 == 1)
                (*(*var_288_1 + 8))(var_288_1, 1)
    
    if (var_278_1 != 0)
        var_278_1[1].d -= 1
        
        if (var_278_1[1].d == 1)
            (**var_278_1)(var_278_1)
            int32_t temp65_1 = *(var_278_1 + 0xc)
            *(var_278_1 + 0xc) -= 1
            
            if (temp65_1 == 1)
                (*(*var_278_1 + 8))(var_278_1, 1)
    
    if (var_280_1 != 0)
        var_280_1[1].d -= 1
        
        if (var_280_1[1].d == 1)
            (**var_280_1)(var_280_1)
            int32_t temp66_1 = *(var_280_1 + 0xc)
            *(var_280_1 + 0xc) -= 1
            
            if (temp66_1 == 1)
                (*(*var_280_1 + 8))(var_280_1, 1)
    
    int32_t var_b0_2 = 0
    
    if (var_b8_1 != 0)
        sub_140a74f90(var_b8_1)
    
    sub_14094b3a0(&var_f8)

int64_t* rbx_50 = var_248:8.q

if (rbx_50 != 0)
    rbx_50[1].d -= 1
    
    if (rbx_50[1].d == 1)
        (**rbx_50)(rbx_50)
        int32_t temp4_1 = *(rbx_50 + 0xc)
        *(rbx_50 + 0xc) -= 1
        
        if (temp4_1 == 1)
            (*(*rbx_50 + 8))(rbx_50, 1)

int64_t* rbx_51 = var_260:8.q

if (rbx_51 != 0)
    rbx_51[1].d -= 1
    
    if (rbx_51[1].d == 1)
        (**rbx_51)(rbx_51)
        int32_t temp5_1 = *(rbx_51 + 0xc)
        *(rbx_51 + 0xc) -= 1
        
        if (temp5_1 == 1)
            int64_t r8_52 = *rbx_51
            (*(r8_52 + 8))(rbx_51, 1, r8_52)

__security_check_cookie(rax_1 ^ &var_4a8)
return zx.q(rdi_1.b)
