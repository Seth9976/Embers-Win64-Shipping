// 函数: sub_14216eb80
// 地址: 0x14216eb80
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t* rdi = arg1
sub_141f96210(&arg1[0x79], arg2)

if ((*(*rdi + 0x368))(rdi) != 0)
    int64_t* var_70_1 = nullptr
    char arg_10
    
    if ((*(*arg2 + 0x1c0))(arg2) == 0 || *(arg2 + 0x5f) == 0 || arg3 != 0)
        arg_10 = 0
    else
        arg_10 = 1
        var_70_1 = sub_142163dd0(rdi, rdi, arg2, nullptr)
    
    int64_t* rbx_1 = rdi[0xde]
    int32_t arg_20
    sub_141fb31d0(rbx_1, &arg_20, arg2)
    int64_t rax_5 = sx.q(arg_20)
    int64_t* rbx_2
    
    if (rax_5.d != 0xffffffff)
        rbx_2 = *rbx_1 + rax_5 * 0x18
    
    void* const var_68_1
    
    if (rax_5.d == 0xffffffff || rbx_2 == 0)
        var_68_1 = nullptr
    else
        int64_t* rbx_3 = rbx_2[1]
        var_68_1 = *rbx_2
        
        if (rbx_3 != 0)
            rbx_3[1].d += 1
            
            if (rbx_3 != 0)
                rbx_3[1].d -= 1
                
                if (rbx_3[1].d == 1)
                    (**rbx_3)(rbx_3)
                    int32_t temp4_1 = *(rbx_3 + 0xc)
                    *(rbx_3 + 0xc) -= 1
                    
                    if (temp4_1 == 1)
                        (*(*rbx_3 + 8))(rbx_3, 1)
    
    int32_t rax_10 = rdi[0x13].d
    int64_t rbx_4 = sx.q(rax_10 - 1)
    int64_t var_60_1 = rbx_4
    
    if (rax_10 - 1 s>= 0)
        int64_t r15
        int64_t var_38_1 = r15
        int64_t temp5_1
        
        do
            void* r13_1 = *(rdi[0x12] + (rbx_4 << 3))
            
            if ((arg2[0xb].b & 1) != 0)
                int64_t rcx_7 = sx.q(*(r13_1 + 0x88))
                
                if (rcx_7.d != 0)
                    int32_t r12_1 = 0
                    int32_t rdi_1 = 0
                    int64_t rbx_5 = 0
                    r15.b = **(r13_1 + 0x80) != arg2
                    
                    do
                        int64_t r9_1 = sx.q(rdi_1)
                        rbx_5 += 1
                        rdi_1 += 1
                        
                        if (rbx_5 s< rcx_7)
                            int64_t* rcx_8 = *(r13_1 + 0x80) + (rbx_5 << 3)
                            
                            do
                                int32_t rax_15
                                rax_15.b = *rcx_8 != arg2
                                
                                if (zx.d(r15.b) != rax_15)
                                    break
                                
                                rdi_1 += 1
                                rbx_5 += 1
                                rcx_8 = &rcx_8[1]
                            while (rbx_5 s< rcx_7)
                        
                        int32_t rsi_2 = rdi_1 - r9_1.d
                        
                        if (r15.b != 0)
                            if (r12_1 != r9_1.d)
                                int64_t rcx_9 = *(r13_1 + 0x80)
                                memmove(rcx_9 + (sx.q(r12_1) << 3), rcx_9 + (r9_1 << 3), rsi_2 << 3)
                            
                            r12_1 += rsi_2
                        
                        r15.b ^= 1
                    while (rbx_5 s< rcx_7)
                    
                    rdi = arg1
                    rbx_4 = var_60_1
                    *(r13_1 + 0x88) = r12_1
            
            int64_t var_58
            sub_140d3a3a0(&var_58, arg2)
            *(r13_1 + 0x13a4)
            uint64_t rax_18
            
            if (*(r13_1 + 0x1378) == *(r13_1 + 0x13a4))
            label_14216ee2f:
                
                if (var_68_1 == 0)
                    rax_18.b = 0
                else
                    int64_t var_50
                    sub_140d3a3a0(&var_50, r13_1)
                    
                    if (*sub_141fb3050(var_68_1 + 0x30, &arg_20, var_50) != 0xffffffff)
                        rax_18.b = 1
                    else
                        int64_t var_48
                        sub_140d3a3a0(&var_48, r13_1)
                        void var_78
                        
                        if (*sub_141fb3050(var_68_1 + 0x80, &var_78, var_48) == 0xffffffff)
                            rax_18.b = 0
                        else
                            rax_18.b = 1
                
                if (arg_10 != 0 || rax_18.b != 0)
                    int64_t* rax_23 = sub_142163dd0(rdi, rdi, arg2, var_70_1)
                    var_70_1 = rax_23
                    
                    if (rax_23 != 0)
                        int64_t* rcx_20 = *(r13_1 + 0x13c0)
                        int32_t var_74
                        
                        if (rcx_20 == 0)
                            sub_141f77ab0(r13_1 + 0x13c8, &var_74, rax_23 + 0x1c, nullptr)
                        else
                            (*(*rcx_20 + 0x278))(rcx_20, rax_23)
            else
                int64_t rcx_12 = var_58
                void* r9_2 = r13_1 + 0x13a8
                void* rdx_6 = *(r9_2 + 8)
                uint32_t r10_2 = (rcx_12 u>> 0x20).d
                
                if (rdx_6 != 0)
                    r9_2 = rdx_6
                
                rax_18 = zx.q(*(r9_2
                    + (((sx.q(r10_2) ^ sx.q(rcx_12.d)) & (sx.q(*(r13_1 + 0x13b8)) - 1)) << 2)))
                
                if (rax_18.d == 0xffffffff)
                    goto label_14216ee2f
                
                int64_t r9_3 = *(r13_1 + 0x1370)
                int64_t r8_8
                
                while (true)
                    r8_8 = sx.q(rax_18.d) * 0x18
                    int64_t rdx_8 = *(r8_8 + r9_3)
                    
                    if (rdx_8.d == rcx_12.d && (rdx_8 u>> 0x20).d == r10_2)
                        break
                    
                    rax_18 = zx.q(*(r8_8 + r9_3 + 0x10))
                    
                    if (rax_18.d == 0xffffffff)
                        goto label_14216ee2f
                
                if (rax_18.d == 0xffffffff)
                    goto label_14216ee2f
                
                void* rcx_17 = r8_8 + r9_3
                
                if (rcx_17 == 0)
                    goto label_14216ee2f
                
                int64_t* rcx_18 = *(rcx_17 + 8)
                
                if (rcx_18 == 0)
                    goto label_14216ee2f
                
                rcx_18[0x12].d &= 0xfffffff7
                (*(*rcx_18 + 0x278))(rcx_18, 0)
            sub_14213f550(r13_1, arg2)
            temp5_1 = rbx_4
            rbx_4 -= 1
            var_60_1 = rbx_4
        while (temp5_1 - 1 s>= 0)

void* rcx_23 = rdi[0x11]

if (rcx_23 != 0)
    sub_14213f550(rcx_23, arg2)

sub_142174860(rdi[0xde], arg2)
uint64_t result = sub_141caa060(&rdi[0x6f], arg2[3])
int64_t* rcx_26 = rdi[0xdd]

if (rcx_26 == 0)
    return result

return (*(*rcx_26 + 0x2a0))(rcx_26, arg2)
