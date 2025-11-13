// 函数: sub_1422f3140
// 地址: 0x1422f3140
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t rsi = data_143f559b8
int64_t rcx

if (data_143de5480 == 0)
    rcx = 0
else
    rcx.b = GetCurrentThreadId() != data_143de5470

int32_t rax_2 = *(rsi + (rcx << 2))

if (rax_2 u<= 3)
    arg1[0x2a4].d = rax_2

TEB* gsbase
int32_t* r14_1 = *(gsbase->ThreadLocalStoragePointer + (zx.q(data_14401b1a0) << 3)) + 0x14
uint64_t result = zx.q(*r14_1)

if (data_143f56528 s> result.d)
    int64_t r8_1
    result, r8_1 = _Init_thread_header(&data_143f56528)
    
    if (data_143f56528 == 0xffffffff)
        int64_t* rcx_11 = data_143db18d0
        
        if (rcx_11 == 0)
            sub_140a53c40()
            rcx_11 = data_143db18d0
        
        r8_1.b = 1
        int64_t* rax_17 = (*(*rcx_11 + 0xb0))(rcx_11, u"r.MobileMSAA", r8_1)
        
        if (rax_17 != 0)
            int64_t rdx_2 = *rax_17
            rax_17 = (*(rdx_2 + 0x58))(rax_17, rdx_2)
        
        data_143f56520 = rax_17
        result = _Init_thread_footer(&data_143f56528)

if (arg1[0x2a9].d s<= 1)
    int64_t rsi_1 = data_143f56520
    
    if (rsi_1 != 0)
        int64_t rcx_2
        
        if (data_143de5480 == 0)
            rcx_2 = 0
        else
            result = GetCurrentThreadId()
            rcx_2.b = result.d != data_143de5470
        
        if (*(rsi_1 + (rcx_2 << 2)) s> 1)
            arg1[0x2a4].d = 0

