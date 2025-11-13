// 函数: sub_141e7fd60
// 地址: 0x141e7fd60
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int32_t var_18 = 0xffffffff
int64_t var_28 = 0
int32_t var_20 = 0
sub_140d3cc80(sub_14259e970(), &var_28, 1, 0x10, 0)
int32_t r8_1 = var_20
int32_t i = var_18 + 1
int64_t rdx_1 = var_28
int32_t i_1 = i

if (i s< r8_1)
    while (*(rdx_1 + (sx.q(i) << 3)) == 0)
        int32_t i_2 = i + 1
        i_1 = i_2
        i = i_2
        
        if (i_2 s>= r8_1)
            break

while (i s>= 0)
    if (i s>= r8_1)
        break
    
    void* r8_2 = *(rdx_1 + (sx.q(i) << 3))
    void* arg_10 = r8_2
    sub_141e6dd00(arg1 + 0x1b0, &arg_10, r8_2 + 0x28)
    r8_1 = var_20
    i = i_1 + 1
    rdx_1 = var_28
    i_1 = i
    
    if (i s< r8_1)
        while (*(rdx_1 + (sx.q(i) << 3)) == 0)
            int32_t i_3 = i + 1
            i_1 = i_3
            i = i_3
            
            if (i_3 s>= r8_1)
                break

if (rdx_1 != 0)
    sub_140a74f90(rdx_1)

return sub_141e819f0(arg1, zx.o(0)) __tailcall
