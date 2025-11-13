// 函数: sub_142132030
// 地址: 0x142132030
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t var_38
sub_140b4c620(&var_38, arg2)
int32_t rax = arg2[3]
int32_t rdi = 0
char rax_1 = arg2[2].b
int64_t arg_8
uint64_t result
int32_t* rbx_2

if (*(arg1 + 0x108) s> 0)
    int64_t r14_1 = 0
    
    while (true)
        rbx_2 = *(arg1 + 0x100) + r14_1
        
        if (*sub_140b4c620(&arg_8, rbx_2) != var_38 || rbx_2[3] != rax || rbx_2[2].b != rax_1)
            result.b = 0
        else
            result.b = 1
        
        if (result.b != 0)
            break
        
        rdi += 1
        r14_1 += 0x28
        
        if (rdi s>= *(arg1 + 0x108))
            goto label_1421320d5

if (*(arg1 + 0x108) s<= 0 || rbx_2 == 0)
label_1421320d5:
    int64_t rbx_3 = sx.q(*(arg1 + 0x108))
    result = zx.q((rbx_3 + 1).d)
    *(arg1 + 0x108) = result.d
    
    if (result.d s> *(arg1 + 0x10c))
        result = sub_1405c4ec0(arg1 + 0x100)
    
    rbx_2 = *(arg1 + 0x100) + rbx_3 * 0x28
    
    if (rbx_2 == 0)
        rbx_2 = nullptr
    else
        result = 0
        arg_8 = 0
        *rbx_2 = 0
        rbx_2[2].b = 2
        rbx_2[3] = 0xffffffff
        __builtin_memset(&rbx_2[4], 0, 0x18)
    
    *rbx_2 = *arg2
    *(rbx_2 + 0x20) = 0
    *(rbx_2 + 0x18) = 0
    goto label_142132142

if (*(rbx_2 + 0x10) != arg3)
label_142132142:
    
    if (arg3 != 0)
        void* rax_2 = sub_1425b3bb0()
        void* rdx_3 = *(arg3 + 0x10)
        result = sx.q(*(rax_2 + 0x38))
        
        if (result.d s<= *(rdx_3 + 0x38))
            uint64_t result_1 = result
            result = *(rdx_3 + 0x30)
            
            if (*(result + (result_1 << 3)) == rax_2 + 0x30)
                *(rbx_2 + 0x10) = arg3
                result = sub_142118550(arg1, rbx_2)
                int64_t* rcx_6 = *(arg1 + 0x140)
                
                if (rcx_6 != 0)
                    return sub_14211ef90(rcx_6, 0)

return result
