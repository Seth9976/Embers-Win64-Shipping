// 函数: sub_141e85f30
// 地址: 0x141e85f30
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void var_98
int64_t rax_1 = __security_cookie ^ &var_98
void* rax_2 = arg1[2]
int32_t result

if (data_143f39be1 == 0)
    void* rcx_6 = &arg1[4]
    
    if (rax_2 != 0)
        rcx_6 = rax_2
    
    result = (*arg1)((*(*rcx_6 + 8))(rcx_6))
else
    int64_t rdx_1 = *arg1
    arg1[2] = 0
    int128_t zmm1 = *(arg1 + 0x30)
    int128_t var_48 = *(arg1 + 0x20)
    
    if (rdx_1 != 0)
        *arg1 = 0
    
    void var_28
    int64_t* rax_3 = sub_140958c20(&var_28, nullptr, 0xff)
    void* rdx_2 = *rax_3
    *(rdx_2 + 0x10) = rdx_1
    *(rdx_2 + 0x20) = rax_2
    int128_t* var_58_2 = nullptr
    *(rdx_2 + 0x30) = var_48
    *(rdx_2 + 0x40) = zmm1
    int64_t rax_4 = rdx_1
    
    if (*(rdx_2 + 0x10) != 0)
        rax_4 = 0
    
    *(rdx_2 + 0x50) = 2
    void* rcx_3 = *rax_3
    int64_t* rbx_1 = *(rcx_3 + 0x68)
    int64_t* var_78_1 = rbx_1
    
    if (rbx_1 != 0)
        rbx_1[9].d += 1
        rbx_1 = var_78_1
    
    int64_t* r9_1
    r9_1.b = 1
    result = sub_1409787e0(rcx_3, rax_3[1], rax_3[2].d, r9_1.b)
    
    if (rax_4 != 0)
        int128_t* rcx_4 = &var_48
        
        if (var_58_2 != 0)
            rcx_4 = var_58_2
        
        result = (*(*rcx_4 + 0x10))(rcx_4)
    
    if (rbx_1 != 0)
        result = rbx_1[9].d
        rbx_1[9].d -= 1
        
        if (result == 1)
            result = sub_140a2f6e0(var_78_1)

if (*arg1 != 0)
    void* rax_9 = arg1[2]
    void* rcx_8 = &arg1[4]
    
    if (rax_9 != 0)
        rcx_8 = rax_9
    
    result = (*(*rcx_8 + 0x10))(rcx_8)

__security_check_cookie(rax_1 ^ &var_98)
return result
