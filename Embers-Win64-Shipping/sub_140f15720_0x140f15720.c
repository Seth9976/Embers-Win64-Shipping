// 函数: sub_140f15720
// 地址: 0x140f15720
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void var_2e8
int64_t rax_1 = __security_cookie ^ &var_2e8

if (*(arg1 + 0x640) == 0)
    void* r15_1 = nullptr
    void*** rax_2 = sub_140ee0d80()
    void* var_2b0 = &rax_2[2]
    sub_140918950(&var_2b0, &rax_2[2])
    int64_t var_2c8_1 = 0x420
    void var_2b8
    void* var_2a0_1 = &var_2b8
    sub_140e23ed0(&rax_2[2], "SPopupErrorText")
    
    if (rax_2 != 0)
        rax_2[1].d += 1
    
    void*** rdi_1 = nullptr
    
    if (rax_2 != 0)
        rdi_1 = rax_2
    
    void var_250
    int64_t* rax_3
    int128_t zmm1_1
    rax_3, zmm1_1 = sub_140ee1720(&var_250)
    void* var_288
    void** rax_4 = sub_140ee57c0(&var_2b0, &var_288, rax_3, zmm1_1)
    int64_t* rsi_1 = rax_4[1]
    void* var_298 = *rax_4
    int64_t* var_290_1 = rsi_1
    
    if (rsi_1 != 0)
        rsi_1[1].d += 1
    
    void* rax_6 = sub_140698b50(sub_140ea2880(*(arg1 + 0x630)))
    int128_t var_278
    __builtin_memcpy(&var_278, 
        "\x00\x00\x40\x40\x00\x00\x00\x00\x00\x00\x40\x40\x00\x00\x00\x00\x01", 0x11)
    int64_t var_260 = 0
    int32_t var_258_1 = 0
    __builtin_memcpy(rax_6 + 0x48, 
        "\x00\x00\x40\x40\x00\x00\x00\x00\x00\x00\x40\x40\x00\x00\x00\x00\x01", 0x11)
    sub_1407473e0(rax_6 + 0x60, &var_260)
    sub_140745b20(&var_260)
    sub_140693600(rax_6, &var_298)
    
    if (rsi_1 != 0)
        rsi_1[1].d -= 1
        
        if (rsi_1[1].d == 1)
            (**rsi_1)(rsi_1)
            int32_t temp2_1 = *(rsi_1 + 0xc)
            *(rsi_1 + 0xc) -= 1
            
            if (temp2_1 == 1)
                (*(*rsi_1 + 8))(rsi_1, 1)
    
    int64_t* var_280
    
    if (var_280 != 0)
        var_280[1].d -= 1
        
        if (var_280[1].d == 1)
            (**var_280)(var_280)
            int32_t temp4_1 = *(var_280 + 0xc)
            *(var_280 + 0xc) -= 1
            
            if (temp4_1 == 1)
                (*(*var_280 + 8))(var_280, 1)
    
    if (rax_2 != 0)
        rax_2[1].d -= 1
        
        if (rax_2[1].d == 1)
            (**rax_2)(rax_2)
            int32_t temp6_1 = *(rax_2 + 0xc)
            *(rax_2 + 0xc) -= 1
            
            if (temp6_1 == 1)
                (*rax_2)[1](rax_2, 1)
    
    void var_50
    sub_140745b20(&var_50)
    int64_t* var_70
    
    if (var_70 != 0)
        var_70[1].d -= 1
        
        if (var_70[1].d == 1)
            (**var_70)(var_70)
            int32_t temp7_1 = *(var_70 + 0xc)
            *(var_70 + 0xc) -= 1
            
            if (temp7_1 == 1)
                (*(*var_70 + 8))(var_70, 1)
    
    sub_140ddea30(&var_250)
    
    if (rax_2 != -0x10)
        r15_1 = &rax_2[0x81]
    
    if (rdi_1 != 0)
        rdi_1[1].d += 1
    
    void** rax_16
    int64_t* rcx_21
    
    if (arg1 + 0x640 != &var_288)
        *(arg1 + 0x640) = r15_1
        int64_t* rbx_6 = *(arg1 + 0x648)
        
        if (rdi_1 == rbx_6)
            goto label_140f159a1
        
        *(arg1 + 0x648) = rdi_1
        
        if (rbx_6 == 0)
            goto label_140f159c8
        
        rbx_6[1].d -= 1
        
        if (rbx_6[1].d != 1)
            goto label_140f159c8
        
        (**rbx_6)(rbx_6)
        int32_t temp12_1 = *(rbx_6 + 0xc)
        *(rbx_6 + 0xc) -= 1
        
        if (temp12_1 != 1)
            goto label_140f159c8
        
        rax_16 = *rbx_6
        rcx_21 = rbx_6
        goto label_140f159c5
    
label_140f159a1:
    
    if (rdi_1 != 0)
        rdi_1[1].d -= 1
        
        if (rdi_1[1].d != 1)
            goto label_140f159c8
        
        (**rdi_1)(rdi_1)
        int32_t temp9_1 = *(rdi_1 + 0xc)
        *(rdi_1 + 0xc) -= 1
        
        if (temp9_1 != 1)
            goto label_140f159c8
        
        rax_16 = *rdi_1
        rcx_21 = rdi_1
    label_140f159c5:
        rax_16[1](rcx_21, 1)
    label_140f159c8:
        
        if (rdi_1 != 0)
            rdi_1[1].d -= 1
            
            if (rdi_1[1].d == 1)
                (**rdi_1)(rdi_1)
                int32_t temp13_1 = *(rdi_1 + 0xc)
                *(rdi_1 + 0xc) -= 1
                
                if (temp13_1 == 1)
                    (*rdi_1)[1](rdi_1, 1)

int64_t* rcx_25 = *(arg1 + 0x640)
int64_t result = (*(*rcx_25 + 8))(rcx_25, arg2)
__security_check_cookie(rax_1 ^ &var_2e8)
return result
