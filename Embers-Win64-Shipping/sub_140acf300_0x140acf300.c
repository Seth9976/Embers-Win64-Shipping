// 函数: sub_140acf300
// 地址: 0x140acf300
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void var_68
int64_t rax_1 = __security_cookie ^ &var_68
void var_48
int64_t* rax_3 = (*arg2)(&var_48, arg3)
arg1[3].b = 0

if (rax_3[3].b != 0)
    *arg1 = *rax_3
    void* rax_5 = rax_3[1]
    arg1[1] = rax_5
    
    if (rax_5 != 0)
        *(rax_5 + 8) += 1
    
    arg1[2].d = rax_3[2].d
    arg1[3].b = 1

char var_30

if (var_30 == 0)
    __security_check_cookie(rax_1 ^ &var_68)
    return arg1

char var_30_1 = 0
int64_t* var_40
int64_t* rax_8

if (var_40 == 0)
    rax_8 = arg1
else
    var_40[1].d -= 1
    
    if (var_40[1].d == 1)
        int64_t rdx_1 = *var_40
        (*rdx_1)(var_40, rdx_1)
        int32_t rsi_1 = *(var_40 + 0xc)
        *(var_40 + 0xc) -= 1
        
        if (rsi_1 == 1)
            int64_t r8 = *var_40
            (*(r8 + 8))(var_40, zx.q(rsi_1), r8)
    
    rax_8 = arg1

__security_check_cookie(rax_1 ^ &var_68)
return rax_8
