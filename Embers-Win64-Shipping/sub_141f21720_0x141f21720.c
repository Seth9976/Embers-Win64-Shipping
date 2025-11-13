// 函数: sub_141f21720
// 地址: 0x141f21720
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

if (&arg1[0x45] != &arg1[0x43])
    int32_t r8_1 = *(arg1 + 0x234)
    int64_t rbp_1 = arg1[0x43]
    int64_t rsi_1 = sx.q(arg1[0x44].d)
    arg1[0x46].d = rsi_1.d
    
    if (rsi_1.d != 0 || r8_1 != 0)
        sub_140638750(&arg1[0x45], rsi_1.d, r8_1)
        memcpy(arg1[0x45], rbp_1, (rsi_1 << 2).d)
    else
        *(arg1 + 0x234) = 0

arg1[1].d |= 8
sub_140cd85e0(arg1[0x82])
sub_14213df90(arg1)

if (arg1[0x84] == 0)
    sub_140d19010(arg1, 
        NewObject with empty name can't be used to create default subobjects (inside of UObject derived "
    "class constructor) as it produces incon")
    int64_t arg_8 = 0
    arg1[0x84] = sub_140d2dfc0(sub_142480e50(), arg1, 0, 0, 0, 0, 0, 0, 0)
    void var_28
    *(arg1[0x84] + 0xc0) = *sub_140b214c0(&var_28)
    *(arg1[0x84] + 0x8c) = 3
    void* rax_8 = arg1[0x84]
    *(rax_8 + 0x89) &= 0xbf
    void* rax_9 = arg1[0x84]
    *(rax_9 + 0x89) |= 8
    int64_t* rcx_12 = arg1[0x84]
    (*(*rcx_12 + 0x260))(rcx_12)

if (sub_140cdd6a0(arg1) s< 0x145)
    void* rax_12 = arg1[0x84]
    
    if (rax_12 != 0)
        *(rax_12 + 0x89) &= 0xbf

void* result = arg1[0x84]
*(result + 0x89) |= 8
return result
