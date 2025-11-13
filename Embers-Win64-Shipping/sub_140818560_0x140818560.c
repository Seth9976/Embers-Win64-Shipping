// 函数: sub_140818560
// 地址: 0x140818560
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int16_t rax = *(arg1 + 0x12)

if (rax == 0xffff)
    if (*(arg1 + 8) == 0 || *(arg1 + 0x10) == 1)
        rax = 0
        *(arg1 + 0x12) = 0
    else
        void* rax_1 = sub_140761a70(arg1 + 8)
        int16_t rcx_1 = *(rax_1 + 0x5c)
        rax = (*(rax_1 + 0x58) - 1 + rcx_1) & neg.w(rcx_1)
        *(arg1 + 0x12) = rax

int32_t arg_8
memcpy(&arg_8, *(arg1 + 0x18), sx.d(rax))
int512_t result
result.o = arg_8
return result
