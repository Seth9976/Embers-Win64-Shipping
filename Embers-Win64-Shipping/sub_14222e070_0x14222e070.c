// 函数: sub_14222e070
// 地址: 0x14222e070
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t* rcx = *(arg1 + 0x20)

if (rcx == 0)
label_14222e16b:
    rcx.b = 1
    int64_t rax_10 = sub_1417c9c70(rcx.b)
    
    if (rax_10 == 0)
        int64_t* rbx_5 = nullptr
        int64_t* var_d8 = nullptr
        int32_t var_d0_1 = 0
        
        if (arg2 != &var_d8 && arg2[1].d != 0)
            int64_t* rcx_36 = *arg2
            
            if (rcx_36 != 0)
                (*(*rcx_36 + 0x40))(rcx_36, &var_d8)
        
        *(arg1 + 0x268) = 0
        sub_14222c330(arg1)
        *(arg1 + 0x8a) |= 1
        
        if (var_d0_1 != 0)
            int64_t* rcx_38 = var_d8
            
            if (rcx_38 != 0 && (*(*rcx_38 + 0x28))(rcx_38) != 0)
                if (var_d0_1 != 0)
                    rbx_5 = var_d8
                
                (*(*rbx_5 + 0x50))(rbx_5, 0)
        
        sub_140745b20(&var_d8)
    else
        void* rax_11 = j_sub_140a82f30(0xf8)
        int64_t* rbx_3 = nullptr
        int64_t* r15_1
        
        if (rax_11 == 0)
            r15_1 = nullptr
        else
            r15_1 = sub_14225a0b0(rax_11, rax_10)
        
        int64_t* rax_13
        char r8_1
        rax_13, r8_1 = sub_142565030()
        void* rax_14 = rax_13[0x23]
        
        if (rax_14 == 0)
            int64_t rdx_3 = *rax_13
            r8_1 = (*(rdx_3 + 0x390))(rax_13, rdx_3)
            rax_14 = rax_13[0x23]
        
        sub_1422304e0(arg1, r15_1, sbb.b(r8_1, r8_1, *(rax_14 + 0xaf) != 0) & 4)
        
        if (*(r15_1 + 0x83) != 0 || r15_1[0x10].b != 0 || *(r15_1 + 0x81) != 0)
            int64_t* rcx_18 = nullptr
            int64_t* var_c8 = nullptr
            int32_t rax_20 = 0
            int32_t var_c0_1 = 0
            
            if (arg2 != &var_c8 && arg2[1].d != 0)
                int64_t* r8_2 = *arg2
                
                if (r8_2 != 0)
                    (*(*r8_2 + 0x40))(r8_2, &var_c8)
                    rax_20 = var_c0_1
                    rcx_18 = var_c8
            
            int64_t* var_98 = nullptr
            int32_t var_90_1 = 0
            int64_t* var_b8 = nullptr
            int32_t var_b0_1 = 0
            
            if (rax_20 != 0 && rcx_18 != 0)
                (*(*rcx_18 + 0x40))(rcx_18, &var_b8)
            
            void*** rax_23 = sub_1405978f0(0x38, &var_98)
            
            if (rax_23 != 0)
                int64_t var_78 = 0
                int32_t var_70_1 = 0
                
                if (var_b0_1 != 0)
                    int64_t* rcx_20 = var_b8
                    
                    if (rcx_20 != 0)
                        int64_t r8_3 = *rcx_20
                        (*(r8_3 + 0x40))(rcx_20, &var_78, r8_3)
                
                sub_142229db0(rax_23, arg1, sub_14222e9a0, r15_1, &var_78)
            
            sub_140745b20(&var_b8)
            sub_140745b20(&var_c8)
            int64_t* var_a8 = nullptr
            int32_t var_a0_1 = 0
            
            if (var_90_1 != 0)
                int64_t* rcx_24 = var_98
                
                if (rcx_24 != 0)
                    (*(*rcx_24 + 0x40))(rcx_24, &var_a8)
            
            void*** rax_25 = sub_140a84c80(0, 0x30, 0)
            void*** var_88 = rax_25
            void*** r14_4 = rax_25
            
            if (rax_25 != 0)
                int64_t var_68 = 0
                int32_t var_60_1 = 0
                
                if (var_a0_1 != 0)
                    int64_t* rcx_25 = var_a8
                    
                    if (rcx_25 != 0)
                        int64_t r8_4 = *rcx_25
                        (*(r8_4 + 0x40))(rcx_25, &var_68, r8_4)
                
                sub_142229cd0(r14_4, r15_1, sub_142265290, &var_68)
            
            sub_140745b20(&var_a8)
            sub_140745b20(&var_98)
            void var_58
            int64_t* rax_26 = sub_140958da0(&var_58, nullptr, 0xff)
            int64_t* r12_2 = *rax_26 + 0x10
            *r12_2 = 0
            r12_2[1].d = 0
            
            if (&var_88 != r12_2 && r14_4 != 0)
                void** r8_5 = *r14_4
                r8_5[8](r14_4, r12_2, r8_5)
            
            r12_2[2].d = 0xff
            void* rcx_31 = *rax_26
            int32_t r8_6 = rax_26[2].d
            int64_t* rdx_16 = rax_26[1]
            int64_t* rbx_4 = *(rcx_31 + 0x30)
            int64_t* arg_18 = rbx_4
            int32_t* r12_3 = &rbx_4[9]
            
            if (rbx_4 != 0)
                *r12_3 += 1
                r14_4 = var_88
                rbx_4 = arg_18
            
            sub_140978a40(rcx_31, rdx_16, r8_6, 1)
            
            if (rbx_4 != 0)
                int32_t rax_27 = *r12_3
                *r12_3 -= 1
                
                if (rax_27 == 1)
                    sub_140a2f6e0(arg_18)
                
                r14_4 = var_88
            
            if (r14_4 != 0)
                (*r14_4)[7](r14_4, 0)
                int64_t rax_29 = sub_140a84c80(r14_4, 0, 0)
                
                if (rax_29 != 0)
                    sub_140a74f90(rax_29)
            
            *(arg1 + 0x268) = r15_1
        else
            sub_14222aea0(r15_1)
            j_sub_140a74f90(r15_1)
            int64_t* var_e8 = nullptr
            int32_t var_e0_1 = 0
            
            if (arg2 != &var_e8 && arg2[1].d != 0)
                int64_t* rcx_13 = *arg2
                
                if (rcx_13 != 0)
                    (*(*rcx_13 + 0x40))(rcx_13, &var_e8)
            
            *(arg1 + 0x268) = 0
            sub_14222c330(arg1)
            *(arg1 + 0x8a) |= 1
            
            if (var_e0_1 != 0)
                int64_t* rcx_15 = var_e8
                
                if (rcx_15 != 0 && (*(*rcx_15 + 0x28))(rcx_15) != 0)
                    if (var_e0_1 != 0)
                        rbx_3 = var_e8
                    
                    (*(*rbx_3 + 0x50))(rbx_3, 0)
            
            sub_140745b20(&var_e8)
