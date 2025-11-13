// 函数: sub_140ab1680
// 地址: 0x140ab1680
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t* rsi
int64_t var_18

if (arg2 == 0)
    rsi = &data_143db9ab0
    
    if (data_143db9ac0 == 0)
        int64_t* rax_8 = sub_140ab1410(&var_18, sub_140b19de0())
        
        if (rax_8 != &data_143db9ab0)
            if (data_143db9ac0 != 0)
                int64_t rcx_4 = data_143db9ab0
                data_143db9ac0 = 0
                
                if (rcx_4 != 0)
                    sub_140a74f90(rcx_4)
            
            data_143db9ab0 = 0
            data_143db9ab0 = *rax_8
            *rax_8 = 0
            data_143db9ab8 = rax_8[1].d
            data_143db9abc = *(rax_8 + 0xc)
            rax_8[1] = 0
            data_143db9ac0 = 1
        
    label_140ab17c4:
        int64_t rcx_5 = var_18
        
        if (rcx_5 != 0)
            sub_140a74f90(rcx_5)
else
    if (zx.d(arg2) != 1)
        *arg1 = 0
        arg1[1] = 0
        return arg1
    
    rsi = &data_143db9ac8
    
    if (data_143db9ad8 == 0)
        int64_t* rax_3 = sub_140ab1410(&var_18, sub_140b199f0())
        
        if (rax_3 != &data_143db9ac8)
            if (data_143db9ad8 != 0)
                int64_t rcx_2 = data_143db9ac8
                data_143db9ad8 = 0
                
                if (rcx_2 != 0)
                    sub_140a74f90(rcx_2)
            
            data_143db9ac8 = 0
            data_143db9ac8 = *rax_3
            *rax_3 = 0
            data_143db9ad0 = rax_3[1].d
            data_143db9ad4 = *(rax_3 + 0xc)
            rax_3[1] = 0
            data_143db9ad8 = 1
        
        goto label_140ab17c4
sub_140596d10(arg1, rsi)
return arg1
