// 函数: sub_141c45e80
// 地址: 0x141c45e80
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int32_t i = 0
int128_t zmm6 = arg2
*(arg1 + 0xbc) = zmm6.d

if (*(arg1 + 0x80) s<= 0)
    return 

int64_t rbx_1 = 0

do
    int64_t rdi_1 = *(arg1 + 0x78)
    bool cond:0_1 = *(rbx_1 + rdi_1 + 0x24) == 0
    *(rbx_1 + rdi_1 + 0x10) = zmm6.d
    float zmm0
    
    zmm0 = cond:0_1 ? -4605.17041f : -1002.39349f
    
    arg2.d = zmm6.d f* *(rbx_1 + rdi_1 + 0xc)
    int64_t rax
    zmm0, rax = expf(zmm0 f/ arg2.d)
    *(rbx_1 + rdi_1 + 0x14) = zmm0
    i += 1
    rbx_1 += 0x28
while (i s< *(arg1 + 0x80))
