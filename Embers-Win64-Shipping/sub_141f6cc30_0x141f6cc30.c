// 函数: sub_141f6cc30
// 地址: 0x141f6cc30
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int32_t var_18 = 0xffffffff
int64_t var_28 = 0
int32_t var_20 = 0
sub_140d3cc80(sub_14259ad30(), &var_28, 1, 0x10, 0)
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
    
    void* rbx_1 = *(rdx_1 + (sx.q(i) << 3))
    
    if (sub_14242f5b0(arg1, *(rbx_1 + 0xa0)) != 0)
        int32_t rax_4 = *(rbx_1 + 0xc)
        void* const rax_8
        
        if (rax_4 s>= data_143e1d9b4)
            rax_8 = nullptr
        else
            uint32_t rdx_3 = zx.d(rax_4.w)
            
            if (rax_4 s< 0)
                rax_4 += 0xffff
                rdx_3 -= 0x10000
            
            rax_8 = *(data_143e1d9a0 + (sx.q(rax_4 s>> 0x10) << 3)) + sx.q(rdx_3) * 0x18
        
        if (((*(rax_8 + 8) u>> 0x1d).b & 1) == 0)
            sub_141f70300(rbx_1)
    
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

return sub_141f76b30(arg1) __tailcall
