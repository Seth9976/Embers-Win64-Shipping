// 函数: sub_140f02b20
// 地址: 0x140f02b20
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int32_t* rsi = arg3
int64_t** r13 = arg2
void var_e0
int64_t* rax_1
int128_t zmm6
rax_1, zmm6 = sub_140efd250(*r13, &var_e0, arg3, arg5)
int64_t* rdi = rax_1[1]
int64_t* r15 = *rax_1
int64_t* var_f8 = r15
int64_t* var_f0 = rdi

if (rdi != 0)
    rdi[1].d += 1

int64_t* var_d8

if (var_d8 != 0)
    var_d8[1].d -= 1
    
    if (var_d8[1].d == 1)
        (**var_d8)(var_d8)
        int32_t temp1_1 = *(var_d8 + 0xc)
        *(var_d8 + 0xc) -= 1
        
        if (temp1_1 == 1)
            (*(*var_d8 + 8))(var_d8, 1)

if (*rsi != *arg4 || rsi[1] != arg4[1])
    int16_t rax_6 = rsi[3].w
    int128_t zmm0_1 = rsi[2]
    uint128_t zmm1_1 = *(rsi + 0x30)
    int64_t var_a8 = *(rsi + 0x10)
    int64_t var_a0_1 = *(rsi + 0x18)
    int32_t var_b0_1 = zmm0_1.d
    int64_t var_78_1 = *(rsi + 0x40)
    int64_t* rax_10 = *(rsi + 0x48)
    int128_t var_98_1 = *(rsi + 0x20)
    uint128_t var_88_1 = zmm1_1
    
    if (rax_10 != 0)
        rax_10[1].d += 1
    
    int64_t var_68_1 = *(rsi + 0x50)
    int32_t var_60_1 = rsi[0x16]
    char var_5c_1 = rsi[0x17].b
    int64_t* r14_1 = *r13
    int64_t var_b8 = *arg4
    int128_t var_58_1 = zmm6
    int64_t* rbx_2
    void* rsi_2
    
    if (r14_1[3].d == *(r14_1 + 0x44))
    label_140f02cf7:
        rsi_2 = nullptr
        rbx_2 = nullptr
    else
        int32_t rax_16 = sub_140f04ad0(&var_b8)
        void* rcx_5 = r14_1[0xa]
        void* r8 = &r14_1[9]
        
        if (rcx_5 != 0)
            r8 = rcx_5
        
        int32_t rbx_1 = *(r8 + (((sx.q(r14_1[0xb].d) - 1) & sx.q(rax_16)) << 2))
        
        if (rbx_1 == 0xffffffff)
            goto label_140f02cf7
        
        int32_t* r14_2 = r14_1[2]
        int32_t i = var_b8:4.d
        
        while (r14_2[sx.q(rbx_1) * 0x1e] != var_b8.d || r14_2[sx.q(rbx_1) * 0x1e + 1] != i
                || var_b0_1.d f!= r14_2[sx.q(rbx_1) * 0x1e + 2]
                || r14_2[sx.q(rbx_1) * 0x1e + 3].b != rax_6.b
                || *(&r14_2[sx.q(rbx_1) * 0x1e] + 0xd) != rax_6:1.b
                || sub_140f07570(&r14_2[4 + sx.q(rbx_1) * 0x1e], &var_a8) == 0)
            rbx_1 = r14_2[sx.q(rbx_1) * 0x1e + 0x1c]
            
            if (rbx_1 == 0xffffffff)
                goto label_140f02cf7
        
        if (rbx_1 == 0xffffffff)
            goto label_140f02cf7
        
        void* rbx_4 = &r14_2[sx.q(rbx_1) * 0x1e]
        
        if (rbx_4 == 0)
            goto label_140f02cf7
        
        rsi_2 = *(rbx_4 + 0x60)
        rbx_2 = *(rbx_4 + 0x68)
        
        if (rbx_2 != 0)
            rbx_2[1].d += 1
    
    char rax_23
    
    if (rsi_2 != 0)
        rax_23 = sub_140db30e0(rsi_2)
    
    int64_t* r14_3
    
    if (rsi_2 == 0 || rax_23 != 0)
        r14_3 = nullptr
        
        if (rbx_2 != 0)
            rbx_2[1].d -= 1
            
            if (rbx_2[1].d == 1)
                (**rbx_2)(rbx_2)
                int32_t temp4_1 = *(rbx_2 + 0xc)
                *(rbx_2 + 0xc) -= 1
                
                if (temp4_1 == 1)
                    (*(*rbx_2 + 8))(rbx_2, 1)
        
        goto label_140f02df5
    
    r14_3 = rbx_2
    
    if (rsi_2 == 0)
    label_140f02df5:
        int64_t* rax_29 = sub_140daa170(r15, &var_e0, *arg4, arg4[1])
        
        if (&var_f8 != rax_29)
            r15 = *rax_29
            int64_t* rbx_5 = rdi
            *rax_29 = 0
            int64_t* rcx_14 = rax_29[1]
            var_f8 = r15
            
            if (rcx_14 != rdi)
                rax_29[1] = 0
                rdi = rcx_14
                var_f0 = rcx_14
                
                if (rbx_5 != 0)
                    rbx_5[1].d -= 1
                    
                    if (rbx_5[1].d == 1)
                        (**rbx_5)(rbx_5)
                        int32_t temp9_1 = *(rbx_5 + 0xc)
                        *(rbx_5 + 0xc) -= 1
                        
                        if (temp9_1 == 1)
                            (*(*rbx_5 + 8))(rbx_5, 1)
        
        if (var_d8 != 0)
            var_d8[1].d -= 1
            
            if (var_d8[1].d == 1)
                (**var_d8)(var_d8)
                int32_t temp6_1 = *(var_d8 + 0xc)
                *(var_d8 + 0xc) -= 1
                
                if (temp6_1 == 1)
                    (*(*var_d8 + 8))(var_d8, 1)
        
        if (r15 == 0)
            int64_t* rax_42 = sub_140efd390(*arg2, &var_e0, &var_b8, arg5, arg6)
            int64_t* rbx_8 = rax_42[1]
            r15 = *rax_42
            
            if (rbx_8 != 0)
                rbx_8[1].d += 1
            
            int64_t* rsi_3 = rdi
            
            if (rbx_8 != rdi)
                rdi = rbx_8
                
                if (rsi_3 != 0)
                    rsi_3[1].d -= 1
                    
                    if (rsi_3[1].d == 1)
                        (**rsi_3)(rsi_3)
                        int32_t temp19_1 = *(rsi_3 + 0xc)
                        *(rsi_3 + 0xc) -= 1
                        
                        if (temp19_1 == 1)
                            (*(*rsi_3 + 8))(rsi_3, 1)
            else if (rbx_8 != 0)
                rbx_8[1].d -= 1
                
                if (rbx_8[1].d == 1)
                    (**rbx_8)(rbx_8)
                    int32_t temp18_1 = *(rbx_8 + 0xc)
                    *(rbx_8 + 0xc) -= 1
                    
                    if (temp18_1 == 1)
                        (*(*rbx_8 + 8))(rbx_8, 1)
            
            if (var_d8 != 0)
                var_d8[1].d -= 1
                
                if (var_d8[1].d == 1)
                    (**var_d8)(var_d8)
                    int32_t temp22_1 = *(var_d8 + 0xc)
                    *(var_d8 + 0xc) -= 1
                    
                    if (temp22_1 == 1)
                        (*(*var_d8 + 8))(var_d8, 1)
        else
            if (rdi != 0)
                rdi[1].d += 1
            
            var_f8.o = var_f8.o
            
            if (rdi != 0)
                rdi[1].d += 1
            
            sub_140edfec0(*arg2 + 0x10, &var_b8, &var_f8)
            
            if (var_f0 != 0)
                var_f0[1].d -= 1
                
                if (var_f0[1].d == 1)
                    (**var_f0)(var_f0)
                    int32_t temp20_1 = *(var_f0 + 0xc)
                    *(var_f0 + 0xc) -= 1
                    
                    if (temp20_1 == 1)
                        (*(*var_f0 + 8))(var_f0, 1)
            
            if (rdi != 0)
                int32_t rax_36 = rdi[1].d
                rdi[1].d = rax_36
                
                if (rax_36 == 0)
                    (**rdi)(rdi)
                    int32_t temp24_1 = *(rdi + 0xc)
                    *(rdi + 0xc) -= 1
                    
                    if (temp24_1 == 1)
                        (*(*rdi + 8))(rdi, 1)
                
                rdi[1].d -= 1
                
                if (rdi[1].d == 1)
                    (**rdi)(rdi)
                    int32_t temp25_1 = *(rdi + 0xc)
                    *(rdi + 0xc) -= 1
                    
                    if (temp25_1 == 1)
                        (*(*rdi + 8))(rdi, 1)
    else
        int64_t* var_c8_1 = rbx_2
        
        if (rbx_2 != 0)
            rbx_2[1].d += 1
        
        int64_t* rbx_3 = _mm_bsrli_si128(var_f8.o, 8).q
        var_f8.o = rsi_2.o
        
        if (rbx_3 != 0)
            rbx_3[1].d -= 1
            
            if (rbx_3[1].d == 1)
                (**rbx_3)(rbx_3)
                int32_t temp10_1 = *(rbx_3 + 0xc)
                *(rbx_3 + 0xc) -= 1
                
                if (temp10_1 == 1)
                    (*(*rbx_3 + 8))(rbx_3, 1)
        
        rdi = var_f0
        r15 = var_f8
    
    if (r14_3 != 0)
        r14_3[1].d -= 1
        
        if (r14_3[1].d == 1)
            (**r14_3)(r14_3)
            int32_t temp16_1 = *(r14_3 + 0xc)
            *(r14_3 + 0xc) -= 1
            
            if (temp16_1 == 1)
                (*(*r14_3 + 8))(r14_3, 1)
    
    if (rax_10 != 0)
        rax_10[1].d -= 1
        
        if (rax_10[1].d == 1)
            (**rax_10)(rax_10)
            int32_t temp21_1 = *(rax_10 + 0xc)
            *(rax_10 + 0xc) -= 1
            
            if (temp21_1 == 1)
                (*(*rax_10 + 8))(rax_10, 1)

*arg1 = r15
arg1[1] = rdi

if (rdi != 0)
    int32_t r8_4 = rdi[1].d
    rdi[1].d = r8_4
    
    if (r8_4 == 0)
        (**rdi)(rdi)
        int32_t temp2_1 = *(rdi + 0xc)
        *(rdi + 0xc) -= 1
        
        if (temp2_1 == 1)
            int64_t r8_6 = *rdi
            (*(r8_6 + 8))(rdi, 1, r8_6)

return arg1
