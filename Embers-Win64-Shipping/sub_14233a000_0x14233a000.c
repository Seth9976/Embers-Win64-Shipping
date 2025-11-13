// 函数: sub_14233a000
// 地址: 0x14233a000
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int32_t rbp = 0
int32_t i = 0

if (arg1[1].d s> 0)
    int64_t* rsi_1 = nullptr
    
    do
        int64_t rbx_1 = *arg1
        int64_t var_88_1 = 0
        int32_t var_80_1 = 0xffffffff
        void* rcx_1 = *(rsi_1 + rbx_1)
        uint32_t temp0_1[0x4] = _mm_and_ps(*(*arg2 + (sx.q(*(rsi_1 + rbx_1 + 8)) << 2)), 0x7fffffff)
        char rax_2
        
        if (rcx_1 != 0 && not(temp0_1[0] f< 9.99999994e-09f) && not(temp0_1[0] f> 5f))
            rax_2 = sub_14214bc80(rcx_1, arg3)
        
        int32_t var_78_1
        int32_t var_68
        
        if (rcx_1 == 0 || temp0_1[0] f< 9.99999994e-09f || temp0_1[0] f> 5f || rax_2 == 0)
            int32_t var_90_1 = 0xffffffff
            var_78_1 = 0xffffffff
            int64_t var_70_2 = 0
            var_88_1.o = 0.o
            var_68 = 0
        else
            var_78_1 = 0
            var_88_1.o = *(rsi_1 + rbx_1)
            int64_t var_70_1 = sub_1421496a0(*(rsi_1 + rbx_1), arg3, &var_68)
            rbp += 1
        
        int64_t rbx_2 = sx.q(arg4[1].d)
        int32_t rax_4 = (rbx_2 + 1).d
        arg4[1].d = rax_4
        
        if (rax_4 s> *(arg4 + 0xc))
            sub_1405c4ec0(arg4)
        
        int64_t rcx_4 = *arg4
        int64_t rdx_3 = rbx_2 * 5
        i += 1
        rsi_1 = &rsi_1[2]
        *(rcx_4 + (rdx_3 << 3)) = var_88_1.o
        *(rcx_4 + (rdx_3 << 3) + 0x10) = var_78_1.o
        *(rcx_4 + (rdx_3 << 3) + 0x20) = var_68.q
    while (i s< arg1[1].d)

return zx.q(rbp)
