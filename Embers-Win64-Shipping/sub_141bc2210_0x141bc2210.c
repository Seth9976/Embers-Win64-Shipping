// 函数: sub_141bc2210
// 地址: 0x141bc2210
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void var_218
int64_t rax_1 = __security_cookie ^ &var_218
int64_t* rdi = nullptr
int64_t* rbx = *(arg1 + 0x4c0)

if (rbx != 0)
    int32_t rax_2 = rbx[1].d
    
    if (rax_2 != 0)
        rbx[1].d = rax_2 + 1
        rax_2.b = 1
    
    if (rax_2.b == 0)
        rbx = nullptr
    
    if (rbx != 0)
        rdi = *(arg1 + 0x4b8)

void* r12 = &rdi[-0x9f]

if (rdi == 0)
    r12 = nullptr

if (rbx != 0)
    rbx[1].d += 1
    
    if (rbx != 0)
        int32_t rax_3 = rbx[1].d
        rbx[1].d = rax_3
        
        if (rax_3 == 0)
            (**rbx)(rbx)
            int32_t temp1_1 = *(rbx + 0xc)
            *(rbx + 0xc) -= 1
            
            if (temp1_1 == 1)
                (*(*rbx + 8))(rbx, 1)

int64_t* r14 = *(arg4 + 0x48)

if (r14 != 0)
    r14[1].d += 1

uint64_t rax_6
rax_6.b = *(arg4 + 0x38) == data_143e1e008
char var_1f8 = rax_6.b

if (r14 != 0)
    r14[1].d -= 1
    
    if (r14[1].d == 1)
        (**r14)(r14)
        int32_t temp2_1 = *(r14 + 0xc)
        *(r14 + 0xc) -= 1
        
        if (temp2_1 == 1)
            (*(*r14 + 8))(r14, 1)
        
        rax_6 = zx.q(var_1f8)

if (rax_6.b == 0)
    int64_t* r14_3 = *(arg4 + 0x48)
    int64_t rax_42 = *(arg4 + 0x38)
    
    if (r14_3 != 0)
        r14_3[1].d += 1
    
    char rax_43
    
    if (rax_42 == data_143e1e020)
        rax_43 = sub_140f7b490(r12)
    
    if (rax_42 != data_143e1e020 || rax_43 != 0)
        r12.b = 0
    else
        r12.b = 1
    
    if (r14_3 != 0)
        r14_3[1].d -= 1
        
        if (r14_3[1].d == 1)
            (**r14_3)(r14_3)
            int32_t temp6_1 = *(r14_3 + 0xc)
            *(r14_3 + 0xc) -= 1
            
            if (temp6_1 == 1)
                (*(*r14_3 + 8))(r14_3, 1)
    
    if (r12.b == 0)
        goto label_141bc2835
    
    if ((*(*(arg1 - 8) + 0x70))(arg1 - 8) - 1 u> 2)
        goto label_141bc2835
    
    int64_t* rax_50 = (*(*rdi + 0x48))(rdi, arg1 - 8)
    
    if (rax_50 == 0)
        goto label_141bc2835
    
    if ((*(*rdi + 0x10))(rdi, rax_50) == 0)
        (*(*rdi + 0x30))(rdi)
        int64_t r9_1
        r9_1.b = 1
        (*(*rdi + 0x28))(rdi, *rax_50, 1, r9_1, var_1f8)
        (*(*rdi + 0x40))(rdi, 2)
    
    (*(*rdi + 0xa0))(rdi, *rax_50, arg4)
    sub_140e194c0(arg2)
label_141bc27cf:
    
    if (rbx != 0)
        rbx[1].d -= 1
        
        if (rbx[1].d == 1)
            (**rbx)(rbx)
            int32_t temp11_1 = *(rbx + 0xc)
            *(rbx + 0xc) -= 1
            
            if (temp11_1 == 1)
                (*(*rbx + 8))(rbx, 1)
        
        if (rbx != 0)
            rbx[1].d -= 1
            
            if (rbx[1].d == 1)
                (**rbx)(rbx)
                int32_t temp13_1 = *(rbx + 0xc)
                *(rbx + 0xc) -= 1
                
                if (temp13_1 == 1)
                    (*(*rbx + 8))(rbx, 1)
