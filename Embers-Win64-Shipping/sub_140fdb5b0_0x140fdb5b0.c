// 函数: sub_140fdb5b0
// 地址: 0x140fdb5b0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void var_68
int64_t rax_1 = __security_cookie ^ &var_68
*arg1 = &data_142ef6b10
arg1[0xe] = &data_142ef6b68
int64_t* rcx = arg1[0x15]

if (rcx != 0)
    int32_t var_48
    (*(*rcx + 0x50))(rcx, &var_48)
    int64_t rcx_1
    int32_t var_44
    int32_t var_40
    int32_t var_3c
    
    if ((arg1[8].d & 0x400000) == 0)
        rcx_1 = sub_141998570(var_48, var_44, *(arg1 + 0x3c), var_40) * zx.q(var_3c)
    else
        rcx_1 = sx.q(arg1[0x13].d)
    int64_t rcx_4 = neg.q(rcx_1)
    
    if (rcx_4 != 0)
        int32_t rax_9
        
        if (rcx_4 s<= 0)
            int64_t rax_12
            int32_t rdx_4
            rdx_4:rax_12 = sx.o((0x3ff - rcx_4) & 0xfffffffffffffc00)
            rax_9 = (neg.q((rax_12 + (zx.q(rdx_4) & 0x3ff)) s>> 0xa)).d
        else
            int64_t rax_7
            int32_t rdx_2
            rdx_2:rax_7 = sx.o((rcx_4 + 0x3ff) & 0xfffffffffffffc00)
            rax_9 = ((rax_7 + (zx.q(rdx_2) & 0x3ff)) s>> 0xa).d
        
        char var_28
        
        if ((var_28 & 0xe0) != 0)
            data_143f0f1fc
            data_143f0f1fc += rax_9
        else
            data_143f0f1f8
            data_143f0f1f8 += rax_9

sub_140fda880(&arg1[0xe])
*arg1 = &data_142d3ff08

if ((arg2 & 1) != 0)
    j_sub_140a74f90(arg1)

__security_check_cookie(rax_1 ^ &var_68)
return arg1
