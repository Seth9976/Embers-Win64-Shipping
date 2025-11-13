// 函数: sub_1408d7590
// 地址: 0x1408d7590
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

struct IModuleInterface::FDefaultModuleImpl::VTable** result = j_sub_140a82f30(0x18)
void* rdi = nullptr

if (result == 0)
    return 0

result[2] = 0
*result = &FDefaultModuleImpl::`vftable'{for `IModuleInterface'}
result[1] = &data_142d44d70
result[2].b = 0

if (data_143de5432 == 0)
    void* rcx_1 = data_143e1a338
    
    if (rcx_1 == 0)
        void* rax = sub_140cde0b0()
        sub_140d19010(rax, 
            NewObject with empty name can't be used to create default subobjects (inside of UObject "
        "derived class constructor) as it produces incon")
        int64_t arg_10 = 0
        void* rax_2 = sub_140d2dfc0(sub_140baa6d0(), rax, 0, 0, 0, 0, 0, 0, 0)
        data_143e1a338 = rax_2
        int32_t rax_3 = *(rax_2 + 0xc)
        
        if (rax_3 s< data_143e1d9b4)
            int16_t temp0_1
            int32_t temp1_1
            temp0_1:temp1_1 = sx.q(rax_3)
            uint32_t rdx_3 = zx.d(temp0_1)
            int32_t rax_5 = temp1_1 + rdx_3
            rdi =
                *(data_143e1d9a0 + (sx.q(rax_5 s>> 0x10) << 3)) + sx.q(zx.d(rax_5.w) - rdx_3) * 0x18
        
        *(rdi + 8) |= 0x40000000
        rcx_1 = data_143e1a338
    
    sub_140b9aa70(rcx_1, &result[1])
    result[2].b = 1

*result = &data_142e0e188
result[1] = &data_142e0e1c8
return result
