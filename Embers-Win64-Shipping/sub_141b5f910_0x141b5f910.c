// 函数: sub_141b5f910
// 地址: 0x141b5f910
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t* rax = arg3 + 8

if (arg3 == 0)
    rax = &data_143dbb1f0

int128_t zmm6 = *rax
int128_t zmm7 = *(rax + 4)
int32_t arg_8 = zmm6.d
int32_t arg_c = zmm7.d
void var_78
sub_140d3a3a0(&var_78, arg2)
int32_t arg_28
int32_t rax_1 = arg_28
int32_t var_70 = zmm6.d
int32_t var_6c = zmm7.d
void*** result
int64_t* rbx_2

if (*(arg1 + 0x140) == *(arg1 + 0x16c))
label_141b5fa2d:
    rbx_2 = nullptr
label_141b5fa37:
    int64_t* r14_1 = rbx_2
    void*** result_1
    
    if (*(arg1 + 0x200) s<= 0)
        void*** result_2 = j_sub_140a82f30(0x28)
        result = result_2
        
        if (result_2 == 0)
            result = nullptr
        else
            result[1] = arg2
            *result = &data_14306c768
            int64_t* rax_12 = j_sub_140a82f30(0x30)
            int64_t* rdx_10 = rax_12
            
            if (rax_12 == 0)
                rdx_10 = nullptr
            else
                *rax_12 = 0
                rax_12[2] = 0
                rax_12[1].d = 0x3f800000
                *(rax_12 + 0xc) = 0x3f800000
                __builtin_memset(rax_12 + 0x1c, 0, 0x14)
            
            zmm6.d = zmm6.d f* 2f
            result[3] = arg4
            zmm7.d = zmm7.d f* 2f
            result[2] = rdx_10
            zmm6.d = zmm6.d f+ 0.5f
            zmm7.d = zmm7.d f+ 0.5f
            int32_t rcx_12 = int.d(zmm6.d) s>> 1
            result[4].d = rcx_12
            int32_t rax_15 = int.d(zmm7.d) s>> 1
            *(result + 0x24) = rax_15
            rdx_10[3].d = rcx_12
            *(rdx_10 + 0x1c) = rax_15
            result[2][2] = result
        
        int64_t* rax_17 = j_sub_140a82f30(0x18)
        int64_t* rdi_3 = rax_17
        
        if (rax_17 == 0)
            rdi_3 = nullptr
        else
            rax_17[1].d = 1
            *(rax_17 + 0xc) = 1
            *rdi_3 = &data_142e4cf50
            rdi_3[2] = result
        
        int64_t* var_90_1 = rdi_3
        result_1 = nullptr
        
        if (rdi_3 == rbx_2)
        label_141b5fc5e:
            
            if (rdi_3 != 0)
                rdi_3[1].d -= 1
                
                if (rdi_3[1].d == 1)
                    (**rdi_3)(rdi_3)
                    int32_t temp8_1 = *(rdi_3 + 0xc)
                    *(rdi_3 + 0xc) -= 1
                    
                    if (temp8_1 == 1)
                        (*(*rdi_3 + 8))(rdi_3, 1)
        else
            int64_t* var_90_2 = nullptr
            rbx_2 = rdi_3
            
            if (r14_1 != 0)
                r14_1[1].d -= 1
                
                if (r14_1[1].d == 1)
                    (**r14_1)(r14_1)
                    int32_t temp9_1 = *(r14_1 + 0xc)
                    *(r14_1 + 0xc) -= 1
                    
                    if (temp9_1 == 1)
                        (*(*r14_1 + 8))(r14_1, 1)
                
                rdi_3 = var_90_2
                goto label_141b5fc5e
    else
        int64_t rax_8 = *(arg1 + 0x1f8)
        int64_t rdx_5 = sx.q(*(arg1 + 0x200)) * 2
        result = *(rax_8 + (rdx_5 << 3) - 0x10)
        int64_t* rdi_2 = *(rax_8 + (rdx_5 << 3) - 8)
        *(rax_8 + (rdx_5 << 3) - 8) = 0
        *(rax_8 + (rdx_5 << 3) - 0x10) = 0
        sub_140dbae50(arg1 + 0x1f8, *(arg1 + 0x200) - 1, 1, 1)
        
        if (rdi_2 != rbx_2)
            rbx_2 = rdi_2
            
            if (r14_1 != 0)
                r14_1[1].d -= 1
                
                if (r14_1[1].d == 1)
                    (**r14_1)(r14_1)
                    int32_t temp3_1 = *(r14_1 + 0xc)
                    *(r14_1 + 0xc) -= 1
                    
                    if (temp3_1 == 1)
                        (*(*r14_1 + 8))(r14_1, 1)
        else if (rdi_2 != 0)
            rdi_2[1].d -= 1
            
            if (rdi_2[1].d == 1)
                (**rdi_2)(rdi_2)
                int32_t temp2_1 = *(rdi_2 + 0xc)
                *(rdi_2 + 0xc) -= 1
                
                if (temp2_1 == 1)
                    (*(*rdi_2 + 8))(rdi_2, 1)
        
        sub_141b6ae50(result, arg2, &arg_8, arg4)
    
    if (rbx_2 != 0)
        rbx_2[1].d += 1
    
    result_1 = result
    
    if (rbx_2 != 0)
        rbx_2[1].d += 1
    
    void* var_88 = &var_78
    void** var_80_1 = &result_1
    sub_141b48800(arg1 + 0x138, &arg_28, &var_88, nullptr)
    
    if (rbx_2 != 0)
        rbx_2[1].d -= 1
        
        if (rbx_2[1].d == 1)
            (**rbx_2)(rbx_2)
            int32_t temp11_1 = *(rbx_2 + 0xc)
            *(rbx_2 + 0xc) -= 1
            
            if (temp11_1 == 1)
                (*(*rbx_2 + 8))(rbx_2, 1)
    
    if (rbx_2 != 0)
        rbx_2[1].d -= 1
        
        if (rbx_2[1].d == 1)
            (**rbx_2)(rbx_2)
            int32_t temp12_1 = *(rbx_2 + 0xc)
            *(rbx_2 + 0xc) -= 1
            
            if (temp12_1 == 1)
                (*(*rbx_2 + 8))(rbx_2, 1)
        
        goto label_141b5fd12
