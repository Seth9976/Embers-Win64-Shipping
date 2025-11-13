// 函数: sub_140834fc0
// 地址: 0x140834fc0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

sub_140d266d0(arg1)
uint64_t result = zx.q(*(arg1 + 8) u>> 4)

if ((result.b & 1) == 0)
    uint64_t result_1
    int64_t* rax_1
    int512_t zmm1_1
    rax_1, zmm1_1 = sub_140b58170(&result_1, "Niagara", 1)
    j_sub_140b3db50()
    
    if (sub_140b404d0(&data_143de7d78, *rax_1, zmm1_1) != 0)
        int32_t rbx_3 = *(arg1 + 0x15c)
        result = sub_140b5b8a0(*(arg1 + 0x158), 0)
        int32_t rcx_3
        rcx_3.b = rbx_3 == 0
        
        if ((rcx_3.b & result.b) != 0)
            void var_88
            sub_14081da20(arg1 + 0x158, sub_140759700(&var_88, &data_14396f9f0))
            int64_t var_20
            
            if (var_20 != 0)
                sub_140a74f90(var_20)
            
            int64_t var_48
            
            if (var_48 != 0)
                sub_140a74f90(var_48)
            
            int64_t var_70
            
            if (var_70 != 0)
                sub_140a74f90(var_70)
            
            sub_14081da20(arg1 + 0x1d0, sub_140759700(&var_88, &data_14396fa40))
            
            if (var_20 != 0)
                sub_140a74f90(var_20)
            
            if (var_48 != 0)
                sub_140a74f90(var_48)
            
            if (var_70 != 0)
                sub_140a74f90(var_70)
            
            sub_14081da20(arg1 + 0x248, sub_140759700(&var_88, &data_14396fce8))
            
            if (var_20 != 0)
                sub_140a74f90(var_20)
            
            if (var_48 != 0)
                sub_140a74f90(var_48)
            
            if (var_70 != 0)
                sub_140a74f90(var_70)
            
            sub_14081da20(arg1 + 0xe0, sub_140759700(&var_88, &data_14396fd10))
            
            if (var_20 != 0)
                sub_140a74f90(var_20)
            
            if (var_48 != 0)
                sub_140a74f90(var_48)
            
            if (var_70 != 0)
                sub_140a74f90(var_70)
            
            sub_14081da20(arg1 + 0x68, sub_140759700(&var_88, &data_14396fd38))
            
            if (var_20 != 0)
                sub_140a74f90(var_20)
            
            if (var_48 != 0)
                sub_140a74f90(var_48)
            
            if (var_70 != 0)
                sub_140a74f90(var_70)
            
            result = sub_14081da20(arg1 + 0x2c0, sub_140759700(&var_88, &data_14396fd60))
            
            if (var_20 != 0)
                result = sub_140a74f90(var_20)
            
            if (var_48 != 0)
                result = sub_140a74f90(var_48)
            
            if (var_70 != 0)
                return sub_140a74f90(var_70)
    else
        sub_140d3a3a0(&result_1, arg1)
        int64_t rbx_2 = sx.q(data_143ce3a40)
        int32_t rax_3 = (rbx_2 + 1).d
        bool cond:0_1 = rax_3 s<= data_143ce3a44
        data_143ce3a40 = rax_3
        
        if (not(cond:0_1))
            sub_1405a4d70(&data_143ce3a38)
        
        result = result_1
        *(data_143ce3a38 + (rbx_2 << 3)) = result

return result
