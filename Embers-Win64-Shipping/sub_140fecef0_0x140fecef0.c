// 函数: sub_140fecef0
// 地址: 0x140fecef0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void var_98
int64_t rax_1 = __security_cookie ^ &var_98
int64_t* rdi = *(*(arg1 + 0x70) + 0x150)
void var_58
int32_t rax_4 = (*(*rdi + 0xe8))(rdi, *(arg1 + 0x68), &var_58, 0x10, 0)
int64_t performanceCount
BOOL i = QueryPerformanceCounter(&performanceCount)
int128_t zmm7
zmm7.q = float.d(performanceCount)
zmm7.q = zmm7.q f* data_143d796f8

if (rax_4 == 1)
    uint128_t zmm6 = 0x3fe0000000000000
    
    do
        int64_t performanceCount_1
        i = QueryPerformanceCounter(&performanceCount_1)
        int128_t zmm0
        zmm0.q = float.d(performanceCount_1)
        zmm0.q = zmm0.q f* data_143d796f8
        zmm0.q = zmm0.q f- zmm7.q
        
        if (zmm0.q f>= zmm6.q)
            break
        
        zmm6 = sub_140b73230(0x3ba3d70a)
        i = (*(*rdi + 0xe8))(rdi, *(arg1 + 0x68), &var_58, 0x10, 0)
    while (i == 1)

__security_check_cookie(rax_1 ^ &var_98)
return i
