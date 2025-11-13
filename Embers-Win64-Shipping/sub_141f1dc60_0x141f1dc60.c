// 函数: sub_141f1dc60
// 地址: 0x141f1dc60
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

char rdi = *(arg1 + 0xea)
*(arg1 + 0xea) = 1
sub_141ee7360(arg1)
char result_1 = arg1[0x1d].b
char result = result_1

if ((result_1 & 8) != 0)
    void* rax = arg1[0x16]
    void* const rax_8
    
    if (rax != 0)
        int32_t rax_1 = *(rax + 0xc)
        
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
    
    if (rax == 0 || ((*(rax_8 + 8) u>> 0x1d).b & 1) != 0)
        void* rcx_4 = arg1[0x14]
        result = result_1
        
        if (rcx_4 != 0)
            int64_t rdx_4 = *(rcx_4 + 0x130)
            
            if (rdx_4 != 0)
                (*(*arg1 + 0x440))(arg1, rdx_4)
                result = arg1[0x1d].b
    else
        result = result_1

if ((result & 0x20) != 0)
    result = (*(*arg1 + 0x4f8))(arg1)

*(arg1 + 0xea) = rdi
return result
