// 函数: sub_141017c10
// 地址: 0x141017c10
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void* const* result = &__return_addr
void* rdi = *(arg1 + 0x290)
void* r13 = *(rdi + 0x38)

if (r13 != 0)
    int32_t r12_2 = zx.d(*(arg1 + 0x3b66)) & *(r13 + 0x80)
    
    if (r12_2 != 0)
        int32_t arg_10
        int32_t rsi_3
        
        do
            int64_t rdx_1 = *(r13 + 0xa8)
            arg_10 = r12_2
            rsi_3 = neg.d(r12_2) & r12_2
            int32_t i = 0
            uint64_t rflags_1
            int32_t i_2
            i_2, rflags_1 = _bit_scan_reverse(rsi_3)
            
            if (rsi_3 != 0)
                i = i_2
            
            r12_2 ^= rsi_3
            int64_t i_1 = sx.q(i)
            int64_t r14_1 = *(*(arg1 + (i_1 << 3) + 0x36e0) + 0xa8)
            result = zx.q(*(rdx_1 + (i_1 << 2)))
            
            if (result.d != 0)
                int32_t rdx_2 = *(rdx_1 + (result << 2))
                int32_t* rdi_2 = rdx_1 + (result << 2) + 4
                
                do
                    void* rax_5 = *(r14_1 + (zx.q((rdx_2 u>> 8).w) << 3))
                    
                    if (rax_5 != 0 && data_1439c7a34 u> 1)
                        while (*(rax_5 + 0x20) != *(arg1 + 0x138))
                            rax_5 = *(rax_5 + 0x88)
                            
                            if (rax_5 == 0)
                                break
                    
                    void* arg_18 = rax_5
                    int32_t arg_8 = 0xffffffff
                    sub_14103da20(arg1 + 0x250, zx.d(rdx_2.b), 1, &arg_18, &arg_8)
                    rdx_2 = *rdi_2
                    result = zx.q(rdx_2 u>> 0x18)
                    rdi_2 = &rdi_2[1]
                while (result.d == i)
        while (rsi_3 != arg_10)

void* rdx_4 = *(rdi + 0x20)

if (rdx_4 != 0)
    result = sub_1410059a0(arg1, rdx_4)

if (r13 != 0)
    result = sub_141005660(arg1, r13)

void* rdx_6 = *(rdi + 0x28)

if (rdx_6 != 0)
    result = sub_141005330(arg1, rdx_6)

void* rdx_7 = *(rdi + 0x30)

if (rdx_7 != 0)
    result = sub_141004cd0(arg1, rdx_7)

void* rdx_8 = *(rdi + 0x40)

if (rdx_8 == 0)
    return result

return sub_141005000(arg1, rdx_8) __tailcall
