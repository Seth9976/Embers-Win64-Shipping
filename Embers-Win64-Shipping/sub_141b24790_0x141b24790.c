// 函数: sub_141b24790
// 地址: 0x141b24790
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void var_148
int64_t rax_1 = __security_cookie ^ &var_148
int32_t r14 = 0
int64_t* result_1 = arg2
*arg2 = 0
arg2[1] = 0
int64_t* result = arg2
int32_t rax_2 = arg1[0x6c].d
void*** rbx = arg1
void*** var_a0
void*** rdi_1

if (rax_2 != 2)
    if (rax_2 == 3)
        void*** rax_6 = j_sub_140a82f30(zx.q(rax_2 + 0x25))
        
        if (rax_6 == 0)
            goto label_141b24857
        
        void* rax_7
        int512_t zmm2_2
        rax_7, zmm2_2 = sub_141b44d10()
        rdi_1 = sub_141af8440(rax_6, rax_7, zmm2_2)
        goto label_141b2485f
    
    if (rax_2 == 4)
        void*** rax_9 = j_sub_140a82f30(zx.q(rax_2 + 0x24))
        
        if (rax_9 == 0)
            goto label_141b24857
        
        void* rax_10
        int512_t zmm2_3
        rax_10, zmm2_3 = sub_141b44c90()
        rdi_1 = sub_141af8440(rax_9, rax_10, zmm2_3)
        goto label_141b2485f
else
    void*** rax_3 = j_sub_140a82f30(zx.q(rax_2 + 0x26))
    
    if (rax_3 == 0)
    label_141b24857:
        rdi_1 = nullptr
        goto label_141b2485f
    
    void* rax_4
    int512_t zmm2_1
    rax_4, zmm2_1 = sub_141b44c10()
    rdi_1 = sub_141af8440(rax_3, rax_4, zmm2_1)
label_141b2485f:
    void*** rax_12 = j_sub_140a82f30(0x18)
    void*** rbx_4 = rax_12
    
    if (rax_12 == 0)
        rbx_4 = nullptr
    else
        rax_12[1].d = 1
        *(rax_12 + 0xc) = 1
        *rbx_4 = &data_14305dc20
        rbx_4[2] = rdi_1
    
    var_a0 = rdi_1
    void*** var_98_1 = rbx_4
    
    if (result == &var_a0)
    label_141b248f3:
        
        if (rbx_4 != 0)
            rbx_4[1].d -= 1
            
            if (rbx_4[1].d == 1)
                (**rbx_4)(rbx_4)
                int32_t temp1_1 = *(rbx_4 + 0xc)
                *(rbx_4 + 0xc) -= 1
                
                if (temp1_1 == 1)
                    (*rbx_4)[1](rbx_4, 1)
    else
        *result = rdi_1
        int64_t* rdi_2 = result[1]
        var_a0 = nullptr
        
        if (rbx_4 == rdi_2)
            goto label_141b248f3
        
        void*** var_98_2 = nullptr
        result[1] = rbx_4
        
        if (rdi_2 != 0)
            rdi_2[1].d -= 1
            
            if (rdi_2[1].d == 1)
                (**rdi_2)(rdi_2)
                int32_t temp3_1 = *(rdi_2 + 0xc)
                *(rdi_2 + 0xc) -= 1
                
                if (temp3_1 == 1)
                    (*(*rdi_2 + 8))(rdi_2, 1)
            
            rbx_4 = var_98_2
            goto label_141b248f3
    
    rbx = arg1
int64_t* rcx_10 = *result

