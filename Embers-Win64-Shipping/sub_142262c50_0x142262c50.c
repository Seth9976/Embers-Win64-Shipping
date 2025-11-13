// 函数: sub_142262c50
// 地址: 0x142262c50
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void var_b8
int64_t rax_1 = __security_cookie ^ &var_b8
int64_t (* var_88)(int64_t* arg1) = arg1[0xa0]
void* rax_4 = sub_1423dce10(sub_141dcc7f0(arg1), &var_88)
uint64_t result

if (rax_4 == 0 || *(rax_4 + 1) == 2)
    if (arg1[0x59].b != 0)
        int64_t* rdx_4 = arg1[0x4a]
        int64_t* rax_12 = rdx_4
        
        if (rdx_4 == 0)
            rax_12 = arg1[0xa9]
        
        if (rax_12 == 0)
            rdx_4 = arg1
        else if (rdx_4 == 0)
            rdx_4 = arg1[0xa9]
        
        (*(*arg1 + 0xd18))(arg1, rdx_4)
    
    result = sub_14242f0d0((*(*arg1 + 0x150))(arg1))
else
    int32_t var_80_1 = 0
    var_88 = sub_142569140
    void* rax_5 = sub_141dcc7f0(arg1)
    void*** rax_6 = sub_140a84c80(0, 0x30, 0)
    
    if (rax_6 != 0)
        *rax_6 = &data_142e33ea8
        sub_140d3a3a0(&rax_6[1], arg1)
        *(rax_6 + 0x10) = var_88.o
        rax_6[5] = sub_140a387b0()
        *rax_6 = &data_142e33f00
    
    int64_t var_78 = 0
    int32_t var_70_1 = 0
    
    if (rax_6 != 0)
        (*rax_6)[8](rax_6, &var_78)
    
    void var_68
    sub_140d3a3a0(&var_68, nullptr)
    int64_t var_60_1 = 0
    int64_t var_58_1 = 0
    void* var_48_1 = nullptr
    sub_1423e6200(rax_5, &arg1[0xa1], &var_78, 0x3c23d70a, 0, 0xbf800000)
    
    if (var_58_1 != 0)
        void var_38
        void* rcx_6 = &var_38
        
        if (var_48_1 != 0)
            rcx_6 = var_48_1
        
        (*(*rcx_6 + 0x10))(rcx_6)
    
    result = sub_140745b20(&var_78)
    
    if (rax_6 != 0)
        (*rax_6)[7](rax_6, 0)
        result = sub_140a84c80(rax_6, 0, 0)
        
        if (result != 0)
            result = sub_140a74f90(result)

__security_check_cookie(rax_1 ^ &var_b8)
return result
