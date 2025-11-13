// 函数: sub_140fe3fd0
// 地址: 0x140fe3fd0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

if (arg2 == 0)
    return 

uint64_t i_2 = zx.q(arg1)
int32_t r10_1 = 0

do
    float (* r8_3)[0x4] = (zx.q(r10_1 * i_2.d) << 4) + arg5
    int32_t* r9_2 = zx.q(r10_1 * arg4) + arg3
    
    if (i_2.d != 0)
        int32_t var_c_1 = 0
        uint64_t i_1 = i_2
        uint64_t i
        
        do
            int32_t rdx = *r9_2
            int32_t rax_3 = rdx u>> 6 & 0x1f
            int32_t rcx_1 = rdx & 0x3f
            int32_t var_28_1
            
            if (rax_3 != 0x1f)
                if (rax_3 == 0)
                    if (rcx_1 == 0)
                        rax_3 = -0x70
                    else
                        rax_3 = 1
                        
                        do
                            rax_3 -= 1
                            rcx_1 *= 2
                        while ((rcx_1.b & 0x40) == 0)
                        
                        rcx_1 &= 0x3f
                
                var_28_1 = (rax_3 + 0x70) << 0x17 | rcx_1 << 0x11
            else
                var_28_1 = (rcx_1 | 0x3fc0) << 0x11
            
            int32_t rcx_7 = rdx u>> 0xb & 0x3f
            int32_t rax_9 = rdx u>> 0x11 & 0x1f
            int32_t rax_13
            
            if (rax_9 != 0x1f)
                if (rax_9 == 0)
                    if (rcx_7 == 0)
                        rax_9 = -0x70
                    else
                        rax_9 = 1
                        
                        do
                            rax_9 -= 1
                            rcx_7 *= 2
                        while ((rcx_7.b & 0x40) == 0)
                        
                        rcx_7 &= 0x3f
                
                rax_13 = (rax_9 + 0x70) << 0x17 | rcx_7 << 0x11
            else
                rax_13 = ((rdx & 0x1f800) | 0x1fe0000) << 6
            
            int32_t rcx_11 = rdx u>> 0x16 & 0x1f
            uint32_t rax = rdx u>> 0x1b
            uint32_t var_20_1
            
            if (rax != 0x1f)
                if (rdx u< 0x8000000)
                    if (rcx_11 == 0)
                        rax = -0x70
                    else
                        rax = 1
                        
                        do
                            rax -= 1
                            rcx_11 *= 2
                        while ((rcx_11.b & 0x20) == 0)
                        
                        rcx_11 &= 0x1f
                
                var_20_1 = (rax + 0x70) << 0x17 | rcx_11 << 0x12
            else
                var_20_1 = (rdx u>> 5 & 0x3e0000) | 0x7f800000
            
            r9_2 = &r9_2[1]
            float var_18[0x4]
            var_18[0] = var_28_1
            float temp0_1[0x4] = _mm_shuffle_ps(var_18, var_18, 0xe1)
            temp0_1[0] = rax_13
            float temp0_2[0x4] = _mm_shuffle_ps(temp0_1, temp0_1, 0xc6)
            temp0_2[0] = var_20_1
            float temp0_3[0x4] = _mm_shuffle_ps(temp0_2, temp0_2, 0xc9)
            *r8_3 = temp0_3
            r8_3 = &r8_3[1]
            var_18 = temp0_3
            i = i_1
            i_1 -= 1
        while (i != 1)
    
    r10_1 += 1
while (r10_1 u< arg2)
