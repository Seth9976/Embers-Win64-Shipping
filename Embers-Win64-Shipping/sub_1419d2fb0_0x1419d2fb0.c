// 函数: sub_1419d2fb0
// 地址: 0x1419d2fb0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void var_68
int64_t* var_10 = __security_cookie ^ &var_68
void* rdx = *arg2

if (rdx != 0)
    if (not(arg3 f>= 0.0))
        int64_t rax_1 = 0
        
        if (0 == *(rdx + 8))
            *(rdx + 8) = 0
        else
            rax_1 = *(rdx + 8)
        
        __security_check_cookie(var_10 ^ &var_68)
        return (rax_1 u>> 0x1a).b & 1
    
    int64_t* rax_3 = sub_140a242a0()
    int32_t var_14_1 = 4
    void** var_20_1 = nullptr
    void* rcx_2 = *arg2
    int32_t i_2 = 1
    void* var_40 = rcx_2
    
    if (rcx_2 != 0)
        *(rcx_2 + 0x48) += 1
    
    (*(*rax_3 + 0x48))(rax_3, &var_40, 0xff, rax_3)
    void** rcx_4 = var_20_1
    void** rbx_1 = &var_40
    int32_t i_1 = i_2
    
    if (rcx_4 != 0)
        rbx_1 = rcx_4
    
    if (i_1 != 0)
        int32_t i
        
        do
            int64_t* rcx_5 = *rbx_1
            
            if (rcx_5 != 0)
                rcx_5[9].d -= 1
                
                if (rcx_5[9].d == 1)
                    sub_140a2f6e0(rcx_5)
            
            rbx_1 = &rbx_1[1]
            i = i_1
            i_1 -= 1
        while (i != 1)
        rcx_4 = var_20_1
    
    if (rcx_4 != 0)
        sub_140a74f90(rcx_4)

int64_t* result
result.b = 1
__security_check_cookie(var_10 ^ &var_68)
return result
