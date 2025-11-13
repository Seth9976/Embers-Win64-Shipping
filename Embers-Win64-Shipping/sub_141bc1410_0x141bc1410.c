// 函数: sub_141bc1410
// 地址: 0x141bc1410
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void var_168
int64_t rax_1 = __security_cookie ^ &var_168
int64_t* r12 = nullptr
int64_t* rsi = *(arg1 + 0x4c0)

if (rsi != 0)
    int32_t rax_2 = rsi[1].d
    
    if (rax_2 != 0)
        rsi[1].d = rax_2 + 1
        rax_2.b = 1
    
    if (rax_2.b == 0)
        rsi = nullptr
    
    if (rsi != 0)
        r12 = *(arg1 + 0x4b8)

*(arg1 + 0x568) = 0
int64_t* rbx = *(arg4 + 0x48)

if (rbx != 0)
    rbx[1].d += 1

int64_t rdi
rdi.b = *(arg4 + 0x38) == data_143e1e008

if (rbx != 0)
    rbx[1].d -= 1
    
    if (rbx[1].d == 1)
        (**rbx)(rbx)
        int32_t temp1_1 = *(rbx + 0xc)
        *(rbx + 0xc) -= 1
        
        if (temp1_1 == 1)
            (*(*rbx + 8))(rbx, 1)

if (rdi.b == 0)
label_141bc188f:
    *arg2 = 0
    *(arg2 + 8) = 0
    *(arg2 + 0x10) = 0
    arg2[0x20] = 0
    __builtin_memset(&arg2[0x28], 0, 0x88)
    *(arg2 + 0xb4) &= 0xffffff00
    *(arg2 + 0xb0) = 0x20702
    
    if (rsi != 0)
        rsi[1].d -= 1
        
        if (rsi[1].d == 1)
            (**rsi)(rsi)
            int32_t temp3_1 = *(rsi + 0xc)
            *(rsi + 0xc) -= 1
            
            if (temp3_1 == 1)
                (*(*rsi + 8))(rsi, 1)
