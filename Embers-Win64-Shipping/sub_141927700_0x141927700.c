// 函数: sub_141927700
// 地址: 0x141927700
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

*arg1 = &data_142d3ff08
arg1[1].d = 0
*arg1 = &data_142ff8210
int32_t rax = arg1[7].d
*(arg1 + 0x1c) = arg3
*(arg1 + 0xc) = 0
arg1[2].w = 0x100
arg1[3].d = arg2
arg1[4].d = arg4
arg1[5].d = 0
arg1[6] = 0
*(arg1 + 0x3c) = 0
__builtin_memset(&arg1[9], 0, 0x14)
arg1[7].d = (zx.d(arg6) << 2 | (rax & 0xfffffff8)) & 0xfffffff7

if (arg8 != 0)
    arg3 = arg8

*(arg1 + 0x5c) = arg3

if ((data_1439c74e9 != 0 && data_1439c74f0 != 0) || not(test_bit(arg4, 0xb)))
    char rax_2
    
    if (data_143f01c92 != 0)
        rax_2 = sub_140a80f10()
    
    if (data_143f01c92 == 0 || rax_2 != 0)
        sub_141935770(arg1, arg5, zx.q(arg7), zx.q(arg8))
    else
        int64_t rdi_1 = 0
        
        if (arg5 != 0)
            int64_t rdx = sx.q(*(arg1 + 0x5c))
            rdi_1 = (data_143f02bc8 + 0xf) & 0xfffffffffffffff0
            int64_t rax_3 = rdx + rdi_1
            
            if (rax_3 u> data_143f02bd0)
                sub_140b0e3d0(&data_143f02bc8, rdx.d + 0x10)
                rdi_1 = (data_143f02bc8 + 0xf) & 0xfffffffffffffff0
                rax_3 = rdx + rdi_1
            
            data_143f02bc8 = rax_3
            memcpy(rdi_1, arg5, *(arg1 + 0x5c))
        
        void*** rdx_5 = (data_143f02bc8 + 0xf) & 0xfffffffffffffff0
        void* rax_4 = &rdx_5[0xa]
        
        if (rax_4 u> data_143f02bd0)
            sub_140b0e3d0(&data_143f02bc8, 0x60)
            rdx_5 = (data_143f02bc8 + 0xf) & 0xfffffffffffffff0
            rax_4 = &rdx_5[0xa]
        
        data_143f02bac += 1
        data_143f02bc8 = rax_4
        int64_t var_60_1 = rdi_1
        *data_143f02ba0 = rdx_5
        void** const var_28 = &data_142ff5dc8
        data_143f02ba0 = &rdx_5[1]
        int128_t var_20_1 = arg1.o
        int32_t var_54_1 = arg8
        int64_t var_10_1 = arg7.q
        *rdx_5 = &data_142ff4958
        rdx_5[1] = 0
        rdx_5[2] = sub_141932230
        rdx_5[4] = 0
        
        if (rdx_5[2] != 0)
            void** const* rcx_6 = &var_28
            (**rcx_6)(rcx_6, &rdx_5[4])
        
        void** const* rcx_7 = &var_28
        (*rcx_7)[2](rcx_7)

return arg1
