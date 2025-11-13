// 函数: sub_1406cb940
// 地址: 0x1406cb940
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void* const var_58 = u"ffmpeg.exe"
int64_t var_48
int16_t* var_28
int64_t var_18
sub_1406c9080(&var_28, sub_140b11a30(&var_48, sub_140b251a0(&var_18)), u"Binaries")
int64_t rcx_3 = var_48

if (rcx_3 != 0)
    sub_140a74f90(rcx_3)

int64_t rcx_4 = var_18

if (rcx_4 != 0)
    sub_140a74f90(rcx_4)

int64_t var_38
sub_1406c96b0(&var_38, arg1, &(*U"RGBXYZF10|")[9])
int16_t* const r8 = &data_142d40450
int16_t* const rax_2

if (arg2[1].d == 0)
    rax_2 = &data_142d40450
else
    rax_2 = *arg2

int32_t var_20

if (var_20 != 0)
    r8 = var_28

int16_t* const var_58_1 = rax_2
sub_140a2e390(&var_48, 
    "%s" -i "concat:%s" -vf scale=1920:1080 -c:v libx264 -preset slow -tune film -crf 18 -p", r8)
int32_t result = &var_48
int64_t rcx_8

if (arg3 == &var_48)
    rcx_8 = var_48
else
    int64_t rcx_7 = *arg3
    
    if (rcx_7 != 0)
        sub_140a74f90(rcx_7)
    
    *arg3 = var_48
    rcx_8 = 0
    var_48 = 0
    int32_t var_40
    arg3[1].d = var_40
    int32_t result_1
    result = result_1
    *(arg3 + 0xc) = result
    var_40.q = 0

if (rcx_8 != 0)
    result = sub_140a74f90(rcx_8)

int64_t rcx_9 = var_38

if (rcx_9 != 0)
    result = sub_140a74f90(rcx_9)

int16_t* rcx_10 = var_28

if (rcx_10 == 0)
    return result

return sub_140a74f90(rcx_10)
