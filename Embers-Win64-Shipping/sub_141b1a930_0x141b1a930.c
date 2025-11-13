// 函数: sub_141b1a930
// 地址: 0x141b1a930
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void* rax = sub_141af0640(arg4)
int64_t* arg_28
int64_t* r15 = arg_28
int64_t* r12 = *(rax + 8)
int64_t rdx = *r15
void* rax_1 = (*(rdx + 8))(r15, rdx)
int32_t var_48
sub_141a644b0(arg1 + 8, &var_48, arg3[4], *(rax_1 + 8) + 0xd0)
int64_t rdi = 0
int32_t result_2
void* i
void* i_1

if (r15[0x16].d == *(r15 + 0xdc))
label_141b1a9fe:
    i = nullptr
    result_2 = 0
    i_1 = nullptr
    int32_t var_70 = 0
else
    void* r8_1 = &r15[0x1c]
    void* rcx_3 = *(r8_1 + 8)
    int64_t r9_2 = sx.q(var_48)
    
    if (rcx_3 != 0)
        r8_1 = rcx_3
    
    int32_t rax_3 = *(r8_1 + (((sx.q(r15[0x1e].d) - 1) & r9_2) << 2))
    
    if (rax_3 == 0xffffffff)
        goto label_141b1a9fe
    
    int32_t* rcx_7
    
    while (true)
        rcx_7 = sx.q(rax_3) * 0xc0 + r15[0x15]
        
        if (*rcx_7 == r9_2.d)
            break
        
        rax_3 = rcx_7[0x2e]
        
        if (rax_3 == 0xffffffff)
            goto label_141b1a9fe
    
    if (rax_3 == 0xffffffff || rcx_7 == 0 || rcx_7 == -8)
        goto label_141b1a9fe
    
    void var_40
    sub_141a4a6a0(&rcx_7[2], &i_1, &var_40, r15)
    int32_t result_4
    result_2 = result_4
    i = i_1
int64_t result = sx.q(result_2)

for (void* rbp = i + (result << 3); i != rbp; i += 8)
    result = sub_140d3c6e0(i)
    int64_t result_3 = result
    
    if (result != 0)
        int64_t rax_4 = sub_142452380()
        void* rcx_9 = *(result_3 + 0x10)
        result = rax_4 + 0x30
        int64_t rdx_5 = sx.q(*(result + 8))
        
        if (rdx_5.d s<= *(rcx_9 + 0x38) && *(*(rcx_9 + 0x30) + (rdx_5 << 3)) == result)
            void* var_58
            sub_141a4a790(r15, &var_58, arg3, &arg3[4])
            void* rbx_1 = var_58
            int32_t result_1
            result = sx.q(result_1)
            void* rcx_13 = rbx_1 + (result << 3)
            uint64_t r14_4 = (rcx_13 - rbx_1 + 7) u>> 3
            
            if (rbx_1 u> rcx_13)
                r14_4 = 0
            
            if (r14_4 != 0)
                do
                    arg_28 = *rbx_1
                    result = sub_140d3c6e0(&arg_28)
                    
                    if (result != 0)
                        int32_t rdx_8 = r15[0x5b].d
                        int64_t zmm0_1 = r15[0x5a]
                        void** const var_68 = &data_14305d868
                        int32_t var_80_1 = rdx_8
                        int64_t rdx_9 = *(rax + 0x18)
                        char rax_6 = *(r15 + 0x2dc)
                        int64_t* var_60_1 = r12
                        int64_t var_88 = zmm0_1
                        sub_1405c5900(&r15[0x1f], rdx_9, &var_68, result, rax_6, &var_88)
                        var_68 = &data_142d4ba10
                        result = sub_141a287f0(r12, result, result_3)
                    
                    rbx_1 += 8
                    rdi += 1
                while (rdi != r14_4)
            
            break

return result
