// 函数: sub_14236b660
// 地址: 0x14236b660
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int32_t i = 0
int32_t var_38
int32_t* var_30
void arg_8

if (*(arg1 + 0x30) s> 0)
    void* r15_1 = nullptr
    
    do
        int64_t rax_1 = *(arg1 + 0x28)
        char* rdi_3 = (sx.q(i) << 5) + rax_1
        uint32_t rbx_1 = zx.d(*(r15_1 + rax_1))
        sub_140e59330(arg1 + 0x38, &var_38)
        *var_30 = rbx_1
        var_30[2].b = *rdi_3
        sub_140596d10(&var_30[4], &rdi_3[8])
        var_30[8] ^= (*(rdi_3 + 0x18) ^ var_30[8]) & 1
        var_30[9] = *(rdi_3 + 0x1c)
        int32_t rax_7 = var_38
        var_30[0xa] = 0xffffffff
        sub_14235fdc0(arg1 + 0x38, &arg_8, *var_30, var_30, rax_7, nullptr)
        i += 1
        r15_1 += 0x20
    while (i s< *(arg1 + 0x30))

if (*(arg1 + 0x40) != *(arg1 + 0x6c))
    void* rax_9 = *(arg1 + 0x78)
    void* rcx_3 = arg1 + 0x70
    
    if (rax_9 != 0)
        rcx_3 = rax_9
    
    int32_t* rcx_7
    
    for (int32_t i_1 = *rcx_3; i_1 != 0xffffffff; i_1 = rcx_7[0xa])
        rcx_7 = sx.q(i_1) * 0x30 + *(arg1 + 0x38)
        
        if (*rcx_7 == 0)
            if (i_1 != 0xffffffff && rcx_7 != 0)
                int32_t* result = &rcx_7[2]
                
                if (result != 0)
                    return result
            
            break

sub_140e59330(arg1 + 0x38, &var_38)
int32_t rax_10 = var_38
*var_30 = 0
var_30[2].b = 0
*(var_30 + 0x10) = 0
*(var_30 + 0x18) = 0
var_30[8] &= 0xfffffffe
var_30[9] = 0
var_30[0xa] = 0xffffffff
return sub_14235fdc0(arg1 + 0x38, &arg_8, *var_30, var_30, rax_10, nullptr)
