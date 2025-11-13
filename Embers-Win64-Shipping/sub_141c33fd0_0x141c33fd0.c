// 函数: sub_141c33fd0
// 地址: 0x141c33fd0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int128_t zmm1
zmm1.d = arg1[7].d f* 0.0500000007f
float zmm0_1 = powf(10f, zmm1.d)
int32_t rdx = 0
zmm1.d = arg1[6].d f* *arg1
int32_t* r8 = *(arg1 + 0x38)
arg1[1] = zmm0_1
zmm1.d = zmm1.d f* 0.00100000005f
int32_t rcx = *r8
int32_t rax = int.d(zmm1.d)

if (rax s> rcx)
    rax = rcx
else if (rax s< 0)
    rax = 0

int32_t rcx_1 = rcx - rax
r8[1] = rax
r8[2] = rcx_1
r8[3] = 0
int32_t rax_2 = rcx_1 & 0x80000003

if (rax_2 s< 0)
    rax_2 = ((rax_2 - 1) | 0xfffffffc) + 1

if (rax_2 != 0)
    int32_t i
    
    do
        rcx_1 -= 1
        rdx += 1
        i = rcx_1 & 0x80000003
        
        if (i s< 0)
            i = ((i - 1) | 0xfffffffc) + 1
    while (i != 0)
    r8[2] = rcx_1
    r8[3] = rdx

void* rax_8 = *(arg1 + 0x40)
zmm1.d = 1f f- arg1[8]
*(rax_8 + 4) = zmm1.d
*(rax_8 + 8) = 1f f- zmm1.d
**(arg1 + 0x48) = arg1[9]
**(arg1 + 0x50) = arg1[9]
**(arg1 + 0x58) = arg1[9] f- 0.125f
**(arg1 + 0x60) = arg1[9] f- 0.125f
sub_141c460a0(*(arg1 + 0xc8), arg1[0xc])
int128_t zmm1_1 = arg1[0xa]
void* rax_13 = *(arg1 + 0xc8)
*(rax_13 + 8) = zmm1_1.d
void* rax_14 = *(rax_13 + 0x70)
*(rax_14 + 4) = zmm1_1.d
*(rax_14 + 8) = 1f f- zmm1_1.d
*(*(arg1 + 0xc8) + 0xc) = arg1[0xb]
sub_141c460a0(*(arg1 + 0xd0), arg1[0xc])
void* rax_16 = *(arg1 + 0xd0)
int32_t zmm0_3 = arg1[0xa]
int128_t zmm6
zmm6.d = 1f f- zmm0_3
void* rcx_7 = *(rax_16 + 0x70)
*(rax_16 + 8) = zmm0_3
*(rcx_7 + 8) = zmm6.d
*(rcx_7 + 4) = zmm0_3
int32_t result = arg1[0xb]
*(*(arg1 + 0xd0) + 0xc) = result
return result
