// 函数: sub_142171a20
// 地址: 0x142171a20
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void* r12 = arg1
int32_t arg_20 = 0
uint64_t result = (*(*arg2 + 0x168))(arg2, &arg_20)
int32_t r13 = 0

if (arg_20 s> 0)
    do
        int64_t rax_1 = *arg2
        int32_t arg_18 = 0
        int32_t var_e0 = 0
        (*(rax_1 + 0x168))(arg2, &arg_18)
        (*(*arg2 + 0x168))(arg2, &var_e0)
        int32_t arg_10
        int64_t* rsi_1
        
        if (var_e0 == 0)
            void* r9_4 = *(r12 + 0x310)
            
            if (*(r9_4 + 0x250) == *(r9_4 + 0x27c))
            labelid_67:
                rsi_1 = nullptr
            else
                void* r8_12 = r9_4 + 0x280
                void* rcx_25 = *(r8_12 + 8)
                int64_t r10_2 = sx.q(arg_18)
                
                if (rcx_25 != 0)
                    r8_12 = rcx_25
                
                int32_t rax_25 = *(r8_12 + (((sx.q(*(r9_4 + 0x290)) - 1) & r10_2) << 2))
                
                if (rax_25 == 0xffffffff)
                label_142171e57:
                    rsi_1 = nullptr
                else
                    int64_t r8_13 = *(r9_4 + 0x248)
                    int64_t rdx_24
                    
                    while (true)
                        rdx_24 = sx.q(rax_25)
                        int64_t rcx_26 = rdx_24 * 3
                        
                        if (*(r8_13 + (rcx_26 << 3)) == r10_2.d)
                            break
                        
                        rax_25 = *(r8_13 + (rcx_26 << 3) + 0x10)
                        
                        if (rax_25 == 0xffffffff)
                            goto label_142171e57_2
                    
                    if (rax_25 == 0xffffffff)
                    label_142171e57_1:
                        rsi_1 = nullptr
                    else
                        void* rsi_2 = r8_13 + rdx_24 * 0x18
                        
                        if (rsi_2 == 0 || rsi_2 == -8)
                        label_142171e57_2:
                            rsi_1 = nullptr
                        else
                            rsi_1 = *(rsi_2 + 8)
        else
            int64_t var_d8 = 0
            int32_t var_d0_1 = 0
            arg_10 = 0
            sub_140a1d9d0(arg2, &var_d8, arg4)
            (*(*arg2 + 0x168))(arg2, &arg_10)
            int64_t* rcx_5 = data_143f5b298
            int64_t r9_1
            r9_1.b = 1
            int32_t var_108
            int64_t var_100
            (*(*rcx_5 + 0x400))(rcx_5, *(*(r12 + 0x130) + 0x58), &var_d8, r9_1, var_108, var_100)
            void* rbx_1 = *(r12 + 0x310)
            int32_t var_c8
            sub_140926e00(rbx_1 + 0x1a8, &var_c8, &var_d8)
            int64_t rax_5 = sx.q(var_c8)
            void* rbx_2
            
            if (rax_5.d != 0xffffffff)
                rbx_2 = *(rbx_1 + 0x1a8) + rax_5 * 0x28
            
            int64_t* rbx_3
            
            if (rax_5.d == 0xffffffff || rbx_2 == 0)
                int128_t var_88_1 = zx.o(0)
                rbx_3 = nullptr
                rsi_1 = nullptr
            label_142171b61:
                
                if (rbx_3 != 0)
                    rbx_3[1].d -= 1
                    
                    if (rbx_3[1].d == 1)
                        (**rbx_3)(rbx_3)
                        int32_t temp1_1 = *(rbx_3 + 0xc)
                        *(rbx_3 + 0xc) -= 1
                        
                        if (temp1_1 == 1)
                            (*(*rbx_3 + 8))(rbx_3, 1)
            else
                rsi_1 = *(rbx_2 + 0x10)
                rbx_3 = *(rbx_2 + 0x18)
                
                if (rbx_3 != 0)
                    rbx_3[1].d += 1
                    goto label_142171b61
            
            if (rsi_1 == 0)
                int64_t* rax_9 = j_sub_140a82f30(zx.q((&rsi_1[6]).d))
                int64_t* rbx_4 = rax_9
                
                if (rax_9 == 0)
                    rbx_4 = nullptr
                else
                    *rax_9 = 0
                    rax_9[1] = rsi_1
                    rax_9[2].d = 0
                    rax_9[3] = 0
                    rax_9[4] = rsi_1
                    rax_9[5].b = 1
                
                int64_t* var_b8 = rbx_4
                void*** rax_10 = j_sub_140a82f30(0x18)
                
                if (rax_10 == 0)
                    rax_10 = nullptr
                else
                    rax_10[1].d = 1
                    *(rax_10 + 0xc) = 1
                    *rax_10 = &data_143214be8
                    rax_10[2] = rbx_4
                
                rsi_1 = var_b8
                
                if (rsi_1 != &var_d8)
                    int64_t r14_1 = var_d8
                    int32_t r8_4 = *(rsi_1 + 0xc)
                    rsi_1[1].d = var_d0_1
                    
                    if (var_d0_1 != 0 || r8_4 != 0)
                        sub_1405a4c70(rsi_1, var_d0_1, r8_4)
                        memcpy(*rsi_1, r14_1, var_d0_1 * 2)
                    else
                        *(rsi_1 + 0xc) = 0
                
                rsi_1[2].d = arg_18
                uint64_t r14_2 = sx.q(rsi_1[4].d)
                int64_t rbx_6 = sx.q(arg_10)
                
                if (rbx_6.d s> r14_2.d)
                    int32_t i_1 = rbx_6.d - r14_2.d
                    int32_t rax_12 = r14_2.d + i_1
                    rsi_1[4].d = rax_12
                    
                    if (rax_12 s> *(rsi_1 + 0x24))
                        sub_1405c4d20(&rsi_1[3])
                    
                    int64_t* rax_13 = rsi_1[3] + r14_2 * 0x14
                    
                    if (i_1 != 0)
                        int32_t i
                        
                        do
                            *rax_13 = 0
                            rax_13[1] = 0
                            rax_13[2].w = 0x100
                            *(rax_13 + 0x12) = 0
                            rax_13 += 0x14
                            i = i_1
                            i_1 -= 1
                        while (i != 1)
                else if (rbx_6.d s< r14_2.d)
                    int32_t r12_1 = r14_2.d
                    int32_t r12_2 = r12_1 - rbx_6.d
                    
                    if (r12_1 != rbx_6.d)
                        int32_t rax_15 = r14_2.d - r12_2
                        
                        if (rax_15 != rbx_6.d)
                            int64_t r10_1 = rsi_1[3]
                            memmove(r10_1 + rbx_6 * 0x14, r10_1 + sx.q(r12_2 + rbx_6.d) * 0x14, 
                                (rax_15 - rbx_6.d) * 0x14)
                            r14_2 = zx.q(rsi_1[4].d)
                        
                        rsi_1[4].d = r14_2.d - r12_2
                        sub_1413a8970(&rsi_1[3])
                    
                    r12 = arg1
                
                void* rcx_16 = *(r12 + 0x310)
                int64_t* var_78 = &var_d8
                int64_t** var_70_1 = &var_b8
                void var_98
                sub_14215ad30(rcx_16 + 0x1a8, &var_98, &var_78, nullptr)
                
                if (rax_10 != 0)
                    rax_10[1].d -= 1
                    
                    if (rax_10[1].d == 1)
                        (**rax_10)(rax_10)
                        int32_t temp7_1 = *(rax_10 + 0xc)
                        *(rax_10 + 0xc) -= 1
                        
                        if (temp7_1 == 1)
                            (*rax_10)[1](rax_10, 1)
            
            void* rcx_20 = *(r12 + 0x310)
            int64_t* var_68 = &var_d8
            int32_t* var_60_1 = &arg_18
            void var_94
            sub_14215abc0(rcx_20 + 0x1f8, &var_94, &var_68, nullptr)
            void* rbx_8 = *(r12 + 0x310)
            int32_t var_58
            sub_140598750(rbx_8 + 0x248, &var_58)
            var_100 = 0
            int32_t* var_50
            *var_50 = arg_18
            int32_t rax_23 = var_58
            *(var_50 + 8) = rsi_1
            var_50[4] = 0xffffffff
            var_108 = rax_23
            void var_90
            arg3, arg4 = sub_140bdabf0(rbx_8 + 0x248, &var_90, *var_50, var_50, var_108, nullptr)
            int64_t rcx_24 = var_d8
            
            if (rcx_24 != 0)
                arg3, arg4 = sub_140a74f90(rcx_24)
        
        int64_t* rcx_28 = arg2[1]
        int64_t var_f8 = 0
        uint64_t result_1 = 0
        int16_t var_e8_1 = 0x100
        char var_e6_1 = 0
        arg_10.b = 0
        char* rdx_25 = *rcx_28
        
        if (&rdx_25[1] u> rcx_28[1])
            result, rcx_28 = (*(*arg2 + 0x150))(arg2, &arg_10, 1)
        else
            arg_10.b = *rdx_25
            *rcx_28 += 1
        
        if ((arg2[5].b & 1) == 0)
            result = zx.q(var_e8_1.b)
        else
            result.b = arg_10.b == 1
            var_e8_1.b = result.b
        
        if (result.b != 0)
            (*(*arg2 + 0x168))(arg2, &var_f8)
            int64_t* rcx_30 = arg2[1]
            int32_t* rdx_28 = *rcx_30
            
            if (&rdx_28[1] u> rcx_30[1])
                void* rdx_29 = &var_f8:4
                
                if ((*(arg2 + 0x29) & 0x20) != 0)
                    sub_140b54070(arg2, rdx_29, arg4)
                else
                    (*(*arg2 + 0x150))(arg2, rdx_29, 4)
            else
                var_f8:4.d = *rdx_28
                *rcx_30 += 4
            
            char rax_33 = arg2[5].b & 1
            
            if (rax_33 != 0 && *(arg2 + 0x54) u< 9)
                int64_t rax_34 = *arg2
                uint64_t result_2 = 0
                uint64_t var_a8 = 0
                int64_t var_a0_1 = 0
                (*(rax_34 + 0x140))(arg2, &result_2)
                arg3, arg4 = sub_140a1d9d0(arg2, &var_a8, arg4)
                rcx_28 = var_a8
                result = result_2
                result_1 = result
                
                if (rcx_28 != 0)
                    result, rcx_28, arg3, arg4 = sub_140a74f90(rcx_28)
            else if (rax_33 == 0 || *(arg2 + 0x54) u>= 0xa)
                result, rcx_28, arg3, arg4 = sub_140ca89d0(arg2, &result_1, arg3, arg4)
            else
                result, rcx_28 = (*(*arg2 + 0x140))(arg2, &result_1)
        
        if (rsi_1 != 0)
            result = sx.q(var_f8.d)
            
            if (result.d s< 0 || result.d s>= rsi_1[4].d)
                rcx_28.b = 0
            else
                rcx_28.b = 1
            
            if (rcx_28.b != 0)
                arg3.o = var_f8.o
                uint64_t rcx_36 = result * 5
                uint64_t rdx_34 = rcx_36 << 2
                char var_e6_2 = *(rsi_1[3] + (rcx_36 << 2) + 0x12)
                int64_t rcx_38 = rsi_1[3]
                *(rcx_38 + rdx_34) = arg3.o
                result = zx.q(var_e8_1.d)
                *(rcx_38 + rdx_34 + 0x10) = result.d
        
        r13 += 1
    while (r13 s< arg_20)

return result
