// 函数: sub_141bbcd50
// 地址: 0x141bbcd50
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void var_138
int64_t rax_1 = __security_cookie ^ &var_138

if (*(arg1 + 0x3ee) == 0)
    if (sub_140e19840(arg1, arg5) != 0 && *(arg1 + 0x3ec) != 0)
        int64_t* rbx_2 = *(arg1 + 0x3e0)
        int64_t* rcx_8 = nullptr
        
        if (rbx_2 != 0)
            int32_t rax_11 = rbx_2[1].d
            
            if (rax_11 != 0)
                rbx_2[1].d = rax_11 + 1
                rax_11.b = 1
            
            if (rax_11.b == 0)
                rbx_2 = nullptr
            
            if (rbx_2 != 0)
                rcx_8 = *(arg1 + 0x3d8)
        
        (*(*rcx_8 + 0x40))(rcx_8, 2)
        
        if (rbx_2 != 0)
            rbx_2[1].d -= 1
            
            if (rbx_2[1].d == 1)
                (**rbx_2)(rbx_2)
                int32_t temp3_1 = *(rbx_2 + 0xc)
                *(rbx_2 + 0xc) -= 1
                
                if (temp3_1 == 1)
                    (*(*rbx_2 + 8))(rbx_2, 1)
    
    sub_141bbcf70(arg1, arg2, arg3, arg4)
else
    *(arg1 + 0x3ee) = 0
    int64_t* rbx_1 = *(arg1 + 0x3e0)
    int64_t* rax_2 = rbx_1
    
    if (rbx_1 != 0)
        int32_t rax_3 = rbx_1[1].d
        
        if (rax_3 == 0)
            rbx_1 = nullptr
            rax_2 = nullptr
        else
            rbx_1[1].d = rax_3 + 1
            rax_2 = rbx_1
    
    int64_t* r8 = nullptr
    
    if (rax_2 != 0)
        r8 = *(arg1 + 0x3d8)
    
    int64_t rax_5 = *r8
    int32_t var_54
    int32_t var_54_1 = var_54 & 0xffffff00
    arg5.o = zx.o(0)
    int64_t var_100_1 = 0
    int64_t var_f8_1 = 0
    char var_e8_1 = 0
    int64_t var_e0_1 = 0
    int64_t var_d8_1 = 0
    char var_108 = 1
    int128_t var_c8
    __builtin_memset(&var_c8, 0, 0x70)
    int32_t var_58_1 = 0x20702
    void var_118
    int64_t* rax_6 = (*(rax_5 + 0xe0))(r8, &var_118)
    void* rdi_1 = rax_6[1]
    int64_t var_d0_1 = *rax_6
    
    if (rdi_1 != 0)
        *(rdi_1 + 0xc) += 1
        var_c8.q = rdi_1
        int64_t* rdi_2 = rax_6[1]
        
        if (rdi_2 != 0)
            rdi_2[1].d -= 1
            
            if (rdi_2[1].d == 1)
                (**rdi_2)(rdi_2)
                int32_t temp5_1 = *(rdi_2 + 0xc)
                *(rdi_2 + 0xc) -= 1
                
                if (temp5_1 == 1)
                    (*(*rdi_2 + 8))(rdi_2, 1)
    
    sub_140596b00(arg2, &var_108)
    sub_140597700(&var_108)
    
    if (rbx_1 != 0)
        rbx_1[1].d -= 1
        
        if (rbx_1[1].d == 1)
            int64_t r8_1 = *rbx_1
            (*r8_1)(rbx_1, arg5, r8_1)
            int32_t temp4_1 = *(rbx_1 + 0xc)
            *(rbx_1 + 0xc) -= 1
            
            if (temp4_1 == 1)
                int64_t r8_2 = *rbx_1
                (*(r8_2 + 8))(rbx_1, 1, r8_2)

__security_check_cookie(rax_1 ^ &var_138)
return arg2
