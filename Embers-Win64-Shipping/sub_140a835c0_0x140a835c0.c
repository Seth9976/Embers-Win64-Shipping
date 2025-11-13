// 函数: sub_140a835c0
// 地址: 0x140a835c0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void var_858
int64_t rax_1 = __security_cookie ^ &var_858
uint32_t rsi = arg3
int64_t r15 = 0
uint32_t var_828 = rsi
int32_t var_824 = 0
int64_t var_768[0x2]
uint64_t rax_2 = sub_140b659c0(arg3, &var_768, 0x64)
int32_t var_824_1 = rax_2.d
uint64_t result = sub_140b21160(&var_768, (rax_2 << 3).d, 0)

if (result.d != *(arg1 + 0xe0) || rsi != *(arg1 + 0xe4))
    int32_t i_4 = 0
    *(arg1 + 0xe0) = result.d
    int32_t rax_3 = 0
    int64_t* r13_1 = nullptr
    *(arg1 + 0xe4) = rsi
    int64_t rbx_1 = -1
    int32_t var_7d0 = 0
    int64_t* var_820 = nullptr
    int64_t var_818_1 = 0
    
    if (rax_2.d s> 0)
        int64_t i = 0
        
        do
            uint64_t rdx_2 = var_768[i]
            char var_448[0x400]
            var_448[0] = 0
            int16_t var_838_1 = 0
            sub_140a4d510(zx.q(rax_3), rdx_2, &var_448, 0x400)
            int64_t var_810 = 0
            int32_t rsi_1 = 0
            int64_t var_808_1 = 0
            int32_t r14_1 = 0
            
            if (var_448[0] != 0)
                do
                    rbx_1 += 1
                while (var_448[rbx_1] != 0)
                
                if (rbx_1.d + 1 s> 0)
                    sub_1405947f0(&var_810, rbx_1.d + 1)
                    r14_1 = var_808_1:4.d
                    rsi_1 = var_808_1.d
                    r15 = var_810
                
                rsi_1 += rbx_1.d + 1
                var_808_1.d = rsi_1
                
                if (rsi_1 s> r14_1)
                    sub_140594770(&var_810)
                    r14_1 = var_808_1:4.d
                    rsi_1 = var_808_1.d
                    r15 = var_810
                
                sub_1405a7220(r15, rbx_1.d + 1, &var_448, rbx_1.d + 1, 0x3f)
            
            int64_t i_5 = sx.q(i_4)
            i_4 = (i_5 + 1).d
            var_818_1.d = i_4
            
            if (i_4 s> var_818_1:4.d)
                sub_1405a4f90(&var_820)
                i_4 = var_818_1.d
                r13_1 = var_820
            
            int64_t rax_5 = i_5 * 2
            i += 1
            r13_1[rax_5] = r15
            r15 = 0
            r13_1[rax_5 + 1].d = rsi_1
            *(&r13_1[rax_5] + 0xc) = r14_1
            rax_3 = var_7d0 + 1
            var_810 = 0
            int64_t var_808_2 = 0
            rbx_1 = -1
            var_7d0 = rax_3
        while (i s< sx.q(var_824_1))
        
        rsi = var_828
    
    int64_t* rax_8
    uint64_t rbx_3
    int32_t r14_2
    int64_t r15_1
    TEB* gsbase
    int64_t var_800
    uint64_t var_7c0
    
    if (rsi != data_143de5470)
        sub_140a755d0()
        
        if (data_143db7b48
                s> *(0x14 + *(gsbase->ThreadLocalStoragePointer + (zx.q(data_14401b1a0) << 3))))
            _Init_thread_header(&data_143db7b48)
            
            if (data_143db7b48 == 0xffffffff)
                data_143db7b38 = 0
                data_143db7b40 = 0
                atexit(sub_142cbd600)
                _Init_thread_footer(&data_143db7b48)
        
        EnterCriticalSection(&data_143db7b50)
        void* r9_2 = &data_143db7b78
        void* rcx_15
        
        if (data_143db9380 == data_143db93bc)
        label_140a838d0:
            rcx_15 = nullptr
        else
            void* rcx_12 = data_143db95c0
            void* r8_3 = &data_143db93c0
            
            if (rcx_12 != 0)
                r8_3 = rcx_12
            
            int32_t rax_11 = *(r8_3 + (((sx.q(data_143db95c8) - 1) & sx.q(rsi)) << 2))
            
            if (rax_11 == 0xffffffff)
            label_140a838d0_1:
                rcx_15 = nullptr
            else
                void* rcx_13 = data_143db9378
                
                if (rcx_13 != 0)
                    r9_2 = rcx_13
                
                while (true)
                    int64_t rdx_13 = sx.q(rax_11) * 3
                    rcx_15 = r9_2 + (rdx_13 << 3)
                    
                    if (*(r9_2 + (rdx_13 << 3)) == rsi)
                        break
                    
                    rax_11 = *(rcx_15 + 0x10)
                    
                    if (rax_11 == 0xffffffff)
                        goto label_140a838d0_2
                
                if (rax_11 == 0xffffffff)
                label_140a838d0_2:
                    rcx_15 = nullptr
        
        void* rsi_2 = rcx_15 + 8
        
        if (rcx_15 == 0)
            rsi_2 = nullptr
        
        int64_t* rsi_4
        
        if (rsi_2 == 0)
            LeaveCriticalSection(&data_143db7b50)
            rsi_4 = &data_143db7b38
        else
            rsi_4 = *rsi_2 + 8
            LeaveCriticalSection(&data_143db7b50)
        
        int32_t r14_3 = rsi_4[1].d
        rbx_3 = 0
        int64_t rsi_5 = *rsi_4
        var_7c0 = 0
        int32_t var_7b8_1 = r14_3
        
        if (r14_3 != 0)
            sub_1405a4c70(&var_7c0, r14_3, 0)
            rbx_3 = var_7c0
            memcpy(rbx_3, rsi_5, r14_3 * 2)
        else
            int32_t var_7b4_1 = 0
        
        r15_1 = var_800
        rax_8 = &var_7c0
        r14_2 = 2
    else
        var_800 = 0
        int32_t var_7f8_1 = 0
        sub_1405947f0(&var_800, 0xb)
        int32_t rax_7 = var_7f8_1 + 0xb
        var_7f8_1 = rax_7
        
        if (rax_7 s> 0)
            sub_140594770(&var_800)
        
        r15_1 = var_800
        UnDecorator::getReferenceType(r15_1, u"GameThread", 0x16)
        rbx_3 = var_7c0
        rax_8 = &var_800
        r14_2 = 1
    int32_t r12_1 = rax_8[1].d
    uint64_t rsi_6 = 0
    var_7d0.q = *rax_8
    uint64_t var_7f0 = 0
    
    if (r12_1 != 0)
        sub_1405a4c70(&var_7f0, r12_1, 0)
        rsi_6 = var_7f0
        memcpy(rsi_6, var_7d0.q, r12_1 * 2)
    
    if ((r14_2.b & 2) != 0)
        r14_2 &= 0xfffffffd
        
        if (rbx_3 != 0)
            int64_t* rcx_20 = data_143ddb3f0
            
            if (rcx_20 == 0)
                sub_140a750a0()
                rcx_20 = data_143ddb3f0
            
            (*(*rcx_20 + 0x30))(rcx_20, rbx_3)
    
    if ((r14_2.b & 1) != 0 && r15_1 != 0)
        int64_t* rcx_21 = data_143ddb3f0
        
        if (rcx_21 == 0)
            sub_140a750a0()
            rcx_21 = data_143ddb3f0
        
        (*(*rcx_21 + 0x30))(rcx_21, r15_1)
    
    if (r12_1 s<= 1)
        sub_140a2e390(&var_7d0, u"unknown thread (%u)", zx.q(var_828))
        
        if (rsi_6 != 0)
            int64_t* rcx_23 = data_143ddb3f0
            
            if (rcx_23 == 0)
                sub_140a750a0()
                rcx_23 = data_143ddb3f0
            
            (*(*rcx_23 + 0x30))(rcx_23, rsi_6)
        
        rsi_6 = var_7d0.q
        int32_t var_7c8
        r12_1 = var_7c8
        var_7f0 = rsi_6
        int32_t var_7e8_2 = r12_1
    
    int16_t* const r14_4 = &data_142d40450
    int16_t* var_7e0 = nullptr
    int32_t i_1 = 0
    int32_t i_3 = 0
    int32_t r15_2 = 0
    int16_t* const rax_18
    
    if (i_4 s> 0)
        int64_t* rbx_4 = r13_1
        
        while (i_1 == 0 || i_1 - 1 s< 0x200)
            sub_140a20ba0(&var_7e0, &data_142e61d38, 2)
            int32_t rax_17 = rbx_4[1].d
            int32_t r8_9 = rax_17 - 1
            
            if (rax_17 == 0)
                r8_9 = 0
            
            sub_140a20ba0(&var_7e0, *rbx_4, r8_9)
            sub_140a20ba0(&var_7e0, &data_142d6acb4, 2)
            i_1 = i_3
            r15_2 += 1
            rbx_4 = &rbx_4[2]
            
            if (r15_2 s>= i_4)
                break
        
        rax_18 = var_7e0
    
    if (i_4 s<= 0 || i_1 == 0)
        rax_18 = &data_142d40450
    
    int32_t* const var_830_1 = &data_142d6acb4
    int16_t* const var_838_2 = rax_18
    uint64_t r8_10 = &data_142d40450
    
    if (r12_1 != 0)
        r8_10 = rsi_6
    
    int16_t* var_7a8
    sub_140a2e390(&var_7a8, u"Hang detected on %s:%s%s%sCheck log for full callstack.", r8_10)
    sub_140b19e60()
    void* rdx_22 = data_1439a8bd0
    (*(rdx_22 + 0x50))(&data_1439a8bd0, rdx_22)
    int16_t* const rcx_28 = &data_142d40450
    int32_t var_7a0
    
    if (var_7a0 != 0)
        rcx_28 = var_7a8
    
    sub_140b62df0(rcx_28, &var_768, var_824_1)
    result = arg1
    
    if (*(result + 0xe8) != 0)
        if (data_143cd80cc
                s> *(0x14 + *(gsbase->ThreadLocalStoragePointer + (zx.q(data_14401b1a0) << 3))))
            _Init_thread_header(&data_143cd80cc)
            
            if (data_143cd80cc == 0xffffffff)
                sub_140af2b60()
                data_143cd80c8 = sub_140b21a10(&data_143dbb3f0, u"nullrhi")
                _Init_thread_footer(&data_143cd80cc)
        
        if ((data_143de5426 == 0 || data_143de5427 != 0) && data_143cd80c8 == 0)
            wchar16 const* const var_838_3 = u"ReportHangError_Title"
            void var_780
            sub_140aaba50(sub_140aae800(), &var_780, u"Application Hang Detected", u"MessageDialog")
            PWSTR* rax_22 = sub_140ac6680(&var_780)
            PWSTR rbx_5
            
            if (rax_22[1].d == 0)
                rbx_5 = &data_142d40450
            else
                rbx_5 = *rax_22
            
            wchar16 const* const var_838_4 = u"ReportHangError_Body"
            void var_798
            sub_140aaba50(sub_140aae800(), &var_798, 
                The application has hung and will now close. We apologize for the inconvenience.", 
                MessageDialog")
            int16_t** rax_24 = sub_140ac6680(&var_798)
            
            if (rax_24[1].d != 0)
                r14_4 = *rax_24
            
            sub_140b709d0(0, r14_4, rbx_5)
            int64_t* var_790
            
            if (var_790 != 0)
                var_790[1].d -= 1
                
                if (var_790[1].d == 1)
                    (**var_790)(var_790)
                    int32_t rax_27 = *(var_790 + 0xc)
                    *(var_790 + 0xc) -= 1
                    
                    if (rax_27 == 1)
                        (*(*var_790 + 8))(var_790, 1)
                
                rsi_6 = var_7f0
                r13_1 = var_820
                i_4 = var_818_1.d
            
            int64_t* var_778
            
            if (var_778 != 0)
                var_778[1].d -= 1
                
                if (var_778[1].d == 1)
                    (**var_778)(var_778)
                    int32_t r14_5 = *(var_778 + 0xc)
                    *(var_778 + 0xc) -= 1
                    
                    if (r14_5 == 1)
                        (*(*var_778 + 8))(var_778, zx.q(r14_5))
                
                rsi_6 = var_7f0
                r13_1 = var_820
                i_4 = var_818_1.d
        
        int32_t rcx_29
        rcx_29.b = 1
        result = sub_140b721f0(rcx_29.b)
    
    int16_t* rbx_8 = var_7a8
    
    if (rbx_8 != 0)
        int64_t* rcx_38 = data_143ddb3f0
        
        if (rcx_38 == 0)
            sub_140a750a0()
            rcx_38 = data_143ddb3f0
        
        result = (*(*rcx_38 + 0x30))(rcx_38, rbx_8)
    
    int16_t* rbx_9 = var_7e0
    
    if (rbx_9 != 0)
        int64_t* rcx_39 = data_143ddb3f0
        
        if (rcx_39 == 0)
            sub_140a750a0()
            rcx_39 = data_143ddb3f0
        
        result = (*(*rcx_39 + 0x30))(rcx_39, rbx_9)
    
    if (rsi_6 != 0)
        int64_t* rcx_40 = data_143ddb3f0
        
        if (rcx_40 == 0)
            sub_140a750a0()
            rcx_40 = data_143ddb3f0
        
        result = (*(*rcx_40 + 0x30))(rcx_40, rsi_6)
    
    int64_t* rsi_7 = r13_1
    
    if (i_4 != 0)
        int32_t i_2
        
        do
            int64_t rbx_10 = *rsi_7
            
            if (rbx_10 != 0)
                int64_t* rcx_41 = data_143ddb3f0
                
                if (rcx_41 == 0)
                    sub_140a750a0()
                    rcx_41 = data_143ddb3f0
                
                result = (*(*rcx_41 + 0x30))(rcx_41, rbx_10)
            
            rsi_7 = &rsi_7[2]
            i_2 = i_4
            i_4 -= 1
        while (i_2 != 1)
    
    if (r13_1 != 0)
        int64_t* rcx_42 = data_143ddb3f0
        
        if (rcx_42 == 0)
            sub_140a750a0()
            rcx_42 = data_143ddb3f0
        
        result = (*(*rcx_42 + 0x30))(rcx_42, r13_1)

__security_check_cookie(rax_1 ^ &var_858)
return result
