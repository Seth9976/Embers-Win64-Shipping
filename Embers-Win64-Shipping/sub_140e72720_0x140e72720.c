// 函数: sub_140e72720
// 地址: 0x140e72720
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void var_358
int64_t result = __security_cookie ^ &var_358
int64_t result_1 = result

if (*arg3 != 0)
    void var_2f8
    sub_140d947e0(&var_2f8)
    void var_318
    void* rdx = &var_318
    int64_t var_328
    uint128_t zmm0_1
    int64_t* var_310
    void var_308
    
    if (arg4 != 1)
        void* rcx_13 = *sub_140e683e0(arg1, rdx, arg2)
        
        if (*(rcx_13 + 0x78) == 0)
            char** rax_10 = sub_140dbffe0(rcx_13 + 0x58, &var_308, 0, 0, data_1439ae51c)
            int64_t* rbx_4 = rax_10[1]
            
            if (rbx_4 != 0)
                rbx_4[1].d += 1
            
            if (rcx_13 + 0x78 == &var_328)
            label_140e728e7:
                
                if (rbx_4 != 0)
                    rbx_4[1].d -= 1
                    
                    if (rbx_4[1].d == 1)
                        (**rbx_4)(rbx_4)
                        int32_t temp10_1 = *(rbx_4 + 0xc)
                        *(rbx_4 + 0xc) -= 1
                        
                        if (temp10_1 == 1)
                            (*(*rbx_4 + 8))(rbx_4, 1)
            else
                *(rcx_13 + 0x78) = *rax_10
                int64_t* rdi_1 = *(rcx_13 + 0x80)
                
                if (rbx_4 == rdi_1)
                    goto label_140e728e7
                
                *(rcx_13 + 0x80) = rbx_4
                
                if (rdi_1 != 0)
                    rdi_1[1].d -= 1
                    
                    if (rdi_1[1].d == 1)
                        (**rdi_1)(rdi_1)
                        int32_t temp14_1 = *(rdi_1 + 0xc)
                        *(rdi_1 + 0xc) -= 1
                        
                        if (temp14_1 == 1)
                            (*(*rdi_1 + 8))(rdi_1, 1)
            
            int64_t* var_300
            
            if (var_300 != 0)
                var_300[1].d -= 1
                
                if (var_300[1].d == 1)
                    (**var_300)(var_300)
                    int32_t temp13_1 = *(var_300 + 0xc)
                    *(var_300 + 0xc) -= 1
                    
                    if (temp13_1 == 1)
                        (*(*var_300 + 8))(var_300, 1)
        
        int64_t* rbx_6 = *(rcx_13 + 0x80)
        
        if (rbx_6 != 0)
            rbx_6[1].d += 1
        
        zmm0_1 = sub_140d965b0(&var_2f8, *(rcx_13 + 0x78))
        
        if (rbx_6 != 0)
            rbx_6[1].d -= 1
            
            if (rbx_6[1].d == 1)
                (**rbx_6)(rbx_6)
                int32_t temp6_1 = *(rbx_6 + 0xc)
                *(rbx_6 + 0xc) -= 1
                
                if (temp6_1 == 1)
                    (*(*rbx_6 + 8))(rbx_6, 1)
        
        if (var_310 != 0)
            var_310[1].d -= 1
            
            if (var_310[1].d == 1)
                (**var_310)(var_310)
                int32_t temp8_1 = *(var_310 + 0xc)
                *(var_310 + 0xc) -= 1
                
                if (temp8_1 == 1)
                    (*(*var_310 + 8))(var_310, 1)
    else
        sub_140e68880(*sub_140e683e0(arg1, rdx, arg2), &var_328, 0xa)
        int64_t rbx_1 = *arg1
        int64_t* rax_2 = sub_140e67030(arg1, &var_308)
        void var_198
        sub_140d963a0(&var_2f8, (*(rbx_1 + 0xf8))(arg1, &var_198, var_328, rax_2, 0, arg2))
        void var_48
        sub_140596d80(&var_48)
        int64_t* var_50
        
        if (var_50 != 0)
            var_50[1].d -= 1
            
            if (var_50[1].d == 1)
                (**var_50)(var_50)
                int32_t temp2_1 = *(var_50 + 0xc)
                *(var_50 + 0xc) -= 1
                
                if (temp2_1 == 1)
                    (*(*var_50 + 8))(var_50, 1)
        
        void var_190
        sub_140d94d20(&var_190)
        
        if (var_310 != 0)
            var_310[1].d -= 1
            
            if (var_310[1].d == 1)
                (**var_310)(var_310)
                int32_t temp4_1 = *(var_310 + 0xc)
                *(var_310 + 0xc) -= 1
                
                if (temp4_1 == 1)
                    (*(*var_310 + 8))(var_310, 1)
        
        zmm0_1 = sub_140596d80(&var_308)
    
    if (sub_140db3500(&var_2f8) != 0)
        var_328 = *arg3
        void* rax_22 = arg3[1]
        void* var_320_1 = rax_22
        
        if (rax_22 != 0)
            *(rax_22 + 8) += 1
        
        sub_140e62da0(arg1, &var_2f8, &var_328, arg2, zmm0_1, 0)
    
    void var_1a8
    sub_140596d80(&var_1a8)
    int64_t* var_1b0
    
    if (var_1b0 != 0)
        var_1b0[1].d -= 1
        
        if (var_1b0[1].d == 1)
            (**var_1b0)(var_1b0)
            int32_t temp15_1 = *(var_1b0 + 0xc)
            *(var_1b0 + 0xc) -= 1
            
            if (temp15_1 == 1)
                (*(*var_1b0 + 8))(var_1b0, 1)
    
    void var_2f0
    result = sub_140d94d20(&var_2f0)

__security_check_cookie(result_1 ^ &var_358)
return result
