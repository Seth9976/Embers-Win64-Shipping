// 函数: sub_142399170
// 地址: 0x142399170
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int32_t arg_8
sub_14238c8c0(arg1 + 0x60, &arg_8, arg2)
int64_t rax = sx.q(arg_8)
int64_t rax_1
int64_t* rdx_4

if (rax.d == 0xffffffff)
    rax_1 = *arg2
    rdx_4 = arg2
else
    int64_t rdx_2 = rax << 6
    void* rdx_3 = rdx_2 + *(arg1 + 0x60)
    
    if (rdx_2 == neg.q(*(arg1 + 0x60)))
        rax_1 = *arg2
        rdx_4 = arg2
    else
        rdx_4 = rdx_3 + 0x18
        
        if (rdx_3 == -0x18)
            rax_1 = *arg2
            rdx_4 = arg2
        else
            rax_1 = *rdx_4

int64_t var_b8 = rax_1
int64_t var_b0
sub_140596d10(&var_b0, &rdx_4[1])
sub_14238c6f0(arg1 + 0x10, &arg_8, &var_b8)
int64_t rax_2 = sx.q(arg_8)
void*** (* var_c8)()
int64_t* var_a0
int64_t* result

if (rax_2.d == 0xffffffff)
label_14239927e:
    int64_t* rax_4 = j_sub_140a82f30(0x30)
    
    if (rax_4 == 0)
        rax_4 = nullptr
    else
        *rax_4 = 0
        rax_4[1].w = 0
        __builtin_memset(&rax_4[2], 0, 0x20)
    
    var_a0 = rax_4
    var_c8 = &var_b8
    int64_t** var_c0_1 = &var_a0
    sub_14237ace0(arg1 + 0x10, &arg_8, &var_c8, nullptr)
    result = *(*(arg1 + 0x10) + sx.q(arg_8) * 0x28 + 0x18)
    goto label_1423992e2

void* rdi_1 = *(arg1 + 0x10) + rax_2 * 0x28

if (rdi_1 == 0)
    goto label_14239927e

result = *(rdi_1 + 0x18)

if (result == 0)
    goto label_14239927e

if (result[1].b != 0)
    data_14399fa10()

