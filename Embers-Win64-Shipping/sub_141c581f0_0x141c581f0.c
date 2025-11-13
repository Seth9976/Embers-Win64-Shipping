// 函数: sub_141c581f0
// 地址: 0x141c581f0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

uint128_t zmm6
uint128_t zmm7

if (arg2 != 1)
    if (arg2 == 2)
        return sub_141c59b40(arg1, arg3, zmm6, zmm7) __tailcall
    
    if (arg3[1].d != 0)
        int64_t rax
        rax.b = 0
        return rax
    
    sub_141c5cc70((*(arg1 + 0x19c) u>> 4).b & 1, arg2, *(*(arg1 + 0x88) + 0x958), 
        (*(*(arg1 + 0x10) + 0x100) u>> 0xb).b & 1, arg3)
    int64_t rax_18
    rax_18.b = 1
    return rax_18

void* rsi = *(arg1 + 0x10)

if (sub_141c63ea0(arg1) != 0)
    if (*(rsi + 0x104) != 1)
        int32_t rax_2 = *(arg1 + 0x19c)
        
        if ((rax_2.b & 1) == 0)
            *(arg1 + 0x19c) = rax_2 | 1
    
    return sub_141c59b40(arg1, arg3, zmm6, zmm7)

if (sub_141e631e0(rsi).b != 0)
    uint32_t zmm1[0x4] = *(*(arg1 + 0x10) + 0x168)
    zmm1[0] = zmm1[0] f- *(arg1 + 0xc0)
    uint32_t temp0_1[0x4] = __andps_xmmxud_memxud(zmm1, data_142d3f770)
    int64_t* rax_7
    
    if (not(temp0_1[0] f> 0.00999999978f))
        rax_7 = *(arg1 + 0xa8)
    
    if (temp0_1[0] f> 0.00999999978f || *(sx.q(*(rax_7 + 0x8c)) + *(*rax_7 + 0x178)) != 0)
        *(arg1 + 0xc0) = zmm1[0]
        int32_t rax_8 = *(arg3 + 0xc)
        arg3[1].d = 0
        
        if (rax_8 s< 0 && rax_8 != 0)
            sub_140775b10(arg3, 0)
        
        void* r8 = *(arg1 + 0x10)
        void* rcx_4 = *(arg1 + 0x88)
        sub_141c5d150(rcx_4, *(rcx_4 + 0x958), r8, *(r8 + 0x168), (*(arg1 + 0x14c))[0], arg3)
        void* rax_9
        rax_9.b = 1
        return rax_9

if (arg3[1].d != 0)
    void* rax_5
    rax_5.b = 0
    return rax_5

int64_t rdi_1 = sx.q(*(*(arg1 + 0x88) + 0x958))

if (rdi_1.d s<= 8)
    sub_141c4c1f0(arg3, 
        (sx.q(((zx.q((rdi_1 + ((zx.q((*(*(arg1 + 0x10) + 0x100) u>> 0xb).b) & 1) << 3)).d) << 3)
            + -fffffffffffffff8).d) << 4) + data_143f34e00)
    int64_t* rax_14
    rax_14.b = 1
    return rax_14

arg3[1].d = rdi_1.d

if (rdi_1.d s> *(arg3 + 0xc))
    sub_140775270(arg3)

memset(*arg3, 0, rdi_1 << 2)
int64_t rax_12
rax_12.b = 1
return rax_12
