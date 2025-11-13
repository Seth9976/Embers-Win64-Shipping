// 函数: sub_140fabb20
// 地址: 0x140fabb20
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

__chkstk(0x8318)
void var_8328
int64_t rax_1 = __security_cookie ^ &var_8328
int32_t var_7900 = 0
int32_t var_78fc = 0
void var_75f0
void* var_7d08 = &var_75f0
int64_t* rax_2 = sub_140fb2590()
void var_6428
(*(*rax_2 + 0x80))(rax_2, &var_6428, *sub_140b58170(var_7d08, "ColorPicker.Font", 1), 0)
void* var_82c8 = nullptr
void* var_82c0
sub_140f987f0(&var_82c0, &data_143e2b778)
char var_82f8

var_82f8 = var_82c0 == 0 ? 0 : 1

if (zx.d(var_82f8) != 0)
    var_82c8 = data_143e2b770

char var_82f7

var_82f7 = var_82c8 == 0 ? 0 : 1

if (zx.d(var_82f7) == 0)
    void var_6228
    int64_t* rax_8 = sub_140f98db0(&var_6228)
    void var_82f3
    void* var_6e58
    void** rax_9
    int128_t zmm1_1
    rax_9, zmm1_1 = sub_140f96080(&var_6e58, "SColorThemesViewer", 
        "D:/Build/++UE4/Sync/Engine/Source/Runtime/AppFramework/Private/Widgets/Colors/SColorPicker.cpp", 
        0xfa, &var_82f3)
    void* var_75a8
    void** rax_10 = sub_140f9cd70(rax_9, &var_75a8, rax_8, zmm1_1)
    void* var_78f8 = *rax_10
    void var_78f0
    void* var_8228_1 = &var_78f0
    *var_8228_1 = rax_10[1]
    
    if (*var_8228_1 != 0)
        void* rax_16 = *var_8228_1
        *(rax_16 + 8) += 1
    
    void** var_82b0_1 = &var_78f8
    int64_t* var_8220_1 = &var_82c8
    
    if (var_8220_1 != var_82b0_1)
        *var_8220_1 = *var_82b0_1
        *var_82b0_1 = nullptr
        sub_14066a200(&var_8220_1[1], &var_82b0_1[1])
    
    sub_140597060(&var_78f8)
    sub_140f9a690(&var_75a8)
    sub_140f9a690(&var_6e58)
    void var_6088
    sub_14068f990(&var_6088)
    sub_140ddea30(&var_6228)
    data_143e2b770 = var_82c8
    sub_140ea4170(&data_143e2b778, var_82c0)

void (* var_7758)(void* arg1) = sub_140fb6010
int32_t var_7750 = 0
void var_7598
__builtin_memcpy(&var_7598, &var_7758, 0x10)
void var_75e8
sub_140f93d50(sub_140fbd770(var_82c8), &var_75e8, arg1, &var_7598)
sub_140fc3220(var_82c8, arg1 + 0x478)
sub_140fbbf00(var_82c8)
void var_6e28
void var_66c0
sub_140d42100(&var_66c0, _vfprintf_p_l(&var_6e28, u"Open Color Theme Manager", u"ColorPicker"))
int32_t var_82a0 = 3
void var_7080
sub_140f93bf0(&var_7080, &var_82a0)
int32_t var_829c = 0x40400000
void var_69c8
sub_140f93c30(&var_69c8, &var_829c)
void var_3730
int128_t* rax_35 = sub_140fc34f0(
    sub_140fbbaf0(sub_140fa9f60(sub_140e936b0(&var_3730), &var_69c8), &var_7080), &var_66c0)
void var_82f2
void* var_6e40
void** rax_36
int128_t zmm1_2
rax_36, zmm1_2 = sub_140e91330(&var_6e40, "SComboButton", 
    "D:/Build/++UE4/Sync/Engine/Source/Runtime/AppFramework/Private/Widgets/Colors/SColorPicker.cpp", 
    0x103, &var_82f2)
int64_t* var_7588
int64_t** rax_37 = sub_140e9b4e0(rax_36, &var_7588, rax_35, zmm1_2)
int64_t* var_78e8 = *rax_37
void var_78e0
void* var_8218 = &var_78e0
*var_8218 = rax_37[1]

if (*var_8218 != 0)
    void* rax_43 = *var_8218
    *(rax_43 + 8) += 1

int64_t** var_82a8 = &var_78e8

if (arg1 + 0x4c8 != var_82a8)
    *(arg1 + 0x4c8) = *var_82a8
    *var_82a8 = nullptr
    sub_14066a200(arg1 + 0x4d0, &var_82a8[1])

sub_140597060(&var_78e8)
sub_140597060(&var_7588)
sub_140597060(&var_6e40)
sub_140e979e0(&var_3730)
sub_14068fa50(&var_69c8)
sub_140f9a5d0(&var_7080)
sub_1406601b0(&var_66c0)
sub_1405970a0(&var_6e28)
void var_6950
void* var_81f8 = &var_6950
int64_t var_75e0
int64_t var_81f0 = var_75e0
int64_t* rax_56 = *(arg1 + 0x4c8)
void* var_7d28 = var_82c8
void* var_7d20
void** var_8208 = &var_7d20
*var_8208 = var_82c0

if (*var_8208 != 0)
    void* rax_61 = *var_8208
    *(rax_61 + 8) += 1

*var_81f8 = var_7d28
void** var_8200 = var_81f8 + 8
*var_8200 = var_7d20

if (*var_8200 != 0)
    void* rax_71 = *var_8200
    *(rax_71 + 8) += 1

(*(*rax_56 + 0x240))(rax_56, var_81f8)
sub_140f9a690(&var_7d28)
void var_6940
void* var_81e0 = &var_6940
char var_82f1 = 1
void var_7098
sub_140f93c70(&var_7098, &var_82f1)
void var_6070
void* rax_78 = sub_140fb6280(sub_140f98ef0(&var_6070), &var_7098)
void var_82f0
void* var_6df8
void** rax_79
int128_t zmm1_3
rax_79, zmm1_3 = sub_140f96100(&var_6df8, "SColorTrash", 
    "D:/Build/++UE4/Sync/Engine/Source/Runtime/AppFramework/Private/Widgets/Colors/SColorPicker.cpp", 
    0x10e, &var_82f0)
void* var_7568
void** rax_80 = sub_140f9d020(rax_79, &var_7568, rax_78, zmm1_3)
*var_81e0 = *rax_80
*(var_81e0 + 8) = rax_80[1]

if (*(var_81e0 + 8) != 0)
    void* rax_87 = *(var_81e0 + 8)
    *(rax_87 + 8) += 1

void* rax_93 = sub_140693860(sub_140698b50(sub_1406a4fe0()), var_81e0)
void var_63d8
void* rax_95 = sub_1406938c0(sub_14068d420(&var_63d8), rax_93)
void var_82ef
void var_6e10
int64_t* rax_96
int128_t zmm1_4
rax_96, zmm1_4 = sub_140688620(&var_6e10, "SHorizontalBox", 
    "D:/Build/++UE4/Sync/Engine/Source/Runtime/AppFramework/Private/Widgets/Colors/SColorPicker.cpp", 
    0x10a, &var_82ef)
void* var_7578
void** rax_97 = sub_140696920(rax_96, &var_7578, rax_95, zmm1_4)
void* var_78d8 = *rax_97
void var_78d0
void* var_81d8 = &var_78d0
*var_81d8 = rax_97[1]

if (*var_81d8 != 0)
    void* rax_103 = *var_81d8
    *(rax_103 + 8) += 1

void** var_82b8 = &var_78d8

if (arg1 + 0x4d8 != var_82b8)
    *(arg1 + 0x4d8) = *var_82b8
    *var_82b8 = nullptr
    sub_14066a200(arg1 + 0x4e0, &var_82b8[1])

sub_140669d70(&var_78d8)
sub_140669d70(&var_7578)
sub_140669d70(&var_6e10)
void var_6238
pdb_internal::Array<struct FileLCRec* __ptr64>::~Array<struct FileLCRec* __ptr64>(&var_6238)
sub_140660250(&var_63d8)
sub_140f9a690(&var_7568)
sub_140f9a690(&var_6df8)
void var_5ed0
sub_14068f990(&var_5ed0)
sub_140ddea30(&var_6070)
sub_14068f990(&var_7098)
void var_6930
void* var_8248 = &var_6930
char* (* var_7748)(void* arg1, char* arg2) = sub_140fb46c0
int32_t var_7740 = 0
void var_6e88
void var_6720
sub_140d42100(&var_6720, _vfprintf_p_l(&var_6e88, u"Cancel", u"ColorPicker"))
void var_75d8
void* var_7cb0 = &var_75d8
int64_t* rax_115 = sub_140fb2590()
void var_69f0
sub_140f93c90(&var_69f0, 
    (*(*rax_115 + 0x40))(rax_115, *sub_140b58170(var_7cb0, "StandardDialog.ContentPadding", 1), 0, 
        &data_143e244f0))
void var_7558
__builtin_memcpy(&var_7558, &var_7748, 0x10)
void var_2338
void* rax_123 = sub_140f97340(
    sub_140fc34a0(sub_140fb4490(sub_140fa9f20(sub_14068cc20(&var_2338), &var_69f0), 2), &var_6720), 
    arg1, &var_7558)
