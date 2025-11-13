// 函数: sub_140d1ffa0
// 地址: 0x140d1ffa0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int16_t* var_78
sub_140d30800(arg1, &var_78)
int64_t var_38
sub_140bd5930(&var_38, &var_78)
int16_t* const rbx = 1

if (sub_140a32ae0(&var_78, u"/Script/", 1) != 0)
    rbx = 0xffff

int64_t var_20
sub_140be09b0(&var_20, rbx.d, &var_38)
int64_t var_30
int64_t var_28
int64_t var_18
int64_t var_10

if (var_38 != var_20 || var_30 != var_18 || var_28 != var_10)
    rbx = &data_142d40450
    int32_t var_70
    
    if (var_70 != 0)
        rbx = var_78
    
    void* rax_4 = sub_140d41340()
    
    if (data_143e1d7b4 != 0)
    label_140d200d6:
        int64_t var_58
        void var_48
        int128_t var_68 = *sub_140a1dfc0(sub_140ca8e90(&var_20, &var_58), &var_48)
        sub_140d2c760(arg1, &var_68)
        int64_t rcx_9 = var_58
        
        if (rcx_9 != 0)
            sub_140a74f90(rcx_9)
        
        rbx.b = 1
    else
        bool rcx_3
        
        if (data_143de5480 != 0)
            rcx_3 = GetCurrentThreadId() == data_143de5470
        
        bool z_1
        
        if (data_143de5480 == 0 || rcx_3 != 0)
            if (0 == data_143e1adfc)
                data_143e1adfc = 0
                z_1 = true
            else
                data_143e1adfc
                z_1 = false
        
        if ((data_143de5480 == 0 || rcx_3 != 0) && not(z_1))
            goto label_140d200d6
        
        void arg_10
        sub_140cad130(&arg_10)
        int16_t* rax_7 = sub_140d2ee50(rax_4, nullptr, rbx, 0)
        sub_140cad790()
        
        if (rax_7 == 0)
            goto label_140d200d6
        
        rbx.b = 0
else
    rbx.b = 0

int16_t* rcx_10 = var_78

if (rcx_10 != 0)
    sub_140a74f90(rcx_10)

return zx.q(rbx.b)
