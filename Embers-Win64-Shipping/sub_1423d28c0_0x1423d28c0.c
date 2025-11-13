// 函数: sub_1423d28c0
// 地址: 0x1423d28c0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void var_4a8
int64_t rax_1 = __security_cookie ^ &var_4a8
int16_t* const r15 = &data_142d40450
int16_t* rdi = nullptr
uint64_t* r13 = arg4
int64_t* r12 = arg1

if (*arg4 != &data_142d40450)
    int32_t rdx = 0
    arg4[1].d = 0
    
    if (*(arg4 + 0xc) != 0)
        sub_1405947f0(arg4, 0)
        rdx = r13[1].d
    
    r13[1].d = rdx
    
    if (rdx s> *(r13 + 0xc))
        sub_140594770(r13)

if (*(arg2 + 0xb8) != &data_142d40450)
    int32_t rdx_1 = 0
    *(arg2 + 0xc0) = 0
    
    if (*(arg2 + 0xc4) != 0)
        sub_1405947f0(&arg2[0xb8], 0)
        rdx_1 = *(arg2 + 0xc0)
    
    *(arg2 + 0xc0) = rdx_1
    
    if (rdx_1 s> *(arg2 + 0xc4))
        sub_140594770(&arg2[0xb8])

wchar16* wcs1

if (arg3[6].d == 0)
    wcs1 = &data_142d40450
else
    wcs1 = arg3[5]

wchar16* rax_2 = wcsstr(wcs1, u".unreal")
int32_t r9 = arg3[6].d
int16_t* const rcx_4
int16_t* const r8

if (r9 == 0)
    r8 = &data_142d40450
    rcx_4 = &data_142d40450
else
    r8 = arg3[5]
    rcx_4 = r8

int64_t rax_3 = -1

do
    rax_3 += 1
while (rcx_4[rax_3] != 0)

uint64_t result