if (*result == 0)
label_1423992e2:
    
    if (result[1].b == 0)
        sub_14238cc40(arg1, &var_b8, result)
    
    if (*result == 0)
        *(result + 9) = 0
        int32_t var_c0_2 = &arg_8
        arg_8.b = 0
        var_c8 = sub_140884c50
        void* rax_6 = sub_140a756e0(&var_c8, &data_14397f5f0)
        int64_t var_90
        int64_t var_88
        int64_t var_78
        int64_t var_70
        
        if (data_14399fa4c != 0 || *(rax_6 + 0x34) s> 0 || *(arg1 + 0xd0) != 0)
            int16_t** rax_20 = sub_140d30800(&var_b8, &var_c8)
            int16_t* rbx_5
            
            if (rax_20[1].d == 0)
                rbx_5 = &data_142d40450
            else
                rbx_5 = *rax_20
            
            int32_t var_e8_1 = 0
            int64_t rax_22 = sub_140d2f6f0(sub_140d41340(), 0, rbx_5, 0, 0, 0, 1, 0)
            void*** (* rcx_33)() = var_c8
            *result = rax_22
            
            if (rcx_33 != 0)
                sub_140a74f90(rcx_33)
            
            int64_t rbx_6 = *result
            
            if (rbx_6 != 0)
                void* rax_23 = sub_140cdddf0()
                void* rdx_24 = *(rbx_6 + 0x10)
                int64_t rax_24 = sx.q(*(rax_23 + 0x38))
                
                if (rax_24.d s<= *(rdx_24 + 0x38)
                        && *(*(rdx_24 + 0x30) + (rax_24 << 3)) == rax_23 + 0x30)
                    var_90 = var_b8
                    sub_140596d10(&var_88, &var_b0)
                    var_e8_1.q = result
                    int64_t* rax_27 = sub_1423905d0(arg1, &var_78, rbx_6, &var_90, nullptr)
                    var_b8 = *rax_27
                    
                    if (&var_b0 != &rax_27[1])
                        int64_t rcx_38 = var_b0
                        
                        if (rcx_38 != 0)
                            sub_140a74f90(rcx_38)
                        
                        var_b0 = rax_27[1]
                        rax_27[1] = 0
                        int32_t var_a8_1 = rax_27[2].d
                        int32_t var_a4_1 = *(rax_27 + 0x14)
                        rax_27[2] = 0
                    
                    int64_t rcx_39 = var_70
                    
                    if (rcx_39 != 0)
                        sub_140a74f90(rcx_39)
            
            if (*result == 0)
                *(result + 9) = 1
            
            result[1].b = 0
        else
            sub_140d30800(&var_b8, &var_c8)
            int32_t rax_7 = sub_140a23cf0(&var_c8, &data_142d404c4, 0, 0, 0xffffffff)
            
            if (rax_7 != 0xffffffff)
                int32_t rcx_12 = var_c0_2
                int32_t rdx_13 = rcx_12 - 1
                
                if (rcx_12 == 0)
                    rdx_13 = 0
                
                int32_t r10_1
                
                if (rax_7 s>= 0)
                    r10_1 = rdx_13
                    
                    if (rax_7 s< rdx_13)
                        r10_1 = rax_7
                else
                    r10_1 = 0
                
                int32_t rdx_14 = rdx_13 - r10_1
                int32_t rbx_2 = rcx_12 - 1
                
                if (rcx_12 == 0)
                    rbx_2 = 0
                
                int32_t rbx_3 = rbx_2 - r10_1
                
                if (rdx_14 s>= 0)
                    if (rdx_14 s< rbx_3)
                        rbx_3 = rdx_14
                    
                    if (rbx_3 != 0)
                        int32_t rax_9 = rcx_12 - rbx_3
                        
                        if (rax_9 != r10_1)
                            void*** (* r9)() = var_c8
                            memmove(r9 + (sx.q(r10_1) << 1), r9 + (sx.q(rbx_3 + r10_1) << 1), 
                                (rax_9 - r10_1) * 2)
                            rcx_12 = var_c0_2
                        
                        var_c0_2 = rcx_12 - rbx_3
            
            result[1].w = 1
            var_90 = var_b8
            sub_140596d10(&var_88, &var_b0)
            int64_t* rbx_4 = arg4[1]
            var_a0 = nullptr
            int32_t var_98_1 = 0
            int64_t r14_1 = *arg4
            
            if (rbx_4 != 0)
                rbx_4[1].d += 1
            
            var_78 = var_90
            sub_140596d10(&var_70, &var_88)
            void*** rax_15 = sub_1405978f0(0x40, &var_a0)
            
            if (rax_15 != 0)
                int64_t rcx_18 = var_78
                int64_t var_40
                sub_140596d10(&var_40, &var_70)
                int64_t var_58
                sub_140596d10(&var_58, &var_40)
                *rax_15 = &data_143336b28
                rax_15[1] = r14_1
                rax_15[2] = rbx_4
                
                if (rbx_4 != 0)
                    *(rbx_4 + 0xc) += 1
                
                rax_15[3] = sub_142385310
                rax_15[4] = rcx_18
                sub_140596d10(&rax_15[5], &var_58)
                int64_t rax_17 = sub_140a387b0()
                int64_t rcx_23 = var_58
                rax_15[7] = rax_17
                
                if (rcx_23 != 0)
                    sub_140a74f90(rcx_23)
                
                int64_t rcx_24 = var_40
                *rax_15 = &data_143336b80
                
                if (rcx_24 != 0)
                    sub_140a74f90(rcx_24)
            
            int64_t rcx_25 = var_70
            
            if (rcx_25 != 0)
                sub_140a74f90(rcx_25)
            
            if (rbx_4 != 0)
                rbx_4[1].d -= 1
                
                if (rbx_4[1].d == 1)
                    (**rbx_4)(rbx_4)
                    int32_t temp8_1 = *(rbx_4 + 0xc)
                    *(rbx_4 + 0xc) -= 1
                    
                    if (temp8_1 == 1)
                        (*(*rbx_4 + 8))(rbx_4, 1)
            
            int64_t rcx_28 = var_88
            
            if (rcx_28 != 0)
                sub_140a74f90(rcx_28)
            
            sub_140bcb5c0(&var_c8, &var_a0, arg3, 0, 0xffffffff)
            void*** (* rcx_30)() = var_c8
            
            if (rcx_30 != 0)
                sub_140a74f90(rcx_30)
    
    int64_t rcx_40 = var_b0
    
    if (rcx_40 != 0)
        sub_140a74f90(rcx_40)
    
    int64_t* rbx_8 = arg4[1]
    
    if (rbx_8 != 0)
        rbx_8[1].d -= 1
        
        if (rbx_8[1].d == 1)
            (**rbx_8)(rbx_8)
            int32_t temp6_1 = *(rbx_8 + 0xc)
            *(rbx_8 + 0xc) -= 1
            
            if (temp6_1 == 1)
                (*(*rbx_8 + 8))(rbx_8, 1)
else
    int64_t rcx_3 = var_b0
    
    if (rcx_3 != 0)
        sub_140a74f90(rcx_3)
    
    int64_t* rbx_1 = arg4[1]
    
    if (rbx_1 != 0)
        rbx_1[1].d -= 1
        
        if (rbx_1[1].d == 1)
            int64_t rdx_8 = *rbx_1
            (*rdx_8)(rbx_1, rdx_8)
            int32_t temp5_1 = *(rbx_1 + 0xc)
            *(rbx_1 + 0xc) -= 1
            
            if (temp5_1 == 1)
                int64_t r8_2 = *rbx_1
                (*(r8_2 + 8))(rbx_1, 1, r8_2)

return result
