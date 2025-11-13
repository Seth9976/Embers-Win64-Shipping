// 函数: sub_140ec1650
// 地址: 0x140ec1650
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int32_t arg_18 = 0
int32_t rsi = 0
void* var_a8
sub_140ebaa70(arg1, &var_a8, *arg3)
void* rbx = var_a8
int64_t* var_98
int64_t* var_90
int64_t* var_88
int64_t* var_80
int64_t* rbx_1

if (rbx == 0)
label_140ec1875:
    sub_140eba380(arg1, &var_98, arg3)
    int64_t* rdi_4 = var_98
    int128_t var_78
    int64_t* rbx_2
    bool cond:0_1
    
    if (rdi_4 == 0)
        int64_t* rdi_6 = arg1[2]
        int64_t rbx_3 = 0
        
        if (rdi_6 != 0)
            int32_t rax_23 = rdi_6[1].d
            
            if (rax_23 != 0)
                rdi_6[1].d = rax_23 + 1
                rax_23.b = 1
            
            if (rax_23.b == 0)
                rdi_6 = nullptr
            
            if (rdi_6 != 0)
                int32_t rax_24 = rdi_6[1].d
                rbx_3 = arg1[1]
                rdi_6[1].d = rax_24
                
                if (rax_24 == 0)
                    (**rdi_6)(rdi_6)
                    int32_t temp8_1 = *(rdi_6 + 0xc)
                    *(rdi_6 + 0xc) -= 1
                    
                    if (temp8_1 == 1)
                        (*(*rdi_6 + 8))(rdi_6, 1)
        
        sub_140ebd660()
        
        if (data_143e2a070 == rbx_3)
        labelid_95:
            rbx_3.b = 0
        else
            int64_t* r14_2 = arg1[0xd]
            rbx_3 = *arg3
            arg_18.q = rbx_3
            
            if (r14_2[1].d == *(r14_2 + 0x34))
            label_140ec19e6:
                rbx_3.b = 0
            else
                int32_t rax_29 = sub_140b5ead0(rbx_3.d) + arg4
                void* r8_4 = &r14_2[7]
                void* rcx_24 = *(r8_4 + 8)
                
                if (rcx_24 != 0)
                    r8_4 = rcx_24
                
                int32_t rax_31 = *(r8_4 + (((sx.q(r14_2[9].d) - 1) & sx.q(rax_29)) << 2))
                
                if (rax_31 == 0xffffffff)
                label_140ec19e6_1:
                    rbx_3.b = 0
                else
                    int64_t rdx_9 = *r14_2
                    
                    while (true)
                        int64_t rcx_26 = sx.q(rax_31) << 5
                        
                        if (*(rcx_26 + rdx_9) == rbx_3)
                            break
                        
                        rax_31 = *(rcx_26 + rdx_9 + 0x18)
                        
                        if (rax_31 == 0xffffffff)
                            goto label_140ec19e6_2
                    
                    if (rax_31 == 0xffffffff)
                    label_140ec19e6_2:
                        rbx_3.b = 0
                    else
                        rbx_3.b = 1
        
        int32_t rsi_3 = (rsi | 4) & 0xfffffffb
        
        if (rdi_6 != 0)
            rdi_6[1].d -= 1
            
            if (rdi_6[1].d == 1)
                (**rdi_6)(rdi_6)
                int32_t temp7_1 = *(rdi_6 + 0xc)
                *(rdi_6 + 0xc) -= 1
                
                if (temp7_1 == 1)
                    (*(*rdi_6 + 8))(rdi_6, 1)
        
        if (rbx_3.b == 0)
            void var_58
            void var_48
            int64_t* rax_35 = sub_140ea2b00(*sub_140ec5860(&var_48), &var_58, arg3)
            var_88 = *rax_35
            int64_t* rcx_33 = rax_35[1]
            
            if (rcx_33 != 0)
                rcx_33[1].d += 1
            
            int64_t arg_20 = data_1439b38f0
            sub_140eba2b0(&data_1439b3900, &arg_18, arg3)
            int64_t rax_36 = sx.q(arg_18)
            void* const rax_38
            
            if (rax_36.d == 0xffffffff)
                rax_38 = nullptr
            else
                rax_38 = rax_36 * 0x1c + data_1439b3900
            
            int64_t* rcx_34 = rax_38 + 0xc
            
            if (rax_38 == 0)
                rcx_34 = nullptr
            
            if (rcx_34 != 0)
                arg_20 = *rcx_34
            
            void*** var_68
            sub_140edc170(*sub_140ec5200(&var_68, &arg_20), &var_78, &var_88)
            int64_t* var_60
            
            if (var_60 != 0)
                var_60[1].d -= 1
                
                if (var_60[1].d == 1)
                    (**var_60)(var_60)
                    int32_t temp21_1 = *(var_60 + 0xc)
                    *(var_60 + 0xc) -= 1
                    
                    if (temp21_1 == 1)
                        (*(*var_60 + 8))(var_60, 1)
            
            int64_t* var_50
            
            if (var_50 != 0)
                var_50[1].d -= 1
                
                if (var_50[1].d == 1)
                    (**var_50)(var_50)
                    int32_t temp23_1 = *(var_50 + 0xc)
                    *(var_50 + 0xc) -= 1
                    
                    if (temp23_1 == 1)
                        (*(*var_50 + 8))(var_50, 1)
            
            int64_t* var_40
            
            if (var_40 != 0)
                var_40[1].d -= 1
                
                if (var_40[1].d == 1)
                    (**var_40)(var_40)
                    int32_t temp25_1 = *(var_40 + 0xc)
                    *(var_40 + 0xc) -= 1
                    
                    if (temp25_1 == 1)
                        (*(*var_40 + 8))(var_40, 1)
            
            int64_t* rax_46
            int128_t zmm1_1
            rax_46, zmm1_1 = sub_140ebf4f0(arg1[0x1b], &var_48)
            sub_140ed6260(arg1, &var_88, &var_78, rax_46, zmm1_1, 0, 0)
            
            if (var_40 != 0)
                var_40[1].d -= 1
                
                if (var_40[1].d == 1)
                    (**var_40)(var_40)
                    int32_t temp26_1 = *(var_40 + 0xc)
                    *(var_40 + 0xc) -= 1
                    
                    if (temp26_1 == 1)
                        (*(*var_40 + 8))(var_40, 1)
            
            int64_t* rbx_8 = var_88
            void* rax_50
            
            if (rbx_8 != 0)
                rsi_3 |= 8
                rax_50 = (*(*rbx_8 + 0x260))(rbx_8, &var_48)
            
            if (rbx_8 == 0 || *(rax_50 + 8) s<= 0)
                rdi_6.b = 0
            else
                rdi_6.b = 1
            
            if ((rsi_3.b & 8) != 0)
                sub_140596d80(&var_48)
            
            if (rdi_6.b == 0)
                *arg2 = nullptr
                arg2[1] = 0
            else
                void** rcx_50 = *(*(*rbx_8 + 0x260))(rbx_8, &var_48)
                int64_t* rbx_9 = rcx_50[1]
                void* rdi_7 = *rcx_50
                
                if (rbx_9 != 0)
                    rbx_9[1].d += 1
                
                sub_140596d80(&var_48)
                
                if (rbx_9 != 0)
                    rbx_9[1].d += 1
                
                *arg2 = rdi_7
                arg2[1] = rbx_9
                
                if (rbx_9 != 0)
                    int32_t rax_53 = rbx_9[1].d
                    rbx_9[1].d = rax_53
                    
                    if (rax_53 == 0)
                        (**rbx_9)(rbx_9)
                        int32_t temp30_1 = *(rbx_9 + 0xc)
                        *(rbx_9 + 0xc) -= 1
                        
                        if (temp30_1 == 1)
                            (*(*rbx_9 + 8))(rbx_9, 1)
                    
                    if (rbx_9 != 0)
                        rbx_9[1].d -= 1
                        
                        if (rbx_9[1].d == 1)
                            (**rbx_9)(rbx_9)
                            int32_t temp32_1 = *(rbx_9 + 0xc)
                            *(rbx_9 + 0xc) -= 1
                            
                            if (temp32_1 == 1)
                                (*(*rbx_9 + 8))(rbx_9, 1)
            
            if (rcx_33 != 0)
                rcx_33[1].d -= 1
                
                if (rcx_33[1].d == 1)
                    (**rcx_33)(rcx_33)
                    int32_t temp29_1 = *(rcx_33 + 0xc)
                    *(rcx_33 + 0xc) -= 1
                    
                    if (temp29_1 == 1)
                        (*(*rcx_33 + 8))(rcx_33, 1)
            
            rbx_2 = var_78:8.q
            
            if (rbx_2 != 0)
                rbx_2[1].d -= 1
                cond:0_1 = rbx_2[1].d != 1
                goto label_140ec1ccd
        else
            sub_140ebd660()
            sub_140ec1650(data_143e2a070, arg2, arg3)
    else
        var_78 = zx.o(0)
        sub_140edb490(arg1, &var_88, arg3, &var_78, 0)
        int64_t* rsi_1 = var_88
        rbx_2 = var_80
        
        if (rsi_1 != 0)
            var_78 = var_88.o
            
            if (rbx_2 != 0)
                rbx_2[1].d += 1
            
            double zmm0_2 = sub_140ed1540(rdi_4, &var_78, 0xffffffff)
            int64_t* rdi_5 = var_78:8.q
            
            if (rdi_5 != 0)
                rdi_5[1].d -= 1
                
                if (rdi_5[1].d == 1)
                    (**rdi_5)(rdi_5)
                    int32_t temp6_1 = *(rdi_5 + 0xc)
                    *(rdi_5 + 0xc) -= 1
                    
                    if (temp6_1 == 1)
                        (*(*rdi_5 + 8))(rdi_5, 1)
            
            sub_140f13910(rsi_1, zmm0_2)
        
        *arg2 = rsi_1
        arg2[1] = rbx_2
        
        if (rbx_2 != 0)
            int32_t rax_22 = rbx_2[1].d
            cond:0_1 = rax_22 != 0
            rbx_2[1].d = rax_22
        label_140ec1ccd:
            
            if (not(cond:0_1))
                (**rbx_2)(rbx_2)
                int32_t temp5_1 = *(rbx_2 + 0xc)
                *(rbx_2 + 0xc) -= 1
                
                if (temp5_1 == 1)
                    (*(*rbx_2 + 8))(rbx_2, 1)
    rbx_1 = var_90
    
    if (rbx_1 != 0)
    label_140ec1cf4:
        rbx_1[1].d -= 1
        
        if (rbx_1[1].d == 1)
            (**rbx_1)(rbx_1)
            int32_t temp4_1 = *(rbx_1 + 0xc)
            *(rbx_1 + 0xc) -= 1
            
            if (temp4_1 == 1)
                (*(*rbx_1 + 8))(rbx_1, 1)
