// 函数: sub_140fc1c90
// 地址: 0x140fc1c90
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void var_408
int64_t rax_1 = __security_cookie ^ &var_408
void* r13 = arg1
sub_140faa630(arg1)
int32_t i = 0
int64_t* var_3d0

if (*(r13 + 0x2c0) s> 0)
    do
        (*(*(r13 + 0x2a8) + 0x10))(r13 + 0x2a8, &var_3d0, zx.q(i))
        int64_t* rcx_1 = var_3d0
        
        if (rcx_1 != data_143e244b0)
            sub_140de9860(rcx_1, *(r13 + 0x2b0))
        
        int64_t* var_3c8
        
        if (var_3c8 != 0)
            var_3c8[1].d -= 1
            
            if (var_3c8[1].d == 1)
                (**var_3c8)(var_3c8)
                int32_t temp3_1 = *(var_3c8 + 0xc)
                *(var_3c8 + 0xc) -= 1
                
                if (temp3_1 == 1)
                    (*(*var_3c8 + 8))(var_3c8, 1)
        
        i += 1
    while (i s< *(r13 + 0x2c0))

int32_t i_4 = *(r13 + 0x2c0)

if (i_4 != 0)
    int64_t* rdi_2 = *(r13 + 0x2b8) + 8
    int32_t i_1
    
    do
        int64_t* rbx_2 = *rdi_2
        
        if (rbx_2 != 0)
            rbx_2[1].d -= 1
            
            if (rbx_2[1].d == 1)
                (**rbx_2)(rbx_2)
                int32_t temp4_1 = *(rbx_2 + 0xc)
                *(rbx_2 + 0xc) -= 1
                
                if (temp4_1 == 1)
                    (*(*rbx_2 + 8))(rbx_2, 1)
        
        rdi_2 = &rdi_2[2]
        i_1 = i_4
        i_4 -= 1
    while (i_1 != 1)

*(r13 + 0x2c0) = 0

if (*(r13 + 0x2c4) != 0)
    sub_1405a5410(r13 + 0x2b8, 0)

int64_t* result = sub_140fb2490(r13 + 0x310)
int32_t i_3 = 0
int64_t* rdi_4 = *result + 0x10
int64_t* var_360 = rdi_4

