// 函数: sub_142210120
// 地址: 0x142210120
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

char rax = __crt_unique_heap_ptr<char,struct __crt_internal_free_policy>(*arg1 + 0x28)
int64_t* rcx_2 = *arg1
int64_t rbx = 0

if (rax != 0)
    int64_t* rax_1 = *rcx_2
    int64_t rsi_1 = 0
    int64_t* r14_1 = *rax_1
    uint64_t r12_2 = sx.q(rax_1[1].d) << 3 u>> 3
    
    if (r14_1 u> &r14_1[rax_1[1]])
        r12_2 = 0
    
    if (r12_2 != 0)
        do
            void* rdi_1 = *r14_1
            
            if (__crt_unique_heap_ptr<char,struct __crt_internal_free_policy>(rdi_1 + 0xf0) != 0)
                sub_14225d4a0(*arg1 + 0x28, rdi_1 + 0xf0)
            
            r14_1 = &r14_1[1]
            rsi_1 += 1
        while (rsi_1 != r12_2)
else if (rcx_2[4] != 0)
    int64_t var_28 = 0
    int64_t var_20_1 = 0
    int64_t* rax_5 = *rcx_2
    int32_t rdx_2 = rax_5[1].d
    
    if (rdx_2 s> 0)
        sub_1405c5570(&var_28, rdx_2)
        rcx_2 = *arg1
        rax_5 = *rcx_2
    
    int64_t* r14_2 = *rax_5
    int64_t rbp_1 = 0
    uint64_t r12_4 = sx.q(rax_5[1].d) << 3 u>> 3
    
    if (r14_2 u> &r14_2[rax_5[1]])
        r12_4 = 0
    
    if (r12_4 != 0)
        do
            void* rdi_2 = *r14_2
            
            if (__crt_unique_heap_ptr<char,struct __crt_internal_free_policy>(rdi_2 + 0xf0) != 0)
                int64_t rsi_2 = sx.q(var_20_1.d)
                int32_t rax_9 = (rsi_2 + 1).d
                var_20_1.d = rax_9
                
                if (rax_9 s> var_20_1:4.d)
                    sub_1405a4d70(&var_28)
                
                *(var_28 + (rsi_2 << 3)) = *(rdi_2 + 0xf0)
            
            r14_2 = &r14_2[1]
            rbp_1 += 1
        while (rbp_1 != r12_4)
        
        rcx_2 = *arg1
    
    arg2 = sub_14225d4c0(rcx_2[4], &var_28)
    int64_t rcx_11 = var_28
    
    if (rcx_11 != 0)
        arg2 = sub_140a74f90(rcx_11)

void** result = *arg1

if (result[6].b == 0)
    result = *result
    int64_t rdi_3 = sx.q(result[1].d)
    
    if (rdi_3 s> 0)
        do
            result, arg2 = sub_142219750(*(***arg1 + (rbx << 3)), arg2)
            rbx += 1
        while (rbx s< rdi_3)

return result
