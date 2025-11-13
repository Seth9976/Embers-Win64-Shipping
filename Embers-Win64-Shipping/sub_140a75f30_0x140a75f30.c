// 函数: sub_140a75f30
// 地址: 0x140a75f30
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int32_t rbx = 0
int32_t var_48 = 0
int128_t var_78 = zx.o(0)
void var_68
int64_t* var_60
void var_58
int64_t* var_50
int64_t* rbx_1
int128_t zmm0
bool cond:0_1

if (arg3 == 0)
    int64_t rax_41 = *(arg1 + 0xe8)
    int64_t* rdi_5
    
    if (rax_41 != 0)
        rdi_5 = var_50
    else
        int64_t* rax_42 = sub_140a6e370(&var_68, arg1 + 8, 0)
        rdi_5 = rax_42[1]
        
        if (rdi_5 != 0)
            rdi_5[1].d += 1
        
        if (arg1 + 0xe8 != &var_58)
            *(arg1 + 0xe8) = *rax_42
            int64_t* rsi_9 = *(arg1 + 0xf0)
            
            if (rdi_5 != rsi_9)
                *(arg1 + 0xf0) = rdi_5
                rdi_5 = nullptr
                
                if (rsi_9 != 0)
                    rsi_9[1].d -= 1
                    
                    if (rsi_9[1].d == 1)
                        (**rsi_9)(rsi_9)
                        int32_t temp8_1 = *(rsi_9 + 0xc)
                        *(rsi_9 + 0xc) -= 1
                        
                        if (temp8_1 == 1)
                            (*(*rsi_9 + 8))(rsi_9, 1)
        
        rax_41 = *(arg1 + 0xe8)
        rbx = 3
    
    var_78.q = rax_41
    void* rax_46 = *(arg1 + 0xf0)
    var_78:8.q = rax_46
    
    if (rax_46 != 0)
        *(rax_46 + 8) += 1
    
    zmm0 = var_78
    int64_t* rsi_10 = _mm_bsrli_si128(zx.o(0), 8).q
    var_78 = zmm0
    
    if (rsi_10 != 0)
        rsi_10[1].d -= 1
        
        if (rsi_10[1].d == 1)
            (**rsi_10)(rsi_10)
            int32_t temp4_1 = *(rsi_10 + 0xc)
            *(rsi_10 + 0xc) -= 1
            
            if (temp4_1 == 1)
                (*(*rsi_10 + 8))(rsi_10, 1)
    
    if ((rbx.b & 2) != 0)
        rbx &= 0xfffffffd
        
        if (rdi_5 != 0)
            rdi_5[1].d -= 1
            
            if (rdi_5[1].d == 1)
                (**rdi_5)(rdi_5)
                int32_t temp13_1 = *(rdi_5 + 0xc)
                *(rdi_5 + 0xc) -= 1
                
                if (temp13_1 == 1)
                    (*(*rdi_5 + 8))(rdi_5, 1)
    
    cond:0_1 = (rbx.b & 1) == 0
label_140a764be:
    
    if (not(cond:0_1))
        rbx_1 = var_60
    label_140a764c4:
        
        if (rbx_1 != 0)
            rbx_1[1].d -= 1
            
            if (rbx_1[1].d == 1)
                (**rbx_1)(rbx_1)
                int32_t temp31_1 = *(rbx_1 + 0xc)
                *(rbx_1 + 0xc) -= 1
                
                if (temp31_1 == 1)
                    (*(*rbx_1 + 8))(rbx_1, 1)
