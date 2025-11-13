// 函数: sub_140efca70
// 地址: 0x140efca70
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void var_168
int64_t rax_1 = __security_cookie ^ &var_168
int64_t* rdx = *arg1
int64_t* rsi = rdx[1]
int32_t r15 = arg5
int32_t var_110 = r15

if (rsi != 0)
    int32_t rax_2 = rsi[1].d
    
    if (rax_2 == 0)
        rsi = nullptr
    else
        rsi[1].d = rax_2 + 1

void* r12_1

if (rsi != 0)
    r12_1 = *rdx

int32_t rbx_4

if (rsi == 0 || r12_1 == 0)
    rbx_4 = -1
else
    int64_t* var_e8
    sub_140efd250(*arg1, &var_e8, arg2, arg4)
    char var_130_1 = 1
    void* var_68
    sub_140da7340(var_e8, &var_68, r12_1, *arg3, *(arg3 + 4), r15, 0)
    int64_t var_f8
    int64_t* var_f0
    int64_t* var_e0
    int64_t var_c8
    char var_58
    
    if (var_58 == 0)
        int16_t var_bc_1 = arg2[3].w
        int64_t var_b8_1 = *(arg2 + 0x10)
        int64_t var_b0_1 = *(arg2 + 0x18)
        int32_t var_c0_1 = arg2[2].d
        int64_t var_88_1 = *(arg2 + 0x40)
        int64_t* rax_9 = *(arg2 + 0x48)
        int128_t var_a8_1 = *(arg2 + 0x20)
        int128_t var_98_1 = *(arg2 + 0x30)
        
        if (rax_9 != 0)
            rax_9[1].d += 1
        
        int64_t* rcx_2 = *arg1
        int64_t var_78_1 = *(arg2 + 0x50)
        int32_t var_70_1 = arg2[0x16]
        char var_6c_1 = arg2[0x17].b
        var_c8 = *arg3
        int64_t* rax_14 = sub_140efd250(rcx_2, &var_f8, &var_c8, arg4)
        int64_t* rdx_4 = var_e8
        var_e8 = *rax_14
        *rax_14 = rdx_4
        int64_t* rdx_5 = var_e0
        var_e0 = rax_14[1]
        rax_14[1] = rdx_5
        
        if (var_f0 != 0)
            var_f0[1].d -= 1
            
            if (var_f0[1].d == 1)
                (**var_f0)(var_f0)
                int32_t temp4_1 = *(var_f0 + 0xc)
                *(var_f0 + 0xc) -= 1
                
                if (temp4_1 == 1)
                    (*(*var_f0 + 8))(var_f0, 1)
        
        int64_t* rax_17 = sub_140da74c0(var_e8, &var_f8, r12_1, r15, 0)
        
        if (rax_17 != &var_68)
            char var_58_1 = 0
            char var_58_2 = 1
            var_68.o = *rax_17
        
        if (rax_9 != 0)
            rax_9[1].d -= 1
            
            if (rax_9[1].d == 1)
                (**rax_9)(rax_9)
                int32_t temp7_1 = *(rax_9 + 0xc)
                *(rax_9 + 0xc) -= 1
                
                if (temp7_1 == 1)
                    (*(*rax_9 + 8))(rax_9, 1)
    
    void* rcx_10 = var_68
    int32_t var_5c
    
    if (rcx_10 == 0 || *(rcx_10 + 0x22) u<= 1)
        rbx_4 = var_5c
    else
        uint32_t rdi_3 = zx.d(*(rcx_10 + 0x21))
        void* r14_1 = &arg4[sx.q(*(rcx_10 + 0x14))]
        int16_t* var_120 = nullptr
        int32_t var_118_1 = 0
        
        if (r14_1 != 0 && *r14_1 != 0 && rdi_3 != 0)
            sub_1405947f0(&var_120, rdi_3 + 1)
            int32_t rax_22 = var_118_1 + 1 + rdi_3
            var_118_1 = rax_22
            
            if (rax_22 s> 0)
                sub_140594770(&var_120)
            
            UnDecorator::getReferenceType(var_120, r14_1, rdi_3 * 2)
            var_120[sx.q(var_118_1) - 1] = 0
        
        void*** var_108
        sub_140a6e480(&var_108)
        void*** rcx_16 = var_108
        (*rcx_16)[2](rcx_16, &var_120)
        int16_t var_bc_2 = arg2[3].w
        int64_t var_b8_2 = *(arg2 + 0x10)
        int64_t var_b0_2 = *(arg2 + 0x18)
        int32_t var_c0_2 = arg2[2].d
        int64_t var_88_2 = *(arg2 + 0x40)
        int64_t* rax_29 = *(arg2 + 0x48)
        int128_t var_a8_2 = *(arg2 + 0x20)
        int128_t var_98_2 = *(arg2 + 0x30)
        
        if (rax_29 != 0)
            rax_29[1].d += 1
        
        int64_t var_78_2 = *(arg2 + 0x50)
        int32_t var_70_2 = arg2[0x16]
        char var_6c_2 = arg2[0x17].b
        int32_t rax_34
        
        if (var_118_1 == 0)
            rax_34 = 0
        else
            rax_34 = var_118_1 - 1
        
        void*** rcx_17 = var_108
        int32_t var_124_1 = rax_34
        int32_t var_128 = 0
        int32_t var_60
        int32_t rdi_4 = var_60
        var_c8 = var_128.q
        void** rax_37 = *rcx_17
        int32_t var_148_1
        int32_t var_140_1
        int64_t* var_d8
        int64_t* var_d0
        int32_t rbx_5
        
        if (*(var_68 + 0x23) != 0)
            int32_t rax_47 = rax_37[8](rcx_17)
            void*** rcx_26 = var_108
            int32_t r14_3 = rax_47
            void** rdx_15 = *rcx_26
            int32_t rax_48 = rdx_15[9](rcx_26, rdx_15)
            int32_t rbx_6 = rax_48
            
            if (rax_48 == 0xffffffff)
            label_140efcf6f:
                rbx_4 = *(var_68 + 0x14)
            else
                while (true)
                    void* rax_49 = var_68
                    int16_t* rdx_16 = &data_142d40450
                    var_128 = rbx_6
                    
                    if (var_118_1 != 0)
                        rdx_16 = var_120
                    
                    var_140_1.b = *(rax_49 + 0x23)
                    var_148_1.q = rdx_16
                    int32_t var_124_3 = r14_3
                    sub_140f02b20(&var_d8, arg1, &var_c8, &var_128, var_148_1, var_140_1.b)
                    int64_t* r15_2 = var_d8
                    sub_140da74c0(r15_2, &var_f8, r12_1, r15, rdi_4)
                    
                    if (var_f8 != 0)
                        rbx_5 = var_f0:4.d
                        
                        if (r14_3 != 0xffffffff)
                            rbx_5 = r14_3
                        
                        break
                    
                    r14_3 = rbx_6
                    rdi_4 += sub_140a478a0(r15_2)
                    
                    if (var_d0 != 0)
                        var_d0[1].d -= 1
                        
                        if (var_d0[1].d == 1)
                            (**var_d0)(var_d0)
                            int32_t temp14_1 = *(var_d0 + 0xc)
                            *(var_d0 + 0xc) -= 1
                            
                            if (temp14_1 == 1)
                                (*(*var_d0 + 8))(var_d0, 1)
                    
                    void*** rcx_33 = var_108
                    int32_t rax_54 = (*rcx_33)[9](rcx_33)
                    r15 = var_110
                    rbx_6 = rax_54
                    
                    if (rax_54 == 0xffffffff)
                        goto label_140efcf6f
                
            label_140efcfee:
                rbx_4 = rbx_5 + *(var_68 + 0x14)
                
                if (var_d0 != 0)
                    var_d0[1].d -= 1
                    
                    if (var_d0[1].d == 1)
                        (**var_d0)(var_d0)
                        int32_t temp17_1 = *(var_d0 + 0xc)
                        *(var_d0 + 0xc) -= 1
                        
                        if (temp17_1 == 1)
                            (*(*var_d0 + 8))(var_d0, 1)
        else
            int32_t rax_38 = rax_37[7](rcx_17)
            void*** rcx_18 = var_108
            int32_t r15_1 = rax_38
            void** rdx_11 = *rcx_18
            int32_t rax_39 = rdx_11[0xa](rcx_18, rdx_11)
            int32_t rbx_1 = rax_39
            
            if (rax_39 != 0xffffffff)
                while (true)
                    void* rax_40 = var_68
                    int16_t* const rdx_12 = &data_142d40450
                    var_128 = r15_1
                    
                    if (var_118_1 != 0)
                        rdx_12 = var_120
                    
                    var_140_1.b = *(rax_40 + 0x23)
                    var_148_1.q = rdx_12
                    int32_t var_124_2 = rbx_1
                    sub_140f02b20(&var_d8, arg1, &var_c8, &var_128, var_148_1, var_140_1.b)
                    int64_t* r14_2 = var_d8
                    sub_140da74c0(r14_2, &var_f8, r12_1, var_110, rdi_4)
                    
                    if (var_f8 != 0)
                        rbx_5 = var_f0:4.d
                        break
                    
                    r15_1 = rbx_1
                    rdi_4 += sub_140a478a0(r14_2)
                    
                    if (var_d0 != 0)
                        var_d0[1].d -= 1
                        
                        if (var_d0[1].d == 1)
                            (**var_d0)(var_d0)
                            int32_t temp16_1 = *(var_d0 + 0xc)
                            *(var_d0 + 0xc) -= 1
                            
                            if (temp16_1 == 1)
                                (*(*var_d0 + 8))(var_d0, 1)
                    
                    void*** rcx_25 = var_108
                    int32_t rax_45 = (*rcx_25)[0xa](rcx_25)
                    rbx_1 = rax_45
                    
                    if (rax_45 == 0xffffffff)
                        goto label_140efce74
                
                goto label_140efcfee
            
        label_140efce74:
            void* rax_46 = var_68
            rbx_4 = zx.d(*(rax_46 + 0x21)) + *(rax_46 + 0x14)
        
        if (rax_29 != 0)
            rax_29[1].d -= 1
            
            if (rax_29[1].d == 1)
                (**rax_29)(rax_29)
                int32_t temp10_1 = *(rax_29 + 0xc)
                *(rax_29 + 0xc) -= 1
                
                if (temp10_1 == 1)
                    (*(*rax_29 + 8))(rax_29, 1)
        
        int64_t* var_100
        
        if (var_100 != 0)
            var_100[1].d -= 1
            
            if (var_100[1].d == 1)
                (**var_100)(var_100)
                int32_t temp11_1 = *(var_100 + 0xc)
                *(var_100 + 0xc) -= 1
                
                if (temp11_1 == 1)
                    (*(*var_100 + 8))(var_100, 1)
        
        int16_t* rcx_38 = var_120
        
        if (rcx_38 != 0)
            sub_140a74f90(rcx_38)
    char var_58_3 = 0
    
    if (var_e0 != 0)
        var_e0[1].d -= 1
        
        if (var_e0[1].d == 1)
            (**var_e0)(var_e0)
            int32_t temp5_1 = *(var_e0 + 0xc)
            *(var_e0 + 0xc) -= 1
            
            if (temp5_1 == 1)
                (*(*var_e0 + 8))(var_e0, 1)

if (rsi != 0)
    rsi[1].d -= 1
    
    if (rsi[1].d == 1)
        (**rsi)(rsi)
        int32_t temp1_1 = *(rsi + 0xc)
        *(rsi + 0xc) -= 1
        
        if (temp1_1 == 1)
            int64_t r8_11 = *rsi
            (*(r8_11 + 8))(rsi, 1, r8_11)

__security_check_cookie(rax_1 ^ &var_168)
return zx.q(rbx_4)
