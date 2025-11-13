// 函数: sub_140f9fc40
// 地址: 0x140f9fc40
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int32_t i_2 = 0
*(arg1 + 0x450) = 0

if (*(arg1 + 0x454) != 0)
    sub_140679c00(arg1 + 0x448, 0)

int32_t i = 0

if (*(arg1 + 0x420) s> 0)
    int64_t* r14_1 = nullptr
    
    do
        int64_t rsi_1 = sx.q(*(arg1 + 0x450))
        int32_t* r12_1 = *(r14_1 + *(arg1 + 0x418))
        int32_t rax_2 = (rsi_1 + 1).d
        *(arg1 + 0x450) = rax_2
        
        if (rax_2 s> *(arg1 + 0x454))
            sub_1406105e0(arg1 + 0x448)
        
        i += 1
        r14_1 = &r14_1[1]
        *(*(arg1 + 0x448) + (rsi_1 << 2)) = *r12_1
    while (i s< *(arg1 + 0x420))

*(arg1 + 0x460) = 0

if (*(arg1 + 0x464) != 0)
    sub_14061cd70(arg1 + 0x458, 0)

int32_t i_1 = 0

if (*(arg1 + 0x430) s> 0)
    int64_t* r14_2 = nullptr
    
    do
        int64_t rsi_2 = sx.q(*(arg1 + 0x460))
        int128_t* r12_2 = *(r14_2 + *(arg1 + 0x428))
        int32_t rax_4 = (rsi_2 + 1).d
        *(arg1 + 0x460) = rax_4
        
        if (rax_4 s> *(arg1 + 0x464))
            sub_140610660(arg1 + 0x458)
        
        i_1 += 1
        r14_2 = &r14_2[1]
        *(*(arg1 + 0x458) + rsi_2 * 0x10) = *r12_2
    while (i_1 s< *(arg1 + 0x430))

*(arg1 + 0x470) = 0

if (*(arg1 + 0x474) != 0)
    sub_14061cd70(arg1 + 0x468, 0)

if (*(arg1 + 0x440) s<= 0)
    return 

int64_t* rbx_2 = nullptr

do
    int64_t rax_5 = *(arg1 + 0x438)
    int32_t* rcx_8 = *(rbx_2 + rax_5 + 0x18)
    int32_t zmm3
    
    if (rcx_8 == 0)
        zmm3 = (zx.o(0)).d
    else
        zmm3 = *rcx_8
    
    int32_t* rcx_9 = *(rbx_2 + rax_5 + 0x10)
    int32_t zmm2
    
    if (rcx_9 == 0)
        zmm2 = (zx.o(0)).d
    else
        zmm2 = *rcx_9
    
    int32_t* rcx_10 = *(rbx_2 + rax_5 + 8)
    int32_t zmm1
    
    if (rcx_10 == 0)
        zmm1 = (zx.o(0)).d
    else
        zmm1 = *rcx_10
    
    int128_t* rcx_11 = *(rbx_2 + rax_5)
    int128_t zmm0
    
    if (rcx_11 == 0)
        zmm0 = zx.o(0)
    else
        zmm0 = *rcx_11
    
    int64_t rbp = sx.q(*(arg1 + 0x470))
    int32_t var_24_1 = zmm1
    int32_t var_20_1 = zmm2
    int32_t rax_6 = (rbp + 1).d
    int32_t var_1c_1 = zmm3
    *(arg1 + 0x470) = rax_6
    
    if (rax_6 s> *(arg1 + 0x474))
        sub_140610660(arg1 + 0x468)
    
    i_2 += 1
    rbx_2 = &rbx_2[4]
    *(*(arg1 + 0x468) + rbp * 0x10) = zmm0.d.o
while (i_2 s< *(arg1 + 0x440))
