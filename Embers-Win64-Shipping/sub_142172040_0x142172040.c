// 函数: sub_142172040
// 地址: 0x142172040
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void* rax = *(arg1 + 0x130)

if (((*(rax + 0xa4) u>> 1).b & 1) == 0)
    *(arg2 + 0x29) |= 1
    return rax

int64_t* rcx = arg2[1]
uint32_t arg_8 = 0
uint32_t* rdx_2 = *rcx
uint32_t rax_2

if (&rdx_2[1] u> rcx[1])
    uint32_t* rdx_3 = &arg_8
    
    if ((*(arg2 + 0x29) & 0x20) != 0)
        rax_2 = sub_140b54070(arg2, rdx_3, arg4)
    else
        rax_2 = (*(*arg2 + 0x150))(arg2, rdx_3, 4)
else
    rax_2 = *rdx_2
    arg_8 = rax_2
    *rcx += 4

int32_t r12 = 0

if (arg_8 s> 0)
    do
        int32_t arg_20
        rax_2 = (*(*arg2 + 0x168))(arg2, &arg_20)
        
        if ((*(arg2 + 0x29) & 1) != 0)
            break
        
        int64_t rdx_5 = arg2[0x15]
        uint32_t arg_18 = 0
        int64_t* rsi_1
        
        if (rdx_5 s< arg2[0x14])
            char r8_3 = *(sx.q((rdx_5 s>> 3).d) + arg2[0x12])
            arg2[0x15] = rdx_5 + 1
            
            if ((r8_3 & 1 << (rdx_5.b & 7)) == 0)
                goto label_14217213f
            
            uint64_t var_c8 = 0
            int32_t var_c0_1 = 0
            int64_t r9_2
            int512_t zmm1
            r9_2, zmm1 = sub_140a1d9d0(arg2, &var_c8, arg4)
            int64_t* rcx_11 = arg2[1]
            uint32_t* rdx_13 = *rcx_11
            
            if (&rdx_13[1] u> rcx_11[1])
                int32_t* rdx_14 = &arg_18
                
                if ((*(arg2 + 0x29) & 0x20) != 0)
                    rax_2, r9_2 = sub_140b54070(arg2, rdx_14, zmm1)
                else
                    rax_2, r9_2 = (*(*arg2 + 0x150))(arg2, rdx_14, 4)
            else
                rax_2 = *rdx_13
                arg_18 = rax_2
                *rcx_11 += 4
            
            if ((*(arg2 + 0x29) & 1) != 0)
                uint64_t rcx_33 = var_c8
                
                if (rcx_33 != 0)
                    return sub_140a74f90(rcx_33)
                
                break
            
            int64_t* rcx_13 = data_143f5b298
            r9_2.b = 1
            int32_t var_d8
            int64_t var_d0
            (*(*rcx_13 + 0x400))(rcx_13, *(*(arg1 + 0x130) + 0x58), &var_c8, r9_2, var_d8, var_d0)
            void* rdi_1 = *(arg1 + 0x310)
            int32_t var_a0
            sub_140926e00(rdi_1 + 0x1a8, &var_a0, &var_c8)
            int64_t rax_15 = sx.q(var_a0)
            void* rdi_2
            
            if (rax_15.d != 0xffffffff)
                rdi_2 = *(rdi_1 + 0x1a8) + rax_15 * 0x28
            
            int64_t* rdi_3
            
            if (rax_15.d == 0xffffffff || rdi_2 == 0)
                int128_t var_78_1 = zx.o(0)
                rdi_3 = nullptr
                rsi_1 = nullptr
            label_1421722c2:
                
                if (rdi_3 != 0)
                    rdi_3[1].d -= 1
                    
                    if (rdi_3[1].d == 1)
                        (**rdi_3)(rdi_3)
                        int32_t temp3_1 = *(rdi_3 + 0xc)
                        *(rdi_3 + 0xc) -= 1
                        
                        if (temp3_1 == 1)
                            (*(*rdi_3 + 8))(rdi_3, 1)
            else
                rsi_1 = *(rdi_2 + 0x10)
                rdi_3 = *(rdi_2 + 0x18)
                
                if (rdi_3 != 0)
                    rdi_3[1].d += 1
                    goto label_1421722c2
            
            if (rsi_1 == 0)
                int64_t* rax_19 = j_sub_140a82f30(zx.q((&rsi_1[6]).d))
                int64_t* rdi_4 = rax_19
                
                if (rax_19 == 0)
                    rdi_4 = nullptr
                else
                    __builtin_memset(rax_19, 0, 0x14)
                    rax_19[3] = 0
                    rax_19[4] = 0
                    rax_19[5].b = 1
                
                int64_t* var_98 = rdi_4
                int64_t* rax_20 = j_sub_140a82f30(0x18)
                
                if (rax_20 == 0)
                    rax_20 = nullptr
                else
                    rax_20[1].d = 1
                    *(rax_20 + 0xc) = 1
                    *rax_20 = &data_143214be8
                    rax_20[2] = rdi_4
                
                rsi_1 = var_98
                int32_t r8_6
                
                if (rsi_1 != &var_c8)
                    uint64_t r14_1 = var_c8
                    r8_6 = *(rsi_1 + 0xc)
                    rsi_1[1].d = var_c0_1
                    
                    if (var_c0_1 != 0 || r8_6 != 0)
                        sub_1405a4c70(rsi_1, var_c0_1, r8_6)
                        memcpy(*rsi_1, r14_1, var_c0_1 * 2)
                    else
                        *(rsi_1 + 0xc) = 0
                
                rsi_1[2].d = arg_20
                r8_6.b = 1
                sub_14217b840(&rsi_1[3], arg_18, r8_6.b)
                void* rcx_21 = *(arg1 + 0x310)
                uint64_t* var_68 = &var_c8
                int64_t** var_60_1 = &var_98
                void var_88
                sub_14215ad30(rcx_21 + 0x1a8, &var_88, &var_68, nullptr)
                
                if (rax_20 != 0)
                    rax_20[1].d -= 1
                    
                    if (rax_20[1].d == 1)
                        (**rax_20)(rax_20)
                        int32_t temp5_1 = *(rax_20 + 0xc)
                        *(rax_20 + 0xc) -= 1
                        
                        if (temp5_1 == 1)
                            (*(*rax_20 + 8))(rax_20, 1)
            
            void* rcx_25 = *(arg1 + 0x310)
            uint64_t* var_58 = &var_c8
            int32_t* var_50_1 = &arg_20
            void var_84
            sub_14215abc0(rcx_25 + 0x1f8, &var_84, &var_58, nullptr)
            void* rdi_7 = *(arg1 + 0x310)
            int32_t var_48
            sub_140598750(rdi_7 + 0x248, &var_48)
            var_d0 = 0
            int32_t* var_40
            *var_40 = arg_20
            int32_t rax_25 = var_48
            *(var_40 + 8) = rsi_1
            var_40[4] = 0xffffffff
            var_d8 = rax_25
            void var_80
            arg3, arg4 = sub_140bdabf0(rdi_7 + 0x248, &var_80, *var_40, var_40, var_d8, nullptr)
            uint64_t rcx_29 = var_c8
            
            if (rcx_29 != 0)
                arg3, arg4 = sub_140a74f90(rcx_29)
        else
            sub_140b55370(arg2)
        label_14217213f:
            void* r9_1 = *(arg1 + 0x310)
            *(r9_1 + 0x27c)
            void* const rcx_6
            
            if (*(r9_1 + 0x250) == *(r9_1 + 0x27c))
            label_1421724a9:
                rcx_6 = nullptr
            else
                void* r8_1 = r9_1 + 0x280
                void* rcx_4 = *(r8_1 + 8)
                int64_t r10_1 = sx.q(arg_20)
                
                if (rcx_4 != 0)
                    r8_1 = rcx_4
                
                int32_t rax_7 = *(r8_1 + (((sx.q(*(r9_1 + 0x290)) - 1) & r10_1) << 2))
                
                if (rax_7 == 0xffffffff)
                label_1421724a9_1:
                    rcx_6 = nullptr
                else
                    int64_t r8_2 = *(r9_1 + 0x248)
                    
                    while (true)
                        int64_t rdx_10 = sx.q(rax_7) * 3
                        rcx_6 = r8_2 + (rdx_10 << 3)
                        
                        if (*(r8_2 + (rdx_10 << 3)) == r10_1.d)
                            break
                        
                        rax_7 = *(rcx_6 + 0x10)
                        
                        if (rax_7 == 0xffffffff)
                            goto label_1421724a9_2
                    
                    if (rax_7 == 0xffffffff)
                    label_1421724a9_2:
                        rcx_6 = nullptr
            
            rsi_1 = *(rcx_6 + 8)
        
        int64_t var_b8 = 0
        int64_t var_b0_1 = 0
        int16_t var_a8_1 = 0x100
        char var_a6_1 = 0
        arg3, arg4 = sub_14215dfd0(arg2, &var_b8, arg3, arg4)
        rax_2 = zx.d(*(arg2 + 0x29))
        
        if ((rax_2.b & 1) != 0)
            break
        
        int64_t rcx_31 = sx.q(var_b8.d)
        char rdx_29
        
        if (rcx_31.d s< 0 || rcx_31.d s>= rsi_1[4].d)
            rdx_29 = 0
        else
            rdx_29 = 1
        
        if (rdx_29 == 0)
            rax_2.b |= 1
            *(arg2 + 0x29) = rax_2.b
        else
            arg3.o = var_b8.o
            int128_t* rdx_30 = rsi_1[3] + rcx_31 * 0x14
            *rdx_30 = arg3.o
            rax_2 = var_a8_1.d
            rdx_30[1].d = rax_2
        
        r12 += 1
    while (r12 s< arg_8)

return rax_2
