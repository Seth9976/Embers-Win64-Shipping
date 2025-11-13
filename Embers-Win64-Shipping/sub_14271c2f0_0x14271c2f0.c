// 函数: sub_14271c2f0
// 地址: 0x14271c2f0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void var_b8
int64_t rax_1 = __security_cookie ^ &var_b8
uint64_t result

if (((arg1[0x16].d u>> 2).b & 1) == 0)
label_14271c4a6:
    int64_t rax_13 = *arg1
    arg1[0x1c] = 0
    result = (*(rax_13 + 0x2c8))(arg1)
else
    void* rcx = arg1[0xd]
    
    if (rcx == 0)
        goto label_14271c4a6
    
    if ((*(*(rcx + 0x220) + 0x40))(rcx + 0x220) == 0)
        goto label_14271c4a6
    
    int64_t (* var_88_1)() = sub_14271c2f0
    int32_t var_80_1 = 0
    void* rax_6 = sub_141dcc7f0(arg1[0xd])
    void*** rax_7 = sub_140a84c80(0, 0x30, 0)
    
    if (rax_7 != 0)
        *rax_7 = &data_142e33ea8
        sub_140d3a3a0(&rax_7[1], arg1)
        *(rax_7 + 0x10) = var_88_1.o
        rax_7[5] = sub_140a387b0()
        *rax_7 = &data_142e33f00
    
    int64_t var_78 = 0
    int32_t var_70_1 = 0
    
    if (rax_7 != 0)
        (*rax_7)[8](rax_7, &var_78)
    
    void var_68
    sub_140d3a3a0(&var_68, nullptr)
    int64_t var_60_1 = 0
    int64_t var_58_1 = 0
    void* var_48_1 = nullptr
    sub_1423e6200(rax_6, &arg1[0x1c], &var_78, 0x3e4ccccd, 0, 0xbf800000)
    
    if (var_58_1 != 0)
        void var_38
        void* rcx_7 = &var_38
        
        if (var_48_1 != 0)
            rcx_7 = var_48_1
        
        (*(*rcx_7 + 0x10))(rcx_7)
    
    result = sub_140745b20(&var_78)
    
    if (rax_7 != 0)
        (*rax_7)[7](rax_7, 0)
        result = sub_140a84c80(rax_7, 0, 0)
        
        if (result != 0)
            result = sub_140a74f90(result)

__security_check_cookie(rax_1 ^ &var_b8)
return result
