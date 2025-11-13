// 函数: sub_141a0ca40
// 地址: 0x141a0ca40
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int16_t* r15 = &data_143ce8560
int64_t rbx = sx.q(*(arg4 + 0xe0))
int32_t rsi = 0
uint64_t r12 = zx.q(data_14401b1a0)
int32_t r8 = 0
int64_t* r13 = *(arg5 + 0x20)
void* rdi = r13[2]

if (rbx s> 0)
    int64_t rdx = 0
    
    while (true)
        void* rcx_1 = *(arg4 + 0xd8)
        
        if ((*(arg4 + 0xd8) & 1) != 0)
            rcx_1 = (rcx_1 s>> 1) + arg4 + 0xd8
        
        if (*(rcx_1 + (rdx << 3)) == data_143f281b0)
            break
        
        r8 += 1
        rdx += 1
        
        if (rdx s>= rbx)
            goto label_141a0cae8

int16_t* rdx_1
TEB* gsbase

if (rbx s<= 0 || r8 == 0xffffffff)
label_141a0cae8:
    
    if (data_143ce8564 s> *(0x14 + *(gsbase->ThreadLocalStoragePointer + (r12 << 3))))
        _Init_thread_header(&data_143ce8564)
        
        if (data_143ce8564 == 0xffffffff)
            data_143ce8560 = 0xffff
            _Init_thread_footer(&data_143ce8564)
    
    rdx_1 = &data_143ce8560
else
    void* rcx_5 = *(arg4 + 0xe8)
    
    if ((rcx_5.b & 1) != 0)
        rcx_5 = (rcx_5 s>> 1) + arg4 + 0xe8
    
    rdx_1 = rcx_5 + (sx.q(r8) << 1)

int16_t rax_4 = *rdx_1

if (rax_4 != 0xffff)
    sub_140891ab0(arg6, *(r13[1] + 0x18), zx.d(rax_4))

uint64_t result

if (*(rdi + 0x1a2) == 0)
    int64_t r11_3 = sx.q(*(arg4 + 0xe0))
    int32_t r8_5 = 0
    
    if (r11_3 s> 0)
        int64_t rdx_8 = 0
        
        while (true)
            void* rcx_13 = *(arg4 + 0xd8)
            
            if ((*(arg4 + 0xd8) & 1) != 0)
                rcx_13 = (rcx_13 s>> 1) + arg4 + 0xd8
            
            if (*(rcx_13 + (rdx_8 << 3)) == data_143f283b0)
                break
            
            r8_5 += 1
            rdx_8 += 1
            
            if (rdx_8 s>= r11_3)
                goto label_141a0ccbd
    
    void* rdx_9
    
    if (r11_3 s<= 0 || r8_5 == 0xffffffff)
    label_141a0ccbd:
        
        if (data_143ce8564 s> *(0x14 + *(gsbase->ThreadLocalStoragePointer + (r12 << 3))))
            _Init_thread_header(&data_143ce8564)
            
            if (data_143ce8564 == 0xffffffff)
                data_143ce8560 = 0xffff
                _Init_thread_footer(&data_143ce8564)
        
        rdx_9 = &data_143ce8560
    else
        void* rcx_20 = *(arg4 + 0xe8)
        
        if ((rcx_20.b & 1) != 0)
            rcx_20 = (rcx_20 s>> 1) + arg4 + 0xe8
        
        rdx_9 = rcx_20 + (sx.q(r8_5) << 1)
    
    result = zx.q(*rdx_9)
    
    if (result.w != 0xffff)
        result = sub_140891ab0(arg6, data_1439cc020, zx.d(result.w))
else
    sub_141a0a410(&data_1439cc030, &arg5, rdi + 0x160)
    int64_t rax_5 = sx.q(arg5.d)
    void* const rdi_1
    
    if (rax_5.d == 0xffffffff)
        rdi_1 = nullptr
    else
        rdi_1 = data_1439cc030 + rax_5 * 0x28
    
    int64_t r11_2 = sx.q(*(arg4 + 0xe0))
    int32_t r8_3 = 0
    
    if (r11_2 s> 0)
        int64_t rdx_5 = 0
        
        while (true)
            void* rcx_8 = *(arg4 + 0xd8)
            
            if ((*(arg4 + 0xd8) & 1) != 0)
                rcx_8 = (rcx_8 s>> 1) + arg4 + 0xd8
            
            if (*(rcx_8 + (rdx_5 << 3)) == data_143f283b0)
                break
            
            r8_3 += 1
            rdx_5 += 1
            
            if (rdx_5 s>= r11_2)
                goto label_141a0cbf9
    
    int16_t* r8_4
    
    if (r11_2 s<= 0 || r8_3 == 0xffffffff)
    label_141a0cbf9:
        
        if (data_143ce8564 s> *(0x14 + *(gsbase->ThreadLocalStoragePointer + (r12 << 3))))
            _Init_thread_header(&data_143ce8564)
            
            if (data_143ce8564 == 0xffffffff)
                data_143ce8560 = 0xffff
                _Init_thread_footer(&data_143ce8564)
        
        r8_4 = &data_143ce8560
    else
        void* rcx_10 = *(arg4 + 0xe8)
        
        if ((rcx_10.b & 1) != 0)
            rcx_10 = (rcx_10 s>> 1) + arg4 + 0xe8
        
        r8_4 = rcx_10 + (sx.q(r8_3) << 1)
    
    result = zx.q(*r8_4)
    
    if (result.w != 0xffff)
        result = sub_140891ab0(arg6, *(*(rdi_1 + 0x18) + 0x118), zx.d(result.w))

if (data_143f0f21f != 0)
    uint64_t rdx_10 = zx.q(data_143f0f1a0)
    result = zx.q(*(&data_143f025fc + sx.q(rdx_10.d) * 0x14) u>> 0x13)
    
    if ((result.b & 1) != 0)
        result = data_143f13cd8
        
        if (test_bit(result, rdx_10))
            int64_t r10_4 = sx.q(*(arg4 + 0xe0))
            
            if (r10_4 s> 0)
                int64_t rdx_11 = 0
                
                while (true)
                    void* rcx_18 = *(arg4 + 0xd8)
                    
                    if ((*(arg4 + 0xd8) & 1) != 0)
                        rcx_18 = (rcx_18 s>> 1) + arg4 + 0xd8
                    
                    if (*(rcx_18 + (rdx_11 << 3)) == data_143f28450)
                        break
                    
                    rsi += 1
                    rdx_11 += 1
                    
                    if (rdx_11 s>= r10_4)
                        goto label_141a0cd8b
            
            if (r10_4 s<= 0 || rsi == 0xffffffff)
            label_141a0cd8b:
                
                if (data_143ce8564 s> *(0x14 + *(gsbase->ThreadLocalStoragePointer + (r12 << 3))))
                    _Init_thread_header(&data_143ce8564)
                    
                    if (data_143ce8564 == 0xffffffff)
                        data_143ce8560 = 0xffff
                        _Init_thread_footer(&data_143ce8564)
            else
                void* rcx_22 = *(arg4 + 0xe8)
                
                if ((rcx_22.b & 1) != 0)
                    rcx_22 = (rcx_22 s>> 1) + arg4 + 0xe8
                
                r15 = rcx_22 + (sx.q(rsi) << 1)
            
            result = zx.q(*r15)
            
            if (result.w != 0xffff)
                return sub_140891ab0(arg6, *r13, zx.d(result.w))

return result
