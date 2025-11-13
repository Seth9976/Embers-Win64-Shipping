// 函数: sub_140a005b0
// 地址: 0x140a005b0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void var_78
int64_t rax_1 = __security_cookie ^ &var_78
void*** rax_2 = j_sub_140a82f30(0x40)
void*** r14 = rax_2

if (rax_2 == 0)
    r14 = nullptr
else
    __builtin_memset(&rax_2[1], 0, 0x1c)
    *r14 = &data_142e4a850
    sub_140a96170(&r14[5])
    *r14 = &data_142e4a878
    int64_t* rcx_1 = arg2[1]
    int64_t var_58 = *arg2
    int64_t* var_50_1 = rcx_1
    
    if (rcx_1 != 0)
        rcx_1[1].d += 1
        rcx_1 = var_50_1
    
    if (&var_58 != &r14[5])
        int128_t zmm1_1 = var_58.o
        int128_t var_48_1 = zmm1_1
        var_58.o = *(r14 + 0x28)
        rcx_1 = var_50_1
        *(r14 + 0x28) = zmm1_1
    
    if (rcx_1 != 0)
        rcx_1[1].d -= 1
        
        if (rcx_1[1].d == 1)
            (**var_50_1)(var_50_1)
            int32_t rdi_1 = *(var_50_1 + 0xc)
            *(var_50_1 + 0xc) -= 1
            
            if (rdi_1 == 1)
                (*(*var_50_1 + 8))(var_50_1, zx.q(rdi_1))
    
    r14[7].d = arg2[2].d

void*** rax_8 = j_sub_140a82f30(0x18)
void*** rbx_2 = rax_8

if (rax_8 == 0)
    rbx_2 = nullptr
else
    rax_8[1].d = 1
    *(rax_8 + 0xc) = 1
    *rbx_2 = &data_142d42ea8
    rbx_2[2] = r14

*arg1 = r14
void**** rdi_2 = &r14[1]
arg1[1] = rbx_2

if (r14 == 0)
    rdi_2 = nullptr

if (rdi_2 != 0)
    void* rax_9
    
    if (*rdi_2 != 0)
        rax_9 = rdi_2[1]
    
    if (*rdi_2 == 0 || rax_9 == 0 || *(rax_9 + 8) s<= 0)
        if (rbx_2 != 0)
            rbx_2[1].d += 1
        
        *rdi_2 = r14
        int64_t* rcx_4 = rdi_2[1]
        
        if (rbx_2 != rcx_4)
            if (rbx_2 != 0)
                *(rbx_2 + 0xc) += 1
                rcx_4 = rdi_2[1]
            
            if (rcx_4 != 0)
                int32_t temp3_1 = *(rcx_4 + 0xc)
                *(rcx_4 + 0xc) -= 1
                
                if (temp3_1 == 1)
                    (*(*rcx_4 + 8))(rcx_4, 1)
            
            rdi_2[1] = rbx_2
        
        if (rbx_2 != 0)
            rbx_2[1].d -= 1
            
            if (rbx_2[1].d == 1)
                (**rbx_2)(rbx_2)
                int32_t temp2_1 = *(rbx_2 + 0xc)
                *(rbx_2 + 0xc) -= 1
                
                if (temp2_1 == 1)
                    (*rbx_2)[1](rbx_2, 1)

__security_check_cookie(rax_1 ^ &var_78)
return arg1
