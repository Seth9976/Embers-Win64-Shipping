// 函数: sub_140a88a90
// 地址: 0x140a88a90
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t rdi = sx.q(arg1[1].d)
int64_t rax = 4

if (*(arg1 + 0xc) != 0 || rdi.d u> 4)
    rax = ((rdi * 3) u>> 3) + 0x10 + rdi

int64_t* rcx = data_143ddb3f0
int64_t rdx = rax * 0xd8

if (rcx != 0)
    rdx = (*(*rcx + 0x38))(rcx, rdx, 0)

int64_t result = 0x7fffffff
uint32_t rdx_2 = (rdx u/ 0xd8).d

if (rdi.d s> rdx_2)
    rdx_2 = 0x7fffffff

*(arg1 + 0xc) = rdx_2
int64_t rsi = *arg1

if (rsi != 0 || rdx_2 != 0)
    int64_t* rcx_1 = data_143ddb3f0
    
    if (rcx_1 == 0)
        sub_140a750a0()
        rcx_1 = data_143ddb3f0
    
    result = (*(*rcx_1 + 0x20))(rcx_1, rsi, sx.q(rdx_2) * 0xd8, 0)
    *arg1 = result

return result
