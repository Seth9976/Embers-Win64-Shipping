// 函数: sub_14282fe40
// 地址: 0x14282fe40
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int32_t rdx = 0
int64_t* i = arg1
int64_t temp0 = arg1[3]

if (temp0 u>= 0x10)
    i = *arg1

int64_t* r9 = arg1

if (temp0 u>= 0x10)
    r9 = *arg1

for (; i != arg1[2] + r9; i += 1)
    uint64_t rax_1
    rax_1.b = *i
    rax_1.b -= 0x61
    
    if (rax_1.b u> 5)
        rax_1.b = *i
        rax_1.b -= 0x41
        
        if (rax_1.b u> 5)
            rax_1.b = *i
            rax_1.b -= 0x30
            
            if (rax_1.b u> 9)
                void var_88
                sub_14058a5c0(&var_88, "bad character found while scanning hex number")
                struct std::exception::VTable* exceptionObject
                sub_1428244f0(&exceptionObject, arg2, &var_88)
                _CxxThrowException(&exceptionObject, &data_143946450)
                noreturn
            
            rax_1 = zx.q(sx.d(*i) - 0x30)
        else
            rax_1 = zx.q(sx.d(*i) - 0x37)
    else
        rax_1 = zx.q(sx.d(*i) - 0x57)
    
    rdx = (rdx << 4) + rax_1.d

void var_a8
__security_check_cookie(__security_cookie ^ &var_a8 ^ &var_a8)
return zx.q(rdx)
