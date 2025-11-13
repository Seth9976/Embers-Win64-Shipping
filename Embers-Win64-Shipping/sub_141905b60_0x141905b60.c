// 函数: sub_141905b60
// 地址: 0x141905b60
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

uint64_t rdi = zx.q(arg3)
*arg1 = &data_142d3ff08
arg1[1].d = 0
*arg1 = &data_142ff4968
*(arg1 + 0xc) = 0
arg1[2].w = 0x100
arg1[3].d = rdi.d
*(arg1 + 0x1c) = arg4
arg1[4] = 0

if ((data_1439c74e9 == 0 || data_1439c74f0 == 0) && test_bit(arg4, 0xb))
    arg1[4] = sub_140a82f30(rdi, 0)

*arg1 = &data_142ff49a8
int32_t rax_3 = arg1[7].d & 0xfffffff8
arg1[5].d = 0
arg1[6] = 0
*(arg1 + 0x3c) = 0
arg1[7].d = (zx.d(arg6) << 2 | rax_3) & 0xfffffff7
arg1[9] = 0

if (arg8 != 0)
    rdi = zx.q(arg8)

arg1[0xa] = 0
*(arg1 + 0x5c) = rdi.d
arg1[0xb].d = 0

if ((data_1439c74e9 != 0 && data_1439c74f0 != 0) || not(test_bit(arg4, 0xb)))
    char rax_4
    
    if (data_143f01c92 != 0)
        rax_4 = sub_140a80f10()
    
    if (data_143f01c92 == 0 || rax_4 != 0)
        sub_14190c770(arg1, arg5, zx.q(arg7), zx.q(arg8))
    else
        int64_t rdi_1 = 0
        
        if (arg5 != 0)
            int64_t rdx = sx.q(*(arg1 + 0x5c))
            rdi_1 = (data_143f02bc8 + 0xf) & 0xfffffffffffffff0
            int64_t rax_5 = rdx + rdi_1
            
            if (rax_5 u> data_143f02bd0)
                sub_140b0e3d0(&data_143f02bc8, rdx.d + 0x10)
                rdi_1 = (data_143f02bc8 + 0xf) & 0xfffffffffffffff0
                rax_5 = rdx + rdi_1
            
            data_143f02bc8 = rax_5
            memcpy(rdi_1, arg5, *(arg1 + 0x5c))
        
        void*** rdx_5 = (data_143f02bc8 + 0xf) & 0xfffffffffffffff0
        void* rax_6 = &rdx_5[0xa]
        
        if (rax_6 u> data_143f02bd0)
            sub_140b0e3d0(&data_143f02bc8, 0x60)
            rdx_5 = (data_143f02bc8 + 0xf) & 0xfffffffffffffff0
            rax_6 = &rdx_5[0xa]
        
        data_143f02bac += 1
        data_143f02bc8 = rax_6
        int64_t var_70_1 = rdi_1
        *data_143f02ba0 = rdx_5
        void** const var_38 = &data_142ff5dc8
        data_143f02ba0 = &rdx_5[1]
        int128_t var_30_1 = arg1.o
        int32_t var_64_1 = arg8
        int64_t var_20_1 = arg7.q
        *rdx_5 = &data_142ff4958
        rdx_5[1] = 0
        rdx_5[2] = sub_14190a4f0
        rdx_5[4] = 0
        
        if (rdx_5[2] != 0)
            void** const* rcx_7 = &var_38
            (**rcx_7)(rcx_7, &rdx_5[4])
        
        void** const* rcx_8 = &var_38
        (*rcx_8)[2](rcx_8)

return arg1
