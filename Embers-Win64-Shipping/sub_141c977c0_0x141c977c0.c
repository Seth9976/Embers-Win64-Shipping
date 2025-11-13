// 函数: sub_141c977c0
// 地址: 0x141c977c0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t* r12 = *arg2
int64_t* r8 = arg1
int64_t r13 = 0
int32_t* result = &r12[arg2[1]]
uint64_t rcx_1 = sx.q(arg2[1].d) << 3 u>> 3

if (r12 u> result)
    rcx_1 = 0

if (rcx_1 != 0)
    do
        int64_t* r14_1 = *r8
        int32_t* result_2 = *r12
        int32_t* result_1 = result_2
        void var_7c
        result = sub_1408296b0(r14_1[6], &var_7c, result_2)
        
        if (*result == 0xffffffff)
            int64_t* rbx_1 = r14_1[7]
            int32_t arg_10
            sub_1405ba560(rbx_1, &arg_10, result_2)
            int64_t rax_1 = sx.q(arg_10)
            int64_t rcx_6
            
            if (rax_1.d == 0xffffffff)
                rcx_6 = 0
            else
                rcx_6 = (rax_1 << 5) + *rbx_1
            
            int64_t* rdi_1 = r14_1[1]
            int64_t rax_2 = rcx_6 + 8
            
            if (rcx_6 == 0)
                rax_2 = 0
            
            int64_t* rsi_1
            
            if (rax_2 != 0)
                rsi_1 = *r14_1
            
            int32_t rbx_2
            
            if (rax_2 == 0 || *rdi_1 == *rsi_1)
                rsi_1 = *r14_1
                rbx_2 = 0
            else
                rbx_2 = 4
            
            void var_78
            int32_t* rax_4 = sub_1408296b0(r14_1[8], &var_78, result_2)
            int64_t rdi_2 = *rdi_1
            int64_t rsi_2 = *rsi_1
            int32_t r15
            r15.b = rdi_2 == rsi_2
            int32_t rcx_8 = 0
            
            if (*rax_4 != 0xffffffff)
                rcx_8 = 2
            
            int32_t var_88 = arg3
            int32_t r15_2 = r15 | rcx_8 | rbx_2
            void* rbx_3 = r14_1[2]
            int32_t arg_20 = r15_2
            void* rax_6 = *(rbx_3 + 0x10)
            void* rcx_9 = rbx_3 + 0x20
            
            if (rax_6 != 0)
                rcx_9 = rax_6
            
            result = (*rbx_3)((*(*rcx_9 + 8))(rcx_9), rsi_2, rdi_2, result_2, &var_88, &arg_20)
            int32_t rbx_4 = result.d
            
            if (result.d != 0)
                int64_t* var_60 = &result_1
                int32_t var_80
                int32_t* var_58_1 = &var_80
                var_80 = (((zx.q(r15_2) & 1) << 3) + 8).d
                void var_74
                result = sub_1408419d0(r14_1[3], &var_74, &var_60, nullptr)
                
                if (rbx_4 == 2)
                    int64_t* rbx_5 = r14_1[5]
                    int64_t rdi_3 = sx.q(rbx_5[1].d)
                    int32_t rax_9 = (rdi_3 + 1).d
                    rbx_5[1].d = rax_9
                    
                    if (rax_9 s> *(rbx_5 + 0xc))
                        sub_1405a4d70(rbx_5)
                    
                    result = result_1
                    *(*rbx_5 + (rdi_3 << 3)) = result
        
        r8 = arg1
        r12 = &r12[1]
        r13 += 1
    while (r13 != rcx_1)

return result
