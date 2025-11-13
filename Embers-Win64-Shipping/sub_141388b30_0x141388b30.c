// 函数: sub_141388b30
// 地址: 0x141388b30
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int128_t var_98 = data_142d3f670
sub_142409910(arg2, 0x41f00000, 0x42280000, Visualize ShadingModels", sub_1423de050(), &var_98, 
    &data_14399f5e0)
uint32_t r15 = zx.d(*(*arg1 + 0x4980))
uint32_t arg_8 = r15
sub_140a2e390(&var_98, u"View.ShadingModelMaskInView = 0x%x", zx.q(r15))
int16_t* const r13 = &data_142d40450
int16_t* const rbx_1 = &data_142d40450
int16_t* rsi = var_98.q

if (var_98:8.d != 0)
    rbx_1 = rsi

uint128_t var_a8 = data_142f2cb40
sub_142409910(arg2, 0x41f00000, 0x430e0000, rbx_1, sub_1423de050(), &var_a8, &data_14399f5e0)
void* rax_3
int512_t zmm6
rax_3, zmm6 = sub_1424a61b0()
zmm6.o = 0x43210000
int128_t zmm7 = 0x42700000
int32_t i = 0
int64_t r12 = 0
void* arg_18 = rax_3
int32_t rdi_1 = 1
uint128_t var_78
int64_t r8_3
int128_t zmm6_2

do
    int128_t zmm6_1 = sub_140bdef30(rax_3, &var_98, r12)
    sub_140a2e390(&var_a8, u"%d.  %s", zx.q(i))
    
    if (rsi != 0)
        sub_140a74f90(rsi)
    
    rsi = var_a8.q
    int32_t rax_4 = var_a8:8.d
    var_a8.q = 0
    var_a8:8.q = 0
    uint128_t* r15_1
    
    if ((r15 & rdi_1) == 0)
        r15_1 = &var_78
        var_78 = data_142d3f660
    else
        uint128_t var_88
        r15_1 = &var_88
        var_88 = data_142d3f670
    
    int16_t* rbx_2 = &data_142d40450
    
    if (rax_4 != 0)
        rbx_2 = rsi
    
    r8_3, zmm6_2, zmm7 =
        sub_142409910(arg2, zmm7, zmm6_1, rbx_2, sub_1423de050(), r15_1, &data_14399f5e0)
    int64_t rcx_7 = var_98.q
    zmm6_2.d = zmm6_2.d f+ 20f
    
    if (rcx_7 != 0)
        r8_3 = sub_140a74f90(rcx_7)
    
    r15 = arg_8
    i += 1
    rax_3 = arg_18
    r12 += 1
    rdi_1 = rol.d(rdi_1, 1)
while (i u< 0xc)

sub_140a2e390(&var_98, u"(On CPU, based on what gets rendered)", r8_3)

if (rsi != 0)
    sub_140a74f90(rsi)

int16_t* rbx_3 = var_98.q

if (var_98:8.d != 0)
    r13 = rbx_3

var_78 = data_142f2cb40
uint64_t result =
    sub_142409910(arg2, 0x41f00000, zmm6_2, r13, sub_1423de050(), &var_78, &data_14399f5e0)

if (rbx_3 == 0)
    return result

return sub_140a74f90(rbx_3)
