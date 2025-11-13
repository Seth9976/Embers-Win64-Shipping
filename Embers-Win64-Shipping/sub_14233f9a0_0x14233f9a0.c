// 函数: sub_14233f9a0
// 地址: 0x14233f9a0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int32_t var_34
int32_t var_34_1 = var_34 & 0xffffff00
int512_t zmm0
zmm0.o = zx.o(0)
int64_t var_e0 = 0
int64_t var_d8 = 0
char var_c8 = 0
int64_t var_c0
__builtin_memset(&var_c0, 0, 0x88)
char var_e8 = 1
int32_t var_38 = 0x20702
sub_1405979f0(arg1 + 0x10, &var_e8)
sub_140597700(&var_e8)
int64_t* rcx_2 = *(arg1 - 0x98)

if (rcx_2 != 0)
    void* rdx_1 = arg1 - 0xc8
    
    if (arg1 == 0xd0)
        rdx_1 = nullptr
    
    if ((*(*rcx_2 + 0x70))(zmm0, rdx_1, zx.q(*(arg4 + 0xc)), arg4 + 0x18, arg4 + 0x24, arg4 + 0x30, 
            arg4 + 0x3c) == 0)
        int32_t var_34_2 = var_34_1 & 0xffffff00
        var_e8 = 0
        int64_t var_e0_1 = 0
        int64_t var_d8_1 = 0
        char var_c8_1 = 0
        int64_t var_c0_1
        __builtin_memset(&var_c0_1, 0, 0x88)
        int32_t var_38_1 = 0x20702
        sub_1405979f0(arg1 + 0x10, &var_e8)
        sub_140597700(&var_e8)

sub_140596b00(arg2, arg1 + 0x10)
return arg2
