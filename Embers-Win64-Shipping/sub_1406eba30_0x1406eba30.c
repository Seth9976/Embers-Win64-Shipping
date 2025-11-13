// 函数: sub_1406eba30
// 地址: 0x1406eba30
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void var_628
int64_t rax_1 = __security_cookie ^ &var_628

if (data_143cdf678 != 0)
    void var_5c8
    sub_1406ea450(arg1, &var_5c8)
    int64_t* rsi_1 = data_143cdf678
    void** const var_608 = &data_142d96720
    void** const* var_5d0_1 = &var_608
    
    if (rsi_1[0x1c] == 0)
        int64_t rax_2 = *rsi_1
        rsi_1[0x1c] = (*(rax_2 + 0x30))(rax_2)
    
    void* rax_4 = j_sub_140a82f30(0x40)
    void* const rbx_1 = rax_4
    
    if (rax_4 == 0)
        rbx_1 = nullptr
    else
        *(rax_4 + 0x38) = 0
        
        if (var_5d0_1 != 0)
            if (var_5d0_1 != &var_608)
                *(rbx_1 + 0x38) = var_5d0_1
                var_5d0_1 = nullptr
            else
                *(rbx_1 + 0x38) = (*var_5d0_1)[1](var_5d0_1, rbx_1)
                
                if (var_5d0_1 != 0)
                    void** const* rdx_3
                    rdx_3.b = var_5d0_1 != &var_608
                    (*var_5d0_1)[4](var_5d0_1, rdx_3)
                    var_5d0_1 = nullptr
    
    int64_t rax_8 = rsi_1[0x1c]
    (*(rax_8 + 0x10))(rax_8, &var_5c8, rbx_1, sub_1406e8290)
    
    if (var_5d0_1 != 0)
        void** const* rdx_5
        rdx_5.b = var_5d0_1 != &var_608
        (*var_5d0_1)[4](var_5d0_1, rdx_5)

int64_t result = sub_1406e9b20(arg1)
__security_check_cookie(rax_1 ^ &var_628)
return result
