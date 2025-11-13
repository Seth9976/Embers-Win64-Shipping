// 函数: sub_140eccbf0
// 地址: 0x140eccbf0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void var_208
int64_t rax_1 = __security_cookie ^ &var_208
float* var_1e0 = arg3
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

void* r12 = &rdi[-0x9d]

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
char var_1e8 = rax_6.b

if (r14 != 0)
    r14[1].d -= 1
    
    if (r14[1].d == 1)
        (**r14)(r14)
        int32_t temp2_1 = *(r14 + 0xc)
        *(r14 + 0xc) -= 1
        
        if (temp2_1 == 1)
            (*(*r14 + 8))(r14, 1)
        
        rax_6 = zx.q(var_1e8)

if (rax_6.b == 0)
    int64_t* r14_3 = *(arg4 + 0x48)
    int64_t rax_46 = *(arg4 + 0x38)
    
    if (r14_3 != 0)
        r14_3[1].d += 1
    
    char rax_47
    
    if (rax_46 == data_143e1e020)
        rax_47 = sub_140f7b490(r12)
    
    if (rax_46 != data_143e1e020 || rax_47 != 0)
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
        goto label_140ecd27a
    
    if ((*(*(arg1 - 8) + 0x70))(arg1 - 8) - 1 u> 2)
        goto label_140ecd27a
    
    float** rax_54 = (*(*rdi + 0x48))(rdi, arg1 - 8)
    
    if (rax_54 == 0)
        goto label_140ecd27a
    
    int32_t var_1d8
    
    if ((*(*rdi + 0x10))(rdi, rax_54) == 0)
        (*(*rdi + 0x30))(rdi)
        var_1e0 = *rax_54
        void* rax_59 = rax_54[1]
        var_1d8.q = rax_59
        
        if (rax_59 != 0)
            *(rax_59 + 8) += 1
        
        int64_t r9_1
        r9_1.b = 1
        (*(*rdi + 0x28))(rdi, &var_1e0, 1, r9_1, var_1e8)
        (*(*rdi + 0x40))(rdi, 2)
    
    var_1e0 = *rax_54
    void* rax_63 = rax_54[1]
    var_1d8.q = rax_63
    
    if (rax_63 != 0)
        *(rax_63 + 8) += 1
    
    (*(*rdi + 0xa0))(rdi, &var_1e0, arg4)
    sub_140e194c0(arg2)
