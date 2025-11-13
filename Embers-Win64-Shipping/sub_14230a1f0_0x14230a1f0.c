// 函数: sub_14230a1f0
// 地址: 0x14230a1f0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void* const* result = &__return_addr

if ((*(arg1 + 0x20d) & 0x10) == 0)
    int64_t rdi_1 = sx.q(arg1[0xf2].d)
    int32_t rax = (rdi_1 + 1).d
    arg1[0xf2].d = rax
    
    if (rax s> *(arg1 + 0x794))
        sub_140adefe0(&arg1[0xf1])
    
    int32_t rax_1 = arg2[1].d
    int64_t rdx_1 = rdi_1 * 9
    int64_t rcx_1 = arg1[0xf1]
    int64_t rbx_1 = 0
    int64_t zmm0 = *arg2
    *(rcx_1 + (rdx_1 << 2)) = zmm0
    *(rcx_1 + (rdx_1 << 2) + 8) = rax_1
    *(rcx_1 + (rdx_1 << 2) + 0xc) = arg3.d
    *(rcx_1 + (rdx_1 << 2) + 0x10) = arg4.d
    *(rcx_1 + (rdx_1 << 2) + 0x14) = arg5
    *(rcx_1 + (rdx_1 << 2) + 0x18) = arg6
    *(rcx_1 + (rdx_1 << 2) + 0x1c) = 0
    *(rcx_1 + (rdx_1 << 2) + 0x20) = data_14399fa50
    (*(*arg1 + 0x7c0))(arg1)
    result = sx.q(arg1[0x101].d)
    void** i = arg1[0x100]
    void* r15_1 = &i[result]
    uint64_t r12_2 = result << 3 u>> 3
    int128_t zmm8
    zmm8.d = arg4.d f/ __maxss_xmmss_memss(zmm0.d, 0x38d1b717).d
    
    if (i u> r15_1)
        r12_2 = 0
    
    if (r12_2 != 0)
        if (arg6 != 0)
            do
                char var_50_1 = arg6
                char var_58_1 = arg5.b
                result = sub_142211340(*i, arg2, arg3.d, arg4.d)
                rbx_1 += 1
                i = &i[1]
            while (rbx_1 != r12_2)
        else
            for (; i != r15_1; i = &i[1])
                void* rbx_2 = *i
                int128_t zmm0_1
                zmm0_1.d = sub_142216b90(rbx_2).d f* zmm8.d
                char var_50_2 = 0
                char var_58_2 = arg5.b
                result = sub_142211340(rbx_2, arg2, arg3.d, zmm0_1.d)

return result
