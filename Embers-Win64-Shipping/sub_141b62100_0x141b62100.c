// 函数: sub_141b62100
// 地址: 0x141b62100
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int128_t zmm6
int128_t var_48 = zmm6
int128_t var_88 = zx.o(0)
int64_t* rdi
int32_t var_78
int64_t var_70
void*** r14_1

if (arg3 == 0)
    var_88.q = data_143f2dd38
    void* rax_19 = data_143f2dd40
    var_88:8.q = rax_19
    
    if (rax_19 != 0)
        *(rax_19 + 8) += 1
    
    zmm6 = var_88
    int64_t temp0_2 = _mm_bsrli_si128(zx.o(0), 8)
    var_88 = zmm6
    
    if (temp0_2 != 0)
        int32_t temp2_1 = *(temp0_2 + 8)
        *(temp0_2 + 8) -= 1
        
        if (temp2_1 == 1)
            (**temp0_2)(temp0_2)
            int32_t temp3_1 = *(temp0_2 + 0xc)
            *(temp0_2 + 0xc) -= 1
            
            if (temp3_1 == 1)
                (*(*temp0_2 + 8))(temp0_2, 1)
    
    r14_1 = var_88.q
    rdi = var_88:8.q
label_141b623bf:
    
    if (rdi != 0)
        rdi[1].d += 1
    
    if (arg3 != 0)
        int128_t var_58 = zmm6
        
        if (rdi != 0)
            rdi[1].d += 1
        
        sub_140d3a3a0(&var_70, arg3)
        var_88.q = &var_70
        var_88:8.q = &var_58
        sub_141b48690(arg1 + 0xe8, &var_78, &var_88, nullptr)
        int64_t* rbx_5 = var_58:8.q
        
        if (rbx_5 != 0)
            rbx_5[1].d -= 1
            
            if (rbx_5[1].d == 1)
                (**rbx_5)(rbx_5)
                int32_t temp9_1 = *(rbx_5 + 0xc)
                *(rbx_5 + 0xc) -= 1
                
                if (temp9_1 == 1)
                    (*(*rbx_5 + 8))(rbx_5, 1)
    
    if (rdi != 0)
        rdi[1].d -= 1
        
        if (rdi[1].d == 1)
            (**rdi)(rdi)
            int32_t temp5_1 = *(rdi + 0xc)
            *(rdi + 0xc) -= 1
            
            if (temp5_1 == 1)
                (*(*rdi + 8))(rdi, 1)
    
    *arg2 = r14_1
else
    sub_140d3a3a0(&var_70, arg3)
    sub_1417f0130(arg1 + 0xe8, &var_78, var_70)
    int64_t rax = sx.q(var_78)
    int64_t rax_1
    void* rax_2
    
    if (rax.d != 0xffffffff)
        rax_1 = rax << 5
        rax_2 = rax_1 + *(arg1 + 0xe8)
    
    int64_t* rax_3
    int64_t rcx_2
    
    if (rax.d == 0xffffffff || rax_1 == neg.q(*(arg1 + 0xe8)))
        rcx_2 = 0
        rax_3 = nullptr
    else
        rcx_2 = *(rax_2 + 8)
        rax_3 = *(rax_2 + 0x10)
        
        if (rax_3 != 0)
            rax_3[1].d += 1
    
    rdi = var_88:8.q
    
    if (rax_3 != 0)
        rdi = rax_3
    
    var_88:8.q = rdi
    
    if (rcx_2 == 0)
        float zmm0_1
        
        if (*(arg1 + 0x1e0) s<= 0)
            void*** rax_8 = j_sub_140a82f30(0x18)
            
            if (rax_8 == 0)
                r14_1 = nullptr
            else
                r14_1 = sub_141b4a8b0(rax_8, arg3)
            
            int64_t* rax_10
            rax_10, zmm0_1 = j_sub_140a82f30(0x18)
            int64_t* rbx_2 = rax_10
            
            if (rax_10 == 0)
                rbx_2 = nullptr
            else
                rax_10[1].d = 1
                *(rax_10 + 0xc) = 1
                *rbx_2 = &data_142e4cf50
                rbx_2[2] = r14_1
            
            int64_t* var_68_1 = rbx_2
            var_70 = 0
            int64_t* rsi_2 = rdi
            var_88.q = r14_1
            
            if (rbx_2 == rdi)
            label_141b62302:
                
                if (rbx_2 != 0)
                    rbx_2[1].d -= 1
                    
                    if (rbx_2[1].d == 1)
                        (**rbx_2)(rbx_2)
                        int32_t temp14_1 = *(rbx_2 + 0xc)
                        *(rbx_2 + 0xc) -= 1
                        
                        if (temp14_1 == 1)
                            (*(*rbx_2 + 8))(rbx_2, 1)
            else
                int64_t* var_68_2 = nullptr
                rdi = rbx_2
                var_88:8.q = rbx_2
                
                if (rsi_2 != 0)
                    rsi_2[1].d -= 1
                    
                    if (rsi_2[1].d == 1)
                        (**rsi_2)(rsi_2)
                        int32_t temp15_1 = *(rsi_2 + 0xc)
                        *(rsi_2 + 0xc) -= 1
                        
                        if (temp15_1 == 1)
                            (*(*rsi_2 + 8))(rsi_2, 1)
                    
                    rbx_2 = var_68_2
                    goto label_141b62302
        else
            int64_t rax_4 = *(arg1 + 0x1d8)
            int64_t rdx_3 = sx.q(*(arg1 + 0x1e0)) * 2
            r14_1 = *(rax_4 + (rdx_3 << 3) - 0x10)
            int64_t* rbx_1 = *(rax_4 + (rdx_3 << 3) - 8)
            *(rax_4 + (rdx_3 << 3) - 8) = 0
            *(rax_4 + (rdx_3 << 3) - 0x10) = 0
            sub_140dbae50(arg1 + 0x1d8, *(arg1 + 0x1e0) - 1, 1, 0)
            var_88.q = r14_1
            int64_t* rsi_1 = rdi
            
            if (rbx_1 != rdi)
                var_88:8.q = rbx_1
                rdi = rbx_1
                
                if (rsi_1 != 0)
                    rsi_1[1].d -= 1
                    
                    if (rsi_1[1].d == 1)
                        (**rsi_1)(rsi_1)
                        int32_t temp11_1 = *(rsi_1 + 0xc)
                        *(rsi_1 + 0xc) -= 1
                        
                        if (temp11_1 == 1)
                            (*(*rsi_1 + 8))(rsi_1, 1)
            else if (rbx_1 != 0)
                rbx_1[1].d -= 1
                
                if (rbx_1[1].d == 1)
                    (**rbx_1)(rbx_1)
                    int32_t temp10_1 = *(rbx_1 + 0xc)
                    *(rbx_1 + 0xc) -= 1
                    
                    if (temp10_1 == 1)
                        (*(*rbx_1 + 8))(rbx_1, 1)
            
            zmm0_1 = sub_141b6bfb0(r14_1, arg3)
        
        (*(*arg3 + 0x340))(arg3)
        (*(*arg3 + 0x338))(arg3)
        void* rcx_15 = r14_1[2]
        zmm6 = var_88
        *(rcx_15 + 0x1c) = int.d(zmm0_1)
        *(rcx_15 + 0x18) = int.d(zmm0_1)
        goto label_141b623bf
    
    *arg2 = rcx_2
arg2[1] = rdi
return arg2
