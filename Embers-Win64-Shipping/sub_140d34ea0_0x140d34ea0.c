// 函数: sub_140d34ea0
// 地址: 0x140d34ea0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t* rax = *(arg2 + 0x20)
void* const rbx = *rax
*(arg2 + 0x20) = &rax[1]
void* rax_2
int64_t rax_3
void* rdx

if (rbx != 0)
    rax_2 = sub_140bdf2e0()
    rdx = *(rbx + 0x10)
    rax_3 = sx.q(*(rax_2 + 0x38))

if (rbx == 0 || rax_3.d s> *(rdx + 0x38) || *(*(rdx + 0x30) + (rax_3 << 3)) != rax_2 + 0x30)
    rbx = nullptr

char* rax_5 = *(arg2 + 0x20)
int128_t var_18 = zx.o(0)
uint32_t rcx_1 = zx.d(*rax_5)
*(arg2 + 0x20) = &rax_5[1]
char rax_8 = (&data_143e1cd60)[zx.q(rcx_1)](*(arg2 + 0x18), arg2, &var_18, &data_143e1cd60, var_18)
void* rsi_1 = var_18.q

if (rsi_1 != 0)
    rax_8 = sub_140be1130(*(rsi_1 + 0x10), rbx)
    
    if (rax_8 != 0)
        *arg3 = rsi_1
        void* rax_9 = sub_140d21950(rsi_1, rbx)
        arg3[1] = rax_9
        return rax_9

*arg3 = 0
arg3[1] = 0
return rax_8