else
    if (arg3 == 1)
        int64_t rax_31 = *(arg1 + 0xf8)
        int64_t* rdi_4
        
        if (rax_31 != 0)
            rdi_4 = var_50
        else
            int64_t* rax_32 = sub_140a6e370(&var_68, arg1 + 8, (rax_31 + 1).d)
            rdi_4 = rax_32[1]
            
            if (rdi_4 != 0)
                rdi_4[1].d += 1
            
            if (arg1 + 0xf8 != &var_58)
                *(arg1 + 0xf8) = *rax_32
                int64_t* rsi_7 = *(arg1 + 0x100)
                
                if (rdi_4 != rsi_7)
                    *(arg1 + 0x100) = rdi_4
                    rdi_4 = nullptr
                    
                    if (rsi_7 != 0)
                        rsi_7[1].d -= 1
                        
                        if (rsi_7[1].d == 1)
                            (**rsi_7)(rsi_7)
                            int32_t temp15_1 = *(rsi_7 + 0xc)
                            *(rsi_7 + 0xc) -= 1
                            
                            if (temp15_1 == 1)
                                (*(*rsi_7 + 8))(rsi_7, 1)
            
            rax_31 = *(arg1 + 0xf8)
            rbx = 0xc
        
        var_78.q = rax_31
        void* rax_36 = *(arg1 + 0x100)
        var_78:8.q = rax_36
        
        if (rax_36 != 0)
            *(rax_36 + 8) += 1
        
        zmm0 = var_78
        int64_t* rsi_8 = _mm_bsrli_si128(zx.o(0), 8).q
        var_78 = zmm0
        
        if (rsi_8 != 0)
            rsi_8[1].d -= 1
            
            if (rsi_8[1].d == 1)
                (**rsi_8)(rsi_8)
                int32_t temp9_1 = *(rsi_8 + 0xc)
                *(rsi_8 + 0xc) -= 1
                
                if (temp9_1 == 1)
                    (*(*rsi_8 + 8))(rsi_8, 1)
        
        if ((rbx.b & 8) != 0)
            rbx &= 0xfffffff7
            
            if (rdi_4 != 0)
                rdi_4[1].d -= 1
                
                if (rdi_4[1].d == 1)
                    (**rdi_4)(rdi_4)
                    int32_t temp19_1 = *(rdi_4 + 0xc)
                    *(rdi_4 + 0xc) -= 1
                    
                    if (temp19_1 == 1)
                        (*(*rdi_4 + 8))(rdi_4, 1)
        
        cond:0_1 = (rbx.b & 4) == 0
        goto label_140a764be
    
    if (arg3 == 2)
        int64_t rax_21 = *(arg1 + 0x108)
        int64_t* rdi_3
        
        if (rax_21 != 0)
            rdi_3 = var_50
        else
            int64_t* rax_22 = sub_140a6e370(&var_68, arg1 + 8, (rax_21 + 2).d)
            rdi_3 = rax_22[1]
            
            if (rdi_3 != 0)
                rdi_3[1].d += 1
            
            if (arg1 + 0x108 != &var_58)
                *(arg1 + 0x108) = *rax_22
                int64_t* rsi_5 = *(arg1 + 0x110)
                
                if (rdi_3 != rsi_5)
                    *(arg1 + 0x110) = rdi_3
                    rdi_3 = nullptr
                    
                    if (rsi_5 != 0)
                        rsi_5[1].d -= 1
                        
                        if (rsi_5[1].d == 1)
                            (**rsi_5)(rsi_5)
                            int32_t temp21_1 = *(rsi_5 + 0xc)
                            *(rsi_5 + 0xc) -= 1
                            
                            if (temp21_1 == 1)
                                (*(*rsi_5 + 8))(rsi_5, 1)
            
            rax_21 = *(arg1 + 0x108)
            rbx = 0x30
        
        var_78.q = rax_21
        void* rax_26 = *(arg1 + 0x110)
        var_78:8.q = rax_26
        
        if (rax_26 != 0)
            *(rax_26 + 8) += 1
        
        zmm0 = var_78
        int64_t* rsi_6 = _mm_bsrli_si128(zx.o(0), 8).q
        var_78 = zmm0
        
        if (rsi_6 != 0)
            rsi_6[1].d -= 1
            
            if (rsi_6[1].d == 1)
                (**rsi_6)(rsi_6)
                int32_t temp16_1 = *(rsi_6 + 0xc)
                *(rsi_6 + 0xc) -= 1
                
                if (temp16_1 == 1)
                    (*(*rsi_6 + 8))(rsi_6, 1)
        
        if ((rbx.b & 0x20) != 0)
            rbx &= 0xffffffdf
            
            if (rdi_3 != 0)
                rdi_3[1].d -= 1
                
                if (rdi_3[1].d == 1)
                    (**rdi_3)(rdi_3)
                    int32_t temp26_1 = *(rdi_3 + 0xc)
                    *(rdi_3 + 0xc) -= 1
                    
                    if (temp26_1 == 1)
                        (*(*rdi_3 + 8))(rdi_3, 1)
        
        cond:0_1 = (rbx.b & 0x10) == 0
        goto label_140a764be
    
    if (arg3 == 3)
        int64_t rax_11 = *(arg1 + 0x118)
        int64_t* rdi_2
        
        if (rax_11 != 0)
            rdi_2 = var_60
        else
            int64_t* rax_12 = sub_140a6e370(&var_58, arg1 + 8, (rax_11 + 3).d)
            rdi_2 = rax_12[1]
            
            if (rdi_2 != 0)
                rdi_2[1].d += 1
            
            if (arg1 + 0x118 != &var_68)
                *(arg1 + 0x118) = *rax_12
                int64_t* rsi_3 = *(arg1 + 0x120)
                
                if (rdi_2 != rsi_3)
                    *(arg1 + 0x120) = rdi_2
                    rdi_2 = nullptr
                    
                    if (rsi_3 != 0)
                        rsi_3[1].d -= 1
                        
                        if (rsi_3[1].d == 1)
                            (**rsi_3)(rsi_3)
                            int32_t temp28_1 = *(rsi_3 + 0xc)
                            *(rsi_3 + 0xc) -= 1
                            
                            if (temp28_1 == 1)
                                (*(*rsi_3 + 8))(rsi_3, 1)
            
            rax_11 = *(arg1 + 0x118)
            rbx = 0xc0
        
        var_78.q = rax_11
        void* rax_16 = *(arg1 + 0x120)
        var_78:8.q = rax_16
        
        if (rax_16 != 0)
            *(rax_16 + 8) += 1
        
        zmm0 = var_78
        int64_t* rsi_4 = _mm_bsrli_si128(zx.o(0), 8).q
        var_78 = zmm0
        
        if (rsi_4 != 0)
            rsi_4[1].d -= 1
            
            if (rsi_4[1].d == 1)
                (**rsi_4)(rsi_4)
                int32_t temp22_1 = *(rsi_4 + 0xc)
                *(rsi_4 + 0xc) -= 1
                
                if (temp22_1 == 1)
                    (*(*rsi_4 + 8))(rsi_4, 1)
        
        if (rbx.b s< 0)
            rbx &= 0xffffff7f
            
            if (rdi_2 != 0)
                rdi_2[1].d -= 1
                
                if (rdi_2[1].d == 1)
                    (**rdi_2)(rdi_2)
                    int32_t temp32_1 = *(rdi_2 + 0xc)
                    *(rdi_2 + 0xc) -= 1
                    
                    if (temp32_1 == 1)
                        (*(*rdi_2 + 8))(rdi_2, 1)
        
        if ((rbx.b & 0x40) != 0)
            rbx_1 = var_50
            goto label_140a764c4
    else if (arg3 == 4)
        int64_t rax_1 = *(arg1 + 0x128)
        int64_t* rdi_1
        
        if (rax_1 != 0)
            rdi_1 = var_78:8.q
        else
            int64_t* rax_2 = sub_140a6e370(&var_68, arg1 + 8, 4)
            rdi_1 = rax_2[1]
            
            if (rdi_1 != 0)
                rdi_1[1].d += 1
            
            if (arg1 + 0x128 != &var_78)
                *(arg1 + 0x128) = *rax_2
                int64_t* rsi_1 = *(arg1 + 0x130)
                
                if (rdi_1 != rsi_1)
                    *(arg1 + 0x130) = rdi_1
                    rdi_1 = nullptr
                    
                    if (rsi_1 != 0)
                        rsi_1[1].d -= 1
                        
                        if (rsi_1[1].d == 1)
                            (**rsi_1)(rsi_1)
                            int32_t temp34_1 = *(rsi_1 + 0xc)
                            *(rsi_1 + 0xc) -= 1
                            
                            if (temp34_1 == 1)
                                (*(*rsi_1 + 8))(rsi_1, 1)
            
            rax_1 = *(arg1 + 0x128)
            rbx = 0x300
        
        var_78.q = rax_1
        void* rax_6 = *(arg1 + 0x130)
        var_78:8.q = rax_6
        
        if (rax_6 != 0)
            *(rax_6 + 8) += 1
        
        zmm0 = var_78
        int64_t* rsi_2 = _mm_bsrli_si128(zx.o(0), 8).q
        var_78 = zmm0
        
        if (rsi_2 != 0)
            rsi_2[1].d -= 1
            
            if (rsi_2[1].d == 1)
                (**rsi_2)(rsi_2)
                int32_t temp29_1 = *(rsi_2 + 0xc)
                *(rsi_2 + 0xc) -= 1
                
                if (temp29_1 == 1)
                    (*(*rsi_2 + 8))(rsi_2, 1)
        
        if (test_bit(rbx, 9))
            rbx &= 0xfffffdff
            
            if (rdi_1 != 0)
                rdi_1[1].d -= 1
                
                if (rdi_1[1].d == 1)
                    (**rdi_1)(rdi_1)
                    int32_t temp35_1 = *(rdi_1 + 0xc)
                    *(rdi_1 + 0xc) -= 1
                    
                    if (temp35_1 == 1)
                        (*(*rdi_1 + 8))(rdi_1, 1)
        
        cond:0_1 = (rbx & 0x100) == 0
        goto label_140a764be
int64_t* rbx_2 = var_78:8.q
*arg2 = var_78.q
arg2[1] = rbx_2

if (rbx_2 != 0)
    int32_t r8_6 = rbx_2[1].d
    rbx_2[1].d = r8_6
    
    if (r8_6 == 0)
        int64_t r8_7 = *rbx_2
        (*r8_7)(rbx_2, arg4, r8_7)
        int32_t temp12_1 = *(rbx_2 + 0xc)
        *(rbx_2 + 0xc) -= 1
        
        if (temp12_1 == 1)
            int64_t r8_8 = *rbx_2
            (*(r8_8 + 8))(rbx_2, 1, r8_8)

return arg2
