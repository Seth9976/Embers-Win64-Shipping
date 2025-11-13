// 函数: sub_140fc9a00
// 地址: 0x140fc9a00
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void var_88
int64_t rax_1 = __security_cookie ^ &var_88
void var_48
int64_t* rax_3 = (*(*arg2 + 0xa0))(arg2, &var_48)
int64_t rdx_1 = data_143e2b878
int64_t r8 = *rax_3
int64_t var_58 = r8
int64_t rax_4

if ((-0x8000000000000000 & rdx_1) == 0 || r8 != 0)
    int32_t var_40
    rax_4 = *sub_140b63580(&data_143e2b878, &var_40)
    rax_4.b = var_58 == rax_4
else
    int64_t* rcx_1 = &var_58
    char* rdx_2 = rdx_1 & 0x7fffffffffffffff
    
    if (data_143e2b884 != r8.b)
        rax_4 = sub_140b5b9d0(rcx_1, rdx_2)
    else
        rax_4 = sub_140b5b8c0(rcx_1, rdx_2)

int32_t optlen
int32_t level
int128_t* optval

if (rax_4.b == 0)
    int32_t var_50
    optval = &var_50
    int32_t var_4c_1 = *(arg3 + 0xc)
    level = 0
    var_50 = *(arg2 + 0xc)
    optlen = 8
else
    uint32_t var_28_1 = htonl((*(*arg3 + 0x108))(arg3))
    int128_t var_38
    optval = &var_38
    optlen = 0x14
    level = 0x29
    var_38 = *(arg2 + 0x10)

int32_t result
result.b = setsockopt(*(arg1 + 0x28), level, 0xd, optval, optlen) == 0
__security_check_cookie(rax_1 ^ &var_88)
return result
