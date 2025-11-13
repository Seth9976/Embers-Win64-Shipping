// 函数: sub_141a3c720
// 地址: 0x141a3c720
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void** var_28 = nullptr
int32_t var_20 = 0
void* rax = sub_142486350()
void* const rdi_1

if (rax == 0)
    rdi_1 = nullptr
else
    void* rax_1 = sub_142459c10()
    
    if (rax_1 == 0)
        rdi_1 = nullptr
    else
        int64_t rax_2 = sx.q(*(rax_1 + 0x38))
        
        if (rax_2.d s> *(rax + 0x38))
            rdi_1 = nullptr
        else
            rdi_1 = rax
            
            if (*(*(rax + 0x30) + (rax_2 << 3)) != rax_1 + 0x30)
                rdi_1 = nullptr

int64_t* r8 = &var_28

if (rdi_1 != sub_142459c10())
    sub_1417ea690(arg1, rax, r8)
else
    sub_1417ea490(arg1, rax, r8)

void** rdx_4 = var_28
int64_t* rcx_2 = rdx_4
void* r8_1 = &rdx_4[sx.q(var_20)]
void* const result

if (rdx_4 != r8_1)
    do
        result = *rcx_2
        
        if ((*(result + 0x8a) & 1) != 0)
            goto label_141a3c833
        
        rcx_2 = &rcx_2[1]
    while (rcx_2 != r8_1)

if (rdx_4 == r8_1 || rdx_4 == r8_1)
    r8_1.b = 1
    uint64_t var_18 = 0
    int32_t var_10_1 = 0
    sub_141dc5a60(arg1, &var_18, r8_1.b)
    uint64_t rbx_1 = var_18
    int64_t rsi_1 = rbx_1 + (sx.q(var_10_1) << 3)
    
    if (rbx_1 != rsi_1)
        do
            void* result_1 = sub_141a3c720(*rbx_1)
            result = result_1
            
            if (result_1 != 0)
                rbx_1 = var_18
                goto label_141a3c821
            
            rbx_1 += 8
        while (rbx_1 != rsi_1)
        
        rbx_1 = var_18
    
    result = nullptr
label_141a3c821:
    
    if (rbx_1 != 0)
        sub_140a74f90(rbx_1)
    
    rdx_4 = var_28
else
    result = *rdx_4

label_141a3c833:

if (rdx_4 != 0)
    sub_140a74f90(rdx_4)

return result
