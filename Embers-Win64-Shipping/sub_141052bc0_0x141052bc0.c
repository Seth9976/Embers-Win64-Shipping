// 函数: sub_141052bc0
// 地址: 0x141052bc0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void var_388
int64_t rax_1 = __security_cookie ^ &var_388
int64_t* rsi = arg3
void* rbp = **(arg1 + 0x20)
int64_t* var_348
sub_141051c40(arg1, &var_348, *arg3, arg3[1], arg3[2], arg3[3], arg3[4], arg3[5])
int64_t* rbx = var_348
void* r14 = rbx[0xb]
void var_338
void*** rax_7 = sub_141021450(rbp + 0x220, rsi, r14, &var_338)
int64_t* rbx_1

if (rax_7 == 0)
    void*** rax_11 = sub_1410193d0(rbp + 0x220, rsi, r14, &var_338)
    *arg2 = rax_11
    
    if (rax_11 != 0)
        rax_11[1].d += 1
        rbx = var_348
    
    rbx[1].d -= 1
    
    if (rbx[1].d == 1)
        rbx_1 = var_348
        
        if (rbx_1[2].b != 0)
            (**rbx_1)(rbx_1, 1)
        else
            if (data_143f0f1d0 != 0)
                goto label_141052c8e
            
            if (sub_1405949a0() == 0)
                goto label_141052c8e
            
            (**rbx_1)(rbx_1, 1)
else
    *arg2 = rax_7
    rax_7[1].d += 1
    int64_t* rax_8 = var_348
    rax_8[1].d -= 1
    
    if (rax_8[1].d == 1)
        rbx_1 = var_348
        
        if (rbx_1[2].b != 0)
            (**rbx_1)(rbx_1, 1)
        else if (data_143f0f1d0 != 0)
        label_141052c8e:
            bool z_1
            
            if (0 == *(rbx_1 + 0xc))
                *(rbx_1 + 0xc) = 1
                z_1 = true
            else
                *(rbx_1 + 0xc)
                z_1 = false
            
            if (z_1)
                sub_1405dcc10(&data_143f02390, var_348)
        else
            if (sub_1405949a0() == 0)
                goto label_141052c8e
            
            (**rbx_1)(rbx_1, 1)
__security_check_cookie(rax_1 ^ &var_388)
return arg2
