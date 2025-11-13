// 函数: sub_1426f0ce0
// 地址: 0x1426f0ce0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

if (arg2 s>= 0)
    int32_t rcx = *(*arg1 + 0x50)
    
    if (arg2 s< rcx && arg3 s>= 0 && arg3 s< rcx)
        if (arg2 == arg3)
            return 1
        
        int32_t r14 = 0
        arg1[2].d = 0
        
        if (*(arg1 + 0x14) s<= 0x3f)
            sub_1413f6f70(&arg1[1], 0x40)
        
        sub_140908eb0(&arg1[3])
        int32_t rax_3 = *(arg1 + 0x7c)
        arg1[0xf].d = 0
        
        if (rax_3 s< 0 && rax_3 != 0)
            sub_1405dadb0(&arg1[0xe], 0)
        
        int64_t rbx = sx.q(arg1[2].d)
        char var_3c
        char var_3c_1 = var_3c & 0xfc
        int32_t var_54 = arg2
        int32_t var_50 = 0xffffffff
        int32_t rax_4 = (rbx + 1).d
        int32_t var_4c = 0x7f7fffff
        int32_t var_48 = 0x7f7fffff
        int64_t var_44 = -1
        arg1[2].d = rax_4
        
        if (rax_4 s> *(arg1 + 0x14))
            sub_1405c50f0(&arg1[1])
        
        int64_t rdx_1 = arg1[1]
        int128_t zmm0 = var_54.o
        int128_t* r8 = rbx * 0x1c
        int32_t arg_10 = rbx.d
        *(r8 + rdx_1) = zmm0
        *(r8 + rdx_1 + 0x10) = var_44
        *(r8 + rdx_1 + 0x18) = var_3c_1.d
        sub_140908920(&arg1[3], &var_54, &arg_10)
        int64_t rcx_6 = sx.q(arg_10)
        void* rbx_2 = rcx_6 * 0x1c + arg1[1]
        *(rbx_2 + 0x10) = rcx_6.d
        *(rbx_2 + 8) = 0
        int32_t rcx_7 = *(*arg4 + 0x40)
        int32_t temp12
        int32_t temp13
        temp12:temp13 = sx.q(modu.dp.d(0:arg2, rcx_7) - modu.dp.d(0:arg3, rcx_7))
        int32_t temp14
        int32_t temp15
        temp14:temp15 = sx.q(divu.dp.d(0:arg2, rcx_7) - divu.dp.d(0:arg3, rcx_7))
        *(rbx_2 + 0xc) =
            _mm_cvtepi32_ps(zx.o((temp13 ^ temp12) - temp12 + (temp15 ^ temp14) - temp14)).d
        sub_142708d70(&arg1[0xe], rbx_2)
        int32_t r13_1 = 1
        int32_t zmm1_1 = *(rbx_2 + 0xc)
        char i = 1
        int32_t rbp = *(rbx_2 + 0x10)
        int32_t var_58 = zmm1_1
        arg_10 = rbp
        
        if (arg1[0xf].d s> 0)
            while (i != 0)
                i = sub_1426f1790(arg1, arg3, 1, arg4, &arg_10, &var_58)
                
                if (arg1[0xf].d s<= 0)
                    break
            
            rbp = arg_10
            zmm1_1 = var_58
        
        if (not(zmm1_1 f== (zx.o(0)).d))
            r13_1 = 2
        
        int64_t r8_8 = arg1[1]
        uint64_t rdx_9 = zx.q(rbp)
        int32_t rbx_4 = 0
        int64_t r12_1
        
        while (true)
            r12_1 = sx.q(rbx_4)
            rbx_4 += 1
            rdx_9 = sx.q(*(sx.q(rdx_9.d) * 0x1c + r8_8 + 0x14))
            
            if (rdx_9.d s< 0 || rdx_9.d s>= arg1[2].d || *(rdx_9 * 0x1c + r8_8) == arg2)
                if (rbx_4 s< 0x2710)
                    break
            else if (rbx_4 s< 0x2710)
                continue
            
            r13_1 = 3
            break
        
        arg5[1].d = 0
        
        if (rbx_4 s> *(arg5 + 0xc))
            sub_1405dadb0(arg5, rbx_4)
            r14 = arg5[1].d
        
        int32_t rax_18 = r14 + rbx_4
        arg5[1].d = rax_18
        
        if (rax_18 s> *(arg5 + 0xc))
            sub_1405a4cf0(arg5)
        
        memset(*arg5 + (sx.q(r14) << 2), 0, sx.q(rbx_4) << 2)
        int32_t* r10 = arg1[1]
        int64_t r9_3 = r12_1
        int64_t temp16_1
        
        do
            *(*arg5 + (r9_3 << 2)) = r10[sx.q(rbp) * 7]
            temp16_1 = r9_3
            r9_3 -= 1
            r10 = arg1[1]
            rbp = r10[sx.q(rbp) * 7 + 5]
        while (temp16_1 - 1 s>= 0)
        return zx.q(r13_1)

return 0
