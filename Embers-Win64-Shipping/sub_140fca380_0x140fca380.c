// 函数: sub_140fca380
// 地址: 0x140fca380
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void var_58
int64_t rax_1 = __security_cookie ^ &var_58
void var_30
int64_t* rax_3 = (*(*arg1 + 0xa0))(arg1, &var_30)
int64_t rdx_1 = data_143e2b878
int64_t rcx = *rax_3
int64_t var_38 = rcx
int64_t var_28
int64_t rax_4

if ((-0x8000000000000000 & rdx_1) == 0 || rcx != 0)
    rax_4 = *sub_140b63580(&data_143e2b878, &var_28)
    rax_4.b = var_38 == rax_4
else
    int64_t* rcx_1 = &var_38
    char* rdx_2 = rdx_1 & 0x7fffffffffffffff
    
    if (data_143e2b884 != 0)
        rax_4 = sub_140b5b9d0(rcx_1, rdx_2)
    else
        rax_4 = sub_140b5b8c0(rcx_1, rdx_2)

int64_t result

if (rax_4.b == 0)
    *(arg1 + 0xc) = htonl(arg2)
    result = 2
    arg1[1].w = 2
else if (arg2 == 0)
    result = (*(*arg1 + 0xd0))(arg1)
else if (arg2 != 0xffffffff)
    uint32_t rax_8 = htonl(arg2)
    int64_t var_20_1 = 0
    var_28 = 0
    var_20_1:5.b = (rax_8 u>> 8).b
    var_20_1:4.b = rax_8.b
    var_20_1:7.b = (rax_8 u>> 0x18).b
    var_20_1:6.b = (rax_8 u>> 0x10).b
    var_20_1:2.w = 0xffff
    result = (*(*arg1 + 0xa8))(arg1, &var_28)
else
    result = (*(*arg1 + 0xe0))(arg1)

__security_check_cookie(rax_1 ^ &var_58)
return result
