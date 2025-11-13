// 函数: sub_140a89090
// 地址: 0x140a89090
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t rdi = sx.q(arg1[1].d)
int64_t rax = 4

if (*(arg1 + 0xc) != 0 || rdi.d u> 4)
    rax = ((rdi * 3) u>> 3) + 0x10 + rdi

int64_t* r9 = data_143ddb3f0
int64_t rcx = rax * 0xc8

if (r9 != 0)
    rcx = (*(*r9 + 0x38))(r9, rcx, 0)

int64_t result = 0x7fffffff
uint32_t rcx_5 = (rcx u/ 0xc8).d

if (rdi.d s> rcx_5)
    rcx_5 = 0x7fffffff

*(arg1 + 0xc) = rcx_5
int64_t rsi = *arg1

if (rsi != 0 || rcx_5 != 0)
    int64_t* rcx_6 = data_143ddb3f0
    
    if (rcx_6 == 0)
        sub_140a750a0()
        rcx_6 = data_143ddb3f0
    
    result = (*(*rcx_6 + 0x20))(rcx_6, rsi, sx.q(rcx_5) * 0xc8, 0)
    *arg1 = result

return result
