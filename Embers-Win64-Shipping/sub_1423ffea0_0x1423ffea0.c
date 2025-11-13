// 函数: sub_1423ffea0
// 地址: 0x1423ffea0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

__chkstk(0x1650)
void var_1658
int64_t rax_1 = __security_cookie ^ &var_1658
int32_t var_1600 = *(arg1 + 0xc)
int32_t rax_3 = arg1[2].d
uint128_t* rdx_1 = *arg1 + 0x250
int64_t var_1608 = 0
int32_t var_15fc = rax_3
void var_15b8
sub_141e98ce0(&var_15b8, rdx_1, &var_1608)
int32_t rcx_1 = arg1[1].d
int32_t r9 = *(arg1 + 0x1c)
int64_t var_15a8
int64_t var_15e0 = var_15a8
int64_t var_15f0 = data_14395d9e8
int64_t var_15f8 = data_14395da00
int32_t var_1618 = 3
char rax_7 = arg1[1].b & 1
int128_t var_15d8
__builtin_memset(&var_15d8, 0, 0x1c)
int32_t var_15e8 = 0x11
sub_141e9a320(*arg1, arg2, &var_15f8, r9, (rcx_1 u>> 1).b & 1, &var_15b8, rax_7, *(arg1 + 0x14), 
    var_1618)

if ((arg1[3].b & 2) != 0)
    int64_t* rbx_1 = *arg1
    
    if (rbx_1 != 0)
        int64_t* rcx_4 = rbx_1[0x46]
        
        if (rcx_4 != 0)
            rcx_4[1].d -= 1
            
            if (rcx_4[1].d == 1)
                (**rcx_4)(rcx_4, 1)
        
        sub_141412c30(rbx_1)
        j_sub_140a74f90(rbx_1)

int64_t result = sub_1413c58e0(&var_15b8)
__security_check_cookie(rax_1 ^ &var_1658)
return result
