// 函数: sub_1411d1df0
// 地址: 0x1411d1df0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

if (arg3 s< 0)
    return 

bool cond:0_1

if (arg4 == 0)
    cond:0_1 = arg3 s>= *(arg6 + 0x20)
label_1411d1e3e:
    
    if (not(cond:0_1))
        goto label_1411d1e54
else if (arg4 != 1)
label_1411d1e54:
    int64_t r12_1 = sx.q(arg3)
    void* rdi_2 = r12_1 * 0x58 + *(arg6 + 0x18)
    
    if (arg5[1].d u> 0 && *(rdi_2 + 0x38) u> 0)
        int32_t* rax_1
        int128_t zmm6_1
        rax_1, zmm6_1 = sub_14081d830(0x20, *(arg1 + 8), 1, 0)
        int32_t* rbx_1 = rax_1
        
        if (rax_1 == 0)
            rbx_1 = nullptr
        else
            __builtin_memset(&rax_1[2], 0, 0x18)
        
        __builtin_memset(rbx_1, 0, 0x20)
        rbx_1[1] = *(*arg5 + 0x5c)
        *(rbx_1 + 8) = *(*arg5 + 0x30)
        *rbx_1 = *(rdi_2 + 0x38)
        *(rbx_1 + 0x10) = *(*(rdi_2 + 0x48) + 0x10)
        void* rax_6
        
        if (arg4 == 0)
            *(rbx_1 + 0x18) = *(*(rdi_2 + 0x50) + 8)
            rax_6 = *(rdi_2 + 0x50)
        label_1411d1f3b:
            int64_t r15_2 = *(rax_6 + 8)
            int64_t rbp_2 = sx.q(arg7[1].d)
            int32_t rax_8 = (rbp_2 + 1).d
            arg7[1].d = rax_8
            
            if (rax_8 s> *(arg7 + 0xc))
                sub_1405a4d70(arg7)
            
            *(*arg7 + (rbp_2 << 3)) = r15_2
            int32_t var_a4_1 = 1
            int32_t temp0_1
            int32_t temp1_1
            temp0_1:temp1_1 = sx.q(*(rdi_2 + 0x38) + 0x7f)
            int128_t var_98
            char rcx_7 = sub_1419a2ec0(arg2, &var_98, &data_143e76090, 0)
            int128_t zmm7 = var_98
            int128_t var_88 = sub_1411e22c0(rcx_7)
            sub_141998c50(zmm7.q, &data_143e7ac40, rbx_1)
            int32_t var_58_1 = 1
            int64_t var_60_1 = ((temp1_1 + (temp0_1 & 0x7f)) s>> 7).q
            void*** rax_15
            char rcx_9
            int512_t zmm6_3
            rax_15, rcx_9, zmm6_3 = sub_14081d830(0x60, *(arg1 + 8), 1, 0)
            void*** rdi_3 = rax_15
            zmm6_3.o = zmm6_1
            
            if (rax_15 == 0)
                rdi_3 = nullptr
            else
                int32_t var_a8_1
                var_a8_1.q = rbx_1
                sub_1411e22c0(rcx_9)
                void* var_a0_1 = &data_143e7ac70
                var_88 = var_a8_1.o
                void arg_18
                sub_141992bd0(rdi_3, &arg_18, &var_88, 2)
                *rdi_3 = &data_142f389c8
                *(rdi_3 + 0x38) = rbx_1.o
                *(rdi_3 + 0x48) = zmm7
                rdi_3[0xb] = var_58_1.q
            
            sub_1419968d0(arg1, rdi_3)
        else if (arg4 == 1)
            void* rdx_2 = r12_1 * 0x38 + *(arg6 + 0x28)
            *(rbx_1 + 0x18) = *(*(rdx_2 + 0x28) + 8)
            rax_6 = *(rdx_2 + 0x28)
            goto label_1411d1f3b
else if (arg3 s< *(arg6 + 0x20))
    cond:0_1 = arg3 s>= *(arg6 + 0x30)
    goto label_1411d1e3e
