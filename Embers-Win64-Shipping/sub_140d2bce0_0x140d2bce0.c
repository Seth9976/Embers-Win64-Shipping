// 函数: sub_140d2bce0
// 地址: 0x140d2bce0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void var_868
int64_t rax_1 = __security_cookie ^ &var_868

if (*arg1 == 0 || data_143e1d7b4 != 0)
    __security_check_cookie(rax_1 ^ &var_868)
    return 0

void* i

if (arg1[2].d s> 1)
    int64_t var_848
    int64_t* rax_7 = sub_140d30800(arg1, &var_848)
    int16_t* rbx
    
    if (rax_7[1].d == 0)
        rbx = &data_142d40450
    else
        rbx = *rax_7
    
    for (i = sub_140d2ee50(sub_140d41340(), nullptr, rbx, 0); i != 0; i = *(i + 0x28))
        void* rax_10 = sub_140cdddf0()
        void* rdx_3 = *(i + 0x10)
        int64_t rax_11 = sx.q(*(rax_10 + 0x38))
        
        if (rax_11.d s> *(rdx_3 + 0x38))
            break
        
        if (*(*(rdx_3 + 0x30) + (rax_11 << 3)) != rax_10 + 0x30)
            break
    
    int64_t rcx_4 = var_848
    
    if (rcx_4 != 0)
        sub_140a74f90(rcx_4)
else
    int16_t var_838[0x410]
    sub_140b63d10(arg1, &var_838)
    
    for (i = sub_140d2ee50(sub_140d41340(), nullptr, &var_838, 0); i != 0; i = *(i + 0x28))
        void* rax_4 = sub_140cdddf0()
        void* rdx_1 = *(i + 0x10)
        int64_t rax_5 = sx.q(*(rax_4 + 0x38))
        
        if (rax_5.d s> *(rdx_1 + 0x38))
            break
        
        if (*(*(rdx_1 + 0x30) + (rax_5 << 3)) != rax_4 + 0x30)
            break

__security_check_cookie(rax_1 ^ &var_868)
return i
