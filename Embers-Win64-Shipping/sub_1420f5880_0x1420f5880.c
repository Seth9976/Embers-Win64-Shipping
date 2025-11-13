// 函数: sub_1420f5880
// 地址: 0x1420f5880
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void var_118
int64_t rax_1 = __security_cookie ^ &var_118
void* rcx = *arg1
int32_t var_48 = 0
int32_t var_44 = 0x10
void var_d8
char* rax_2 = sub_1419c5250(rcx, &var_d8, rcx + 0x130, 0, arg2)
int64_t rdi = sx.q(var_48)
int32_t rcx_1 = (rdi + 1).d
int32_t var_48_1 = rcx_1
void var_c8

if (rcx_1 s> var_44)
    sub_14088f7f0(&var_c8)

*(&var_c8 + (rdi << 3)) = *rax_2

if (arg3 != 0)
    void* rcx_3 = *arg1
    
    if (*(rcx_3 + 0x150) != 0)
        char* rax_4 = sub_1419c5250(rcx_3, &var_d8, rcx_3 + 0x150, 2, arg2)
        int64_t rdi_1 = sx.q(var_48_1)
        int32_t rcx_4 = (rdi_1 + 1).d
        var_48_1 = rcx_4
        
        if (rcx_4 s> var_44)
            sub_14088f7f0(&var_c8)
        
        *(&var_c8 + (rdi_1 << 3)) = *rax_4

uint64_t r14_2 = zx.q(arg2)
*(*arg1 + r14_2 + 0xa2) = 0xff
int64_t* rcx_6 = *arg1

if (((*((*(*rcx_6 + 0x40))(rcx_6) + 0x28) u>> 6).b & 1) != 0 && arg1[1].b != 0)
    void* rcx_9 = *arg1
    void** var_e8 = &data_1439c9480
    int32_t var_e0_1 = 0
    int32_t var_dc_1 = 0x1140400
    char* rax_9 = sub_1419c5250(rcx_9, &var_d8, &var_e8, 1, arg2)
    int64_t rdi_2 = sx.q(var_48_1)
    int32_t rcx_10 = (rdi_2 + 1).d
    
    if (rcx_10 s> var_44)
        sub_14088f7f0(&var_c8)
    
    int64_t r9_3 = *arg1
    *(&var_c8 + (rdi_2 << 3)) = *rax_9
    *(r9_3 + r14_2 + 0xa2) = *(&var_c8 + (sx.q(rcx_10 - 1) << 3))

int64_t result = sub_1419d0260(*arg1, &var_c8, arg2)
__security_check_cookie(rax_1 ^ &var_118)
return result
