// 函数: sub_1426f5030
// 地址: 0x1426f5030
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

uint64_t rax

if (arg1[0x4f].b == 0 && arg1[0x37].b != 0)
    rax = zx.q(arg1[0x47].d)
    
    if (rax.d != 0xffffffff && arg4 != 0xffffffff && (arg4 == rax.d || arg4 == 0 || rax.d == 0))
        void* rax_1 = arg1[0x15]
        
        if (rax_1 == 0)
            rax_1 = sub_141ee69e0(arg1)
        
        rax = sub_1426fbe40(rax_1)
        
        if (rax != 0)
            sub_1426f6a40(rax, arg1)

if (arg1[0x37].b == 0)
    return 

rax = zx.q(arg1[0x47].d)

if (rax.d == 0xffffffff || arg4 == 0xffffffff || (arg4 != rax.d && arg4 != 0 && rax.d != 0))
    return 

*(arg1 + 0x1b9) &= 0xbf
char rax_2 = 0
char arg_22 = 3

if (arg5 == 0)
    rax_2 = 0x40

*(arg1 + 0x1b9) |= rax_2
int64_t rax_3 = *arg1
int16_t arg_20 = (arg3 & 0xfff8) | data_143b58116
(*(rax_3 + 0x440))(arg1, &arg_20)
