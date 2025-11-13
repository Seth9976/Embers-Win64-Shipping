// 函数: sub_1419de290
// 地址: 0x1419de290
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void var_78
int64_t rax_1 = __security_cookie ^ &var_78
int32_t* rsi = arg2
int64_t var_58[0x4]
uint64_t result = sub_1419e2ca0(arg1, arg2, &var_58)
int32_t rcx = arg1[1].d
int32_t rdx_1 = arg3[1].d + rcx
int64_t r15 = sx.q(result.d)

if (rdx_1 s> *(arg3 + 0xc))
    result = sub_1405c5570(arg3, rdx_1)
    rcx = arg1[1].d

for (int32_t* i = *arg1; i != &i[sx.q(rcx) * 8]; i = &i[8])
    if (not(i[2] f< *rsi) && not(rsi[2] f< *i) && not(i[3] f< rsi[1]) && not(rsi[3] f< i[1]))
        int64_t rbp_1 = sx.q(arg3[1].d)
        int32_t rax_2 = (rbp_1 + 1).d
        arg3[1].d = rax_2
        
        if (rax_2 s> *(arg3 + 0xc))
            sub_1405a4d70(arg3)
        
        result = *(i + 0x18)
        *(*arg3 + (rbp_1 << 3)) = result

if (r15.d s> 0)
    int64_t rbx_1 = 0
    
    do
        result = sub_1419de290(var_58[rbx_1], rsi, arg3)
        rbx_1 += 1
    while (rbx_1 s< r15)

__security_check_cookie(rax_1 ^ &var_78)
return result
