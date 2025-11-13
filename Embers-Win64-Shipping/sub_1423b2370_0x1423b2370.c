// 函数: sub_1423b2370
// 地址: 0x1423b2370
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void* arg_18 = arg1
sub_14239f270(&arg_18)
int64_t var_58 = 0
void arg_10
sub_1423b2890(&arg_10, sub_1423b0ea0(0), &data_143de5780, nullptr)
*(arg1 + 9) = arg2
wchar16* rax_1
int16_t** r9
rax_1, r9 = sub_1423b0ea0(arg2)
int64_t var_58_1 = 0
r9.b = 1
sub_1423b2890(arg1 + 8, rax_1, &data_143de5780, r9)
sub_1423aaa10()
int64_t* rdi = data_143db18d0
int64_t (* var_38)() = j_sub_1423aaa10
int32_t var_30 = 0

if (rdi == 0)
    sub_140a53c40()
    rdi = data_143db18d0

void*** var_48 = nullptr
void*** rax_2 = sub_140a84c80(0, 0x30, 0)
var_48 = rax_2
int32_t var_40 = 3

if (rax_2 != 0)
    rax_2[1] = arg1
    *rax_2 = &data_142e22de8
    *(rax_2 + 0x10) = var_38.o
    rax_2[5] = sub_140a387b0()
    *rax_2 = &data_142e22e40

(*(*rdi + 0x58))(rdi, &arg_18, &var_48)
void*** rax_6

if (var_40 == 0)
    rax_6 = var_48
label_1423b24b4:
    
    if (rax_6 != 0)
        sub_140a74f90(rax_6)
else
    void*** rcx_6 = var_48
    
    if (rcx_6 != 0)
        (*rcx_6)[7](rcx_6, 0)
        rax_6 = var_48
        
        if (rax_6 != 0)
            rax_6 = sub_140a84c80(rax_6, 0, 0)
            var_48 = rax_6
        
        int32_t var_40_1 = 0
        goto label_1423b24b4
void* rcx_9 = data_143ddb400
int32_t arg_8 = 7
sub_140af3c10(rcx_9, u"TextureStreaming", u"MinTextureResidentMipCount", &arg_8, &data_143de5780)
return sub_1423c9c00(arg_8)
