// 函数: sub_140fb9f10
// 地址: 0x140fb9f10
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

__chkstk(0x1c28)
void var_1c38
int64_t rax_1 = __security_cookie ^ &var_1c38
int32_t var_19a8 = 0
uint32_t rax_5

if (arg3 == 3)
    rax_5 = zx.d(*sub_140eff7d0(arg1 + 0x478))

int64_t* result

if (arg3 != 3 || rax_5 != 0)
    int32_t var_1bb0 = 6
    int32_t var_1bf0_1
    
    if (*(arg1 + 0x420) == 0)
        var_1bf0_1 = 0x7f7fffff
    else
        var_1bf0_1 = 0x3f800000
    
    void var_17f8
    void* var_19a0_1 = &var_17f8
    int64_t* rax_18 = sub_140fb2590()
    void var_1488
    (*(*rax_18 + 0x80))(rax_18, &var_1488, *sub_140b58170(var_19a0_1, "ColorPicker.Font", 1), 0)
    int64_t var_1b00 = 0
    int64_t var_1af8
    int64_t* var_1970 = &var_1af8
    *var_1970 = 0
    
    if (arg3 != 4)
        uint64_t (* var_1900)() = sub_140fb4a50
        int32_t var_18f8_1 = 0
        void var_1548
        void* var_1b78_1 = &var_1548
        char var_1c08_1
        
        var_1c08_1 = arg3 != 3 ? 0 : 1
        
        char var_1c06 = var_1c08_1
        void var_17f0
        sub_140f93c70(&var_17f0, &var_1c06)
        int32_t* (* var_1960)(void* arg1, int32_t* arg2, int32_t arg3) = sub_140fb34a0
        int32_t var_1958_1 = 0
        int32_t* (* var_1950)(void* arg1, int32_t* arg2, int32_t arg3) = sub_140fb35f0
        int32_t var_1948_1 = 0
        void var_18a8
        __builtin_memcpy(&var_18a8, &var_1900, 0x10)
        void var_18b8
        __builtin_memcpy(&var_18b8, &var_1960, 0x10)
        void var_18c8
        __builtin_memcpy(&var_18c8, &var_1950, 0x10)
        void var_18e0
        int64_t* rax_60 = sub_140f2cda0(arg1 + 8, &var_18e0)
        *var_1b78_1 = *rax_60
        *(var_1b78_1 + 8) = rax_60[1]
        
        if (*(var_1b78_1 + 8) != 0)
            void* rax_67 = *(var_1b78_1 + 8)
            *(rax_67 + 8) += 1
        
        sub_140597060(&var_18e0)
        void var_df8
        void* rax_75 = sub_140f980d0(
            sub_140fb6120(
                sub_140f95bd0(sub_140f97c40(sub_140f998f0(&var_df8), arg1, &var_18c8, arg3), arg1, 
                    &var_18b8, arg3), 
                &var_17f0), 
            var_1b78_1, &var_18a8)
        void var_1c05
        void* var_16e8
        void** rax_76
        int128_t zmm1_2
        rax_76, zmm1_2 = sub_140f96440(&var_16e8, "SSimpleGradient", 
            "D:/Build/++UE4/Sync/Engine/Source/Runtime/AppFramework/Private/Widgets/Colors/SColorPicker."
        "cpp", 
            0x3a2, &var_1c05)
        void* var_1898
        void** rax_77 = sub_140f9e100(rax_76, &var_1898, rax_75, zmm1_2)
        void* var_1980 = *rax_77
        void var_1978
        void* var_1b70_1 = &var_1978
        *var_1b70_1 = rax_77[1]
        
        if (*var_1b70_1 != 0)
            void* rax_83 = *var_1b70_1
            *(rax_83 + 8) += 1
        
        void** var_1bc0_1 = &var_1980
        int64_t* var_1b68_1 = &var_1b00
        
        if (var_1b68_1 != var_1bc0_1)
            *var_1b68_1 = *var_1bc0_1
            *var_1bc0_1 = nullptr
            sub_14066a200(&var_1b68_1[1], &var_1bc0_1[1])
        
        sub_140669d70(&var_1980)
        sub_140f9a690(&var_1898)
        sub_140f9a690(&var_16e8)
        sub_140f9ad20(&var_df8)
        sub_14068f990(&var_17f0)
    else
        int64_t var_1bd8
        RefPtr<class RefCount<class pdb_internal::Buffer> >::RefPtr<class RefCount<class pdb_internal::Buffer> >(
            &var_1bd8)
        int32_t var_1bd0_1 = 0
        int32_t var_1bcc_1 = 0
        
        for (int32_t i = 0; i s< 7; i += 1)
            float var_1a20 = float.s(mods.dp.d(sx.q(i), 6)) * 60f
            int32_t var_1a1c_1 = 0x3f800000
            int32_t var_1a18_1 = 0x3f800000
            int32_t var_1a14_1 = 0x3f800000
            void var_1558
            int32_t* rax_27 = sub_140ad9100(&var_1a20, &var_1558)
            int32_t var_1be8_1 = var_1bd0_1
            int32_t rax_30 = var_1bd0_1 + 1
            var_1bd0_1 = rax_30
            
            if (rax_30 s> var_1bcc_1)
                sub_140610660(&var_1bd8)
            
            __builtin_memcpy(sub_140587030(0x10, var_1bd8 + sx.q(var_1be8_1) * 0x10), rax_27, 0x10)
        
        void var_1580
        sub_140f93ce0(&var_1580, &var_1bd8)
        void var_ff0
        void* rax_40 = sub_140fb4460(sub_140f99030(&var_ff0), &var_1580)
        void var_1c07
        void* var_16d0
        void** rax_41
        int128_t zmm1_1
        rax_41, zmm1_1 = sub_140f96200(&var_16d0, "SComplexGradient", 
            "D:/Build/++UE4/Sync/Engine/Source/Runtime/AppFramework/Private/Widgets/Colors/SColorPicker."
        "cpp", 
            0x39d, &var_1c07)
        void* var_18f0
        void** rax_42 = sub_140f9d580(rax_41, &var_18f0, rax_40, zmm1_1)
        void* var_1990 = *rax_42
        void var_1988
        void* var_1b90_1 = &var_1988
        *var_1b90_1 = rax_42[1]
        
        if (*var_1b90_1 != 0)
            void* rax_48 = *var_1b90_1
            *(rax_48 + 8) += 1
        
        void** var_1bc8_1 = &var_1990
        int64_t* var_1b88_1 = &var_1b00
        
        if (var_1b88_1 != var_1bc8_1)
            *var_1b88_1 = *var_1bc8_1
            *var_1bc8_1 = nullptr
            sub_14066a200(&var_1b88_1[1], &var_1bc8_1[1])
        
        sub_140669d70(&var_1990)
        sub_140f9a690(&var_18f0)
        sub_140f9a690(&var_16d0)
        sub_140f9aa90(&var_ff0)
        sub_140f9a5e0(&var_1580)
        sub_1406b6170(&var_1bd8)
    
    void var_1af0
    sub_140a96170(&var_1af0)
    void var_1ad8
    sub_140a96170(&var_1ad8)
    
    if (arg3 u> 6)
        *arg2 = data_143e244b0
        arg2[1] = data_143e244b8
        
        if (arg2[1] != 0)
            void* rax_116 = arg2[1]
            *(rax_116 + 8) += 1
        
        sub_1405970a0(&var_1ad8)
        sub_1405970a0(&var_1af0)
        sub_140669d70(&var_1b00)
        sub_140691aa0(&var_1488)
        result = arg2
    else
        int32_t var_1bfc
        
        switch (arg3)
            case 0
                var_1bfc = var_1bf0_1
                void var_16a0
                sub_140f9bef0(&var_1af0, _vfprintf_p_l(&var_16a0, U"RGBXYZF10|", u"ColorPicker"))
                sub_1405970a0(&var_16a0)
                void var_1688
                sub_140f9bef0(&var_1ad8, _vfprintf_p_l(&var_1688, &data_142daf3e8, u"ColorPicker"))
                sub_1405970a0(&var_1688)
            case 1
                var_1bfc = var_1bf0_1
                void var_1670
                sub_140f9bef0(&var_1af0, _vfprintf_p_l(&var_1670, &(*RGBXYZF10|")[1], ColorPicker"))
                sub_1405970a0(&var_1670)
                void var_1658
                sub_140f9bef0(&var_1ad8, _vfprintf_p_l(&var_1658, u"Green", u"ColorPicker"))
                sub_1405970a0(&var_1658)
            case 2
                var_1bfc = var_1bf0_1
                void var_1640
                sub_140f9bef0(&var_1af0, _vfprintf_p_l(&var_1640, &(*RGBXYZF10|")[2], ColorPicker"))
                sub_1405970a0(&var_1640)
                void var_1628
                sub_140f9bef0(&var_1ad8, _vfprintf_p_l(&var_1628, u"Blue", u"ColorPicker"))
                sub_1405970a0(&var_1628)
            case 3
                var_1bfc = var_1bf0_1
                void var_1610
                sub_140f9bef0(&var_1af0, _vfprintf_p_l(&var_1610, &data_142d8adc0, u"ColorPicker"))
                sub_1405970a0(&var_1610)
                void var_15f8
                sub_140f9bef0(&var_1ad8, _vfprintf_p_l(&var_15f8, u"Alpha", u"ColorPicker"))
                sub_1405970a0(&var_15f8)
            case 4
                var_1bfc = 0x43b38000
                void var_16b8
                sub_140f9bef0(&var_1af0, 
                    _vfprintf_p_l(&var_16b8, &(*42693578WOCbEVzoHuIMJxKLNP8Q2SgTUqaclefhjkmrvy469")[
                        0x10], 
                    ColorPicker"))
                sub_1405970a0(&var_16b8)
                void var_15e0
                sub_140f9bef0(&var_1ad8, _vfprintf_p_l(&var_15e0, &data_142ef0158, u"ColorPicker"))
                sub_1405970a0(&var_15e0)
            case 5
                var_1bfc = 0x3f800000
                void var_15c8
                sub_140f9bef0(&var_1af0, 
                    _vfprintf_p_l(&var_15c8, &(*42693578WOCbEVzoHuIMJxKLNP8Q2SgTUqaclefhjkmrvy469")[
                        0x1d], 
                    ColorPicker"))
                sub_1405970a0(&var_15c8)
                void var_15b0
                sub_140f9bef0(&var_1ad8, _vfprintf_p_l(&var_15b0, u"Saturation", u"ColorPicker"))
                sub_1405970a0(&var_15b0)
            case 6
                var_1bfc = var_1bf0_1
                void var_1598
                sub_140f9bef0(&var_1af0, 
                    _vfprintf_p_l(&var_1598, &(*42693578WOCbEVzoHuIMJxKLNP8Q2SgTUqaclefhjkmrvy469")[
                        0xd], 
                    ColorPicker"))
                sub_1405970a0(&var_1598)
                void var_1778
                sub_140f9bef0(&var_1ad8, _vfprintf_p_l(&var_1778, u"Value", u"ColorPicker"))
                sub_1405970a0(&var_1778)
        
        void var_1538
        void** var_1b18_1 = &var_1538
        void var_1528
        void* var_1b38_1 = &var_1528
        void var_1518
        void* var_1b50_1 = &var_1518
        int32_t var_1790[0x6]
        sub_140f93bd0(&var_1790, &var_1bb0)
        void var_1508
        void** var_1b30_1 = &var_1508
        void (* var_1940)(void* arg1, uint32_t arg2[0x4] @ zmm1, int32_t arg3) = sub_140fb4d50
        int32_t var_1938_1 = 0
        void (* var_1930)(void* arg1) = sub_140fb53b0
        int32_t var_1928_1 = 0
        void (* var_1920)(void* arg1) = sub_140fb5310
        int32_t var_1918_1 = 0
        int512_t (* var_1910)(void* arg1, int32_t arg2) = sub_140fb4cd0
        int32_t var_1908_1 = 0
        void var_1438
        sub_1406876a0(&var_1438, &var_1488)
        int32_t var_1be0_1
        
        var_1be0_1 = arg3 != 4 ? 0x3a83126f : 0x3f800000
        
        int32_t var_1bac = var_1be0_1
        void var_17a8
        sub_140f93bf0(&var_17a8, &var_1bac)
        int32_t var_1bdc_1
        
        var_1bdc_1 = arg3 != 4 ? 0x3f800000 : 0x43b38000
        
        int32_t var_1ba8 = var_1bdc_1
        void var_1370
        sub_140f93c10(&var_1370, &var_1ba8)
        int32_t var_1ba4 = (zx.o(0)).d
        void var_1390
        sub_140f93c10(&var_1390, &var_1ba4)
        void var_13b0
        sub_140f93c10(&var_13b0, &var_1bfc)
        int32_t var_1ba0 = (zx.o(0)).d
        void var_13d0
        sub_140f93c10(&var_13d0, &var_1ba0)
        void var_14b8
        sub_140d42100(&var_14b8, &var_1ad8)
        void var_17c0
        sub_140f93bf0(&var_17c0, &data_142ef01e0)
        int32_t var_1b9c = 0x3f800000
        void var_17d8
        sub_140f93bf0(&var_17d8, &var_1b9c)
        void var_14f8
        void* var_1b10_1 = &var_14f8
        void var_14e8
        sub_140d42100(&var_14e8, &var_1af0)
        void var_1858
        __builtin_memcpy(&var_1858, &var_1940, 0x10)
        void var_1868
        __builtin_memcpy(&var_1868, &var_1930, 0x10)
        void var_1878
        __builtin_memcpy(&var_1878, &var_1920, 0x10)
        void var_1888
        __builtin_memcpy(&var_1888, &var_1910, 0x10)
        *var_1b50_1 = var_1b00
        *(var_1b50_1 + 8) = var_1af8
        
        if (*(var_1b50_1 + 8) != 0)
            void* rax_126 = *(var_1b50_1 + 8)
            *(rax_126 + 8) += 1
        
        void var_bc0
        int64_t* rax_130
        int128_t zmm1_3
        rax_130, zmm1_3 = sub_14068c940(&var_bc0)
        void* rax_132 = sub_1406937a0(sub_140fb6160(rax_130, &var_1790), var_1b50_1, zmm1_3)
        void var_1c04
        void var_1700
        int64_t* rax_133
        int128_t zmm1_4
        rax_133, zmm1_4 = sub_1406883e0(&var_1700, "SBox", 
            "D:/Build/++UE4/Sync/Engine/Source/Runtime/AppFramework/Private/Widgets/Colors/SColorPicker."
        "cpp", 
            0x406, &var_1c04)
        void* var_1808
        void** rax_134 = sub_140695d20(rax_133, &var_1808, rax_132, zmm1_4)
        *var_1b38_1 = *rax_134
        *(var_1b38_1 + 8) = rax_134[1]
        
        if (*(var_1b38_1 + 8) != 0)
            void* rax_141 = *(var_1b38_1 + 8)
            *(rax_141 + 8) += 1
        
        void var_4d8
        void* rax_152 = sub_140f98200(
            sub_140fab610(
                sub_140faa410(
                    sub_140fbba20(
                        sub_140fbc090(
                            sub_140fbba70(sub_140fbc0e0(sub_140f1e510(&var_4d8), &var_13d0), 
                                &var_13b0), 
                            &var_1390), 
                        &var_1370), 
                    &var_17a8), 
                &var_1438), 
            arg1, &var_1888, arg3)
        void* rax_155 = sub_140f97b20(
            sub_140f973d0(sub_140f97220(rax_152, arg1, &var_1878), arg1, &var_1868), arg1, 
            &var_1858, arg3)
        void var_1c03
        void var_1718
        int64_t* rax_156
        int128_t zmm1_5
        rax_156, zmm1_5 = sub_140f1c890(&var_1718, "SSpinBox<float>", 
            "D:/Build/++UE4/Sync/Engine/Source/Runtime/AppFramework/Private/Widgets/Colors/SColorPicker."
        "cpp", 
            0x3f6, &var_1c03)
        void* var_1818
        void** rax_157 = sub_140f26a50(rax_156, &var_1818, rax_155, zmm1_5)
        *var_1b30_1 = *rax_157
        var_1b30_1[1] = rax_157[1]
        
        if (var_1b30_1[1] != 0)
            void* rax_164 = var_1b30_1[1]
            *(rax_164 + 8) += 1
        
        void* rax_170 = sub_140693860(sub_140698b50(sub_1406a4fe0()), var_1b38_1)
        void* rax_173 = sub_140693860(sub_140698b50(sub_1406a4fe0()), var_1b30_1)
        void var_11a0
        void* rax_177 = sub_1406938c0(
            sub_1406938c0(sub_140fc34f0(sub_14068d420(&var_11a0), &var_14b8), rax_173), rax_170)
        void var_1c02
        void var_1730
        int64_t* rax_178
        int128_t zmm1_6
        rax_178, zmm1_6 = sub_140688860(&var_1730, "SVerticalBox", 
            "D:/Build/++UE4/Sync/Engine/Source/Runtime/AppFramework/Private/Widgets/Colors/SColorPicker."
        "cpp", 
            0x3f0, &var_1c02)
        void* var_1828
        void** rax_179 = sub_140696920(rax_178, &var_1828, rax_177, zmm1_6)
        *var_1b18_1 = *rax_179
        var_1b18_1[1] = rax_179[1]
        
        if (var_1b18_1[1] != 0)
            void* rax_186 = var_1b18_1[1]
            *(rax_186 + 8) += 1
        
        void var_920
        void* rax_191 = sub_1406a5080(sub_14068d9d0(&var_920), &var_14e8)
        void var_1c01
        void var_1748
        int64_t* rax_192
        int128_t zmm1_7
        rax_192, zmm1_7 = sub_1406887a0(&var_1748, "STextBlock", 
            "D:/Build/++UE4/Sync/Engine/Source/Runtime/AppFramework/Private/Widgets/Colors/SColorPicker."
        "cpp", 
            0x3e8, &var_1c01)
        void* var_1838
        void** rax_193 = sub_140697520(rax_192, &var_1838, rax_191, zmm1_7)
        *var_1b10_1 = *rax_193
        *(var_1b10_1 + 8) = rax_193[1]
        
        if (*(var_1b10_1 + 8) != 0)
            void* rax_200 = *(var_1b10_1 + 8)
            *(rax_200 + 8) += 1
        
        void* rax_207 = sub_140693860(
            sub_140fbbac0(sub_140eb9be0(sub_1406a4fe0(), &var_17d8), &var_17c0), var_1b18_1)
        void* var_1c18_6
        var_1c18_6.d = 0
        void* rax_212 = sub_140693860(
            sub_140fc3980(
                sub_14069cf40(sub_140698b50(sub_1406a4fe0()), zx.o(0), (zx.o(0)).d, 0x40800000, 
                    var_1c18_6.d), 
                2), 
            var_1b10_1)
        void var_1350
        void* rax_215 = sub_1406938c0(sub_1406938c0(sub_14068d420(&var_1350), rax_212), rax_207)
        void var_1c00
        void var_1760
        void** rax_216
        int128_t zmm1_9
        rax_216, zmm1_9 = sub_140688620(&var_1760, "SHorizontalBox", 
            "D:/Build/++UE4/Sync/Engine/Source/Runtime/AppFramework/Private/Widgets/Colors/SColorPicker."
        "cpp", 
            0x3e1, &var_1c00)
        void* var_1848
        void** rax_217 = sub_140696920(rax_216, &var_1848, rax_215, zmm1_9)
        *arg2 = *rax_217
        arg2[1] = rax_217[1]
        
        if (arg2[1] != 0)
            void* rax_224 = arg2[1]
            *(rax_224 + 8) += 1
        
        sub_140669d70(&var_1848)
        sub_140669d70(&var_1760)
        void var_11b0
        pdb_internal::Array<struct FileLCRec* __ptr64>::~Array<struct FileLCRec* __ptr64>(&var_11b0)
        sub_140660250(&var_1350)
        sub_140669d70(&var_1838)
        sub_140669d70(&var_1748)
        sub_1406913d0(&var_920)
        sub_140669d70(&var_1828)
        sub_140669d70(&var_1730)
        sub_140f9b200(&var_11a0)
        sub_140f9a690(&var_1818)
        sub_140f9a690(&var_1718)
        sub_140f241b0(&var_4d8)
        sub_140669d70(&var_1808)
        sub_140669d70(&var_1700)
        sub_140690290(&var_bc0)
        sub_1406601b0(&var_14e8)
        sub_14068f990(&var_17d8)
        sub_14068f990(&var_17c0)
        sub_1406601b0(&var_14b8)
        sub_140f9a570(&var_13d0)
        sub_140f9a570(&var_13b0)
        sub_140f9a570(&var_1390)
        sub_140f9a570(&var_1370)
        sub_14068f990(&var_17a8)
        sub_14068fb40(&var_1438)
        sub_14068f990(&var_1790)
        sub_1405970a0(&var_1ad8)
        sub_1405970a0(&var_1af0)
        sub_140669d70(&var_1b00)
        sub_140691aa0(&var_1488)
        result = arg2
else
    *arg2 = data_143e244b0
    arg2[1] = data_143e244b8
    
    if (arg2[1] != 0)
        void* rax_12 = arg2[1]
        *(rax_12 + 8) += 1
    
    result = arg2

__security_check_cookie(rax_1 ^ &var_1c38)
return result
