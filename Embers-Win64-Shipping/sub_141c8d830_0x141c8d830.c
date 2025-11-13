// 函数: sub_141c8d830
// 地址: 0x141c8d830
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void var_98
int64_t rax_1 = __security_cookie ^ &var_98
int64_t performanceCount[0x2]
QueryPerformanceCounter(&performanceCount)
int64_t rbp = *arg2
int128_t zmm6
zmm6.q = float.d(performanceCount[0])
int64_t* rbx_1 = arg2[1]
zmm6.q = zmm6.q f* data_143d796f8
zmm6.q = zmm6.q f+ 16777216.0

if (rbx_1 != 0)
    rbx_1[1].d += 1

void*** rax_2 = sub_140a82f30(0x28, 8)
*rax_2 = &data_142ff86c8
rax_2[1] = arg1
rax_2[2] = rbp
rax_2[3] = rbx_1

if (rbx_1 != 0)
    rbx_1[1].d += 1

rax_2[4] = zmm6.q
*rax_2 = &data_142ff86e8
void*** var_58 = rax_2
void* var_68
void* const rax_3 = var_68

if (rax_2 != -8)
    rax_3 = &data_141c852f0

void* const var_68_1 = rax_3
int64_t* result = j_sub_140a82f30(0x50)
int64_t* result_1 = result
int128_t var_48

if (result != 0)
    *result = 0
    result[2] = var_68_1
    result[4] = var_58
    var_58 = nullptr
    *(result + 0x30) = var_48
    int128_t var_38
    *(result + 0x40) = var_38
    void* const rax_4 = var_68_1
    
    if (result_1[2] != 0)
        rax_4 = nullptr
    
    var_68_1 = rax_4
    int64_t* result_2 = *(arg1 + 0x1d0)
    *(arg1 + 0x1d0) = result_1
    result = result_2
    int64_t* result_3 = *result
    *result = result_1
    result_1 = result_3

if (var_68_1 != 0)
    void*** rcx_4 = &var_48
    
    if (var_58 != 0)
        rcx_4 = var_58
    
    result = (*rcx_4)[2](rcx_4, result_1)

if (rbx_1 != 0)
    result = zx.q(rbx_1[1].d)
    rbx_1[1].d -= 1
    
    if (result.d == 1)
        result = (**rbx_1)(rbx_1)
        int32_t rsi_1 = *(rbx_1 + 0xc)
        *(rbx_1 + 0xc) -= 1
        
        if (rsi_1 == 1)
            result = (*(*rbx_1 + 8))(rbx_1, zx.q(rsi_1))

__security_check_cookie(rax_1 ^ &var_98)
return result
