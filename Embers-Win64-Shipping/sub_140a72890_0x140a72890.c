// 函数: sub_140a72890
// 地址: 0x140a72890
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

if (*(arg1 + 0x10) != *(arg2 + 0x10))
    int32_t result
    result.b = 0
    return result

int64_t rbx = *(arg1 + 8)
int32_t i_3 = *(arg1 + 0x10)
int32_t rdi = 0
int64_t* r14 = nullptr
int64_t* var_38 = nullptr
int32_t i_5 = i_3

if (i_3 != 0)
    sub_140a88790(&var_38, i_3, 0)
    r14 = var_38
    int64_t* rcx_1 = r14
    void* rbx_1 = rbx - r14
    int32_t i
    
    do
        *rcx_1 = *(rbx_1 + rcx_1)
        void* rax_1 = *(rbx_1 + rcx_1 + 8)
        rcx_1[1] = rax_1
        
        if (rax_1 != 0)
            *(rax_1 + 8) += 1
        
        rcx_1 = &rcx_1[2]
        i = i_3
        i_3 -= 1
    while (i != 1)
    i_3 = i_5
else
    int32_t var_2c_1 = 0

int32_t i_2 = *(arg2 + 0x10)
int64_t* r12 = nullptr
int64_t r15_1 = *(arg2 + 8)
int64_t* var_48 = nullptr
int32_t i_4 = i_2

if (i_2 != 0)
    sub_140a88790(&var_48, i_2, 0)
    r12 = var_48
    int64_t* rcx_3 = r12
    int64_t* r15_2 = r15_1 - r12
    int32_t i_1
    
    do
        *rcx_3 = *(r15_2 + rcx_3)
        void* rax_3 = *(r15_2 + rcx_3 + 8)
        rcx_3[1] = rax_3
        
        if (rax_3 != 0)
            *(rax_3 + 8) += 1
        
        rcx_3 = &rcx_3[2]
        i_1 = i_2
        i_2 -= 1
    while (i_1 != 1)
    i_2 = i_4
else
    int32_t var_3c_1 = 0

sub_140a5ed50(r14, i_3, arg3)
sub_140a5ed50(r12, i_2, arg3)

if (i_3 s<= 0)
label_140a729fb:
    i_2.b = 1
else
    int64_t* r12_1 = r12 - r14
    
    while (true)
        int64_t* rbp_1 = *(r12_1 + r14)
        int64_t* r15_3 = *r14
        int32_t rax_5 = (*(*rbp_1 + 0x38))(rbp_1)
        
        if ((*(*r15_3 + 0x38))(r15_3) == rax_5 && (*(*r15_3 + 0x40))(r15_3, rbp_1) != 0)
            rdi += 1
            r14 = &r14[2]
            
            if (rdi s>= i_3)
                goto label_140a729fb
            
            continue
        
        i_2.b = 0
        break

sub_140a61d30(&var_48)
sub_140a61d30(&var_38)
return zx.q(i_2.b)