if ((rax_2 - r8) s>> 1 != sx.q(rax_3.d - 7))
label_1423d2ae4:
    int32_t r8_5
    
    if (*(arg3 + 0x24) == 0)
        int64_t var_388
        void var_200
        int64_t* rax_10 = sub_140aae2f0(&var_200, sub_142423a30(arg3, &var_388, 0))
        void var_310
        char* var_2a0
        char** rax_12 = sub_140a96390(&var_2a0, _vfprintf_p_l(&var_310, Invalid URL: {0}", Engine"))
        int32_t var_80_1 = 4
        int64_t rcx_19 = *rax_10
        int64_t* rcx_20 = rax_10[1]
        
        if (rcx_20 != 0)
            rcx_20[1].d += 1
        
        int32_t rax_14 = rax_10[2].d
        char var_58_1 = 1
        int32_t* var_408 = nullptr
        int32_t var_400_1 = 1
        sub_1405a4b40(&var_408, 1, 0)
        int32_t* rcx_22 = var_408
        *rcx_22 = var_80_1
        int64_t var_78
        *(rcx_22 + 8) = var_78
        *(rcx_22 + 8) = var_78
        rcx_22[2] = var_78.d
        *(rcx_22 + 8) = var_78
        rcx_22[0xa].b = 0
        
        if (var_58_1 != 0)
            *(rcx_22 + 0x10) = rcx_19
            *(rcx_22 + 0x18) = rcx_20
            
            if (rcx_20 != 0)
                rcx_20[1].d += 1
            
            rcx_22[8] = rax_14
            rcx_22[0xa].b = 1
        
        char* var_398 = *rax_12
        void* rax_22 = rax_12[1]
        void* var_390_1 = rax_22
        
        if (rax_22 != 0)
            *(rax_22 + 8) += 1
        
        void var_328
        int64_t* rax_23 = sub_140aac870(&var_328, &var_398, &var_408)
        int64_t var_3d8 = *rax_23
        int64_t* rcx_25 = rax_23[1]
        
        if (rcx_25 != 0)
            rcx_25[1].d += 1
        
        int32_t var_3c8_1 = rax_23[2].d
        int64_t* var_320
        
        if (var_320 != 0)
            var_320[1].d -= 1
            
            if (var_320[1].d == 1)
                (**var_320)(var_320)
                int32_t rax_27 = *(var_320 + 0xc)
                *(var_320 + 0xc) -= 1
                
                if (rax_27 == 1)
                    (*(*var_320 + 8))(var_320, 1)
        
        sub_140596f50(&var_408)
        
        if (var_58_1 != 0)
            char var_58_2 = 0
            
            if (rcx_20 != 0)
                rcx_20[1].d -= 1
                
                if (rcx_20[1].d == 1)
                    (**rcx_20)(rcx_20)
                    int32_t rax_31 = *(rcx_20 + 0xc)
                    *(rcx_20 + 0xc) -= 1
                    
                    if (rax_31 == 1)
                        (*(*rcx_20 + 8))(rcx_20, 1)
        
        int64_t* rdi_3 = rax_12[1]
        
        if (rdi_3 != 0)
            rdi_3[1].d -= 1
            
            if (rdi_3[1].d == 1)
                (**rdi_3)(rdi_3)
                int32_t rax_35 = *(rdi_3 + 0xc)
                *(rdi_3 + 0xc) -= 1
                
                if (rax_35 == 1)
                    (*(*rdi_3 + 8))(rdi_3, 1)
        
        int64_t* rdi_4 = rax_10[1]
        
        if (rdi_4 != 0)
            rdi_4[1].d -= 1
            
            if (rdi_4[1].d == 1)
                (**rdi_4)(rdi_4)
                int32_t rax_40 = *(rdi_4 + 0xc)
                *(rdi_4 + 0xc) -= 1
                
                if (rax_40 == 1)
                    (*(*rdi_4 + 8))(rdi_4, 1)
        
        sub_140597df0(r13, sub_140ac6680(&var_3d8))
        
        if (rcx_25 != 0)
            rcx_25[1].d -= 1
            
            if (rcx_25[1].d == 1)
                (**rcx_25)(rcx_25)
                int32_t rax_45 = *(rcx_25 + 0xc)
                *(rcx_25 + 0xc) -= 1
                
                if (rax_45 == 1)
                    (*(*rcx_25 + 8))(rcx_25, 1)
        
        int64_t* var_308
        
        if (var_308 != 0)
            var_308[1].d -= 1
            
            if (var_308[1].d == 1)
                (**var_308)(var_308)
                int32_t rbx_1 = *(var_308 + 0xc)
                *(var_308 + 0xc) -= 1
                
                if (rbx_1 == 1)
                    (*(*var_308 + 8))(var_308, zx.q(rbx_1))
        
        int64_t rcx_41 = var_388
        
        if (rcx_41 != 0)
            sub_140a74f90(rcx_41)
        
        r8_5 = 2
        goto label_1423d2df9
    
    char rax_87
    void* rdx_21
    rax_87, rdx_21 = sub_1424130d0(arg3, u"failed")
    char rax_88
    
    if (rax_87 == 0)
        rax_88, rdx_21 = sub_1424130d0(arg3, u"closed")
    
    if (rax_87 != 0 || rax_88 != 0)
        if (*(arg2 + 0x1a0) != 0)
            (*(*r12 + 0x480))(r12, arg2)
        
        void* rcx_106 = *(arg2 + 0x278)
        
        if (rcx_106 != 0)
            sub_140ccddc0(*(rcx_106 + 0x20))
        
        if (*arg2 != 6)
            int64_t* rax_122 = sub_141520bd0()
            void* rax_123 = rax_122[0x23]
            void* var_458_2 = rax_123
            
            if (rax_123 == 0)
                (*(*rax_122 + 0x390))(rax_122)
                var_458_2 = rax_122[0x23]
            
            int64_t var_378
            int16_t** rax_125 = sub_14151ffb0(&var_378)
            int32_t rcx_120 = rax_125[1].d
            int32_t rbx_10 = *(var_458_2 + 0x30)
            bool cond:3_1
            
            if (rcx_120 s> 1)
                int32_t r8_11 = rbx_10 - 1
                
                if (rbx_10 == 0)
                    r8_11 = 0
                
                int32_t r9_12
                
                if (rcx_120 == 0)
                    r9_12 = rcx_120 + 1
                
                if (rcx_120 != 0 || r8_11 == 0)
                    r9_12 = 0
                
                int16_t* rax_128 = *rax_125
                *rax_125 = nullptr
                int16_t* var_438 = rax_128
                int32_t rax_129 = *(rax_125 + 0xc)
                rax_125[1] = 0
                int32_t rdx_46 = r9_12 + r8_11 + rcx_120
                int32_t var_42c_1 = rax_129
                
                if (rdx_46 s> rax_129)
                    sub_1405947f0(&var_438, rdx_46)
                
                sub_140a20ba0(&var_438, *(var_458_2 + 0x28), r8_11)
                int16_t* rax_130 = var_438
                var_438 = nullptr
                int32_t var_430_1
                var_430_1.q = 0
                rdi = rax_130
                cond:3_1 = rcx_120 != 0
            else
                int64_t rax_127 = *(var_458_2 + 0x28)
                uint64_t var_3e8 = 0
                cond:3_1 = rbx_10 != 0
                
                if (rbx_10 != 0)
                    sub_1405a4c70(&var_3e8, rbx_10, 0)
                    rdi = var_3e8
                    memcpy(rdi, rax_127, rbx_10 * 2)
                    cond:3_1 = rbx_10 != 0
            
            if (cond:3_1)
                r15 = rdi
            
            void var_288
            sub_1423fb9e0(&var_288, arg3, r15, 1)
            
            if (rdi != 0)
                sub_140a74f90(rdi)
            
            int64_t rcx_127 = var_378
            
            if (rcx_127 != 0)
                sub_140a74f90(rcx_127)
            
            void var_118
            
            if ((*(*r12 + 0x450))(r12, arg2, sub_1423cf790(&var_118, &var_288), 0, r13) != 0)
                sub_140cb0ba0(0, 1)
                sub_14241df00(&arg2[0xd0], u"failed", nullptr, &data_143de5830)
                sub_14241df00(&arg2[0xd0], u"closed", nullptr, &data_143de5830)
                sub_14094c030(&var_288)
                sub_14094c030(arg3)
                result = 0
            else
                int64_t var_368
                (*(*r12 + 0x4d8))(r12, arg2, sub_142423a30(&var_288, &var_368, 0), r13)
                int64_t rcx_132 = var_368
                
                if (rcx_132 != 0)
                    sub_140a74f90(rcx_132)
                
                sub_14094c030(&var_288)
                sub_14094c030(arg3)
                result = 1
        else
            int32_t i_1 = *(arg2 + 0x228)
            uint64_t r13_1 = 0
            int128_t* rbx_6 = *(arg2 + 0x220)
            uint64_t var_3f8 = 0
            int32_t i_2 = i_1
            
            if (i_1 != 0)
                sub_1405a4be0(&var_3f8, i_1, 0)
                r13_1 = var_3f8
                void* rax_118 = r13_1 - rbx_6
                int32_t i
                
                do
                    int128_t zmm0_3 = *rbx_6
                    rbx_6 = &rbx_6[1]
                    *(rbx_6 + rax_118 - 0x10) = zmm0_3
                    i = i_1
                    i_1 -= 1
                while (i != 1)
                i_1 = i_2
            
            uint64_t rbx_7 = r13_1
            int64_t r15_7 = (sx.q(i_1) << 4) + r13_1
            
            if (r13_1 != r15_7)
                do
                    rdx_21 = *rbx_7
                    
                    if (rdx_21 != 0)
                        sub_1423d8550(arg2, *(rdx_21 + 0x190))
                    
                    rbx_7 += 0x10
                while (rbx_7 != r15_7)
            
            rdx_21.b = 1
            sub_140cb0ba0(0, rdx_21.b)
            
            if (r13_1 != 0)
                sub_140a74f90(r13_1)
            
            void* rax_119 = sub_140cde0b0()
            sub_140d19010(rax_119, 
                NewObject with empty name can't be used to create default subobjects (inside of UObject "
            "derived class constructor) as it produces incon")
            int32_t var_440
            var_440.q = 0
            int16_t** var_488
            var_488.d = 0
            void* rax_121 = sub_140d2dfc0(sub_1425616a0(), rax_119, 0, 0, var_488.d, 0, 0, 0, 0)
            *(arg2 + 0x1a0) = rax_121
            sub_14221ace0(rax_121, &arg2[0xd0])
            sub_142219a50(*(arg2 + 0x1a0))
            void* r9_10 = *(arg2 + 0x1a0)
            
            if (*(r9_10 + 0x30) != 0)
                sub_14094c030(arg3)
                result = 2
            else
                sub_1423d27f0(r12, *(arg2 + 0x278), 8, r9_10 + 0xb0)
                *(arg2 + 0x1a0) = 0
                sub_14094c030(arg3)
                result = 1
    else
        if (sub_1424130d0(arg3, u"restart") != 0)
            sub_141fa75e0(arg3, &arg2[0xd0])
        
        char rax_90
        
        if (data_143f3f3c8 != 0)
            rax_90 = sub_1424130d0(arg3, u"listen")
        
        if (data_143f3f3c8 != 0 && rax_90 != 0)
            void var_2f8
            sub_140597df0(r13, 
                sub_140ac6680(
                    _vfprintf_p_l(&var_2f8, 
                        Console commands were used which are disallowed in netplay.  You must restart t", 
                    Engine")))
            int64_t* var_2f0
            
            if (var_2f0 != 0)
                var_2f0[1].d -= 1
                
                if (var_2f0[1].d == 1)
                    (**var_2f0)(var_2f0)
                    int32_t rbx_3 = *(var_2f0 + 0xc)
                    *(var_2f0 + 0xc) -= 1
                    
                    if (rbx_3 == 1)
                        (*(*var_2f0 + 8))(var_2f0, zx.q(rbx_3))
            
            r8_5 = 7
            goto label_1423d2df9
        
        if (sub_142415f00(arg3) == 0)
            if (sub_142415bb0(arg3) == 0 || data_143de5429 == 0)
                if (sub_142415bb0(arg3) == 0)
                    sub_14094c030(arg3)
                    result = 1
                else
                    void var_2c8
                    sub_140597df0(r13, 
                        sub_140ac6680(_vfprintf_p_l(&var_2c8, Servers can't open network URLs", 
                            Engine")))
                    int64_t* var_2c0
                    
                    if (var_2c0 == 0)
                        sub_14094c030(arg3)
                        result = 1
                    else
                        var_2c0[1].d -= 1
                        
                        if (var_2c0[1].d != 1)
                            sub_14094c030(arg3)
                            result = 1
                        else
                            (**var_2c0)(var_2c0)
                            int32_t result_1 = *(var_2c0 + 0xc)
                            *(var_2c0 + 0xc) -= 1
                            
                            if (result_1 != 1)
                                sub_14094c030(arg3)
                                result = 1
                            else
                                (*(*var_2c0 + 8))(var_2c0, zx.q(result_1))
                                sub_14094c030(arg3)
                                result = zx.q(result_1)
            else
                if (*(arg2 + 0x1a0) != 0)
                    (*(*r12 + 0x480))(r12, arg2)
                
                if (*(arg2 + 0x278) != 0 && (*(*r12 + 0x4d0))(r12) != 0)
                    sub_1423f1a00(r12, *(arg2 + 0x278))
                
                void* rax_104 = sub_1423ce520(sub_140cde0b0())
                *(arg2 + 0x1a0) = rax_104
                sub_14221ace0(rax_104, arg3)
                sub_142219a50(*(arg2 + 0x1a0))
                void* r9_6 = *(arg2 + 0x1a0)
                
                if (r9_6 == 0)
                    void var_2e0
                    sub_140597df0(r13, 
                        sub_140ac6680(
                            _vfprintf_p_l(&var_2e0, Error initializing the network driver.", 
                            Engine")))
                    int64_t* var_2d8
                    
                    if (var_2d8 != 0)
                        var_2d8[1].d -= 1
                        
                        if (var_2d8[1].d == 1)
                            (**var_2d8)(var_2d8)
                            int32_t rbx_5 = *(var_2d8 + 0xc)
                            *(var_2d8 + 0xc) -= 1
                            
                            if (rbx_5 == 1)
                                (*(*var_2d8 + 8))(var_2d8, zx.q(rbx_5))
                    
                    r8_5 = 8
                label_1423d2df9:
                    sub_1423d27f0(r12, *(arg2 + 0x278), r8_5, r13)
                    sub_14094c030(arg3)
                    result = 1
                else if (*(r9_6 + 0x30) != 0)
                    sub_14094c030(arg3)
                    result = 2
                else
                    sub_1423d27f0(r12, *(arg2 + 0x278), 8, r9_6 + 0xb0)
                    *(arg2 + 0x1a0) = 0
                    sub_14094c030(arg3)
                    result = 1
        else
            void var_180
            rdi.b = (*(*r12 + 0x450))(r12, arg2, sub_1423cf790(&var_180, arg3), 0, r13) == 0
            sub_14094c030(arg3)
            result = zx.q(rdi.d)
else
    uint64_t var_428 = 0
    int32_t var_420_1 = 0
    int16_t* r12_1
    
    if (r9 == 0)
        r12_1 = &data_142d40450
    else
        r12_1 = arg3[5]
    
    int16_t* var_450 = nullptr
    int32_t rdx_5 = 0
    int32_t var_448_1 = 0
    int32_t rcx_5 = 0
    int32_t var_444_1 = 0
    
    if (r12_1 != 0 && *r12_1 != 0)
        int64_t r15_1 = -1
        
        do
            r15_1 += 1
        while (r12_1[r15_1] != 0)
        
        if (r15_1.d + 1 s> 0)
            sub_1405947f0(&var_450, r15_1.d + 1)
            rcx_5 = var_444_1
            rdx_5 = var_448_1
        
        int32_t rax_6 = rdx_5 + r15_1.d + 1
        int32_t var_448_2 = rax_6
        
        if (rax_6 s> rcx_5)
            sub_140594770(&var_450)
        
        UnDecorator::getReferenceType(var_450, r12_1, (r15_1.d + 1) * 2)
        r15 = &data_142d40450
    
    char rax_7 = sub_140af5b90(data_143ddb400, u"Link", u"Server", &var_428, &var_450)
    int16_t* rcx_10 = var_450
    
    if (rcx_10 != 0)
        sub_140a74f90(rcx_10)
    
    if (rax_7 != 0)
        int16_t* r8_3 = &data_142d40450
        
        if (var_420_1 != 0)
            r8_3 = var_428
        
        void var_1e8
        sub_14215dc20(arg3, sub_1423fb9e0(&var_1e8, nullptr, r8_3, 0))
        sub_14094c030(&var_1e8)
        uint64_t rcx_14 = var_428
        
        if (rcx_14 != 0)
            sub_140a74f90(rcx_14)
        
        r12 = arg1
        goto label_1423d2ae4
    
    void var_218
    int64_t* rax_50 = sub_140aae420(&var_218, &arg3[5])
    void var_340
    char* var_2b0
    char** rax_52 = sub_140a96390(&var_2b0, _vfprintf_p_l(&var_340, Invalid Link: {0}", Engine"))
    int64_t rcx_47 = *rax_50
    int64_t* rcx_48 = rax_50[1]
    int32_t var_b0_1 = 4
    
    if (rcx_48 != 0)
        rcx_48[1].d += 1
    
    int32_t rax_53 = rax_50[2].d
    char var_88_1 = 1
    int32_t* var_418 = nullptr
    int32_t var_410_1 = 1
    sub_1405a4b40(&var_418, 1, 0)
    int32_t* rcx_50 = var_418
    *rcx_50 = var_b0_1
    int64_t var_a8
    *(rcx_50 + 8) = var_a8
    *(rcx_50 + 8) = var_a8
    rcx_50[2] = var_a8.d
    *(rcx_50 + 8) = var_a8
    rcx_50[0xa].b = 0
    
    if (var_88_1 != 0)
        *(rcx_50 + 0x10) = rcx_47
        *(rcx_50 + 0x18) = rcx_48
        
        if (rcx_48 != 0)
            rcx_48[1].d += 1
        
        rcx_50[8] = rax_53
        rcx_50[0xa].b = 1
    
    char* var_3a8 = *rax_52
    void* rax_61 = rax_52[1]
    void* var_3a0_1 = rax_61
    
    if (rax_61 != 0)
        *(rax_61 + 8) += 1
    
    void var_358
    int64_t* rax_62 = sub_140aac870(&var_358, &var_3a8, &var_418)
    int64_t var_3c0 = *rax_62
    int64_t* rcx_53 = rax_62[1]
    
    if (rcx_53 != 0)
        rcx_53[1].d += 1
    
    int32_t var_3b0_1 = rax_62[2].d
    int64_t* var_350
    
    if (var_350 != 0)
        var_350[1].d -= 1
        
        if (var_350[1].d == 1)
            (**var_350)(var_350)
            int32_t rax_66 = *(var_350 + 0xc)
            *(var_350 + 0xc) -= 1
            
            if (rax_66 == 1)
                (*(*var_350 + 8))(var_350, 1)
    
    sub_140596f50(&var_418)
    
    if (var_88_1 != 0)
        char var_88_2 = 0
        
        if (rcx_48 != 0)
            rcx_48[1].d -= 1
            
            if (rcx_48[1].d == 1)
                (**rcx_48)(rcx_48)
                int32_t rax_70 = *(rcx_48 + 0xc)
                *(rcx_48 + 0xc) -= 1
                
                if (rax_70 == 1)
                    (*(*rcx_48 + 8))(rcx_48, 1)
    
    int64_t* rdi_9 = rax_52[1]
    
    if (rdi_9 != 0)
        rdi_9[1].d -= 1
        
        if (rdi_9[1].d == 1)
            (**rdi_9)(rdi_9)
            int32_t rax_74 = *(rdi_9 + 0xc)
            *(rdi_9 + 0xc) -= 1
            
            if (rax_74 == 1)
                (*(*rdi_9 + 8))(rdi_9, 1)
    
    int64_t* rdi_10 = rax_50[1]
    
    if (rdi_10 != 0)
        rdi_10[1].d -= 1
        
        if (rdi_10[1].d == 1)
            (**rdi_10)(rdi_10)
            int32_t rax_78 = *(rdi_10 + 0xc)
            *(rdi_10 + 0xc) -= 1
            
            if (rax_78 == 1)
                (*(*rdi_10 + 8))(rdi_10, 1)
    
    sub_140597df0(r13, sub_140ac6680(&var_3c0))
    
    if (rcx_53 != 0)
        rcx_53[1].d -= 1
        
        if (rcx_53[1].d == 1)
            (**rcx_53)(rcx_53)
            int32_t rax_83 = *(rcx_53 + 0xc)
            *(rcx_53 + 0xc) -= 1
            
            if (rax_83 == 1)
                (*(*rcx_53 + 8))(rcx_53, 1)
    
    int64_t* var_338
    
    if (var_338 != 0)
        var_338[1].d -= 1
        
        if (var_338[1].d == 1)
            (**var_338)(var_338)
            int32_t rbx_2 = *(var_338 + 0xc)
            *(var_338 + 0xc) -= 1
            
            if (rbx_2 == 1)
                int64_t r8_7 = *var_338
                (*(r8_7 + 8))(var_338, zx.q(rbx_2), r8_7)
    
    uint64_t rcx_69 = var_428
    
    if (rcx_69 != 0)
        sub_140a74f90(rcx_69)
    
    sub_14094c030(arg3)
    result = 1

__security_check_cookie(rax_1 ^ &var_4a8)
return result
