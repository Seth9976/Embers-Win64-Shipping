// 函数: sub_140b01af0
// 地址: 0x140b01af0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t* rdi
int64_t* var_10 = rdi

if (data_143de548d != 0)
    while (*arg1[0x33] != 0)
        int64_t* var_60_1 = nullptr
        void* rcx = *arg1[0x33]
        
        if (rcx != 0)
            void var_68
            int64_t* rbx_1
            
            if (&var_68 == rcx + 8)
                rbx_1 = var_60_1
            else
                *(rcx + 8) = 0
                rbx_1 = *(rcx + 0x10)
                
                if (rbx_1 == 0)
                    rbx_1 = var_60_1
                else
                    *(rcx + 0x10) = 0
            
            void* r14_1 = arg1[0x33]
            arg1[0x33] = rcx
            void var_48
            
            if (rcx + 8 != &var_48)
                *(rcx + 8) = 0
                rdi = *(rcx + 0x10)
                
                if (rdi != 0)
                    *(rcx + 0x10) = 0
                    rdi[1].d -= 1
                    
                    if (rdi[1].d == 1)
                        (**rdi)(rdi)
                        int32_t temp4_1 = *(rdi + 0xc)
                        *(rdi + 0xc) -= 1
                        
                        if (temp4_1 == 1)
                            (*(*rdi + 8))(rdi, 1)
            
            if (r14_1 != 0)
                rdi = *(r14_1 + 0x10)
                
                if (rdi != 0)
                    rdi[1].d -= 1
                    
                    if (rdi[1].d == 1)
                        (**rdi)(rdi)
                        int32_t temp9_1 = *(rdi + 0xc)
                        *(rdi + 0xc) -= 1
                        
                        if (temp9_1 == 1)
                            (*(*rdi + 8))(rdi, 1)
                
                j_sub_140a74f90(r14_1)
            
            if (rbx_1 != 0)
                rbx_1[1].d -= 1
                
                if (rbx_1[1].d == 1)
                    (**rbx_1)(rbx_1)
                    int32_t temp8_1 = *(rbx_1 + 0xc)
                    *(rbx_1 + 0xc) -= 1
                    
                    if (temp8_1 == 1)
                        (*(*rbx_1 + 8))(rbx_1, 1)
    
    while (*arg1[0x35] != 0)
        int64_t* var_50_1 = nullptr
        void* rcx_10 = *arg1[0x35]
        
        if (rcx_10 != 0)
            void var_58
            int64_t* rbx_2
            
            if (&var_58 == rcx_10 + 8)
                rbx_2 = var_50_1
            else
                *(rcx_10 + 8) = 0
                rbx_2 = *(rcx_10 + 0x10)
                
                if (rbx_2 == 0)
                    rbx_2 = var_50_1
                else
                    *(rcx_10 + 0x10) = 0
            
            void* r14_2 = arg1[0x35]
            arg1[0x35] = rcx_10
            void var_38
            
            if (rcx_10 + 8 != &var_38)
                *(rcx_10 + 8) = 0
                rdi = *(rcx_10 + 0x10)
                
                if (rdi != 0)
                    *(rcx_10 + 0x10) = 0
                    rdi[1].d -= 1
                    
                    if (rdi[1].d == 1)
                        (**rdi)(rdi)
                        int32_t temp7_1 = *(rdi + 0xc)
                        *(rdi + 0xc) -= 1
                        
                        if (temp7_1 == 1)
                            (*(*rdi + 8))(rdi, 1)
            
            if (r14_2 != 0)
                rdi = *(r14_2 + 0x10)
                
                if (rdi != 0)
                    rdi[1].d -= 1
                    
                    if (rdi[1].d == 1)
                        (**rdi)(rdi)
                        int32_t temp11_1 = *(rdi + 0xc)
                        *(rdi + 0xc) -= 1
                        
                        if (temp11_1 == 1)
                            (*(*rdi + 8))(rdi, 1)
                
                j_sub_140a74f90(r14_2)
            
            if (rbx_2 != 0)
                rbx_2[1].d -= 1
                
                if (rbx_2[1].d == 1)
                    (**rbx_2)(rbx_2)
                    int32_t temp10_1 = *(rbx_2 + 0xc)
                    *(rbx_2 + 0xc) -= 1
                    
                    if (temp10_1 == 1)
                        (*(*rbx_2 + 8))(rbx_2, 1)
    
    char var_b8 = 0
    int64_t var_b0
    __builtin_memset(&var_b0, 0, 0x40)
    sub_140af8180(arg1, &var_b8)
    data_143de548d = 0
    sub_140b19e60()
    sub_140b25ff0(&data_1439a8bd0, &arg1[0x14])
    sub_140599090(&arg1[3])
    sub_140ae70e0(&var_b8)

int64_t var_e8
__builtin_memset(&var_e8, 0, 0x1c)
int64_t var_c8 = 0
int64_t var_c0 = 0
int64_t var_d8
sub_1405947f0(&var_d8, 2)
int32_t var_d0
int32_t rax_21 = var_d0 + 2
var_d0 = rax_21

if (rax_21 s> 0)
    sub_140594770(&var_d8)

int64_t rbx_3 = var_d8
UnDecorator::getReferenceType(rbx_3, &data_142d404d4, 4)
int32_t* result = sub_14060a620(arg2, &var_d8, &var_e8, &var_c8, 0, 0)
rdi.b = result.b == 0

if (rbx_3 != 0)
    result = sub_140a74f90(rbx_3)

int64_t rdi_2

if (rdi.b == 0)
    rdi_2 = var_e8
else
    result = &var_e8
    
    if (&var_e8 == arg2)
        rdi_2 = var_e8
    else
        int32_t rbx_4 = arg2[1].d
        int64_t rdi_1 = *arg2
        int64_t var_e0
        int32_t r8_1 = var_e0:4.d
        var_e0.d = rbx_4
        
        if (rbx_4 != 0 || r8_1 != 0)
            sub_1405a4c70(&var_e8, rbx_4, r8_1)
            rdi_2 = var_e8
            result = memcpy(rdi_2, rdi_1, rbx_4 * 2)
        else
            var_e0:4.d = 0
            rdi_2 = var_e8

*(arg1 + 0x1e4) = arg3

if (data_143de5430 == 0 && data_143de5451 == 0)
    void arg_18
    result = sub_1408f1b50(&arg1[0x27], &arg_18, &var_e8)
    
    if (*result != 0xffffffff)
        sub_140599090(arg1)
        arg1[0x16].b = *(data_143ddb418 + 0x10)
        sub_140b19e60()
        sub_140b0e310(&data_1439a8bd0, &arg1[0x14])
        data_143de548d = 1
        result = sub_140af7f60(arg1, arg2)

int64_t rcx_31 = var_c8

if (rcx_31 != 0)
    result = sub_140a74f90(rcx_31)

if (rdi_2 == 0)
    return result

return sub_140a74f90(rdi_2)
