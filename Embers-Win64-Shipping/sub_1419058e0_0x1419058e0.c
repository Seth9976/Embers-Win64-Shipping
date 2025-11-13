// 函数: sub_1419058e0
// 地址: 0x1419058e0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

*arg1 = &data_142ff5698
int32_t rax_1 = arg1[5].d & 0xfffffff8
arg1[2].d = arg3
arg1[1].d = 0
*(arg1 + 0x14) = arg4
arg1[3].d = 0
arg1[4] = 0

if (arg8 != 0)
    arg3 = arg8

arg1[5].d = (zx.d(arg6) << 2 | rax_1) & 0xfffffff7
*(arg1 + 0x4c) = arg3
*(arg1 + 0x2c) = 0
__builtin_memset(&arg1[7], 0, 0x14)

if ((data_1439c74e9 != 0 && data_1439c74f0 != 0) || not(test_bit(arg4, 0xb)))
    char rax_2
    
    if (data_143f01c92 != 0)
        rax_2 = sub_140a80f10()
    
    if (data_143f01c92 == 0 || rax_2 != 0)
        sub_14190c5b0(arg1, arg5, zx.q(arg7), zx.q(arg8))
    else
        int64_t rdi_1 = 0
        
        if (arg5 != 0)
            int64_t rdx_4 = sx.q(*(arg1 + 0x4c))
            rdi_1 = (data_143f02bc8 + 0xf) & 0xfffffffffffffff0
            int64_t rax_3 = rdx_4 + rdi_1
            
            if (rax_3 u> data_143f02bd0)
                sub_140b0e3d0(&data_143f02bc8, rdx_4.d + 0x10)
                rdi_1 = (data_143f02bc8 + 0xf) & 0xfffffffffffffff0
                rax_3 = rdx_4 + rdi_1
            
            data_143f02bc8 = rax_3
            memcpy(rdi_1, arg5, *(arg1 + 0x4c))
        
        void*** rdx_9 = (data_143f02bc8 + 0xf) & 0xfffffffffffffff0
        void* rax_4 = &rdx_9[0xa]
        
        if (rax_4 u> data_143f02bd0)
            sub_140b0e3d0(&data_143f02bc8, 0x60)
            rdx_9 = (data_143f02bc8 + 0xf) & 0xfffffffffffffff0
            rax_4 = &rdx_9[0xa]
        
        data_143f02bac += 1
        data_143f02bc8 = rax_4
        int64_t var_60_1 = rdi_1
        *data_143f02ba0 = rdx_9
        void** const var_28 = &data_142ff5dc8
        data_143f02ba0 = &rdx_9[1]
        int128_t var_20_1 = arg1.o
        int32_t var_54_1 = arg8
        int64_t var_10_1 = arg7.q
        *rdx_9 = &data_142ff4958
        rdx_9[1] = 0
        rdx_9[2] = sub_14190a3f0
        rdx_9[4] = 0
        
        if (rdx_9[2] != 0)
            void** const* rcx_2 = &var_28
            (**rcx_2)(rcx_2, &rdx_9[4])
        
        void** const* rcx_3 = &var_28
        (*rcx_3)[2](rcx_3)

return arg1
