// 函数: sub_140d34f80
// 地址: 0x140d34f80
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
int64_t rcx_1 = *(arg2 + 0x18)
int128_t var_18 = zx.o(0)
uint32_t rdx_1 = zx.d(*rax_5)
*(arg2 + 0x20) = &rax_5[1]
void* result = (&data_143e1cd60)[zx.q(rdx_1)](rcx_1, arg2, &var_18, &data_143e1cd60, var_18)
void* rdx_3 = var_18.q

if (rdx_3 != 0)
    result = *(rdx_3 + 0x10)
    int64_t rcx_2 = sx.q(*(rbx + 0x38))
    
    if (rcx_2.d s<= *(result + 0x38))
        result = *(result + 0x30)
        
        if (*(result + (rcx_2 << 3)) == rbx + 0x30)
            *arg3 = rdx_3
            return result

*arg3 = nullptr
return result
