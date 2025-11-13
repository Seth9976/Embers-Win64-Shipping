// 函数: sub_1420acf10
// 地址: 0x1420acf10
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

if (arg3 == 0)
    return 

void* rax_1 = sub_1424d00b0()
void* rcx = *(arg3 + 0x10)
int64_t rax = sx.q(*(rax_1 + 0x38))

if (rax.d s> *(rcx + 0x38) || *(*(rcx + 0x30) + (rax << 3)) != rax_1 + 0x30)
    return 

int32_t arg_18 = 0
int128_t zmm0_1
int512_t zmm2_1
zmm0_1, rax, zmm2_1 = sub_141f5bc90(arg1 + 0x70, arg2, &arg_18)
int32_t i = 0
int128_t zmm6_1 = zmm0_1

if (*(arg3 + 0x30) s<= 0)
    return 

int64_t* rdi_1 = nullptr

do
    void* rcx_2 = *(rdi_1 + *(arg3 + 0x28))
    
    if (rcx_2 != 0)
        zmm2_1.o = zmm6_1
        rax, zmm2_1, zmm6_1 = sub_142131b70(rcx_2, *(arg1 + 0xa0))
    
    i += 1
    rdi_1 = &rdi_1[1]
while (i s< *(arg3 + 0x30))
