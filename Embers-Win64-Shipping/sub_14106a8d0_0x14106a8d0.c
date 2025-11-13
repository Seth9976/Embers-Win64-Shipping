// 函数: sub_14106a8d0
// 地址: 0x14106a8d0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

*arg1 = &data_142f04540
arg1[1].d = 0
InitializeCriticalSection(&arg1[3])
SetCriticalSectionSpinCount(&arg1[3], 0xfa0)
arg1[8].b = 0
arg1[9] = 0
InitializeCriticalSection(&arg1[0xa])
SetCriticalSectionSpinCount(&arg1[0xa], 0xfa0)
__builtin_memset(&arg1[0xf], 0, 0x24)
j_sub_140b3db50()
void arg_8
int64_t rbx = *sub_140b58170(&arg_8, "ImageWrapper", 1)
j_sub_140b3db50()
j_sub_140b407e0(&data_143de7d78, rbx)
arg1[2] = sub_140a491d0(0)
int64_t* rsi = data_143db18d0

if (rsi == 0)
    sub_140a53c40()
    rsi = data_143db18d0

void*** var_28 = nullptr
void*** rax_2 = sub_140a84c80(0, 0x30, 0)
var_28 = rax_2
int32_t var_20 = 3

if (rax_2 != 0)
    rax_2[1] = arg1
    *rax_2 = &data_142d3fe58
    rax_2[2] = sub_14106d730
    rax_2[4] = sub_140a387b0()
    *rax_2 = &data_142d3feb0

void arg_10
arg1[0x12] = *(*(*rsi + 0x58))(rsi, &arg_10, &var_28)
void*** rax_7

if (var_20 == 0)
    rax_7 = var_28
label_14106aa47:
    
    if (rax_7 != 0)
        sub_140a74f90(rax_7)
else
    void*** rcx_7 = var_28
    
    if (rcx_7 != 0)
        (*rcx_7)[7](rcx_7, 0)
        rax_7 = var_28
        
        if (rax_7 != 0)
            rax_7 = sub_140a84c80(rax_7, 0, 0)
            var_28 = rax_7
        
        int32_t var_20_1 = 0
        goto label_14106aa47
sub_14106d730(arg1)
return arg1
