// 函数: sub_1408dfeb0
// 地址: 0x1408dfeb0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

uint64_t result = zx.q(arg5)
int128_t var_48 = data_142e11d10

if (result.d != 0)
    uint64_t i_1 = zx.q(result.d)
    int32_t rbp_1 = var_48:0xc.d
    void* rdi_1 = arg3 + 1
    int32_t r12_1 = var_48.d
    int32_t r14_1 = var_48:8.d
    int32_t r15_1 = var_48:4.d
    uint64_t result_1 = result
    uint64_t i
    
    do
        int32_t rcx = arg2[3].d
        uint64_t rdx = zx.q(*(arg2 + 0x1c))
        int64_t rsi_1 = *arg2
        uint64_t r11_3 = zx.q(((0x3f - rcx) u>> 3) + rdx.d)
        int64_t r8_2 = *(rdx + rsi_1) << rcx.b | arg2[2]
        *(arg2 + 0x1c) = r11_3.d
        uint64_t r9_1 = r8_2 u>> 1
        arg2[2] = r9_1
        arg2[3].d = (rcx | 0x38) - 1
        
        if ((r8_2.b & 1) == 0)
            int64_t r8_5 = *(r11_3 + rsi_1) << ((rcx | 0x38) - 1).b | r9_1
            arg2[2] = r8_5
            uint64_t r13_3 = zx.q(((0x3f - ((rcx | 0x38) - 1)) u>> 3) + r11_3.d)
            int32_t rax_1 = ((rcx | 0x38) - 1) | 0x38
            *(arg2 + 0x1c) = r13_3.d
            arg2[3].d = rax_1
            void* rdx_2 = arg1 + ((zx.q(r8_5.d) & 0x7ff) << 1)
            int32_t rcx_5 = sx.d(*(rdx_2 + 0x2010))
            uint64_t r8_6 = r8_5 u>> rcx_5.b
            int32_t rax_2 = rax_1 - rcx_5
            arg2[2] = r8_6
            arg2[3].d = rax_2
            int64_t r11_4 = sx.q(*(rdx_2 + 0x2011))
            int32_t r9_2 = (r11_4 - 2).d
            
            if (r11_4.d s>= 4)
                int32_t r9_3 = r9_2 s>> 1
                char rcx_6 = r9_3.b
                rax_2 -= r9_3
                uint64_t rdx_4 = r8_6 u>> rcx_6
                arg2[2] = rdx_4
                arg2[3].d = rax_2
                r9_2 = (((1 << rcx_6).d - 1) & r8_6.d) + *(&data_143cebee0 + (r11_4 << 2))
                r8_6 = rdx_4
            
            int64_t rbx_3 = *(r13_3 + rsi_1) << rax_2.b | r8_6
            int32_t rax_3 = rax_2 | 0x38
            uint64_t r13_4 = zx.q(r13_3.d + ((0x3f - rax_2) u>> 3))
            arg2[2] = rbx_3
            arg2[3].d = rax_3
            *(arg2 + 0x1c) = r13_4.d
            void* rdx_6 = arg1 + ((zx.q(rbx_3.d) & 0x7ff) << 1)
            int32_t rcx_12 = sx.d(*(rdx_6 + 0x2010))
            uint64_t rbx_4 = rbx_3 u>> rcx_12.b
            int32_t rax_4 = rax_3 - rcx_12
            arg2[2] = rbx_4
            arg2[3].d = rax_4
            int64_t r8_7 = sx.q(*(rdx_6 + 0x2011))
            int32_t r11_5 = (r8_7 - 2).d
            
            if (r8_7.d s>= 4)
                int32_t r11_6 = r11_5 s>> 1
                char rcx_13 = r11_6.b
                rax_4 -= r11_6
                uint64_t rdx_8 = rbx_4 u>> rcx_13
                arg2[2] = rdx_8
                int32_t r11_9 = ((1 << rcx_13).d - 1) & rbx_4.d
                arg2[3].d = rax_4
                rbx_4 = rdx_8
                r11_5 = r11_9 + *(&data_143cebee0 + (r8_7 << 2))
            
            int64_t r8_10 = *(r13_4 + rsi_1) << rax_4.b | rbx_4
            int32_t rax_5 = rax_4 | 0x38
            int32_t rcx_18 = ((0x3f - rax_4) u>> 3) + r13_4.d
            arg2[2] = r8_10
            *(arg2 + 0x1c) = rcx_18
            arg2[3].d = rax_5
            void* rdx_10 = arg1 + ((zx.q(r8_10.d) & 0x7ff) << 1)
            int32_t rcx_21 = sx.d(*(rdx_10 + 0x2010))
            uint64_t r8_11 = r8_10 u>> rcx_21.b
            int32_t rax_6 = rax_5 - rcx_21
            arg2[2] = r8_11
            arg2[3].d = rax_6
            int64_t r13_5 = sx.q(*(rdx_10 + 0x2011))
            int32_t rbx_5 = (r13_5 - 2).d
            
            if (r13_5.d s>= 4)
                int32_t rbx_6 = rbx_5 s>> 1
                char rcx_22 = rbx_6.b
                rax_6 -= rbx_6
                uint64_t rdx_12 = r8_11 u>> rcx_22
                arg2[2] = rdx_12
                arg2[3].d = rax_6
                rbx_5 = (((1 << rcx_22).d - 1) & r8_11.d) + *(&data_143cebee0 + (r13_5 << 2))
                r8_11 = rdx_12
            
            uint64_t r13_6 = zx.q(rcx_18)
            int64_t rsi_4 = *(r13_6 + rsi_1) << rax_6.b | r8_11
            int32_t rax_7 = rax_6 | 0x38
            arg2[2] = rsi_4
            *(arg2 + 0x1c) = ((0x3f - rax_6) u>> 3) + r13_6.d
            arg2[3].d = rax_7
            void* rdx_14 = arg1 + ((zx.q(rsi_4.d) & 0x7ff) << 1)
            int32_t rcx_29 = sx.d(*(rdx_14 + 0x2010))
            uint64_t rsi_5 = rsi_4 u>> rcx_29.b
            int32_t rax_8 = rax_7 - rcx_29
            arg2[2] = rsi_5
            arg2[3].d = rax_8
            int64_t r13_7 = sx.q(*(rdx_14 + 0x2011))
            int32_t r8_12 = (r13_7 - 2).d
            
            if (r13_7.d s>= 4)
                int32_t r8_13 = r8_12 s>> 1
                char rcx_30 = r8_13.b
                arg2[2] = rsi_5 u>> rcx_30
                arg2[3].d = rax_8 - r8_13
                r8_12 = (((1 << rcx_30).d - 1) & rsi_5.d) + *(&data_143cebee0 + (r13_7 << 2))
            
            r14_1 += rbx_5
            r12_1 += r9_2
            i_1 = result_1
            r15_1 += r11_5
            rbp_1 += r8_12
            var_48.d = r12_1
            var_48:0xc.d = rbp_1
            var_48:4.d = r15_1
            var_48:8.d = r14_1
        
        *(rdi_1 + 1) = var_48.b
        *rdi_1 = var_48:4.b
        *(rdi_1 - 1) = var_48:8.b
        result = zx.q(var_48:0xc.b)
        *(rdi_1 + 2) = result.b
        rdi_1 += arg4
        i = i_1
        i_1 -= 1
        result_1 = i_1
    while (i != 1)

return result
