// 函数: sub_1408a0370
// 地址: 0x1408a0370
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t* arg_10 = arg2
int32_t var_98 = 0
void* r14 = *(arg1 + 8)
int128_t* rax = j_sub_140a82f30(0x70)
void*** r15 = rax
arg_10 = rax

if (rax == 0)
    r15 = nullptr
else
    *rax = zx.o(0)
    *(rax + 8) = 1
    *(rax + 0xc) = 1
    *r15 = &data_142dfbee0
    void* arg_8 = &r15[2]
    int64_t* r14_1 = *(r14 + 0xb8)
    sub_140590fd0(&r15[2], arg3)
    r15[2] = &data_142dfbdf0
    r15[0xb] = 0
    r15[0xc] = 0
    (*(*r14_1 + 0x18))(r14_1, &r15[0xd])
    int32_t rcx_2 = *(r15 + 0x6c)
    int32_t rax_2 = r15[0xd].d
    int64_t var_88 = 0
    int32_t var_80_1 = rax_2
    int32_t var_7c_1 = rcx_2
    var_88.o = var_88.o
    char var_60_1 = 1
    int16_t var_58_1 = 0
    float zmm1[0x4] = 6.o
    float temp0_1[0x4] = _mm_shuffle_ps(zmm1, zmm1, 0x93)
    temp0_1[0] = 0x467a0000
    float var_48[0x4] = _mm_shuffle_ps(temp0_1, temp0_1, 0x39)
    int32_t var_38_1 = var_58_1.d
    sub_1423eb890(r14_1, &r15[0xb], &var_48, &var_88, arg4)

void* var_78 = &r15[2]
void*** var_70 = r15
int32_t var_98_1 = 0x18
sub_1405910e0(&r15[2])
*arg2 = &r15[2]
arg2[1] = r15
return arg2
