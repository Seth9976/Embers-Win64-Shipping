// 函数: sub_140fb9400
// 地址: 0x140fb9400
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void var_b58
int64_t rax_1 = __security_cookie ^ &var_b58
int32_t var_a38 = 0
void var_ae8
sub_140a96170(&var_ae8)
void** result

if (arg3 u> 6)
    *arg2 = data_143e244b0
    arg2[1] = data_143e244b8
    
    if (arg2[1] != 0)
        void* rax_19 = arg2[1]
        *(rax_19 + 8) += 1
    
    sub_1405970a0(&var_ae8)
    result = arg2
else
    switch (arg3)
        case 0
            void var_8b0
            sub_140f9bef0(&var_ae8, _vfprintf_p_l(&var_8b0, &data_142daf3e8, u"ColorPicker"))
            sub_1405970a0(&var_8b0)
        case 1
            void var_898
            sub_140f9bef0(&var_ae8, _vfprintf_p_l(&var_898, u"Green", u"ColorPicker"))
            sub_1405970a0(&var_898)
        case 2
            void var_880
            sub_140f9bef0(&var_ae8, _vfprintf_p_l(&var_880, u"Blue", u"ColorPicker"))
            sub_1405970a0(&var_880)
        case 3
            void var_868
            sub_140f9bef0(&var_ae8, _vfprintf_p_l(&var_868, u"Alpha", u"ColorPicker"))
            sub_1405970a0(&var_868)
        case 4
            void var_850
            sub_140f9bef0(&var_ae8, _vfprintf_p_l(&var_850, &data_142ef0158, u"ColorPicker"))
            sub_1405970a0(&var_850)
        case 5
            void var_838
            sub_140f9bef0(&var_ae8, _vfprintf_p_l(&var_838, u"Saturation", u"ColorPicker"))
            sub_1405970a0(&var_838)
        case 6
            void var_820
            sub_140f9bef0(&var_ae8, _vfprintf_p_l(&var_820, u"Value", u"ColorPicker"))
            sub_1405970a0(&var_820)
    
    void (* var_a10)(void* arg1, uint32_t arg2[0x4] @ zmm1, int32_t arg3) = sub_140fb4d50
    int32_t var_a08_1 = 0
    void* const var_a00 = &data_140fb5430
    int32_t var_9f8_1 = 0
    void (* var_9f0)(void* arg1) = sub_140fb5310
    int32_t var_9e8_1 = 0
    int512_t (* var_9e0)(void* arg1, int32_t arg2) = sub_140fb4cd0
    int32_t var_9d8_1 = 0
    void var_8e8
    void* var_a88_1 = &var_8e8
    void var_770
    sub_140f93cb0(&var_770, &data_143dbb1e0)
    char var_b28 = 0
    void var_8c8
    sub_140f93c70(&var_8c8, &var_b28)
    void var_968
    __builtin_memcpy(&var_968, &var_a10, 0x10)
    void var_978
    __builtin_memcpy(&var_978, &var_a00, 0x10)
    void var_988
    __builtin_memcpy(&var_988, &var_9f0, 0x10)
    void var_998
    __builtin_memcpy(&var_998, &var_9e0, 0x10)
    int64_t* rax_23 = sub_140b58170(var_a88_1, "ColorPicker.Slider", 1)
    int64_t rax_25 = sub_140f95ca0(sub_140fb2590(), *rax_23, nullptr)
    void var_320
    void* rax_33 = sub_140f977c0(
        sub_140f976a0(
            sub_140f982e0(
                sub_140fc3490(
                    sub_140fc32e0(
                        sub_140fc17a0(sub_140fb6280(sub_140f1fff0(&var_320), &var_8c8), 1), 
                        &var_770), 
                    rax_25), 
                arg1, &var_998, arg3), 
            arg1, &var_988), 
        arg1, &var_978)
    void* rax_34 = sub_140f97bb0(rax_33, arg1, &var_968, arg3)
    void var_b27
    void var_7d8
    int64_t* rax_35
    int128_t zmm1_1
    rax_35, zmm1_1 = sub_140f1c9d0(&var_7d8, "SSlider", 
        "D:/Build/++UE4/Sync/Engine/Source/Runtime/AppFramework/Private/Widgets/Colors/SColorPicker.cpp", 
        0x379, &var_b27)
    void* var_8f8
    void** rax_36 = sub_140f287b0(rax_35, &var_8f8, rax_34, zmm1_1)
    void* var_a20 = *rax_36
    void var_a18
    void* var_b10_1 = &var_a18
    *var_b10_1 = rax_36[1]
    
    if (*var_b10_1 != 0)
        void* rax_42 = *var_b10_1
        *(rax_42 + 8) += 1
    
    uint64_t (* var_9d0)() = sub_140fb4a50
    int32_t var_9c8_1 = 0
    void var_7c0
    void* var_b00_1 = &var_7c0
    int32_t var_b20 = 0
    void var_8e0
    sub_140f93bf0(&var_8e0, &var_b20)
    int32_t* (* var_9c0)(void* arg1, int32_t* arg2, int32_t arg3) = sub_140fb4b70
    int32_t var_9b8_1 = 0
    int32_t* (* var_9b0)(void* arg1, int32_t* arg2, int32_t arg3) = sub_140fb4a60
    int32_t var_9a8 = 0
    void var_928
    __builtin_memcpy(&var_928, &var_9d0, 0x10)
    void var_938
    __builtin_memcpy(&var_938, &var_9c0, 0x10)
    void var_948
    __builtin_memcpy(&var_948, &var_9b0, 0x10)
    void var_958
    int64_t* rax_48 = sub_140f2cda0(arg1 + 8, &var_958)
    *var_b00_1 = *rax_48
    *(var_b00_1 + 8) = rax_48[1]
    
    if (*(var_b00_1 + 8) != 0)
        void* rax_55 = *(var_b00_1 + 8)
        *(rax_55 + 8) += 1
    
    sub_140597060(&var_958)
    void var_558
    void* rax_63 = sub_140f980d0(
        sub_140fc1760(
            sub_140f97c40(sub_140f95bd0(sub_140f998f0(&var_558), arg1, &var_948, arg3), arg1, 
                &var_938, arg3), 
            &var_8e0), 
        var_b00_1, &var_928)
    void var_b26
    void* var_7f0
    void** rax_64
    int128_t zmm1_2
    rax_64, zmm1_2 = sub_140f96440(&var_7f0, "SSimpleGradient", 
        "D:/Build/++UE4/Sync/Engine/Source/Runtime/AppFramework/Private/Widgets/Colors/SColorPicker.cpp", 
        0x370, &var_b26)
    void* var_908
    void** rax_65 = sub_140f9e100(rax_64, &var_908, rax_63, zmm1_2)
    void* var_a30 = *rax_65
    void var_a28
    void* var_af8_1 = &var_a28
    *var_af8_1 = rax_65[1]
    
    if (*var_af8_1 != 0)
        void* rax_71 = *var_af8_1
        *(rax_71 + 8) += 1
    
    void var_730
    void* var_a60_1 = &var_730
    void var_7a0
    sub_140d42100(&var_7a0, &var_ae8)
    void* rax_76 = sub_140de1aa0(sub_140e258e0(), &var_a20)
    void var_7b0
    int128_t* rax_78 = sub_140f93c90(var_a60_1, sub_140dd8750(&var_7b0, 0x40800000, (zx.o(0)).d))
    void* rax_81 = sub_140de1aa0(sub_140f12c10(sub_140e258e0(), rax_78), &var_a30)
    void var_708
    void* rax_85 = sub_140de1c90(
        sub_140de1c90(sub_140fc34f0(sub_140dd5d30(&var_708), &var_7a0), rax_81), rax_76)
    void var_b25
    void* var_b38_3 = &var_b25
    void* var_808
    void** rax_86
    int128_t zmm1_4
    rax_86, zmm1_4 = sub_140dd3710(&var_808, "SOverlay")
    void* var_918
    void** rax_87 = sub_140de49c0(rax_86, &var_918, rax_85, zmm1_4)
    *arg2 = *rax_87
    arg2[1] = rax_87[1]
    
    if (arg2[1] != 0)
        void* rax_94 = arg2[1]
        *(rax_94 + 8) += 1
    
    sub_140597060(&var_918)
    sub_140597060(&var_808)
    void var_568
    pdb_internal::Array<struct FileLCRec* __ptr64>::~Array<struct FileLCRec* __ptr64>(&var_568)
    sub_140ddea30(&var_708)
    sub_1406601b0(&var_7a0)
    sub_140669d70(&var_a30)
    sub_140f9a690(&var_908)
    sub_140f9a690(&var_7f0)
    sub_140f9ad20(&var_558)
    sub_140f9a5d0(&var_8e0)
    sub_140669d70(&var_a20)
    sub_140f9a690(&var_8f8)
    sub_140f9a690(&var_7d8)
    sub_140f9ada0(&var_320)
    sub_14068f990(&var_8c8)
    sub_14068fab0(&var_770)
    sub_1405970a0(&var_ae8)
    result = arg2

__security_check_cookie(rax_1 ^ &var_b58)
return result
