// 函数: sub_1429ab3d0
// 地址: 0x1429ab3d0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t var_440 = -2
void var_478
int64_t rax_1 = __security_cookie ^ &var_478
int64_t* var_448 = arg1
int64_t rax_3 = (*(*arg1 + 0x20))()
int64_t var_450 = rax_3
uint64_t rsi = 0

while (zx.q(rsi.d) u< (arg3[1] - *arg3) s>> 3)
    int64_t rax_6 = (*(*arg1 + 0x20))(arg1)
    int64_t r9_1 = *arg1
    void var_454
    (*(r9_1 + 0x10))(arg1, &var_454, 4, r9_1)
    int64_t r9_2 = *arg1
    char var_458
    (*(r9_2 + 0x10))(arg1, &var_458, 4, r9_2)
    char var_457
    char var_456
    char var_455
    int32_t rbx_7 = ((sx.d(var_455) << 8 | zx.d(var_456)) << 8 | zx.d(var_457)) << 8 | zx.d(var_458)
    
    while (true)
        void var_438
        
        if (rbx_7 s< 0x400)
            if (rbx_7 s>= 1)
                (*(*arg1 + 0x10))(arg1, &var_438, zx.q(rbx_7))
            
            break
        
        if ((*(*arg1 + 0x10))(arg1, &var_438, 0x400) == 0)
            break
        
        rbx_7 -= 0x400
    
    if (arg2 != 0)
        int64_t rdx_4 = *arg3
        *(rdx_4 + ((((arg3[1] - rdx_4) s>> 3) - zx.q(rsi.d)) << 3) - 8) = rax_6
        rsi = zx.q(rsi.d + 1)
    else
        *(*arg3 + (rsi << 3)) = rax_6
        rsi = zx.q(rsi.d + 1)

(*(*arg1 + 0x30))(arg1)
int64_t result = (*(*arg1 + 0x28))(arg1, rax_3)
__security_check_cookie(rax_1 ^ &var_478)
return result
