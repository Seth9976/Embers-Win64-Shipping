// 函数: sub_1405a6220
// 地址: 0x1405a6220
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void var_68
int64_t rax_1 = __security_cookie ^ &var_68
void* rax_2 = *arg2
void** var_20 = nullptr
int32_t var_14 = 4
int32_t i_2 = 1
void* var_40 = rax_2

if (rax_2 != 0)
    *(rax_2 + 0x48) += 1

int32_t result = (*(*arg1 + 0x48))(arg1, &var_40)
void** rcx = var_20
void** rbx = &var_40
int32_t i_1 = i_2

if (rcx != 0)
    rbx = rcx

if (i_1 != 0)
    int32_t i
    
    do
        int64_t* rcx_1 = *rbx
        
        if (rcx_1 != 0)
            result = rcx_1[9].d
            rcx_1[9].d -= 1
            
            if (result == 1)
                result = sub_140a2f6e0(rcx_1)
        
        rbx = &rbx[1]
        i = i_1
        i_1 -= 1
    while (i != 1)
    rcx = var_20

if (rcx != 0)
    result = sub_140a74f90(rcx)

__security_check_cookie(rax_1 ^ &var_68)
return result