else
    int64_t* rax_4
    int64_t* r14_1
    
    if (*(rbx + 0xc0) == 0)
    label_140ec16e3:
        int64_t* rcx_2 = *(rbx + 0xf0)
        var_98 = nullptr
        var_90 = rcx_2
        
        if (rcx_2 != 0)
            int32_t rax_5 = rcx_2[1].d
            
            if (rax_5 == 0)
                var_90 = nullptr
                rcx_2 = nullptr
            else
                rcx_2[1].d = rax_5 + 1
        
        r14_1 = nullptr
        
        if (rcx_2 != 0)
            r14_1 = *(rbx + 0xe8)
            var_98 = r14_1
        
        rax_4 = &var_98
        rsi = 2
    else
        int64_t* rcx = *(rbx + 0xb8)
        
        if (rcx == 0)
            goto label_140ec16e3
        
        if ((*(*rcx + 0x28))(rcx) == 0)
            goto label_140ec16e3
        
        int64_t* rcx_1
        
        if (*(rbx + 0xc0) == 0)
            rcx_1 = nullptr
        else
            rcx_1 = *(rbx + 0xb8)
        
        (*(*rcx_1 + 0x48))(rcx_1, &var_88, arg3)
        r14_1 = var_88
        rax_4 = &var_88
        rsi = 1
    
    rbx_1 = rax_4[1]
    rax_4[1] = 0
    *rax_4 = 0
    
    if ((rsi.b & 2) != 0)
        rsi &= 0xfffffffd
        
        if (var_90 != 0)
            var_90[1].d -= 1
            
            if (var_90[1].d == 1)
                (**var_90)(var_90)
                int32_t temp12_1 = *(var_90 + 0xc)
                *(var_90 + 0xc) -= 1
                
                if (temp12_1 == 1)
                    (*(*var_90 + 8))(var_90, 1)
    
    if ((rsi.b & 1) != 0)
        rsi &= 0xfffffffe
        
        if (var_80 != 0)
            var_80[1].d -= 1
            
            if (var_80[1].d == 1)
                (**var_80)(var_80)
                int32_t temp14_1 = *(var_80 + 0xc)
                *(var_80 + 0xc) -= 1
                
                if (temp14_1 == 1)
                    (*(*var_80 + 8))(var_80, 1)
    
    if (r14_1 == 0)
        if (rbx_1 != 0)
            rbx_1[1].d -= 1
            
            if (rbx_1[1].d == 1)
                (**rbx_1)(rbx_1)
                int32_t temp15_1 = *(rbx_1 + 0xc)
                *(rbx_1 + 0xc) -= 1
                
                if (temp15_1 == 1)
                    (*(*rbx_1 + 8))(rbx_1, 1)
        
        goto label_140ec1875
    
    if (sub_140f07210(r14_1) == 0)
        var_88 = r14_1
        
        if (rbx_1 != 0)
            rbx_1[1].d += 1
        
        (**arg1)(arg1, &var_88)
        
        if (rbx_1 != 0)
            rbx_1[1].d -= 1
            
            if (rbx_1[1].d == 1)
                (**rbx_1)(rbx_1)
                int32_t temp18_1 = *(rbx_1 + 0xc)
                *(rbx_1 + 0xc) -= 1
                
                if (temp18_1 == 1)
                    (*(*rbx_1 + 8))(rbx_1, 1)
    
    if (rbx_1 != 0)
        rbx_1[1].d += 1
    
    *arg2 = r14_1
    arg2[1] = rbx_1
    
    if (rbx_1 != 0)
        int32_t rax_15 = rbx_1[1].d
        rbx_1[1].d = rax_15
        
        if (rax_15 == 0)
            (**rbx_1)(rbx_1)
            int32_t temp17_1 = *(rbx_1 + 0xc)
            *(rbx_1 + 0xc) -= 1
            
            if (temp17_1 == 1)
                (*(*rbx_1 + 8))(rbx_1, 1)
        
        goto label_140ec1cf4
int64_t* var_a0

if (var_a0 != 0)
    var_a0[1].d -= 1
    
    if (var_a0[1].d == 1)
        (**var_a0)(var_a0)
        int32_t temp9_1 = *(var_a0 + 0xc)
        *(var_a0 + 0xc) -= 1
        
        if (temp9_1 == 1)
            (*(*var_a0 + 8))(var_a0, 1)

return arg2
