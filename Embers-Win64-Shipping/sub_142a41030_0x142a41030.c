// 函数: sub_142a41030
// 地址: 0x142a41030
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

if (data_14400f121 != 0)
    return 

uint64_t rcx_1 = zx.q(data_14401b1a0)
TEB* gsbase
void* ThreadLocalStoragePointer = gsbase->ThreadLocalStoragePointer
data_14400f121 = 1
int64_t* rsi_2 = *(ThreadLocalStoragePointer + (rcx_1 << 3)) + 8
struct _TEB* Self_1 = gsbase->NtTib.Self
data_143cc8258 = Self_1
int64_t rbx_1 = *rsi_2
sub_142a43620("process init: 0x%zx\n", Self_1)
int64_t rax_2 = sub_142a40de0(data_143cc8258) ^ rbx_1
data_143cc8260 = rax_2 ^ &data_143cc7730
int64_t rcx_8 = (rax_2 u>> 0x1e ^ rax_2) * -0x40a7b892e31b1a47
int64_t rdx_4 = (rcx_8 u>> 0x1b ^ rcx_8) * -0x6b2fb644ecceee15
bool cond:0_1 = data_14400f379 != 0
data_143cc8268 = rdx_4 u>> 0x1f ^ rdx_4

if (not(cond:0_1))
    data_14400f379 = 1
    data_14400f374 = FlsAlloc(sub_142a40eb0)

sub_142a42250()
sub_142a41030()

if (*rsi_2 == &data_14360daa0)
    if (data_143cc8258 == 0 || data_143cc8258 == gsbase->NtTib.Self)
        *rsi_2 = &data_143cc7730
    else
        void** rax_8
        int64_t rdx_5
        rax_8, rdx_5 = sub_142a41d50(0xe18, &data_14400f130)
        
        if (rax_8 != 0)
            memcpy(rax_8, &data_14360daa0, 0xb50)
            struct _TEB* Self = gsbase->NtTib.Self
            rax_8[0x165] = Self
            rax_8[0x167] = sub_142a40de0(Self)
            int64_t rax_11 = sub_142a45470(rax_8) ^ rax_8
            *rax_8 = &rax_8[0x16a]
            rax_8[0x166] = rax_11 | 1
            memset(&rax_8[0x16a], 0, 0x2c8)
            rax_8[0x16c] = rax_8
            rax_8[0x178] = &rax_8[0x17b]
            rax_8[0x17a] = &rax_8[0x17b]
            *rsi_2 = rax_8
        else
            sub_142a432b0("failed to allocate thread local heap memory\n", rdx_5)
    
    if (data_143cc8258 != 0 && data_143cc8258 != gsbase->NtTib.Self)
        j_sub_142a44ce0(**rsi_2 + 0x1e8, 1)
        FlsSetValue(data_14400f374, gsbase->NtTib.Self | 1)

sub_142a45200()