void var_82ee
void var_6ea0
int64_t* rax_124
int128_t zmm1_5
rax_124, zmm1_5 = sub_1406884a0(&var_6ea0, "SButton", 
    "D:/Build/++UE4/Sync/Engine/Source/Runtime/AppFramework/Private/Widgets/Colors/SColorPicker.cpp", 
    0x26d, &var_82ee)
int64_t* var_7138
int64_t** rax_125 = sub_140696120(rax_124, &var_7138, rax_123, zmm1_5)
int64_t* var_7808 = *rax_125
void var_7800
void* var_81c8 = &var_7800
*var_81c8 = rax_125[1]

if (*var_81c8 != 0)
    void* rax_131 = *var_81c8
    *(rax_131 + 8) += 1

char* (* var_7738)(void* arg1, char* arg2) = sub_140fb56f0
int32_t var_7730 = 0
void var_6eb8
void var_64b0
sub_140d42100(&var_64b0, _vfprintf_p_l(&var_6eb8, &data_142e6362c, u"ColorPicker"))
void var_75d0
void* var_7c90 = &var_75d0
int64_t* rax_136 = sub_140fb2590()
void var_6a18
sub_140f93c90(&var_6a18, 
    (*(*rax_136 + 0x40))(rax_136, *sub_140b58170(var_7c90, "StandardDialog.ContentPadding", 1), 0, 
        &data_143e244f0))
void var_7548
__builtin_memcpy(&var_7548, &var_7738, 0x10)
void var_26c8
void* rax_144 = sub_140f97340(
    sub_140fc34a0(sub_140fb4490(sub_140fa9f20(sub_14068cc20(&var_26c8), &var_6a18), 2), &var_64b0), 
    arg1, &var_7548)
void var_82ed
void var_6ed0
int64_t* rax_145
int128_t zmm1_6
rax_145, zmm1_6 = sub_1406884a0(&var_6ed0, "SButton", 
    "D:/Build/++UE4/Sync/Engine/Source/Runtime/AppFramework/Private/Widgets/Colors/SColorPicker.cpp", 
    0x263, &var_82ed)
int64_t* var_7148
int64_t** rax_146
int512_t zmm3
rax_146, zmm3 = sub_140696120(rax_145, &var_7148, rax_144, zmm1_6)
int64_t* var_7818 = *rax_146
void var_7810
void* var_81c0 = &var_7810
*var_81c0 = rax_146[1]

if (*var_81c0 != 0)
    void* rax_152 = *var_81c0
    *(rax_152 + 8) += 1

char var_82f6_1

if (*(arg1 + 0x498) != 0)
    if (*(arg1 + 0x4a0) == 0 || *(*(arg1 + 0x4a0) + 8) s<= 0)
        var_82f6_1 = 0
    else
        var_82f6_1 = 1

char var_82f5

if (*(arg1 + 0x498) == 0 || zx.d(var_82f6_1) == 0)
    var_82f5 = 0
else
    var_82f5 = 1

char* var_7f58

if (zx.d(var_82f5) != 0 || zx.d(*(arg1 + 0x505)) != 0)
    var_7f58 = &data_1439ae51c
else
    var_7f58 = &data_1439ae51d

void var_7068
sub_140f93c70(&var_7068, var_7f58)
void var_75c8
void* var_7c68 = &var_75c8
int64_t* rax_170 = sub_140fb2590()
void var_6a40
sub_140f93c90(&var_6a40, 
    (*(*rax_170 + 0x40))(rax_170, *sub_140b58170(var_7c68, "StandardDialog.SlotPadding", 1), 0, 
        &data_143e244f0))
void var_75c0
void* var_7c50 = &var_75c0
int64_t* rax_174 = sub_140fb2590()
int128_t zmm0_1 = sub_140fb3490()
zmm3.o = zmm0_1
(*(*rax_174 + 0x20))(rax_174, *sub_140b58170(var_7c50, "StandardDialog.MinDesiredSlotWidth", 1), 0, 
    zmm3)
int32_t var_8290 = zmm0_1.d
void var_7050
sub_140f93bf0(&var_7050, &var_8290)
void var_75b8
void* var_7c40 = &var_75b8
int64_t* rax_177 = sub_140fb2590()
int128_t zmm0_3 = sub_140fb3490()
zmm3.o = zmm0_3
(*(*rax_177 + 0x20))(rax_177, *sub_140b58170(var_7c40, "StandardDialog.MinDesiredSlotHeight", 1), 
    0, zmm3)
int32_t var_8288 = zmm0_3.d
void var_7038
sub_140f93bf0(&var_7038, &var_8288)
void var_6860
void* var_8240 = &var_6860
void var_6920
void* var_8148 = &var_6920
void var_6910
void* var_8168 = &var_6910
void var_6900
void* var_81a8 = &var_6900
int64_t (* var_7728)(void* arg1, int64_t* arg2, int32_t arg3, char arg4, char arg5, char arg6) =
    sub_140fb5130
int32_t var_7720 = 0
int64_t* (* var_7718)(void* arg1, int64_t* arg2) = sub_140fb50c0
int32_t var_7710 = 0
int32_t var_8284 = 0x42900000
void var_7020
sub_140f93bf0(&var_7020, &var_8284)
int32_t var_8280 = 0x42900000
void var_7008
sub_140f93bf0(&var_7008, &var_8280)
void var_68f0
void* var_81a0 = &var_68f0
void var_6f00
void var_64e0
sub_140d42100(&var_64e0, _vfprintf_p_l(&var_6f00, u"Hex sRGB", u"ColorPicker"))
void var_6f18
void var_6510
sub_140d42100(&var_6510, _vfprintf_p_l(&var_6f18, u"Hexadecimal sRGB Value", u"ColorPicker"))
void var_66d0
void* var_8160 = &var_66d0
void var_66e0
void* var_8180 = &var_66e0
int64_t (* var_7708)(void* arg1, int64_t* arg2, int32_t arg3, char arg4, char arg5, char arg6) =
    sub_140fb4fd0
int32_t var_7700 = 0
int64_t* (* var_76f8)(void* arg1, int64_t* arg2) = sub_140fb4f60
int32_t var_76f0 = 0
int32_t var_827c = 0x42900000
void var_6ff0
sub_140f93bf0(&var_6ff0, &var_827c)
int32_t var_8278 = 0x42900000
void var_6fd8
sub_140f93bf0(&var_6fd8, &var_8278)
void var_66f0
void* var_8178 = &var_66f0
void var_6f30
void var_6540
sub_140d42100(&var_6540, _vfprintf_p_l(&var_6f30, u"Hex Linear", u"ColorPicker"))
void var_6a80
void var_6570
sub_140d42100(&var_6570, _vfprintf_p_l(&var_6a80, u"Hexadecimal Linear Value", u"ColorPicker"))
void var_68b0
void* var_7be0 = &var_68b0
void var_68c0
void* var_7bd0 = &var_68c0
void var_68d0
void* var_7bc0 = &var_68d0
void var_68e0
void* var_8140 = &var_68e0
void var_6730
void* var_7b80 = &var_6730
void var_6740
void* var_7b70 = &var_6740
void var_6750
void* var_7b60 = &var_6750
void var_6760
void* var_7b50 = &var_6760
void var_7528
__builtin_memcpy(&var_7528, &var_7728, 0x10)
void var_7538
__builtin_memcpy(&var_7538, &var_7718, 0x10)
void var_7508
__builtin_memcpy(&var_7508, &var_7708, 0x10)
void var_7518
__builtin_memcpy(&var_7518, &var_76f8, 0x10)
void var_578
void* rax_187 = sub_140f97970(
    sub_140f97d10(sub_140fbc050(sub_140e94440(&var_578), &var_7020), arg1, &var_7538), arg1, 
    &var_7528)
void var_82ec
void var_6a98
int64_t* rax_188
int128_t zmm1_7
rax_188, zmm1_7 = sub_140e913b0(&var_6a98, "SEditableTextBox", 
    "D:/Build/++UE4/Sync/Engine/Source/Runtime/AppFramework/Private/Widgets/Colors/SColorPicker.cpp", 
    0x249, &var_82ec)
void* var_7158
void** rax_189 = sub_140e9ce60(rax_188, &var_7158, rax_187, zmm1_7)
*var_81a8 = *rax_189
*(var_81a8 + 8) = rax_189[1]

if (*(var_81a8 + 8) != 0)
    void* rax_196 = *(var_81a8 + 8)
    *(rax_196 + 8) += 1

void var_f10
void* rax_201 = sub_1406a5080(sub_14068d9d0(&var_f10), &var_64e0)
void var_82eb
void var_6ab0
int64_t* rax_202
int128_t zmm1_8
rax_202, zmm1_8 = sub_1406887a0(&var_6ab0, "STextBlock", 
    "D:/Build/++UE4/Sync/Engine/Source/Runtime/AppFramework/Private/Widgets/Colors/SColorPicker.cpp", 
    0x241, &var_82eb)
