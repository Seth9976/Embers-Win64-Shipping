// 函数: sub_14091c9a0
// 地址: 0x14091c9a0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void var_d8
int64_t rax_1 = __security_cookie ^ &var_d8
int16_t* const rdx

if (arg2[1].d == 0)
    rdx = &data_142d40450
else
    rdx = *arg2

void var_b8
sub_140685ed0(&var_b8, rdx)

if (*(arg1 + 0x14) != 0)
    *(arg1 + 0x14) = 1
else
    int64_t rcx_1 = sx.q(arg1[2].d)
    
    if ((rcx_1 + 4).d u> arg1[1].d)
        *(arg1 + 0x14) = 1
    else
        uint32_t count
        *(rcx_1 + *arg1) = (count u>> 0x18).b
        *(sx.q(arg1[2].d) + *arg1 + 1) = (count u>> 0x10).b
        *(sx.q(arg1[2].d) + *arg1 + 2) = (count u>> 8).b
        *(sx.q(arg1[2].d) + *arg1 + 3) = count.b
        arg1[2].d += 4
        int64_t rcx_5 = sx.q(arg1[2].d)
        
        if (*(arg1 + 0x14) != 0 || rcx_5.d + count u> arg1[1].d)
            *(arg1 + 0x14) = 1
        else if (count s> 0)
            int64_t var_30
            memcpy(rcx_5 + *arg1, var_30, count)
            arg1[2].d += count

int64_t var_38

if (var_38 != 0)
    sub_140a74f90(var_38)

__security_check_cookie(rax_1 ^ &var_d8)
return arg1