else
    int32_t rax_3 = sub_141b601a0(&var_78)
    void* rcx_2 = *(arg1 + 0x178)
    void* r8 = arg1 + 0x170
    
    if (rcx_2 != 0)
        r8 = rcx_2
    
    int32_t rbx_1 = *(r8 + (((sx.q(*(arg1 + 0x180)) - 1) & sx.q(rax_3)) << 2))
    
    if (rbx_1 == 0xffffffff)
        goto label_141b5fa2d
    
    int64_t rcx_3 = *(arg1 + 0x138)
    int64_t rsi_2
    
    while (true)
        rsi_2 = sx.q(rbx_1) * 0x30
        int32_t* rdi_1 = rsi_2 + rcx_3
        
        if (sub_14077a170(rdi_1, &var_78) != 0 && not(var_70 f!= rdi_1[2])
                && not(var_6c f!= rdi_1[3]) && rdi_1[4] == rax_1)
            break
        
        rcx_3 = *(arg1 + 0x138)
        rbx_1 = *(rcx_3 + rsi_2 + 0x28)
        
        if (rbx_1 == 0xffffffff)
            goto label_141b5fa2d
    
    if (rbx_1 == 0xffffffff)
        goto label_141b5fa2d
    
    void* rbx_3 = *(arg1 + 0x138)
    void* rbx_4 = rbx_3 + rsi_2
    
    if (rbx_3 == neg.q(rsi_2))
        goto label_141b5fa2d
    
    result = *(rbx_4 + 0x18)
    rbx_2 = *(rbx_4 + 0x20)
    
    if (rbx_2 != 0)
        rbx_2[1].d += 1
    
    if (result == 0)
        goto label_141b5fa37
    
    sub_141b6ae50(result, arg2, &arg_8, arg4)
label_141b5fd12:
    
    if (rbx_2 != 0)
        rbx_2[1].d -= 1
        
        if (rbx_2[1].d == 1)
            (**rbx_2)(rbx_2)
            int32_t temp14_1 = *(rbx_2 + 0xc)
            *(rbx_2 + 0xc) -= 1
            
            if (temp14_1 == 1)
                int64_t r8_5 = *rbx_2
                (*(r8_5 + 8))(rbx_2, 1, r8_5)
return result
