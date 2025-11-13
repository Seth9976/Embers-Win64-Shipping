// 函数: sub_141dcda00
// 地址: 0x141dcda00
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

*(arg1 + 0x4a) &= 0xfe
*(arg1 + 4) = 0
*(arg1 + 0x49) = 0
uint128_t zmm0 = zx.o(data_143dbb1f8.q)
int32_t rax = data_143dbb200
uint64_t var_3c = zmm0.q
int32_t var_40 = rax
int32_t var_34 = rax
zmm0.q = zmm0.q
*(arg1 + 0x1c) = zmm0
int64_t rsi = sx.q(arg4)
uint128_t var_48_1 = zmm0
int64_t rdi = sx.q(arg3)
*(arg1 + 0x2c) = var_3c
arg1[0xd] = 0.d
sub_141dd7400(arg1, arg5)
uint128_t zmm0_1 = zx.o(data_143dbb1f8.q)
int32_t rax_2 = data_143dbb200
int64_t rdx_1 = *arg2
uint64_t var_3c_1 = zmm0_1.q
int32_t var_40_1 = rax_2
int32_t var_34_1 = rax_2
uint64_t result = zx.q(0.d)
zmm0_1.q = zmm0_1.q
*(arg1 + 0x1c) = zmm0_1
*(arg1 + 0x2c) = var_3c_1
arg1[0xd] = result.d

if (rdi s< rsi)
    void* rbx_1 = rdx_1 + rdi * 0xc
    int64_t i_1 = rsi - rdi
    int64_t i
    
    do
        int32_t* rcx = *(arg1 + 0x38)
        int64_t rdx_2 = sx.q(arg1[0x10])
        int64_t rsi_1 = rdx_2 * 3
        result = &rcx[rsi_1]
        int64_t zmm1_1
        
        if (rcx == result)
        label_141dcdb70:
            int32_t rax_4 = (rdx_2 + 1).d
            arg1[0x10] = rax_4
            
            if (rax_4 s> arg1[0x11])
                sub_140638a00(&arg1[0xe])
            
            int64_t rcx_2 = *(arg1 + 0x38)
            *(rcx_2 + (rsi_1 << 2)) = *rbx_1
            result = zx.q(*(rbx_1 + 8))
            *(rcx_2 + (rsi_1 << 2) + 8) = result.d
            
            if (arg1[0xd].b == 0)
                *(arg1 + 0x28) = *rbx_1
                result = zx.q(*(rbx_1 + 8))
                arg1[0xc] = result.d
                *(arg1 + 0x1c) = *(arg1 + 0x28)
                arg1[9] = result.d
                arg1[0xd].b = 1
            else
                zmm0_1 = __minss_xmmss_memss(arg1[7].d, *rbx_1)
                zmm1_1 = arg1[0xa]
                arg1[7] = zmm0_1.d
                arg1[8] = __minss_xmmss_memss((*(rbx_1 + 4)).d, arg1[8]).d
                arg1[9] = __minss_xmmss_memss((*(rbx_1 + 8)).d, arg1[9]).d
                int64_t temp0_5 = __maxss_xmmss_memss(zmm1_1.d, *rbx_1)
                zmm0_1 = arg1[0xb]
                arg1[0xa] = temp0_5.d
                arg1[0xb] = __maxss_xmmss_memss(zmm0_1.d, *(rbx_1 + 4)).d
                arg1[0xc] = __maxss_xmmss_memss((*(rbx_1 + 8)).d, arg1[0xc]).d
        else
            int64_t zmm3 = *rbx_1
            uint32_t zmm4_1[0x4] = *(rbx_1 + 4)
            uint128_t zmm5_1 = *(rbx_1 + 8)
            
            while (true)
                zmm4_1[0] = zmm4_1[0] f- rcx[1]
                zmm1_1.d = zmm3.d f- *rcx
                zmm0_1.d = zmm5_1.d f- rcx[2]
                zmm4_1[0] = zmm4_1[0] f* zmm4_1[0]
                zmm1_1.d = zmm1_1.d f* zmm1_1.d
                zmm0_1.d = zmm0_1.d f* zmm0_1.d
                zmm4_1[0] = zmm4_1[0] f+ zmm1_1.d
                zmm4_1[0] = zmm4_1[0] f+ zmm0_1.d
                
                if (_mm_and_ps(zmm4_1, 0x7fffffff)[0] f<= 9.99999994e-09f)
                    break
                
                rcx = &rcx[3]
                
                if (rcx == result)
                    goto label_141dcdb70
        rbx_1 += 0xc
        i = i_1
        i_1 -= 1
    while (i != 1)

arg1[0x12].b = 4
return result
