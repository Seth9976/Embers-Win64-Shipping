// 函数: sub_14102e570
// 地址: 0x14102e570
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int32_t* rax_1 = sub_141021a40(arg2, arg4, *(arg1 + 0x138))
void* rdx_1 = *(rax_1 + 0x48)
int32_t r11_1 = rax_1[0xc] + arg3
uint64_t rax_4 = zx.q(rax_1[0xf] * r11_1 + rax_1[0xb])

if ((rdx_1.b & 1) != 0)
    rdx_1 = (rdx_1 s>> 1) + &rax_1[0x12]

int64_t r9 = sx.q(arg5)
int128_t* rcx_3 = (r9 << 5) + *(arg4 + 0x88)
*(rax_4 + rdx_1) = *rcx_3
*(rax_4 + rdx_1 + 0x10) = rcx_3[1]
rax_1[0x18].b = 1
void* rax_5 = *(rax_1 + 0x48)

if ((rax_5.b & 1) != 0)
    rax_5 = (rax_5 s>> 1) + &rax_1[0x12]

int32_t* var_20 = rax_1
int32_t var_10 = r11_1
*(zx.q(rax_1[0xb] + 0x38 + rax_1[0xf] * r11_1) + rax_5) = arg8
rax_1[0x18].b = 1
void* rdx_6 = *(*(arg4 + 0x78) + (r9 << 3))
int64_t var_28 = *(arg1 + 0x138)
int64_t var_18 = *(rdx_6 + 0x110)
return sub_141003b00(arg1, rdx_6, 0, nullptr, 0, 0, arg6, arg7, 0, 0, 0, 0, 0, 0, *(rax_1 + 0x70), 
    &var_28)
