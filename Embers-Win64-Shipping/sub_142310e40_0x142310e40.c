// 函数: sub_142310e40
// 地址: 0x142310e40
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void var_48
int64_t rax_1 = __security_cookie ^ &var_48
*arg5 = 0xffffffff
*arg3 = data_143dbb0c0
arg3[1] = data_143dbb0d0
arg3[2] = data_143dbb0e0
*arg4 = 0xffffffff
char rax_2 = sub_140b5b8a0(arg2.d, 0)
int32_t rcx
rcx.b = arg2:4.d == 0
int128_t* rax_4

if ((rcx.b & rax_2) == 0)
    int32_t var_28
    sub_14230f130(arg1 + 0xe8, &var_28, arg2)
    int64_t rax_3 = sx.q(var_28)
    void* const rdx_3
    
    if (rax_3.d == 0xffffffff)
        rdx_3 = nullptr
    else
        rdx_3 = rax_3 * 0x60 + *(arg1 + 0xe8)
    
    rax_4 = rdx_3 + 0x10
    
    if (rdx_3 == 0)
        rax_4 = nullptr

int64_t result

if ((rcx.b & rax_2) != 0 || rax_4 == 0)
    result = 0
else
    *arg3 = *rax_4
    arg3[1] = rax_4[1]
    arg3[2] = rax_4[2]
    *arg5 = *(rax_4 + 0x38)
    *arg4 = *(rax_4 + 0x3c)
    result = rax_4[3].q

__security_check_cookie(rax_1 ^ &var_48)
return result
