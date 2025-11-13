// 函数: sub_1426be890
// 地址: 0x1426be890
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t* r9 = *(arg1 + 0x38)
int64_t* rdi = nullptr

if (r9 != 0)
    int32_t rax_1 = *(r9 + 0xc)
    void* const rax_8
    
    if (rax_1 s>= data_143e1d9b4)
        rax_8 = nullptr
    else
        int16_t temp0_1
        int32_t temp1_1
        temp0_1:temp1_1 = sx.q(rax_1)
        uint32_t rdx_1 = zx.d(temp0_1)
        int32_t rax_3 = temp1_1 + rdx_1
        rax_8 = *(data_143e1d9a0 + (sx.q(rax_3 s>> 0x10) << 3)) + sx.q(zx.d(rax_3.w) - rdx_1) * 0x18
    
    if (((*(rax_8 + 8) u>> 0x1d).b & 1) == 0)
        sub_1426b81d0(r9, arg1, arg2)

if (*(arg1 + 0x70) == 0)
    return 

int64_t* rcx_5 = *(arg1 + 0x68)

if (rcx_5 == 0 || (*(*rcx_5 + 0x28))(rcx_5) == 0)
    return 

if (*(arg1 + 0x70) != 0)
    rdi = *(arg1 + 0x68)

(*(*rdi + 0x50))(rdi, arg1, zx.q(arg2))
