// 函数: sub_1426ee160
// 地址: 0x1426ee160
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void var_c28
int64_t rax_1 = __security_cookie ^ &var_c28
int32_t var_b08 = 0
int64_t rdx
int512_t zmm1
rdx, zmm1 = sub_140a96170(arg2)
char rax_2 = *(arg1 + 0x2b)

if (rax_2 == 2)
    void var_ad0
    sub_140a95a00(&var_ad0)
    zmm1.o = *(arg1 + 0x18)
    int32_t var_abc_1 = 2
    int64_t var_5c8
    __builtin_memset(&var_5c8, 0, 0x2c)
    int128_t var_a70 = zx.o(0)
    int32_t var_59c_1 = 0x80
    int32_t var_598_1 = 0xffffffff
    int32_t var_594_1 = 0
    int64_t var_588_1 = 0
    int32_t var_580_1 = 0
    void var_908
    int64_t* rax_3 = sub_140aa1120(&var_908, rdx, &var_ad0, &var_a70)
    int32_t var_348 = 4
    int64_t var_338_1 = *rax_3
    int64_t* rax_5 = rax_3[1]
    
    if (rax_5 != 0)
        rax_5[1].d += 1
    
    int32_t var_328_1 = rax_3[2].d
    char var_320_1 = 1
    int64_t var_bf8 = 0
    int32_t var_bf0_1 = 0
    sub_1405947f0(&var_bf8, 8)
    int32_t rax_7 = var_bf0_1 + 8
    var_bf0_1 = rax_7
    
    if (rax_7 s> 0)
        sub_140594770(&var_bf8)
    
    UnDecorator::getReferenceType(var_bf8, u"ExtentX", 0x10)
    int64_t rdx_3
    int512_t zmm1_1
    rdx_3, zmm1_1 = sub_140acb5e0(&var_5c8, &var_bf8, &var_348)
    int64_t rcx_8 = var_bf8
    
    if (rcx_8 != 0)
        rdx_3, zmm1_1 = sub_140a74f90(rcx_8)
    
    if (var_320_1 != 0 && rax_5 != 0)
        rax_5[1].d -= 1
        
        if (rax_5[1].d == 1)
            rdx_3 = (**rax_5)(rax_5)
            int32_t rax_10 = *(rax_5 + 0xc)
            *(rax_5 + 0xc) -= 1
            
            if (rax_10 == 1)
                rdx_3 = (*(*rax_5 + 8))(rax_5, 1)
    
    int64_t* var_900
    
    if (var_900 != 0)
        var_900[1].d -= 1
        
        if (var_900[1].d == 1)
            rdx_3 = (**var_900)(var_900)
            int32_t rax_14 = *(var_900 + 0xc)
            *(var_900 + 0xc) -= 1
            
            if (rax_14 == 1)
                rdx_3 = (*(*var_900 + 8))(var_900, 1)
    
    int64_t* rbx_3 = var_a70:8.q
    
    if (rbx_3 != 0)
        rbx_3[1].d -= 1
        
        if (rbx_3[1].d == 1)
            rdx_3 = (**rbx_3)(rbx_3)
            int32_t rax_18 = *(rbx_3 + 0xc)
            *(rbx_3 + 0xc) -= 1
            
            if (rax_18 == 1)
                rdx_3 = (*(*rbx_3 + 8))(rbx_3, 1)
    
    zmm1_1.o = *(arg1 + 0x1c)
    int128_t var_a60 = zx.o(0)
    void var_8f0
    int64_t* rax_20 = sub_140aa1120(&var_8f0, rdx_3, &var_ad0, &var_a60)
    int32_t var_318 = 4
    int64_t var_308_1 = *rax_20
    int64_t* rax_22 = rax_20[1]
    
    if (rax_22 != 0)
        rax_22[1].d += 1
    
    int32_t var_2f8_1 = rax_20[2].d
    char var_2f0_1 = 1
    int64_t var_be8 = 0
    int32_t var_be0_1 = 0
    sub_1405947f0(&var_be8, 8)
    int32_t rax_24 = var_be0_1 + 8
    var_be0_1 = rax_24
    
    if (rax_24 s> 0)
        sub_140594770(&var_be8)
    
    UnDecorator::getReferenceType(var_be8, u"ExtentY", 0x10)
    int64_t rdx_6
    int512_t zmm1_2
    rdx_6, zmm1_2 = sub_140acb5e0(&var_5c8, &var_be8, &var_318)
    int64_t rcx_22 = var_be8
    
    if (rcx_22 != 0)
        rdx_6, zmm1_2 = sub_140a74f90(rcx_22)
    
    if (var_2f0_1 != 0 && rax_22 != 0)
        rax_22[1].d -= 1
        
        if (rax_22[1].d == 1)
            rdx_6 = (**rax_22)(rax_22)
            int32_t rax_27 = *(rax_22 + 0xc)
            *(rax_22 + 0xc) -= 1
            
            if (rax_27 == 1)
                rdx_6 = (*(*rax_22 + 8))(rax_22, 1)
    
    int64_t* var_8e8
    
    if (var_8e8 != 0)
        var_8e8[1].d -= 1
        
        if (var_8e8[1].d == 1)
            rdx_6 = (**var_8e8)(var_8e8)
            int32_t rax_31 = *(var_8e8 + 0xc)
            *(var_8e8 + 0xc) -= 1
            
            if (rax_31 == 1)
                rdx_6 = (*(*var_8e8 + 8))(var_8e8, 1)
    
    int64_t* rbx_6 = var_a60:8.q
    
    if (rbx_6 != 0)
        rbx_6[1].d -= 1
        
        if (rbx_6[1].d == 1)
            rdx_6 = (**rbx_6)(rbx_6)
            int32_t rax_35 = *(rbx_6 + 0xc)
            *(rbx_6 + 0xc) -= 1
            
            if (rax_35 == 1)
                rdx_6 = (*(*rbx_6 + 8))(rbx_6, 1)
    
    zmm1_2.o = *(arg1 + 0x20)
    int128_t var_a50 = zx.o(0)
    void var_8d8
    int64_t* rax_37 = sub_140aa1120(&var_8d8, rdx_6, &var_ad0, &var_a50)
    int32_t var_2e8 = 4
    int64_t var_2d8_1 = *rax_37
    int64_t* rax_39 = rax_37[1]
    
    if (rax_39 != 0)
        rax_39[1].d += 1
    
    int32_t var_2c8_1 = rax_37[2].d
    char var_2c0_1 = 1
    int64_t var_bd8 = 0
    int32_t var_bd0_1 = 0
    sub_1405947f0(&var_bd8, 8)
    int32_t rax_41 = var_bd0_1 + 8
    var_bd0_1 = rax_41
    
    if (rax_41 s> 0)
        sub_140594770(&var_bd8)
    
    UnDecorator::getReferenceType(var_bd8, u"ExtentZ", 0x10)
    sub_140acb5e0(&var_5c8, &var_bd8, &var_2e8)
    int64_t rcx_36 = var_bd8
    
    if (rcx_36 != 0)
        sub_140a74f90(rcx_36)
    
    if (var_2c0_1 != 0 && rax_39 != 0)
        rax_39[1].d -= 1
        
        if (rax_39[1].d == 1)
            (**rax_39)(rax_39)
            int32_t rax_45 = *(rax_39 + 0xc)
            *(rax_39 + 0xc) -= 1
            
            if (rax_45 == 1)
                (*(*rax_39 + 8))(rax_39, 1)
    
    int64_t* var_8d0
    
    if (var_8d0 != 0)
        var_8d0[1].d -= 1
        
        if (var_8d0[1].d == 1)
            (**var_8d0)(var_8d0)
            int32_t rax_51 = *(var_8d0 + 0xc)
            *(var_8d0 + 0xc) -= 1
            
            if (rax_51 == 1)
                (*(*var_8d0 + 8))(var_8d0, 1)
    
    int64_t* rbx_9 = var_a50:8.q
    
    if (rbx_9 != 0)
        rbx_9[1].d -= 1
        
        if (rbx_9[1].d == 1)
            (**rbx_9)(rbx_9)
            int32_t rax_57 = *(rbx_9 + 0xc)
            *(rbx_9 + 0xc) -= 1
            
            if (rax_57 == 1)
                (*(*rbx_9 + 8))(rbx_9, 1)
    
    char rax_60 = *(arg1 + 0x2a)
    int64_t* var_af8
    int64_t* var_ae0
    int64_t* var_ab0
    int64_t* rdx_9
    int32_t r14_1
    
    if (rax_60 != 0)
        int64_t rcx_48
        int64_t* rdx_12
        
        if (rax_60 != 2)
            int64_t* rdx_15
            int32_t r14_2
            
            if (rax_60 != 3)
                int64_t* rax_70
                
                if (rax_60 != 1)
                    void var_8c0
                    rax_70 = _vfprintf_p_l(&var_8c0, u"unknown", u"EnvQueryGenerator")
                    r14_2 = 0x180
                else
                    void var_8a8
                    void var_890
                    char* var_660
                    rax_70 = sub_140aaca20(&var_8a8, 
                        sub_140a96390(&var_660, 
                            _vfprintf_p_l(&var_890, box (extent: {ExtentX} {ExtentY} {ExtentZ)", 
                            EnvQueryGenerator")), &var_5c8)
                    r14_2 = 0x160
                
                rcx_48 = *rax_70
                int64_t* rax_71 = rax_70[1]
                int64_t var_b00 = rcx_48
                var_af8 = rax_71
                
                if (rax_71 != 0)
                    rax_71[1].d += 1
                
                rdx_15 = &var_b00
                int32_t var_af0_1 = rax_70[2].d
            else
                void var_878
                void var_860
                char* var_670
                int64_t* rax_67 = sub_140aaca20(&var_878, 
                    sub_140a96390(&var_670, 
                        _vfprintf_p_l(&var_860, 
                            capsule (radius: {ExtentX}, half height: {ExtentZ})", 
                        EnvQueryGenerator")), &var_5c8)
                rdx_15 = rax_67
                r14_2 = 0x18
                rcx_48 = *rax_67
            
            int64_t* rax_73 = rdx_15[1]
            int64_t var_ae8 = rcx_48
            var_ae0 = rax_73
            
            if (rax_73 != 0)
                rax_73[1].d += 1
            
            r14_1 = r14_2 | 0x600
            int32_t var_ad8_1 = rdx_15[2].d
            rdx_12 = &var_ae8
        else
            void var_848
            void var_830
            char* var_680
            int64_t* rax_64 = sub_140aaca20(&var_848, 
                sub_140a96390(&var_680, _vfprintf_p_l(&var_830, sphere (radius: {ExtentX})", 
                    EnvQueryGenerator")), &var_5c8)
            rdx_12 = rax_64
            r14_1 = 0x406
            rcx_48 = *rax_64
        
        int64_t var_ab8 = rcx_48
        int64_t* rax_75 = rdx_12[1]
        var_ab0 = rax_75
        
        if (rax_75 != 0)
            rax_75[1].d += 1
        
        rdx_9 = &var_ab8
        int32_t var_aa8_1 = rdx_12[2].d
    else
        void var_818
        rdx_9 = _vfprintf_p_l(&var_818, u"line", u"EnvQueryGenerator")
        r14_1 = 1
    
    int64_t rcx_56 = *arg2
    *arg2 = *rdx_9
    *rdx_9 = rcx_56
    int64_t rcx_57 = arg2[1]
    arg2[1] = rdx_9[1]
    rdx_9[1] = rcx_57
    arg2[2].d = rdx_9[2].d
    
    if (test_bit(r14_1, 0xa))
        r14_1 &= 0xfffffbff
        
        if (var_ab0 != 0)
            var_ab0[1].d -= 1
            
            if (var_ab0[1].d == 1)
                (**var_ab0)(var_ab0)
                int32_t rax_82 = *(var_ab0 + 0xc)
                *(var_ab0 + 0xc) -= 1
                
                if (rax_82 == 1)
                    (*(*var_ab0 + 8))(var_ab0, 1)
    
    if (test_bit(r14_1, 9))
        r14_1 &= 0xfffffdff
        
        if (var_ae0 != 0)
            var_ae0[1].d -= 1
            
            if (var_ae0[1].d == 1)
                (**var_ae0)(var_ae0)
                int32_t rax_86 = *(var_ae0 + 0xc)
                *(var_ae0 + 0xc) -= 1
                
                if (rax_86 == 1)
                    (*(*var_ae0 + 8))(var_ae0, 1)
    
    if (test_bit(r14_1, 8))
        r14_1 &= 0xfffffeff
        
        if (var_af8 != 0)
            var_af8[1].d -= 1
            
            if (var_af8[1].d == 1)
                (**var_af8)(var_af8)
                int32_t rax_90 = *(var_af8 + 0xc)
                *(var_af8 + 0xc) -= 1
                
                if (rax_90 == 1)
                    (*(*var_af8 + 8))(var_af8, 1)
    
    if (r14_1.b s< 0)
        r14_1 &= 0xffffff7f
        int64_t* var_8b8
        
        if (var_8b8 != 0)
            var_8b8[1].d -= 1
            
            if (var_8b8[1].d == 1)
                (**var_8b8)(var_8b8)
                int32_t rax_94 = *(var_8b8 + 0xc)
                *(var_8b8 + 0xc) -= 1
                
                if (rax_94 == 1)
                    (*(*var_8b8 + 8))(var_8b8, 1)
    
    if ((r14_1.b & 0x40) != 0)
        r14_1 &= 0xffffffbf
        int64_t* var_8a0
        
        if (var_8a0 != 0)
            var_8a0[1].d -= 1
            
            if (var_8a0[1].d == 1)
                (**var_8a0)(var_8a0)
                int32_t rax_98 = *(var_8a0 + 0xc)
                *(var_8a0 + 0xc) -= 1
                
                if (rax_98 == 1)
                    (*(*var_8a0 + 8))(var_8a0, 1)
    
    if ((r14_1.b & 0x20) != 0)
        r14_1 &= 0xffffffdf
        int64_t* var_888
        
        if (var_888 != 0)
            var_888[1].d -= 1
            
            if (var_888[1].d == 1)
                (**var_888)(var_888)
                int32_t rax_102 = *(var_888 + 0xc)
                *(var_888 + 0xc) -= 1
                
                if (rax_102 == 1)
                    (*(*var_888 + 8))(var_888, 1)
    
    if ((r14_1.b & 0x10) != 0)
        r14_1 &= 0xffffffef
        int64_t* var_870
        
        if (var_870 != 0)
            var_870[1].d -= 1
            
            if (var_870[1].d == 1)
                (**var_870)(var_870)
                int32_t rax_106 = *(var_870 + 0xc)
                *(var_870 + 0xc) -= 1
                
                if (rax_106 == 1)
                    (*(*var_870 + 8))(var_870, 1)
    
    if ((r14_1.b & 8) != 0)
        r14_1 &= 0xfffffff7
        int64_t* var_858
        
        if (var_858 != 0)
            var_858[1].d -= 1
            
            if (var_858[1].d == 1)
                (**var_858)(var_858)
                int32_t rax_110 = *(var_858 + 0xc)
                *(var_858 + 0xc) -= 1
                
                if (rax_110 == 1)
                    (*(*var_858 + 8))(var_858, 1)
    
    if ((r14_1.b & 4) != 0)
        r14_1 &= 0xfffffffb
        int64_t* var_840
        
        if (var_840 != 0)
            var_840[1].d -= 1
            
            if (var_840[1].d == 1)
                (**var_840)(var_840)
                int32_t rax_114 = *(var_840 + 0xc)
                *(var_840 + 0xc) -= 1
                
                if (rax_114 == 1)
                    (*(*var_840 + 8))(var_840, 1)
    
    if ((r14_1.b & 2) != 0)
        r14_1 &= 0xfffffffd
        int64_t* var_828
        
        if (var_828 != 0)
            var_828[1].d -= 1
            
            if (var_828[1].d == 1)
                (**var_828)(var_828)
                int32_t rax_118 = *(var_828 + 0xc)
                *(var_828 + 0xc) -= 1
                
                if (rax_118 == 1)
                    (*(*var_828 + 8))(var_828, 1)
    
    if ((r14_1.b & 1) != 0)
        r14_1 &= 0xfffffffe
        int64_t* var_810
        
        if (var_810 != 0)
            var_810[1].d -= 1
            
            if (var_810[1].d == 1)
                (**var_810)(var_810)
                int32_t rax_122 = *(var_810 + 0xc)
                *(var_810 + 0xc) -= 1
                
                if (rax_122 == 1)
                    (*(*var_810 + 8))(var_810, 1)
    
    int32_t var_580_2 = 0
    
    if (var_588_1 != 0)
        sub_140a74f90(var_588_1)
    
    sub_140acd610(&var_5c8)
    int64_t* rcx_125
    
    if (arg3 != 0)
        int64_t var_1b8_1 = *arg2
        void* rax_164 = arg2[1]
        int64_t var_4d8
        __builtin_memset(&var_4d8, 0, 0x2c)
        int32_t var_4ac_1 = 0x80
        int32_t var_4a8_1 = 0xffffffff
        int32_t var_4a4_1 = 0
        int64_t var_498_1 = 0
        int32_t var_490_1 = 0
        int32_t var_1c8 = 4
        void* var_1b0_1 = rax_164
        
        if (rax_164 != 0)
            *(rax_164 + 8) += 1
        
        int32_t var_1a8_1 = arg2[2].d
        char var_1a0_1 = 1
        int64_t var_b98 = 0
        int32_t var_b90_1 = 0
        sub_1405947f0(&var_b98, 0xc)
        int32_t rax_166 = var_b90_1 + 0xc
        var_b90_1 = rax_166
        
        if (rax_166 s> 0)
            sub_140594770(&var_b98)
        
        UnDecorator::getReferenceType(var_b98, u"Description", 0x18)
        sub_140acb5e0(&var_4d8, &var_b98, &var_1c8)
        int64_t rcx_132 = var_b98
        
        if (rcx_132 != 0)
            sub_140a74f90(rcx_132)
        
        sub_140597690(&var_1c8)
        char rax_167 = (*(arg1 + 0x2c)).b
        
        if ((rax_167 & 1) != 0)
            void var_788
            void var_770
            char* var_640
            int64_t* rax_170 = sub_140aaca20(&var_788, 
                sub_140a96390(&var_640, _vfprintf_p_l(&var_770, {Description}, complex collision", 
                    EnvQueryGenerator")), &var_4d8)
            int64_t rdx_36 = *arg2
            *arg2 = *rax_170
            *rax_170 = rdx_36
            int64_t rdx_37 = arg2[1]
            arg2[1] = rax_170[1]
            rax_170[1] = rdx_37
            arg2[2].d = rax_170[2].d
            sub_1405970a0(&var_788)
            sub_1405970a0(&var_770)
            rax_167 = (*(arg1 + 0x2c)).b
        
        if ((rax_167 & 2) == 0)
            void var_758
            void var_740
            char* var_630
            int64_t* rax_174 = sub_140aaca20(&var_758, 
                sub_140a96390(&var_630, 
                    _vfprintf_p_l(&var_740, {Description}, accept non blocking", 
                    EnvQueryGenerator")), &var_4d8)
            int64_t rdx_40 = *arg2
            *arg2 = *rax_174
            *rax_174 = rdx_40
            int64_t rdx_41 = arg2[1]
            arg2[1] = rax_174[1]
            rax_174[1] = rdx_41
            arg2[2].d = rax_174[2].d
            sub_1405970a0(&var_758)
            sub_1405970a0(&var_740)
        
        int32_t var_490_2 = 0
        
        if (var_498_1 != 0)
            sub_140a74f90(var_498_1)
        
        rcx_125 = &var_4d8
    else
        TEB* gsbase
        
        if (data_143f722f0
                s> *(0x14 + *(gsbase->ThreadLocalStoragePointer + (zx.q(data_14401b1a0) << 3))))
            _Init_thread_header(&data_143f722f0)
            
            if (data_143f722f0 == 0xffffffff)
                data_143f722e8 = sub_1424a62d0()
                _Init_thread_footer(&data_143f722f0)
        
        int64_t var_2a8_1 = *arg2
        int64_t* rax_127 = arg2[1]
        int64_t var_578
        __builtin_memset(&var_578, 0, 0x2c)
        int32_t var_54c_1 = 0x80
        int32_t var_548_1 = 0xffffffff
        int32_t var_544_1 = 0
        int64_t var_538_1 = 0
        int32_t var_530_1 = 0
        int32_t var_2b8 = 4
        
        if (rax_127 != 0)
            rax_127[1].d += 1
        
        int32_t var_298_1 = arg2[2].d
        char var_290_1 = 1
        int64_t var_bc8 = 0
        int32_t var_bc0_1 = 0
        sub_1405947f0(&var_bc8, 0x12)
        int32_t rax_129 = var_bc0_1 + 0x12
        var_bc0_1 = rax_129
        
        if (rax_129 s> 0)
            sub_140594770(&var_bc8)
        
        UnDecorator::getReferenceType(var_bc8, u"ExtentDescription", 0x24)
        sub_140acb5e0(&var_578, &var_bc8, &var_2b8)
        int64_t rcx_90 = var_bc8
        
        if (rcx_90 != 0)
            sub_140a74f90(rcx_90)
        
        if (var_290_1 != 0 && rax_127 != 0)
            rax_127[1].d -= 1
            
            if (rax_127[1].d == 1)
                (**rax_127)(rax_127)
                int32_t rax_132 = *(rax_127 + 0xc)
                *(rax_127 + 0xc) -= 1
                
                if (rax_132 == 1)
                    (*(*rax_127 + 8))(rax_127, 1)
        
        int32_t rax_135 = *(arg1 + 0x2c) & 0x20
        wchar16 const* const rdx_21 = u"projection"
        int32_t r15_1 = 0x800
        
        if (rax_135 == 0)
            r15_1 = 0x1000
        
        int32_t r15_2 = r15_1 | r14_1
        
        if (rax_135 == 0)
            rdx_21 = u"trace"
        
        void var_800
        int64_t* rcx_94 = &var_800
        void var_7e8
        
        if (rax_135 != 0)
            rcx_94 = &var_7e8
        int64_t* rax_136 = _vfprintf_p_l(rcx_94, rdx_21, u"EnvQueryGenerator")
        int32_t var_288 = 4
        int64_t* rcx_95 = rax_136[1]
        int64_t var_278_1 = *rax_136
        
        if (rcx_95 != 0)
            rcx_95[1].d += 1
        
        int32_t var_268_1 = rax_136[2].d
        char var_260_1 = 1
        int64_t var_bb8 = 0
        int32_t var_bb0_1 = 0
        sub_1405947f0(&var_bb8, 0x14)
        int32_t rax_139 = var_bb0_1 + 0x14
        var_bb0_1 = rax_139
        
        if (rax_139 s> 0)
            sub_140594770(&var_bb8)
        
        UnDecorator::getReferenceType(var_bb8, u"ProjectionTraceDesc", 0x28)
        sub_140acb5e0(&var_578, &var_bb8, &var_288)
        int64_t rcx_100 = var_bb8
        
        if (rcx_100 != 0)
            sub_140a74f90(rcx_100)
        
        if (var_260_1 != 0 && rcx_95 != 0)
            rcx_95[1].d -= 1
            
            if (rcx_95[1].d == 1)
                (**rcx_95)(rcx_95)
                int32_t rax_142 = *(rcx_95 + 0xc)
                *(rcx_95 + 0xc) -= 1
                
                if (rax_142 == 1)
                    (*(*rcx_95 + 8))(rcx_95, 1)
        
        if (test_bit(r15_2, 0xc))
            r15_2 &= 0xffffefff
            int64_t* var_7f8
            
            if (var_7f8 != 0)
                var_7f8[1].d -= 1
                
                if (var_7f8[1].d == 1)
                    (**var_7f8)(var_7f8)
                    int32_t rax_146 = *(var_7f8 + 0xc)
                    *(var_7f8 + 0xc) -= 1
                    
                    if (rax_146 == 1)
                        (*(*var_7f8 + 8))(var_7f8, 1)
        
        int64_t* var_7e0
        
        if (test_bit(r15_2, 0xb) && var_7e0 != 0)
            var_7e0[1].d -= 1
            
            if (var_7e0[1].d == 1)
                (**var_7e0)(var_7e0)
                int32_t rdi_1 = *(var_7e0 + 0xc)
                *(var_7e0 + 0xc) -= 1
                
                if (rdi_1 == 1)
                    (*(*var_7e0 + 8))(var_7e0, zx.q(rdi_1))
        
        void var_7d0
        int64_t* rax_151 = sub_140bddc50(data_143f722e8, &var_7d0, zx.q(*(arg1 + 0x28)))
        int32_t var_d8 = 4
        int64_t var_c8_1 = *rax_151
        void* rax_153 = rax_151[1]
        void* var_c0_1 = rax_153
        
        if (rax_153 != 0)
            *(rax_153 + 8) += 1
        
        int32_t var_b8_1 = rax_151[2].d
        char var_b0_1 = 1
        int64_t var_ba8 = 0
        int32_t var_ba0_1 = 0
        sub_1405947f0(&var_ba8, 8)
        int32_t rax_155 = var_ba0_1 + 8
        var_ba0_1 = rax_155
        
        if (rax_155 s> 0)
            sub_140594770(&var_ba8)
        
        UnDecorator::getReferenceType(var_ba8, u"Channel", 0x10)
        sub_140acb5e0(&var_578, &var_ba8, &var_d8)
        int64_t rcx_114 = var_ba8
        
        if (rcx_114 != 0)
            sub_140a74f90(rcx_114)
        
        sub_140597690(&var_d8)
        sub_1405970a0(&var_7d0)
        void var_7b8
        void var_7a0
        char* var_650
        int64_t* rax_158 = sub_140aaca20(&var_7b8, 
            sub_140a96390(&var_650, 
                _vfprintf_p_l(&var_7a0, {ExtentDescription} {ProjectionTraceDesc} on {Channel}", 
                EnvQueryGenerator")), &var_578)
        int64_t rcx_120 = *arg2
        *arg2 = *rax_158
        *rax_158 = rcx_120
        int64_t rcx_121 = arg2[1]
        arg2[1] = rax_158[1]
        rax_158[1] = rcx_121
        arg2[2].d = rax_158[2].d
        sub_1405970a0(&var_7b8)
        sub_1405970a0(&var_7a0)
        int32_t var_530_2 = 0
        
        if (var_538_1 != 0)
            sub_140a74f90(var_538_1)
        
        rcx_125 = &var_578
    
    sub_140acd610(rcx_125)
else if (rax_2 == 1)
    void var_728
    int64_t* rax_176 = _vfprintf_p_l(&var_728, u"navmesh", u"EnvQueryGenerator")
    int64_t rdx_42 = *arg2
    *arg2 = *rax_176
    *rax_176 = rdx_42
    int64_t rdx_43 = arg2[1]
    arg2[1] = rax_176[1]
    rax_176[1] = rdx_43
    arg2[2].d = rax_176[2].d
    sub_1405970a0(&var_728)
    
    if ((*(arg1 + 0x2c) & 0x20) == 0)
        int64_t var_248_1 = *arg2
        void* rax_215 = arg2[1]
        int64_t var_3e8
        __builtin_memset(&var_3e8, 0, 0x2c)
        int32_t var_3bc_1 = 0x80
        int32_t var_3b8_1 = 0xffffffff
        int32_t var_3b4_1 = 0
        int64_t var_3a8_1 = 0
        int32_t var_3a0_1 = 0
        int32_t var_258 = 4
        void* var_240_1 = rax_215
        
        if (rax_215 != 0)
            *(rax_215 + 8) += 1
        
        int32_t var_238_1 = arg2[2].d
        char var_230_1 = 1
        int64_t var_b38 = 0
        int32_t var_b30_1 = 0
        sub_1405947f0(&var_b38, 0xc)
        int32_t rax_217 = var_b30_1 + 0xc
        var_b30_1 = rax_217
        
        if (rax_217 s> 0)
            sub_140594770(&var_b38)
        
        UnDecorator::getReferenceType(var_b38, u"Description", 0x18)
        sub_140acb5e0(&var_3e8, &var_b38, &var_258)
        int64_t rcx_239 = var_b38
        
        if (rcx_239 != 0)
            sub_140a74f90(rcx_239)
        
        sub_140597690(&var_258)
        void var_998
        void var_980
        char* var_5f0
        int64_t* rax_220 = sub_140aaca20(&var_998, 
            sub_140a96390(&var_5f0, _vfprintf_p_l(&var_980, {Description} trace", 
                EnvQueryGenerator")), &var_3e8)
        int64_t rdx_76 = *arg2
        *arg2 = *rax_220
        *rax_220 = rdx_76
        int64_t rdx_77 = arg2[1]
        arg2[1] = rax_220[1]
        rax_220[1] = rdx_77
        arg2[2].d = rax_220[2].d
        sub_1405970a0(&var_998)
        sub_1405970a0(&var_980)
        
        if (*(arg1 + 8) != 0)
            void* rax_222 = sub_14269cf80()
            
            if (rax_222 != 0)
                void* rdx_78 = *(arg1 + 8)
                int64_t rax_223 = sx.q(*(rax_222 + 0x38))
                
                if (rax_223.d s<= *(rdx_78 + 0x38)
                        && *(*(rdx_78 + 0x30) + (rax_223 << 3)) == rax_222 + 0x30 && rdx_78 != 0)
                    int64_t var_218_1 = *arg2
                    void* rax_226 = arg2[1]
                    int64_t var_438
                    __builtin_memset(&var_438, 0, 0x2c)
                    int32_t var_40c_1 = 0x80
                    int32_t var_408_1 = 0xffffffff
                    int32_t var_404_1 = 0
                    int64_t var_3f8_1 = 0
                    int32_t var_3f0_1 = 0
                    int32_t var_228 = 4
                    void* var_210_1 = rax_226
                    
                    if (rax_226 != 0)
                        *(rax_226 + 8) += 1
                    
                    int32_t var_208_1 = arg2[2].d
                    char var_200_1 = 1
                    int64_t var_b28 = 0
                    int32_t var_b20_1 = 0
                    sub_1405947f0(&var_b28, 0xc)
                    int32_t rax_228 = var_b20_1 + 0xc
                    var_b20_1 = rax_228
                    
                    if (rax_228 s> 0)
                        sub_140594770(&var_b28)
                    
                    UnDecorator::getReferenceType(var_b28, u"Description", 0x18)
                    sub_140acb5e0(&var_438, &var_b28, &var_228)
                    int64_t rcx_253 = var_b28
                    
                    if (rcx_253 != 0)
                        sub_140a74f90(rcx_253)
                    
                    sub_140597690(&var_228)
                    void* const rdx_81
                    
                    if (*(arg1 + 8) == 0)
                        rdx_81 = nullptr
                    else
                        void* rax_229 = sub_14269cf80()
                        
                        if (rax_229 == 0)
                            rdx_81 = nullptr
                        else
                            rdx_81 = *(arg1 + 8)
                            int64_t rax_230 = sx.q(*(rax_229 + 0x38))
                            
                            if (rax_230.d s> *(rdx_81 + 0x38)
                                    || *(*(rdx_81 + 0x30) + (rax_230 << 3)) != rax_229 + 0x30)
                                rdx_81 = nullptr
                    
                    var_b08.q = *(rdx_81 + 0x18)
                    int64_t var_a20
                    sub_140b63b70(&var_b08, &var_a20)
                    void var_968
                    int64_t* rax_233 = sub_140aae2f0(&var_968, &var_a20)
                    int32_t var_1f8 = 4
                    int64_t var_1e8_1 = *rax_233
                    void* rcx_259 = rax_233[1]
                    void* var_1e0_1 = rcx_259
                    
                    if (rcx_259 != 0)
                        *(rcx_259 + 8) += 1
                    
                    int32_t var_1d8_1 = rax_233[2].d
                    char var_1d0_1 = 1
                    int64_t var_b18 = 0
                    int32_t var_b10_1 = 0
                    sub_1405947f0(&var_b18, 0x11)
                    int32_t rax_235 = var_b10_1 + 0x11
                    var_b10_1 = rax_235
                    
                    if (rax_235 s> 0)
                        sub_140594770(&var_b18)
                    
                    UnDecorator::getReferenceType(var_b18, u"NavigationFilter", 0x22)
                    sub_140acb5e0(&var_438, &var_b18, &var_1f8)
                    int64_t rcx_264 = var_b18
                    
                    if (rcx_264 != 0)
                        sub_140a74f90(rcx_264)
                    
                    sub_140597690(&var_1f8)
                    sub_1405970a0(&var_968)
                    int64_t rcx_267 = var_a20
                    
                    if (rcx_267 != 0)
                        sub_140a74f90(rcx_267)
                    
                    void var_950
                    void var_938
                    char* var_5e0
                    int64_t* rax_238 = sub_140aaca20(&var_950, 
                        sub_140a96390(&var_5e0, 
                            _vfprintf_p_l(&var_938, {Description} (filter: {NavigationFilter})", 
                            EnvQueryGenerator")), &var_438)
                    int64_t rdx_88 = *arg2
                    *arg2 = *rax_238
                    *rax_238 = rdx_88
                    int64_t rdx_89 = arg2[1]
                    arg2[1] = rax_238[1]
                    rax_238[1] = rdx_89
                    arg2[2].d = rax_238[2].d
                    sub_1405970a0(&var_950)
                    sub_1405970a0(&var_938)
                    int32_t var_3f0_2 = 0
                    
                    if (var_3f8_1 != 0)
                        sub_140a74f90(var_3f8_1)
                    
                    sub_140acd610(&var_438)
        
        int32_t var_3a0_2 = 0
        
        if (var_3a8_1 != 0)
            sub_140a74f90(var_3a8_1)
        
        sub_140acd610(&var_3e8)
    else
        void var_a88
        sub_140a95a00(&var_a88)
        int64_t var_188_1 = *arg2
        void* rax_179 = arg2[1]
        int32_t var_a74_1 = 0
        int64_t var_528
        __builtin_memset(&var_528, 0, 0x2c)
        int32_t var_4fc_1 = 0x80
        int32_t var_4f8_1 = 0xffffffff
        int32_t var_4f4_1 = 0
        int64_t var_4e8_1 = 0
        int32_t var_4e0_1 = 0
        int32_t var_198 = 4
        void* var_180_1 = rax_179
        
        if (rax_179 != 0)
            *(rax_179 + 8) += 1
        
        int32_t var_178_1 = arg2[2].d
        char var_170_1 = 1
        int64_t var_b88 = 0
        int32_t var_b80_1 = 0
        sub_1405947f0(&var_b88, 0xc)
        int32_t rax_181 = var_b80_1 + 0xc
        var_b80_1 = rax_181
        
        if (rax_181 s> 0)
            sub_140594770(&var_b88)
        
        UnDecorator::getReferenceType(var_b88, u"Description", 0x18)
        sub_140acb5e0(&var_528, &var_b88, &var_198)
        int64_t rcx_158 = var_b88
        
        if (rcx_158 != 0)
            sub_140a74f90(rcx_158)
        
        sub_140597690(&var_198)
        float zmm0_3 = *(arg1 + 0x10)
        float zmm1_3 = *(arg1 + 0x14)
        int64_t var_aa0
        void var_710
        void var_6f8
        void var_6e0
        int64_t* rcx_161
        int64_t rdx_46
        int32_t rbx_25
        
        if (zmm0_3 != zmm1_3)
            zmm0_3 - zmm1_3
            rbx_25 = 0x14000
            wchar16 const* const rdx_47 = u"down"
            int64_t* rcx_162 = &var_710
            
            if (zmm0_3 <= zmm1_3)
                rbx_25 = 0x18000
            
            if (zmm0_3 <= zmm1_3)
                rdx_47 = &data_142d8bd00
            
            if (zmm0_3 > zmm1_3)
                rcx_162 = &var_6f8
            
            int64_t* rax_183 = _vfprintf_p_l(rcx_162, rdx_47, u"EnvQueryGenerator")
            void* rcx_163 = rax_183[1]
            rdx_46 = *rax_183
            var_aa0 = rdx_46
            void* var_a98_1 = rcx_163
            
            if (rcx_163 != 0)
                *(rcx_163 + 8) += 1
            
            rcx_161 = &var_aa0
            int32_t var_a90_1 = rax_183[2].d
        else
            int64_t* rax_182 = _vfprintf_p_l(&var_6e0, u"height", u"EnvQueryGenerator")
            rcx_161 = rax_182
            rbx_25 = 0x2000
            rdx_46 = *rax_182
        
        void* rax_185 = rcx_161[1]
        int32_t var_168 = 4
        int64_t var_158_1 = rdx_46
        void* var_150_1 = rax_185
        
        if (rax_185 != 0)
            *(rax_185 + 8) += 1
        
        int32_t var_148_1 = rcx_161[2].d
        char var_140_1 = 1
        int64_t var_b78 = 0
        int32_t var_b70_1 = 0
        sub_1405947f0(&var_b78, 0xa)
        int32_t rax_187 = var_b70_1 + 0xa
        var_b70_1 = rax_187
        
        if (rax_187 s> 0)
            sub_140594770(&var_b78)
        
        UnDecorator::getReferenceType(var_b78, u"Direction", 0x14)
        sub_140acb5e0(&var_528, &var_b78, &var_168)
        int64_t rcx_168 = var_b78
        
        if (rcx_168 != 0)
            sub_140a74f90(rcx_168)
        
        int64_t rdx_50 = sub_140597690(&var_168)
        
        if (test_bit(rbx_25, 0x10))
            rbx_25 &= 0xfffeffff
            rdx_50 = sub_1405970a0(&var_aa0)
        
        if (test_bit(rbx_25, 0xf))
            rbx_25 &= 0xffff7fff
            rdx_50 = sub_1405970a0(&var_710)
        
        if (test_bit(rbx_25, 0xe))
            rbx_25 &= 0xffffbfff
            rdx_50 = sub_1405970a0(&var_6f8)
        
        if (test_bit(rbx_25, 0xd))
            rdx_50 = sub_1405970a0(&var_6e0)
        
        __maxss_xmmss_memss(*(arg1 + 0x14), *(arg1 + 0x10))
        int128_t var_a40 = zx.o(0)
        void var_6c8
        int64_t* rax_188 = sub_140aa1120(&var_6c8, rdx_50, &var_a88, &var_a40)
        int32_t var_138 = 4
        int64_t var_128_1 = *rax_188
        void* rcx_176 = rax_188[1]
        void* var_120_1 = rcx_176
        
        if (rcx_176 != 0)
            *(rcx_176 + 8) += 1
        
        int32_t var_118_1 = rax_188[2].d
        char var_110_1 = 1
        int64_t var_b68 = 0
        int32_t var_b60_1 = 0
        sub_1405947f0(&var_b68, 0x11)
        int32_t rax_190 = var_b60_1 + 0x11
        var_b60_1 = rax_190
        
        if (rax_190 s> 0)
            sub_140594770(&var_b68)
        
        UnDecorator::getReferenceType(var_b68, u"ProjectionAmount", 0x22)
        sub_140acb5e0(&var_528, &var_b68, &var_138)
        int64_t rcx_181 = var_b68
        
        if (rcx_181 != 0)
            sub_140a74f90(rcx_181)
        
        sub_140597690(&var_138)
        sub_1405970a0(&var_6c8)
        sub_1405ec6a0(&var_a40)
        void var_6b0
        void var_698
        char* var_620
        int64_t* rax_193 = sub_140aaca20(&var_6b0, 
            sub_140a96390(&var_620, 
                _vfprintf_p_l(&var_698, projection ({Direction}: {ProjectionAmount}", 
                EnvQueryGenerator")), &var_528)
        int64_t rdx_55 = *arg2
        *arg2 = *rax_193
        *rax_193 = rdx_55
        int64_t rdx_56 = arg2[1]
        arg2[1] = rax_193[1]
        rax_193[1] = rdx_56
        arg2[2].d = rax_193[2].d
        sub_1405970a0(&var_6b0)
        sub_1405970a0(&var_698)
        
        if (not(1f f>= *(arg1 + 0x18)))
            int64_t var_f8_1 = *arg2
            void* rax_196 = arg2[1]
            int32_t var_a74_2 = 2
            int64_t var_488
            __builtin_memset(&var_488, 0, 0x2c)
            int32_t var_45c_1 = 0x80
            int32_t var_458_1 = 0xffffffff
            int32_t var_454_1 = 0
            int64_t var_448_1 = 0
            int32_t var_440_1 = 0
            int32_t var_108 = 4
            void* var_f0_1 = rax_196
            
            if (rax_196 != 0)
                *(rax_196 + 8) += 1
            
            int32_t var_e8_1 = arg2[2].d
            char var_e0_1 = 1
            int64_t var_b58 = 0
            int32_t var_b50_1 = 0
            sub_1405947f0(&var_b58, 0xc)
            int32_t rax_198 = var_b50_1 + 0xc
            var_b50_1 = rax_198
            
            if (rax_198 s> 0)
                sub_140594770(&var_b58)
            
            UnDecorator::getReferenceType(var_b58, u"Description", 0x18)
            sub_140acb5e0(&var_488, &var_b58, &var_108)
            int64_t rcx_196 = var_b58
            
            if (rcx_196 != 0)
                sub_140a74f90(rcx_196)
            
            int64_t rdx_59 = sub_140597690(&var_108)
            int512_t zmm1_5
            zmm1_5.o = *(arg1 + 0x18)
            int128_t var_a30 = zx.o(0)
            void var_a10
            int64_t* rax_199 = sub_140aa1120(&var_a10, rdx_59, &var_a88, &var_a30)
            int32_t var_78 = 4
            int64_t var_68_1 = *rax_199
            void* rcx_200 = rax_199[1]
            void* var_60_1 = rcx_200
            
            if (rcx_200 != 0)
                *(rcx_200 + 8) += 1
            
            int32_t var_58_1 = rax_199[2].d
            char var_50_1 = 1
            int64_t var_c08 = 0
            int32_t var_c00_1 = 0
            sub_1405947f0(&var_c08, 7)
            int32_t rax_201 = var_c00_1 + 7
            var_c00_1 = rax_201
            
            if (rax_201 s> 0)
                sub_140594770(&var_c08)
            
            UnDecorator::getReferenceType(var_c08, u"Radius", 0xe)
            sub_140acb5e0(&var_488, &var_c08, &var_78)
            int64_t rcx_205 = var_c08
            
            if (rcx_205 != 0)
                sub_140a74f90(rcx_205)
            
            sub_140597690(&var_78)
            sub_1405970a0(&var_a10)
            sub_1405ec6a0(&var_a30)
            void var_9f8
            void var_9e0
            char* var_610
            int64_t* rax_204 = sub_140aaca20(&var_9f8, 
                sub_140a96390(&var_610, _vfprintf_p_l(&var_9e0, {Description}, radius {Radius}", 
                    EnvQueryGenerator")), &var_488)
            int64_t rdx_64 = *arg2
            *arg2 = *rax_204
            *rax_204 = rdx_64
            int64_t rdx_65 = arg2[1]
            arg2[1] = rax_204[1]
            rax_204[1] = rdx_65
            arg2[2].d = rax_204[2].d
            sub_1405970a0(&var_9f8)
            sub_1405970a0(&var_9e0)
            int32_t var_440_2 = 0
            
            if (var_448_1 != 0)
                sub_140a74f90(var_448_1)
            
            sub_140acd610(&var_488)
        
        int64_t var_98_1 = *arg2
        void* rax_207 = arg2[1]
        int64_t var_398
        __builtin_memset(&var_398, 0, 0x2c)
        int32_t var_36c_1 = 0x80
        int32_t var_368_1 = 0xffffffff
        int32_t var_364_1 = 0
        int64_t var_358_1 = 0
        int32_t var_350_1 = 0
        int32_t var_a8 = 4
        void* var_90_1 = rax_207
        
        if (rax_207 != 0)
            *(rax_207 + 8) += 1
        
        int32_t var_88_1 = arg2[2].d
        char var_80_1 = 1
        int64_t var_b48 = 0
        int32_t var_b40_1 = 0
        sub_1405947f0(&var_b48, 0xc)
        int32_t rax_209 = var_b40_1 + 0xc
        var_b40_1 = rax_209
        
        if (rax_209 s> 0)
            sub_140594770(&var_b48)
        
        UnDecorator::getReferenceType(var_b48, u"Description", 0x18)
        sub_140acb5e0(&var_398, &var_b48, &var_a8)
        int64_t rcx_222 = var_b48
        
        if (rcx_222 != 0)
            sub_140a74f90(rcx_222)
        
        sub_140597690(&var_a8)
        void var_9c8
        void var_9b0
        char* var_600
        int64_t* rax_212 = sub_140aaca20(&var_9c8, 
            sub_140a96390(&var_600, _vfprintf_p_l(&var_9b0, {Description})", EnvQueryGenerator"))
            , &var_398)
        int64_t rdx_70 = *arg2
        *arg2 = *rax_212
        *rax_212 = rdx_70
        int64_t rdx_71 = arg2[1]
        arg2[1] = rax_212[1]
        rax_212[1] = rdx_71
        arg2[2].d = rax_212[2].d
        sub_1405970a0(&var_9c8)
        sub_1405970a0(&var_9b0)
        int32_t var_350_2 = 0
        
        if (var_358_1 != 0)
            sub_140a74f90(var_358_1)
        
        sub_140acd610(&var_398)
        int32_t var_4e0_2 = 0
        
        if (var_4e8_1 != 0)
            sub_140a74f90(var_4e8_1)
        
        sub_140acd610(&var_528)
else if (rax_2 == 3)
    void var_920
    int64_t* rax_240 =
        _vfprintf_p_l(&var_920, Navmesh trace going over navmesh ledges", EnvQueryGenerator")
    int64_t rdx_90 = *arg2
    *arg2 = *rax_240
    *rax_240 = rdx_90
    int64_t rdx_91 = arg2[1]
    arg2[1] = rax_240[1]
    rax_240[1] = rdx_91
    arg2[2].d = rax_240[2].d
    sub_1405970a0(&var_920)

__security_check_cookie(rax_1 ^ &var_c28)
return arg2
