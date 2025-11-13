// 函数: sub_140fed030
// 地址: 0x140fed030
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void var_98
int64_t rax_1 = __security_cookie ^ &var_98
data_143f0f168 = 0
int64_t* rdi = *(arg1 + 0x150)
int64_t* rcx = *(arg1 + 0x168)
int64_t var_58 = 3
int64_t* var_68 = nullptr
int64_t result = (*(*rcx + 0xc0))(rcx, &var_58, &var_68)

if (result.d == 0)
    int128_t zmm6
    int128_t var_18_1 = zmm6
    (*(*rdi + 0xd8))(rdi, var_68)
    (*(*rdi + 0xe0))(rdi, var_68)
    
    if (data_143f01c92 != 0 && sub_140a80f40() != 0 && sub_141976800() != 0)
        sub_141989210()
    
    int64_t result_1
    int32_t i = (*(*rdi + 0xe8))(rdi, var_68, &result_1, 0x10, 0)
    
    if (data_143f01c92 != 0 && sub_140a80f40() != 0 && sub_1419768f0() != 0)
        _initp_eh_hooks()
    
    int64_t performanceCount
    QueryPerformanceCounter(&performanceCount)
    zmm6.q = float.d(performanceCount)
    zmm6.q = zmm6.q f* data_143d796f8
    
    while (i == 1)
        QueryPerformanceCounter(&performanceCount)
        int128_t zmm0
        zmm0.q = float.d(performanceCount)
        zmm0.q = zmm0.q f* data_143d796f8
        zmm0.q = zmm0.q f- zmm6.q
        
        if (zmm0.q f>= 0x3fe0000000000000)
            break
        
        zmm6 = sub_140b73230(0x3ba3d70a)
        
        if (data_143f01c92 != 0 && sub_140a80f40() != 0)
            char rax_12
            rax_12, zmm6 = sub_141976800()
            
            if (rax_12 != 0)
                zmm6 = sub_141989210()
        
        i = (*(*rdi + 0xe8))(rdi, var_68, &result_1, 0x10, 0)
        
        if (data_143f01c92 != 0 && sub_140a80f40() != 0 && sub_1419768f0() != 0)
            _initp_eh_hooks()
    
    result = data_143f0f168
    
    if (i == 0)
        result = result_1
    
    data_143f0f168 = result

int64_t* rcx_11 = var_68
var_68 = nullptr

if (rcx_11 != 0)
    result = (*(*rcx_11 + 0x10))(rcx_11)
    int64_t* rcx_12 = var_68
    
    if (rcx_12 != 0)
        result = (*(*rcx_12 + 0x10))(rcx_12)

__security_check_cookie(rax_1 ^ &var_98)
return result
