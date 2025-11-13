// 函数: sub_142bfe670
// 地址: 0x142bfe670
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

uint32_t var_28[0x4]
int32_t arg_20
char rax = sub_142bff250(arg1, arg2, &var_28, &arg_20)

if (rax == 0)
    return rax

uint32_t rdx = var_28[0]

if (arg_20 - rdx u>= 0xa)
    int128_t* rax_3 = *(arg1 + 0x10)
    int128_t* const rcx = &data_14369a5d0
    int16_t* rbx_1 = 6
    
    if (rax_3 != 0)
        rcx = rax_3
    
    int16_t* r11_1 = 8
    void* rdi_2 = zx.q(rdx) + rcx[1].q
    int16_t* rax_6 = 6
    
    if (zx.w(*(rdi_2 + 2)) * 0x100 + zx.w(*(rdi_2 + 3))
            s< zx.w(*(rdi_2 + 6)) * 0x100 + zx.w(*(rdi_2 + 7)))
        rax_6 = 2
    
    int16_t rax_7 = *(rax_6 + rdi_2)
    arg_20.w = rax_7
    int32_t r10_1 = sx.d(zx.w(rax_7.b) * 0x100 + zx.w(arg_20:1.b))
    *arg3 = r10_1
    int16_t* rax_10 = 8
    
    if (zx.w(*(rdi_2 + 4)) * 0x100 + zx.w(*(rdi_2 + 5))
            s> zx.w(*(rdi_2 + 9)) + zx.w(*(rdi_2 + 8)) * 0x100)
        rax_10 = 4
    
    int16_t rax_11 = *(rax_10 + rdi_2)
    arg_20.w = rax_11
    int32_t r9_3 = sx.d(zx.w(rax_11.b) * 0x100 + zx.w(arg_20:1.b))
    arg3[1] = r9_3
    
    if (zx.w(*(rdi_2 + 2)) * 0x100 + zx.w(*(rdi_2 + 3))
            s> zx.w(*(rdi_2 + 6)) * 0x100 + zx.w(*(rdi_2 + 7)))
        rbx_1 = 2
    
    int16_t rax_15 = *(rbx_1 + rdi_2)
    arg_20.w = rax_15
    arg3[2] = sx.d(zx.w(arg_20:1.b) + zx.w(rax_15.b) * 0x100) - r10_1
    
    if (zx.w(*(rdi_2 + 4)) * 0x100 + zx.w(*(rdi_2 + 5))
            s< zx.w(*(rdi_2 + 8)) * 0x100 + zx.w(*(rdi_2 + 9)))
        r11_1 = 4
    
    int16_t rax_21 = *(r11_1 + rdi_2)
    arg_20.w = rax_21
    arg3[3] = sx.d(zx.w(arg_20:1.b) + zx.w(rax_21.b) * 0x100) - r9_3

int32_t rax_2
rax_2.b = 1
return rax_2
