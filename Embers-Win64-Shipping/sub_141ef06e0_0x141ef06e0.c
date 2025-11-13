// 函数: sub_141ef06e0
// 地址: 0x141ef06e0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

char rax
int64_t rdx_1
int32_t r8
rax, rdx_1, r8 = j_sub_140d3e110(arg1 + 0x208)

if (rax != 0)
    if ((*(arg2 + 0x330) & 0x20) != 0)
        int64_t* rax_1 = sub_141ea47f0(arg2)
        
        if (rax_1 != 0)
            char rax_2
            rax_2, rdx_1 = sub_1405a66e0(arg1 + 0x208, *rax_1, r8)
            
            if (rax_2 != 0)
                *(arg1 + 0x220) = 0
                *(arg1 + 0x224) = 0
                uint32_t zmm1[0x4] = *(arg1 + 0x20)
                *(arg1 + 0x210) = rax_1[0x25].d
                rdx_1 = sub_141e315f0(rax_1, zmm1, arg1 + 0x210, arg1 + 0x220)
                rax_1[0x25].d = *(arg1 + 0x210)
                rax_1[6].d = 0xfffffffe
                rax_1[7].d = 0xfffffffe
                float zmm0[0x4] = sub_141ea16b0(arg2)
                float temp0_1[0x4] = _mm_unpacklo_ps(zmm0, 0)
                *(arg1 + 0x240) = __mulps_xmmps_memps(
                    _mm_unpacklo_ps(_mm_unpacklo_ps(zmm0, zmm0[0].q), temp0_1[0].q), 
                    *(arg1 + 0x240))
    
    void* rcx_5 = *(arg2 + 0x288)
    *(rcx_5 + 0x5a0) = *(arg1 + 0x220)
    *(rcx_5 + 0x5a4) = *(arg1 + 0x224)
    *(rcx_5 + 0x5b0) = *(arg1 + 0x230)
    *(rcx_5 + 0x5c0) = *(arg1 + 0x240)
    *(rcx_5 + 0x5d0) = *(arg1 + 0x250)

char rax_7 = sub_142008300(arg1 + 0x260)
char rax_8

if (rax_7 == 0)
    rax_8 = sub_142008300(arg2 + 0x390)

if (rax_7 != 0 || rax_8 != 0)
    if ((*(arg2 + 0x330) & 0x40) == 0)
        void* rbp_1 = *(arg2 + 0x288)
        void* rax_9 = *(rbp_1 + 0x4b8)
        
        if (rax_9 != 0)
        label_141ef08c1:
            
            if (**(rax_9 + 0x18) != arg1)
                *(arg1 + 0x20)
                sub_141ffd270(*(arg2 + 0x288) + 0x4d8, rdx_1, arg2)
        else
            rax_9, rdx_1 = (*(*(rbp_1 + 0x140) + 0x28))(rbp_1 + 0x140)
            *(rbp_1 + 0x4b8) = rax_9
            
            if (rax_9 != 0)
                goto label_141ef08c1
    else
        int64_t rdx_4 = sub_142012a10(arg1 + 0x260, arg2 + 0x390, 0)
        *(arg2 + 0x288)
        *(arg1 + 0x20)
        sub_141ffd270(arg1 + 0x260, rdx_4, arg2)
        sub_14200b740(arg1 + 0x260, *(arg1 + 0x20), arg2, *(arg2 + 0x288), 0)
    
    sub_141ff71c0(*(arg2 + 0x288) + 0x4d8, arg1 + 0x260)

void* rcx_15 = *(arg2 + 0x288)
*(rcx_15 + 0x1f1) ^= (((*(arg1 + 0x18) u>> 2).b * 2) ^ *(rcx_15 + 0x1f1)) & 2
int64_t* rcx_16 = *(arg2 + 0x288)
*(arg2 + 0x330) ^= (*(arg1 + 0x18) << 5 ^ *(arg2 + 0x330)) & 0x400
*(arg2 + 0x334) = *(arg1 + 0x28)
*(arg2 + 0x338) = *(arg1 + 0x2c)
*(arg2 + 0x344) = *(arg1 + 0x30)
*(arg2 + 0x348) = *(arg1 + 0x34)
char result = (*(*rcx_16 + 0x5a0))(rcx_16)
*(arg1 + 0x39) = result
return result
