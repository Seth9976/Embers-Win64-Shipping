// 函数: sub_1428bb020
// 地址: 0x1428bb020
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

__chkstk(0xa8)
void var_e8
int64_t rax_1 = __security_cookie ^ &var_e8
char* rbx = nullptr
char* rdi = nullptr
void* rsi = nullptr
int32_t r14 = 0
int32_t rbp_1 = arg9 & 1
int32_t var_b8
__builtin_memset(&var_b8, 0, 0x20)

while (true)
    if (rbp_1 == 0)
        sub_1428a6780(rbx)
        sub_1428a6780(rdi)
        sub_1428a6780(rsi)
    else
        sub_1428a7140(rbx, 0, "crypto\pem\pem_lib.c", 0xdd)
        sub_1428a7140(rdi, 0, "crypto\pem\pem_lib.c", 0xdd)
        sub_1428a7140(rsi, sx.q(r14), "crypto\pem\pem_lib.c", 0xdd)
    
    char* var_b0
    void* var_a8
    char* var_a0
    
    if (sub_1428ba270(arg6, &var_a0, &var_b0, &var_a8, &var_b8, arg9) == 0)
        int32_t rax_13 = sub_1428a54c0() & 0xfff
        
        if (rax_13 == 0x6c)
            sub_1428a4880(rax_13 - 0x6a)
        
        __security_check_cookie(rax_1 ^ &var_e8)
        return 0
    
    rbx = var_a0
    
    if (sub_1428ba820(rbx, arg4) != 0)
        char* r14_1 = var_b0
        void var_70
        int32_t rax_7 = sub_1428b9f10(r14_1, &var_70)
        void* rdi_1 = var_a8
        int32_t rax_9
        
        if (rax_7 != 0)
            rax_9 = sub_1428b9c50(&var_70, rdi_1, &var_b8, arg7, arg5, arg8)
        
        int32_t rsi_1
        int32_t result_1
        
        if (rax_7 != 0 && rax_9 != 0)
            rsi_1 = var_b8
            *arg1 = rdi_1
            *arg2 = rsi_1
            
            if (arg3 != 0)
                *arg3 = rbx
            
            result_1 = 1
            
            if (arg3 != 0)
                goto label_1428bb21e
            
            goto label_1428bb206
        
        rsi_1 = var_b8
        int32_t result_2
        result_1 = result_2
    label_1428bb206:
        
        if (rbp_1 == 0)
            sub_1428a6780(rbx)
            sub_1428a6780(r14_1)
        else
            sub_1428a7140(rbx, 0, "crypto\pem\pem_lib.c", 0xdd)
        label_1428bb21e:
            
            if (rbp_1 == 0)
                sub_1428a6780(r14_1)
            else
                sub_1428a7140(r14_1, 0, "crypto\pem\pem_lib.c", 0xdd)
        
        uint64_t result
        
        if (result_1 != 0)
            result = zx.q(result_1)
        else if (rbp_1 == 0)
            sub_1428a6780(rdi_1)
            result = zx.q(result_1)
        else
            sub_1428a7140(rdi_1, sx.q(rsi_1), "crypto\pem\pem_lib.c", 0xdd)
            result = zx.q(result_1)
        
        __security_check_cookie(rax_1 ^ &var_e8)
        return result
    
    rdi = var_b0
    rsi = var_a8
    r14 = var_b8
