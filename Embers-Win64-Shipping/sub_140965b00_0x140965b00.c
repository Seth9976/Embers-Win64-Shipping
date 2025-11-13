// 函数: sub_140965b00
// 地址: 0x140965b00
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t* var_140 = arg8
char var_148 = arg7
uint64_t result

if (sub_142169ef0(arg1, arg2, arg3, arg4, arg5, arg6).b != 0)
    result = (*(*arg1 + 0x378))(arg1)
    uint64_t result_1 = result
    
    if (result != 0)
        int32_t rbx_1
        int32_t r13_1
        int32_t r15_1
        
        if (arg2 == 0)
            rbx_1 = *(arg4 + 0x20)
            r15_1 = *(arg1 + 0x75c)
            r13_1 = arg1[0xec].d
        else
            int64_t rdx = *arg1
            int32_t rax_2 = (*(rdx + 0x440))(arg1, rdx)
            r15_1 = *(arg1 + 0x764)
            rbx_1 = rax_2
            r13_1 = arg1[0xed].d
        
        int32_t var_124_1 = r13_1
        int32_t var_110_1 = r15_1
        int32_t var_128_1 = rbx_1
        void* var_f8
        (*(*result_1 + 0xd8))(result_1, &var_f8)
        int32_t i_3
        int64_t* r14
        
        if (i_3 != 0)
            void* rcx_5 = var_f8
            void* rax_9 = (sx.q(i_3) << 4) + rcx_5
            void* var_d8_1 = rcx_5
            void* var_100 = rax_9
            int32_t var_138
            int64_t* var_130
            int64_t* var_120
            int64_t var_118
            int64_t var_e8
            int64_t* var_e0
            
            if (rcx_5 != rax_9)
                while (true)
                    var_e8 = *rcx_5
                    int64_t* rax_11 = *(rcx_5 + 8)
                    var_e0 = rax_11
                    
                    if (rax_11 != 0)
                        rax_11[1].d += 1
                    
                    var_130 = arg8
                    var_138 = r13_1
                    var_140.d = r15_1
                    (*(*arg1 + 0x450))(arg1, &var_120, &var_e8, zx.q(rbx_1), arg7, var_140, 
                        var_138, var_130, var_128_1)
                    int64_t r15_2 = var_118
                    
                    if (r15_2 == 0)
                        if (*arg8 != &data_142d40450)
                            int32_t rdx_6 = 0
                            arg8[1].d = 0
                            
                            if (*(arg8 + 0xc) != 0)
                                sub_1405947f0(arg8, 0)
                                rdx_6 = arg8[1].d
                                r15_2 = var_118
                            
                            arg8[1].d = rdx_6
                            
                            if (rdx_6 s> *(arg8 + 0xc))
                                sub_140594770(arg8)
                                r15_2 = var_118
                        
                        int64_t* rcx_14 = var_120
                        
                        if (rcx_14 != 0 && r15_2 != 0)
                            (*(*rcx_14 + 0x38))(rcx_14, r15_2)
                    else
                        int64_t r12_1 = sx.q(arg1[0xf4].d)
                        int64_t* rbx_2 = var_120
                        var_118 = 0
                        int32_t rax_13 = (r12_1 + 1).d
                        arg1[0xf4].d = rax_13
                        
                        if (rax_13 s> *(arg1 + 0x7a4))
                            sub_1405a4f90(&arg1[0xf3])
                        
                        int64_t* r12_3 = (r12_1 << 4) + arg1[0xf3]
                        *r12_3 = r15_2
                        void*** rax_14 = j_sub_140a82f30(0x20)
                        
                        if (rax_14 == 0)
                            rax_14 = nullptr
                        else
                            rax_14[2] = rbx_2
                            *rax_14 = &data_142e345a8
                            rax_14[1].d = 1
                            *(rax_14 + 0xc) = 1
                            rax_14[3] = r15_2
                        
                        r12_3[1] = rax_14
                        int64_t* rcx_10 = var_120
                        
                        if (arg2 == 0)
                            if (rcx_10 != 0 && var_118 != 0)
                                (*(*rcx_10 + 0x38))()
                            
                            result_1 = result
                            break
                        
                        if (rcx_10 != 0 && var_118 != 0)
                            (*(*rcx_10 + 0x38))()
                        
                        rbx_1 = var_128_1
                        r13_1 = var_124_1
                    
                    rcx_5 = var_d8_1 + 0x10
                    var_d8_1 = rcx_5
                    
                    if (rcx_5 == var_100)
                        result_1 = result
                        break
                    
                    r15_1 = var_110_1
            
            if (arg8[1].d s> 1 || arg1[0xf4].d == 0)
                sub_140976730(&arg1[0xf3], 0)
                r14.b = 0
            else
                if (arg1[0xea] == 0)
                    sub_140978500(arg1, arg1[0xf3])
                else if (arg1[0xd6] == 0)
                    int64_t* rax_19 = (*(*result_1 + 0x90))(result_1, &var_e8)
                    int64_t* rcx_17 = rax_19[1]
                    
                    if (rcx_17 != 0)
                        rcx_17[1].d += 1
                    
                    if (&arg1[0xd6] == &var_120)
                    label_140965efe:
                        
                        if (rcx_17 != 0)
                            rcx_17[1].d -= 1
                            
                            if (rcx_17[1].d == 1)
                                (**rcx_17)(rcx_17)
                                int32_t temp5_1 = *(rcx_17 + 0xc)
                                *(rcx_17 + 0xc) -= 1
                                
                                if (temp5_1 == 1)
                                    (*(*rcx_17 + 8))(rcx_17, 1)
                    else
                        arg1[0xd6] = *rax_19
                        int64_t* rbx_3 = arg1[0xd7]
                        
                        if (rcx_17 == rbx_3)
                            goto label_140965efe
                        
                        arg1[0xd7] = rcx_17
                        
                        if (rbx_3 != 0)
                            rbx_3[1].d -= 1
                            
                            if (rbx_3[1].d == 1)
                                (**rbx_3)(rbx_3)
                                int32_t temp8_1 = *(rbx_3 + 0xc)
                                *(rbx_3 + 0xc) -= 1
                                
                                if (temp8_1 == 1)
                                    (*(*rbx_3 + 8))(rbx_3, 1)
                    
                    if (var_e0 != 0)
                        var_e0[1].d -= 1
                        
                        if (var_e0[1].d == 1)
                            (**var_e0)(var_e0)
                            int32_t temp7_1 = *(var_e0 + 0xc)
                            *(var_e0 + 0xc) -= 1
                            
                            if (temp7_1 == 1)
                                (*(*var_e0 + 8))(var_e0, 1)
                    
                    int64_t* rcx_23 = arg1[0xea]
                    (*(*rcx_23 + 0x88))(rcx_23, arg1[0xd6])
                
                int64_t rbx_5 = data_143ced118
                int64_t rcx_24
                
                if (data_143de5480 == 0)
                    rcx_24 = 0
                else
                    rcx_24.b = GetCurrentThreadId() != data_143de5470
                
                if (*(rbx_5 + (rcx_24 << 2)) != 0 && (*(*result_1 + 0xf8))(result_1) != 0)
                    void*** rax_29 = j_sub_140a82f30(0x40)
                    void*** rcx_27
                    
                    if (rax_29 == 0)
                        rcx_27 = nullptr
                    else
                        rcx_27 = sub_140949080(rax_29, arg1)
                    
                    if (&arg1[0xf0] != &var_100)
                        void*** r8_1 = arg1[0xf0]
                        arg1[0xf0] = rcx_27
                        
                        if (r8_1 != 0)
                            (*r8_1)[5](r8_1, 1)
                    else if (rcx_27 != 0)
                        (*rcx_27)[5](rcx_27, 1)
                    
                    int64_t* rax_32 = sub_140b63b70(&arg1[0x32], &var_e8)
                    int16_t* const r8_2
                    
                    if (rax_32[1].d == 0)
                        r8_2 = &data_142d40450
                    else
                        r8_2 = *rax_32
                    
                    sub_140a2e390(&var_120, u"IpNetDriver Receive Thread", r8_2)
                    int64_t* rdx_15 = &data_142d40450
                    
                    if (var_118.d != 0)
                        rdx_15 = var_120
                    
                    var_140.b = 0
                    var_148.q = -1
                    void*** rax_33 = sub_140a6e140(arg1[0xf0], rdx_15, 0, 0, -1, 0)
                    int64_t* rcx_31 = arg1[0xf1]
                    
                    if (rcx_31 != rax_33)
                        arg1[0xf1] = rax_33
                        
                        if (rcx_31 != 0)
                            (*(*rcx_31 + 0x20))(rcx_31, 1)
                    
                    int64_t* rcx_32 = var_120
                    
                    if (rcx_32 != 0)
                        sub_140a74f90(rcx_32)
                    
                    int64_t rcx_33 = var_e8
                    
                    if (rcx_33 != 0)
                        sub_140a74f90(rcx_33)
                
                int64_t rbx_7 = data_143ced160
                int64_t rcx_34
                
                if (data_143de5480 == 0)
                    rcx_34 = 0
                else
                    rcx_34.b = GetCurrentThreadId() != data_143de5470
                
                int32_t rdi_2 = *(rbx_7 + (rcx_34 << 2))
                int64_t rbx_8 = data_143ced118
                int64_t rcx_35
                
                if (data_143de5480 == 0)
                    rcx_35 = 0
                else
                    rcx_35.b = GetCurrentThreadId() != data_143de5470
                
                if (rdi_2 != 0 && *(rbx_8 + (rcx_35 << 2)) == 0)
                    char rax_38
                    int64_t rdx_16
                    rax_38, rdx_16 = (*(*result_1 + 0xf0))(result_1)
                    
                    if (rax_38 != 0)
                        int64_t rbx_9 = data_143ced190
                        int64_t rcx_37
                        
                        if (data_143de5480 == 0)
                            rcx_37 = 0
                        else
                            uint32_t rax_39
                            rax_39, rdx_16 = GetCurrentThreadId()
                            rcx_37.b = rax_39 != data_143de5470
                        
                        int32_t r15_4 = *(rbx_9 + (rcx_37 << 2))
                        
                        if (r15_4 != 0)
                            int64_t* i = arg1[0xf3]
                            
                            for (void* rdi_5 = &i[sx.q(arg1[0xf4].d) * 2]; i != rdi_5; i = &i[2])
                                int64_t* rcx_38 = *i
                                rdx_16.b = 1
                                (*(*rcx_38 + 0x110))(rcx_38, rdx_16)
                        
                        int64_t rdi_6 = data_143ced178
                        int32_t rbx_10
                        rbx_10.b = r15_4 != 0
                        int64_t rcx_39
                        
                        if (data_143de5480 == 0)
                            rcx_39 = 0
                        else
                            rcx_39.b = GetCurrentThreadId() != data_143de5470
                        
                        int32_t r8_3 = *(rdi_6 + (rcx_39 << 2))
                        var_148.d = rbx_10
                        
                        if (r8_3 s<= 0x20)
                            r8_3 = 0x20
                        
                        int64_t* rax_43 = (*(*result_1 + 0xa0))(result_1, &var_100, r8_3, 0x400, 
                            var_148, var_140, var_138, var_130, var_128_1)
                        
                        if (&arg1[0xf2] != rax_43)
                            int64_t* rcx_41 = arg1[0xf2]
                            arg1[0xf2] = *rax_43
                            *rax_43 = 0
                            
                            if (rcx_41 != 0)
                                (**rcx_41)(rcx_41, 1)
                        
                        void* rcx_42 = var_100
                        
                        if (rcx_42 != 0)
                            (**rcx_42)(rcx_42, 1)
                        
                        void** var_c8
                        sub_140b4c2a0(&var_c8)
                        int64_t* rcx_44 = arg1[0xf2]
                        char var_9e
                        char var_9e_1 = var_9e | 0x80
                        char var_9d
                        char var_9d_1 = var_9d & 0xfd
                        var_c8 = &data_142e2a750
                        int64_t var_38_1 = 0
                        int64_t var_30_1 = 0
                        (*(*rcx_44 + 0x10))(rcx_44, &var_c8)
                        sub_140b4cb40(&var_c8)
                
                r14.b = 1
        else
            if (*arg8 != No binding addresses could be found or grabbed for this platform! Sockets could")
                int32_t rsi_1 = 0
                arg8[1].d = 0
                
                if (*(arg8 + 0xc) != 0x60)
                    sub_1405947f0(arg8, 0x60)
                    rsi_1 = arg8[1].d
                
                arg8[1].d = rsi_1 + 0x60
                
                if (rsi_1 + 0x60 s> *(arg8 + 0xc))
                    sub_140594770(arg8)
                
                int64_t rax_5 = *arg8
                __builtin_memcpy(rax_5, No binding addresses could be found or grabbed for this ", 
                    0x70)
                *(rax_5 + 0x70) = (*No binding addresses could be found or grabbed for this platform! Sockets could")
                    [0x38].o
                __builtin_memcpy(rax_5 + 0x80, u"! Sockets could not be created!", 0x40)
            
            r14.b = 0
        
        int32_t i_2 = i_3
        
        if (i_2 != 0)
            int64_t* rdi_7 = var_f8 + 8
            int32_t i_1
            
            do
                int64_t* rbx_11 = *rdi_7
                
                if (rbx_11 != 0)
                    rbx_11[1].d -= 1
                    
                    if (rbx_11[1].d == 1)
                        (**rbx_11)(rbx_11)
                        int32_t temp2_1 = *(rbx_11 + 0xc)
                        *(rbx_11 + 0xc) -= 1
                        
                        if (temp2_1 == 1)
                            (*(*rbx_11 + 8))(rbx_11, 1)
                
                rdi_7 = &rdi_7[2]
                i_1 = i_2
                i_2 -= 1
            while (i_1 != 1)
        
        void* rcx_49 = var_f8
        
        if (rcx_49 != 0)
            sub_140a74f90(rcx_49)
        
        return zx.q(r14.b)

result.b = 0
return result
