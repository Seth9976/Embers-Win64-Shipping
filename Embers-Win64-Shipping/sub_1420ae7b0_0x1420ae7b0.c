// 函数: sub_1420ae7b0
// 地址: 0x1420ae7b0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

if (arg3 == 0)
    return 

void* rax_1 = sub_1424d0d40()
void* r8 = *(arg3 + 0x10)
int64_t rax = sx.q(*(rax_1 + 0x38))

if (rax.d s> *(r8 + 0x38) || *(*(r8 + 0x30) + (rax << 3)) != rax_1 + 0x30)
    return 

int32_t var_48
int128_t zmm7_1
int128_t zmm8_1
rax, zmm7_1, zmm8_1 = sub_141a1d730(arg1 + 0x70, &var_48, arg2, &data_143dbb1f8)
int32_t i = 0

if (*(arg3 + 0x30) s<= 0)
    return 

int32_t var_40
int32_t zmm6_1 = var_40
int64_t* rdi_1 = nullptr
int128_t var_28_1 = zmm7_1
int32_t var_44
zmm7_1 = var_44
int128_t var_38_1 = zmm8_1
zmm8_1 = var_48

do
    void* rcx_1 = *(rdi_1 + *(arg3 + 0x28))
    
    if (rcx_1 != 0)
        int64_t rdx_3 = *(arg1 + 0xa0)
        var_48 = zmm8_1.d
        int32_t var_44_1 = zmm7_1.d
        int32_t var_40_1 = zmm6_1
        int32_t var_3c_1 = 0x3f800000
        rax, zmm6_1, zmm7_1, zmm8_1 = sub_1421321b0(rcx_1, rdx_3, &var_48)
    
    i += 1
    rdi_1 = &rdi_1[1]
while (i s< *(arg3 + 0x30))