if (rdi_4[1].d s> 0)
    void* rax_7 = r13 + 0x338
    int64_t r14_1 = 0
    void* rax_8 = r13 + 0x360
    int64_t var_3c0_1 = 0
    void* rax_9 = r13 + 0x370
    int32_t i_2
    
    do
        int64_t* rbx_3 = *(r13 + 0x10)
        int64_t* rcx_8 = nullptr
        
        if (rbx_3 != 0)
            int32_t rax_10 = rbx_3[1].d
            
            if (rax_10 == 0)
                rbx_3 = nullptr
            else
                rbx_3[1].d = rax_10 + 1
                
                if (rbx_3 != 0)
                    rcx_8 = *(r13 + 8)
        
        var_3d0 = rcx_8
        
        if (rbx_3 != 0)
            int32_t rax_12 = rbx_3[1].d
            rbx_3[1].d = rax_12
            
            if (rax_12 == 0)
                (**rbx_3)(rbx_3)
                int32_t temp5_1 = *(rbx_3 + 0xc)
                *(rbx_3 + 0xc) -= 1
                
                if (temp5_1 == 1)
                    (*(*rbx_3 + 8))(rbx_3, 1)
        
        int64_t* rax_15 = var_3d0
        int64_t* var_2f0_1 = rax_15
        
        if (rbx_3 != 0)
            rbx_3[1].d += 1
        
        int64_t* rax_16 = *rdi_4
        char var_2e0_1 = 1
        int64_t var_2d8 = 0
        int32_t var_2d0_1 = 0
        int64_t* rsi = *(rax_16 + r14_1 + 8)
        int64_t r13_1 = *(rax_16 + r14_1)
        int64_t var_318_1 = r13_1
        
        if (rsi != 0)
            rsi[1].d += 1
            rax_16 = *rdi_4
        
        int64_t* rax_17 = *(rax_16 + r14_1)
        char var_308_1 = 1
        int64_t var_300 = 0
        int32_t var_2f8_1 = 0
        int64_t* rdi_5 = rax_17[1]
        int64_t r12_1 = *rax_17
        int64_t var_340_1 = r12_1
        
        if (rdi_5 != 0)
            rdi_5[1].d += 1
        
        char var_330_1 = 1
        int64_t var_328 = 0
        int32_t var_320_1 = 0
        void var_2a8
        int64_t* rax_18 = sub_140f99c70(&var_2a8)
        int64_t var_3b8 = r12_1
        
        if (rdi_5 != 0)
            rdi_5[1].d += 1
        
        if (&var_3b8 != &rax_18[0x34])
            var_3b8.o = *(rax_18 + 0x1a0)
            *(rax_18 + 0x1a0) = var_3b8.o
        
        if (rdi_5 != 0)
            rdi_5[1].d -= 1
            
            if (rdi_5[1].d == 1)
                (**rdi_5)(rdi_5)
                int32_t temp7_1 = *(rdi_5 + 0xc)
                *(rdi_5 + 0xc) -= 1
                
                if (temp7_1 == 1)
                    (*(*rdi_5 + 8))(rdi_5, 1)
        
        rax_18[0x36].b = 1
        sub_1407473e0(&rax_18[0x37], &var_328)
        int64_t var_3a8 = r13_1
        
        if (rsi != 0)
            rsi[1].d += 1
        
        if (&var_3a8 != &rax_18[0x39])
            var_3a8.o = *(rax_18 + 0x1c8)
            *(rax_18 + 0x1c8) = var_3a8.o
        
        if (rsi != 0)
            rsi[1].d -= 1
            
            if (rsi[1].d == 1)
                (**rsi)(rsi)
                int32_t temp9_1 = *(rsi + 0xc)
                *(rsi + 0xc) -= 1
                
                if (temp9_1 == 1)
                    (*(*rsi + 8))(rsi, 1)
        
        rax_18[0x3b].b = 1
        sub_1407473e0(&rax_18[0x3c], &var_300)
        sub_1407473e0(&rax_18[0x3e], rax_7)
        int64_t* var_398 = rax_15
        
        if (rbx_3 != 0)
            rbx_3[1].d += 1
        
        if (&var_398 != &rax_18[0x40])
            var_398.o = *(rax_18 + 0x200)
            *(rax_18 + 0x200) = var_398.o
        
        if (rbx_3 != 0)
            rbx_3[1].d -= 1
            
            if (rbx_3[1].d == 1)
                (**rbx_3)(rbx_3)
                int32_t temp11_1 = *(rbx_3 + 0xc)
                *(rbx_3 + 0xc) -= 1
                
                if (temp11_1 == 1)
                    (*(*rbx_3 + 8))(rbx_3, 1)
        
        rax_18[0x42].b = 1
        sub_1407473e0(&rax_18[0x43], &var_2d8)
        sub_1407473e0(&rax_18[0x45], rax_8)
        sub_1407473e0(&rax_18[0x47], rax_9)
        r13 = arg1
        rax_18[0x49].b = *(r13 + 0x380)
        *(rax_18 + 0x249) = *(r13 + 0x381)
        sub_140692f90(&rax_18[0x4a], r13 + 0x388)
        rax_18[0x4c].b = *(r13 + 0x398)
        *(rax_18 + 0x261) = *(r13 + 0x399)
        sub_140692f90(&rax_18[0x4d], r13 + 0x3a0)
        void*** rax_30 = sub_140f96eb0()
        void* var_358 = &rax_30[2]
        sub_140918950(&var_358, &rax_30[2])
        int64_t var_3e8_1 = 0x428
        void var_3d8
        void* var_348_1 = &var_3d8
        void* var_2b8
        void** rax_31 =
            sub_140f9e770(&var_358, &var_2b8, rax_18, sub_140e23ed0(&rax_30[2], "SThemeColorBlock"))
        int64_t* rcx_29 = *(r13 + 0x2b0)
        
        if (rcx_29 != 0 && *(r13 + 0x2c8) != 0)
            sub_140e19ef0(rcx_29, 8)
        
        int64_t rbx_5 = sx.q(*(r13 + 0x2c0))
        int32_t rax_32 = (rbx_5 + 1).d
        *(r13 + 0x2c0) = rax_32
        
        if (rax_32 s> *(r13 + 0x2c4))
            sub_1405a4f90(r13 + 0x2b8)
        
        void** rcx_33 = (rbx_5 << 4) + *(r13 + 0x2b8)
        *rcx_33 = *rax_31
        void* rax_34 = rax_31[1]
        rcx_33[1] = rax_34
        
        if (rax_34 != 0)
            *(rax_34 + 8) += 1
        
        void* rcx_34 = *(r13 + 0x2b0)
        
        if (rcx_34 != 0 && *rax_31 != data_143e244b0)
            int64_t* rbx_6 = *(rcx_34 + 0x10)
            int64_t rdx_15 = 0
            
            if (rbx_6 != 0)
                int32_t rax_36 = rbx_6[1].d
                
                if (rax_36 == 0)
                    rbx_6 = nullptr
                else
                    rbx_6[1].d = rax_36 + 1
                    
                    if (rbx_6 != 0)
                        rdx_15 = *(rcx_34 + 8)
            
            int64_t var_2c8 = rdx_15
            int64_t* var_2c0_1 = rbx_6
            
            if (rbx_6 != 0)
                rbx_6[1].d += 1
            
            sub_140de86e0(*rax_31, &var_2c8)
            
            if (rbx_6 != 0)
                rbx_6[1].d -= 1
                
                if (rbx_6[1].d == 1)
                    (**rbx_6)(rbx_6)
                    int32_t temp22_1 = *(rbx_6 + 0xc)
                    *(rbx_6 + 0xc) -= 1
                    
                    if (temp22_1 == 1)
                        (*(*rbx_6 + 8))(rbx_6, 1)
        
        int64_t* var_2b0
        
        if (var_2b0 != 0)
            var_2b0[1].d -= 1
            
            if (var_2b0[1].d == 1)
                (**var_2b0)(var_2b0)
                int32_t temp14_1 = *(var_2b0 + 0xc)
                *(var_2b0 + 0xc) -= 1
                
                if (temp14_1 == 1)
                    (*(*var_2b0 + 8))(var_2b0, 1)
        
        if (rax_30 != 0)
            rax_30[1].d -= 1
            
            if (rax_30[1].d == 1)
                (**rax_30)(rax_30)
                int32_t temp16_1 = *(rax_30 + 0xc)
                *(rax_30 + 0xc) -= 1
                
                if (temp16_1 == 1)
                    (*rax_30)[1](rax_30, 1)
        
        void var_40
        sub_140745b20(&var_40)
        void var_58
        sub_140745b20(&var_58)
        void var_70
        sub_140745b20(&var_70)
        void var_80
        sub_140745b20(&var_80)
        void var_90
        sub_140745b20(&var_90)
        int64_t* var_a0
        
        if (var_a0 != 0)
            var_a0[1].d -= 1
            
            if (var_a0[1].d == 1)
                (**var_a0)(var_a0)
                int32_t temp18_1 = *(var_a0 + 0xc)
                *(var_a0 + 0xc) -= 1
                
                if (temp18_1 == 1)
                    (*(*var_a0 + 8))(var_a0, 1)
        
        void var_b8
        sub_140745b20(&var_b8)
        void var_c8
        sub_140745b20(&var_c8)
        int64_t* var_d8
        
        if (var_d8 != 0)
            var_d8[1].d -= 1
            
            if (var_d8[1].d == 1)
                (**var_d8)(var_d8)
                int32_t temp21_1 = *(var_d8 + 0xc)
                *(var_d8 + 0xc) -= 1
                
                if (temp21_1 == 1)
                    (*(*var_d8 + 8))(var_d8, 1)
        
        void var_f0
        sub_140745b20(&var_f0)
        int64_t* var_100
        
        if (var_100 != 0)
            var_100[1].d -= 1
            
            if (var_100[1].d == 1)
                (**var_100)(var_100)
                int32_t temp24_1 = *(var_100 + 0xc)
                *(var_100 + 0xc) -= 1
                
                if (temp24_1 == 1)
                    (*(*var_100 + 8))(var_100, 1)
        
        sub_140ddea30(&var_2a8)
        sub_140745b20(&var_328)
        
        if (rdi_5 != 0)
            rdi_5[1].d -= 1
            
            if (rdi_5[1].d == 1)
                (**rdi_5)(rdi_5)
                int32_t temp26_1 = *(rdi_5 + 0xc)
                *(rdi_5 + 0xc) -= 1
                
                if (temp26_1 == 1)
                    (*(*rdi_5 + 8))(rdi_5, 1)
        
        sub_140745b20(&var_300)
        
        if (rsi != 0)
            rsi[1].d -= 1
            
            if (rsi[1].d == 1)
                (**rsi)(rsi)
                int32_t temp28_1 = *(rsi + 0xc)
                *(rsi + 0xc) -= 1
                
                if (temp28_1 == 1)
                    (*(*rsi + 8))(rsi, 1)
        
        sub_140745b20(&var_2d8)
        
        if (rbx_3 != 0)
            rbx_3[1].d -= 1
            
            if (rbx_3[1].d == 1)
                (**rbx_3)(rbx_3)
                int32_t temp29_1 = *(rbx_3 + 0xc)
                *(rbx_3 + 0xc) -= 1
                
                if (temp29_1 == 1)
                    (*(*rbx_3 + 8))(rbx_3, 1)
        
        result = sub_140f9a690(&var_3d0)
        i_2 = i_3 + 1
        rdi_4 = var_360
        r14_1 = var_3c0_1 + 0x10
        i_3 = i_2
        var_3c0_1 = r14_1
    while (i_2 s< rdi_4[1].d)

__security_check_cookie(rax_1 ^ &var_408)
return result
