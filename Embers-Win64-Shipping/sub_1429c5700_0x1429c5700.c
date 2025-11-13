// 函数: sub_1429c5700
// 地址: 0x1429c5700
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void var_148
int64_t rax_1 = __security_cookie ^ &var_148
__CheckForDebuggerJustMyCode(&data_14427d007)
int64_t r14 = 0
int32_t var_128 = 0
int32_t r13 = 0
int32_t var_118 = 0
uint64_t r12 = 0
int32_t var_11c = 0

if ((**arg3)(arg3) s> 0)
    int16_t* var_d8_1 = arg1 + 0x54
    int32_t* rbx_1 = nullptr
    int32_t* var_e0_1 = arg1 + 0x50
    int64_t var_a0_1 = 0
    void* var_e8_1 = arg1 + 0x48
    void* var_c8_1 = arg1 + 0xa8
    void* var_d0_1 = arg1 + 0xa0
    int32_t i
    
    do
        int32_t rax_10 = (*(*arg3 + 8))(arg3, zx.q(r12.d))
        int32_t rdx_1 = rax_10
        
        if (rax_10 - 3 u<= 1)
            *var_e8_1 = r12.d
            int32_t r12_1 = (r12 << 2).d
            *var_e0_1 = r13
            int32_t r13_2 = r12_1 | 1
            int32_t rax_14 = r12_1 | 2
            int32_t var_110
            uint64_t rax_15
            uint64_t r8
            
            if (rdx_1 != 3)
                *var_d0_1 = var_11c
                *var_c8_1 = var_128
                int32_t rax_19 = r12_1 | 3
                int32_t rcx_7 = r12_1 s>> 2
                int32_t var_100
                int32_t var_f8
                float var_b8
                (*(*arg3 + 0x20))(arg3, &var_b8, zx.q(rcx_7), 0, var_128, rax_14, var_118, var_110, 
                    rcx_7, var_100, var_f8, arg4, var_e8_1, var_e0_1, var_d8_1, var_d0_1, var_c8_1)
                int32_t rcx_10 = r13_2 & 3
                int32_t rdx_4 = r13_2 s>> 2
                var_100 = rdx_4
                float var_a8
                (*(*arg3 + 0x20))(arg3, &var_a8, zx.q(rdx_4), zx.q(rcx_10))
                int32_t rcx_13 = rax_14 & 3
                int32_t rdx_7 = rax_14 s>> 2
                var_f8 = rdx_7
                float var_c0
                (*(*arg3 + 0x20))(arg3, &var_c0, zx.q(rdx_7), zx.q(rcx_13))
                int32_t rcx_16 = rax_19 s>> 2
                float var_b0
                (*(*arg3 + 0x20))(arg3, &var_b0, zx.q(rcx_16), 3)
                float zmm0 = var_c0 - var_b8
                float var_bc
                float var_b4
                float zmm1 = var_bc - var_b4
                float var_ac
                float var_a4
                float zmm2 = var_ac - var_a4
                zmm1 = zmm1 * zmm1 + zmm0 * zmm0
                zmm0 = var_b0 - var_a8
                zmm1 = zmm1 + 0f
                zmm2 = zmm2 * zmm2 + zmm0 * zmm0 + 0f
                int32_t rax_24
                
                if (not(zmm2 <= zmm1))
                    rax_24 = 1
                else if (zmm1 <= zmm2)
                    float var_88
                    (*(*arg3 + 0x10))(arg3, &var_88, zx.q(rcx_7), 0)
                    float var_68
                    (*(*arg3 + 0x10))(arg3, &var_68, zx.q(var_100), zx.q(rcx_10))
                    float var_98
                    (*(*arg3 + 0x10))(arg3, &var_98, zx.q(var_f8), zx.q(rcx_13))
                    float var_78
                    (*(*arg3 + 0x10))(arg3, &var_78, zx.q(rcx_16), 3)
                    float var_94
                    float var_84
                    float zmm5_1 = var_94 - var_84
                    float var_74
                    float var_64
                    zmm2 = var_74 - var_64
                    float zmm4_1 = var_98 - var_88
                    zmm1 = var_78 - var_68
                    float var_90
                    float var_80
                    float zmm3 = var_90 - var_80
                    float var_70
                    float var_60
                    zmm0 = var_70 - var_60
                    rax_24.b = zmm5_1 * zmm5_1 + zmm4_1 * zmm4_1 + zmm3 * zmm3
                        <= zmm2 * zmm2 + zmm1 * zmm1 + zmm0 * zmm0
                else
                    rax_24 = 0
                
                *(r14 + arg1 + 0x54) = 0x100
                r8 = 0xb0
                var_110.q = 0x18
                
                if (rax_24 == 0)
                    *(r14 + arg1 + 0x56) = 3
                    *(rbx_1 + arg2) = r12_1
                    *(rbx_1 + arg2 + 4) = r13_2
                    *(rbx_1 + arg2 + 8) = rax_19
                    *(arg1 + r14 + 0xac) = 0x201
                    *(arg1 + r14 + 0xae) = 3
                    *(rbx_1 + arg2 + 0xc) = r13_2
                    *(rbx_1 + arg2 + 0x10) = rax_14
                    *(rbx_1 + arg2 + 0x14) = rax_19
                else
                    *(r14 + arg1 + 0x56) = 2
                    *(rbx_1 + arg2 + 8) = rax_14
                    *(rbx_1 + arg2) = r12_1
                    *(rbx_1 + arg2 + 4) = r13_2
                    *(arg1 + r14 + 0xac) = 0x200
                    *(arg1 + r14 + 0xae) = 3
                    *(rbx_1 + arg2 + 0x10) = rax_14
                    *(rbx_1 + arg2 + 0x14) = rax_19
                    *(rbx_1 + arg2 + 0xc) = r12_1
                
                rax_15 = 2
            else
                r8 = zx.q(rdx_1 + 0x55)
                var_110.q = 0xc
                *var_d8_1 = 0x100
                var_d8_1[1].b = 2
                *(rbx_1 + arg2 + 8) = rax_14
                rax_15 = zx.q(rdx_1 - 2)
                *(rbx_1 + arg2) = r12_1
                *(rbx_1 + arg2 + 4) = r13_2
            
            var_128 += rax_10
            var_118 += rax_15.d
            r14 += r8
            var_a0_1 += rax_15
            rdx_1 = rax_15.d
            var_e8_1 += r8
            var_e0_1 += r8
            var_d8_1 += r8
            var_d0_1 += r8
            var_c8_1 += r8
            rbx_1 += var_110.q
            r13 = var_128
            r12 = zx.q(var_11c)
        
        r12 = zx.q(r12.d + 1)
        var_11c = r12.d
        i = (**arg3)(arg3, rdx_1)
    while (r12.d s< i)

int64_t i_2 = sx.q(arg4)

if (i_2 s> 0)
    void* rsi_1 = arg1 + 0x4c
    int64_t i_1
    
    do
        *rsi_1 = 0
        rsi_1 += 0x58
        i_1 = i_2
        i_2 -= 1
    while (i_1 != 1)

__security_check_cookie(rax_1 ^ &var_148)
return zx.q(r13)