label_140ecd214:
    
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
    char var_1c8 = 0
    int64_t var_1c0_1 = 0
    int64_t var_1b8_1 = 0
    char var_1a8_1 = 0
    int64_t var_1a0
    __builtin_memset(&var_1a0, 0, 0x88)
    int32_t var_114
    int32_t var_114_1 = (var_114 & 0xffffff01) | 1
    int32_t var_118_1 = 0x20702
    void var_108
    sub_140596b00(&var_108, &var_1c8)
    sub_140597700(&var_1c8)
    
    if (*(arg1 + 0x568) != 0)
        var_1c8 = 1
        int64_t var_1c0_2 = 0
        int64_t var_1b8_2 = 0
        char var_1a8_2 = 0
        var_114_1 = (var_114_1 & 0xffffff01) | 1
        int64_t var_1a0_1
        __builtin_memset(&var_1a0_1, 0, 0x88)
        int32_t var_118_2 = 0x20702
        sub_140e54f20(&var_108, &var_1c8)
        sub_140597700(&var_1c8)
    
    float* rax_15 = var_1e0
    float zmm4_1 = *rax_15
    float zmm5_1 = rax_15[1]
    float var_1d8_1 = zmm4_1 * rax_15[7]
    float var_1d0_1 = zmm5_1 * rax_15[9]
    var_1e0.d = rax_15[0xb]
    var_1e0:4.d = rax_15[0xc]
    float var_1d4_1 = zmm4_1 * rax_15[8]
    float var_1cc_1 = zmm5_1 * rax_15[0xa]
    char rax_16
    int512_t zmm1_1
    rax_16, zmm1_1 = sub_140db3460(&var_1e0, arg4 + 0x18)
    
    if (sub_140e19840(arg1, zmm1_1) != 0)
        if (rax_16 != 0 && *(arg1 + 0x569) == 0)
            int32_t rax_19 = (*(*(arg1 - 8) + 0x70))(arg1 - 8)
            
            if (rax_19 == 2)
                if (*(arg1 + 0x568) != 0)
                    goto label_140eccf70
                
                (*(*rdi + 0x30))(rdi)
            label_140eccf62:
                (*(*rdi + 0x40))(rdi, 2)
            label_140eccf70:
                var_1c8 = 1
                int64_t var_1c0_3 = 0
                int64_t var_1b8_3 = 0
                char var_1a8_3 = 0
                var_114_1 = (var_114_1 & 0xffffff01) | 1
                int64_t var_1a0_2
                __builtin_memset(&var_1a0_2, 0, 0x88)
                int32_t var_118_3 = 0x20702
                sub_140e54f20(&var_108, &var_1c8)
                sub_140597700(&var_1c8)
            else if (rax_19 == 3 && *(arg1 + 0x568) == 0)
                char rax_20 = (*(arg4 + 8)).b
                
                if ((rax_20 & 0xc) == 0 && (rax_20 & 3) == 0)
                    float** rax_22 = (*(*rdi + 0x48))(rdi, arg1 - 8)
                    
                    if (rax_22 != 0 && (*(*rdi + 0x10))(rdi, rax_22) != 0
                            && (*(*rdi + 0x70))(rdi) s> 1)
                        (*(*rdi + 0x30))(rdi)
                        var_1e0 = *rax_22
                        void* rax_29 = rax_22[1]
                        var_1d8_1.q = rax_29
                        
                        if (rax_29 != 0)
                            *(rax_29 + 8) += 1
                        
                        int64_t r9
                        r9.b = 1
                        (*(*rdi + 0x28))(rdi, &var_1e0, 1, r9, var_1e8)
                        goto label_140eccf62
        
        float** rax_37 = (*(*rdi + 0x48))(rdi, arg1 - 8)
        
        if (rax_37 != 0)
            var_1e0 = *rax_37
            void* rax_39 = rax_37[1]
            var_1d8_1.q = rax_39
            
            if (rax_39 != 0)
                *(rax_39 + 8) += 1
            
            if ((*(*rdi + 0xa8))(rdi, &var_1e0) != 0)
                var_1c8 = 1
                int64_t var_1c0_4 = 0
                int64_t var_1b8_4 = 0
                char var_1a8_4 = 0
                int32_t var_114_2 = (var_114_1 & 0xffffff01) | 1
                int64_t var_1a0_3
                __builtin_memset(&var_1a0_3, 0, 0x88)
                int32_t var_118_4 = 0x20702
                sub_140e54f20(&var_108, &var_1c8)
                sub_140597700(&var_1c8)
        
        if (*(arg1 + 0x568) != 0 && *(arg1 + 0x569) == 0 && *(arg1 + 0x4d0) == 0)
            (*(*rdi + 0x40))(rdi, 2)
        
        sub_140e51550(arg2, &var_108)
        sub_140597700(&var_108)
        goto label_140ecd214
    
    sub_140597700(&var_108)
label_140ecd27a:
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
                int64_t rdx_15 = *rbx
                (*rdx_15)(rbx, rdx_15)
                int32_t temp9_1 = *(rbx + 0xc)
                *(rbx + 0xc) -= 1
                
                if (temp9_1 == 1)
                    int64_t r8_1 = *rbx
                    (*(r8_1 + 8))(rbx, 1, r8_1)

__security_check_cookie(rax_1 ^ &var_208)
return arg2
