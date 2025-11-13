// 函数: sub_141a5bbe0
// 地址: 0x141a5bbe0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void* r14 = *arg2
int64_t var_48
__builtin_memset(&var_48, 0, 0x20)
void* r12 = r14 + sx.q(arg2[1].d) * 0x28
int64_t var_38

if (r14 != r12)
    int64_t* rsi_1 = r14 + 0x18
    int64_t rdi_1 = 0
    
    do
        int64_t rbx_2 = *(rsi_1[-1] + 0xe8)
        
        if (rbx_2 != rdi_1)
            sub_141a37850(arg1 + 0x10, &var_48, &var_38)
        
        rdi_1 = rbx_2
        
        if (*(rsi_1 - 0xc) != 0)
            int64_t var_40_1
            int64_t rbx_3 = sx.q(var_40_1.d)
            int32_t rax_1 = (rbx_3 + 1).d
            var_40_1.d = rax_1
            
            if (rax_1 s> var_40_1:4.d)
                sub_14083a7e0(&var_48)
            
            int64_t* rdx_3 = var_48 + rbx_3 * 0xc
            *rdx_3 = *rsi_1
            rdx_3[1].d = rsi_1[1].d
        
        int64_t var_30_1
        int64_t rbx_4 = sx.q(var_30_1.d)
        int32_t rax_4 = (rbx_4 + 1).d
        var_30_1.d = rax_4
        
        if (rax_4 s> var_30_1:4.d)
            sub_14083a7e0(&var_38)
        
        r14 += 0x28
        int64_t* rdx_5 = var_38 + rbx_4 * 0xc
        *rdx_5 = *rsi_1
        int32_t rax_6 = rsi_1[1].d
        rsi_1 = &rsi_1[5]
        rdx_5[1].d = rax_6
    while (r14 != r12)

int64_t result = sub_141a37850(arg1 + 0x10, &var_48, &var_38)
int64_t rcx_6 = var_48

if (rcx_6 != 0)
    result = sub_140a74f90(rcx_6)

int64_t rcx_7 = var_38

if (rcx_7 == 0)
    return result

return sub_140a74f90(rcx_7) __tailcall
