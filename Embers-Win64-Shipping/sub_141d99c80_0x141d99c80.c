// 函数: sub_141d99c80
// 地址: 0x141d99c80
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t* rcx = *arg1
int64_t rbx = *rcx
int64_t var_48
int64_t* rax
int512_t zmm1
rax, zmm1 = sub_141d9ef80(rcx, &var_48, &rcx[0x74])
int64_t* var_78
(*(rbx + 0x1e0))(*arg1, &var_78, rax)
int64_t rcx_2 = var_48

if (rcx_2 != 0)
    zmm1 = sub_140a74f90(rcx_2)

int64_t* rsi = var_78
int64_t* var_70
char result
int64_t* rcx_42

if (rsi == 0)
    rcx_42 = *arg1
    result = sub_141da1e80(rcx_42, &rcx_42[0x74], arg2, 0)
else
    int64_t rbx_1 = *rsi
    (*(rbx_1 + 0x178))(rsi, (*(rbx_1 + 0x28))(rsi))
    int64_t* rcx_5 = *arg1
    int32_t var_60 = arg1[3].d
    int64_t var_88 = 0
    int64_t var_80_1 = 0
    
    if ((*(*rcx_5 + 0x198))(rcx_5) == 0)
        if (&var_88 != &arg1[2])
            int64_t rcx_7 = var_88
            
            if (rcx_7 != 0)
                zmm1 = sub_140a74f90(rcx_7)
            
            int64_t rax_6 = arg1[2]
            arg1[2] = 0
            var_88 = rax_6
            var_80_1.d = arg1[3].d
            var_80_1:4.d = *(arg1 + 0x1c)
            arg1[3] = 0
        
        goto label_141d99d76
    
    int64_t* rcx_6 = *arg1
    result = (*(*rcx_6 + 0x1b0))(rcx_6, &arg1[2], &var_88)
    
    if (result != 0)
    label_141d99d76:
        int64_t* rcx_8 = *arg1
        int64_t var_58 = 0
        int32_t var_50_1 = 0
        int32_t rcx_12
        
        if ((*(*rcx_8 + 0x1b8))(rcx_8) == 0)
            int64_t rcx_13 = var_58
            
            if (rcx_13 != 0)
                zmm1 = sub_140a74f90(rcx_13)
            
            rcx_12 = var_80_1.d
            var_58 = var_88
            var_50_1 = var_80_1:4.d
            int64_t var_80_2 = 0
            var_88 = 0
            var_50_1 = rcx_12
        else
            int64_t* rcx_9 = *arg1
            var_48 = arg1[4]
            int32_t var_40_1 = arg1[5].d
            int128_t zmm0_1 = var_48.o
            var_48 = var_88
            int32_t var_40_2 = var_80_1.d
            int64_t rax_15 = *rcx_9
            int128_t var_38 = zmm0_1
            zmm0_1 = var_48.o
            var_48.o = zmm0_1
            result = (*(rax_15 + 0x1c8))(zmm0_1, &var_48, &var_58, &var_38)
            
            if (result == 0)
                int64_t rcx_10 = var_58
                *(arg2 + 0x31) = 0
                
                if (rcx_10 != 0)
                    result = sub_140a74f90(rcx_10)
                
                goto label_141d99dea
            
            rcx_12 = var_50_1
        
        if (rcx_12 s> 0)
            int64_t* r9_2 = var_78
            int32_t arg_8 = 1
            int64_t* rcx_14 = r9_2[1]
            int32_t* rdx_5 = *rcx_14
            
            if (&rdx_5[1] u> rcx_14[1])
                int32_t* rdx_6 = &arg_8
                
                if ((*(r9_2 + 0x29) & 0x20) != 0)
                    sub_140b54070(r9_2, rdx_6, zmm1)
                else
                    (*(*r9_2 + 0x150))(r9_2, rdx_6, 4)
            else
                arg_8 = *rdx_5
                int64_t* rax_20 = r9_2[1]
                *rax_20 += 4
            
            int64_t* rcx_16 = var_78
            int64_t rax_23 = (*(*rcx_16 + 0x20))(rcx_16)
            int64_t* r9_3 = var_78
            int32_t arg_18 = 0
            int64_t* rdx_7 = r9_3[1]
            int32_t* r8_4 = *rdx_7
            
            if (&r8_4[1] u> rdx_7[1])
                int32_t* rdx_8 = &arg_18
                
                if ((*(r9_3 + 0x29) & 0x20) != 0)
                    sub_140b54070(r9_3, rdx_8, zmm1)
                else
                    (*(*r9_3 + 0x150))(r9_3, rdx_8, 4)
            else
                arg_18 = *r8_4
                int64_t* rcx_19 = r9_3[1]
                *rcx_19 += 4
            
            int64_t* rcx_21 = var_78
            int32_t rax_26 = (*(*rcx_21 + 0x20))(rcx_21)
            int64_t* r9_4 = var_78
            int32_t arg_20 = arg1[1].d
            int64_t* rdx_9 = r9_4[1]
            int32_t* r8_5 = *rdx_9
            
            if (&r8_5[1] u> rdx_9[1])
                int32_t* rdx_10 = &arg_20
                
                if ((*(r9_4 + 0x29) & 0x20) != 0)
                    sub_140b54070(r9_4, rdx_10, zmm1)
                else
                    (*(*r9_4 + 0x150))(r9_4, rdx_10, 4)
            else
                arg_20 = *r8_5
                int64_t* rcx_25 = r9_4[1]
                *rcx_25 += 4
            
            int64_t* r9_5 = var_78
            int32_t var_68 = *(arg1 + 0xc)
            int64_t* rcx_27 = r9_5[1]
            int32_t* rdx_11 = *rcx_27
            
            if (&rdx_11[1] u> rcx_27[1])
                int32_t* rdx_12 = &var_68
                
                if ((*(r9_5 + 0x29) & 0x20) != 0)
                    sub_140b54070(r9_5, rdx_12, zmm1)
                else
                    (*(*r9_5 + 0x150))(r9_5, rdx_12, 4)
            else
                var_68 = *rdx_11
                int64_t* rax_31 = r9_5[1]
                *rax_31 += 4
            
            int64_t* r9_6 = var_78
            int32_t var_64 = var_50_1
            int64_t* rcx_29 = r9_6[1]
            int32_t* rdx_13 = *rcx_29
            
            if (&rdx_13[1] u> rcx_29[1])
                int32_t* rdx_14 = &var_64
                
                if ((*(r9_6 + 0x29) & 0x20) != 0)
                    sub_140b54070(r9_6, rdx_14, zmm1)
                else
                    (*(*r9_6 + 0x150))(r9_6, rdx_14, 4)
            else
                var_64 = *rdx_13
                int64_t* rax_36 = r9_6[1]
                *rax_36 += 4
            
            int64_t* r9_7 = var_78
            int64_t* rcx_31 = r9_7[1]
            int32_t* rdx_15 = *rcx_31
            
            if (&rdx_15[1] u> rcx_31[1])
                int32_t* rdx_16 = &var_60
                
                if ((*(r9_7 + 0x29) & 0x20) != 0)
                    sub_140b54070(r9_7, rdx_16, zmm1)
                else
                    (*(*r9_7 + 0x150))(r9_7, rdx_16, 4)
            else
                var_60 = *rdx_15
                int64_t* rax_40 = r9_7[1]
                *rax_40 += 4
            
            int64_t* rcx_33 = var_78
            (*(*rcx_33 + 0x150))(rcx_33, var_58, sx.q(var_50_1))
            int64_t* rcx_34 = var_78
            int32_t rax_44 = (*(*rcx_34 + 0x20))(rcx_34)
            int64_t* rcx_35 = var_78
            int32_t var_5c = rax_44 - rax_26
            (*(*rcx_35 + 0x178))(rcx_35, rax_23)
            int64_t* r9_8 = var_78
            int64_t* rcx_36 = r9_8[1]
            int32_t* rdx_19 = *rcx_36
            
            if (&rdx_19[1] u> rcx_36[1])
                int32_t* rdx_20 = &var_5c
                
                if ((*(r9_8 + 0x29) & 0x20) != 0)
                    sub_140b54070(r9_8, rdx_20, zmm1)
                else
                    (*(*r9_8 + 0x150))(r9_8, rdx_20, 4)
            else
                var_5c = *rdx_19
                int64_t* rax_49 = r9_8[1]
                *rax_49 += 4
        
        int64_t* rbx_4 = var_70
        var_78 = nullptr
        
        if (rbx_4 != 0)
            var_70 = nullptr
            rbx_4[1].d -= 1
            
            if (rbx_4[1].d == 1)
                (**rbx_4)(rbx_4)
                int32_t temp3_1 = *(rbx_4 + 0xc)
                *(rbx_4 + 0xc) -= 1
                
                if (temp3_1 == 1)
                    (*(*rbx_4 + 8))(rbx_4, 1)
        
        int64_t rcx_40 = var_58
        
        if (rcx_40 != 0)
            sub_140a74f90(rcx_40)
        
        int64_t rcx_41 = var_88
        
        if (rcx_41 != 0)
            sub_140a74f90(rcx_41)
        
        rcx_42 = *arg1
        result = sub_141da1e80(rcx_42, &rcx_42[0x74], arg2, 0)
    else
        *(arg2 + 0x31) = 0
    label_141d99dea:
        int64_t rcx_11 = var_88
        
        if (rcx_11 != 0)
            result = sub_140a74f90(rcx_11)

if (var_70 != 0)
    var_70[1].d -= 1
    
    if (var_70[1].d == 1)
        result = (**var_70)(var_70)
        int32_t temp1_1 = *(var_70 + 0xc)
        *(var_70 + 0xc) -= 1
        
        if (temp1_1 == 1)
            return (*(*var_70 + 8))(var_70, 1)

return result
