// 函数: sub_140a81660
// 地址: 0x140a81660
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int32_t i_2 = *(arg1 + 0x10)
int32_t rdi = 0
int64_t rbx = *(arg1 + 8)
int64_t* var_38 = nullptr
int64_t* r12 = nullptr
int32_t i_5 = i_2

if (i_2 != 0)
    sub_140a88790(&var_38, i_2, 0)
    r12 = var_38
    int64_t* rcx_1 = r12
    void* rbx_1 = rbx - r12
    int32_t i
    
    do
        *rcx_1 = *(rbx_1 + rcx_1)
        void* rax_2 = *(rbx_1 + rcx_1 + 8)
        rcx_1[1] = rax_2
        
        if (rax_2 != 0)
            *(rax_2 + 8) += 1
        
        rcx_1 = &rcx_1[2]
        i = i_2
        i_2 -= 1
    while (i != 1)
    i_2 = i_5
else
    int32_t var_2c_1 = 0

int32_t i_3 = *(arg2 + 0x10)
int64_t* r15 = nullptr
uint64_t rbx_2 = *(arg2 + 8)
int64_t* var_48 = nullptr
int32_t i_4 = i_3

if (i_3 != 0)
    sub_140a88790(&var_48, i_3, 0)
    r15 = var_48
    int64_t* rcx_3 = r15
    rbx_2 -= r15
    int32_t i_1
    
    do
        *rcx_3 = *(rbx_2 + rcx_3)
        void* rax_4 = *(rbx_2 + rcx_3 + 8)
        rcx_3[1] = rax_4
        
        if (rax_4 != 0)
            *(rax_4 + 8) += 1
        
        rcx_3 = &rcx_3[2]
        i_1 = i_3
        i_3 -= 1
    while (i_1 != 1)
    i_3 = i_4
else
    int32_t var_3c_1 = 0

sub_140a5ed50(r12, i_2, arg3)
int512_t zmm1 = sub_140a5ed50(r15, i_3, arg3)

if (i_2 s> 0)
    int64_t* r14_1 = r12
    
    while (true)
        if (rdi s>= i_3)
            goto label_140a817ea
        
        int64_t* r15_1 = *r14_1
        int64_t* r12_1 = *(r14_1 + r15 - r12)
        
        if ((*(*r15_1 + 0x38))(r15_1) == (*(*r12_1 + 0x38))(r12_1)
                && (*(*r15_1 + 0x40))(r15_1, r12_1) != 0)
            rdi += 1
            r14_1 = &r14_1[2]
            
            if (rdi s>= i_2)
                break
            
            continue
        
        int64_t rcx_10 = sx.q(rdi) * 2
        rbx_2 = zx.q(sub_140a65900(var_38[rcx_10], var_48[rcx_10], zmm1))
        goto label_140a817f1

if (i_3 s<= i_2)
label_140a817ea:
    rbx_2.b = 0
else
    rbx_2.b = 1

label_140a817f1:
sub_140a61d30(&var_48)
sub_140a61d30(&var_38)
return zx.q(rbx_2.b)