else
    void* rax_2
    rax_2, rcx = (*(*rcx + 0x150))(rcx)
    
    if (rax_2 == 0)
        goto label_14222e16b
    
    char rax_3
    rax_3, rcx = sub_14243ade0(rax_2)
    
    if (rax_3 == 0)
        goto label_14222e16b
    
    void arg_8
    int64_t rbx_1 = *sub_140b58170(&arg_8, "RuntimePhysXCooking", 1)
    j_sub_140b3db50()
    int64_t rax_5
    rax_5, rcx = sub_140b407e0(&data_143de7d78, rbx_1)
    
    if (rax_5 != 0)
        goto label_14222e16b
    
    int64_t* rbx_2 = nullptr
    int64_t* var_f8 = nullptr
    int32_t var_f0_1 = 0
    
    if (arg2 != &var_f8 && arg2[1].d != 0)
        int64_t* rcx_3 = *arg2
        
        if (rcx_3 != 0)
            (*(*rcx_3 + 0x40))(rcx_3, &var_f8)
    
    *(arg1 + 0x268) = 0
    sub_14222c330(arg1)
    *(arg1 + 0x8a) |= 1
    
    if (var_f0_1 != 0)
        int64_t* rcx_5 = var_f8
        
        if (rcx_5 != 0 && (*(*rcx_5 + 0x28))(rcx_5) != 0)
            if (var_f0_1 != 0)
                rbx_2 = var_f8
            
            (*(*rbx_2 + 0x50))(rbx_2, 0)
    
    sub_140745b20(&var_f8)

return sub_140745b20(arg2) __tailcall
