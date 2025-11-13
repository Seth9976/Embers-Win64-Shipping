// 函数: sub_141b08da0
// 地址: 0x141b08da0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void* result = sub_141aef7d0(arg3, arg4)
int64_t* result_2 = result

if (result != 0)
    int64_t rdi_1 = 0
    void* result_1 = result
    int32_t r13_1 = 0
    void* var_48_1 = arg2
    int64_t* rbx_1 = *(arg1 + 0x10)
    int64_t rcx_1 = sx.q(*(arg1 + 0x18)) << 3
    void* var_50_1 = arg1
    int32_t r15_1 = 0
    void* var_40_1 = arg7
    int64_t r12_1 = 0
    int64_t var_c8 = 0
    uint64_t rcx_2 = rcx_1 u>> 3
    int32_t var_c0_1 = 0
    int64_t var_b8_1 = 0
    
    if (rbx_1 u> &rbx_1[sx.q(*(arg1 + 0x18))])
        rcx_2 = 0
    
    int32_t var_b0_1 = 0
    int64_t rbx_2
    
    if (rcx_2 == 0)
        rbx_2 = 0
    else
        do
            int64_t* rdx_1 = *rbx_1
            int64_t* rax_2 = rbx_1
            int64_t* var_118_1 = &result_1
            int512_t zmm2
            zmm2.o = *(rdx_1 + 0x3c)
            
            if ((rdx_1[4].b & 2) == 0)
                rax_2 = rdx_1
            
            int64_t* rcx_3 = *rax_2
            (*(*rcx_3 + 8))(rcx_3, &var_c8, &result_1, zmm2, zx.q(rdx_1[8].b))
            rbx_1 = &rbx_1[1]
            r12_1 += 1
        while (r12_1 != rcx_2)
        
        r15_1 = var_b0_1
        r13_1 = var_c0_1
        rbx_2 = var_c8
    
    int64_t var_a8 = 0
    int32_t var_a0_1 = r13_1
    
    if (r13_1 != 0)
        sub_140874c00(&var_a8, r13_1, 0)
        memcpy(var_a8, rbx_2, r13_1 * 0x38)
        r15_1 = var_b0_1
    else
        int32_t var_9c_1 = 0
    
    int64_t var_98 = 0
    int32_t var_90_1 = r15_1
    
    if (r15_1 != 0)
        sub_140874c00(&var_98, r15_1, 0)
        memcpy(var_98, var_b8_1, r15_1 * 0x38)
    else
        int32_t var_8c_1 = 0
    
    (*(*result_2 + 0x20))(result_2, arg2, &var_a8, arg1, arg5, arg6, arg7)
    int32_t r8_4 = -1
    int32_t r9_2 = 0
    int64_t var_d8
    int64_t var_d0
    
    if (arg2 != 0)
        sub_140d3a3a0(&var_d8, arg2)
        int64_t rax_8 = var_d8
        var_d0 = rax_8
        r8_4 = rax_8.d
        r9_2 = var_d0:4.d
    
    int32_t* i = result_2[3]
    
    for (result = &i[sx.q(result_2[4].d) * 0xa]; i != result; i = &i[0xa])
        if (*i == r8_4 && i[1] == r9_2)
            sub_141a3d100(&var_d0, result_2[5], *sub_141a50e80(&var_d8))
            int64_t* rbx_5 = result_2[2]
            int64_t rcx_13 = 0
            void** var_70
            int32_t var_e8
            int64_t var_80
            int64_t* var_60
            
            if (arg2 == 0)
                var_d8 = rbx_5
                
                if (rbx_5 != 0)
                    int32_t rax_18 = rbx_5[1].d
                    
                    if (rax_18 != 0)
                        rbx_5[1].d = rax_18 + 1
                        rax_18.b = 1
                    
                    if (rax_18.b == 0)
                        rbx_5 = nullptr
                    
                    var_d8 = rbx_5
                    
                    if (rbx_5 != 0)
                        rcx_13 = result_2[1]
                
                var_80 = rcx_13
                int64_t* var_78_2 = rbx_5
                
                if (rbx_5 != 0)
                    *(rbx_5 + 0xc) += 1
                
                int64_t* rax_19 = sub_141a30820(&var_70, &var_80)
                int64_t* r15_3 = *(arg1 + 0x10)
                char r8_8 = 0
                uint64_t r12_6 = sx.q(*(arg1 + 0x18)) << 3 u>> 3
                
                if (r15_3 u> &r15_3[sx.q(*(arg1 + 0x18))])
                    r12_6 = 0
                
                if (r12_6 != 0)
                    char var_f8_2 = 1
                    
                    do
                        void* rax_20 = *r15_3
                        int64_t r8_9 = var_d0
                        *(arg7 + 0x2d0) = *(rax_20 + 0x28)
                        *(arg7 + 0x2d8) = *(rax_20 + 0x30)
                        *(arg7 + 0x2dc) = 2
                        var_e8.q = *(arg7 + 0x2d0)
                        int32_t var_e0_3 = *(arg7 + 0x2d8)
                        sub_141a590e0(arg7 + 0x148, 2, r8_9, &var_e8, rax_19, arg7 + 0xf8)
                        rdi_1 += 1
                        r15_3 = &r15_3[1]
                    while (rdi_1 != r12_6)
                    
                    rbx_5 = var_d8
                    r8_8 = 1
                
                char rdx_16 = *(arg7 + 0x2dd)
                var_e8 = data_1439e5888
                int32_t var_e4_2 = 0xffffffff
                *(arg7 + 0x2d0) = var_e8.q
                *(arg7 + 0x2d8) = 0xffffffff
                *(arg7 + 0x2dc) = rdx_16
                
                if (r8_8 == 0 && rdx_16 != 0)
                    var_e8.q = *(arg7 + 0x2d0)
                    int32_t var_e0_4 = *(arg7 + 0x2d8)
                    sub_141a590e0(arg7 + 0x148, rdx_16, var_d0, &var_e8, rax_19, arg7 + 0xf8)
                
                if (var_60 != 0)
                    int32_t temp0_1 = *(var_60 + 0xc)
                    *(var_60 + 0xc) -= 1
                    
                    if (temp0_1 == 1)
                        (*(*var_60 + 8))(var_60, 1)
                
                result = &data_142d4ba10
            else
                int64_t* var_88_1 = rbx_5
                
                if (rbx_5 != 0)
                    int32_t rax_11 = rbx_5[1].d
                    
                    if (rax_11 != 0)
                        rbx_5[1].d = rax_11 + 1
                        rax_11.b = 1
                    
                    if (rax_11.b == 0)
                        rbx_5 = nullptr
                    
                    var_88_1 = rbx_5
                    
                    if (rbx_5 != 0)
                        rcx_13 = result_2[1]
                
                var_80 = rcx_13
                int64_t* var_78_1 = rbx_5
                
                if (rbx_5 != 0)
                    *(rbx_5 + 0xc) += 1
                
                int64_t* rax_12 = sub_141a30870(&var_70, &var_80)
                int64_t* r14 = *(arg1 + 0x10)
                char r9_3 = 0
                int64_t rcx_15 = sx.q(*(arg1 + 0x18))
                int64_t r8_6 = rax_12
                var_d8 = rax_12
                uint64_t r12_4 = rcx_15 << 3 u>> 3
                
                if (r14 u> &r14[rcx_15])
                    r12_4 = 0
                
                int64_t var_118_2
                
                if (r12_4 != 0)
                    char var_f8_1 = 1
                    
                    do
                        void* rax_13 = *r14
                        int64_t rdx_11 = var_d0
                        *(arg7 + 0x2d0) = *(rax_13 + 0x28)
                        int32_t rax_14 = *(rax_13 + 0x30)
                        *(arg7 + 0x2d8) = rax_14
                        int32_t var_e0_1 = rax_14
                        *(arg7 + 0x2dc) = 2
                        var_118_2.b = 2
                        var_e8.q = *(arg7 + 0x2d0)
                        sub_1405c5900(arg7 + 0xf8, rdx_11, rax_12, arg2, 2, &var_e8)
                        rdi_1 += 1
                        r14 = &r14[1]
                    while (rdi_1 != r12_4)
                    
                    rbx_5 = var_88_1
                    r8_6 = var_d8
                    r9_3 = 1
                
                char rdx_12 = *(arg7 + 0x2dd)
                var_e8 = data_1439e5888
                int32_t var_e4_1 = 0xffffffff
                *(arg7 + 0x2d0) = var_e8.q
                *(arg7 + 0x2d8) = 0xffffffff
                *(arg7 + 0x2dc) = rdx_12
                
                if (r9_3 == 0)
                    int32_t var_e0_2 = *(arg7 + 0x2d8)
                    var_118_2.b = rdx_12
                    var_e8.q = *(arg7 + 0x2d0)
                    sub_1405c5900(arg7 + 0xf8, var_d0, r8_6, arg2, var_118_2.b, &var_e8)
                
                if (var_60 != 0)
                    int32_t temp1_1 = *(var_60 + 0xc)
                    *(var_60 + 0xc) -= 1
                    
                    if (temp1_1 == 1)
                        (*(*var_60 + 8))(var_60, 1)
                
                result = &data_142d4ba10
            var_70 = &data_142d4ba10
            
            if (rbx_5 != 0)
                rbx_5[1].d -= 1
                
                if (rbx_5[1].d == 1)
                    result = (**rbx_5)(rbx_5)
                    int32_t temp3_1 = *(rbx_5 + 0xc)
                    *(rbx_5 + 0xc) -= 1
                    
                    if (temp3_1 == 1)
                        result = (*(*rbx_5 + 8))(rbx_5, 1)
            
            break
    
    int64_t rcx_28 = var_98
    
    if (rcx_28 != 0)
        result = sub_140a74f90(rcx_28)
    
    int64_t rcx_29 = var_a8
    
    if (rcx_29 != 0)
        result = sub_140a74f90(rcx_29)
    
    if (var_b8_1 != 0)
        result = sub_140a74f90(var_b8_1)
    
    int64_t rcx_31 = var_c8
    
    if (rcx_31 != 0)
        return sub_140a74f90(rcx_31)

return result
