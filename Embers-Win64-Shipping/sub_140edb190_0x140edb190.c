// 函数: sub_140edb190
// 地址: 0x140edb190
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void var_238
int64_t result = __security_cookie ^ &var_238
int64_t result_1 = result

if (arg1[0x8a].b == 0)
    void* var_208
    *(*(*(*arg1 + 0x258))(arg1, &var_208) + 0x3f8) = 1
    int64_t* var_200
    
    if (var_200 != 0)
        var_200[1].d -= 1
        
        if (var_200[1].d == 1)
            (**var_200)(var_200)
            int32_t temp1_1 = *(var_200 + 0xc)
            *(var_200 + 0xc) -= 1
            
            if (temp1_1 == 1)
                (*(*var_200 + 8))(var_200, 1)
    
    arg1[0x8a].b = 1
    int64_t rcx_2 = 0
    int64_t* rbx_2 = arg1[2]
    
    if (rbx_2 != 0)
        int32_t rax_5 = rbx_2[1].d
        
        if (rax_5 != 0)
            rbx_2[1].d = rax_5 + 1
            rax_5.b = 1
        
        if (rax_5.b == 0)
            rbx_2 = nullptr
        
        if (rbx_2 != 0)
            rcx_2 = arg1[1]
    
    int64_t var_1f0 = rcx_2
    
    if (rbx_2 != 0)
        int32_t rax_6 = rbx_2[1].d
        rbx_2[1].d = rax_6
        
        if (rax_6 == 0)
            (**rbx_2)(rbx_2)
            int32_t temp2_1 = *(rbx_2 + 0xc)
            *(rbx_2 + 0xc) -= 1
            
            if (temp2_1 == 1)
                (*(*rbx_2 + 8))(rbx_2, 1)
    
    int64_t* var_1f8 = &var_1f0
    void*** rax_9 = sub_140e91a70()
    void* var_1e0 = &rax_9[2]
    sub_140918950(&var_1e0, &rax_9[2])
    int64_t var_218_1 = 0x2b8
    int64_t** var_1d0_1 = &var_1f8
    sub_140e23ed0(&rax_9[2], "SDockingCross")
    void var_1b8
    int64_t* rax_10
    int128_t zmm1_1
    rax_10, zmm1_1 = sub_140e93f70(&var_1b8)
    void* var_1c8
    void** rax_11 = sub_140e9c050(&var_1e0, &var_1c8, rax_10, zmm1_1)
    int64_t* rbx_4 = rax_11[1]
    var_208 = *rax_11
    int64_t* var_200_1 = rbx_4
    
    if (rbx_4 != 0)
        rbx_4[1].d += 1
    
    void*** rax_12 = sub_140de7320(arg1[0x88], 0xffffffff)
    *(rax_12 + 0x24) = 0
    sub_140de1aa0(rax_12, &var_208)
    
    if (rbx_4 != 0)
        rbx_4[1].d -= 1
        
        if (rbx_4[1].d == 1)
            (**rbx_4)(rbx_4)
            int32_t temp5_1 = *(rbx_4 + 0xc)
            *(rbx_4 + 0xc) -= 1
            
            if (temp5_1 == 1)
                (*(*rbx_4 + 8))(rbx_4, 1)
    
    int64_t* var_1c0
    
    if (var_1c0 != 0)
        var_1c0[1].d -= 1
        
        if (var_1c0[1].d == 1)
            (**var_1c0)(var_1c0)
            int32_t temp7_1 = *(var_1c0 + 0xc)
            *(var_1c0 + 0xc) -= 1
            
            if (temp7_1 == 1)
                (*(*var_1c0 + 8))(var_1c0, 1)
    
    if (rax_9 != 0)
        rax_9[1].d -= 1
        
        if (rax_9[1].d == 1)
            (**rax_9)(rax_9)
            int32_t temp9_1 = *(rax_9 + 0xc)
            *(rax_9 + 0xc) -= 1
            
            if (temp9_1 == 1)
                (*rax_9)[1](rax_9, 1)
    
    if (rbx_2 != 0)
        rbx_2[1].d -= 1
        
        if (rbx_2[1].d == 1)
            (**rbx_2)(rbx_2)
            int32_t temp10_1 = *(rbx_2 + 0xc)
            *(rbx_2 + 0xc) -= 1
            
            if (temp10_1 == 1)
                (*(*rbx_2 + 8))(rbx_2, 1)
    
    result = sub_140ddea30(&var_1b8)

__security_check_cookie(result_1 ^ &var_238)
return result