void* var_7168
void** rax_203 = sub_140697520(rax_202, &var_7168, rax_201, zmm1_8)
*var_81a0 = *rax_203
*(var_81a0 + 8) = rax_203[1]

if (*(var_81a0 + 8) != 0)
    void* rax_210 = *(var_81a0 + 8)
    *(rax_210 + 8) += 1

void* rax_217 = sub_140693860(sub_140fbbac0(sub_140698b50(sub_1406a4fe0()), &var_7008), var_81a8)
void* var_8308_8
var_8308_8.d = 0
void* rax_222 = sub_140693860(
    sub_140fc3980(
        sub_14069cf40(sub_140698b50(sub_1406a4fe0()), zx.o(0), (zx.o(0)).d, 0x40800000, 
            var_8308_8.d), 
        2), 
    var_81a0)
void var_4c28
void* rax_226 = sub_1406938c0(
    sub_1406938c0(sub_140fc34f0(sub_14068d420(&var_4c28), &var_6510), rax_222), rax_217)
void var_82ea
void var_6ac8
int64_t* rax_227
int128_t zmm1_10
rax_227, zmm1_10 = sub_140688620(&var_6ac8, "SHorizontalBox", 
    "D:/Build/++UE4/Sync/Engine/Source/Runtime/AppFramework/Private/Widgets/Colors/SColorPicker.cpp", 
    0x239, &var_82ea)
void* var_7178
void** rax_228 = sub_140696920(rax_227, &var_7178, rax_226, zmm1_10)
*var_8168 = *rax_228
*(var_8168 + 8) = rax_228[1]

if (*(var_8168 + 8) != 0)
    void* rax_235 = *(var_8168 + 8)
    *(rax_235 + 8) += 1

void var_ac8
void* rax_242 = sub_140f97970(
    sub_140f97d10(sub_140fbc050(sub_140e94440(&var_ac8), &var_6ff0), arg1, &var_7518), arg1, 
    &var_7508)
void var_82e9
void var_6ae0
int64_t* rax_243
int128_t zmm1_11
rax_243, zmm1_11 = sub_140e913b0(&var_6ae0, "SEditableTextBox", 
    "D:/Build/++UE4/Sync/Engine/Source/Runtime/AppFramework/Private/Widgets/Colors/SColorPicker.cpp", 
    0x22c, &var_82e9)
void* var_7188
void** rax_244 = sub_140e9ce60(rax_243, &var_7188, rax_242, zmm1_11)
*var_8180 = *rax_244
*(var_8180 + 8) = rax_244[1]

if (*(var_8180 + 8) != 0)
    void* rax_251 = *(var_8180 + 8)
    *(rax_251 + 8) += 1

void var_1358
void* rax_256 = sub_1406a5080(sub_14068d9d0(&var_1358), &var_6540)
void var_82e8
void var_6af8
int64_t* rax_257
int128_t zmm1_12
rax_257, zmm1_12 = sub_1406887a0(&var_6af8, "STextBlock", 
    "D:/Build/++UE4/Sync/Engine/Source/Runtime/AppFramework/Private/Widgets/Colors/SColorPicker.cpp", 
    0x224, &var_82e8)
void* var_7198
void** rax_258 = sub_140697520(rax_257, &var_7198, rax_256, zmm1_12)
*var_8178 = *rax_258
*(var_8178 + 8) = rax_258[1]

if (*(var_8178 + 8) != 0)
    void* rax_265 = *(var_8178 + 8)
    *(rax_265 + 8) += 1

void* rax_272 = sub_140693860(sub_140fbbac0(sub_140698b50(sub_1406a4fe0()), &var_6fd8), var_8180)
void* var_8308_11
var_8308_11.d = 0
void* rax_277 = sub_140693860(
    sub_140fc3980(
        sub_14069cf40(sub_140698b50(sub_1406a4fe0()), zx.o(0), (zx.o(0)).d, 0x40800000, 
            var_8308_11.d), 
        2), 
    var_8178)
void var_4dd8
void* rax_281 = sub_1406938c0(
    sub_1406938c0(sub_140fc34f0(sub_14068d420(&var_4dd8), &var_6570), rax_277), rax_272)
void var_82e7
void var_6b10
int64_t* rax_282
int128_t zmm1_14
rax_282, zmm1_14 = sub_140688620(&var_6b10, "SHorizontalBox", 
    "D:/Build/++UE4/Sync/Engine/Source/Runtime/AppFramework/Private/Widgets/Colors/SColorPicker.cpp", 
    0x21c, &var_82e7)
void* var_71a8
void** rax_283 = sub_140696920(rax_282, &var_71a8, rax_281, zmm1_14)
*var_8160 = *rax_283
*(var_8160 + 8) = rax_283[1]

if (*(var_8160 + 8) != 0)
    void* rax_290 = *(var_8160 + 8)
    *(rax_290 + 8) += 1

void* var_8308_12
var_8308_12.d = 0
void* rax_298 = sub_140693860(
    sub_14069cf40(sub_140fc3980(sub_140fb44b0(sub_1406a4fe0(), 3), 1), zx.o(0), 0x41000000, 
        (zx.o(0)).d, var_8308_12.d), 
    var_8168)
var_8308_12.d = 0
void* rax_303 = sub_140693860(
    sub_14069cf40(sub_140fc3980(sub_140fb44b0(sub_1406a4fe0(), 3), 1), zx.o(0), 0x41400000, 
        (zx.o(0)).d, var_8308_12.d), 
    var_8160)
int64_t* rax_304 = sub_140fb9f10(arg1, var_7be0, 6)
var_8308_12.d = 0
void* rax_307 = sub_140693860(
    sub_14069cf40(sub_1406a4fe0(), zx.o(0), 0x41000000, (zx.o(0)).d, var_8308_12.d), rax_304)
int64_t* rax_308 = sub_140fb9f10(arg1, var_7bd0, 5)
var_8308_12.d = 0
void* rax_311 = sub_140693860(
    sub_14069cf40(sub_1406a4fe0(), zx.o(0), 0x41000000, (zx.o(0)).d, var_8308_12.d), rax_308)
int64_t* rax_312 = sub_140fb9f10(arg1, var_7bc0, 4)
void* rax_314 = sub_140693860(sub_1406a4fe0(), rax_312)
void var_4f88
void* rax_320 = sub_1406938c0(
    sub_1406938c0(
        sub_1406938c0(sub_1406938c0(sub_1406938c0(sub_14068d420(&var_4f88), rax_314), rax_311), 
            rax_307), 
        rax_303), 
    rax_298)
void var_82e6
void var_6b28
int64_t* rax_321
int128_t zmm1_19
rax_321, zmm1_19 = sub_140688860(&var_6b28, "SVerticalBox", 
    "D:/Build/++UE4/Sync/Engine/Source/Runtime/AppFramework/Private/Widgets/Colors/SColorPicker.cpp", 
    0x200, &var_82e6)
void* var_71b8
void** rax_322 = sub_140696920(rax_321, &var_71b8, rax_320, zmm1_19)
*var_8148 = *rax_322
*(var_8148 + 8) = rax_322[1]

if (*(var_8148 + 8) != 0)
    void* rax_329 = *(var_8148 + 8)
    *(rax_329 + 8) += 1

int64_t* rax_333 = sub_140fb9f10(arg1, var_7b80, 3)
void* var_8308_13
var_8308_13.d = 0
void* rax_336 = sub_140693860(
    sub_14069cf40(sub_1406a4fe0(), zx.o(0), 0x41000000, (zx.o(0)).d, var_8308_13.d), rax_333)
int64_t* rax_337 = sub_140fb9f10(arg1, var_7b70, 2)
var_8308_13.d = 0
void* rax_340 = sub_140693860(
    sub_14069cf40(sub_1406a4fe0(), zx.o(0), 0x41000000, (zx.o(0)).d, var_8308_13.d), rax_337)
int64_t* rax_341 = sub_140fb9f10(arg1, var_7b60, 1)
var_8308_13.d = 0
void* rax_344 = sub_140693860(
    sub_14069cf40(sub_1406a4fe0(), zx.o(0), 0x41000000, (zx.o(0)).d, var_8308_13.d), rax_341)
int64_t* rax_345 = sub_140fb9f10(arg1, var_7b50, 0)
void* rax_347 = sub_140693860(sub_1406a4fe0(), rax_345)
void var_5138
void* rax_352 = sub_1406938c0(
    sub_1406938c0(sub_1406938c0(sub_1406938c0(sub_14068d420(&var_5138), rax_347), rax_344), 
        rax_340), 
    rax_336)
void var_82e5
void var_6b40
int64_t* rax_353
int128_t zmm1_23
rax_353, zmm1_23 = sub_140688860(&var_6b40, "SVerticalBox", 
    "D:/Build/++UE4/Sync/Engine/Source/Runtime/AppFramework/Private/Widgets/Colors/SColorPicker.cpp", 
    0x1de, &var_82e5)
void* var_71c8
void** rax_354 = sub_140696920(rax_353, &var_71c8, rax_352, zmm1_23)
*var_8140 = *rax_354
*(var_8140 + 8) = rax_354[1]

if (*(var_8140 + 8) != 0)
    void* rax_361 = *(var_8140 + 8)
    *(rax_361 + 8) += 1