else
    int32_t rax_7 = (*(*(arg1 - 8) + 0x70))(arg1 - 8)
    
    if (rax_7 == 0)
        goto label_141bc188f
    
    int64_t* rax_9 = (*(*r12 + 0x48))(r12, arg1 - 8)
    
    if (rax_9 == 0)
        goto label_141bc188f
    
    char rax_11
    int64_t r8
    int64_t r9
    rax_11, r8, r9 = (*(*r12 + 0x10))(r12, rax_9)
    char rcx_5 = rax_11
    
    if (rax_7 == 3)
        char rax_12 = (*(arg4 + 8)).b
        
        if ((rax_12 & 0xc) != 0)
            r9.b = 1
            r8.b = rcx_5 == 0
            (*(*r12 + 0x28))(r12, *rax_9, r8, r9, rax_11)
        label_141bc1541:
            bool cond:2_1 = *(arg1 + 0x4d0) != 1
            *(arg1 + 0x568) = 1
            
            if (not(cond:2_1))
                (*(*r12 + 0x40))(r12, 2)
            
            rcx_5 = rax_11
        else if ((rax_12 & 3) != 0)
            (*(*r12 + 0x38))(r12, *rax_9)
            goto label_141bc1541
    
    if (rcx_5 == 0 && *(arg1 + 0x568) == rcx_5)
        (*(*r12 + 0x30))(r12)
        int64_t r9_1
        r9_1.b = 1
        (*(*r12 + 0x28))(r12, *rax_9, 1, r9_1, rax_11)
        bool cond:1_1 = *(arg1 + 0x4d0) != 1
        *(arg1 + 0x568) = 1
        
        if (not(cond:1_1))
            (*(*r12 + 0x40))(r12, 2)
    
    int64_t* rbx_2 = *(arg1 + 0x10)
    
    if (rbx_2 != 0)
        int32_t rax_19 = rbx_2[1].d
        
        if (rax_19 != 0)
            rbx_2[1].d = rax_19 + 1
            rax_19.b = 1
        
        if (rax_19.b == 0)
            rbx_2 = nullptr
    
    int64_t rdi_2
    
    if (rbx_2 != 0)
        rdi_2 = *(arg1 + 8)
    
    int64_t rdi_3
    
    if (rbx_2 == 0 || rdi_2 == 0)
        rdi_3 = 0
    else
        rdi_3 = rdi_2 - 8
    
    if (rbx_2 != 0)
        int32_t rax_20 = rbx_2[1].d
        rbx_2[1].d = rax_20
        
        if (rax_20 == 0)
            (**rbx_2)(rbx_2)
            int32_t temp4_1 = *(rbx_2 + 0xc)
            *(rbx_2 + 0xc) -= 1
            
            if (temp4_1 == 1)
                (*(*rbx_2 + 8))(rbx_2, 1)
    
    int64_t r13_1 = rdi_3 + 8
    
    if (rdi_3 == 0)
        r13_1 = 0
    
    if (rbx_2 != 0)
        rbx_2[1].d += 1
    
    int64_t* rdi_4 = *(arg1 + 0x10)
    int64_t r15_2
    
    if (rdi_4 == 0)
        r15_2 = 0
    else
        int32_t rax_23 = rdi_4[1].d
        
        if (rax_23 != 0)
            rdi_4[1].d = rax_23 + 1
            rax_23.b = 1
        
        if (rax_23.b == 0)
            rdi_4 = nullptr
        
        if (rdi_4 == 0)
            r15_2 = 0
        else
            int64_t r15_1 = *(arg1 + 8)
            
            if (r15_1 == 0)
                r15_2 = 0
            else
                r15_2 = r15_1 - 8
    
    if (rdi_4 != 0)
        int32_t rax_24 = rdi_4[1].d
        rdi_4[1].d = rax_24
        
        if (rax_24 == 0)
            (**rdi_4)(rdi_4)
            int32_t temp5_1 = *(rdi_4 + 0xc)
            *(rdi_4 + 0xc) -= 1
            
            if (temp5_1 == 1)
                (*(*rdi_4 + 8))(rdi_4, 1)
    
    int64_t* var_120_1 = rdi_4
    int64_t rax_27 = r15_2 + 8
    
    if (r15_2 == 0)
        rax_27 = 0
    
    int64_t var_128 = rax_27
    
    if (rdi_4 != 0)
        rdi_4[1].d += 1
    
    int64_t var_140 = data_143e1e008
    int64_t var_138_1 = data_143e1e010
    int64_t* rax_30 = data_143e1e018
    
    if (rax_30 != 0)
        rax_30[1].d += 1
    
    int32_t var_54
    int32_t var_54_1 = var_54 & 0xffffff00
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
    int64_t var_a0_1 = r13_1
    
    if (rbx_2 != 0)
        *(rbx_2 + 0xc) += 1
        
        if (var_98_1 != 0)
            int32_t temp7_1 = *(var_98_1 + 0xc)
            *(var_98_1 + 0xc) -= 1
            
            if (temp7_1 == 1)
                (*(*var_98_1 + 8))(var_98_1, 1)
        
        var_98_1 = rbx_2
    
    int64_t var_80
    sub_140627710(&var_80, &var_140)
    
    if (rax_30 != 0)
        rax_30[1].d -= 1
        
        if (rax_30[1].d == 1)
            (**rax_30)(rax_30)
            int32_t temp9_1 = *(rax_30 + 0xc)
            *(rax_30 + 0xc) -= 1
            
            if (temp9_1 == 1)
                (*(*rax_30 + 8))(rax_30, 1)
    
    void var_118
    sub_140596b00(arg2, 
        sub_140eae530(sub_140dbdce0(&var_108, (*(*r12 + 0xe0))(r12, &var_118), 0, 0), &var_128))
    sub_140597700(&var_108)
    
    if (rdi_4 != 0)
        rdi_4[1].d -= 1
        
        if (rdi_4[1].d == 1)
            (**rdi_4)(rdi_4)
            int32_t temp11_1 = *(rdi_4 + 0xc)
            *(rdi_4 + 0xc) -= 1
            
            if (temp11_1 == 1)
                (*(*rdi_4 + 8))(rdi_4, 1)
    
    if (rbx_2 != 0)
        rbx_2[1].d -= 1
        
        if (rbx_2[1].d == 1)
            (**rbx_2)(rbx_2)
            int32_t temp14_1 = *(rbx_2 + 0xc)
            *(rbx_2 + 0xc) -= 1
            
            if (temp14_1 == 1)
                (*(*rbx_2 + 8))(rbx_2, 1)
        
        rbx_2[1].d -= 1
        
        if (rbx_2[1].d == 1)
            (**rbx_2)(rbx_2)
            int32_t temp16_1 = *(rbx_2 + 0xc)
            *(rbx_2 + 0xc) -= 1
            
            if (temp16_1 == 1)
                (*(*rbx_2 + 8))(rbx_2, 1)
    
    if (rsi != 0)
        rsi[1].d -= 1
        
        if (rsi[1].d == 1)
            (**rsi)(rsi)
            int32_t temp15_1 = *(rsi + 0xc)
            *(rsi + 0xc) -= 1
            
            if (temp15_1 == 1)
                int64_t r8_2 = *rsi
                (*(r8_2 + 8))(rsi, 1, r8_2)

__security_check_cookie(rax_1 ^ &var_168)
return arg2
