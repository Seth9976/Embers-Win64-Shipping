// 函数: sub_1422cc4a0
// 地址: 0x1422cc4a0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

char i = sub_1422cb580(arg2)

if (i != 0)
    int64_t r15_1 = arg1 + 0x38
    int64_t var_80_1 = r15_1
    
    do
        int64_t rbx_1 = sx.q(arg4[1].d)
        int16_t rbp_1 = *(arg2 + 0x2c)
        int32_t rax = (rbx_1 + 1).d
        arg4[1].d = rax
        
        if (rax s> *(arg4 + 0xc))
            sub_140594770(arg4)
        
        *(*arg4 + (rbx_1 << 1)) = rbp_1
        int64_t r13_1 = sx.q(arg2[6].d)
        void* rbp_4 = (r13_1 << 5) + *r15_1
        
        if (*(rbp_4 + 0x1c) == 0)
            void* rcx_2 = *arg2
            int64_t* r12_2 = sx.q(arg2[7].d) + sx.q(*(rbp_4 + 0xc)) + arg3
            int64_t rdx_1 = sx.q(*(rcx_2 + 8))
            int64_t rbx_2 = *r12_2
            *(rcx_2 + 8) = (rdx_1 + 1).d
            int64_t* r8 = *arg2
            int64_t r15_2 = sx.q(arg4[1].d)
            uint32_t rax_6 = zx.d(*(**r8 + (rdx_1 << 1)))
            int32_t rax_7 = r8[1].d
            int32_t rax_8 = (r15_2 + 1).d
            arg4[1].d = rax_8
            
            if (rax_8 s> *(arg4 + 0xc))
                sub_140594770(arg4)
            
            void* r8_1 = *(*arg2[2] + zx.q(*(rbp_4 + 0x14)) * 0x10 - 8)
            int32_t rcx_6 = r12_2[1].d
            int64_t var_78 = *arg2
            uint32_t var_5c_1 = zx.d(*(rbp_4 + 0xa))
            int32_t var_54_1 = (r13_1 + 1).d
            int64_t var_38_1 = arg2[8]
            int32_t var_30_1 = 0xffffffff
            sub_1422cc4a0(arg1, &var_78, rbx_2, arg4, rax_6, var_80_1, var_78, var_80_1, r8_1, 
                *(r8_1 + 8), rcx_6, zx.d(*(rbp_4 + 8)) - 1)
            *(*arg4 + (r15_2 << 1)) = arg4[1].w - r15_2.w - 1
            int64_t rbx_3 = sx.q(arg4[1].d)
            int32_t rax_19 = (rbx_3 + 1).d
            arg4[1].d = rax_19
            
            if (rax_19 s> *(arg4 + 0xc))
                sub_140594770(arg4)
            
            r15_1 = var_80_1
            *(*arg4 + (rbx_3 << 1)) = 0
            *(*arg2 + 8) = rax_7 + rax_6
            void* rax_22 = *arg2
            *(rax_22 + 8) += 1
        
        i = sub_1422cb580(arg2)
    while (i != 0)

return i