else
    char var_1e8 = 0
    int64_t var_1e0_1 = 0
    int64_t var_1d8_1 = 0
    char var_1c8_1 = 0
    int64_t var_1c0
    __builtin_memset(&var_1c0, 0, 0x88)
    int32_t var_134
    int32_t var_134_1 = (var_134 & 0xffffff01) | 1
    int32_t var_138_1 = 0x20702
    void var_108
    sub_140596b00(&var_108, &var_1e8)
    sub_140597700(&var_1e8)
    
    if (*(arg1 + 0x568) != 0)
        var_1e8 = 1
        int64_t var_1e0_2 = 0
        int64_t var_1d8_2 = 0
        char var_1c8_2 = 0
        var_134_1 = (var_134_1 & 0xffffff01) | 1
        int64_t var_1c0_1
        __builtin_memset(&var_1c0_1, 0, 0x88)
        int32_t var_138_2 = 0x20702
        sub_140e54f20(&var_108, &var_1e8)
        sub_140597700(&var_1e8)
    
    float zmm4_1 = *arg3
    float zmm5_1 = arg3[1]
    float zmm2 = zmm4_1 * arg3[7]
    float zmm3 = zmm5_1 * arg3[9]
    zmm5_1 = zmm5_1 * arg3[0xa]
    zmm4_1 = zmm4_1 * arg3[8]
    int32_t zmm1 = arg3[0xc]
    float var_120_1 = zmm2
    float var_118_1 = zmm3
    float var_128 = arg3[0xb]
    int32_t var_124_1 = zmm1
    float var_11c_1 = zmm4_1
    float var_114_1 = zmm5_1
    char rax_16
    int512_t zmm1_1
    rax_16, zmm1_1 = sub_140db3460(&var_128, arg4 + 0x18)
    
    if (sub_140e19840(arg1, zmm1_1) != 0)
        if (rax_16 != 0 && *(arg1 + 0x569) == 0)
            int32_t rax_19 = (*(*(arg1 - 8) + 0x70))(arg1 - 8)
            
            if (rax_19 == 2)
                if (*(arg1 + 0x568) != 0)
                    goto label_141bc2574
                
                (*(*rdi + 0x30))(rdi)
            label_141bc2566:
                (*(*rdi + 0x40))(rdi, 2)
            label_141bc2574:
                var_1e8 = 1
                int64_t var_1e0_3 = 0
                int64_t var_1d8_3 = 0
                char var_1c8_3 = 0
                var_134_1 = (var_134_1 & 0xffffff01) | 1
                int64_t var_1c0_2
                __builtin_memset(&var_1c0_2, 0, 0x88)
                int32_t var_138_3 = 0x20702
                sub_140e54f20(&var_108, &var_1e8)
                sub_140597700(&var_1e8)
            else if (rax_19 == 3 && *(arg1 + 0x568) == 0)
                char rax_20 = (*(arg4 + 8)).b
                
                if ((rax_20 & 0xc) == 0 && (rax_20 & 3) == 0)
                    int64_t* rax_22 = (*(*rdi + 0x48))(rdi, arg1 - 8)
                    
                    if (rax_22 != 0 && (*(*rdi + 0x10))(rdi, rax_22) != 0
                            && (*(*rdi + 0x70))(rdi) s> 1)
                        (*(*rdi + 0x30))(rdi)
                        int64_t r9
                        r9.b = 1
                        (*(*rdi + 0x28))(rdi, *rax_22, 1, r9, var_1f8)
                        goto label_141bc2566
        
        int64_t* rax_35 = (*(*rdi + 0x48))(rdi, arg1 - 8)
        
        if (rax_35 != 0 && (*(*rdi + 0xa8))(rdi, *rax_35) != 0)
            var_1e8 = 1
            int64_t var_1e0_4 = 0
            int64_t var_1d8_4 = 0
            char var_1c8_4 = 0
            int32_t var_134_2 = (var_134_1 & 0xffffff01) | 1
            int64_t var_1c0_3
            __builtin_memset(&var_1c0_3, 0, 0x88)
            int32_t var_138_4 = 0x20702
            sub_140e54f20(&var_108, &var_1e8)
            sub_140597700(&var_1e8)
        
        if (*(arg1 + 0x568) != 0 && *(arg1 + 0x569) == 0 && *(arg1 + 0x4d0) == 0)
            (*(*rdi + 0x40))(rdi, 2)
        
        sub_140e51550(arg2, &var_108)
        sub_140597700(&var_108)
        goto label_141bc27cf
    
    sub_140597700(&var_108)
label_141bc2835:
    *arg2 = 0
    *(arg2 + 8) = 0
    *(arg2 + 0x10) = 0
    arg2[0x20] = 0
    __builtin_memset(&arg2[0x28], 0, 0x88)
    *(arg2 + 0xb4) &= 0xffffff00
    *(arg2 + 0xb0) = 0x20702
    
    if (rbx != 0)
        rbx[1].d -= 1
        
        if (rbx[1].d == 1)
            (**rbx)(rbx)
            int32_t temp7_1 = *(rbx + 0xc)
            *(rbx + 0xc) -= 1
            
            if (temp7_1 == 1)
                (*(*rbx + 8))(rbx, 1)
        
        if (rbx != 0)
            rbx[1].d -= 1
            
            if (rbx[1].d == 1)
                int64_t rdx_16 = *rbx
                (*rdx_16)(rbx, rdx_16)
                int32_t temp9_1 = *(rbx + 0xc)
                *(rbx + 0xc) -= 1
                
                if (temp9_1 == 1)
                    int64_t r8_1 = *rbx
                    (*(r8_1 + 8))(rbx, 1, r8_1)

__security_check_cookie(rax_1 ^ &var_218)
return arg2
