// 函数: sub_141d996d0
// 地址: 0x141d996d0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t* rcx = *arg1
char result = sub_141da1e80(rcx, &rcx[0x74], arg2, 0)

if (result != 0)
    int64_t* rcx_1 = *arg1
    int32_t r12_1 = arg2[0x11].d
    int64_t rbx_1 = *rcx_1
    int32_t r15_1 = arg2[0xd].d
    uint64_t var_58
    int64_t* rax
    int512_t zmm1_1
    rax, zmm1_1 = sub_141d9ef80(rcx_1, &var_58, &rcx_1[0x74])
    int64_t* var_a8
    (*(rbx_1 + 0x1e0))(*arg1, &var_a8, rax)
    uint64_t rcx_3 = var_58
    
    if (rcx_3 != 0)
        zmm1_1 = sub_140a74f90(rcx_3)
    
    int64_t* r14_1 = var_a8
    int64_t* var_a0
    
    if (r14_1 == 0)
    label_141d99be3:
        int64_t* rcx_49 = *arg1
        result = sub_141da1e80(rcx_49, &rcx_49[0x74], arg2, 0)
        
        if (result != 0)
            *arg2 = *(arg1 + 0xc)
            sub_14081d8c0(&arg2[7], &arg1[4])
            int64_t* rcx_51 = *arg1
            result = sub_141da40c0(rcx_51, &rcx_51[0x74], arg2)
    else
        int64_t rbx_2 = *r14_1
        (*(rbx_2 + 0x178))(r14_1, (*(rbx_2 + 0x28))(r14_1))
        int64_t* rcx_6 = *arg1
        uint64_t var_98 = 0
        int64_t var_90_1 = 0
        
        if ((*(*rcx_6 + 0x198))(rcx_6) == 0)
            if (&var_98 != &arg1[2])
                uint64_t rcx_8 = var_98
                
                if (rcx_8 != 0)
                    zmm1_1 = sub_140a74f90(rcx_8)
                
                uint64_t rax_5 = arg1[2]
                arg1[2] = 0
                var_98 = rax_5
                var_90_1.d = arg1[3].d
                var_90_1:4.d = *(arg1 + 0x1c)
                arg1[3] = 0
            
            goto label_141d997fc
        
        int64_t* rcx_7 = *arg1
        result = (*(*rcx_7 + 0x1b0))(rcx_7, &arg1[2], &var_98)
        
        if (result != 0)
        label_141d997fc:
            int64_t* rcx_9 = *arg1
            uint64_t var_68 = 0
            int32_t var_60_1 = 0
            uint64_t var_88
            int32_t var_80
            int128_t var_48
            int32_t rcx_13
            
            if ((*(*rcx_9 + 0x1b8))(rcx_9) == 0)
                uint64_t rcx_14 = var_68
                
                if (rcx_14 != 0)
                    zmm1_1 = sub_140a74f90(rcx_14)
                
                rcx_13 = var_90_1.d
                var_68 = var_98
                int32_t var_5c_1 = var_90_1:4.d
                int64_t var_90_2 = 0
                var_98 = 0
                var_60_1 = rcx_13
            else
                int64_t* rcx_10 = *arg1
                var_88 = arg1[4]
                int32_t var_80_1 = arg1[5].d
                int128_t zmm0_1 = var_88.o
                var_88 = var_98
                var_80 = var_90_1.d
                int64_t rax_14 = *rcx_10
                var_58.o = zmm0_1
                zmm0_1 = var_88.o
                var_48 = zmm0_1
                result = (*(rax_14 + 0x1c8))(zmm0_1, &var_48, &var_68, &var_58)
                
                if (result == 0)
                    uint64_t rcx_11 = var_68
                    *(arg2 + 0x31) = 0
                    
                    if (rcx_11 != 0)
                        result = sub_140a74f90(rcx_11)
                    
                    goto label_141d99870
                
                rcx_13 = var_60_1
            
            if (rcx_13 s> 0)
                int64_t* r9_2 = var_a8
                int32_t arg_8 = 2
                int64_t* rcx_15 = r9_2[1]
                int32_t* rdx_6 = *rcx_15
                
                if (&rdx_6[1] u> rcx_15[1])
                    int32_t* rdx_7 = &arg_8
                    
                    if ((*(r9_2 + 0x29) & 0x20) != 0)
                        sub_140b54070(r9_2, rdx_7, zmm1_1)
                    else
                        (*(*r9_2 + 0x150))(r9_2, rdx_7, 4)
                else
                    arg_8 = *rdx_6
                    int64_t* rax_19 = r9_2[1]
                    *rax_19 += 4
                
                int64_t* rcx_17 = var_a8
                int64_t rax_22 = (*(*rcx_17 + 0x20))(rcx_17)
                int64_t* r9_3 = var_a8
                int32_t arg_18 = 0
                int64_t* rdx_8 = r9_3[1]
                int32_t* r8_5 = *rdx_8
                
                if (&r8_5[1] u> rdx_8[1])
                    int32_t* rdx_9 = &arg_18
                    
                    if ((*(r9_3 + 0x29) & 0x20) != 0)
                        sub_140b54070(r9_3, rdx_9, zmm1_1)
                    else
                        (*(*r9_3 + 0x150))(r9_3, rdx_9, 4)
                else
                    arg_18 = *r8_5
                    int64_t* rcx_20 = r9_3[1]
                    *rcx_20 += 4
                
                int64_t* rcx_22 = var_a8
                int32_t rax_25 = (*(*rcx_22 + 0x20))(rcx_22)
                int512_t zmm1_2 = sub_140a2e390(&var_58, u"checkpoint%ld", zx.q(r15_1))
                int512_t zmm1_3 = sub_140a1d9d0(var_a8, &var_58, zmm1_2)
                var_88 = 0
                var_80.q = 0
                sub_1405947f0(&var_88, 0xb)
                int32_t var_80_2 = var_80 + 0xb
                int32_t var_7c
                
                if (var_80 + 0xb s> var_7c)
                    sub_140594770(&var_88)
                
                UnDecorator::getReferenceType(var_88, u"checkpoint", 0x16)
                sub_140a1d9d0(var_a8, &var_88, zmm1_3)
                int512_t zmm1_4 = sub_140a2e390(&var_48, u"%ld", zx.q(r12_1))
                int512_t zmm1_5 = sub_140a1d9d0(var_a8, &var_48, zmm1_4)
                int64_t* r9_4 = var_a8
                int32_t arg_20 = arg1[1].d
                int64_t* rcx_31 = r9_4[1]
                int32_t* rdx_14 = *rcx_31
                
                if (&rdx_14[1] u> rcx_31[1])
                    int32_t* rdx_15 = &arg_20
                    
                    if ((*(r9_4 + 0x29) & 0x20) != 0)
                        sub_140b54070(r9_4, rdx_15, zmm1_5)
                    else
                        (*(*r9_4 + 0x150))(r9_4, rdx_15, 4)
                else
                    arg_20 = *rdx_14
                    int64_t* rax_30 = r9_4[1]
                    *rax_30 += 4
                
                int64_t* r9_5 = var_a8
                int32_t var_78 = arg1[1].d
                int64_t* rcx_33 = r9_5[1]
                int32_t* rdx_16 = *rcx_33
                
                if (&rdx_16[1] u> rcx_33[1])
                    int32_t* rdx_17 = &var_78
                    
                    if ((*(r9_5 + 0x29) & 0x20) != 0)
                        sub_140b54070(r9_5, rdx_17, zmm1_5)
                    else
                        (*(*r9_5 + 0x150))(r9_5, rdx_17, 4)
                else
                    var_78 = *rdx_16
                    int64_t* rax_35 = r9_5[1]
                    *rax_35 += 4
                
                int64_t* r9_6 = var_a8
                int32_t var_74 = var_60_1
                int64_t* rcx_35 = r9_6[1]
                int32_t* rdx_18 = *rcx_35
                
                if (&rdx_18[1] u> rcx_35[1])
                    int32_t* rdx_19 = &var_74
                    
                    if ((*(r9_6 + 0x29) & 0x20) != 0)
                        sub_140b54070(r9_6, rdx_19, zmm1_5)
                    else
                        (*(*r9_6 + 0x150))(r9_6, rdx_19, 4)
                else
                    var_74 = *rdx_18
                    int64_t* rax_40 = r9_6[1]
                    *rax_40 += 4
                
                int64_t* rcx_37 = var_a8
                (*(*rcx_37 + 0x150))(rcx_37, var_68, sx.q(var_60_1))
                int64_t* rcx_38 = var_a8
                int32_t rax_44 = (*(*rcx_38 + 0x20))(rcx_38)
                int64_t* rcx_39 = var_a8
                int32_t var_70 = rax_44 - rax_25
                (*(*rcx_39 + 0x178))(rcx_39, rax_22)
                int64_t* r9_7 = var_a8
                int64_t* rcx_40 = r9_7[1]
                int32_t* rdx_22 = *rcx_40
                
                if (&rdx_22[1] u> rcx_40[1])
                    int32_t* rdx_23 = &var_70
                    
                    if ((*(r9_7 + 0x29) & 0x20) != 0)
                        sub_140b54070(r9_7, rdx_23, zmm1_5)
                    else
                        (*(*r9_7 + 0x150))(r9_7, rdx_23, 4)
                else
                    var_70 = *rdx_22
                    int64_t* rax_49 = r9_7[1]
                    *rax_49 += 4
                
                int64_t rcx_42 = var_48.q
                
                if (rcx_42 != 0)
                    sub_140a74f90(rcx_42)
                
                uint64_t rcx_43 = var_88
                
                if (rcx_43 != 0)
                    sub_140a74f90(rcx_43)
                
                uint64_t rcx_44 = var_58
                
                if (rcx_44 != 0)
                    sub_140a74f90(rcx_44)
            
            int64_t* rbx_5 = var_a0
            var_a8 = nullptr
            
            if (rbx_5 != 0)
                var_a0 = nullptr
                rbx_5[1].d -= 1
                
                if (rbx_5[1].d == 1)
                    (**rbx_5)(rbx_5)
                    int32_t temp3_1 = *(rbx_5 + 0xc)
                    *(rbx_5 + 0xc) -= 1
                    
                    if (temp3_1 == 1)
                        (*(*rbx_5 + 8))(rbx_5, 1)
            
            uint64_t rcx_47 = var_68
            
            if (rcx_47 != 0)
                sub_140a74f90(rcx_47)
            
            uint64_t rcx_48 = var_98
            
            if (rcx_48 != 0)
                sub_140a74f90(rcx_48)
            
            goto label_141d99be3
        
        *(arg2 + 0x31) = 0
    label_141d99870:
        uint64_t rcx_12 = var_98
        
        if (rcx_12 != 0)
            result = sub_140a74f90(rcx_12)
    
    if (var_a0 != 0)
        var_a0[1].d -= 1
        
        if (var_a0[1].d == 1)
            result = (**var_a0)(var_a0)
            int32_t temp1_1 = *(var_a0 + 0xc)
            *(var_a0 + 0xc) -= 1
            
            if (temp1_1 == 1)
                return (*(*var_a0 + 8))(var_a0, 1)

return result
