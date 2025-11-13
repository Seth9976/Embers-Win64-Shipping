// 函数: sub_1428b0850
// 地址: 0x1428b0850
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t arg_20 = arg4
__chkstk(0x68)
int64_t rbp = arg4
int64_t r12 = arg3
int64_t r13 = arg2
void* rdi = arg1

if (arg4 == 0)
    return 1

int64_t rbx = arg4

if (arg4 u>= 0x8000000)
    rbx = 0x8000000

while (rbp u>= rbx)
    int64_t i = 0
    
    if (rbx << 3 != 0)
        do
            uint64_t r14_2 = i u>> 3
            char rax_3 = (1 << (7 - (i.b & 7))).b & *(r14_2 + r12)
            char temp0_1 = rax_3
            rax_3 = neg.b(rax_3)
            char var_48 = sbb.b(rax_3, rax_3, temp0_1 != 0) & 0x80
            int32_t rax_4 = sub_142890eb0(rdi)
            char* rax_5 = sub_1406219d0(rdi)
            uint8_t var_47
            sub_1428fc0b0(&var_48, &var_47, 1, 1, sub_142890ec0(arg1), rax_5, rax_4)
            rdi = arg1
            char rcx_7 = i.b & 7
            char rdx_1 = not.b((0x80 s>> (i.b & 7)).b) & *(r14_2 + r13)
            i += 1
            *(r14_2 + r13) = rdx_1 | (var_47 & 0x80) u>> rcx_7
        while (i u< rbx << 3)
        
        rbp = arg_20
    
    rbp -= rbx
    r12 += rbx
    r13 += rbx
    arg_20 = rbp
    int64_t rcx_8 = rbp
    
    if (rbp u>= rbx)
        rcx_8 = rbx
    
    rbx = rcx_8
    
    if (rbp == 0)
        break

return 1
