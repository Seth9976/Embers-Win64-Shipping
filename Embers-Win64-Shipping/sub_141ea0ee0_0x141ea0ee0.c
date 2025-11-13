// 函数: sub_141ea0ee0
// 地址: 0x141ea0ee0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

if (arg1 == 0 || arg3 == 0)
    return 

int64_t r8 = sx.q(*(*(arg4 + 0x78) + 0x3c))
char rsi_1 = not.b((*(arg4 + 0x80)).b) & 1
int32_t i_2 = arg3[1].d

if (i_2 s<= 0)
    return 

void* rdi_1 = nullptr
uint64_t i_1 = zx.q(i_2)
uint64_t i

do
    void* rdx
    
    if (arg3[1].d != 0)
        void* rax_1 = *arg3
        
        if (rsi_1 == 0 && (rax_1.b & 1) != 0)
            rax_1 = (rax_1 s>> 1) + arg3
        
        rdx = rdi_1 + rax_1
    else
        rdx = nullptr
    
    int128_t zmm0 = *(arg2 + 0x80)
    int64_t var_48 = *(arg2 + 0x78)
    int128_t var_38_1 = zmm0
    int32_t var_28_1 = *(arg2 + 0x90)
    int64_t var_40_1 = arg1
    sub_141eaaa50(&var_48, rdx)
    rdi_1 += r8
    i = i_1
    i_1 -= 1
while (i != 1)