void* var_8308_14
var_8308_14.d = 0
void* rax_367 = sub_140693860(
    sub_14069cf40(sub_1406a4fe0(), 0x40800000, (zx.o(0)).d, (zx.o(0)).d, var_8308_14.d), var_8148)
var_8308_14.d = 0
void* rax_370 = sub_140693860(
    sub_14069cf40(sub_1406a4fe0(), zx.o(0), (zx.o(0)).d, 0x40800000, var_8308_14.d), var_8140)
void var_52e8
void* rax_373 = sub_1406938c0(sub_1406938c0(sub_14068d420(&var_52e8), rax_370), rax_367)
void var_82e4
void var_6b58
int64_t* rax_374
int128_t zmm1_26
rax_374, zmm1_26 = sub_140688620(&var_6b58, "SHorizontalBox", 
    "D:/Build/++UE4/Sync/Engine/Source/Runtime/AppFramework/Private/Widgets/Colors/SColorPicker.cpp", 
    0x1d8, &var_82e4)
void* var_71d8
void** rax_375 = sub_140696920(rax_374, &var_71d8, rax_373, zmm1_26)
void* var_7828 = *rax_375
void var_7820
void* var_8138 = &var_7820
*var_8138 = rax_375[1]

if (*var_8138 != 0)
    void* rax_381 = *var_8138
    *(rax_381 + 8) += 1

void* var_8308_15
var_8308_15.d = 0x41000000
void var_6a68
void var_6770
sub_140f93c90(&var_6a68, 
    sub_140dd8770(&var_6770, (zx.o(0)).d, 0x3f800000, (zx.o(0)).d, var_8308_15.d))
int64_t (* var_77b8)(int64_t arg1, char arg2) = sub_140fb44c0
int32_t var_77b0 = 0
char var_82f4

if (zx.d(arg2) != 0)
    var_82f4 = 0
else
    var_82f4 = 1

void var_6480
sub_140f93cb0(&var_6480, &data_143dbb1e0)
void var_6b70
void var_65a0
sub_140d42100(&var_65a0, _vfprintf_p_l(&var_6b70, u"Advanced", u"ColorPicker"))
void var_6780
void* var_8238 = &var_6780
void var_6790
void* var_80f8 = &var_6790
void var_67a0
void* var_8118 = &var_67a0
char* var_7ea8

if (zx.d(*(arg1 + 0x505)) == 0)
    var_7ea8 = &data_1439ae51c
else
    var_7ea8 = &data_1439ae51d

