// 函数: sub_14243f300
// 地址: 0x14243f300
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

uint64_t r13 = zx.q(arg3)
void* r14 = sub_14242bce0(arg1 + 0x50, arg6)

if (arg4 != 0)
    uint32_t rax_1 = zx.d(arg5)
    int32_t rbx_1 = 1
    int32_t* rsi_2 = arg7 + 0x10
    uint64_t i_1 = zx.q(arg4)
    uint64_t i
    
    do
        if ((rbx_1 & rax_1) != 0)
            int32_t rax_2 = rsi_2[1]
            int64_t* rcx_1 = *(rsi_2 - 0x10)
            int32_t rax_3 = *rsi_2
            int64_t rax_5 = (*(*rcx_1 + 8))(rcx_1)
            *(arg1 + 0x48) -= 1
            int64_t r15_1 = sx.q(*r14)
            int64_t r12_2 = r15_1 << 6
            int64_t* rdx_2 = *(arg1 + 0x38) + r12_2
            rdx_2[4].d = data_14399fa54
            void* r8_2 = sx.q(*(rdx_2 + 0x34)) * 0x60 + *(arg1 + 0x28)
            int32_t rcx_5 = *(r8_2 + 0x4c) - (r13 << 1).d
            void* rdx_4
            
            if (*rdx_2 == 0)
                rdx_2[5].d = rax_3
                *(rdx_2 + 0x2c) = rax_2
                rdx_2[1] = rax_5
                rdx_2[6].d = r13.d
                *(rdx_2 + 0x24) = *(r8_2 + 0x54)
                *(r8_2 + 0x54) += 1
                int64_t rax_15 = sx.q(*(r8_2 + 0x5c))
                int64_t rcx_7 = *(arg1 + 0x38)
                rdx_4 = (rax_15 << 6) + rcx_7
                *(rcx_7 + r12_2 + 0x38) = rax_15.d
                *(rcx_7 + r12_2 + 0x3c) = *(rdx_4 + 0x3c)
            else
                int32_t var_44_1 = rcx_5
                int32_t var_50_1 = r13.d
                int32_t var_4c_1 = r13.d
                int32_t var_58 = rcx_5 * rax_3
                int64_t* rcx_6 = data_143f0f180
                int32_t var_54_1 = rcx_5 * rax_2
                (*(*rcx_6 + 0x528))(rcx_6, arg2, rax_5, 0, &var_58, *(rdx_2 + 0x1c), *rdx_2, 0, 
                    var_58, var_50_1, rcx_5)
                rdx_4 = *(arg1 + 0x38)
                *(rdx_4 + r12_2 + 0x38) = 0
                *(rdx_4 + r12_2 + 0x3c) = *(rdx_4 + 0x3c)
            
            *((sx.q(*(rdx_4 + 0x3c)) << 6) + *(arg1 + 0x38) + 0x38) = r15_1.d
            rax_1 = zx.d(arg5)
            *(rdx_4 + 0x3c) = r15_1.d
        
        rbx_1 = rol.d(rbx_1, 1)
        rsi_2 = &rsi_2[8]
        r14 += 4
        i = i_1
        i_1 -= 1
    while (i != 1)

return arg1 + 0x10
