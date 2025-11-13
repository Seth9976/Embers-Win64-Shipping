// 函数: sub_1406cba90
// 地址: 0x1406cba90
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int16_t* var_38
int64_t var_28
int64_t var_18
sub_1406c9080(&var_38, sub_140b11a30(&var_28, sub_140b251a0(&var_18)), u"Binaries")
int64_t rcx_3 = var_28

if (rcx_3 != 0)
    sub_140a74f90(rcx_3)

int64_t rcx_4 = var_18

if (rcx_4 != 0)
    sub_140a74f90(rcx_4)

int16_t* var_48
sub_1406c96b0(&var_48, arg1, &(*U"RGBXYZF10|")[9])
int16_t* const rbx_1 = &data_142d40450

if (arg2[1].d != 0)
    *arg2

int16_t* const r8 = &data_142d40450
int32_t var_40

if (var_40 != 0)
    r8 = var_48

int16_t* var_58
sub_140a2e390(&var_58, 
    -i "concat:%s" -vf scale=1920:1080 -c:v libx264 -preset ultrafast -tune film -crf 20 "%s.mp4"", r8)
int16_t* const r8_1 = &data_142d40450
int32_t var_50

if (var_50 != 0)
    r8_1 = var_58

int32_t var_30

if (var_30 != 0)
    rbx_1 = var_38

void arg_10
int64_t* result = sub_140b65ff0(&arg_10, rbx_1, r8_1, 1, 0, 0, nullptr, 0, nullptr, 0, 0)
int16_t* rcx_8 = var_58

if (rcx_8 != 0)
    result = sub_140a74f90(rcx_8)

int16_t* rcx_9 = var_48

if (rcx_9 != 0)
    result = sub_140a74f90(rcx_9)

int16_t* rcx_10 = var_38

if (rcx_10 == 0)
    return result

return sub_140a74f90(rcx_10)
