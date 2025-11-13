// 函数: sub_140a6c5d0
// 地址: 0x140a6c5d0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int32_t rax = arg2[1].d
void* rdi = nullptr
int32_t r9 = rax - 1

if (rax == 0)
    r9 = 0

int16_t* const rdx

if (rax == 0)
    rdx = &data_142d40450
else
    rdx = *arg2

if (r9 != 0)
    sub_140a6da50(arg1 + 0x50, rdx, 0, r9, arg1 + 0x10, 1)
    int16_t rax_2 = *(arg1 + 0x18)
    int32_t rdx_2
    
    if (rax_2 s< 0)
        rdx_2 = *(arg1 + 0x1c)
    else
        rdx_2 = sx.d(rax_2) s>> 5
    
    if ((rax_2.b & 0x11) == 0)
        rdi = arg1 + 0x1a
        
        if ((rax_2.b & 2) == 0)
            rdi = *(arg1 + 0x28)
    
    rax = sub_142a829e0(rdi, rdx_2)
    
    if (rax != 0)
        if (rax == 1)
            int32_t rax_3
            rax_3.b = 1
            return rax_3
        
        if (rax == 2)
            rax.b = 2
            return rax

rax.b = 0
return rax
