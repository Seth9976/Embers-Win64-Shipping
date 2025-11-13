// 函数: sub_1423efb40
// 地址: 0x1423efb40
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t* rdi = arg2
int64_t* rcx = *(arg1 + 0x7d0)

if (arg2 != rcx)
    if (rcx != 0 && *(arg1 + 0x7f0) != 0)
        (*(*rcx + 0x268))(rcx, arg1)
    
    *(arg1 + 0x7f0) = 0
    void* const rax_9
    
    if (rdi != 0)
        int32_t rax_2 = *(rdi + 0xc)
        
        if (rax_2 s>= data_143e1d9b4)
            rax_9 = nullptr
        else
            int16_t temp0_1
            int32_t temp1_1
            temp0_1:temp1_1 = sx.q(rax_2)
            uint32_t rdx_2 = zx.d(temp0_1)
            int32_t rax_4 = temp1_1 + rdx_2
            rax_9 =
                *(data_143e1d9a0 + (sx.q(rax_4 s>> 0x10) << 3)) + sx.q(zx.d(rax_4.w) - rdx_2) * 0x18
    
    if (rdi == 0 || ((*(rax_9 + 8) u>> 0x1d).b & 1) != 0)
        rdi = nullptr
    
    *(arg1 + 0x7d0) = rdi
    
    if (rdi != 0)
        *(arg1 + 0x7f0) = (*(*rdi + 0x260))(rdi, arg1)
    
    sub_140599090(arg1 + 0x7d8)

return zx.q(*(arg1 + 0x7f0))
