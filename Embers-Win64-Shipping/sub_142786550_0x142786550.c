// 函数: sub_142786550
// 地址: 0x142786550
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

sub_141db5b80(arg1)
*arg1 = &data_1434ad720
arg1[0x45].d = 0xffffffff
arg1[0x46] = 0
arg1[0x47] = 0
arg1[0x48] = 0x1000000
arg1[0x49] = 0
arg1[0x4a].d = 0
*(arg1 + 0x254) = 0
*(arg1 + 0x256) = 0
*(arg1 + 0x25c) = 0x1000000
arg1[0x4c].d = 0x40c00000
*(arg1 + 0x264) = 0x3f800000
arg1[0x4d].b = 1
*(arg1 + 0x26c) = 0x3f800000
arg1[0x4e].d = 0x41200000
*(arg1 + 0x274) = 0x41a00000
arg1[0x4f].d = 0x40200000
*(arg1 + 0x27c) = data_143f88170
arg1[0x50].d = 0x3f800000
*(arg1 + 0x284) = data_143f88174
arg1[0x51].d = data_143f88178
*(arg1 + 0x28c) = data_143f8817c
arg1[0x52].d = data_143f88180
*(arg1 + 0x294) = data_143f88184
arg1[0x53].d = data_143f88188
*(arg1 + 0x29c) = 0x3f800000
arg1[0x54].d = data_143f8818c
*(arg1 + 0x2a4) = data_143f88190
arg1[0x55].d = 0x3f800000
*(arg1 + 0x2ac) = data_143f88194
arg1[0x56].d = 0x3f800000
*(arg1 + 0x2b4) = data_143f88198
arg1[0x57].d = data_143f8819c
*(arg1 + 0x2bc) = data_143f881a0
arg1[0x58].d = data_143f881a4
*(arg1 + 0x2c4) = data_143f881a8
arg1[0x59].d = data_143f881ac
*(arg1 + 0x2cc) = data_143f881b0
arg1[0x5a].d = data_143f881b4
__builtin_memset(&arg1[0x5b], 0, 0x28)
*(arg1 + 0x32) |= 3
arg1[0x60].b = 0
sub_141dd7200(arg1, 1)
int64_t* rsi = data_143db18d0

if (rsi == 0)
    sub_140a53c40()
    rsi = data_143db18d0

void*** var_28 = nullptr
void*** rax_18 = sub_140a84c80(0, 0x30, 0)
var_28 = rax_18
int32_t var_20 = 3

if (rax_18 != 0)
    *rax_18 = &data_142d57800
    sub_140d3a3a0(&rax_18[1], arg1)
    rax_18[2] = sub_142793a20
    rax_18[4] = sub_140a387b0()
    *rax_18 = &data_142d57858

void arg_8
arg1[0x5c] = *(*(*rsi + 0x58))(rsi, &arg_8, &var_28)
void*** rax_23

if (var_20 == 0)
    rax_23 = var_28
label_142786811:
    
    if (rax_23 != 0)
        sub_140a74f90(rax_23)
else
    void*** rcx_4 = var_28
    
    if (rcx_4 != 0)
        (*rcx_4)[7](rcx_4, 0)
        rax_23 = var_28
        
        if (rax_23 != 0)
            rax_23 = sub_140a84c80(rax_23, 0, 0)
            var_28 = rax_23
        
        int32_t var_20_1 = 0
        goto label_142786811
uint64_t rbx_1 = *sub_140b58260(&arg_8, u"SceneComponent", 1)
int64_t* rax_25 = sub_1425881f0()
void* rax_26 = sub_140d1dc20(arg2, arg1, rbx_1, rax_25, rax_25, 1, 0)
arg1[0x26] = rax_26
*(rax_26 + 0x14f) = 0
return arg1
