// 函数: sub_141c88880
// 地址: 0x141c88880
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void*** rax = j_sub_140a82f30(0xc8)
void*** r14 = rax

if (rax == 0)
    r14 = nullptr
else
    int64_t* rax_1 = sub_140a242a0()
    int64_t* rsi_1 = *arg5
    void var_98
    int64_t* rax_2 = sub_140b29d90(&var_98)
    int64_t r8 = *rax_1
    int64_t rbx_2 = *rax_2 + *arg4
    int32_t rax_4 = (*(r8 + 0x10))(rax_1, 0, r8)
    int64_t r8_1 = *rsi_1
    void var_58
    int128_t* rax_5 = (*r8_1)(rsi_1, &var_58, r8_1)
    int64_t* rdx_1 = &r14[3]
    *r14 = &data_14320f690
    r14[1] = 0
    r14[2] = 0
    rdx_1[2] = 0
    rdx_1[3].d = 0
    *(rdx_1 + 0x1c) = 0x80
    int64_t* rcx_3 = rdx_1[2]
    
    if (rcx_3 != 0)
        rdx_1 = rcx_3
    
    *rdx_1 = 0
    rdx_1[1] = 0
    r14[7].d = 0xffffffff
    *(r14 + 0x3c) = 0
    r14[9] = 0
    r14[0xa].d = 0
    r14[0xb] = 0
    r14[0xc] = 0
    r14[0xe] = 0
    r14[0xf] = *arg2
    void* rax_7 = arg2[1]
    r14[0x10] = rax_7
    
    if (rax_7 != 0)
        *(rax_7 + 8) += 1
    
    r14[0x11] = 0
    int64_t r15_1 = sx.q(arg3[1].d)
    int64_t r12_1 = *arg3
    r14[0x12].d = r15_1.d
    
    if (r15_1.d != 0)
        sub_1405a4be0(&r14[0x11], r15_1.d, 0)
        memcpy(r14[0x11], r12_1, (r15_1 << 4).d)
    else
        *(r14 + 0x94) = 0
    
    r14[0x13].b = 1
    *(r14 + 0x9c) = 0
    r14[0x16].d = rax_4
    *(r14 + 0xa0) = *rax_5
    r14[0x17] = rbx_2
    r14[0x18].d = 0xffffffff
    *(r14 + 0xc4) = 0

void*** rax_10 = j_sub_140a82f30(0x18)

if (rax_10 == 0)
    rax_10 = nullptr
else
    rax_10[1].d = 1
    *rax_10 = &data_142e1d5c8
    *(rax_10 + 0xc) = 1
    rax_10[2] = r14

void*** var_88 = r14
void* rbx_3 = *(arg1 + 0x28)
sub_141c8e590(*(rbx_3 + 0x148), &var_88)
uint128_t zmm1 = var_88.o
uint128_t var_78 = zmm1
void* rax_11 = _mm_bsrli_si128(zmm1, 8).q
int32_t var_a0 = 0
int128_t var_68 = sub_141c8a230.o

if (rax_11 != 0)
    *(rax_11 + 8) += 1

void var_48
int64_t* rax_12 = sub_141c7fb60(&var_48, rbx_3, &var_68, &var_78)

if (sub_141c87730(rbx_3 + 0x110, rax_12) != 0)
    int64_t* rcx_9 = *(rbx_3 + 0x158)
    int64_t rdx_8 = *rcx_9
    (*(rdx_8 + 0x10))(rcx_9, rdx_8)

int32_t result = sub_140745b20(rax_12)

if (rax_10 != 0)
    result = rax_10[1].d
    rax_10[1].d -= 1
    
    if (result == 1)
        result = (**rax_10)(rax_10)
        int32_t rbp_1 = *(rax_10 + 0xc)
        *(rax_10 + 0xc) -= 1
        
        if (rbp_1 == 1)
            return (*rax_10)[1](rax_10, zx.q(rbp_1))

return result
