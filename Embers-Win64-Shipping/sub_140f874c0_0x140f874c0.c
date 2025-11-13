// 函数: sub_140f874c0
// 地址: 0x140f874c0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void var_4d8
int64_t rax_1 = __security_cookie ^ &var_4d8
int64_t result = data_143e244b0

if (*(arg1 + 0x3d0) != result)
    void* rsi_1 = nullptr
    char* rdi_1 = *(arg2 + 0x10)
    char* rax_2
    int32_t rbx_1
    
    if (rdi_1 == 0)
        void var_2f0
        rax_2 = sub_140d947e0(&var_2f0)
        rbx_1 = 2
    else
        void var_190
        rax_2 = sub_140e52c00(&var_190, rdi_1)
        rbx_1 = 0
    
    void var_450
    uint128_t zmm0_1 = sub_140e52b70(&var_450, rax_2)
    
    if (rbx_1 != 0)
        void var_1a0
        sub_140596d80(&var_1a0)
        int64_t* var_1a8
        
        if (var_1a8 != 0)
            var_1a8[1].d -= 1
            
            if (var_1a8[1].d == 1)
                (**var_1a8)(var_1a8)
                int32_t temp2_1 = *(var_1a8 + 0xc)
                *(var_1a8 + 0xc) -= 1
                
                if (temp2_1 == 1)
                    (*(*var_1a8 + 8))(var_1a8, 1)
        
        void var_2e8
        zmm0_1 = sub_140d94d20(&var_2e8)
    
    if (rdi_1 != 0)
        void var_40
        sub_140596d80(&var_40)
        int64_t* var_48
        
        if (var_48 != 0)
            var_48[1].d -= 1
            
            if (var_48[1].d == 1)
                (**var_48)(var_48)
                int32_t temp4_1 = *(var_48 + 0xc)
                *(var_48 + 0xc) -= 1
                
                if (temp4_1 == 1)
                    (*(*var_48 + 8))(var_48, 1)
        
        void var_188
        zmm0_1 = sub_140d94d20(&var_188)
    
    int64_t* rcx_11 = *(arg1 + 0x10)
    char var_477_1 = 0
    int32_t var_474 = 5
    
    if (rcx_11 != 0)
        int32_t rax_7 = rcx_11[1].d
        
        if (rax_7 != 0)
            rcx_11[1].d = rax_7 + 1
            rax_7.b = 1
        
        if (rax_7.b == 0)
            rcx_11 = nullptr
        
        if (rcx_11 != 0)
            rsi_1 = *(arg1 + 8)
    
    char var_488_1 = 1
    void var_478
    char* var_490_1 = &var_478
    void* rcx_12 = data_143e29f28
    int32_t* var_498_1 = &data_143dbb1f0
    char var_4a0_1 = 1
    int32_t* var_4a8_1 = &var_474
    int128_t* var_4b0_1 = arg2 + 0x18
    void* var_470 = rsi_1
    void* var_460
    sub_140e80850(rcx_12, &var_460, &var_470, &var_450, zmm0_1, arg1 + 0x3d0, var_4b0_1, var_4a8_1, 
        var_4a0_1, var_498_1, var_490_1, var_488_1)
    int64_t* var_458
    
    if (var_458 != 0)
        var_458[1].d -= 1
        
        if (var_458[1].d == 1)
            (**var_458)(var_458)
            int32_t temp6_1 = *(var_458 + 0xc)
            *(var_458 + 0xc) -= 1
            
            if (temp6_1 == 1)
                (*(*var_458 + 8))(var_458, 1)
    
    if (rcx_11 != 0)
        rcx_11[1].d -= 1
        
        if (rcx_11[1].d == 1)
            (**rcx_11)(rcx_11)
            int32_t temp8_1 = *(rcx_11 + 0xc)
            *(rcx_11 + 0xc) -= 1
            
            if (temp8_1 == 1)
                (*(*rcx_11 + 8))(rcx_11, 1)
    
    void var_300
    sub_140596d80(&var_300)
    int64_t* var_308
    
    if (var_308 != 0)
        var_308[1].d -= 1
        
        if (var_308[1].d == 1)
            (**var_308)(var_308)
            int32_t temp9_1 = *(var_308 + 0xc)
            *(var_308 + 0xc) -= 1
            
            if (temp9_1 == 1)
                (*(*var_308 + 8))(var_308, 1)
    
    void var_448
    result = sub_140d94d20(&var_448)

__security_check_cookie(rax_1 ^ &var_4d8)
return result
