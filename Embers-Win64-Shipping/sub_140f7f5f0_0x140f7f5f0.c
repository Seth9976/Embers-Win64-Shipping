// 函数: sub_140f7f5f0
// 地址: 0x140f7f5f0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void var_78
int64_t rax_1 = __security_cookie ^ &var_78
int64_t* result = arg2
int64_t* rcx = nullptr
int64_t* rcx_1
int64_t* rbx_1
int32_t rbp

if (*(arg1 + 0x390) == 0)
label_140f7f67f:
    rbx_1 = 0.q
    void var_50
    rcx_1 = &var_50
    arg2.b = 0
    rbp = 4
    char var_40_1 = 0
else
    rbx_1 = *(arg1 + 0x398)
    
    if (rbx_1 == 0)
        goto label_140f7f67f
    
    arg2 = zx.q(rbx_1[1].d)
    
    if (arg2.d s<= 0)
        goto label_140f7f67f
    
    int64_t* rax_2 = rbx_1
    
    if (rbx_1 != 0)
        if (arg2.d == 0)
            rbx_1 = nullptr
            rax_2 = nullptr
        else
            rbx_1[1].d = (arg2 + 1).d
            rax_2 = rbx_1
    
    if (rax_2 != 0)
        rcx = *(arg1 + 0x390)
    
    char var_40
    arg2 = zx.q(var_40)
    rbp = 3
    void var_38
    rcx_1 = (*(*rcx + 0x48))(rcx, &var_38, arg3)

result[2].b = 0

if (rcx_1[2].b != 0)
    *result = *rcx_1
    void* rax_7 = rcx_1[1]
    result[1] = rax_7
    
    if (rax_7 != 0)
        *(rax_7 + 8) += 1
    
    result[2].b = 1

if ((rbp.b & 4) != 0)
    rbp &= 0xfffffffb
    int64_t* var_48
    
    if (arg2.b != 0 && var_48 != 0)
        var_48[1].d -= 1
        
        if (var_48[1].d == 1)
            (**var_48)(var_48)
            int32_t temp3_1 = *(var_48 + 0xc)
            *(var_48 + 0xc) -= 1
            
            if (temp3_1 == 1)
                (*(*var_48 + 8))(var_48, 1)

if ((rbp.b & 2) != 0)
    rbp &= 0xfffffffd
    char var_28
    
    if (var_28 != 0)
        char var_28_1 = 0
        int64_t* var_30
        
        if (var_30 != 0)
            var_30[1].d -= 1
            
            if (var_30[1].d == 1)
                (**var_30)(var_30)
                int32_t temp5_1 = *(var_30 + 0xc)
                *(var_30 + 0xc) -= 1
                
                if (temp5_1 == 1)
                    (*(*var_30 + 8))(var_30, 1)

if ((rbp.b & 1) != 0 && rbx_1 != 0)
    rbx_1[1].d -= 1
    
    if (rbx_1[1].d == 1)
        int64_t r8_2 = *rbx_1
        (*r8_2)(rbx_1, arg4, r8_2)
        int32_t temp4_1 = *(rbx_1 + 0xc)
        *(rbx_1 + 0xc) -= 1
        
        if (temp4_1 == 1)
            int64_t r8_3 = *rbx_1
            (*(r8_3 + 8))(rbx_1, 1, r8_3)

__security_check_cookie(rax_1 ^ &var_78)
return result
