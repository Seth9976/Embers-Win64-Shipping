// 函数: sub_1420a0010
// 地址: 0x1420a0010
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

if (arg2 == 0)
    return 

void* rax_1 = sub_1424d09c0()
void* rcx = *(arg2 + 0x10)
int64_t rax = sx.q(*(rax_1 + 0x38))

if (rax.d s> *(rcx + 0x38) || *(*(rcx + 0x30) + (rax << 3)) != rax_1 + 0x30)
    return 

int32_t i = 0

if (*(arg1 + 0x30) s<= 0)
    return 

int64_t* rdi_1 = nullptr

do
    void* rbp_1 = *(rdi_1 + *(arg1 + 0x28))
    
    if (rbp_1 != 0)
        void var_18
        int32_t* rax_3 = sub_140acc990(&var_18, *(arg1 + 0x38) + sx.q(i) * 0xc)
        int64_t rdx_3 = *(arg2 + 0xa0)
        int128_t var_28 = *rax_3
        sub_1421321b0(rbp_1, rdx_3, &var_28)
    
    i += 1
    rdi_1 = &rdi_1[1]
while (i s< *(arg1 + 0x30))
