// 函数: sub_14106f030
// 地址: 0x14106f030
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t result = data_143e2ca98

if (result == 0)
    wchar16 const (* rdi_1)[0x27] = data_1439b4e48
    void* rax = sub_140cde0b0()
    result = sub_140d2ee50(sub_14106f450(), rax, rdi_1, 0)
    data_143e2ca98 = result
    
    if (result == 0)
        int64_t* rax_2 = sub_14106f450()
        void arg_8
        uint64_t rbx_2 = *sub_140b58260(&arg_8, data_1439b4e48, 1)
        void* rax_4 = sub_140cde0b0()
        uint32_t rax_7
        rax_7.b = (rbx_2 u>> 0x20).d == 0
        
        if ((rax_7.b & sub_140b5b8a0(rbx_2.d, 0)) != 0)
            sub_140d19010(rax_4, 
                NewObject with empty name can't be used to create default subobjects (inside of UObject "
            "derived class constructor) as it produces incon")
        
        void* rdi_2 = nullptr
        void* rax_8 = sub_140d2dfc0(rax_2, rax_4, rbx_2, 0, 0, 0, 0, 0, 0)
        data_143e2ca98 = rax_8
        int32_t rax_9 = *(rax_8 + 0xc)
        
        if (rax_9 s< data_143e1d9b4)
            int16_t temp0_1
            int32_t temp1_1
            temp0_1:temp1_1 = sx.q(rax_9)
            uint32_t rdx_5 = zx.d(temp0_1)
            int32_t rax_11 = temp1_1 + rdx_5
            rdi_2 = *(data_143e1d9a0 + (sx.q(rax_11 s>> 0x10) << 3))
                + sx.q(zx.d(rax_11.w) - rdx_5) * 0x18
        
        *(rdi_2 + 8) |= 0x40000000
        return data_143e2ca98

return result
