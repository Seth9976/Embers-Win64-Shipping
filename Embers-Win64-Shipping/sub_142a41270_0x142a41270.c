// 函数: sub_142a41270
// 地址: 0x142a41270
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

sub_142a41030()
TEB* gsbase
void* result = gsbase->ThreadLocalStoragePointer
int64_t* rsi_1 = *(result + (zx.q(data_14401b1a0) << 3)) + 8

if (*rsi_1 == &data_14360daa0)
    if (data_143cc8258 == 0 || data_143cc8258 == gsbase->NtTib.Self)
        result = &data_143cc7730
        *rsi_1 = &data_143cc7730
    else
        void** rax_1
        int64_t rdx_1
        rax_1, rdx_1 = sub_142a41d50(0xe18, &data_14400f130)
        
        if (rax_1 != 0)
            memcpy(rax_1, &data_14360daa0, 0xb50)
            struct _TEB* Self = gsbase->NtTib.Self
            rax_1[0x165] = Self
            rax_1[0x167] = sub_142a40de0(Self)
            int64_t rax_4 = sub_142a45470(rax_1) ^ rax_1
            *rax_1 = &rax_1[0x16a]
            rax_1[0x166] = rax_4 | 1
            memset(&rax_1[0x16a], 0, 0x2c8)
            result = &rax_1[0x17b]
            rax_1[0x16c] = rax_1
            rax_1[0x178] = result
            rax_1[0x17a] = result
            *rsi_1 = rax_1
        else
            result = sub_142a432b0("failed to allocate thread local heap memory\n", rdx_1)
    
    if (data_143cc8258 != 0)
        result = gsbase->NtTib.Self
        
        if (data_143cc8258 != result)
            j_sub_142a44ce0(**rsi_1 + 0x1e8, 1)
            return FlsSetValue(data_14400f374, gsbase->NtTib.Self | 1)

return result
