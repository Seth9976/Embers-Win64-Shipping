// 函数: sub_142987270
// 地址: 0x142987270
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t var_48 = -2
void var_68
int64_t rax_1 = __security_cookie ^ &var_68
int64_t result = (*(*arg1 + 0x10))()

if (result == -1)
    int128_t var_30 = data_143702ea0
    char var_40 = 0
    sub_14058ad40(&var_40, "Cannot determine current file position (%T).", zx.q((result + 0x2d).d))
    sub_142c9c090(&var_40)
    noreturn

int32_t i_1 = 0

if ((arg2[1] - *arg2) s>> 3 != 0)
    uint64_t i = 0
    
    do
        int64_t rcx_2 = *(*arg2 + (i << 3))
        char var_20 = rcx_2.b
        uint8_t var_1f_1 = (rcx_2 u>> 8).b
        uint8_t var_1e_1 = (rcx_2 u>> 0x10).b
        uint8_t var_1d_1 = (rcx_2 u>> 0x18).b
        uint8_t var_1c_1 = (rcx_2 u>> 0x20).b
        uint8_t var_1b_1 = (rcx_2 u>> 0x28).b
        uint8_t var_1a_1 = (rcx_2 u>> 0x30).b
        uint8_t var_19_1 = (rcx_2 u>> 0x38).b
        (*(*arg1 + 8))(arg1, &var_20, 8)
        i_1 += 1
        i = zx.q(i_1)
    while (i u< (arg2[1] - *arg2) s>> 3)

__security_check_cookie(rax_1 ^ &var_68)
return result
