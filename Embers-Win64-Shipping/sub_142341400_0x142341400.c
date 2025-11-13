// 函数: sub_142341400
// 地址: 0x142341400
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int32_t var_44
int32_t var_44_1 = var_44 & 0xffffff00
int64_t var_f0 = 0
int64_t var_e8 = 0
char var_d8 = 0
int64_t var_d0
__builtin_memset(&var_d0, 0, 0x88)
char var_f8 = 1
int32_t var_48 = 0x20702
sub_1405979f0(arg1 + 0x10, &var_f8)
sub_140597700(&var_f8)
sub_140d96150(arg1 + 0x120, arg3)
*(arg1 + 0x234) -= 1
int32_t rbx = *(arg1 + 0x234)
sub_142348be0(arg1 - 0xd0, arg3, arg4)
int32_t rax = *(arg1 + 0x118)
int32_t rcx_4 = *(arg1 + 0x11c)

if (rbx s<= 0)
    *(arg1 + 0x118) = -1

int64_t* r13 = *(arg1 - 0x98)

if (r13 != 0)
    int32_t rbx_1 = *(arg4 + 0x54)
    int32_t rdi_1 = *(arg4 + 0x50)
    int32_t rsi_1 = *(arg4 + 0xc)
    uint128_t zmm0_1 = _mm_cvtepi32_ps(zx.o(rax))
    uint128_t zmm1_1 = _mm_cvtepi32_ps(zx.o(rcx_4))
    int32_t arg_8 = zmm0_1.d
    int32_t arg_c = zmm1_1.d
    void arg_10
    int64_t* rax_1
    int512_t zmm0_2
    rax_1, zmm0_2 = sub_140b21590(&arg_10)
    void* rdx_3 = arg1 - 0xc8
    zmm0_2.o = zx.o(0)
    
    if (arg1 == 0xd0)
        rdx_3 = nullptr
    
    if ((*(*r13 + 0x60))(*(arg1 - 0x98), rdx_3, zx.q(rsi_1), zx.q(rdi_1), 5, &arg_8, 0, *rax_1, 
            rbx_1) == 0)
        int32_t var_44_2 = var_44_1 & 0xffffff00
        zmm0_2.o = zx.o(0)
        var_f8 = 0
        int64_t var_f0_1 = 0
        int64_t var_e8_1 = 0
        char var_d8_1 = 0
        int64_t var_d0_1
        __builtin_memset(&var_d0_1, 0, 0x88)
        int32_t var_48_1 = 0x20702
        sub_1405979f0(arg1 + 0x10, &var_f8)
        sub_140597700(&var_f8)
    
    if ((*(**(arg1 - 0x98) + 0x180))(zmm0_2) == 3)
        sub_140f896b0(arg1 + 0x10)

sub_140596b00(arg2, arg1 + 0x10)
return arg2
