// 函数: sub_141f6c7d0
// 地址: 0x141f6c7d0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t rdi = sx.q(arg2)
TEB* gsbase

if (data_143f3bb48 s> *(0x14 + *(gsbase->ThreadLocalStoragePointer + (zx.q(data_14401b1a0) << 3))))
    _Init_thread_header(&data_143f3bb48)
    
    if (data_143f3bb48 == 0xffffffff)
        int64_t* rcx_2 = data_143db18d0
        
        if (rcx_2 == 0)
            sub_140a53c40()
            rcx_2 = data_143db18d0
        
        int64_t r8_2
        r8_2.b = 1
        data_143f3bb40 = (*(*rcx_2 + 0xb0))(rcx_2, u"r.SkinCache.DefaultBehavior", r8_2)
        _Init_thread_footer(&data_143f3bb48)

int64_t rax_2
uint64_t rdx

if (data_143f0f21f != 0)
    rdx = zx.q(data_143f0f1a0)
    rax_2 = sx.q(rdx.d)

int64_t rbx

if (data_143f0f21f == 0 || ((*(&data_143f025fc + rax_2 * 0x14) u>> 0x13).b & 1) == 0)
    rbx.b = 0
else
    rbx.b = test_bit(data_143f13cd8, rdx)

int64_t* rcx_1 = data_143f3bb40

if (rcx_1 == 0)
    rcx_1.b = 0
else
    char rax_7
    rax_7, rcx_1 = (*(*rcx_1 + 0x90))(rcx_1)
    
    if (rax_7 != 1)
        rcx_1.b = 0
    else
        rcx_1 = zx.q(rax_7)

uint64_t result = *(arg1 + 0x430)

if (result != 0 && rdi.d s>= 0 && rdi.d s< *(result + 0xe0))
    int64_t rdx_1 = rdi * 0xb8
    
    if (rdx_1 != neg.q(*(result + 0xd8)))
        result = zx.q(*(rdx_1 + *(result + 0xd8) + 0xb0))
        
        if (result.b != 0)
            rcx_1.b = result.b == 1
        
        if (rdi.d s< *(arg1 + 0x448))
            char rdx_3 = *(rdi + *(arg1 + 0x440))
            
            if (rdx_3 != 0)
                rcx_1.b = rdx_3 == 1

if (data_143a2e1b8 != 0 && (rbx.b != 0 || rcx_1.b != 0))
    result.b = 1
    return result

result.b = 0
return result
