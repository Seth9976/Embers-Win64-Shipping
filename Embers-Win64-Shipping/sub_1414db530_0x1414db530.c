// 函数: sub_1414db530
// 地址: 0x1414db530
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t r8
int64_t arg_18 = r8
void* rax

if (*(data_143ee83c8 + 4) s> 0 || *(data_143f02a68 + 4) s> 0)
    rax.b = 1
else
    rax.b = 0

int32_t i = 0
void* var_278 = arg2
char var_270 = rax.b

if (*(arg1 + 0xa8) s> 0)
    void* r15_1 = nullptr
    void* arg_8 = nullptr
    
    do
        int64_t* r14_1 = r15_1 + *(arg1 + 0xa0)
        void* rax_1
        
        if ((*(r14_1 + 0x497c) & 2) != 0)
            rax_1.b = 0
        else if (*(r14_1 + 0xd7a) != 0)
            rax_1, r8 = sub_142391c90(zx.q(r14_1[0x15a].d))
            
            if (rax_1.b != 0)
                if (*(r14_1 + 0xd7c) != 0)
                    goto label_1414db612
                
                rax_1.b = 0
            else
                rax_1.b = 1
        else if (*(r14_1 + 0xd7c) != 0)
        label_1414db612:
            rax_1, r8 = sub_142391c90(zx.q(r14_1[0x15a].d))
            
            if (rax_1.b != 0)
                rax_1.b = 0
            else
                rax_1 = *r14_1
                
                if (rax_1 == 0 || *(rax_1 + 8) s<= 1)
                    rax_1.b = 0
                else
                    rax_1.b = 1
        else
            rax_1.b = 1
        
        if (rax_1.b != 0)
            int32_t rbx_1 = *(arg2 + 0x8c)
            int32_t rax_2 = r14_1[0x15b].d
            
            if (rbx_1 != rax_2)
                bool cond:0_1 = *(arg2 + 0x14) u> 0
                *(arg2 + 0x8c) = rax_2
                
                if (cond:0_1)
                    void*** rdx_2 = (*(arg2 + 0x30) + 7) & 0xfffffffffffffff8
                    void* rax_3 = &rdx_2[3]
                    
                    if (rax_3 u> *(arg2 + 0x38))
                        sub_140b0e3d0(arg2 + 0x30, 0x20)
                        rdx_2 = (*(arg2 + 0x30) + 7) & 0xfffffffffffffff8
                        rax_3 = &rdx_2[3]
                    
                    *(arg2 + 0x30) = rax_3
                    int64_t* rax_4 = *(arg2 + 8)
                    *(arg2 + 0x14) += 1
                    r15_1 = arg_8
                    *rax_4 = rdx_2
                    int32_t rax_5 = *(arg2 + 0x8c)
                    *(arg2 + 8) = &rdx_2[1]
                    rdx_2[1] = 0
                    *rdx_2 = &data_142f11588
                    rdx_2[2].d = rax_5
                else
                    *(arg2 + 0x90) = rax_2
            
            r8.b = 1
            int32_t r8_1 = sub_141405870(*(arg1 + 8) + 0x20, r14_1, r8.b)
            int128_t var_228
            __builtin_memset(&var_228, 0, 0x120)
            int32_t entry_r9
            sub_1413aab70(&data_143ec4c60, r14_1[0x2a9].d, sbb.d(r8_1, r8_1, entry_r9 != 0) & 0xf, 
                &var_228)
            int64_t* rcx_8 = data_143f0f180
            (*(*rcx_8 + 0x100))(rcx_8, *(*(arg1 + 8) + 0x68), &var_228)
            int64_t rcx_9 = *(*(arg1 + 8) + 0x68)
            int64_t var_250_1 = r14_1[2]
            void* rax_9 = data_143ee83c8
            int128_t var_268 = zx.o(0)
            int32_t var_258_1 = 0x11
            int128_t var_248_1 = zx.o(0)
            int64_t var_238_1 = rcx_9
            int32_t var_230_1 = 0
            
            if (*(rax_9 + 4) != 0 || *(data_143f02a68 + 4) != 0)
                rcx_9.b = 0
            else
                rcx_9.b = 1
            
            void* rax_11
            rax_11.b = *(data_143ee81e8 + 4) s> 0
            void** var_108
            sub_141411200(&var_108, 0, r14_1, arg1, arg2, rax_11.b, rcx_9.b, &var_268)
            var_108 = &data_142fb7f30
            int64_t var_50_1 = arg_18
            int32_t var_48_1 = entry_r9
            void* const rax_14
            
            if (entry_r9 != 0)
                rax_14 = 0x33f0
            
            if (entry_r9 == 0 || entry_r9 != 1)
                rax_14 = 0x3220
            
            int128_t zmm2_1 = sub_141267530(rax_14 + r14_1, &var_108, arg2)
            var_108 = &data_142fb7f30
            int128_t entry_zmm3 = sub_14141cd40(&var_108, 0, zmm2_1, entry_zmm3)
            sub_141412cc0(&var_108)
            
            if (*(arg2 + 0x8c) != rbx_1)
                bool cond:2_1 = *(arg2 + 0x14) u> 0
                *(arg2 + 0x8c) = rbx_1
                
                if (cond:2_1)
                    void*** rdx_12 = (*(arg2 + 0x30) + 7) & 0xfffffffffffffff8
                    void* rax_15 = &rdx_12[3]
                    
                    if (rax_15 u> *(arg2 + 0x38))
                        sub_140b0e3d0(arg2 + 0x30, 0x20)
                        rdx_12 = (*(arg2 + 0x30) + 7) & 0xfffffffffffffff8
                        rax_15 = &rdx_12[3]
                    
                    *(arg2 + 0x30) = rax_15
                    int64_t* rax_16 = *(arg2 + 8)
                    *(arg2 + 0x14) += 1
                    *rax_16 = rdx_12
                    int32_t rax_17 = *(arg2 + 0x8c)
                    *(arg2 + 8) = &rdx_12[1]
                    rdx_12[1] = 0
                    *rdx_12 = &data_142f11588
                    rdx_12[2].d = rax_17
                else
                    *(arg2 + 0x90) = rbx_1
        
        r15_1 += 0x5240
        i += 1
        arg_8 = r15_1
    while (i s< *(arg1 + 0xa8))

return sub_141962ac0(&var_278)