void var_6fc0
sub_140f93c70(&var_6fc0, var_7ea8)
void (* var_76e8)(void* arg1, char arg2) = sub_140fb4e20
int32_t var_76e0 = 0
void (* var_76d8)(void* arg1) = sub_140fb5310
int32_t var_76d0 = 0
int64_t (* var_76c8)(void* arg1, int128_t* arg2) = sub_140fb5bd0
int32_t var_76c0 = 0
void var_67b0
void* var_8110 = &var_67b0
void var_6b88
void var_65d0
sub_140d42100(&var_65d0, _vfprintf_p_l(&var_6b88, Toggle between color wheel and color spectrum.", 
    ColorPicker"))
void var_75b0
void* var_7af8 = &var_75b0
int64_t* rax_392 = sub_140fb2590()
int64_t var_7ae8 = (*(*rax_392 + 0x48))(rax_392, *sub_140b58170(var_7af8, "ColorPicker.Mode", 1), 0)
void var_6f90
sub_140f93c50(&var_6f90, &var_7ae8)
void var_40c8
int128_t* rax_398 = sub_140fc34f0(sub_140fb6240(sub_140e4fb70(&var_40c8), &var_6f90), &var_65d0)
void var_82e3
void* var_6ee8
void** rax_399
int128_t zmm1_28
rax_399, zmm1_28 = sub_140e48950(&var_6ee8, "SImage", 
    "D:/Build/++UE4/Sync/Engine/Source/Runtime/AppFramework/Private/Widgets/Colors/SColorPicker.cpp", 
    0x1b6, &var_82e3)
void* var_71e8
void** rax_400 = sub_140e56930(rax_399, &var_71e8, rax_398, zmm1_28)
void* var_7838 = *rax_400
void var_7830
void* var_8130 = &var_7830
*var_8130 = rax_400[1]

if (*var_8130 != 0)
    void* rax_406 = *var_8130
    *(rax_406 + 8) += 1

char* (* var_76b8)(void* arg1, char* arg2) = sub_140fb4920
int32_t var_76b0 = 0
void var_67c0
void* var_80f0 = &var_67c0
void var_67d0
void* var_7aa8 = &var_67d0
int32_t var_8274 = 0x428c0000
void var_6fa8
sub_140f93bf0(&var_6fa8, &var_8274)
int32_t var_8270 = 0x42c80000
void var_7128
sub_140f93bf0(&var_7128, &var_8270)
void var_74d8
__builtin_memcpy(&var_74d8, &var_76e8, 0x10)
void var_74e8
__builtin_memcpy(&var_74e8, &var_76d8, 0x10)
void var_74f8
__builtin_memcpy(&var_74f8, &var_76c8, 0x10)
void var_74c8
__builtin_memcpy(&var_74c8, &var_76b8, 0x10)
void var_48a8
void* rax_417 = sub_140fc3990(
    sub_140faa810(
        sub_140f972b0(
            sub_140f97190(sub_140f97a90(sub_140f99600(&var_48a8), arg1, &var_74f8), arg1, 
                &var_74e8), 
            arg1, &var_74d8), 
        arg1 + 0x4e8), 
    &var_6fc0)
void var_82e2
void* var_6ba0
void** rax_418
int128_t zmm1_29
rax_418, zmm1_29 = sub_140f96300(&var_6ba0, "SEyeDropperButton", 
    "D:/Build/++UE4/Sync/Engine/Source/Runtime/AppFramework/Private/Widgets/Colors/SColorPicker.cpp", 
    0x1c0, &var_82e2)
int64_t* var_71f8
int64_t** rax_419 = sub_140f9dba0(rax_418, &var_71f8, rax_417, zmm1_29)
*var_8118 = *rax_419
*(var_8118 + 8) = rax_419[1]

if (*(var_8118 + 8) != 0)
    void* rax_426 = *(var_8118 + 8)
    *(rax_426 + 8) += 1

void var_67e0
void var_2a58
void* rax_433 = sub_140f685c0(
    sub_140fa9f00(sub_140f97340(sub_14068cc20(&var_2a58), arg1, &var_74c8), &var_67e0), &var_7838)
void var_82e1
void var_6bb8
int64_t* rax_434
int128_t zmm1_30
rax_434, zmm1_30 = sub_1406884a0(&var_6bb8, "SButton", 
    "D:/Build/++UE4/Sync/Engine/Source/Runtime/AppFramework/Private/Widgets/Colors/SColorPicker.cpp", 
    0x1b2, &var_82e1)
int64_t* var_7208
int64_t** rax_435 = sub_140696120(rax_434, &var_7208, rax_433, zmm1_30)
*var_8110 = *rax_435
*(var_8110 + 8) = rax_435[1]

if (*(var_8110 + 8) != 0)
    void* rax_442 = *(var_8110 + 8)
    *(rax_442 + 8) += 1

void* rax_448 = sub_140693860(sub_140fb44b0(sub_1406a4fe0(), 3), var_8118)
void* rax_451 = sub_140693860(sub_140fb44b0(sub_1406a4fe0(), 1), var_8110)
void var_5498
void* rax_454 = sub_1406938c0(sub_1406938c0(sub_14068d420(&var_5498), rax_451), rax_448)
void var_82e0
void var_6bd0
int64_t* rax_455
int128_t zmm1_31
rax_455, zmm1_31 = sub_140688620(&var_6bd0, "SHorizontalBox", 
    "D:/Build/++UE4/Sync/Engine/Source/Runtime/AppFramework/Private/Widgets/Colors/SColorPicker.cpp", 
    0x1ac, &var_82e0)
void* var_7218
void** rax_456 = sub_140696920(rax_455, &var_7218, rax_454, zmm1_31)
*var_80f8 = *rax_456
*(var_80f8 + 8) = rax_456[1]

if (*(var_80f8 + 8) != 0)
    void* rax_463 = *(var_80f8 + 8)
    *(rax_463 + 8) += 1

void** rax_467 = sub_140fb7020(arg1, var_7aa8)
void var_39d0
int64_t* rax_468
int128_t zmm1_32
rax_468, zmm1_32 = sub_14068c940(&var_39d0)
void* rax_471 =
    sub_1406937a0(sub_140fc39c0(sub_140fb6160(rax_468, &var_7128), &var_6fa8), rax_467, zmm1_32)
void var_82df
void var_6be8
void** rax_472
int128_t zmm1_33
rax_472, zmm1_33 = sub_1406883e0(&var_6be8, "SBox", 
    "D:/Build/++UE4/Sync/Engine/Source/Runtime/AppFramework/Private/Widgets/Colors/SColorPicker.cpp", 
    0x19e, &var_82df)
void* var_7228
void** rax_473 = sub_140695d20(rax_472, &var_7228, rax_471, zmm1_33)
*var_80f0 = *rax_473
*(var_80f0 + 8) = rax_473[1]

if (*(var_80f0 + 8) != 0)
    void* rax_480 = *(var_80f0 + 8)
    *(rax_480 + 8) += 1

void* var_8308_20
var_8308_20.d = 0
void* rax_488 = sub_140693860(
    sub_140fc3980(
        sub_14069cf40(sub_140698b50(sub_1406a4fe0()), zx.o(0), 0x41800000, (zx.o(0)).d, 
            var_8308_20.d), 
        1), 
    var_80f8)
void* rax_491 = sub_140693860(sub_140698b50(sub_1406a4fe0()), var_80f0)
void var_5648
void* rax_494 = sub_1406938c0(sub_1406938c0(sub_14068d420(&var_5648), rax_491), rax_488)
void var_82de
void var_6c00
int64_t* rax_495
int128_t zmm1_35
rax_495, zmm1_35 = sub_140688860(&var_6c00, "SVerticalBox", 
    "D:/Build/++UE4/Sync/Engine/Source/Runtime/AppFramework/Private/Widgets/Colors/SColorPicker.cpp", 
    0x199, &var_82de)
void* var_7238
void** rax_496 = sub_140696920(rax_495, &var_7238, rax_494, zmm1_35)
void* var_7848 = *rax_496
void var_7840
void* var_80e8 = &var_7840
*var_80e8 = rax_496[1]

if (*var_80e8 != 0)
    void* rax_502 = *var_80e8
    *(rax_502 + 8) += 1

void var_67f0
void* var_80a8 = &var_67f0
void var_6810
void* var_80d8 = &var_6810
void* const var_76a8 = &data_140fb5430
int32_t var_76a0 = 0
void (* var_7698)(void* arg1) = sub_140fb5310
int32_t var_7690 = 0
int64_t (* var_7688)(void* arg1, int128_t* arg2) = sub_140fb4c90
int32_t var_7680 = 0
char* (* var_7678)(int64_t arg1, char* arg2, int32_t arg3) = sub_140fb4a20
int32_t var_7670 = 0
int128_t* (* var_7668)(void* arg1, int128_t* arg2) = sub_140fb2ef0
int32_t var_7660 = 0
int32_t var_826c = 0x43920000
void var_7110
sub_140f93bf0(&var_7110, &var_826c)
int32_t var_8268 = 0x43480000
void var_70f8
sub_140f93bf0(&var_70f8, &var_8268)
void var_7478
__builtin_memcpy(&var_7478, &var_76a8, 0x10)
void var_7488
__builtin_memcpy(&var_7488, &var_7698, 0x10)
void var_7498
__builtin_memcpy(&var_7498, &var_7688, 0x10)
void var_74a8
__builtin_memcpy(&var_74a8, &var_7678, 0x10)
void var_74b8
__builtin_memcpy(&var_74b8, &var_7668, 0x10)
void var_44c8
void* rax_511 = sub_140f97730(
    sub_140f97610(
        sub_140f97a00(
            sub_140f985c0(sub_140f93e80(sub_140f98ac0(&var_44c8), arg1, &var_74b8), arg1, 
                &var_74a8, 0), 
            arg1, &var_7498), 
        arg1, &var_7488), 
    arg1, &var_7478)
void var_82dd
void* var_6c18
void** rax_512
int128_t zmm1_36
rax_512, zmm1_36 = sub_140f96000(&var_6c18, "SColorSpectrum", 
    "D:/Build/++UE4/Sync/Engine/Source/Runtime/AppFramework/Private/Widgets/Colors/SColorPicker.cpp", 
    0x18b, &var_82dd)
void* var_7248
void** rax_513 = sub_140f9c810(rax_512, &var_7248, rax_511, zmm1_36)
*var_80d8 = *rax_513
*(var_80d8 + 8) = rax_513[1]

if (*(var_80d8 + 8) != 0)
    void* rax_520 = *(var_80d8 + 8)
    *(rax_520 + 8) += 1

void var_3c70
int64_t* rax_524
int128_t zmm1_37
rax_524, zmm1_37 = sub_14068c940(&var_3c70)
void* rax_527 =
    sub_1406937a0(sub_140fc39c0(sub_140fb6160(rax_524, &var_70f8), &var_7110), var_80d8, zmm1_37)
void var_82dc
void var_6c30
int64_t* rax_528
int128_t zmm1_38
rax_528, zmm1_38 = sub_1406883e0(&var_6c30, "SBox", 
    "D:/Build/++UE4/Sync/Engine/Source/Runtime/AppFramework/Private/Widgets/Colors/SColorPicker.cpp", 
    0x187, &var_82dc)
void* var_7258
void** rax_529 = sub_140695d20(rax_528, &var_7258, rax_527, zmm1_38)
void* var_7858 = *rax_529
void var_7850
void* var_80d0 = &var_7850
*var_80d0 = rax_529[1]

if (*var_80d0 != 0)
    void* rax_535 = *var_80d0
    *(rax_535 + 8) += 1

void var_68a0
void* var_7a60 = &var_68a0
void var_6890
void* var_7a50 = &var_6890
void var_6880
void* var_80c0 = &var_6880
void* const var_7658 = &data_140fb5430
int32_t var_7650 = 0
void (* var_7648)(void* arg1) = sub_140fb5310
int32_t var_7640 = 0
int64_t (* var_7638)(void* arg1, int128_t* arg2) = sub_140fb4c90
int32_t var_7630 = 0
char* (* var_7628)(int64_t arg1, char* arg2, int32_t arg3) = sub_140fb4a20
int32_t var_7620 = 0
int128_t* (* var_7618)(void* arg1, int128_t* arg2) = sub_140fb2ef0
int32_t var_7610 = 0
int32_t var_8264 = 0x3f800000
void var_70e0
sub_140f93bf0(&var_70e0, &var_8264)
void var_7428
__builtin_memcpy(&var_7428, &var_7658, 0x10)
void var_7438
__builtin_memcpy(&var_7438, &var_7648, 0x10)
void var_7448
__builtin_memcpy(&var_7448, &var_7638, 0x10)
void var_7458
__builtin_memcpy(&var_7458, &var_7628, 0x10)
void var_7468
__builtin_memcpy(&var_7468, &var_7618, 0x10)
void var_46c0
void* rax_544 = sub_140f97730(
    sub_140f97610(
        sub_140f97a00(
            sub_140f985c0(sub_140f93e80(sub_140f98ac0(&var_46c0), arg1, &var_7468), arg1, 
                &var_7458, 1), 
            arg1, &var_7448), 
        arg1, &var_7438), 
    arg1, &var_7428)
void var_82db
void* var_6c48
void** rax_545
int128_t zmm1_39
rax_545, zmm1_39 = sub_140f96180(&var_6c48, "SColorWheel", 
    "D:/Build/++UE4/Sync/Engine/Source/Runtime/AppFramework/Private/Widgets/Colors/SColorPicker.cpp", 
    0x16c, &var_82db)
void* var_7268
void** rax_546 = sub_140f9d2d0(rax_545, &var_7268, rax_544, zmm1_39)
*var_80c0 = *rax_546
*(var_80c0 + 8) = rax_546[1]

if (*(var_80c0 + 8) != 0)
    void* rax_553 = *(var_80c0 + 8)
    *(rax_553 + 8) += 1

void** rax_557 = sub_140fb9400(arg1, var_7a60, 6)
void* rax_560 = sub_140693860(sub_140698b50(sub_1406a4fe0()), rax_557)
void** rax_561 = sub_140fb9400(arg1, var_7a50, 5)
void* rax_565 =
    sub_140693860(sub_140f12c60(sub_140698b50(sub_1406a4fe0()), 0x40800000, (zx.o(0)).d), rax_561)
void* rax_569 = sub_140693860(sub_140fb44b0(sub_140eb9be0(sub_1406a4fe0(), &var_70e0), 2), var_80c0)
void var_57f8
void* rax_573 =
    sub_1406938c0(sub_1406938c0(sub_1406938c0(sub_14068d420(&var_57f8), rax_569), rax_565), rax_560)
void var_82da
void var_6c60
int64_t* rax_574
int128_t zmm1_41
rax_574, zmm1_41 = sub_140688620(&var_6c60, "SHorizontalBox", 
    "D:/Build/++UE4/Sync/Engine/Source/Runtime/AppFramework/Private/Widgets/Colors/SColorPicker.cpp", 
    0x166, &var_82da)
void* var_7278
void** rax_575 = sub_140696920(rax_574, &var_7278, rax_573, zmm1_41)
void* var_7868 = *rax_575
void var_7860
void* var_80b8 = &var_7860
*var_80b8 = rax_575[1]

if (*var_80b8 != 0)
    void* rax_581 = *var_80b8
    *(rax_581 + 8) += 1

char* (* var_7608)(void* arg1, char* arg2, int64_t arg3, void* arg4) = sub_140fb4810
int32_t var_7600 = 0
int32_t var_8260 = 0
void var_6978
sub_140f93c30(&var_6978, &var_8260)
void var_75f8
void* var_7a20 = &var_75f8
int64_t* rax_585 = sub_140fb2590()
int64_t var_7a10 = (*(*rax_585 + 0x48))(rax_585, *sub_140b58170(var_7a20, "NoBorder", 1), 0)
void var_6f70
sub_140f93c50(&var_6f70, &var_7a10)
void var_7418
__builtin_memcpy(&var_7418, &var_7608, 0x10)
void* rax_590 = sub_140de1aa0(sub_140e258e0(), &var_7858)
void* rax_592 = sub_140de1aa0(sub_140e258e0(), &var_7868)
void var_59a8
void* rax_595 = sub_140de1c90(sub_140de1c90(sub_140dd5d30(&var_59a8), rax_592), rax_590)
void var_82d9
void* var_8308_26 = &var_82d9
void* var_6c78
void** rax_596
int128_t zmm1_42
rax_596, zmm1_42 = sub_140dd3710(&var_6c78, "SOverlay")
void* var_7288
void** rax_597 = sub_140de49c0(rax_596, &var_7288, rax_595, zmm1_42)
*var_80a8 = *rax_597
*(var_80a8 + 8) = rax_597[1]

if (*(var_80a8 + 8) != 0)
    void* rax_604 = *(var_80a8 + 8)
    *(rax_604 + 8) += 1

void var_3110
void* rax_611
int128_t zmm1_43
rax_611, zmm1_43 = sub_140f974f0(
    sub_140fc1820(sub_140f9ff90(sub_14068c640(&var_3110), &var_6f70), &var_6978), arg1, &var_7418)
void* rax_612 = sub_1406936e0(rax_611, var_80a8, zmm1_43)
void var_82d8
void var_6c90
int64_t* rax_613
int128_t zmm1_44
rax_613, zmm1_44 = sub_140688320(&var_6c90, "SBorder", 
    "D:/Build/++UE4/Sync/Engine/Source/Runtime/AppFramework/Private/Widgets/Colors/SColorPicker.cpp", 
    0x15c, &var_82d8)
void* var_7298
void** rax_614 = sub_140695920(rax_613, &var_7298, rax_612, zmm1_44)
void* var_7878 = *rax_614
void var_7870
void* var_80a0 = &var_7870
*var_80a0 = rax_614[1]

if (*var_80a0 != 0)
    void* rax_620 = *var_80a0
    *(rax_620 + 8) += 1

void var_6870
void* var_8090 = &var_6870
void var_6ca8
void var_6600
sub_140d42100(&var_6600, _vfprintf_p_l(&var_6ca8, u"sRGB Preview", u"ColorPicker"))
int64_t (* var_77e8)(int64_t arg1, char arg2) = sub_140fb5c10
int32_t var_77e0 = 0
int64_t (* var_77d8)() = sub_140fb5c60
int32_t var_77d0 = 0
void var_6cc0
void var_6630
sub_140d42100(&var_6630, _vfprintf_p_l(&var_6cc0, Toggle gamma corrected sRGB previewing", 
    ColorPicker"))
void var_73f8
__builtin_memcpy(&var_73f8, &var_77e8, 0x10)
void var_7408
__builtin_memcpy(&var_7408, &var_77d8, 0x10)
void var_17a0
void* rax_627 = sub_1406a5080(sub_14068d9d0(&var_17a0), &var_6600)
void var_82d7
void var_6cd8
int64_t* rax_628
int128_t zmm1_45
rax_628, zmm1_45 = sub_1406887a0(&var_6cd8, "STextBlock", 
    "D:/Build/++UE4/Sync/Engine/Source/Runtime/AppFramework/Private/Widgets/Colors/SColorPicker.cpp", 
    0x154, &var_82d7)
void* var_72a8
void** rax_629 = sub_140697520(rax_628, &var_72a8, rax_627, zmm1_45)
*var_8090 = *rax_629
*(var_8090 + 8) = rax_629[1]

if (*(var_8090 + 8) != 0)
    void* rax_636 = *(var_8090 + 8)
    *(rax_636 + 8) += 1

void var_2dc8
void* rax_643
int128_t zmm1_46
rax_643, zmm1_46 = sub_140f972b0(
    sub_140f95d80(sub_140fc34f0(sub_140e93090(&var_2dc8), &var_6630), arg1, &var_7408), arg1, 
    &var_73f8)
void* rax_644 = sub_140e99c30(rax_643, var_8090, zmm1_46)
void var_82d6
void var_6cf0
int64_t* rax_645
int128_t zmm1_47
rax_645, zmm1_47 = sub_140e911f0(&var_6cf0, "SCheckBox", 
    "D:/Build/++UE4/Sync/Engine/Source/Runtime/AppFramework/Private/Widgets/Colors/SColorPicker.cpp", 
    0x14f, &var_82d6)
void* var_72b8
void** rax_646 = sub_140e9ac90(rax_645, &var_72b8, rax_644, zmm1_47)
void* var_7888 = *rax_646
void var_7880
void* var_8088 = &var_7880
*var_8088 = rax_646[1]

if (*var_8088 != 0)
    void* rax_652 = *var_8088
    *(rax_652 + 8) += 1

void var_6850
void* var_8040 = &var_6850
int32_t var_825c = 0
void var_69a0
sub_140f93c30(&var_69a0, &var_825c)
sub_140e15430()
int64_t* var_79d8 = &data_143e24500
void var_6f50
sub_140f93c50(&var_6f50, &var_79d8)
void var_6840
void* var_8038 = &var_6840
char* (* var_77c8)(int64_t arg1, char* arg2) = sub_140fb5e90
int32_t var_77c0 = 0
void var_6d08
void var_6660
sub_140d42100(&var_6660, _vfprintf_p_l(&var_6d08, Drag & drop colors here to save", ColorPicker"))
void var_73e8
__builtin_memcpy(&var_73e8, &var_77c8, 0x10)
void var_1be8
void* rax_659 = sub_140f984f0(sub_1406a5080(sub_14068d9d0(&var_1be8), &var_6660), arg1, &var_73e8)
void var_82d5
void var_6d20
int64_t* rax_660
int128_t zmm1_48
rax_660, zmm1_48 = sub_1406887a0(&var_6d20, "STextBlock", 
    "D:/Build/++UE4/Sync/Engine/Source/Runtime/AppFramework/Private/Widgets/Colors/SColorPicker.cpp", 
    0x13a, &var_82d5)
void* var_72c8
void** rax_661 = sub_140697520(rax_660, &var_72c8, rax_659, zmm1_48)
void* var_7898 = *rax_661
void var_7890
void* var_8080 = &var_7890
*var_8080 = rax_661[1]

if (*var_8080 != 0)
    void* rax_667 = *var_8080
    *(rax_667 + 8) += 1

int32_t* (* var_77f8)(void* arg1, int128_t* arg2) = sub_140fb5c70
int32_t var_77f0 = 0
uint64_t (* var_77a8)() = sub_140fb4a50
int32_t var_77a0 = 0
void var_6830
void* var_8060 = &var_6830
uint64_t (* var_7798)(void* arg1) = sub_140fb5fa0
int32_t var_7790 = 0
void var_6820
void* var_8068 = &var_6820
void var_6d38
void var_6690
sub_140d42100(&var_6690, _vfprintf_p_l(&var_6d38, u"Current Color Theme", u"ColorPicker"))
int64_t (* var_7788)(void* arg1) = sub_140fc3290
int32_t var_7780 = 0
int64_t (* var_7778)(void* arg1) = sub_140fb6180
int32_t var_7770 = 0
void var_6440
void* var_79c8 = &var_6440
int64_t* (* var_7768)(int64_t arg1, int64_t* arg2) = sub_140fb5e00
int32_t var_7760 = 0
void var_7368
__builtin_memcpy(&var_7368, &var_77f8, 0x10)
void var_7378
__builtin_memcpy(&var_7378, &var_77a8, 0x10)
void var_7388
__builtin_memcpy(&var_7388, &var_7798, 0x10)
void var_7398
__builtin_memcpy(&var_7398, &var_7788, 0x10)
void var_73a8
__builtin_memcpy(&var_73a8, &var_7778, 0x10)
void var_73b8
__builtin_memcpy(&var_73b8, &var_7768, 0x10)
void var_73d8
int64_t* rax_674 = sub_140f2cda0(arg1 + 8, &var_73d8)
*var_8060 = *rax_674
*(var_8060 + 8) = rax_674[1]

if (*(var_8060 + 8) != 0)
    void* rax_681 = *(var_8060 + 8)
    *(rax_681 + 8) += 1

sub_140669d70(&var_73d8)
void var_73c8
int64_t* rax_687 = sub_140f2cda0(arg1 + 8, &var_73c8)
*var_8068 = *rax_687
*(var_8068 + 8) = rax_687[1]

if (*(var_8068 + 8) != 0)
    void* rax_694 = *(var_8068 + 8)
    *(rax_694 + 8) += 1

sub_140669d70(&var_73c8)
int64_t* rax_698 = _vfprintf_p_l(var_79c8, u"Drag & drop colors here to save", u"ColorPicker")
void var_3eb0
void* rax_706 = sub_140f97fa0(
    sub_140f97e70(
        sub_140fc34f0(
            sub_140f97730(
                sub_140f95cf0(
                    sub_140faae50(sub_140f94020(sub_140f99e50(&var_3eb0), arg1, &var_73b8), 
                        rax_698), 
                    arg1, &var_73a8), 
                arg1, &var_7398), 
            &var_6690), 
        var_8068, &var_7388), 
    var_8060, &var_7378)
void* rax_707 = sub_140f97850(rax_706, arg1, &var_7368)
void var_82d4
void* var_6d50
void** rax_708
int128_t zmm1_49
rax_708, zmm1_49 = sub_140f964c0(&var_6d50, "SThemeColorBlocksBar", 
    "D:/Build/++UE4/Sync/Engine/Source/Runtime/AppFramework/Private/Widgets/Colors/SColorPicker.cpp", 
    0x12a, &var_82d4)
void* var_72d8
void** rax_710 = sub_140f9ea20(sub_140dd3250(rax_708, arg1 + 0x4a8), &var_72d8, rax_707, zmm1_49)
void* var_78a8 = *rax_710
void var_78a0
void* var_8058 = &var_78a0
*var_8058 = rax_710[1]

if (*var_8058 != 0)
    void* rax_716 = *var_8058
    *(rax_716 + 8) += 1

int32_t var_8258 = 0x3f800000
void var_70c8
sub_140f93bf0(&var_70c8, &var_8258)
void var_3458
void* rax_722 = sub_140fc1820(sub_140f9ff90(sub_14068c640(&var_3458), &var_6f50), &var_69a0)
void var_82d3
void var_6d68
int64_t* rax_723
int128_t zmm1_50
rax_723, zmm1_50 = sub_140688320(&var_6d68, "SBorder", 
    "D:/Build/++UE4/Sync/Engine/Source/Runtime/AppFramework/Private/Widgets/Colors/SColorPicker.cpp", 
    0x144, &var_82d3)
void* var_72e8
void** rax_725 = sub_140695920(sub_140dd3250(rax_723, arg1 + 0x4b8), &var_72e8, rax_722, zmm1_50)
*var_8040 = *rax_725
*(var_8040 + 8) = rax_725[1]

if (*(var_8040 + 8) != 0)
    void* rax_732 = *(var_8040 + 8)
    *(rax_732 + 8) += 1

void* rax_739 = sub_140de1aa0(sub_140fc3970(sub_140fb44a0(sub_140e258e0(), 2), 2), &var_7898)
void* rax_741 = sub_140de1aa0(sub_140e258e0(), &var_78a8)
void var_5b58
void* rax_744 = sub_140de1c90(sub_140de1c90(sub_140dd5d30(&var_5b58), rax_741), rax_739)
void var_82d2
void* var_8308_33 = &var_82d2
void* var_6d80
void** rax_745
int128_t zmm1_51
rax_745, zmm1_51 = sub_140dd3710(&var_6d80, "SOverlay")
void* var_72f8
void** rax_746 = sub_140de49c0(rax_745, &var_72f8, rax_744, zmm1_51)
*var_8038 = *rax_746
*(var_8038 + 8) = rax_746[1]

if (*(var_8038 + 8) != 0)
    void* rax_753 = *(var_8038 + 8)
    *(rax_753 + 8) += 1

void* rax_759 = sub_140693860(sub_140698b50(sub_1406a4fe0()), var_8040)
void* rax_763 = sub_140693860(
    sub_140f12c60(sub_140eb9be0(sub_1406a4fe0(), &var_70c8), zx.o(0), 0x3f800000), var_8038)
void var_5d08
void* rax_766 = sub_1406938c0(sub_1406938c0(sub_14068d420(&var_5d08), rax_763), rax_759)
void var_82d1
void var_6d98
int64_t* rax_767
int128_t zmm1_53
rax_767, zmm1_53 = sub_140688620(&var_6d98, "SHorizontalBox", 
    "D:/Build/++UE4/Sync/Engine/Source/Runtime/AppFramework/Private/Widgets/Colors/SColorPicker.cpp", 
    0x11f, &var_82d1)
void* var_7308
void** rax_768 = sub_140696920(rax_767, &var_7308, rax_766, zmm1_53)
void* var_78b8 = *rax_768
void var_78b0
void* var_8030 = &var_78b0
*var_8030 = rax_768[1]

if (*var_8030 != 0)
    void* rax_774 = *var_8030
    *(rax_774 + 8) += 1

int32_t var_8254 = 0x3f800000
void var_70b0
sub_140f93bf0(&var_70b0, &var_8254)
void var_7358
__builtin_memcpy(&var_7358, &var_77b8, 0x10)
void* rax_779 = sub_140e99b50(sub_140fc33e0(1, 0), &var_7808)
void* rax_781 = sub_140e99b50(sub_140fc33e0(0, 0), &var_7818)
void var_42d0
void* rax_788 = sub_140de1c90(
    sub_140de1c90(
        sub_140fc3990(
            sub_140fc3450(
                sub_140fbc010(sub_140fbbfd0(sub_140f99ff0(&var_42d0), &var_7038), &var_7050), 
                &var_6a40), 
            &var_7068), 
        rax_781), 
    rax_779)
void var_82d0
void* var_6e70
void** rax_789
int128_t zmm1_54
rax_789, zmm1_54 = sub_140f96540(&var_6e70, "SUniformGridPanel", 
    "D:/Build/++UE4/Sync/Engine/Source/Runtime/AppFramework/Private/Widgets/Colors/SColorPicker.cpp", 
    0x25a, &var_82d0)
void* var_7318
void** rax_790 = sub_140f9ecd0(rax_789, &var_7318, rax_788, zmm1_54)
*var_8248 = *rax_790
*(var_8248 + 8) = rax_790[1]

if (*(var_8248 + 8) != 0)
    void* rax_797 = *(var_8248 + 8)
    *(rax_797 + 8) += 1

void var_6800
void var_1fa8
void* rax_808 = sub_140f685c0(
    sub_140f9ff20(
        sub_140fc1860(
            sub_140f97100(
                sub_140fb62c0(
                    sub_140f9ff40(sub_140f9fb40(sub_140f991b0(&var_1fa8), &var_65a0), &var_6480), 
                    var_82f4), 
                arg1, &var_7358), 
            &var_6a68), 
        &var_6800), 
    &var_7828)
void var_82cf
void* var_6db0
void** rax_809
int128_t zmm1_55
rax_809, zmm1_55 = sub_140f96280(&var_6db0, "SExpandableArea", 
    "D:/Build/++UE4/Sync/Engine/Source/Runtime/AppFramework/Private/Widgets/Colors/SColorPicker.cpp", 
    0x1d0, &var_82cf)
int64_t* var_7328
int64_t** rax_810 = sub_140f9d8f0(rax_809, &var_7328, rax_808, zmm1_55)
*var_8240 = *rax_810
*(var_8240 + 8) = rax_810[1]

if (*(var_8240 + 8) != 0)
    void* rax_817 = *(var_8240 + 8)
    *(rax_817 + 8) += 1

void* var_8308_36
var_8308_36.d = 0
void var_7d18
void* rax_825 = sub_140e99b50(
    sub_140fc17b0(&sub_140fc3330(1, 1, *sub_140b5e4f0(&var_7d18, 0))[5], zx.o(0), 0x41000000, 
        (zx.o(0)).d, var_8308_36.d), 
    &var_7848)
var_8308_36.d = 0
void var_7d14
void* rax_830 = sub_140e99b50(
    sub_140fc17b0(&sub_140fc3330(0, 1, *sub_140b5e4f0(&var_7d14, 0))[5], zx.o(0), 0x41000000, 
        0x41a00000, var_8308_36.d), 
    &var_7878)
void var_7d10
void* rax_837 = sub_140e99b50(
    sub_140fc3960(sub_140fb4480(&sub_140fc3330(1, 0, *sub_140b5e4f0(&var_7d10, 0))[4], 3) + 0x20, 
        2), 
    &var_7888)
var_8308_36.d = 0x3f800000
void var_7d0c
void* rax_842 = sub_140e99b50(
    sub_140fc17b0(&sub_140fc3330(0, 0, *sub_140b5e4f0(&var_7d0c, 0))[5], zx.o(0), 0x3f800000, 
        0x41a00000, var_8308_36.d), 
    &var_78b8)
void var_4a78
void* rax_848 = sub_140de1c90(
    sub_140de1c90(
        sub_140de1c90(
            sub_140de1c90(sub_140fab540(sub_140f99760(&var_4a78), 0, &var_70b0), rax_842), 
            rax_837), 
        rax_830), 
    rax_825)
void var_82ce
void var_6dc8
int64_t* rax_849
int128_t zmm1_59
rax_849, zmm1_59 = sub_140f96380(&var_6dc8, "SGridPanel", 
    "D:/Build/++UE4/Sync/Engine/Source/Runtime/AppFramework/Private/Widgets/Colors/SColorPicker.cpp", 
    0x119, &var_82ce)
int64_t* var_7338
int64_t** rax_850 = sub_140f9de50(rax_849, &var_7338, rax_848, zmm1_59)
*var_8238 = *rax_850
*(var_8238 + 8) = rax_850[1]

if (*(var_8238 + 8) != 0)
    void* rax_857 = *(var_8238 + 8)
    *(rax_857 + 8) += 1

void* var_8308_37
var_8308_37.d = 0
void* rax_866 = sub_140693860(
    sub_14069cf40(sub_140fc3980(sub_140fb44b0(sub_140698b50(sub_1406a4fe0()), 3), 2), zx.o(0), 
        0x41400000, (zx.o(0)).d, var_8308_37.d), 
    var_8248)
var_8308_37.d = 0
void* rax_870 = sub_140693860(
    sub_14069cf40(sub_140698b50(sub_1406a4fe0()), zx.o(0), 0x40800000, (zx.o(0)).d, var_8308_37.d), 
    var_8240)
void* rax_873 = sub_140693860(sub_140698b50(sub_1406a4fe0()), var_8238)
void var_5eb8
void* rax_877 =
    sub_1406938c0(sub_1406938c0(sub_1406938c0(sub_14068d420(&var_5eb8), rax_873), rax_870), rax_866)
void var_82cd
void var_6de0
int64_t* rax_878
int128_t zmm1_62
rax_878, zmm1_62 = sub_140688860(&var_6de0, "SVerticalBox", 
    "D:/Build/++UE4/Sync/Engine/Source/Runtime/AppFramework/Private/Widgets/Colors/SColorPicker.cpp", 
    0x114, &var_82cd)
void* var_7348
void** rax_879 = sub_140696920(rax_878, &var_7348, rax_877, zmm1_62)
void* var_78c8 = *rax_879
void var_78c0
void* var_8230 = &var_78c0
*var_8230 = rax_879[1]

if (*var_8230 != 0)
    void* rax_885 = *var_8230
    *(rax_885 + 8) += 1

sub_140de1b90(arg1 + 0x2b8, &var_78c8)
sub_140669d70(&var_78c8)
sub_140669d70(&var_7348)
sub_140669d70(&var_6de0)
sub_140f9b200(&var_5eb8)
sub_140f9a690(&var_7338)
Concurrency::task<uint8_t>::~task<uint8_t>(&var_6dc8)
sub_140f9ac60(&var_4a78)
sub_140f9a690(&var_7328)
Concurrency::task<uint8_t>::~task<uint8_t>(&var_6db0)
sub_140f9aaf0(&var_1fa8)
sub_140f9a690(&var_7318)
Concurrency::task<uint8_t>::~task<uint8_t>(&var_6e70)
sub_140f9b190(&var_42d0)
sub_14068f990(&var_70b0)
sub_140669d70(&var_78b8)
sub_140669d70(&var_7308)
sub_140669d70(&var_6d98)
sub_140f9acc0(&var_5d08)
sub_140597060(&var_72f8)
Concurrency::task_completion_event<uint8_t>::~task_completion_event<uint8_t>(&var_6d80)
sub_140f9acf0(&var_5b58)
sub_140669d70(&var_72e8)
sub_140669d70(&var_6d68)
sub_14068fed0(&var_3458)
sub_14068f990(&var_70c8)
sub_140669d70(&var_78a8)
sub_140f9a690(&var_72d8)
Concurrency::task<uint8_t>::~task<uint8_t>(&var_6d50)
sub_140f9b0f0(&var_3eb0)
sub_1406601b0(&var_6690)
sub_1405970a0(&var_6d38)
sub_140669d70(&var_7898)
sub_140669d70(&var_72c8)
sub_140669d70(&var_6d20)
sub_1406913d0(&var_1be8)
sub_1406601b0(&var_6660)
sub_1405970a0(&var_6d08)
sub_14068f9f0(&var_6f50)
sub_14068fa50(&var_69a0)
sub_140669d70(&var_7888)
sub_140597060(&var_72b8)
Concurrency::task_completion_event<uint8_t>::~task_completion_event<uint8_t>(&var_6cf0)
sub_140e978a0(&var_2dc8)
sub_140669d70(&var_72a8)
sub_140669d70(&var_6cd8)
sub_1406913d0(&var_17a0)
sub_1406601b0(&var_6630)
sub_1405970a0(&var_6cc0)
sub_1406601b0(&var_6600)
sub_1405970a0(&var_6ca8)
sub_140669d70(&var_7878)
sub_140669d70(&var_7298)
sub_140669d70(&var_6c90)
sub_14068fed0(&var_3110)
sub_140597060(&var_7288)
Concurrency::task_completion_event<uint8_t>::~task_completion_event<uint8_t>(&var_6c78)
sub_140f9acf0(&var_59a8)
sub_14068f9f0(&var_6f70)
sub_14068fa50(&var_6978)
sub_140669d70(&var_7868)
sub_140669d70(&var_7278)
sub_140669d70(&var_6c60)
sub_140f9acc0(&var_57f8)
sub_140f9a690(&var_7268)
Concurrency::task<uint8_t>::~task<uint8_t>(&var_6c48)
sub_140f9a9f0(&var_46c0)
sub_14068f990(&var_70e0)
sub_140669d70(&var_7858)
sub_140669d70(&var_7258)
sub_140669d70(&var_6c30)
sub_140690290(&var_3c70)
sub_140f9a690(&var_7248)
Concurrency::task<uint8_t>::~task<uint8_t>(&var_6c18)
sub_140f9a9f0(&var_44c8)
sub_14068f990(&var_70f8)
sub_14068f990(&var_7110)
sub_140669d70(&var_7848)
sub_140669d70(&var_7238)
sub_140669d70(&var_6c00)
sub_140f9b200(&var_5648)
sub_140669d70(&var_7228)
sub_140669d70(&var_6be8)
sub_140690290(&var_39d0)
sub_140669d70(&var_7218)
sub_140669d70(&var_6bd0)
sub_140f9acc0(&var_5498)
sub_140669d70(&var_7208)
sub_140669d70(&var_6bb8)
sub_1406905f0(&var_2a58)
sub_140f9a690(&var_71f8)
Concurrency::task<uint8_t>::~task<uint8_t>(&var_6ba0)
sub_140f9abf0(&var_48a8)
sub_14068f990(&var_7128)
sub_14068f990(&var_6fa8)
sub_140669d70(&var_7838)
sub_140597060(&var_71e8)
Concurrency::task_completion_event<uint8_t>::~task_completion_event<uint8_t>(&var_6ee8)
sub_140e536f0(&var_40c8)
sub_14068f9f0(&var_6f90)
sub_1406601b0(&var_65d0)
sub_1405970a0(&var_6b88)
sub_140f9a5d0(&var_6fc0)
sub_1406601b0(&var_65a0)
sub_1405970a0(&var_6b70)
sub_14068fab0(&var_6480)
sub_14068fa50(&var_6a68)
sub_140669d70(&var_7828)
sub_140669d70(&var_71d8)
sub_140669d70(&var_6b58)
sub_140f9acc0(&var_52e8)
sub_140669d70(&var_71c8)
sub_140669d70(&var_6b40)
sub_140f9b200(&var_5138)
sub_140669d70(&var_71b8)
sub_140669d70(&var_6b28)
sub_140f9b200(&var_4f88)
sub_140669d70(&var_71a8)
sub_140669d70(&var_6b10)
sub_140f9acc0(&var_4dd8)
sub_140669d70(&var_7198)
sub_140669d70(&var_6af8)
sub_1406913d0(&var_1358)
sub_140597060(&var_7188)
Concurrency::task_completion_event<uint8_t>::~task_completion_event<uint8_t>(&var_6ae0)
sub_140e97d60(&var_ac8)
sub_140669d70(&var_7178)
sub_140669d70(&var_6ac8)
sub_140f9acc0(&var_4c28)
sub_140669d70(&var_7168)
sub_140669d70(&var_6ab0)
sub_1406913d0(&var_f10)
sub_140597060(&var_7158)
Concurrency::task_completion_event<uint8_t>::~task_completion_event<uint8_t>(&var_6a98)
sub_140e97d60(&var_578)
sub_1406601b0(&var_6570)
sub_1405970a0(&var_6a80)
sub_1406601b0(&var_6540)
sub_1405970a0(&var_6f30)
sub_14068f990(&var_6fd8)
sub_14068f990(&var_6ff0)
sub_1406601b0(&var_6510)
sub_1405970a0(&var_6f18)
sub_1406601b0(&var_64e0)
sub_1405970a0(&var_6f00)
sub_14068f990(&var_7008)
sub_14068f990(&var_7020)
sub_14068f990(&var_7038)
sub_14068f990(&var_7050)
sub_14068fa50(&var_6a40)
sub_140f9a5d0(&var_7068)
sub_140669d70(&var_7818)
sub_140669d70(&var_7148)
sub_140669d70(&var_6ed0)
sub_1406905f0(&var_26c8)
sub_14068fa50(&var_6a18)
sub_1406601b0(&var_64b0)
sub_1405970a0(&var_6eb8)
sub_140669d70(&var_7808)
sub_140669d70(&var_7138)
sub_140669d70(&var_6ea0)
sub_1406905f0(&var_2338)
sub_14068fa50(&var_69f0)
sub_1406601b0(&var_6720)
sub_1405970a0(&var_6e88)
sub_140fb6180(arg1)
sub_140597060(&var_82c8)
int64_t result = sub_140691aa0(&var_6428)
__security_check_cookie(rax_1 ^ &var_8328)
return result
