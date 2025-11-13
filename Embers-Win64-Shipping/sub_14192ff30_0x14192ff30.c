// 函数: sub_14192ff30
// 地址: 0x14192ff30
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

*arg1 = &data_142ff7518
sub_1419107c0(arg1)
char rax_1

if (data_143f01c92 == 0)
    rax_1 = sub_140a80f40()

if (data_143f01c92 == 0 && rax_1 != 0)
    rax_1 = 1
else
    rax_1 = sub_140a80f10()
    
    if (rax_1 != 0)
        rax_1 = 1

int32_t rcx = arg1[3].d

if (rcx != 0 && *(arg1 + 0x3d) == 0)
    *(arg1 + 0x3d) = 1
    
    if (rax_1 == 0)
        void*** rdx_3 = (data_143f02bc8 + 0xf) & 0xfffffffffffffff0
        void* rax_2 = &rdx_3[0xa]
        
        if (rax_2 u> data_143f02bd0)
            sub_140b0e3d0(&data_143f02bc8, 0x60)
            rdx_3 = (data_143f02bc8 + 0xf) & 0xfffffffffffffff0
            rax_2 = &rdx_3[0xa]
        
        data_143f02bac += 1
        data_143f02bc8 = rax_2
        *data_143f02ba0 = rdx_3
        data_143f02ba0 = &rdx_3[1]
        int64_t var_50_1 = arg1[4]
        int128_t zmm0_1 = arg1[3].d.o
        void** const var_28 = &data_142d42ed8
        int128_t var_20_1 = zmm0_1
        *rdx_3 = &data_142ff4958
        rdx_3[1] = 0
        rdx_3[2] = sub_1419324e0
        rdx_3[4] = 0
        
        if (rdx_3[2] != 0)
            void** const* rcx_2 = &var_28
            (**rcx_2)(rcx_2, &rdx_3[4])
        
        void** const* rcx_3 = &var_28
        (*rcx_3)[2](rcx_3)
    else
        sub_141958330(rcx, arg1[4])

*arg1 = &data_142d3ff08

if ((arg2 & 1) != 0)
    j_sub_140a74f90(arg1)

return arg1
