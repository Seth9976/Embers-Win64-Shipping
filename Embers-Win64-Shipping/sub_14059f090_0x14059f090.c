// 函数: sub_14059f090
// 地址: 0x14059f090
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void var_6b8
int64_t rax_1 = __security_cookie ^ &var_6b8
void* r15 = arg1
void* var_610 = arg1
int32_t rsi = 0
int32_t var_5c8 = 0
void var_360
pdb_internal::Array<struct DBI1::SrcMap>::Array<struct DBI1::SrcMap>(&var_360)

if (data_143de5432 == 0)
    char var_668 = *(r15 + 0x5a)
    int32_t rbx_1 = *(r15 + 0x68)
    char var_667 = *(r15 + 0x5b)
    char rax_4 = *(r15 + 0x5d)
    int64_t rdi_1 = *(r15 + 0x60)
    char rax_5 = *(r15 + 0x5c)
    char rax_6 = *(r15 + 0x5e)
    char r13_1 = *(r15 + 0x59)
    char rax_7 = *(r15 + 0x5f)
    char r14_1 = *(r15 + 0x58)
    uint64_t var_660 = 0
    
    if (rbx_1 != 0)
        sub_1405a4c70(&var_660, rbx_1, 0)
        memcpy(var_660, rdi_1, rbx_1 * 2)
    
    int32_t r12_1 = 1
    int16_t* rax_8 = *(r15 + 0x70)
    int128_t* rcx_3 = *(r15 + 0x80)
    int128_t zmm6
    int128_t zmm7
    int128_t zmm8
    int128_t zmm9
    
    if (data_143de5426 != 0)
        sub_142404980()
    label_14059f651:
        int128_t var_38_1 = zmm6
        int128_t var_48_1 = zmm7
        int128_t var_58_1 = zmm8
        int128_t var_68_1 = zmm9
        uint64_t rax_51 = sub_1425cf590()
        int16_t* const r13_2 = &data_142d40450
        
        if (rax_51 == 0)
        label_14059f69e:
            
            if (data_143de5670 == 0)
                rax_51.b = 0
            else
                int64_t* rcx_42 = data_143de5668
                
                if (rcx_42 == 0)
                    rax_51.b = 0
                else if ((*(*rcx_42 + 0x28))(rcx_42).b == 0)
                    rax_51.b = 0
                else
                    rax_51 = 1
            
            if (rax_51.b != 0 && sub_1405948d0() != 0)
                void var_2e8
                pdb_internal::Array<struct DBI1::SrcMap>::Array<struct DBI1::SrcMap>(&var_2e8)
                int64_t var_430
                int64_t* rax_54 = sub_140b254c0(&var_430)
                int16_t* const rax_55
                
                if (rax_54[1].d == 0)
                    rax_55 = &data_142d40450
                else
                    rax_55 = *rax_54
                
                int16_t* const var_a0 = rax_55
                wchar16 const* const var_98_1 = u"InstalledContent"
                wchar16 const* const var_80_1 = u"Paks"
                wchar16* var_90_1 = u"Embers"
                wchar16 const* const var_88_1 = u"Content"
                uint64_t var_5a0 = 0
                int32_t var_598_1 = 0
                sub_140b0f5f0(&var_5a0, &var_a0, 5)
                int64_t rcx_46 = var_430
                
                if (rcx_46 != 0)
                    sub_140a74f90(rcx_46)
                
                int64_t var_420
                int64_t* rax_56 = sub_140b254c0(&var_420)
                int16_t* const rax_57
                
                if (rax_56[1].d == 0)
                    rax_57 = &data_142d40450
                else
                    rax_57 = *rax_56
                
                int16_t* const var_4d8 = rax_57
                wchar16 const* const var_4d0_1 = u"InstalledContent"
                uint64_t var_568 = 0
                int64_t var_560_1 = 0
                sub_140b0f5f0(&var_568, &var_4d8, 2)
                sub_140a3e050(&var_568)
                uint64_t rcx_50 = var_568
                
                if (rcx_50 != 0)
                    sub_140a74f90(rcx_50)
                
                int64_t rcx_51 = var_420
                
                if (rcx_51 != 0)
                    sub_140a74f90(rcx_51)
                
                int64_t* var_5f8 = nullptr
                int32_t i_7 = 1
                sub_1405a4f90(&var_5f8)
                int64_t* rbx_4 = var_5f8
                *rbx_4 = 0
                uint64_t r14_5 = var_5a0
                rbx_4[1].d = var_598_1
                
                if (var_598_1 != 0)
                    sub_1405a4c70(rbx_4, var_598_1, 0)
                    memcpy(*rbx_4, r14_5, var_598_1 * 2)
                else
                    *(rbx_4 + 0xc) = 0
                
                int64_t* rcx_55 = nullptr
                
                if (data_143de5670 != 0)
                    rcx_55 = data_143de5668
                
                (*(*rcx_55 + 0x48))(rcx_55, &var_5f8)
                int32_t i_6 = i_7
                int64_t* rbx_5 = var_5f8
                
                if (i_6 != 0)
                    int32_t i
                    
                    do
                        int64_t rcx_56 = *rbx_5
                        
                        if (rcx_56 != 0)
                            sub_140a74f90(rcx_56)
                        
                        rbx_5 = &rbx_5[2]
                        i = i_6
                        i_6 -= 1
                    while (i != 1)
                    rbx_5 = var_5f8
                
                if (rbx_5 != 0)
                    sub_140a74f90(rbx_5)
                
                uint64_t rcx_58 = var_5a0
                
                if (rcx_58 != 0)
                    sub_140a74f90(rcx_58)
                
                pdb_internal::Array<struct FileLCRec* __ptr64>::~Array<struct FileLCRec* __ptr64>(
                    &var_2e8)
            
            sub_14059a610(r14_1, zx.q(r13_1), var_668)
            
            if (var_667 != 0)
                void var_2d0
                pdb_internal::Array<struct DBI1::SrcMap>::Array<struct DBI1::SrcMap>(&var_2d0)
                sub_140afd390()
                sub_140aed6d0()
                pdb_internal::Array<struct FileLCRec* __ptr64>::~Array<struct FileLCRec* __ptr64>(
                    &var_2d0)
            
            void var_2b8
            pdb_internal::Array<struct DBI1::SrcMap>::Array<struct DBI1::SrcMap>(&var_2b8)
            int32_t rdx_31 = 0
            int32_t rcx_64 = 0
            int32_t var_618_1 = 0
            int32_t var_614_1 = 0
            int64_t var_620 = 0
            
            if ((*u"Embers")[0] != 0)
                int64_t rbx_6 = -1
                
                do
                    rbx_6 += 1
                while ((*u"Embers")[rbx_6] != 0)
                
                if (rbx_6.d + 1 s> 0)
                    sub_1405947f0(&var_620, rbx_6.d + 1)
                    rcx_64 = var_614_1
                    rdx_31 = var_618_1
                
                int32_t rax_59 = rdx_31 + rbx_6.d + 1
                int32_t var_618_2 = rax_59
                
                if (rax_59 s> rcx_64)
                    sub_140594770(&var_620)
                
                UnDecorator::getReferenceType(var_620, u"Embers", (rbx_6.d + 1) * 2)
            
            int64_t var_410
            sub_1419d3d50(&var_620, sub_140b25050(&var_410))
            int64_t rcx_70 = var_410
            
            if (rcx_70 != 0)
                sub_140a74f90(rcx_70)
            
            int64_t rcx_71 = var_620
            
            if (rcx_71 != 0)
                sub_140a74f90(rcx_71)
            
            int64_t* var_548
            sub_140a46930(&var_548)
            int64_t* rdi_8 = var_548
            int32_t var_540
            int64_t rbx_8 = sx.q(var_540)
            void* r14_8 = &rdi_8[rbx_8 * 2]
            
            if (rdi_8 != r14_8)
                do
                    int32_t rdx_34 = 0
                    int32_t rcx_73 = 0
                    int32_t var_628_1 = 0
                    int32_t var_624_1 = 0
                    int64_t var_630 = 0
                    
                    if ((*u"Embers")[0] != 0)
                        int64_t rbx_9 = -1
                        
                        do
                            rbx_9 += 1
                        while ((*u"Embers")[rbx_9] != 0)
                        
                        if (rbx_9.d + 1 s> 0)
                            sub_1405947f0(&var_630, rbx_9.d + 1)
                            rcx_73 = var_624_1
                            rdx_34 = var_628_1
                        
                        int32_t rax_61 = rdx_34 + rbx_9.d + 1
                        int32_t var_628_2 = rax_61
                        
                        if (rax_61 s> rcx_73)
                            sub_140594770(&var_630)
                        
                        UnDecorator::getReferenceType(var_630, u"Embers", (rbx_9.d + 1) * 2)
                    
                    int16_t* const var_b8
                    
                    if (rdi_8[1].d == 0)
                        var_b8 = &data_142d40450
                    else
                        var_b8 = *rdi_8
                    
                    wchar16* var_b0_1 = u"Embers"
                    wchar16 const* const var_a8_1 = u"Content"
                    uint64_t var_558 = 0
                    int64_t var_550_1 = 0
                    sub_140b0f5f0(&var_558, &var_b8, 3)
                    sub_1419d3d50(&var_630, &var_558)
                    uint64_t rcx_79 = var_558
                    
                    if (rcx_79 != 0)
                        sub_140a74f90(rcx_79)
                    
                    int64_t rcx_80 = var_630
                    
                    if (rcx_80 != 0)
                        sub_140a74f90(rcx_80)
                    
                    rdi_8 = &rdi_8[2]
                while (rdi_8 != r14_8)
                
                rbx_8 = zx.q(var_540)
                rdi_8 = var_548
                r15 = var_610
            
            if (rbx_8.d != 0)
                int32_t i_1
                
                do
                    int64_t rcx_81 = *rdi_8
                    
                    if (rcx_81 != 0)
                        sub_140a74f90(rcx_81)
                    
                    rdi_8 = &rdi_8[2]
                    i_1 = rbx_8.d
                    rbx_8 = zx.q(rbx_8.d - 1)
                while (i_1 != 1)
                rdi_8 = var_548
            
            if (rdi_8 != 0)
                sub_140a74f90(rdi_8)
            
            sub_1419d3ee0(data_143f0f1a0)
            pdb_internal::Array<struct FileLCRec* __ptr64>::~Array<struct FileLCRec* __ptr64>(
                &var_2b8)
        else
            int64_t rdx_20 = *rax_51
            
            if ((*(rdx_20 + 0x98))(rax_51, rdx_20).b != 0)
                goto label_14059f69e
        
        sub_140ab28f0()
        sub_140bb4f60()
        int128_t* rdi_9 = rcx_3
        void var_2a0
        sub_140b389c0(rdi_9, 0x40a00000, sub_140a96170(&var_2a0))
        int64_t* var_298
        
        if (var_298 != 0)
            var_298[1].d -= 1
            
            if (var_298[1].d == 1)
                (**var_298)(var_298)
                int32_t rax_66 = *(var_298 + 0xc)
                *(var_298 + 0xc) -= 1
                
                if (rax_66 == 1)
                    (*(*var_298 + 8))(var_298, 1)
        
        void var_478
        int64_t* rax_68 = sub_140b58170(&var_478, "AssetRegistry", 1)
        j_sub_140b3db50()
        int512_t zmm1_2
        int512_t zmm2_1
        zmm1_2, zmm2_1 = sub_140b407e0(&data_143de7d78, *rax_68)
        zmm2_1.o = 0x3f000000
        zmm1_2.o = 0x3dcccccd
        sub_140b26d80(6)
        int64_t var_570_1 = 0
        int512_t zmm2_2
        int128_t zmm8_1
        int128_t zmm9_1
        zmm2_2, zmm8_1, zmm9_1 = sub_140d27770(0, 1)
        sub_140b26d80(7)
        zmm2_2.o = zmm8_1
        int512_t zmm1_3
        zmm1_3.o = zmm9_1
        void var_288
        pdb_internal::Array<struct DBI1::SrcMap>::Array<struct DBI1::SrcMap>(&var_288)
        sub_140ba93d0()
        sub_140bafa70(&data_143e1a5e0, zmm1_3, zmm2_2)
        pdb_internal::Array<struct FileLCRec* __ptr64>::~Array<struct FileLCRec* __ptr64>(&var_288)
        void var_270
        pdb_internal::Array<struct DBI1::SrcMap>::Array<struct DBI1::SrcMap>(&var_270)
        sub_142111bd0()
        pdb_internal::Array<struct FileLCRec* __ptr64>::~Array<struct FileLCRec* __ptr64>(&var_270)
        void var_258
        pdb_internal::Array<struct DBI1::SrcMap>::Array<struct DBI1::SrcMap>(&var_258)
        int128_t zmm7_1
        int128_t zmm8_2
        int128_t zmm9_2
        zmm7_1, zmm8_2, zmm9_2 = sub_141f88540()
        pdb_internal::Array<struct FileLCRec* __ptr64>::~Array<struct FileLCRec* __ptr64>(&var_258)
        void var_240
        int512_t zmm1_5
        int512_t zmm2_3
        zmm1_5, zmm2_3 = sub_140b389c0(rdi_9, zmm7_1, sub_140a96170(&var_240))
        int64_t* var_238
        
        if (var_238 != 0)
            var_238[1].d -= 1
            
            if (var_238[1].d == 1)
                (**var_238)(var_238)
                int32_t rax_72 = *(var_238 + 0xc)
                *(var_238 + 0xc) -= 1
                
                if (rax_72 == 1)
                    (*(*var_238 + 8))(var_238, 1)
        
        j_sub_140b3db50()
        sub_140b47900(&data_143de7d78)
        zmm2_3.o = zmm8_2
        zmm1_5.o = zmm9_2
        
        if (rax_5 != 0)
            void var_228
            pdb_internal::Array<struct DBI1::SrcMap>::Array<struct DBI1::SrcMap>(&var_228)
            sub_140d1e580(&data_143e1d990)
            pdb_internal::Array<struct FileLCRec* __ptr64>::~Array<struct FileLCRec* __ptr64>(
                &var_228)
        
        void var_210
        sub_140b389c0(rdi_9, 0x41200000, sub_140a96170(&var_210))
        int64_t* var_208
        
        if (var_208 != 0)
            var_208[1].d -= 1
            
            if (var_208[1].d == 1)
                (**var_208)(var_208)
                int32_t rax_77 = *(var_208 + 0xc)
                *(var_208 + 0xc) -= 1
                
                if (rax_77 == 1)
                    (*(*var_208 + 8))(var_208, 1)
        
        void var_1f8
        pdb_internal::Array<struct DBI1::SrcMap>::Array<struct DBI1::SrcMap>(&var_1f8)
        char rax_79
        int128_t zmm6_1
        rax_79, zmm6_1 = sub_14059d9b0()
        pdb_internal::Array<struct FileLCRec* __ptr64>::~Array<struct FileLCRec* __ptr64>(&var_1f8)
        
        if (rax_79 == 0)
            rsi = r12_1
        else
            void var_1e0
            sub_140b389c0(rdi_9, zmm6_1, sub_140a96170(&var_1e0))
            int64_t* var_1d8
            
            if (var_1d8 != 0)
                var_1d8[1].d -= 1
                
                if (var_1d8[1].d == 1)
                    (**var_1d8)(var_1d8)
                    int32_t rax_83 = *(var_1d8 + 0xc)
                    *(var_1d8 + 0xc) -= 1
                    
                    if (rax_83 == 1)
                        (*(*var_1d8 + 8))(var_1d8, 1)
            
            void var_3f0
            pdb_internal::Array<struct DBI1::SrcMap>::Array<struct DBI1::SrcMap>(&var_3f0)
            int64_t* rax_85 = sub_140b7c590()
            int64_t r8_17 = *rax_85
            char rax_86 = (*(r8_17 + 0x18))(rax_85, 4, r8_17)
            char rax_87
            
            if (rax_86 != 0)
                zmm7_1 = sub_140b7c510()
                int64_t r8_18 = data_143e19eb0
                rax_87 = (*(r8_18 + 0x18))(&data_143e19eb0, 4, r8_18)
            
            if (rax_86 == 0 || rax_87 == 0)
                pdb_internal::Array<struct FileLCRec* __ptr64>::~Array<struct FileLCRec* __ptr64>(
                    &var_3f0)
                rsi = r12_1
            else
                pdb_internal::Array<struct FileLCRec* __ptr64>::~Array<struct FileLCRec* __ptr64>(
                    &var_3f0)
                
                if (data_143de5426 == 0)
                    int64_t* rax_88 = sub_141d88590()
                    int64_t rdx_45 = *rax_88
                    
                    if ((*(rdx_45 + 0x60))(rax_88, rdx_45) == 0)
                        void var_1c8
                        pdb_internal::Array<struct DBI1::SrcMap>::Array<struct DBI1::SrcMap>(
                            &var_1c8)
                        int64_t r14_9 = *(data_143e29f28 + 0x20)
                        
                        if (r14_9 != 0)
                            void* rcx_122 = data_143efaed8
                            
                            if (rcx_122 == 0)
                                int64_t* rax_94 = sub_141d88590()
                                int128_t var_400 = zx.o(0)
                                int64_t r9_2 = *rax_94
                                (*(r9_2 + 8))(rax_94, r14_9, &var_400, r9_2)
                            else if (sub_1418b49e0(rcx_122, 2) == 0)
                                int64_t* rax_92 = sub_141d88590()
                                void var_118
                                (*(*rax_92 + 8))(rax_92, r14_9, 
                                    sub_1418b3cb0(data_143efaed8, &var_118))
                                rdi_9 = rcx_3
                            else
                                zmm7_1 = sub_1418b4a80(data_143efaed8, r14_9)
                        
                        pdb_internal::Array<struct FileLCRec* __ptr64>::~Array<struct FileLCRec* __ptr64>(
                            &var_1c8)
                
                void var_1b0
                pdb_internal::Array<struct DBI1::SrcMap>::Array<struct DBI1::SrcMap>(&var_1b0)
                pdb_internal::Array<struct FileLCRec* __ptr64>::~Array<struct FileLCRec* __ptr64>(
                    &var_1b0)
                void var_198
                double zmm0_3[0x2] = sub_140b389c0(rdi_9, zmm7_1, sub_140a96170(&var_198))
                int64_t* var_190
                
                if (var_190 != 0)
                    var_190[1].d -= 1
                    
                    if (var_190[1].d == 1)
                        (**var_190)(var_190)
                        int32_t rax_98 = *(var_190 + 0xc)
                        *(var_190 + 0xc) -= 1
                        
                        if (rax_98 == 1)
                            (*(*var_190 + 8))(var_190, 1)
                
                if (data_143de5426 == 0)
                    int64_t* rax_100 = sub_141d88590()
                    int64_t rdx_52 = *rax_100
                    
                    if ((*(rdx_52 + 0x60))(rax_100, rdx_52) == 0)
                        void var_180
                        pdb_internal::Array<struct DBI1::SrcMap>::Array<struct DBI1::SrcMap>(
                            &var_180)
                        void* rcx_136 = data_143efaed8
                        char rax_102
                        
                        if (rcx_136 != 0)
                            rax_102 = sub_1418b49e0(rcx_136, 2)
                        
                        if (rcx_136 == 0 || rax_102 == 0)
                            int64_t* rax_103 = sub_141d88590()
                            int64_t rdx_55 = *rax_103
                            (*(rdx_55 + 0x40))(rax_103, rdx_55)
                        else
                            sub_1418b70a0(data_143efaed8, 2, zmm0_3)
                            sub_1418b7340(data_143efaed8, 0)
                        
                        pdb_internal::Array<struct FileLCRec* __ptr64>::~Array<struct FileLCRec* __ptr64>(
                            &var_180)
                
                void var_168
                pdb_internal::Array<struct DBI1::SrcMap>::Array<struct DBI1::SrcMap>(&var_168)
                int64_t* rax_104 = sub_141d88590()
                int64_t rdx_57 = *rax_104
                (*(rdx_57 + 0x60))(rax_104, rdx_57)
                pdb_internal::Array<struct FileLCRec* __ptr64>::~Array<struct FileLCRec* __ptr64>(
                    &var_168)
                void var_470
                sub_1405966e0(&data_1439aa9d0, &var_470, sub_1419af100)
                void var_468
                sub_1405966e0(&data_1439aa9e8, &var_468, sub_1419b9a40)
                void var_150
                pdb_internal::Array<struct DBI1::SrcMap>::Array<struct DBI1::SrcMap>(&var_150)
                char rax_105 = sub_14059df40()
                pdb_internal::Array<struct FileLCRec* __ptr64>::~Array<struct FileLCRec* __ptr64>(
                    &var_150)
                
                if (rax_105 == 0)
                    rsi = r12_1
                else
                    if (data_143e1d99c != 0)
                        void var_3a8
                        pdb_internal::Array<struct DBI1::SrcMap>::Array<struct DBI1::SrcMap>(
                            &var_3a8)
                        sub_140d1a6a0(&data_143e1d990)
                        pdb_internal::Array<struct FileLCRec* __ptr64>::~Array<struct FileLCRec* __ptr64>(
                            &var_3a8)
                    
                    sub_140bcbd30()
                    sub_140d0a7f0()
                    int64_t* rax_106
                    rax_106, zmm7_1, zmm8_2, zmm9_2 = sub_142168400()
                    int64_t var_580_1 = 0
                    int64_t r8_22 = *rax_106
                    
                    if ((*(r8_22 + 0x260))(rax_106, 0, r8_22) != 0)
                        int64_t var_528 = 0
                        int32_t var_520_1 = 0
                        void*** rax_108 = sub_1405978f0(0x20, &var_528)
                        
                        if (rax_108 != 0)
                            *rax_108 = &data_142d42b98
                            rax_108[1] = sub_14059c6e0
                            rax_108[3] = sub_140a387b0()
                        
                        sub_140b27d20(&var_528)
                    
                    void var_390
                    int32_t rcx_153
                    int512_t zmm1_10
                    int512_t zmm2_4
                    rcx_153, zmm1_10, zmm2_4 = sub_140b389c0(rdi_9, zmm7_1, sub_140a96170(&var_390))
                    int64_t* var_388
                    
                    if (var_388 != 0)
                        var_388[1].d -= 1
                        
                        if (var_388[1].d == 1)
                            rcx_153 = (**var_388)(var_388)
                            int32_t rax_113 = *(var_388 + 0xc)
                            *(var_388 + 0xc) -= 1
                            
                            if (rax_113 == 1)
                                rcx_153 = (*(*var_388 + 8))(var_388, 1)
                    
                    if (rax_4 != 0)
                    label_1405a0af0:
                        
                        if (data_143de5432 == 0)
                            zmm2_4.o = zmm8_2
                            zmm1_10.o = zmm9_2
                            int64_t var_538 = 0
                            int64_t var_530_1 = 0
                            sub_140af2b60()
                            char rax_167
                            
                            if (sub_140b21a10(&data_143dbb3f0, u"DUMPMOVIE") != 0)
                                data_143de5434 = 0xffffffff
                                rax_167 = 0
                            else
                                sub_140af2b60()
                                
                                if (sub_140b2acc0(&data_143dbb3f0, -MATINEESSCAPTURE=", &var_538, 1)
                                        != 0)
                                    data_143de5434 = 0xffffffff
                                    rax_167 = 0
                                else if (data_143de5434 != 0 || data_143de548c != 0)
                                    rax_167 = 0
                                else
                                    rax_167 = 1
                            
                            data_14399fa08 = rax_167
                            *(r15 + 0x38) = 0
                            sub_142090dd0()
                            sub_1420969a0(&data_143a2e330)
                            void var_378
                            pdb_internal::Array<struct DBI1::SrcMap>::Array<struct DBI1::SrcMap>(
                                &var_378)
                            sub_140af2ae0()
                            int512_t zmm2_5
                            zmm2_5, zmm8_2 = sub_140aff170(&data_143de5920)
                            pdb_internal::Array<struct FileLCRec* __ptr64>::~Array<struct FileLCRec* __ptr64>(
                                &var_378)
                            zmm2_5.o = zmm8_2
                            int512_t zmm1_11
                            zmm1_11.o = zmm9_2
                            sub_140599550(r15 + 0x58)
                            int64_t rcx_235 = var_538
                            
                            if (rcx_235 != 0)
                                sub_140a74f90(rcx_235)
                        else
                            int64_t* rcx_229 = data_143f5b298
                            
                            if (rcx_229 != 0)
                                (*(*rcx_229 + 0x290))(rcx_229)
                            
                            sub_140598df0()
                            rsi = r12_1
                    else
                        if (rax_6 != 0)
                            if (rax_7 != 0)
                                uint64_t rdx_94 = var_660
                                uint64_t var_5b0 = 0
                                sub_140596860(&var_5b0, rdx_94, rbx_1, 0, 
                                    sbb.d(rcx_153, rcx_153, rbx_1 != 0) + 0xb)
                                sub_140a20ba0(&var_5b0, u"Commandlet", 0xa)
                                uint64_t rdx_95 = &data_142d40450
                                uint64_t rbx_34 = var_5b0
                                var_5b0 = 0
                                int32_t var_5a8
                                
                                if (var_5a8 != 0)
                                    rdx_95 = rbx_34
                                
                                var_5a8.q = 0
                                int64_t rax_162
                                int32_t rcx_222
                                rax_162, rcx_222, zmm1_10, zmm2_4, zmm8_2, zmm9_2 =
                                    sub_1405968d0(-ffffffffffffffff, rdx_95, 0)
                                
                                if (rbx_34 != 0)
                                    rcx_222, zmm1_10 = sub_140a74f90(rbx_34)
                                
                                if (rax_162 != 0)
                                    uint64_t rdx_96 = var_660
                                    int16_t* var_5c0 = nullptr
                                    sub_140596860(&var_5c0, rdx_96, rbx_1, 0, 
                                        sbb.d(rcx_222, rcx_222, rbx_1 != 0) + 0xb)
                                    sub_140a20ba0(&var_5c0, u"Commandlet", 0xa)
                                    int16_t* rbx_35 = var_5c0
                                    int32_t var_5b8
                                    bool cond:9_1 = var_5b8 != 0
                                    var_5c0 = nullptr
                                    var_5b8.q = 0
                                    
                                    if (cond:9_1)
                                        r13_2 = rbx_35
                                    
                                    sub_140af98a0("Unknown", 0xdae, 
                                        You probably meant to call a commandlet. Please use the full "
                                    "name %s.", r13_2)
                                    
                                    if (rbx_35 != 0)
                                        sub_140a74f90(rbx_35)
                                    
                                    sub_140afbb40()
                            
                            goto label_1405a0af0
                        
                        int16_t* const rdx_63 = &data_142d40450
                        
                        if (rbx_1 != 0)
                            rdx_63 = var_660
                        
                        int64_t* rax_115 = sub_1405968d0(-ffffffffffffffff, rdx_63, 0)
                        int64_t* rcx_156 = data_143ddb410
                        
                        if (rax_115 != 0)
                            if (data_143cd5b28 != 0)
                                if (rcx_156 != 0 && (*(*rcx_156 + 0x58))() != 0)
                                    sub_140b19e60()
                                    sub_140b25ff0(&data_1439a8bd0, data_143ddb410)
                                
                                sub_140b72910()
                            else if (rcx_156 != 0 && data_143de542f == 0)
                                (*(*rcx_156 + 0x48))(rcx_156, 1)
                            
                            setvbuf(__acrt_iob_func(1), nullptr, 4, 0)
                            void* rcx_160 = rax_115[0x23]
                            
                            if (rcx_160 == 0)
                                (*(*rax_115 + 0x390))(rax_115)
                                rcx_160 = rax_115[0x23]
                            
                            if (data_143de5432 == 0)
                                data_143de5429 = (*(rcx_160 + 0x78) u>> 1).b & 1
                                data_143de542a = *(rcx_160 + 0x78) & 1
                                
                                if ((*(rcx_160 + 0x78) & 4) == 0)
                                    data_143de5426 = 1
                                    
                                    if ((*(rcx_160 + 0x78) & 8) == 0)
                                        sub_140b19e60()
                                        sub_140b25ff0(&data_1439a8bd0, data_143ddb410)
                                    
                                    int32_t rdx_66 = 0
                                    int64_t var_640 = 0
                                    int32_t rcx_163 = 0
                                    int32_t var_638_1 = 0
                                    int32_t var_634_1 = 0
                                    
                                    if (rax_8 != 0 && *rax_8 != 0)
                                        int64_t rbx_22 = -1
                                        
                                        do
                                            rbx_22 += 1
                                        while (rax_8[rbx_22] != 0)
                                        
                                        if (rbx_22.d + 1 s> 0)
                                            sub_1405947f0(&var_640, rbx_22.d + 1)
                                            rcx_163 = var_634_1
                                            rdx_66 = var_638_1
                                        
                                        int32_t rax_125 = rbx_22.d + 1 + rdx_66
                                        int32_t var_638_2 = rax_125
                                        
                                        if (rax_125 s> rcx_163)
                                            sub_140594770(&var_640)
                                        
                                        UnDecorator::getReferenceType(var_640, rax_8, 
                                            (rbx_22.d + 1) * 2)
                                    
                                    int64_t* rcx_168 = rax_115[0x23]
                                    
                                    if (rcx_168 == 0)
                                        (*(*rax_115 + 0x390))(rax_115)
                                        rcx_168 = rax_115[0x23]
                                    
                                    (*(*rcx_168 + 0x268))(rcx_168, &var_640)
                                    int64_t rcx_169 = var_640
                                    
                                    if (rcx_169 != 0)
                                        sub_140a74f90(rcx_169)
                                    
                                    if (data_143f5b298 == 0)
                                        void* rcx_170 = data_143ddb400
                                        int32_t var_698
                                        var_698.q = &data_143de5780
                                        uint64_t var_608 = 0
                                        int32_t var_600_1 = 0
                                        sub_140af5b90(rcx_170, /Script/Engine.Engine", GameEngine", 
                                            &var_608, var_698)
                                        int16_t* const rbx_24 = &data_142d40450
                                        
                                        if (var_600_1 != 0)
                                            rbx_24 = var_608
                                        
                                        void* rax_129 =
                                            sub_140d2f240(sub_1424a3bf0(), 0, rbx_24, 0, 0, 0)
                                        
                                        if (rax_129 == 0)
                                            int16_t* const r9_4 = &data_142d40450
                                            
                                            if (var_600_1 != 0)
                                                r9_4 = var_608
                                            
                                            sub_140af98a0("Unknown", 0xd17, 
                                                Failed to load Engine class '%s'.", r9_4)
                                            sub_140afbb40()
                                        
                                        int64_t var_588_1 = 0
                                        char var_688
                                        var_688.q = 0
                                        int64_t var_690_1
                                        var_690_1.b = 0
                                        int32_t var_698_1
                                        var_698_1.q = 0
                                        void* rax_131 = sub_140596910(sub_140cde0b0(), rax_129, 0, 
                                            0, var_698_1, var_690_1.b, var_688)
                                        data_143f5b298 = rax_131
                                        sub_1423e9f90(rax_131)
                                        int64_t* rcx_174 = data_143f5b298
                                        (*(*rcx_174 + 0x280))(rcx_174, r15)
                                        uint64_t rcx_175 = var_608
                                        
                                        if (rcx_175 != 0)
                                            sub_140a74f90(rcx_175)
                                    
                                    sub_140599090(&data_14399fca0)
                                    int64_t* rax_133 = sub_140b7c590()
                                    int64_t r8_28 = *rax_133
                                    (*(r8_28 + 0x18))(rax_133, 8, r8_28)
                                    sub_140b7c510()
                                    int64_t r8_29 = data_143e19eb0
                                    (*(r8_29 + 0x18))(&data_143e19eb0, 8, r8_29)
                                    sub_140af2ae0()
                                    sub_140aff170(&data_143de5920)
                                    uint64_t var_590_1 = 0
                                    void* rax_134 = sub_140cde0b0()
                                    
                                    if ((1 & sub_140b5b8a0(0, 0)) != 0)
                                        sub_140d19010(rax_134, 
                                            NewObject with empty name can't be used to create default "
                                        "subobjects (inside of UObject derived class constructor) as "
                                        "it produces incon")
                                    
                                    void* rax_136 =
                                        sub_140d2dfc0(rax_115, rax_134, var_590_1, 0, 0, 0, 0, 0, 0)
                                    int32_t rax_137 = *(rax_136 + 0xc)
                                    void* const rax_143
                                    
                                    if (rax_137 s>= data_143e1d9b4)
                                        rax_143 = nullptr
                                    else
                                        int16_t temp17_1
                                        int32_t temp18_1
                                        temp17_1:temp18_1 = sx.q(rax_137)
                                        uint32_t rdx_74 = zx.d(temp17_1)
                                        int32_t rax_139 = temp18_1 + rdx_74
                                        rax_143 = *(data_143e1d9a0 + (sx.q(rax_139 s>> 0x10) << 3))
                                            + sx.q(zx.d(rax_139.w) - rdx_74) * 0x18
                                    
                                    *(rax_143 + 8) |= 0x40000000
                                    int64_t performanceCount
                                    QueryPerformanceCounter(&performanceCount)
                                    sub_140ce2b60(rax_136, rax_8)
                                    sub_140b55a20()
                                    int64_t var_650 = 0
                                    int32_t rdx_77 = 0
                                    int32_t var_648_1 = 0
                                    int32_t rcx_185 = 0
                                    int32_t var_644_1 = 0
                                    
                                    if (rax_8 != 0 && *rax_8 != 0)
                                        int64_t rbx_27 = -1
                                        
                                        do
                                            rbx_27 += 1
                                        while (rax_8[rbx_27] != 0)
                                        
                                        if (rbx_27.d + 1 s> 0)
                                            sub_1405947f0(&var_650, rbx_27.d + 1)
                                            rcx_185 = var_644_1
                                            rdx_77 = var_648_1
                                        
                                        int32_t rax_144 = rdx_77 + rbx_27.d + 1
                                        int32_t var_648_2 = rax_144
                                        
                                        if (rax_144 s> rcx_185)
                                            sub_140594770(&var_650)
                                        
                                        UnDecorator::getReferenceType(var_650, rax_8, 
                                            (rbx_27.d + 1) * 2)
                                    
                                    int32_t rax_146 = (*(*rax_136 + 0x260))(rax_136, &var_650)
                                    int64_t rcx_190 = var_650
                                    r12_1 = rax_146
                                    
                                    if (rcx_190 != 0)
                                        sub_140a74f90(rcx_190)
                                    
                                    sub_140b55a20()
                                    int64_t var_508 = *(rax_136 + 0x18)
                                    int16_t* var_518
                                    sub_140b63b70(&var_508, &var_518)
                                    int16_t* const r8_34 = &data_142d40450
                                    int32_t var_510
                                    
                                    if (var_510 != 0)
                                        r8_34 = var_518
                                    
                                    int64_t var_4b8
                                    sub_140a2e390(&var_4b8, 
                                        Commandlet %s finished execution (result %d)", r8_34)
                                    sub_140afef00()
                                    int64_t rcx_193 = var_4b8
                                    
                                    if (rcx_193 != 0)
                                        sub_140a74f90(rcx_193)
                                    
                                    int16_t* rcx_194 = var_518
                                    
                                    if (rcx_194 != 0)
                                        sub_140a74f90(rcx_194)
                                    
                                    if ((*(rax_136 + 0x78) & 0x10) != 0)
                                        void* rdi_13 = data_143ddb418
                                        int64_t* i_5 = nullptr
                                        int32_t var_5d0_1 = 0
                                        int64_t* i_4 = nullptr
                                        int32_t var_5e0_1 = 0
                                        EnterCriticalSection(rdi_13 + 0x38)
                                        sub_140597970(&i_5, rdi_13 + 0x28)
                                        
                                        if (rdi_13 != -0x38)
                                            LeaveCriticalSection(rdi_13 + 0x38)
                                        
                                        void* rdi_14 = data_143ddb418
                                        EnterCriticalSection(rdi_14 + 0x38)
                                        sub_140597970(&i_4, rdi_14 + 0x18)
                                        
                                        if (rdi_14 != -0x38)
                                            LeaveCriticalSection(rdi_14 + 0x38)
                                        
                                        int64_t rbx_31 = sx.q(var_5d0_1)
                                        
                                        if (rbx_31.d != 0 || var_5e0_1 != 0)
                                            char rax_148
                                            int32_t r14_11
                                            
                                            if (data_143de542e == 0)
                                                sub_140af2b60()
                                                rax_148 =
                                                    sub_140b21a10(&data_143dbb3f0, DUMPALLWARNINGS")
                                                r14_11 = 0x32
                                            
                                            if (data_143de542e != 0 || rax_148 != 0)
                                                r14_11 = var_5e0_1 + rbx_31.d
                                            
                                            int64_t var_108 = 0
                                            int32_t var_100_1 = 0
                                            int32_t var_dc_1 = 0x80
                                            int64_t var_f8
                                            __builtin_memset(&var_f8, 0, 0x1c)
                                            int32_t var_d8_1 = 0xffffffff
                                            int32_t var_d4_1 = 0
                                            int64_t var_c8_1 = 0
                                            int32_t var_c0_1 = 0
                                            sub_14059a980(&var_108, r14_11)
                                            
                                            for (int64_t* i_2 = i_5; i_2 != &i_2[rbx_31 * 2]; 
                                                    i_2 = &i_2[2])
                                                var_667 = 0
                                                int32_t var_4a8
                                                sub_140598750(&var_108, &var_4a8)
                                                int64_t* var_4a0
                                                sub_140596d10(var_4a0, i_2)
                                                var_4a0[2].d = 0xffffffff
                                                int32_t rax_149 = var_4a0[1].d
                                                int16_t* rdx_87
                                                
                                                if (rax_149 == 0)
                                                    rdx_87 = &data_142d40450
                                                else
                                                    rdx_87 = *var_4a0
                                                
                                                int32_t rcx_204 = rax_149 - 1
                                                
                                                if (rax_149 == 0)
                                                    rcx_204 = 0
                                                
                                                sub_14059a6d0(&var_108, &var_5c8, 
                                                    sub_1405969c0(rcx_204, rdx_87), var_4a0, 
                                                    var_4a8, &var_667)
                                                
                                                if (var_667 == 0 && var_100_1 - var_d4_1 s> r14_11)
                                                    break
                                            
                                            sub_14059a980(&var_108, r14_11)
                                            
                                            for (int64_t* i_3 = i_4; 
                                                    i_3 != &i_3[sx.q(var_5e0_1) * 2]; i_3 = &i_3[2])
                                                var_668 = 0
                                                int32_t var_498
                                                sub_140598750(&var_108, &var_498)
                                                int64_t* var_490
                                                sub_140596d10(var_490, i_3)
                                                var_490[2].d = 0xffffffff
                                                int32_t rax_154 = var_490[1].d
                                                int16_t* rdx_92
                                                
                                                if (rax_154 == 0)
                                                    rdx_92 = &data_142d40450
                                                else
                                                    rdx_92 = *var_490
                                                
                                                int32_t rcx_209 = rax_154 - 1
                                                
                                                if (rax_154 == 0)
                                                    rcx_209 = 0
                                                
                                                sub_14059a6d0(&var_108, &var_610, 
                                                    sub_1405969c0(rcx_209, rdx_92), var_490, 
                                                    var_498, &var_668)
                                                
                                                if (var_668 == 0 && var_100_1 - var_d4_1 s> r14_11)
                                                    break
                                            
                                            int32_t var_c0_2 = 0
                                            
                                            if (var_c8_1 != 0)
                                                sub_140a74f90(var_c8_1)
                                            
                                            sub_14059ad90(&var_108, 0)
                                            int64_t var_e8
                                            
                                            if (var_e8 != 0)
                                                sub_140a74f90(var_e8)
                                            
                                            int64_t rcx_214 = var_108
                                            
                                            if (rcx_214 != 0)
                                                sub_140a74f90(rcx_214)
                                            
                                            rbx_31 = zx.q(var_5d0_1)
                                        
                                        if (r12_1 == 0 && rbx_31.d != 0)
                                            r12_1 = 1
                                        
                                        sub_140597000(&i_4)
                                        sub_140597000(&i_5)
                                    
                                    int64_t performanceCount_1
                                    QueryPerformanceCounter(&performanceCount_1)
                                else
                                    sub_140afef00()
                        else
                            if (rcx_156 != 0 && data_143de542f == 0)
                                (*(*rcx_156 + 0x48))(rcx_156, 1)
                            
                            if (rbx_1 != 0)
                                r13_2 = var_660
                            
                            int64_t var_4c8
                            sub_140a2e390(&var_4c8, u"Failed to find commandlet class %s", r13_2)
                            sub_140afef00()
                            int64_t rcx_158 = var_4c8
                            
                            if (rcx_158 != 0)
                                sub_140a74f90(rcx_158)
                        
                        rsi = r12_1
    else
        void var_3c0
        pdb_internal::Array<struct DBI1::SrcMap>::Array<struct DBI1::SrcMap>(&var_3c0)
        int64_t r15_1 = *(r15 + 0x88)
        int64_t var_450_1 = r15_1
        int64_t* rbx_3 = *(var_610 + 0x90)
        int64_t* var_448_1 = rbx_3
        
        if (rbx_3 != 0)
            rbx_3[1].d += 1
            
            if (rbx_3 != 0)
                rbx_3[1].d += 1
        
        void var_348
        pdb_internal::Array<struct DBI1::SrcMap>::Array<struct DBI1::SrcMap>(&var_348)
        int64_t* rax_9 = sub_141d88590()
        int64_t rdx_5 = *rax_9
        (*(rdx_5 + 0x70))(rax_9, rdx_5)
        pdb_internal::Array<struct FileLCRec* __ptr64>::~Array<struct FileLCRec* __ptr64>(&var_348)
        void var_3d8
        pdb_internal::Array<struct DBI1::SrcMap>::Array<struct DBI1::SrcMap>(&var_3d8)
        int64_t* rax_10 = sub_140b7c590()
        int64_t r8_3 = *rax_10
        char rax_11 = (*(r8_3 + 0x18))(rax_10, 3, r8_3)
        char rax_12
        
        if (rax_11 != 0)
            sub_140b7c510()
            int64_t r8_4 = data_143e19eb0
            rax_12 = (*(r8_4 + 0x18))(&data_143e19eb0, 3, r8_4)
        
        if (rax_11 != 0 && rax_12 != 0)
            pdb_internal::Array<struct FileLCRec* __ptr64>::~Array<struct FileLCRec* __ptr64>(
                &var_3d8)
            uint64_t rax_13
            rax_13, zmm6, zmm7, zmm8 = sub_1425cf590()
            
            if (rax_13 != 0)
                int64_t rdx_7 = *rax_13
                
                if ((*(rdx_7 + 0x98))(rax_13, rdx_7) == 0)
                    void*** rax_15 = sub_140a84c80(0, 0x20, 0)
                    void*** var_138_1 = rax_15
                    
                    if (rax_15 != 0)
                        *rax_15 = &data_142d41ad8
                        rax_15[1] = sub_14059e250
                        char rax_16 = var_667
                        rax_15[2].b = r14_1
                        *(rax_15 + 0x11) = r13_1
                        *(rax_15 + 0x12) = rax_16
                        *(rax_15 + 0x13) = var_668
                        rax_15[3] = sub_140a387b0()
                        *rax_15 = &data_142d41b30
                        sub_140599630(&data_143b4db28, 1)
                        void var_488
                        (*rax_15)[6](rax_15, &var_488)
                        int64_t r14_2 = sx.q(data_143b4db30)
                        int32_t rax_20 = (r14_2 + 1).d
                        bool cond:2_1 = rax_20 s<= data_143b4db34
                        data_143b4db30 = rax_20
                        
                        if (not(cond:2_1))
                            sub_1405a4f90(&data_143b4db28)
                        
                        void**** rax_23 = (r14_2 << 4) + data_143b4db28
                        *rax_23 = rax_15
                        rax_23[1].d = 2
            
            int64_t* rax_24 = sub_141d88590()
            int64_t rdx_10 = *rax_24
            void* rcx_22
            
            if ((*(rdx_10 + 0x30))(rax_24, rdx_10) == 0)
                void var_300
                pdb_internal::Array<struct DBI1::SrcMap>::Array<struct DBI1::SrcMap>(&var_300)
                
                if (data_143efaed8 != 0)
                    void var_318
                    pdb_internal::Array<struct DBI1::SrcMap>::Array<struct DBI1::SrcMap>(&var_318)
                    zmm6, zmm7, zmm8, zmm9 = sub_1418b4a80(data_143efaed8, r15_1)
                    
                    if (sub_1418b49e0(data_143efaed8, 1) != 0)
                        void*** rax_36
                        double zmm0_2[0x2]
                        rax_36, zmm0_2 = sub_140a84c80(0, 0x20, 0)
                        void*** var_128_1 = rax_36
                        
                        if (rax_36 != 0)
                            *rax_36 = &data_142d42d38
                            rax_36[2] = sub_140a387b0()
                            *rax_36 = &data_142d42d90
                            zmm0_2 = sub_140599630(&data_1439c7170, 1)
                            void var_480
                            (*rax_36)[6](rax_36, &var_480)
                            int64_t r14_4 = sx.q(data_1439c7178)
                            int32_t rax_39 = (r14_4 + 1).d
                            bool cond:3_1 = rax_39 s<= data_1439c717c
                            data_1439c7178 = rax_39
                            
                            if (not(cond:3_1))
                                zmm0_2 = sub_1405a4f90(&data_1439c7170)
                            
                            void**** rax_42 = (r14_4 << 4) + data_1439c7170
                            *rax_42 = rax_36
                            rax_42[1].d = 2
                        
                        zmm6, zmm7, zmm8, zmm9 = sub_1418b70a0(data_143efaed8, 1, zmm0_2)
                    
                    pdb_internal::Array<struct FileLCRec* __ptr64>::~Array<struct FileLCRec* __ptr64>(
                        &var_318)
                
                rcx_22 = &var_300
            else
                void var_330
                pdb_internal::Array<struct DBI1::SrcMap>::Array<struct DBI1::SrcMap>(&var_330)
                void* rcx_15 = data_143efaed8
                int128_t var_4e8
                int64_t* rdi_3
                int32_t r14_3
                
                if (rcx_15 == 0)
                    rdi_3 = &var_4e8
                    var_4e8 = zx.o(0)
                    r14_3 = 2
                else
                    r14_3 = 1
                    void var_440
                    rdi_3 = sub_1418b3cb0(rcx_15, &var_440)
                
                int64_t* rax_27 = sub_141d88590()
                int64_t var_4f8 = *rdi_3
                int64_t var_4f0_1 = rdi_3[1]
                rdi_3[1] = 0
                *rdi_3 = 0
                int64_t r9_1 = *rax_27
                (*(r9_1 + 8))(rax_27, r15_1, &var_4f8, r9_1)
                
                if ((r14_3.b & 2) != 0)
                    int64_t* rdi_4 = var_4e8:8.q
                    r14_3 &= 0xfffffffd
                    
                    if (rdi_4 != 0)
                        rdi_4[1].d -= 1
                        
                        if (rdi_4[1].d == 1)
                            (**rdi_4)(rdi_4)
                            int32_t temp11_1 = *(rdi_4 + 0xc)
                            *(rdi_4 + 0xc) -= 1
                            
                            if (temp11_1 == 1)
                                (*(*rdi_4 + 8))(rdi_4, 1)
                
                int64_t* var_438
                
                if ((1 & r14_3.b) != 0 && var_438 != 0)
                    var_438[1].d -= 1
                    
                    if (var_438[1].d == 1)
                        (**var_438)(var_438)
                        int32_t temp12_1 = *(var_438 + 0xc)
                        *(var_438 + 0xc) -= 1
                        
                        if (temp12_1 == 1)
                            (*(*var_438 + 8))(var_438, 1)
                
                int64_t* rax_34 = sub_141d88590()
                int64_t rdx_14 = *rax_34
                (*(rdx_14 + 0x38))(rax_34, rdx_14)
                rcx_22 = &var_330
            
            pdb_internal::Array<struct FileLCRec* __ptr64>::~Array<struct FileLCRec* __ptr64>(
                rcx_22)
            
            if (rbx_3 != 0)
                rbx_3[1].d -= 1
                
                if (rbx_3[1].d == 1)
                    (**rbx_3)(rbx_3)
                    int32_t temp7_1 = *(rbx_3 + 0xc)
                    *(rbx_3 + 0xc) -= 1
                    
                    if (temp7_1 == 1)
                        (*(*rbx_3 + 8))(rbx_3, 1)
                
                rbx_3[1].d -= 1
                
                if (rbx_3[1].d == 1)
                    (**rbx_3)(rbx_3)
                    int32_t temp9_1 = *(rbx_3 + 0xc)
                    *(rbx_3 + 0xc) -= 1
                    
                    if (temp9_1 == 1)
                        (*(*rbx_3 + 8))(rbx_3, 1)
            
            pdb_internal::Array<struct FileLCRec* __ptr64>::~Array<struct FileLCRec* __ptr64>(
                &var_3c0)
            r15 = var_610
            goto label_14059f651
        
        pdb_internal::Array<struct FileLCRec* __ptr64>::~Array<struct FileLCRec* __ptr64>(&var_3d8)
        
        if (rbx_3 != 0)
            rbx_3[1].d -= 1
            
            if (rbx_3[1].d == 1)
                (**rbx_3)(rbx_3)
                int32_t temp3_1 = *(rbx_3 + 0xc)
                *(rbx_3 + 0xc) -= 1
                
                if (temp3_1 == 1)
                    (*(*rbx_3 + 8))(rbx_3, 1)
            
            rbx_3[1].d -= 1
            
            if (rbx_3[1].d == 1)
                (**rbx_3)(rbx_3)
                int32_t temp4_1 = *(rbx_3 + 0xc)
                *(rbx_3 + 0xc) -= 1
                
                if (temp4_1 == 1)
                    (*(*rbx_3 + 8))(rbx_3, 1)
        
        pdb_internal::Array<struct FileLCRec* __ptr64>::~Array<struct FileLCRec* __ptr64>(&var_3c0)
        rsi = 1
    uint64_t rcx_237 = var_660
    
    if (rcx_237 != 0)
        sub_140a74f90(rcx_237)

pdb_internal::Array<struct FileLCRec* __ptr64>::~Array<struct FileLCRec* __ptr64>(&var_360)
__security_check_cookie(rax_1 ^ &var_6b8)
return zx.q(rsi)
