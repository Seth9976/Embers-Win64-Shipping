// 函数: sub_1420abd90
// 地址: 0x1420abd90
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void var_a8
int64_t rax_1 = __security_cookie ^ &var_a8
(*(*arg1 + 0x5e8))()
void* result

if ((arg1[0x50].b & 1) != 0 || arg2 != 0)
    void* rax_4 = sub_141dcc7f0(arg1)
    int64_t* rax_5 = sub_140a84c80(0, 0x30, 0)
    
    if (rax_5 != 0)
        *rax_5 = &data_142d57800
        sub_140d3a3a0(&rax_5[1], arg1)
        rax_5[2] = sub_14094eacc
        rax_5[4] = sub_140a387b0()
        *rax_5 = &data_142d57858
    
    int64_t var_78 = 0
    int32_t var_70_1 = 0
    
    if (rax_5 != 0)
        (*(*rax_5 + 0x40))(rax_5, &var_78)
    
    void var_68
    sub_140d3a3a0(&var_68, nullptr)
    int64_t var_60_1 = 0
    int64_t var_58_1 = 0
    void* var_48_1 = nullptr
    sub_1423e6200(rax_4, &arg1[0x58], &var_78, 0x3f800000, 1, 0xbf800000)
    
    if (var_58_1 != 0)
        void var_38
        void* rcx_8 = &var_38
        
        if (var_48_1 != 0)
            rcx_8 = var_48_1
        
        (*(*rcx_8 + 0x10))(rcx_8)
    
    result = sub_140745b20(&var_78)
    
    if (rax_5 != 0)
        (*(*rax_5 + 0x38))(rax_5, 0)
        result = sub_140a84c80(rax_5, 0, 0)
        
        if (result != 0)
            result = sub_140a74f90(result)
else
    void* rax_3 = sub_141dcc7f0(arg1)
    result = sub_1423dce10(rax_3, &arg1[0x58])
    
    if (result != 0)
        result = sub_1423e60e0(rax_3, arg1[0x58])
    
    arg1[0x58] = 0

__security_check_cookie(rax_1 ^ &var_a8)
return result
