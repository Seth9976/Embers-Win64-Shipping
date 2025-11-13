// 函数: sub_14200fb30
// 地址: 0x14200fb30
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

sub_1405a46b0(&data_14399fc40, arg1)
sub_1405a46b0(&data_14399ff40, arg1)
sub_1405a46b0(&data_14399ff28, arg1)
sub_1405a46b0(&data_14399ff58, arg1)
sub_1405a46b0(&data_14399ff70, arg1)
sub_1405a46b0(&data_14399ff88, arg1)
sub_1405a46b0(&data_1439a02d0, arg1)
uint64_t result = sub_1405a46b0(&data_143a30478, arg1)

if (*(arg1 + 0x69) == 0)
    result = sub_1405a46b0(data_143e29f28 + 0x528, arg1)

if (*(arg1 + 4) != 0)
    if (*(arg1 + 0x50) == 0)
        result = sub_142001640(arg1, arg1 + 0x70)
        
        if (*(arg1 + 0x98) s> 1)
            int64_t* r9_1 = &data_143f3f040
            
            if (*(arg1 + 0x69) != 0)
                r9_1 = &data_143f3f060
            
            sub_140b729b0(&data_143f3f020, arg1 + 0x90, &data_143f3f1d0, r9_1)
            int64_t var_28
            void arg_8
            void arg_10
            sub_140a2e390(&var_28, %lld", (*sub_140b29d90(&arg_8)
                - *sub_140b0a2c0(&arg_10, 0x7b2, 1, 1, 0, 0, 0, 0)) s/ 0x989680)
            result = sub_140b729b0(&data_143f3f020, arg1 + 0x90, &data_143f3f1a0, &var_28)
            int64_t rcx_6 = var_28
            
            if (rcx_6 != 0)
                result = sub_140a74f90(rcx_6)
            
            bool cond:1_1 = *(arg1 + 0x9c) == 0
            *(arg1 + 0x98) = 0
            
            if (not(cond:1_1))
                result = sub_1405947f0(arg1 + 0x90, 0)
    
    *(arg1 + 4) = 0x100

return result
