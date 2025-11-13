// 函数: sub_142094430
// 地址: 0x142094430
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void var_68
int64_t rax_1 = __security_cookie ^ &var_68
int64_t* rcx = *(arg3 + 0x20)
void* const rax_3

if (rcx == 0)
    rax_3 = nullptr
else
    rax_3 = (*(*rcx + 0x260))(rcx)

*arg2 = data_143dbb0c0
arg2[1] = data_143dbb0d0
arg2[2] = data_143dbb0e0

if (rax_3 != 0)
    void* r8 = *(rax_3 + 0x130)
    
    if (r8 != 0)
        int64_t* rcx_1 = *(r8 + 0xc0)
        
        if (rcx_1 != 0)
            void var_48
            int128_t* rax_4 = (*(*rcx_1 + 0x408))(rcx_1, &var_48, *(r8 + 0xc8), 0)
            *arg2 = *rax_4
            arg2[1] = rax_4[1]
            arg2[2] = rax_4[2]

__security_check_cookie(rax_1 ^ &var_68)
return arg2
