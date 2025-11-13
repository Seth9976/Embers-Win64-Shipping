// 函数: sub_141cfe300
// 地址: 0x141cfe300
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void var_108
int64_t rax_1 = __security_cookie ^ &var_108
int64_t rdi = 0
uint64_t rsi
rsi.b = 0
int32_t r14 = 0
int128_t var_a8 = data_14321e0d0
int64_t var_98
__builtin_memset(&var_98, 0, 0x1c)
int64_t var_78
__builtin_memset(&var_78, 0, 0x1a)
void* var_c0 = nullptr
int64_t var_d0 = 0
int32_t var_c8 = 0
EnterCriticalSection(arg1 + 0x38)
int64_t r15 = sx.q(*(arg1 + 0x18))
int32_t temp0 = r15.d

if (temp0 != 0)
    if (temp0 s> 0)
        sub_1405a5410(&var_d0, r15.d)
        r14 = var_c8
        rdi = var_d0
    
    memcpy((sx.q(r14) << 4) + rdi, *(arg1 + 0x10), (r15 << 4).d)
    var_c8 = r14 + r15.d

if (arg1 != -0x38)
    LeaveCriticalSection(arg1 + 0x38)

char rax_3 = sub_141d02340(&var_d0, arg3, &var_c0, &var_a8)

if (rdi != 0)
    sub_140a74f90(rdi)

int64_t* rcx_8 = *(arg1 + 8)
int64_t rax_4 = *rcx_8

if (rax_3 == 0)
    rsi = zx.q((*(rax_4 + 0x180))(rcx_8, arg2, arg3, zx.q(arg4), arg5))
else
    int64_t* rax_5 = (*(rax_4 + 0xd0))(rcx_8, arg2, 0, arg5 & 1)
    void*** rax_6 = sub_141cfe880(arg1, arg3, var_c0, &var_a8)
    
    if (rax_5 == 0)
    label_141cfe4b3:
        
        if (rax_6 != 0)
            (**rax_6)(rax_6, 1)
    else if (rax_6 != 0)
        int64_t rax_7 = sub_140a82f30(0x10000, 0)
        uint64_t rax_9 = (*rax_6)[8](rax_6)
        rsi = rax_9
        
        if (rax_9 s<= 0)
        label_141cfe4a8:
            rsi.b = 1
        else
            while (true)
                uint64_t r14_2 = rsi
                
                if (rsi s>= 0x10000)
                    r14_2 = 0x10000
                
                if ((*rax_6)[4](rax_6, rax_7, r14_2) != 0
                        && (*(*rax_5 + 0x28))(rax_5, rax_7, r14_2) != 0)
                    rsi -= r14_2
                    
                    if (rsi s<= 0)
                        goto label_141cfe4a8
                    
                    continue
                
                rsi.b = 0
                break
        
        sub_140a74f90(rax_7)
        goto label_141cfe4b3
    
    if (rax_5 != 0)
        (**rax_5)(rax_5, 1)

sub_140a1d5c0(&var_78)
__security_check_cookie(rax_1 ^ &var_108)
return zx.q(rsi.b)
