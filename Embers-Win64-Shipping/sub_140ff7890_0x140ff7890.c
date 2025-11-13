// 函数: sub_140ff7890
// 地址: 0x140ff7890
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void var_2c8
int64_t rax_1 = __security_cookie ^ &var_2c8
int32_t rsi = 0
int64_t* rdi = arg4
void** result

if (arg2 != 0)
    int64_t rax_6 = *arg2
    int64_t var_268 = 0
    int64_t var_260_1 = 0
    int64_t* rcx_6 = *((*(rax_6 + 0x48))(arg2) + 0x38)
    void var_248
    (*(*rcx_6 + 0x50))(rcx_6, &var_248)
    int128_t* var_2a8_1
    int128_t var_288
    int32_t var_234
    int128_t var_258
    
    if (var_234 != 1)
        void* rbx_4 = arg1 + 0x18
        
        if (arg1 == 0)
            rbx_4 = nullptr
        
        void var_218
        sub_141961860(&var_218, (1 << (data_1439c7a34).b) - 1)
        int32_t var_278_2 = arg7[1].d
        var_288 = *arg7
        int32_t* var_2a0_1 = &var_288
        void* var_1f8_1 = rbx_4
        var_258 = *arg3
        void* var_1f0_1 = rbx_4
        char var_190_1 = 0
        sub_140ffb440(arg1, &var_218, arg2, &var_258, arg5, arg6, &var_268, var_2a0_1)
        sub_1419628c0(&var_218)
    else
        int32_t var_278_1 = arg7[1].d
        var_288 = *arg7
        var_2a8_1 = &var_288
        var_258 = *arg3
        sub_140ffb970(arg1, arg2, &var_258, &var_268, var_2a8_1)
    int32_t r15_2 = arg3[3] - arg3[1]
    int32_t rbx_7 = (arg3[2] - *arg3) * var_234
    int32_t rdx_6 = *(rdi + 0xc)
    rdi[1].d = 0
    
    if (rdx_6 != 0)
        sub_140679c00(rdi, 0)
        rdx_6 = *(rdi + 0xc)
        rsi = rdi[1].d
    
    int32_t rcx_15 = r15_2 * rbx_7 + rsi
    rdi[1].d = rcx_15
    
    if (rcx_15 s> rdx_6)
        sub_1406105e0(rdi)
    
    int32_t var_278_3 = arg7[1].d
    var_288 = *arg7
    int32_t var_238
    int32_t rax_12 = sub_140fdf270(var_238)
    int64_t rdi_1 = var_268
    var_2a8_1.d = rax_12 * rbx_7
    result = sub_140fdf960(var_238, rbx_7, r15_2, rdi_1, var_2a8_1.d, *rdi, &var_288)
    
    if (rdi_1 != 0)
        result = sub_140a74f90(rdi_1)
else
    int32_t rcx = *(arg4 + 0xc)
    arg4[1].d = 0
    
    if (rcx != 0)
        sub_140679c00(arg4, arg2.d)
        rcx = *(rdi + 0xc)
        rsi = rdi[1].d
    
    int32_t rbx_3 = (arg3[3] - arg3[1]) * (arg3[2] - *arg3)
    int32_t rax_4 = rsi + rbx_3
    rdi[1].d = rax_4
    
    if (rax_4 s> rcx)
        sub_1406105e0(rdi)
    
    result = memset(*rdi + (sx.q(rsi) << 2), 0, sx.q(rbx_3) << 2)

__security_check_cookie(rax_1 ^ &var_2c8)
return result
