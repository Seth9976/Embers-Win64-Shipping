// 函数: sub_140d36170
// 地址: 0x140d36170
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t* rax = *(arg2 + 0x20)
void* const rdi = *rax
*(arg2 + 0x20) = &rax[1]
void* rax_2
int64_t rax_3
void* rdx

if (rdi != 0)
    rax_2 = sub_140bdf2e0()
    rdx = *(rdi + 0x10)
    rax_3 = sx.q(*(rax_2 + 0x38))

if (rdi == 0 || rax_3.d s> *(rdx + 0x38) || *(*(rdx + 0x30) + (rax_3 << 3)) != rax_2 + 0x30)
    rdi = nullptr

char* rax_5 = *(arg2 + 0x20)
void* arg_10 = nullptr
uint32_t rcx_1 = zx.d(*rax_5)
*(arg2 + 0x20) = &rax_5[1]
void* result = (&data_143e1cd60)[zx.q(rcx_1)](*(arg2 + 0x18), arg2, &arg_10, &data_143e1cd60)
void* rcx_3 = arg_10

if (rcx_3 != 0)
    result = sub_140be1130(*(rcx_3 + 0x10), rdi)

if (rcx_3 == 0 || result.b == 0)
    *arg3 = nullptr
    arg3[1] = 0
else
    void* rcx_5 = arg_10
    *arg3 = rcx_5
    
    if (rcx_5 == 0)
        arg3[1] = 0
    
    result = sub_140d21950(rcx_5, rdi)
    arg3[1] = result

return result
