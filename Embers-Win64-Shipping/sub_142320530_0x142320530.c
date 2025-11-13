// 函数: sub_142320530
// 地址: 0x142320530
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void var_148
int64_t rax_1 = __security_cookie ^ &var_148
int32_t* result = data_143f57910

if (*result != 0 && arg1[0x116] != 0 && not(arg2.d f== 0f))
    int128_t zmm6_1 = sub_141f3e8a0(arg1)
    
    if ((*(arg1 + 0x71b) & 2) != 0)
        int64_t* rcx = arg1[0x116]
        
        if (rcx != 0)
            (*(*rcx + 0x70))(rcx)
        
        sub_14230c1e0(arg1)
        int64_t* i = arg1[0x1a]
        int64_t rax_3 = sx.q(arg1[0x1b].d)
        int64_t var_108
        __builtin_memset(&var_108, 0, 0x40)
        
        for (; i != &i[rax_3]; i = &i[1])
            void* rdi_1 = *i
            
            if (rdi_1 != 0)
                void* rax_4 = sub_142591550()
                void* rdx_1 = *(rdi_1 + 0x10)
                int64_t rax_5 = sx.q(*(rax_4 + 0x38))
                
                if (rax_5.d s<= *(rdx_1 + 0x38)
                        && *(*(rdx_1 + 0x30) + (rax_5 << 3)) == rax_4 + 0x30)
                    int64_t* rcx_3 = *(rdi_1 + 0x8b0)
                    
                    if (rcx_3 != 0)
                        (*(*rcx_3 + 0x78))(rcx_3, &var_108, 0)
        
        int64_t* rcx_4 = arg1[0x116]
        (*(*rcx_4 + 0x68))(rcx_4, &var_108)
        int64_t var_d8
        
        if (var_d8 != 0)
            sub_140a74f90(var_d8)
        
        int64_t var_e8
        sub_1405ded70(&var_e8)
        int64_t var_f8
        
        if (var_f8 != 0)
            sub_140a74f90(var_f8)
        
        int64_t rcx_8 = var_108
        
        if (rcx_8 != 0)
            sub_140a74f90(rcx_8)
    
    result = sub_141f4d200(arg1, zmm6_1, zmm6_1)
    
    if (arg1[0x116] != 0)
        void var_b0
        void** rax_9
        int32_t zmm6_2
        rax_9, zmm6_2 = sub_14230ca40(&var_b0, nullptr, 2)
        void* rcx_11 = *rax_9
        *(rcx_11 + 0x18) = zmm6_2
        *(rcx_11 + 0x10) = arg1
        void* rcx_12 = *rax_9
        int32_t r8_1 = rax_9[2].d
        int64_t* rdx_4 = rax_9[1]
        int64_t* rdi_2 = *(rcx_12 + 0x28)
        int64_t* rbx_1 = rdi_2
        int64_t* var_118 = rbx_1
        
        if (rdi_2 != 0)
            rdi_2[9].d += 1
            rbx_1 = var_118
        
        sub_14231e260(rcx_12, rdx_4, r8_1, 1)
        
        if (&arg1[0x11b] != &var_118)
            int64_t* rcx_13 = arg1[0x11b]
            arg1[0x11b] = rbx_1
            
            if (rcx_13 != 0)
                rcx_13[9].d -= 1
                
                if (rcx_13[9].d == 1)
                    sub_140a2f6e0(rcx_13)
        else if (rdi_2 != 0)
            rdi_2[9].d -= 1
            
            if (rdi_2[9].d == 1)
                sub_140a2f6e0(var_118)
        
        void* rax_12 = arg1[0x11b]
        void** var_60_1 = nullptr
        int32_t var_54_1 = 4
        int32_t i_3 = 1
        void* var_80 = rax_12
        
        if (rax_12 != 0)
            *(rax_12 + 0x48) += 1
        
        void var_98
        int64_t* rax_13 = sub_14230c8c0(&var_98, &var_80, 2)
        void* rbx_2 = *rax_13
        int64_t var_c8
        sub_140d3a3a0(&var_c8, arg1)
        *(rbx_2 + 0x10) = var_c8
        void* rcx_17 = *rax_13
        int32_t r8_2 = rax_13[2].d
        int64_t* rdx_7 = rax_13[1]
        int64_t* rbx_3 = *(rcx_17 + 0x20)
        int64_t* var_120_1 = rbx_3
        int32_t* rdi_4 = &rbx_3[9]
        
        if (rbx_3 != 0)
            *rdi_4 += 1
            rbx_3 = var_120_1
        
        sub_141f4a6e0(rcx_17, rdx_7, r8_2, 1)
        int64_t* var_c0
        *(*sub_1423c0d30(arg3, &var_c0) + 0x4c) = 2
        int64_t* rcx_20 = var_c0
        
        if (rcx_20 != 0)
            rcx_20[9].d -= 1
            
            if (rcx_20[9].d == 1)
                sub_140a2f6e0(rcx_20)
            
            rbx_3 = var_120_1
        
        if (rbx_3 != 0)
            rbx_3[9].d += 1
            rbx_3 = var_120_1
        
        int64_t* var_b8
        int32_t* result_1 = *sub_1423c0d30(arg3, &var_b8) + 0x18
        int64_t r14_3 = sx.q(result_1[0xa])
        int32_t rax_17 = (r14_3 + 1).d
        result_1[0xa] = rax_17
        
        if (rax_17 s> result_1[0xb])
            sub_14083a490(result_1, r14_3.d)
        
        result = *(result_1 + 0x20)
        
        if (result != 0)
            result_1 = result
        
        void* rcx_23 = &result_1[r14_3 * 2]
        
        if (rcx_23 == 0)
            goto label_14232085c
        
        *rcx_23 = rbx_3
        
        if (rbx_3 != 0)
            *rdi_4 += 1
            rbx_3 = var_120_1
        label_14232085c:
            
            if (rbx_3 != 0)
                result = zx.q(*rdi_4)
                *rdi_4 -= 1
                rbx_3 = var_120_1
                
                if (result.d == 1)
                    result = sub_140a2f6e0(rbx_3)
        
        int64_t* rcx_25 = var_b8
        
        if (rcx_25 != 0)
            result = zx.q(rcx_25[9].d)
            rcx_25[9].d -= 1
            
            if (result.d == 1)
                result = sub_140a2f6e0(rcx_25)
            
            rbx_3 = var_120_1
        
        if (rbx_3 != 0)
            result = zx.q(*rdi_4)
            *rdi_4 -= 1
            
            if (result.d == 1)
                result = sub_140a2f6e0(var_120_1)
        
        void** rcx_28 = var_60_1
        void** rbx_4 = &var_80
        int32_t i_2 = i_3
        
        if (rcx_28 != 0)
            rbx_4 = rcx_28
        
        if (i_2 != 0)
            int32_t i_1
            
            do
                int64_t* rcx_27 = *rbx_4
                
                if (rcx_27 != 0)
                    result = zx.q(rcx_27[9].d)
                    rcx_27[9].d -= 1
                    
                    if (result.d == 1)
                        result = sub_140a2f6e0(rcx_27)
                
                rbx_4 = &rbx_4[1]
                i_1 = i_2
                i_2 -= 1
            while (i_1 != 1)
            rcx_28 = var_60_1
        
        if (rcx_28 != 0)
            result = sub_140a74f90(rcx_28)

__security_check_cookie(rax_1 ^ &var_148)
return result
