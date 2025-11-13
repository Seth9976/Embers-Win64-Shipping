// 函数: sub_140ec8cf0
// 地址: 0x140ec8cf0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void var_c8
int64_t rax_1 = __security_cookie ^ &var_c8
int64_t* rdi = *(arg4 + 0x70)
int64_t r14 = 0
char rax_2

if (rdi != 0)
    int64_t rbx_1 = *rdi
    sub_140ec00f0()
    rax_2 = (*(rbx_1 + 0x58))(rdi, &data_143e29fe0)

int64_t* rdi_1

if (rdi == 0 || rax_2 == 0)
    rdi_1 = nullptr
label_140ec8fe5:
    *arg2 = 0
    *(arg2 + 8) = 0
    *(arg2 + 0x10) = 0
    arg2[0x20] = 0
    __builtin_memset(&arg2[0x28], 0, 0x88)
    *(arg2 + 0xb4) &= 0xffffff00
    *(arg2 + 0xb0) = 0x20702
    
    if (rdi_1 != 0)
        rdi_1[1].d -= 1
        
        if (rdi_1[1].d == 1)
            (**rdi_1)(rdi_1)
            int32_t temp1_1 = *(rdi_1 + 0xc)
            *(rdi_1 + 0xc) -= 1
            
            if (temp1_1 == 1)
                (*(*rdi_1 + 8))(rdi_1, 1)
else
    rdi_1 = *(arg4 + 0x78)
    void* r15_1 = *(arg4 + 0x70)
    
    if (rdi_1 != 0)
        rdi_1[1].d += 1
    
    if (r15_1 == 0)
        goto label_140ec8fe5
    
    int64_t* rbx_2 = arg1[2]
    
    if (rbx_2 != 0)
        int32_t rax_3 = rbx_2[1].d
        
        if (rax_3 != 0)
            rbx_2[1].d = rax_3 + 1
            rax_3.b = 1
        
        if (rax_3.b == 0)
            rbx_2 = nullptr
        
        if (rbx_2 != 0)
            int32_t rax_4 = rbx_2[1].d
            r14 = arg1[1]
            rbx_2[1].d = rax_4
            
            if (rax_4 == 0)
                (**rbx_2)(rbx_2)
                int32_t temp6_1 = *(rbx_2 + 0xc)
                *(rbx_2 + 0xc) -= 1
                
                if (temp6_1 == 1)
                    (*(*rbx_2 + 8))(rbx_2, 1)
    
    int64_t var_a8 = r14
    int64_t* var_a0_1 = rbx_2
    
    if (rbx_2 != 0)
        rbx_2[1].d += 1
    
    char rax_7 = sub_140eadaa0(r15_1, &var_a8, 1)
    
    if (rbx_2 != 0)
        rbx_2[1].d -= 1
        
        if (rbx_2[1].d == 1)
            int64_t rdx_1 = *rbx_2
            (*rdx_1)(rbx_2, rdx_1)
            int32_t temp4_1 = *(rbx_2 + 0xc)
            *(rbx_2 + 0xc) -= 1
            
            if (temp4_1 == 1)
                (*(*rbx_2 + 8))(rbx_2, 1)
        
        rbx_2[1].d -= 1
        
        if (rbx_2[1].d == 1)
            (**rbx_2)(rbx_2)
            int32_t temp5_1 = *(rbx_2 + 0xc)
            *(rbx_2 + 0xc) -= 1
            
            if (temp5_1 == 1)
                (*(*rbx_2 + 8))(rbx_2, 1)
    
    if (rax_7 == 0)
        goto label_140ec8fe5
    
    int64_t* rbx_3 = arg1[0x89]
    
    if (rbx_3 != 0)
        rbx_3[1].d += 1
    
    var_a8 = arg1[0x88]
    int64_t* var_a0_2 = rbx_3
    
    if (rbx_3 != 0)
        rbx_3[1].d += 1
    
    float var_90
    sub_140e10810(arg1, &var_90, arg3, &var_a8)
    
    if (rbx_3 != 0)
        rbx_3[1].d -= 1
        
        if (rbx_3[1].d == 1)
            (**rbx_3)(rbx_3)
            int32_t temp8_1 = *(rbx_3 + 0xc)
            *(rbx_3 + 0xc) -= 1
            
            if (temp8_1 == 1)
                (*(*rbx_3 + 8))(rbx_3, 1)
    
    float var_74
    var_a0_2.d = var_74 * var_90
    float var_70
    var_a0_2:4.d = var_70 * var_90
    float var_8c
    float var_6c
    float var_98_1 = var_6c * var_8c
    float var_68
    float var_94_1 = var_68 * var_8c
    int32_t var_64
    var_a8.d = var_64
    int32_t var_60
    var_a8:4.d = var_60
    
    if (sub_140db3460(&var_a8, arg4 + 0x18) != 0)
        sub_140edb190(arg1)
    else if (arg1[0x8a].b != 0)
        sub_140e214e0(arg1[0x88], 0xffffffff)
        arg1[0x8a].b = 0
    
    *arg2 = 1
    *(arg2 + 8) = 0
    *(arg2 + 0x10) = 0
    arg2[0x20] = 0
    __builtin_memset(&arg2[0x28], 0, 0x88)
    *(arg2 + 0xb4) &= 0xffffff00
    *(arg2 + 0xb0) = 0x20702
    
    if (rdi_1 != 0)
        rdi_1[1].d -= 1
        
        if (rdi_1[1].d == 1)
            (**rdi_1)(rdi_1)
            int32_t temp10_1 = *(rdi_1 + 0xc)
            *(rdi_1 + 0xc) -= 1
            
            if (temp10_1 == 1)
                int64_t r8_2 = *rdi_1
                (*(r8_2 + 8))(rdi_1, 1, r8_2)
__security_check_cookie(rax_1 ^ &var_c8)
return arg2
