// 函数: sub_140fbf8f0
// 地址: 0x140fbf8f0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void var_158
int64_t rax_1 = __security_cookie ^ &var_158
int64_t* rbx = *(arg4 + 0x48)

if (rbx != 0)
    rbx[1].d += 1

int64_t rsi
rsi.b = *(arg4 + 0x38) == data_143e1e008

if (rbx != 0)
    rbx[1].d -= 1
    
    if (rbx[1].d == 1)
        (**rbx)(rbx)
        int32_t temp1_1 = *(rbx + 0xc)
        *(rbx + 0xc) -= 1
        
        if (temp1_1 == 1)
            (*(*rbx + 8))(rbx, 1)

if (rsi.b == 0)
    int64_t* rbx_2 = *(arg4 + 0x48)
    
    if (rbx_2 != 0)
        rbx_2[1].d += 1
    
    void* rdi
    rdi.b = *(arg4 + 0x38) == data_143e1e020
    
    if (rbx_2 != 0)
        rbx_2[1].d -= 1
        
        if (rbx_2[1].d == 1)
            (**rbx_2)(rbx_2)
            int32_t temp3_1 = *(rbx_2 + 0xc)
            *(rbx_2 + 0xc) -= 1
            
            if (temp3_1 == 1)
                (*(*rbx_2 + 8))(rbx_2, 1)
    
    if (rdi.b == 0)
        *arg2 = 0
    else
        sub_140fbd400(arg1)
        *arg2 = 1
    
    *(arg2 + 8) = 0
    *(arg2 + 0x10) = 0
    arg2[0x20] = 0
    __builtin_memset(&arg2[0x28], 0, 0x88)
    *(arg2 + 0xb4) &= 0xffffff00
    *(arg2 + 0xb0) = 0x20702
else
    int64_t* rbx_1 = *(arg1 + 0x10)
    int64_t r13_1 = 0
    *(arg1 + 0x420) = 0
    
    if (rbx_1 != 0)
        int32_t rax_5 = rbx_1[1].d
        
        if (rax_5 != 0)
            rbx_1[1].d = rax_5 + 1
            rax_5.b = 1
        
        if (rax_5.b == 0)
            rbx_1 = nullptr
        
        if (rbx_1 != 0)
            int32_t rax_6 = rbx_1[1].d
            r13_1 = *(arg1 + 8)
            rbx_1[1].d = rax_6
            
            if (rax_6 == 0)
                (**rbx_1)(rbx_1)
                int32_t temp4_1 = *(rbx_1 + 0xc)
                *(rbx_1 + 0xc) -= 1
                
                if (temp4_1 == 1)
                    (*(*rbx_1 + 8))(rbx_1, 1)
            
            rbx_1[1].d += 1
    
    int64_t* rdi_1 = *(arg1 + 0x10)
    int64_t r12_1 = 0
    
    if (rdi_1 != 0)
        int32_t rax_9 = rdi_1[1].d
        
        if (rax_9 != 0)
            rdi_1[1].d = rax_9 + 1
            rax_9.b = 1
        
        if (rax_9.b == 0)
            rdi_1 = nullptr
        
        if (rdi_1 != 0)
            int32_t rax_10 = rdi_1[1].d
            r12_1 = *(arg1 + 8)
            rdi_1[1].d = rax_10
            
            if (rax_10 == 0)
                (**rdi_1)(rdi_1)
                int32_t temp7_1 = *(rdi_1 + 0xc)
                *(rdi_1 + 0xc) -= 1
                
                if (temp7_1 == 1)
                    (*(*rdi_1 + 8))(rdi_1, 1)
    
    int64_t var_120 = r12_1
    int64_t* var_118_1 = rdi_1
    
    if (rdi_1 != 0)
        rdi_1[1].d += 1
    
    int64_t var_138 = data_143e1e008
    int64_t var_130_1 = data_143e1e010
    int64_t* rax_15 = data_143e1e018
    
    if (rax_15 != 0)
        rax_15[1].d += 1
    
    int32_t var_54
    int32_t var_54_1 = var_54 & 0xffffff00
    int64_t var_a0_1 = r13_1
    char var_108 = 1
    int64_t var_100_1 = 0
    int64_t var_f8_1 = 0
    char var_e8_1 = 0
    int64_t var_e0
    __builtin_memset(&var_e0, 0, 0x40)
    int64_t* var_98_1 = (zx.o(0)).q
    int64_t var_88
    __builtin_memset(&var_88, 0, 0x30)
    int32_t var_58_1 = 0x20702
    
    if (rbx_1 != 0)
        *(rbx_1 + 0xc) += 1
        
        if (var_98_1 != 0)
            int32_t temp6_1 = *(var_98_1 + 0xc)
            *(var_98_1 + 0xc) -= 1
            
            if (temp6_1 == 1)
                (*(*var_98_1 + 8))(var_98_1, 1)
        
        var_98_1 = rbx_1
    
    int64_t var_80
    sub_140627710(&var_80, &var_138)
    
    if (rax_15 != 0)
        rax_15[1].d -= 1
        
        if (rax_15[1].d == 1)
            (**rax_15)(rax_15)
            int32_t temp9_1 = *(rax_15 + 0xc)
            *(rax_15 + 0xc) -= 1
            
            if (temp9_1 == 1)
                (*(*rax_15 + 8))(rax_15, 1)
    
    sub_140596b00(arg2, sub_140eae530(&var_108, &var_120))
    sub_140597700(&var_108)
    
    if (rdi_1 != 0)
        rdi_1[1].d -= 1
        
        if (rdi_1[1].d == 1)
            (**rdi_1)(rdi_1)
            int32_t temp11_1 = *(rdi_1 + 0xc)
            *(rdi_1 + 0xc) -= 1
            
            if (temp11_1 == 1)
                (*(*rdi_1 + 8))(rdi_1, 1)
    
    if (rbx_1 != 0)
        rbx_1[1].d -= 1
        
        if (rbx_1[1].d == 1)
            (**rbx_1)(rbx_1)
            int32_t temp13_1 = *(rbx_1 + 0xc)
            *(rbx_1 + 0xc) -= 1
            
            if (temp13_1 == 1)
                (*(*rbx_1 + 8))(rbx_1, 1)
        
        rbx_1[1].d -= 1
        
        if (rbx_1[1].d == 1)
            (**rbx_1)(rbx_1)
            int32_t temp14_1 = *(rbx_1 + 0xc)
            *(rbx_1 + 0xc) -= 1
            
            if (temp14_1 == 1)
                int64_t r8_1 = *rbx_1
                (*(r8_1 + 8))(rbx_1, 1, r8_1)

__security_check_cookie(rax_1 ^ &var_158)
return arg2
