// 函数: sub_142255900
// 地址: 0x142255900
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

if ((arg1[0x11].b & 4) == 0)
    return 

bool arg_8 = arg3 == 1
uint64_t rax

if (*(arg1 + 0x714) != 1)
label_14225595a:
    int64_t rax_2 = arg1[0x15]
    void* var_b8 = nullptr
    void* rcx_1
    
    if (rax_2 == 0)
        rax = sub_141ee69e0(arg1)
        rcx_1 = var_b8
    
    if (rax_2 != 0 || rax != 0)
        rax = arg1[0x15]
        
        if (rax == 0)
            rax = sub_141ee69e0(arg1)
        
        rcx_1 = *(rax + 0x1f8)
        var_b8 = rcx_1
    
    if (rcx_1 != 0)
        if (arg5 != 0)
        label_1422559fc:
            bool cond:1_1 = (*(arg1 + 0x71c) & 2) != 0
            float zmm1[0x4] = *(arg1 + 0x1e0)
            float var_88 = zmm1[0]
            float temp0_1[0x4] = _mm_shuffle_ps(zmm1, zmm1, 0x55)
            float var_80_1 = _mm_shuffle_ps(zmm1, zmm1, 0xaa)[0]
            float var_84_1 = temp0_1[0]
            int32_t* (* var_b0)(int64_t* arg1, int512_t arg2 @ zmm1)
            uint64_t var_98
            
            if (cond:1_1)
                rax = arg1[0xb6]
                
                if (rax != 0)
                    if (arg4 != 0)
                        int64_t* rdi_1 = ***(rax + 0x40)
                        void* rax_8 = sub_141f66050(arg1, 0)
                        var_b0 = nullptr
                        int64_t var_a8_2 = 0
                        var_98 = 0
                        int64_t var_90_1 = 0
                        sub_141f56900(arg1, &var_b0)
                        sub_14230b740(arg1, &var_98, &var_b0, rdi_1, rax_8)
                        sub_142227b70(&arg1[0x55])
                        uint64_t rcx_12 = var_98
                        
                        if (rcx_12 != 0)
                            sub_140a74f90(rcx_12)
                        
                        int32_t* (* rcx_13)(int64_t* arg1, int512_t arg2 @ zmm1) = var_b0
                        
                        if (rcx_13 != 0)
                            sub_140a74f90(rcx_13)
                    
                    sub_1422214a0(&arg1[0x55], &arg1[0x38], arg3)
            else
                rax = sub_141f64a80(arg1)
                var_98 = rax
                
                if (rax != 0 && arg1[0x86] != 0)
                    int32_t rcx_5 = arg1[0x101].d
                    
                    if (rcx_5 s> 0)
                        int64_t* var_70_1 = arg1
                        int64_t var_50_1 = arg2
                        void* var_48_1 = &arg1[0x38]
                        int32_t var_9c = arg1[sx.q(*(arg1 + 0x494)) * 2 + 0x8b].d
                        int32_t var_a0
                        int32_t* var_78 = &var_a0
                        bool* var_68_1 = &arg_8
                        int32_t* var_60_1 = &var_9c
                        void** var_58_1 = &var_98
                        int64_t* var_40_1 = &var_b8
                        int32_t* var_38_1 = &var_88
                        int32_t** var_a8_1 = &var_78
                        var_a0 = rcx_5
                        var_b0 = j_sub_14223e1e0
                        sub_14226a780(arg1, &var_b0)
        else
            if ((*(arg1 + 0x71b) & 0x20) != 0)
                goto label_1422559ef
            
            if (sub_142216be0(&arg1[0x55]) != 2)
                goto label_1422559fc
            
            rcx_1 = var_b8
        label_1422559ef:
            
            if (sub_142272220(rcx_1, arg1, arg3, arg4).b == 0)
                goto label_1422559fc
else if (arg3 == 1)
    rax = (*(*arg1 + 0x3f0))()
    
    if (rax.b != 0)
        goto label_14225595a
