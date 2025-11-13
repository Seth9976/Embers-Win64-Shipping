// 函数: sub_140a88850
// 地址: 0x140a88850
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t rdi = sx.q(arg1[1].d)
int64_t rcx = 4

if (*(arg1 + 0xc) != 0 || rdi.d u> 4)
    rcx = rdi + 0x10 + ((rdi * 3) u>> 3)

int64_t* r9 = data_143ddb3f0
int64_t rcx_2 = rcx << 3

if (r9 != 0)
    rcx_2 = (*(*r9 + 0x38))(r9, rcx_2, 0)

uint32_t rcx_4 = (rcx_2 u>> 3).d
int64_t result = 0x7fffffff

if (rdi.d s> rcx_4)
    rcx_4 = 0x7fffffff

*(arg1 + 0xc) = rcx_4
int64_t rsi = *arg1

if (rsi != 0 || rcx_4 != 0)
    int64_t* rcx_5 = data_143ddb3f0
    
    if (rcx_5 == 0)
        sub_140a750a0()
        rcx_5 = data_143ddb3f0
    
    result = (*(*rcx_5 + 0x20))(rcx_5, rsi, sx.q(rcx_4) << 3, 0)
    *arg1 = result

return result
