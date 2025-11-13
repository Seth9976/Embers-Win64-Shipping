// 函数: sub_141f2f2c0
// 地址: 0x141f2f2c0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

if ((arg1[0x6a].b & 1) != 0)
    int64_t* r8_1 = *arg1
    
    if (r8_1 != 0)
        int32_t rax_1 = *(r8_1 + 0xc)
        void* const rax_8
        
        if (rax_1 s>= data_143e1d9b4)
            rax_8 = nullptr
        else
            int16_t temp0_1
            int32_t temp1_1
            temp0_1:temp1_1 = sx.q(rax_1)
            uint32_t rdx_2 = zx.d(temp0_1)
            int32_t rax_3 = temp1_1 + rdx_2
            rax_8 =
                *(data_143e1d9a0 + (sx.q(rax_3 s>> 0x10) << 3)) + sx.q(zx.d(rax_3.w) - rdx_2) * 0x18
        
        if (((*(rax_8 + 8) u>> 0x1d).b & 1) == 0)
            sub_141f39c80(r8_1)

*arg1 = 0
int64_t rcx_5 = arg1[0x68]

if (rcx_5 != 0)
    sub_140a74f90(rcx_5)

int64_t rcx_6 = arg1[0x44]

if (rcx_6 == 0)
    return 

return sub_140a74f90(rcx_6) __tailcall