if (rcx_10 != 0)
    int64_t* rax_18 = (*(*rcx_10 + 0x18))(rcx_10)
    int32_t i = 0
    
    if (rbx[0x6c].d s> 0)
        int32_t* rax_19 = *arg3
        int32_t rax_20 = arg3[1].d
        void*** var_11c_1 = var_a0
        
        do
            void var_c0
            int64_t* rax_23 = sub_141a58900(arg1[0x1a], &var_c0, *(sub_141a788e0() + 0x18), i)
            int64_t* rbx_6 = rax_23[1]
            int64_t rsi_1 = *rax_23
            
            if (rbx_6 != 0)
                *(rbx_6 + 0xc) += 1
            
            int32_t rdi_3 = rax_23[3].d
            int64_t r8_1 = *(sub_141a788e0() + 0x18)
            
            if (rbx_6 != 0)
                *(rbx_6 + 0xc) += 1
            
            int64_t var_e8 = rsi_1
            int64_t* var_e0_1 = rbx_6
            
            if (rbx_6 != 0)
                *(rbx_6 + 0xc) += 1
            
            int64_t var_108
            sub_141a2efc0(&var_108, &var_e8, r8_1, rdi_3)
            
            if (rbx_6 != 0)
                int32_t temp4_1 = *(rbx_6 + 0xc)
                *(rbx_6 + 0xc) -= 1
                int32_t rax_25 = *(rbx_6 + 0xc)
                
                if (temp4_1 == 1)
                    (*(*rbx_6 + 8))(rbx_6, 1)
                    rax_25 = *(rbx_6 + 0xc)
                
                *(rbx_6 + 0xc) = rax_25 - 1
                
                if (rax_25 == 1)
                    (*(*rbx_6 + 8))(rbx_6, 1)
            
            int64_t* var_b8
            
            if (var_b8 != 0)
                int32_t temp5_1 = *(var_b8 + 0xc)
                *(var_b8 + 0xc) -= 1
                
                if (temp5_1 == 1)
                    (*(*var_b8 + 8))(var_b8, 1)
            
            int64_t rax_31 = (*(*rax_18 + 0x10))(rax_18, zx.q(i))
            int64_t r9_3 = var_108
            int64_t* var_100
            
            if (var_100 != 0)
                *(var_100 + 0xc) += 1
            
            char var_48 = var_48 | 3
            char var_78_1 = 0
            void** const var_88 = &data_14305da78
            int64_t var_70_1 = r9_3
            int64_t* var_68_1 = var_100
            int32_t var_f0
            int32_t var_58_1 = var_f0
            int64_t var_f8
            int64_t var_60_1 = var_f8
            int64_t var_50_1 = rax_31
            int64_t rax_33
            int64_t* rcx_19
            rax_33, rcx_19 = sub_141a4fed0(&var_108)
            int64_t** var_d8
            void* rsi_2
            int32_t* rdi_4
            
            if (rax_33 != 0)
                __FrameHandler3::TryBlockMap::TryBlockMap(&var_d8, rax_33 + 0x10, rax_33 + 0x38)
                rdi_4 = rax_19
                int64_t var_c8_1 = rax_33 + 0x20
                rsi_2 = &rdi_4[sx.q(rax_20)]
            
            void*** rdi_5
            
            if (rax_33 == 0 || rdi_4 == rsi_2)
            label_141b24ae0:
                rdi_5 = var_11c_1
                rcx_19.b = 0
            else
                while (true)
                    int32_t rbx_8 = *rdi_4
                    int32_t rax_36
                    rax_36, rcx_19 = sub_141a50d70(&var_d8, rbx_8)
                    
                    if (rax_36 != 0xffffffff)
                        void*** var_128
                        var_128.d = rbx_8
                        rcx_19.b = 1
                        var_128:4.d = *(*var_d8 + (sx.q(rax_36) << 2))
                        rdi_5 = var_128
                        var_11c_1 = rdi_5
                        break
                    
                    rdi_4 = &rdi_4[1]
                    
                    if (rdi_4 == rsi_2)
                        goto label_141b24ae0
            
            void** const rax_37 = &var_88
            
            if ((var_48 & 2) == 0)
                rax_37 = var_88
            
            if (&var_a0 != &rax_37[1])
                if (rax_37[2].b != 0)
                    rax_37[2].b = 0
                
                if (rcx_19.b != 0)
                    rax_37[1] = rdi_5
                    rax_37[2].b = 1
            
            sub_141a37230(&rax_18[2], &var_88)
            
            if ((var_48 & 1) != 0)
                void** const rcx_22 = &var_88
                
                if ((var_48 & 2) == 0)
                    rcx_22 = var_88
                
                var_48 &= 0xfe
                (**rcx_22)(rcx_22, 0)
                
                if ((var_48 & 2) == 0)
                    sub_140a74f90(var_88)
            
            if (var_100 != 0)
                int32_t temp7_1 = *(var_100 + 0xc)
                *(var_100 + 0xc) -= 1
                
                if (temp7_1 == 1)
                    (*(*var_100 + 8))(var_100, 1)
            
            i += 1
        while (i s< arg1[0x6c].d)
        
        result = result_1
    
    sub_141a693b0(&rax_18[2])
    int32_t var_120_2 = 0
    int32_t* rax_42 = sub_141a534f0(&rax_18[2], &result_1)
    
    if (rax_42[1].b != 0)
        r14 = *rax_42
    
    rax_18[1].d = r14

__security_check_cookie(rax_1 ^ &var_148)
return result
