// 函数: sub_140e31840
// 地址: 0x140e31840
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t i_1 = 0
int64_t rbp_1 = arg3 * arg4
char* r10 = arg1
int32_t arg_18
uint16_t rax
uint128_t zmm0

if (rbp_1 u>= 4)
    uint16_t* r11_1 = arg5 + 4
    int64_t i_2 = ((rbp_1 - 4) u>> 2) + 1
    i_1 = i_2 << 2
    int64_t i
    
    do
        zmm0.d = _mm_cvtepi32_ps(zx.o(*r10)).d f* 0.00392156886f
        arg_18 = zmm0.d
        uint16_t rcx_1 = (arg_18 u>> 0x17).w
        uint16_t rax_3 = (arg_18 u>> 0x1f).w << 0xf
        uint32_t r8 = zx.d(rcx_1.b)
        
        if (r8 u> 0x70)
            if (r8 u< 0x8f)
                rax_3 |= ((rcx_1 - 0x10) & 0x1f) << 0xa | ((arg_18 u>> 0xd).w & 0x3ff)
            else
                rax_3 |= 0x7bff
        else if (0x70 - r8 + 0xe s<= 0x18)
            int32_t rdx_2 = (arg_18 & 0x7fffff) | 0x800000
            uint16_t r8_2 = ((rdx_2 u>> (0x70 - r8 + 0xe).b).w & 0x3ff) | rax_3
            rax_3 = r8_2
            
            if (((rdx_2 u>> ((0x70 - r8).b + 0xd)).b & 1) != 0)
                rax_3 = r8_2 + 1
        
        r11_1[-2] = rax_3
        void* r10_1 = &r10[arg2]
        zmm0.d = _mm_cvtepi32_ps(zx.o(*r10_1)).d f* 0.00392156886f
        arg_18 = zmm0.d
        uint16_t rcx_5 = (arg_18 u>> 0x17).w
        uint16_t rax_6 = (arg_18 u>> 0x1f).w << 0xf
        uint32_t r8_3 = zx.d(rcx_5.b)
        
        if (r8_3 u> 0x70)
            if (r8_3 u< 0x8f)
                rax_6 |= ((rcx_5 - 0x10) & 0x1f) << 0xa | ((arg_18 u>> 0xd).w & 0x3ff)
            else
                rax_6 |= 0x7bff
        else if (0x70 - r8_3 + 0xe s<= 0x18)
            int32_t rdx_7 = (arg_18 & 0x7fffff) | 0x800000
            uint16_t r8_5 = ((rdx_7 u>> (0x70 - r8_3 + 0xe).b).w & 0x3ff) | rax_6
            rax_6 = r8_5
            
            if (((rdx_7 u>> ((0x70 - r8_3).b + 0xd)).b & 1) != 0)
                rax_6 = r8_5 + 1
        
        r11_1[-1] = rax_6
        void* r10_2 = r10_1 + arg2
        zmm0.d = _mm_cvtepi32_ps(zx.o(*r10_2)).d f* 0.00392156886f
        arg_18 = zmm0.d
        uint16_t rcx_9 = (arg_18 u>> 0x17).w
        uint16_t rax_9 = (arg_18 u>> 0x1f).w << 0xf
        uint32_t r8_6 = zx.d(rcx_9.b)
        
        if (r8_6 u> 0x70)
            if (r8_6 u< 0x8f)
                rax_9 |= ((rcx_9 - 0x10) & 0x1f) << 0xa | ((arg_18 u>> 0xd).w & 0x3ff)
            else
                rax_9 |= 0x7bff
        else if (0x70 - r8_6 + 0xe s<= 0x18)
            int32_t rdx_12 = (arg_18 & 0x7fffff) | 0x800000
            uint16_t r8_8 = ((rdx_12 u>> (0x70 - r8_6 + 0xe).b).w & 0x3ff) | rax_9
            rax_9 = r8_8
            
            if (((rdx_12 u>> ((0x70 - r8_6).b + 0xd)).b & 1) != 0)
                rax_9 = r8_8 + 1
        
        *r11_1 = rax_9
        void* r10_3 = r10_2 + arg2
        zmm0.d = _mm_cvtepi32_ps(zx.o(*r10_3)).d f* 0.00392156886f
        arg_18 = zmm0.d
        uint16_t rcx_13 = (arg_18 u>> 0x17).w
        rax = (arg_18 u>> 0x1f).w << 0xf
        uint32_t r8_9 = zx.d(rcx_13.b)
        
        if (r8_9 u> 0x70)
            if (r8_9 u< 0x8f)
                rax |= ((rcx_13 - 0x10) & 0x1f) << 0xa | ((arg_18 u>> 0xd).w & 0x3ff)
            else
                rax |= 0x7bff
        else if (0x70 - r8_9 + 0xe s<= 0x18)
            int32_t rdx_17 = (arg_18 & 0x7fffff) | 0x800000
            uint16_t r8_11 = ((rdx_17 u>> (0x70 - r8_9 + 0xe).b).w & 0x3ff) | rax
            rax = r8_11
            
            if (((rdx_17 u>> ((0x70 - r8_9).b + 0xd)).b & 1) != 0)
                rax = r8_11 + 1
        
        r11_1[1] = rax
        r10 = r10_3 + arg2
        r11_1 = &r11_1[4]
        i = i_2
        i_2 -= 1
    while (i != 1)

for (; i_1 u< rbp_1; i_1 += 1)
    zmm0.d = _mm_cvtepi32_ps(zx.o(*r10)).d f* 0.00392156886f
    arg_18 = zmm0.d
    rax = (arg_18 u>> 0x17).w
    uint16_t rdx_21 = (arg_18 u>> 0x1f).w << 0xf
    uint32_t rcx_16 = zx.d(rax.b)
    
    if (rcx_16 u> 0x70)
        if (rcx_16 u< 0x8f)
            rdx_21 |= ((rax - 0x10) & 0x1f) << 0xa | ((arg_18 u>> 0xd).w & 0x3ff)
        else
            rdx_21 |= 0x7bff
    else if (0x70 - rcx_16 + 0xe s<= 0x18)
        int32_t r8_14 = (arg_18 & 0x7fffff) | 0x800000
        rdx_21 |= (r8_14 u>> (0x70 - rcx_16 + 0xe).b).w & 0x3ff
        
        if (((r8_14 u>> ((0x70 - rcx_16).b + 0xd)).b & 1) != 0)
            rdx_21 += 1
    
    *(arg5 + (i_1 << 1)) = rdx_21
    r10 = &r10[arg2]
