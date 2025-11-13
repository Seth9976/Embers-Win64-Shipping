// 函数: sub_140a88910
// 地址: 0x140a88910
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t rdi = sx.q(*(arg1 + 0x1808))
uint32_t rdx = 0x100

if (rdi.d u> 0x100)
    int64_t rax_1 = 4
    
    if (*(arg1 + 0x180c) != 0 || rdi.d u> 4)
        rax_1 = ((rdi * 3) u>> 3) + 0x10 + rdi
    
    int64_t* r9_1 = data_143ddb3f0
    int64_t rcx_1 = rax_1 * 0x18
    
    if (r9_1 != 0)
        rcx_1 = (*(*r9_1 + 0x38))(r9_1, rcx_1, 0)
    
    rdx = (rcx_1 u/ 0x18).d
    
    if (rdi.d s> rdx)
        rdx = 0x7fffffff

*(arg1 + 0x180c) = rdx
return sub_140a88100(arg1, arg2, rdx, 0x18) __tailcall
