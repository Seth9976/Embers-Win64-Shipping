// 函数: sub_140cfc9f0
// 地址: 0x140cfc9f0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void var_118
int64_t rax_1 = __security_cookie ^ &var_118
int32_t r10 = arg6
void* rbx = arg1
int64_t result

if (not(test_bit(r10, 0x1c)))
    int32_t r8 = *(arg1 + 0xa0)
    void* rdx = *(arg1 + 0x80)
    int32_t rcx_1 = arg3[1].d
    int32_t rcx_2
    
    if ((not.b(r8.b) & 1) != 0)
        rcx_2 = rcx_1 - *(arg3 + 0x34)
    else
        rcx_2 = rcx_1 - *(arg3 + 0x24)
    
    if (rcx_2 != 0)
        uint8_t r9_1 = (r10 u>> 7).b & 1
        void* var_b8_1 = nullptr
        
        if (rdx != 0 && ((zx.q(*(*(rdx + 8) + 0x10)) u>> 0x14).b & 1) != 0 && r9_1 == 0)
            void* rax_6 = sub_140a82f30(sx.q(*(rbx + 0x94)), 0)
            int64_t* rcx_7 = *(rbx + 0x80)
            void* r9_3 = sx.q(*(rbx + 0x88)) + rax_6
            var_b8_1 = rax_6
            
            if (not(test_bit(zx.q(rcx_7[8].d), 9)))
                (*(*rcx_7 + 0xf0))(rcx_7, r9_3)
            else
                memset(r9_3, 0, sx.q(*(rcx_7 + 0x3c) * rcx_7[7].d))
            
            r10 = arg6
        
        r8.b = not.b(r8.b)
        int128_t zmm0 = *(rbx + 0x88)
        r8.b &= 1
        char rcx_9 = (*(rbx + 0xa0)).b
        int64_t zmm1 = *(rbx + 0x98)
        int64_t var_80 = *(rbx + 0x78)
        result = *(rbx + 0x80)
        int64_t result_1 = result
        int128_t var_68_1 = zmm0
        void* r13_1 = *arg3
        int32_t var_d4_2 = r8
        
        if (r8.b == 0 && (r13_1.b & 1) != 0)
            r13_1 = (r13_1 s>> 1) + arg3
        
        int32_t rdx_2 = arg3[1].d
        int64_t r12
        r12.b = 1
        int32_t var_c8
        int64_t* var_98
        
        if (not(test_bit(r10, 0x19)))
            int32_t rdi_4 = 0
            int32_t i
            
            if (r8.b != 0)
                i = rdx_2 - *(arg3 + 0x34)
            else
                i = rdx_2 - *(arg3 + 0x24)
            
            int32_t i_3 = i
            
            if (i != 0)
                int32_t r14_2 = 1
                
                do
                    void* rcx_28
                    
                    if (r8.b != 0)
                        if (rdi_4 s>= 0 && rdi_4 s< arg3[5].d)
                            void* rax_39 = arg3[4]
                            rcx_28 = &arg3[2]
                            
                            if (rax_39 != 0)
                                rcx_28 = rax_39
                            
                        label_140cfcecd:
                            int32_t rax_40 = rdi_4
                            
                            if (rdi_4 s< 0)
                                rax_40 = rdi_4 + 0x1f
                            
                            if ((*(rcx_28 + (sx.q(rax_40 s>> 5) << 2)) & r14_2) != 0)
                                int32_t rdx_16 = arg2[1].d
                                int32_t rbx_2 = rdx_16 - 1
                                int16_t rdx_17
                                int32_t rax_43
                                
                                if (r12.b == 0)
                                    rax_43.b = rdx_16 s<= 0
                                    
                                    if (rdx_16 s<= 0)
                                        rbx_2 = 0
                                    
                                    int32_t rax_47 = rax_43 + 1 + rdx_16
                                    arg2[1].d = rax_47
                                    
                                    if (rax_47 s> *(arg2 + 0xc))
                                        sub_140594770(arg2)
                                    
                                    rdx_17 = 0x2c
                                else
                                    rax_43.b = rdx_16 s<= 0
                                    
                                    if (rdx_16 s<= 0)
                                        rbx_2 = 0
                                    
                                    int32_t rax_45 = rax_43 + 1 + rdx_16
                                    arg2[1].d = rax_45
                                    
                                    if (rax_45 s> *(arg2 + 0xc))
                                        sub_140594770(arg2)
                                    
                                    rdx_17 = 0x28
                                    r12.b = 0
                                int64_t rcx_32 = sx.q(rbx_2)
                                *(*arg2 + (rcx_32 << 1)) = rdx_17
                                *(*arg2 + (rcx_32 << 1) + 2) = 0
                                sub_140a20ba0(arg2, &data_142dc30a4, 1)
                                int32_t rbx_4 = arg6 | 2
                                int64_t* rcx_34 = *(arg1 + 0x78)
                                (*(*rcx_34 + 0xa0))(rcx_34, arg2, r13_1, 0, arg5, rbx_4, arg7)
                                sub_140a20ba0(arg2, &data_142d8adc4, 2)
                                void* rdx_21 = var_b8_1
                                
                                if (rdx_21 == 0)
                                    if (arg4 == 0)
                                        rdx_21 = nullptr
                                    else
                                        var_c8 = 0
                                        void* var_90_2 = r13_1
                                        var_98 = &var_80
                                        int32_t* var_88_2 = &var_c8
                                        int32_t rax_52 = sub_140ceef40(&var_80, &var_98)
                                        
                                        if (rax_52 s< 0)
                                            rdx_21 = nullptr
                                        else if ((not.b(rcx_9) & 1) != 0)
                                            if (arg4[1].d == *(arg4 + 0x34))
                                                rdx_21 = nullptr
                                            else
                                                rdx_21 = sx.q(zmm1:4.d * rax_52) + *arg4
                                        else if (arg4[1].d == *(arg4 + 0x24))
                                            rdx_21 = nullptr
                                        else
                                            void* rcx_39 = *arg4
                                            
                                            if ((rcx_39.b & 1) != 0)
                                                rcx_39 = (rcx_39 s>> 1) + arg4
                                            
                                            rdx_21 = sx.q(zmm1:4.d * rax_52) + rcx_39
                                
                                void* r9_6 = r13_1
                                
                                if (r9_1 == 0)
                                    r9_6 = rdx_21
                                
                                int64_t* rcx_42 = *(arg1 + 0x80)
                                int64_t rax_59 = sx.q(*(arg1 + 0x88))
                                (*(*rcx_42 + 0xa0))(rcx_42, arg2, rax_59 + r13_1, r9_6 + rax_59, 
                                    arg5, rbx_4, arg7)
                                sub_140a20ba0(arg2, &data_142da76f4, 1)
                                rbx = arg1
                                i = i_3 - 1
                                r8 = var_d4_2
                                i_3 = i
                    else if (rdi_4 s>= 0 && rdi_4 s< arg3[3].d)
                        rcx_28 = arg3[2]
                        
                        if ((rcx_28.b & 1) != 0)
                            rcx_28 = (rcx_28 s>> 1) + &arg3[2]
                        
                        goto label_140cfcecd
                    rdi_4 += 1
                    r13_1 += sx.q(*(rbx + 0x94))
                    r14_2 = rol.d(r14_2, 1)
                while (i != 0)
            
            result = sub_140a20ba0(arg2, &data_142da76f4, 1)
        else
            int32_t rbx_1 = 0
            int32_t i_1
            
            if (r8.b != 0)
                i_1 = rdx_2 - *(arg3 + 0x34)
            else
                i_1 = rdx_2 - *(arg3 + 0x24)
            
            int32_t i_2 = i_1
            
            if (i_1 != 0)
                int32_t r14_1 = 1
                
                do
                    void* rcx_10
                    
                    if (r8.b != 0)
                        if (rbx_1 s>= 0 && rbx_1 s< arg3[5].d)
                            void* rax_13 = arg3[4]
                            rcx_10 = &arg3[2]
                            
                            if (rax_13 != 0)
                                rcx_10 = rax_13
                            
                        label_140cfcc1d:
                            int32_t rax_14 = rbx_1
                            
                            if (rbx_1 s< 0)
                                rax_14 = rbx_1 + 0x1f
                            
                            if ((*(rcx_10 + (sx.q(rax_14 s>> 5) << 2)) & r14_1) != 0)
                                if (r12.b == 0)
                                    int32_t rdx_3 = arg2[1].d
                                    int32_t rax_17
                                    rax_17.b = rdx_3 s<= 0
                                    int32_t rdi_1 = rdx_3 - 1
                                    
                                    if (rdx_3 s<= 0)
                                        rdi_1 = 0
                                    
                                    int32_t rax_19 = rax_17 + 1 + rdx_3
                                    arg2[1].d = rax_19
                                    
                                    if (rax_19 s> *(arg2 + 0xc))
                                        sub_140594770(arg2)
                                    
                                    int64_t rcx_13 = sx.q(rdi_1)
                                    *(*arg2 + (rcx_13 << 1)) = 0xa
                                    *(*arg2 + (rcx_13 << 1) + 2) = 0
                                else
                                    r12.b = 0
                                
                                sub_140a20ba0(arg2, &(*U"{}[\nt")[2], 1)
                                int32_t rdi_3 = arg6 | 2
                                int64_t* rcx_15 = *(arg1 + 0x78)
                                (*(*rcx_15 + 0xa0))(rcx_15, arg2, r13_1, 0, arg5, rdi_3, arg7)
                                sub_140a20ba0(arg2, &data_142e70f58, 2)
                                void* rdx_7 = var_b8_1
                                
                                if (rdx_7 == 0)
                                    if (arg4 == rdx_7)
                                        rdx_7 = nullptr
                                    else
                                        var_c8 = rdx_7.d
                                        var_98 = &var_80
                                        void* var_90_1 = r13_1
                                        int32_t* var_88_1 = &var_c8
                                        int32_t rax_24 = sub_140ceef40(&var_80, &var_98)
                                        
                                        if (rax_24 s< 0)
                                            rdx_7 = nullptr
                                        else if ((not.b(rcx_9) & 1) != 0)
                                            if (arg4[1].d == *(arg4 + 0x34))
                                                rdx_7 = nullptr
                                            else
                                                rdx_7 = sx.q(zmm1:4.d * rax_24) + *arg4
                                        else if (arg4[1].d == *(arg4 + 0x24))
                                            rdx_7 = nullptr
                                        else
                                            void* rcx_20 = *arg4
                                            
                                            if ((rcx_20.b & 1) != 0)
                                                rcx_20 = (rcx_20 s>> 1) + arg4
                                            
                                            rdx_7 = sx.q(zmm1:4.d * rax_24) + rcx_20
                                
                                void* r9_4 = r13_1
                                
                                if (r9_1 == 0)
                                    r9_4 = rdx_7
                                
                                int64_t* rcx_23 = *(arg1 + 0x80)
                                int64_t rax_31 = sx.q(*(arg1 + 0x88))
                                (*(*rcx_23 + 0xa0))(rcx_23, arg2, rax_31 + r13_1, r9_4 + rax_31, 
                                    arg5, rdi_3, arg7)
                                r8 = var_d4_2
                                i_1 = i_2 - 1
                                i_2 = i_1
                    else if (rbx_1 s>= 0 && rbx_1 s< arg3[3].d)
                        rcx_10 = arg3[2]
                        
                        if ((rcx_10.b & 1) != 0)
                            rcx_10 = (rcx_10 s>> 1) + &arg3[2]
                        
                        goto label_140cfcc1d
                    rbx_1 += 1
                    r14_1 = rol.d(r14_1, 1)
                    result = sx.q(*(arg1 + 0x94))
                    r13_1 += result
                while (i_1 != 0)
            
            rbx = arg1
        
        if (var_b8_1 != 0)
            int64_t* rcx_24 = *(rbx + 0x80)
            
            if ((not.b((rcx_24[8] u>> 0x24).b) & 1) != 0)
                (*(*rcx_24 + 0xe8))(rcx_24, sx.q(*(rbx + 0x88)) + var_b8_1, var_b8_1)
            
            result = sub_140a74f90(var_b8_1)
    else
        result = sub_140a20ba0(arg2, &data_142e89958, rcx_2 + 2)
else
    result = sub_140a20ba0(arg2, &data_142e14130, 2)

__security_check_cookie(rax_1 ^ &var_118)
return result
