// 函数: sub_140e85410
// 地址: 0x140e85410
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t* i = *(arg1 + 0x2b8)
void* rdi_2 = &i[sx.q(*(arg1 + 0x2c0)) * 2]
char arg_8 = 0

for (; i != rdi_2; i = &i[2])
    void* rdx_1 = *i
    
    if (rdx_1 != 0 && *(rdx_1 + 0x20) != 0)
        sub_140e5a180(&arg_8, rdx_1)
