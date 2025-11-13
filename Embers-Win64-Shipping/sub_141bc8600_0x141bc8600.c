// 函数: sub_141bc8600
// 地址: 0x141bc8600
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

sub_141bc9780(arg1)
int128_t var_18 = data_1439a93f8
uint64_t result = sub_140cdd5d0(arg1, &var_18)

if (result.d s< 0xc && arg1[0x22].d s> 0)
    result = arg1[0x21]
    void* rsi_1 = *result
    
    if (rsi_1 != 0)
        void* rax = sub_141bf7030()
        void* rdx_1 = *(rsi_1 + 0x10)
        int64_t rax_1 = sx.q(*(rax + 0x38))
        
        if (rax_1.d s<= *(rdx_1 + 0x38))
            result = *(rdx_1 + 0x30)
        
        if (rax_1.d s> *(rdx_1 + 0x38) || *(result + (rax_1 << 3)) != rax + 0x30)
            sub_140d19010(arg1, 
                NewObject with empty name can't be used to create default subobjects (inside of UObject "
            "derived class constructor) as it produces incon")
            void* rdi_1 = nullptr
            int64_t arg_10 = 0
            void* rax_3 = sub_140d2dfc0(sub_141bf7030(), arg1, 0, 0, 0, 0, 0, 0, 0)
            void* rcx_4 = *(rsi_1 + 0x30)
            *(rax_3 + 0x30) = rcx_4
            *(rcx_4 + 0x28) = rax_3
            *(rax_3 + 0x28) = arg1
            *arg1[0x21] = rax_3
            result = zx.q(*(rsi_1 + 0xc))
            
            if (result.d s< data_143e1d9b4)
                int16_t temp0_1
                int32_t temp1_1
                temp0_1:temp1_1 = sx.q(result.d)
                uint32_t rdx_4 = zx.d(temp0_1)
                int32_t rax_5 = temp1_1 + rdx_4
                result = data_143e1d9a0
                rdi_1 = *(result + (sx.q(rax_5 s>> 0x10) << 3)) + sx.q(zx.d(rax_5.w) - rdx_4) * 0x18
            
            *(rdi_1 + 8) |= 0x20000000

return result
