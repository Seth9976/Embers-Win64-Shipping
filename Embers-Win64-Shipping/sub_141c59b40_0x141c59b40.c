// 函数: sub_141c59b40
// 地址: 0x141c59b40
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

if (sub_141e631e0(*(arg1 + 0x10)).b != 0)
    uint32_t zmm0[0x4] = *(*(arg1 + 0x10) + 0x168)
    zmm0[0] = zmm0[0] f- *(arg1 + 0xc0)
    uint32_t temp0_1[0x4] = __andps_xmmxud_memxud(zmm0, data_142d3f770)
    int64_t* rax_2
    
    if (not(temp0_1[0] f> 0.00999999978f))
        rax_2 = *(arg1 + 0xa8)
    
    if (temp0_1[0] f> 0.00999999978f || *(sx.q(*(rax_2 + 0x8c)) + *(*rax_2 + 0x178)) != 0)
        if (*(*(arg1 + 0x18) + 0xc) == 2)
            arg3, arg4 = sub_141e6cdf0(arg1)
        
        if (sub_141c63ea0(arg1).b == 0)
            void* rbx = *(arg1 + 0x10)
            uint128_t var_18 = arg3
            uint128_t var_28 = arg4
            arg4 = 0x42b40000
            int32_t zmm1
            
            if (data_143f34d8c == 0)
                zmm1 = *(rbx + 0x164)
            else
                zmm1 = *(rbx + 0x160)
            
            if (not(zmm1 f<= 9.99999975e-05f))
                zmm0 = *(rbx + 0x158)
                zmm0[0] = zmm0[0] f* 0.5f
                zmm0[0] = zmm0[0] f/ zmm1
                zmm0 = atanf(zmm0[0])
                zmm0[0] = zmm0[0] f* 57.2957764f
                arg3 = *(rbx + 0x168)
                arg4.d = arg3.d f- zmm0[0]
                
                if (not(arg4.d f>= 0f))
                    arg4.d = arg4.d f+ 360f
                
                arg3.d = arg3.d f+ zmm0[0]
                
                if (not(arg3.d f<= 360f))
                    arg3.d = arg3.d f+ -360f
            
            int32_t rax_4 = *(arg2 + 0xc)
            arg2[1].d = 0
            
            if (rax_4 s< 0 && rax_4 != 0)
                sub_140775b10(arg2, 0)
            
            void* rcx_5 = *(arg1 + 0x88)
            int32_t rbx_1 = *(rcx_5 + 0x958)
            uint128_t zmm6 =
                sub_141c5d150(rcx_5, rbx_1, *(arg1 + 0x10), arg4, (*(arg1 + 0x14c))[0], arg2)
            void* rax_5
            int512_t zmm6_1
            int512_t zmm7
            rax_5, zmm6_1, zmm7 =
                sub_141c5d150(*(arg1 + 0x88), rbx_1, *(arg1 + 0x10), zmm6, *(arg1 + 0x14c), arg2)
            zmm7.o = var_28
            rax_5.b = 1
            zmm6_1.o = var_18
            return rax_5

if (arg2[1].d != 0)
    uint64_t rax
    rax.b = 0
    return rax

int32_t rdx_3 = *(*(arg1 + 0x88) + 0x958)

if (rdx_3 s<= 8)
    sub_141c4c1f0(arg2, 
        (sx.q(((zx.q(rdx_3 + ((zx.d((*(*(arg1 + 0x10) + 0x100) u>> 0xb).b) & 1) << 3)) << 3)
            + -fffffffffffffff9).d) << 4) + data_143f34e00)
    int64_t* rax_10
    rax_10.b = 1
    return rax_10

int32_t rbx_2 = rdx_3 * 2
arg2[1].d = rbx_2

if (rbx_2 s> *(arg2 + 0xc))
    sub_140775270(arg2)

memset(*arg2, 0, sx.q(rbx_2) << 2)
int64_t rax_8
rax_8.b = 1
return rax_8
