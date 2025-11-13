// 函数: sub_1420a05e0
// 地址: 0x1420a05e0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

if (arg2 == 0)
    return 

void* rax_1 = sub_1424d09c0()
void* r8_1 = *(arg2 + 0x10)
int64_t rax = sx.q(*(rax_1 + 0x38))

if (rax.d s> *(r8_1 + 0x38) || *(*(r8_1 + 0x30) + (rax << 3)) != rax_1 + 0x30)
    return 

rax = zx.q(*(arg1 + 0x44))
int32_t i = 0
int32_t rdx = 0
*(arg1 + 0x40) = 0
int32_t temp0_1 = rax.d

if (temp0_1 s< 0 && temp0_1 != 0)
    sub_140638cc0(arg1 + 0x38, 0)
    rdx = *(arg1 + 0x40)

int32_t rcx_3 = *(arg1 + 0x30) + rdx
*(arg1 + 0x40) = rcx_3

if (rcx_3 s> *(arg1 + 0x44))
    sub_140638a00(arg1 + 0x38)

if (*(arg1 + 0x30) s<= 0)
    return 

int64_t rbp_1 = 0
int64_t* r15_1 = nullptr

do
    float zmm2[0x4] = data_14399f5e0.d
    int64_t zmm3 = data_14399f5e0:4.d
    int32_t zmm1 = data_14399f5e0:8.d
    int64_t* rsi_1 = *(r15_1 + *(arg1 + 0x28))
    float zmm0_1[0x4] = data_14399f5e0:0xc.d
    float var_38 = zmm2[0]
    int32_t var_34_1 = zmm3.d
    float var_2c_1 = zmm0_1[0]
    
    if (rsi_1 != 0)
        void var_28
        sub_140b4c620(&var_28, arg2 + 0xa0)
        int32_t var_20_1 = 0xffffffff
        char var_1c_1 = 2
        (*(*rsi_1 + 0x3a8))(rsi_1, &var_28, &var_38, 0)
        zmm3 = var_34_1
        zmm2 = var_38
    
    int64_t* rcx_7 = *(arg1 + 0x38)
    i += 1
    r15_1 = &r15_1[1]
    *(rcx_7 + rbp_1) = (_mm_unpacklo_ps(zmm2, zmm3)).q
    *(rcx_7 + rbp_1 + 8) = zmm1
    rbp_1 += 0xc
while (i s< *(arg1 + 0x30))
