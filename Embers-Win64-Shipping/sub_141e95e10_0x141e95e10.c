// 函数: sub_141e95e10
// 地址: 0x141e95e10
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void* const* result = &__return_addr
void* arg_18 = arg3
int32_t arg_8
int32_t* r12 = &arg_8
arg_8 = 0
void* r13 = arg2

if (arg4 != 0)
    r12 = arg4

int32_t i = *r12

while (i s< arg1[1].d)
    int64_t rcx = sx.q(i) * 3
    result = *arg1
    
    if (result[rcx + 2] != arg3)
        break
    
    void* const rdi_1 = nullptr
    *r12 = i + 1
    void* j = arg3
    int64_t* r14_1 = *arg1 + (rcx << 3)
    
    while (j != 0)
        int64_t rbx_1 = *r14_1
        void* j_1
        
        if (rbx_1 != 0)
            void* rax_3 = *(j + 0x50)
            j_1 = j
            int32_t var_48_1 = 0xffffffff
            int16_t var_44_1 = 0x101
            char var_42_1 = 0
            sub_1406328d0(&j_1)
            rdi_1 = rax_3
        
        if (rbx_1 == 0 || rdi_1 == 0)
        label_141e95f01:
            rdi_1 = nullptr
        else
            while (true)
                int64_t rax_4 = *(rdi_1 + 0x28)
                int64_t arg_20 = rax_4
                
                if (rax_4 == rbx_1)
                    break
                
                void* rax_5 = *(rdi_1 + 0x20)
                sub_1406328d0(&j_1)
                rdi_1 = rax_5
                
                if (rdi_1 == 0)
                    goto label_141e95f01
        
        j = *(j + 0x40)
        
        if (rdi_1 != 0)
            break
    
    void** rax_6 = j_sub_140a82f30(0x20)
    void** rbx_2 = rax_6
    
    if (rax_6 == 0)
        rbx_2 = nullptr
    else
        int32_t rcx_3 = r14_1[1].d
        *rax_6 = rdi_1
        rax_6[1].d = rcx_3
        rax_6[2] = 0
        rax_6[3] = 0
    
    int64_t rbp_1 = sx.q(arg1[6].d)
    int32_t rax_7 = (rbp_1 + 1).d
    arg1[6].d = rax_7
    
    if (rax_7 s> *(arg1 + 0x34))
        sub_140638870(&arg1[5])
    
    result = arg1[5]
    result[rbp_1] = rbx_2
    
    if (r13 != 0)
        *r13 = rbx_2
    
    if (rdi_1 != 0)
        int64_t rcx_5 = *(*(rdi_1 + 8) + 0x10)
        result = rcx_5 u>> 0x14
        
        if ((result.b & 1) != 0)
            result = sub_141e95e10(arg1, &rbx_2[2], *(rdi_1 + 0x78), r12)
        else if (((rcx_5 u>> 0x15).b & 1) != 0)
            result = sub_141e95c60(arg1, rdi_1, &rbx_2[2], r12)
    
    i = *r12
    r13 = &rbx_2[3]
    arg3 = arg_18

return result
