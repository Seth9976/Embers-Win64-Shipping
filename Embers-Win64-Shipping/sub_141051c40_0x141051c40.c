// 函数: sub_141051c40
// 地址: 0x141051c40
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void var_d8
int64_t rax_1 = __security_cookie ^ &var_d8
void* var_a8 = arg8
void* var_b0 = arg6
void* var_b8 = arg5
int64_t* var_78
sub_141972960(&var_78, arg3, arg4, arg7)
int64_t* rcx_2 = var_78

if (rcx_2 == 0)
    void*** rax_3 = j_sub_140a82f30(0x60)
    void*** rsi_1 = rax_3
    
    if (rax_3 == 0)
        rsi_1 = nullptr
    else
        char var_98_1 = 0
        int64_t* var_a0_1 = rsi_1
        void* rbx_1 = *(**(arg1 + 0x20) + 0x9d8)
        *rsi_1 = &data_142d3ff08
        rsi_1[1].d = 0
        *rsi_1 = &data_142f009a0
        *(rsi_1 + 0xc) = 0
        rsi_1[2].w = 0x100
        sub_141960d80(&rsi_1[3], arg3, arg4, arg7, arg5, arg6, arg8, var_a0_1, var_98_1)
        void* rbx_2 = *(rbx_1 + 0x20)
        int32_t var_88 = *(rbx_2 + 0x44)
        int32_t var_48_1 = 0
        void var_60
        sub_1410656b0(&var_88, rsi_1, &var_60)
        rsi_1[0xb] = sub_14104c4e0(rbx_2 + 0x1a0, &var_60)
        sub_1419661d0(&rsi_1[3])
    
    *arg2 = rsi_1
    
    if (rsi_1 != 0)
        rsi_1[1].d += 1
    
    int64_t* rbx_3 = var_78
    
    if (rbx_3 != 0)
        rbx_3[1].d -= 1
        
        if (rbx_3[1].d == 1)
            char rax_9
            
            if (rbx_3[2].b == 0 && data_143f0f1d0 == 0)
                rax_9 = sub_1405949a0()
            
            if (rbx_3[2].b != 0 || (data_143f0f1d0 == 0 && rax_9 != 0))
                (**rbx_3)(rbx_3, 1)
            else
                bool z_1
                
                if (0 == *(rbx_3 + 0xc))
                    *(rbx_3 + 0xc) = 1
                    z_1 = true
                else
                    *(rbx_3 + 0xc)
                    z_1 = false
                
                if (z_1)
                    sub_1405dcc10(&data_143f02390, rbx_3)
else
    *arg2 = rcx_2

__security_check_cookie(rax_1 ^ &var_d8)
return arg2
