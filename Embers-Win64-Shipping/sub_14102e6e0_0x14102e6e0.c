// 函数: sub_14102e6e0
// 地址: 0x14102e6e0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int32_t i = &__return_addr
int32_t i_1 = *(arg1 + 0x130)

if (i_1 != 0)
    uint64_t rflags_1
    int32_t temp0_1
    temp0_1, rflags_1 = _bit_scan_forward(i_1)
    int32_t rdi_1 = temp0_1
    
    if (i_1 != 0)
        int64_t rax = sx.q(arg5)
        int64_t r14_2 = rax << 5
        
        do
            void* rsi_1 = *(arg1 + (zx.q(rdi_1) << 3) + 0x140)
            int32_t* rax_3 = sub_141021a40(arg2, arg4, *(rsi_1 + 0x138))
            int64_t r10_1 = *(arg4 + 0x88)
            void* rcx_1 = *(rax_3 + 0x48)
            int32_t r9_1 = rax_3[0xc] + arg3
            uint64_t rax_6 = zx.q(r9_1 * rax_3[0xf] + rax_3[0xb])
            
            if ((rcx_1.b & 1) != 0)
                rcx_1 = (rcx_1 s>> 1) + &rax_3[0x12]
            
            *(rax_6 + rcx_1) = *(r14_2 + r10_1)
            *(rax_6 + rcx_1 + 0x10) = *(r14_2 + r10_1 + 0x10)
            rax_3[0x18].b = 1
            void* rax_7 = *(rax_3 + 0x48)
            
            if ((rax_7.b & 1) != 0)
                rax_7 = (rax_7 s>> 1) + &rax_3[0x12]
            
            int32_t* var_40_1 = rax_3
            int32_t var_30_1 = r9_1
            *(zx.q(rax_3[0xb] + r9_1 * rax_3[0xf] + 0x38) + rax_7) = arg8
            rax_3[0x18].b = 1
            void* rdx_2 = *((rax << 3) + *(arg4 + 0x78))
            int64_t var_48 = *(rsi_1 + 0x138)
            int64_t var_38_1 = *(rdx_2 + 0x110)
            sub_141003b00(rsi_1, rdx_2, 0, nullptr, 0, 0, arg6, arg7, 0, 0, 0, 0, 0, 0, 
                *(rax_3 + 0x70), &var_48)
            int32_t rax_16 = 1 << rdi_1.b
            rdi_1 = 0x20
            i = not.d(rax_16) & i_1
            i_1 = i
            
            if (i != 0)
                uint64_t rflags_2
                int32_t temp0_2
                temp0_2, rflags_2 = _bit_scan_forward(i)
                rdi_1 = temp0_2
        while (i != 0)

return i
