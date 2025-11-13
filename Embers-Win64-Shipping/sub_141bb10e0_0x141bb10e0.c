// 函数: sub_141bb10e0
// 地址: 0x141bb10e0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t* rax = sub_140d3c6e0(arg1 + 0x28)

if (rax == 0)
label_141bb133c:
    sub_1405d9400()
    *arg2 = data_143cd6fd8
    void* rcx_17 = data_143cd6fe0
    arg2[1] = rcx_17
    
    if (rcx_17 != 0)
        *(rcx_17 + 8) += 1
    
    arg2[2].d = data_143cd6fe8
else
    char arg_8 = 0
    int64_t* rbx_2
    
    if (*(arg1 + 0x61) == 0 || *(arg1 + 0x60) == 0)
        sub_1405d9400()
        int64_t var_98 = data_143cd6fd8
        int64_t* rcx_2 = data_143cd6fe0
        
        if (rcx_2 != 0)
            rcx_2[1].d += 1
        
        int32_t rax_1 = data_143cd6fe8
        void var_60
        
        if (sub_141b72d60(rax, arg1 + 0x30, &var_98, &var_60) != 0)
            void arg_18
            
            if (&arg_18 != arg1 + 0x60)
                *(arg1 + 0x60) = 0x100
            
            rbx_2 = rcx_2
            *arg2 = var_98
            arg2[1] = rbx_2
            
            if (rbx_2 != 0)
                rbx_2[1].d += 1
                rbx_2 = rcx_2
            
            arg2[2].d = rax_1
            goto label_141bb130c
        
        if (rcx_2 != 0)
            rcx_2[1].d -= 1
            
            if (rcx_2[1].d == 1)
                (**rcx_2)(rcx_2)
                int32_t rax_8 = *(rcx_2 + 0xc)
                *(rcx_2 + 0xc) -= 1
                
                if (rax_8 == 1)
                    (*(*rcx_2 + 8))(rcx_2, 1)
        
        goto label_141bb11ea
    
label_141bb11ea:
    char arg_20 = 1
    
    if (*(arg1 + 0x61) == 0 || *(arg1 + 0x60) == 1)
        int64_t var_a8 = 0
        int64_t var_a0_1 = 0
        void* var_58
        
        if (sub_141b72c00(rax, arg1 + 0x30, &var_a8, &var_58) == 0)
            int64_t rcx_9 = var_a8
            
            if (rcx_9 != 0)
                sub_140a74f90(rcx_9)
            
            goto label_141bb1256
        
        void var_b8
        
        if (&var_b8 != arg1 + 0x60)
            *(arg1 + 0x60) = 0x101
        
        sub_140aae420(arg2, &var_a8)
        int64_t rcx_8 = var_a8
        
        if (rcx_8 != 0)
            sub_140a74f90(rcx_8)
    else
    label_141bb1256:
        char rax_13 = *(arg1 + 0x61)
        char var_b7_1 = 3
        int64_t* r15_1
        
        if (rax_13 == 0 || *(arg1 + 0x60) == 3)
            r15_1 = arg1 + 0x30
            int32_t var_b0
            void* var_50
            
            if (sub_141b723c0(rax, r15_1, &var_b0, &var_50) == 0)
                rax_13 = *(arg1 + 0x61)
                goto label_141bb12ba
            
            void var_b6
            
            if (&var_b6 != arg1 + 0x60)
                *(arg1 + 0x60) = 0x103
            
            int32_t rdx_4 = var_b0
            int128_t var_80 = zx.o(0)
            sub_140aa10e0(arg2, rdx_4, nullptr, &var_80)
            rbx_2 = var_80:8.q
            goto label_141bb130c
        
        r15_1 = arg1 + 0x30
    label_141bb12ba:
        char var_b5_1 = 4
        
        if (rax_13 != 0 && *(arg1 + 0x60) != 4)
            goto label_141bb133c
        
        int32_t var_ac
        void* var_48
        char rax_14
        int64_t rdx_6
        int512_t zmm1_1
        rax_14, rdx_6, zmm1_1 = sub_141b72520(rax, r15_1, &var_ac, &var_48)
        
        if (rax_14 == 0)
            goto label_141bb133c
        
        void var_b4
        
        if (&var_b4 != arg1 + 0x60)
            *(arg1 + 0x60) = 0x104
        
        zmm1_1.o = var_ac
        int128_t var_70 = zx.o(0)
        sub_140aa1120(arg2, rdx_6, nullptr, &var_70)
        rbx_2 = var_70:8.q
    label_141bb130c:
        
        if (rbx_2 != 0)
            rbx_2[1].d -= 1
            
            if (rbx_2[1].d == 1)
                (**rbx_2)(rbx_2)
                int32_t rdi_1 = *(rbx_2 + 0xc)
                *(rbx_2 + 0xc) -= 1
                
                if (rdi_1 == 1)
                    (*(*rbx_2 + 8))(rbx_2, zx.q(rdi_1))

return arg2
