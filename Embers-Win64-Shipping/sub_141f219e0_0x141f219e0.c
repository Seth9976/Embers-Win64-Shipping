// 函数: sub_141f219e0
// 地址: 0x141f219e0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

sub_141eefdd0(arg1)
sub_140cdd6a0(arg1)

if (sub_140d23dc0(arg1, 0x30) == 0)
    sub_142215b10(&arg1[0x55], arg1)

int32_t zmm0 = *(arg1 + 0x1fc)
int32_t zmm2 = (zx.o(0)).d

if (not(zmm0 f<= zmm2))
    int32_t zmm1_1 = arg1[0x40].d
    
    if (not(zmm1_1 f== zmm2))
        zmm0 = _mm_min_ss(zmm1_1, zmm0)
    
    if ((arg1[0x41].b & 4) != 0 || arg1[0x80] != 0)
        zmm0 = (zx.o(0)).d
    
    arg1[0x40].d = zmm0

if (*(arg1 + 0x207) == 1)
    int32_t rax_2 = (*(*arg1 + 0x660))(arg1)
    
    if (rax_2 == 0)
        *(arg1 + 0x207) = rax_2.b

void* result = &arg1[0x43]

if (&arg1[0x45] == result)
    return result

int32_t r8_1 = *(arg1 + 0x234)
int64_t rsi_1 = *result
int64_t rdi_1 = sx.q(*(result + 8))
arg1[0x46].d = rdi_1.d

if (rdi_1.d == 0 && r8_1 == 0)
    *(arg1 + 0x234) = rdi_1.d
    return result

sub_140638750(&arg1[0x45], rdi_1.d, r8_1)
return memcpy(arg1[0x45], rsi_1, (rdi_1 << 2).d)
