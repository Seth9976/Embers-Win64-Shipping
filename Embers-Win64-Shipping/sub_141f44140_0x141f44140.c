// 函数: sub_141f44140
// 地址: 0x141f44140
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int32_t r13 = data_143f393d0
sub_140b34200("WorkerThreadTickTime", r13)

if (arg2 != 0)
    if (arg3 != 0 && sub_141e07c90(arg3) != 0)
        sub_141e08380(arg3)
    
    void* rcx_2 = *(arg1 + 0x658)
    
    if (rcx_2 != 0 && sub_141e07c90(rcx_2) != 0 && (*(arg1 + 0x719) & 1) == 0)
        sub_141e08380(*(arg1 + 0x658))
    
    if (arg4 != 0 && arg5[1].d s> 0)
        char arg_10
        float var_70_1 = &arg_10
        void*** (* var_78)() = j_sub_140597fc0
        arg_10 = 0
        int64_t* rax_5 = sub_140a756e0(&var_78, &data_143958018) + 0x10
        int64_t rbx_1 = 0
        int64_t* var_50 = rax_5
        int64_t rcx_5 = *rax_5
        int64_t rcx_6 = rax_5[2]
        char var_38_1 = 0
        int64_t rcx_7 = rax_5[3]
        rax_5[3] = &var_50
        int64_t* rax_6 = var_50
        rax_6[4].d += 1
        int64_t var_68 = 0
        int32_t i_2 = 0
        int64_t* var_58_1 = nullptr
        char rax_7
        
        if (*(arg2 + 0x60) != 0 && arg3 != 0)
            rax_7 = sub_141e07f50(arg3, arg2)
        
        uint64_t* r15_1
        
        if (*(arg2 + 0x60) == 0 || arg3 == 0 || rax_7 == 0)
            r15_1 = arg8
            sub_141f3f6d0(r15_1, arg1 + 0x980)
        else
            r15_1 = arg8
            sub_141e08040(arg3, *(arg1 + 0x71c) u>> 2 & 1, arg2, r15_1, &var_68)
        
        uint32_t zmm1_1[0x8] = sub_141f3a130(arg1, arg6, &var_68, r15_1, arg2, arg7)
        sub_140780b40(arg6, arg2 + 0x1b8)
        
        if (var_58_1 == 0)
            sub_140780b40(arg6, arg2 + 0x1b8)
        else if (sub_140d3e110(&var_58_1[6]) == 0 || var_58_1[9] == 0 || var_58_1[1].d s<= 0
                || i_2 s<= 0)
            sub_140780b40(arg6, arg2 + 0x1b8)
        else
            zmm1_1 = sub_141e451a0(&var_68, zmm1_1)
            
            if (i_2 != 0)
                int64_t r8_2 = 0
                uint64_t i_1 = zx.q(i_2)
                uint64_t i
                
                do
                    int64_t rdx_6 = var_68
                    r8_2 += 0x30
                    rbx_1 += 2
                    int128_t* rcx_18 = zx.q(*(rbx_1 + *var_58_1 - 2)) * 0x30 + *arg6
                    *rcx_18 = *(r8_2 + rdx_6 - 0x30)
                    zmm1_1[0].o = *(r8_2 + rdx_6 - 0x20)
                    rcx_18[1] = zmm1_1[0].o
                    rcx_18[2] = *(r8_2 + rdx_6 - 0x10)
                    i = i_1
                    i_1 -= 1
                while (i != 1)
        
        float zmm4_1[0x4] = *(*(arg2 + 0x1b8) + 0x10)
        void* rax_14 = *arg6
        float temp0_1[0x4] = _mm_shuffle_ps(zmm4_1, zmm4_1, 0x55)
        float zmm3[0x4] = *(rax_14 + 0x10)
        zmm1_1[0].o = zmm3
        zmm1_1[0].o = _mm_shuffle_ps(zmm1_1[0].o, zmm3, 0x55)
        zmm3[0] = zmm3[0] - zmm4_1[0]
        zmm1_1[0] = zmm1_1[0] f- temp0_1[0]
        float temp0_3[0x4] = _mm_shuffle_ps(zmm3, zmm3, 0xaa)
        float temp0_4[0x4] = _mm_shuffle_ps(zmm4_1, zmm4_1, 0xaa)
        temp0_3[0] = temp0_3[0] - temp0_4[0]
        *arg7 = (_mm_unpacklo_ps(zmm3, zmm1_1[0].q)).q
        arg7[1].d = temp0_3[0]
        sub_141f3a7d0(arg1, arg2, arg6, arg5)
        
        if (var_38_1 == 0)
            int64_t* rax_16 = var_50
            char var_38_2 = 1
            rax_16[4].d -= 1
            int64_t* rcx_22 = var_50
            
            if (rcx_6 != rcx_22[2])
                sub_140b16b40(rcx_22, rcx_6)
                rcx_22 = var_50
            
            *rcx_22 = rcx_5
            var_50[3] = rcx_7

return sub_140b38680("WorkerThreadTickTime", r13) __tailcall
