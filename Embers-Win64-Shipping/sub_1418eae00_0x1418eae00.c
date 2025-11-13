// 函数: sub_1418eae00
// 地址: 0x1418eae00
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

if (arg4 s<= 0)
    return 

void var_108
void** var_48_1 = __security_cookie ^ &var_108
void* r10_1 = nullptr
void* var_98_1 = nullptr
int32_t var_90_1 = 0
int32_t rcx = 9
int32_t var_8c_1 = 9
int64_t var_68_1 = 0
int32_t rdi_1 = 0
int32_t var_60_1 = 0
int32_t var_5c_1 = 4
int64_t var_58_1 = 0

if (arg4 s> 0)
    int64_t i = 0
    
    do
        int64_t* rsi_1 = *(arg3 + (i << 3))
        
        if (rsi_1 != 0)
            void var_e0
            
            if (rdi_1 + 1 s> rcx)
                sub_140dbc900(&var_e0, rdi_1)
                r10_1 = var_98_1
            
            void* rcx_2 = &var_e0
            
            if (r10_1 != 0)
                rcx_2 = r10_1
            
            *(rcx_2 + (sx.q(rdi_1) << 3)) = rsi_1
            int64_t* rax_5 = (*(*rsi_1 + 0x48))(rsi_1)
            int64_t r9 = *rax_5
            (*(r9 + 0x20))(rax_5, arg1, zx.q(arg2), r9)
            rcx = var_8c_1
            r10_1 = var_98_1
            rdi_1 += 1
        
        i += 1
    while (i s< sx.q(arg4))
    
    if (rdi_1 s> 0)
        int32_t var_e8 = arg2
        int32_t var_50_1 = 2
        sub_1418ef580(arg1, &var_e8)
        r10_1 = var_98_1
    
    if (var_68_1 != 0)
        sub_140a74f90(var_68_1)
        r10_1 = var_98_1
    
    if (r10_1 != 0)
        sub_140a74f90(r10_1)

__security_check_cookie(var_48_1 ^ &var_108)
