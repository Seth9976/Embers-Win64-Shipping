// 函数: sub_140f09b10
// 地址: 0x140f09b10
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

(*(*arg1 + 0x248))(arg1, zx.q(sub_140f619a0(arg1)), 0, 0)
int64_t rbp = 0

if (sub_140f4a730(arg1) != 0 && arg1[0x76].d != 0)
    int64_t* rcx_2 = arg1[0x75]
    
    if (rcx_2 != 0 && (*(*rcx_2 + 0x28))(rcx_2) != 0)
        int64_t* rcx_3
        
        if (arg1[0x76].d == 0)
            rcx_3 = nullptr
        else
            rcx_3 = arg1[0x75]
        
        (*(*rcx_3 + 0x48))(rcx_3)

*arg2 = 1
*(arg2 + 8) = 0
*(arg2 + 0x10) = 0
arg2[0x20] = 0
__builtin_memset(&arg2[0x28], 0, 0x88)
*(arg2 + 0xb4) &= 0xffffff00
*(arg2 + 0xb0) = 0x20702

if (arg1[0x7e].b != 0)
    int64_t* rbx_1 = arg1[0x78]
    int64_t r12_1 = 0
    int64_t var_58_1 = 0
    int64_t* rax_5 = rbx_1
    int64_t* var_50_1 = rbx_1
    
    if (rbx_1 != 0)
        int32_t rax_6 = rbx_1[1].d
        
        if (rax_6 == 0)
            rbx_1 = nullptr
            rax_5 = nullptr
            var_50_1 = nullptr
        else
            rbx_1[1].d = rax_6 + 1
            rax_5 = rbx_1
    
    if (rax_5 != 0)
        r12_1 = arg1[0x77]
        var_58_1 = r12_1
    
    int64_t var_48
    
    if (rax_5 == 0 || r12_1 == 0)
        int64_t* rcx_4 = arg1[0x5e]
        
        if (rcx_4 != 0)
            int64_t* rax_9 = (*(*rcx_4 + 0x188))(rcx_4)
            int64_t rdx_1 = *rax_9
            
            if ((*rdx_1)(rax_9, rdx_1) == 1)
                int64_t* rcx_6 = arg1[0x5e]
                int64_t* rax_12 = (*(*rcx_6 + 0x188))(rcx_6)
                int64_t r9_1 = *rax_12
                int64_t* rax_13 = (*(r9_1 + 0x10))(rax_12, &var_48, 0, r9_1, var_58_1, var_50_1)
                int64_t* rsi_1 = rax_13[1]
                r12_1 = *rax_13
                
                if (rsi_1 != 0)
                    rsi_1[1].d += 1
                
                var_58_1 = r12_1
                int64_t* r15_1 = rbx_1
                
                if (rsi_1 != rbx_1)
                    rbx_1 = rsi_1
                    var_50_1 = rbx_1
                    
                    if (r15_1 != 0)
                        r15_1[1].d -= 1
                        
                        if (r15_1[1].d == 1)
                            (**r15_1)(r15_1)
                            int32_t temp7_1 = *(r15_1 + 0xc)
                            *(r15_1 + 0xc) -= 1
                            
                            if (temp7_1 == 1)
                                (*(*r15_1 + 8))(r15_1, 1)
                else if (rsi_1 != 0)
                    rsi_1[1].d -= 1
                    
                    if (rsi_1[1].d == 1)
                        (**rsi_1)(rsi_1)
                        int32_t temp6_1 = *(rsi_1 + 0xc)
                        *(rsi_1 + 0xc) -= 1
                        
                        if (temp6_1 == 1)
                            (*(*rsi_1 + 8))(rsi_1, 1)
                
                int64_t* var_40
                
                if (var_40 != 0)
                    var_40[1].d -= 1
                    
                    if (var_40[1].d == 1)
                        (**var_40)(var_40)
                        int32_t temp9_1 = *(var_40 + 0xc)
                        *(var_40 + 0xc) -= 1
                        
                        if (temp9_1 == 1)
                            (*(*var_40 + 8))(var_40, 1)
    
    int128_t zmm6
    int128_t var_38_1 = zmm6
    
    if (r12_1 != 0)
    label_140f09e73:
        zmm6 = var_58_1.o
    label_140f09e78:
        var_48.o = zmm6
        
        if (rbx_1 != 0)
            rbx_1[1].d += 1
        
        sub_140dbdce0(arg2, &var_48, 2, 0)
    else
        var_48 = arg1[0x5c]
        void* rax_20 = arg1[0x5d]
        void* var_40_1 = rax_20
        
        if (rax_20 != 0)
            *(rax_20 + 8) += 1
        
        zmm6 = var_48.o
        int64_t* rbx_2 = _mm_bsrli_si128(var_58_1.o, 8).q
        var_58_1.o = zmm6
        
        if (rbx_2 != 0)
            rbx_2[1].d -= 1
            
            if (rbx_2[1].d == 1)
                (**rbx_2)(rbx_2)
                int32_t temp1_1 = *(rbx_2 + 0xc)
                *(rbx_2 + 0xc) -= 1
                
                if (temp1_1 == 1)
                    (*(*rbx_2 + 8))(rbx_2, 1)
        
        if (zmm6.q != 0)
            rbx_1 = var_50_1
            goto label_140f09e78
        
        int64_t* rsi_3 = arg1[0x7d]
        
        if (rsi_3 != 0)
            int32_t rax_24 = rsi_3[1].d
            
            if (rax_24 != 0)
                rsi_3[1].d = rax_24 + 1
                rax_24.b = 1
            
            if (rax_24.b == 0)
                rsi_3 = nullptr
            
            if (rsi_3 != 0)
                rbp = arg1[0x7c]
        
        rbx_1 = var_50_1
        var_58_1 = rbp
        int64_t* r14_1 = rbx_1
        
        if (rsi_3 != rbx_1)
            rbx_1 = rsi_3
            int64_t* var_50_2 = rbx_1
            
            if (r14_1 != 0)
                r14_1[1].d -= 1
                
                if (r14_1[1].d == 1)
                    (**r14_1)(r14_1)
                    int32_t temp13_1 = *(r14_1 + 0xc)
                    *(r14_1 + 0xc) -= 1
                    
                    if (temp13_1 == 1)
                        (*(*r14_1 + 8))(r14_1, 1)
        else if (rsi_3 != 0)
            rsi_3[1].d -= 1
            
            if (rsi_3[1].d == 1)
                (**rsi_3)(rsi_3)
                int32_t temp12_1 = *(rsi_3 + 0xc)
                *(rsi_3 + 0xc) -= 1
                
                if (temp12_1 == 1)
                    (*(*rsi_3 + 8))(rsi_3, 1)
        
        if (rbp != 0)
            goto label_140f09e73
    
    if (rbx_1 != 0)
        rbx_1[1].d -= 1
        
        if (rbx_1[1].d == 1)
            int64_t r8_2 = *rbx_1
            (*r8_2)(rbx_1, arg3, r8_2)
            int32_t temp8_1 = *(rbx_1 + 0xc)
            *(rbx_1 + 0xc) -= 1
            
            if (temp8_1 == 1)
                int64_t r8_3 = *rbx_1
                (*(r8_3 + 8))(rbx_1, 1, r8_3)

return arg2