if (*arg1 != 0)
    if (data_143f56538 s> *r14_1)
        _Init_thread_header(&data_143f56538)
        
        if (data_143f56538 == 0xffffffff)
            int64_t* rcx_13 = data_143db18d0
            
            if (rcx_13 == 0)
                sub_140a53c40()
                rcx_13 = data_143db18d0
            
            int64_t r8_2
            r8_2.b = 1
            data_143f56530 = (*(*rcx_13 + 0xb0))(rcx_13, u"r.MSAACount", r8_2)
            _Init_thread_footer(&data_143f56538)
    
    int64_t rdx_1 = sx.q((*U"1111")[sx.q(arg1[0x2a9].d)])
    
    if (arg1[0x2a4].d == 3 && test_bit(data_143f13ca8, zx.q(rdx_1.d)))
        if (rdx_1.d u> 0x30)
        label_1422f3259:
            
            if (*(rdx_1 * 0x14 + 0x143f025f8) s>= 3)
                goto label_1422f3264
        else
            switch (rdx_1)
                case 0, 2, 4, 6, 0xc, 0xd, 0x10, 0x12, 0x14, 0x19, 0x1b, 0x1c, 0x1f, 0x30
                label_1422f3264:
                    int64_t* rcx_7 = data_143f56530
                    
                    if ((*(*rcx_7 + 0x90))(rcx_7) s<= 0)
                        arg1[0x2a4].d = 2
                case 1, 3, 5, 7, 8, 9, 0xa, 0x13, 0x17, 0x20, 0x21, 0x22, 0x23, 0x24, 0x25, 0x26, 
                        0x27, 0x28, 0x29, 0x2a, 0x2b, 0x2c, 0x2d, 0x2e, 0x2f
                    goto label_1422f3259
    
    if (data_143f56548 s> *r14_1)
        _Init_thread_header(&data_143f56548)
        
        if (data_143f56548 == 0xffffffff)
            int64_t* rcx_14 = data_143db18d0
            
            if (rcx_14 == 0)
                sub_140a53c40()
                rcx_14 = data_143db18d0
            
            int64_t r8_3
            r8_3.b = 1
            int64_t* rax_21 = (*(*rcx_14 + 0xb0))(rcx_14, u"r.PostProcessAAQuality", r8_3)
            
            if (rax_21 != 0)
                int64_t rdx_3 = *rax_21
                rax_21 = (*(rdx_3 + 0x58))(rax_21, rdx_3)
            
            data_143f56540 = rax_21
            _Init_thread_footer(&data_143f56548)
    
    if (data_143f56558 s> *r14_1)
        _Init_thread_header(&data_143f56558)
        
        if (data_143f56558 == 0xffffffff)
            int64_t* rcx_16 = data_143db18d0
            
            if (rcx_16 == 0)
                sub_140a53c40()
                rcx_16 = data_143db18d0
            
            int64_t r8_4
            r8_4.b = 1
            int64_t* rax_23 = (*(*rcx_16 + 0xb0))(rcx_16, u"r.MobileHDR", r8_4)
            
            if (rax_23 != 0)
                int64_t rdx_4 = *rax_23
                rax_23 = (*(rdx_4 + 0x58))(rax_23, rdx_4)
            
            data_143f56550 = rax_23
            _Init_thread_footer(&data_143f56558)
    
    if (data_143f56568 s> *r14_1)
        _Init_thread_header(&data_143f56568)
        
        if (data_143f56568 == 0xffffffff)
            int64_t* rcx_18 = data_143db18d0
            
            if (rcx_18 == 0)
                sub_140a53c40()
                rcx_18 = data_143db18d0
            
            int64_t r8_5
            r8_5.b = 1
            int64_t* rax_25 = (*(*rcx_18 + 0xb0))(rcx_18, u"r.MobileMSAA", r8_5)
            
            if (rax_25 != 0)
                int64_t rdx_5 = *rax_25
                rax_25 = (*(rdx_5 + 0x58))(rax_25, rdx_5)
            
            data_143f56560 = rax_25
            _Init_thread_footer(&data_143f56568)
    
    if (data_143f56570 s> *r14_1)
        _Init_thread_header(&data_143f56570)
        
        if (data_143f56570 == 0xffffffff)
            int64_t rsi_4 = data_143f56560
            int64_t rcx_20
            
            if (data_143de5480 == 0)
                rcx_20 = 0
            else
                rcx_20.b = GetCurrentThreadId() != data_143de5470
            
            data_143f5656c = *(rsi_4 + (rcx_20 << 2))
            _Init_thread_footer(&data_143f56570)
    
    int64_t rsi_2 = data_143f56540
    int64_t rcx_8
    
    if (data_143de5480 == 0)
        rcx_8 = 0
    else
        rcx_8.b = GetCurrentThreadId() != data_143de5470
    
    int32_t rax_15 = *(rsi_2 + (rcx_8 << 2))
    int32_t rsi_3
    
    if (rax_15 s>= 0)
        rsi_3 = 6
        
        if (rax_15 s< 6)
            rsi_3 = rax_15
    else
        rsi_3 = 0
    
    result = *arg1
    char rcx_9 = (*(result + 0x28)).b
    
    if ((rcx_9 & 1) != 0)
        if ((rcx_9 & 4) != 0 && rsi_3 s> 0)
            goto label_1422f3315
        
        arg1[0x2a4].d = 0
    else if (*(arg1 + 0xd75) == 0 || (rcx_9 & 4) == 0 || rsi_3 s<= 0)
        arg1[0x2a4].d = 0
    else
    label_1422f3315:
        
        if (arg1[0x2a9].d s<= 1)
            int64_t rbp_1 = data_143f56550
            int64_t rcx_10
            
            if (data_143de5480 == 0)
                rcx_10 = 0
            else
                result = GetCurrentThreadId()
                rcx_10.b = result.d != data_143de5470
            
            if (*(rbp_1 + (rcx_10 << 2)) == 0)
                arg1[0x2a4].d = 0
            else if (arg1[0x2a9].d s<= 1 && data_143f5656c u> 1)
                arg1[0x2a4].d = 0
    
    if (arg1[0x2a4].d == 2)
        result = *arg1
        
        if ((*(result + 0x28) & 8) == 0 || *(result + 0x41) == 0 || rsi_3 s< 3)
            arg1[0x2a4].d = 1

if (arg1[0x2a4].d == 2 && arg1[1] == 0)
    arg1[0x2a4].d = 0

return result
