// 函数: sub_140a88fc0
// 地址: 0x140a88fc0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t rdi = sx.q(arg1[1].d)
int64_t rax = 4

if (*(arg1 + 0xc) != 0 || rdi.d u> 4)
    rax = ((rdi * 3) u>> 3) + 0x10 + rdi

int64_t* r9 = data_143ddb3f0
int64_t rcx_1 = rax * 0xc

if (r9 != 0)
    rcx_1 = (*(*r9 + 0x38))(r9, rcx_1, 0)

int64_t result = 0x7fffffff
uint32_t rdx_3 = (rcx_1 u/ 0xc).d

if (rdi.d s> rdx_3)
    rdx_3 = 0x7fffffff

*(arg1 + 0xc) = rdx_3
int64_t rsi = *arg1

if (rsi != 0 || rdx_3 != 0)
    int64_t* rcx_3 = data_143ddb3f0
    
    if (rcx_3 == 0)
        sub_140a750a0()
        rcx_3 = data_143ddb3f0
    
    result = (*(*rcx_3 + 0x20))(rcx_3, rsi, sx.q(rdx_3) * 0xc, 0)
    *arg1 = result

return result
