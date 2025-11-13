// 函数: sub_1425a3500
// 地址: 0x1425a3500
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void* i = *arg1

for (void* rsi_2 = (sx.q(arg1[1].d) << 4) + i; i != rsi_2; i += 0x10)
    void* rdi_1 = *(i + 8)
    
    if (rdi_1 != 0)
        sub_140bc0410(rdi_1)
        j_sub_140a74f90(rdi_1)

arg1[1].d = 0

if (*(arg1 + 0xc) != 0)
    sub_14061cd70(arg1, 0)

int64_t rcx_3 = *arg1

if (rcx_3 == 0)
    return 

return sub_140a74f90(rcx_3) __tailcall
