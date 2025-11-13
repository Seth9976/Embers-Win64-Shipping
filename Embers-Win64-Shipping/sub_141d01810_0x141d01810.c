// 函数: sub_141d01810
// 地址: 0x141d01810
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void var_108
int64_t rax_1 = __security_cookie ^ &var_108
uint64_t result

if (sub_140a32a50(arg2, &arg1[0x1e], 1).b == 0)
    result.b = 0
else
    int16_t* var_b0
    sub_140b1a780(&var_b0, arg2)
    int16_t* var_d8
    void* _Key
    int32_t var_a8
    int128_t var_98
    int64_t var_68
    uint32_t rsi_2
    
    if (*(arg1 + 0x14a) != 0)
        int32_t r8 = var_a8 - 1
        
        if (var_a8 == 0)
            r8 = 0
        
        int32_t rcx_2 = arg1[0x1f].d
        int32_t rax_2 = rcx_2 - 1
        
        if (rcx_2 == 0)
            rax_2 = -1
        
        uint32_t rdx_2 = rcx_2 - 1
        
        if (rcx_2 == 0)
            rax_2 = 0
        
        if (rcx_2 == 0)
            rdx_2 = -1
        
        if (r8 s>= rax_2)
            rsi_2 = 0
            
            if (rcx_2 != 0)
                rsi_2 = rdx_2
        else if (var_a8 == 0)
            rsi_2 = 0
        else
            rsi_2 = var_a8 - 1
        
        sub_140a35730(arg2, &var_d8)
        int16_t* const r15_1 = &data_142d40450
        int32_t var_d0
        
        if (var_d0 != 0)
            r15_1 = var_d8
        
        void* r8_1 = &r15_1[sx.q(rsi_2)]
        int32_t rcx_5
        
        if (var_d0 == 0)
            rcx_5 = 0
        else
            rcx_5 = var_d0 - 1
        
        int32_t rcx_6 = rcx_5 - rsi_2
        int32_t rdx_4 = rcx_6 - 1
        
        if (*r8_1 != 0x2f)
            rdx_4 = rcx_6
        
        void* rcx_7 = r8_1 + 2
        
        if (*r8_1 != 0x2f)
            rcx_7 = r8_1
        
        void* _Key_1 = sub_140b21410(rcx_7, rdx_4 * 2, arg1[0x20])
        int64_t rdx_6 = arg1[0x21]
        _Key = _Key_1
        uint32_t rax_4 = (_Key_1 u>> 0x38).d
        uint64_t r9_1 = zx.q(*(rdx_6 + (zx.q(rax_4) << 2)))
        result = bsearch(&_Key, arg1[0x23] + (r9_1 << 3), 
            zx.q(*(rdx_6 + (zx.q(rax_4 + 1) << 2)) - r9_1.d), 8, cmpAddrMapByPos)
        
        if (result == 0)
            int16_t* rcx_18 = var_d8
            
            if (rcx_18 != 0)
                sub_140a74f90(rcx_18)
            
            goto label_141d01d6c
        
        int64_t r8_5 = arg1[0x25]
        int64_t rdx_8 = sx.q(*(arg1[0x22] + ((result - arg1[0x23]) s>> 3 << 2)))
        
        if (r8_5 == 0)
            int64_t* rax_11 = *arg1 + 0x10
            void* rcx_14 = *rax_11
            
            if ((rcx_14.b & 1) != 0)
                rcx_14 = (rcx_14 s>> 1) + rax_11
            
            void* rdi_3 = rdx_8 * 0x50 + rcx_14
            rsi_2.b = *(rdi_3 + 0x48) u>> 1
            rsi_2.b &= 1
            
            if (arg3 != 0)
                *arg3 = *rdi_3
                arg3[1] = *(rdi_3 + 8)
                arg3[2] = *(rdi_3 + 0x10)
                *(arg3 + 0x44) = *(rdi_3 + 0x44)
                sub_141cf8ef0(&arg3[6], rdi_3 + 0x30)
                arg3[8].d = *(rdi_3 + 0x40)
                arg3[9].b = *(rdi_3 + 0x48)
                *(arg3 + 0x49) = 1
        else
            uint64_t rdx_9 = zx.q(*(arg1[0x24] + (rdx_8 << 2)))
            rsi_2.b = rdx_9.d == 0xffffffff
            
            if (arg3 != 0)
                if (rdx_9.d == 0xffffffff)
                    var_98 = data_14321e0d0
                    int64_t var_88
                    __builtin_memset(&var_88, 0, 0x1c)
                    __builtin_memset(&var_68, 0, 0x1a)
                    sub_141cf9200(arg3, &var_98)
                    sub_140a1d5c0(&var_68)
                    arg3[9].b |= 2
                    *(arg3 + 0x49) = 1
                else
                    sub_141cfedc0(arg1, rdx_9 + r8_5, arg3)
        
        int16_t* rcx_17 = var_d8
        
        if (rcx_17 != 0)
            sub_140a74f90(rcx_17)
        
        goto label_141d01d4c
    
    int16_t* const r15_2 = &data_142d40450
    int16_t* rdx_13 = &data_142d40450
    
    if (var_a8 != 0)
        rdx_13 = var_b0
    
    result = sub_141d01fc0(arg1, rdx_13)
    char* result_1 = result
    
    if (result == 0)
        goto label_141d01d6c
    
    int32_t rax_20
    
    if (var_a8 == 0)
        rax_20 = 0
    else
        rax_20 = var_a8 - 1
    
    int32_t r8_7 = arg2[1].d
    int32_t rsi_3 = r8_7 - 1
    
    if (r8_7 == 0)
        rsi_3 = 0
    
    int32_t rcx_20
    
    if (rax_20 + 1 s>= 0)
        rcx_20 = rsi_3
        
        if (rax_20 + 1 s< rsi_3)
            rcx_20 = rax_20 + 1
    else
        rcx_20 = 0
    
    int64_t r9_2 = sx.q(rcx_20)
    
    if (sx.q(rax_20 + 1) + 0x7fffffff s< r9_2)
        rsi_3 = rcx_20
    else if (sx.q(rax_20 + 1) + 0x7fffffff s< sx.q(rsi_3))
        rsi_3 = rax_20 - -0x80000000
    
    if (r8_7 != 0)
        r15_2 = *arg2
    
    void* _Key_2 = &r15_2[r9_2]
    int64_t var_c0 = 0
    rsi_2 = rsi_3 - rcx_20
    _Key = _Key_2
    int32_t var_b8_1 = 0
    int32_t rax_23 = 0
    int32_t var_b4_1 = 0
    int64_t r12_1 = 0
    int32_t r15_3 = 0
    
    if (_Key_2 != 0 && *_Key_2 != 0 && rsi_2 s> 0)
        if (rsi_2 + 1 s> 0)
            sub_1405947f0(&var_c0, rsi_2 + 1)
            rax_23 = var_b4_1
            r15_3 = var_b8_1
            r12_1 = var_c0
        
        r15_3 += rsi_2 + 1
        
        if (r15_3 s> rax_23)
            sub_140594770(&var_c0)
            r12_1 = var_c0
        
        UnDecorator::getReferenceType(r12_1, _Key, rsi_2 * 2)
        *(r12_1 + (sx.q(r15_3) << 1) - 2) = 0
    
    var_d8 = nullptr
    int32_t var_d0_1 = r15_3
    
    if (r15_3 != 0)
        sub_1405e3e80(&var_d8, r15_3, 0)
        void* rcx_25
        
        if ((var_d8.b & 1) == 0)
            rcx_25 = var_d8
        else
            rcx_25 = &var_d8 + (var_d8 s>> 1)
        
        memcpy(rcx_25, r12_1, r15_3 * 2)
    else
        int32_t var_cc_1 = 0
    
    if (r12_1 != 0)
        sub_140a74f90(r12_1)
    
    sub_141d02b90(result_1, &_Key, &var_d8)
    int64_t rax_27 = sx.q(_Key.d)
    void* rcx_30
    
    if (rax_27.d == 0xffffffff)
        rcx_30 = nullptr
    else
        void* rdx_22 = *result_1
        
        if ((rdx_22.b & 1) != 0)
            rdx_22 = &result_1[rdx_22 s>> 1]
        
        rcx_30 = (rax_27 << 5) + rdx_22
    
    void* rdx_24 = rcx_30 + 0x10
    
    if (rcx_30 == 0)
        rdx_24 = nullptr
    
    if (rdx_24 == 0)
        sub_140a1d5c0(&var_d8)
    label_141d01d6c:
        int16_t* rcx_41 = var_b0
        
        if (rcx_41 != 0)
            sub_140a74f90(rcx_41)
        
        result.b = 0
    else
        int64_t r8_13 = arg1[0x25]
        
        if (r8_13 == 0)
            int64_t* rax_30 = *arg1 + 0x10
            void* rcx_35 = *rax_30
            
            if ((rcx_35.b & 1) != 0)
                rcx_35 = (rcx_35 s>> 1) + rax_30
            
            int64_t* rdi_6 = sx.q(*rdx_24) * 0x50 + rcx_35
            rsi_2.b = rdi_6[9].b u>> 1
            rsi_2.b &= 1
            
            if (arg3 != 0)
                *arg3 = *rdi_6
                arg3[1] = rdi_6[1]
                arg3[2] = rdi_6[2]
                *(arg3 + 0x44) = *(rdi_6 + 0x44)
                *(arg3 + 0x18) = *(rdi_6 + 0x18)
                arg3[5].d = rdi_6[5].d
                sub_141cf8ef0(&arg3[6], &rdi_6[6])
                arg3[8].d = rdi_6[8].d
                arg3[9].b = rdi_6[9].b
                *(arg3 + 0x49) = 1
        else
            uint64_t rdx_25 = zx.q(*(arg1[0x24] + (sx.q(*rdx_24) << 2)))
            rsi_2.b = rdx_25.d == 0xffffffff
            
            if (arg3 != 0)
                if (rdx_25.d == 0xffffffff)
                    var_98 = data_14321e0d0
                    int64_t var_88_1
                    __builtin_memset(&var_88_1, 0, 0x1c)
                    __builtin_memset(&var_68, 0, 0x1a)
                    sub_141cf9200(arg3, &var_98)
                    sub_140a1d5c0(&var_68)
                    arg3[9].b |= 2
                    *(arg3 + 0x49) = 1
                else
                    sub_141cfedc0(arg1, rdx_25 + r8_13, arg3)
        
        sub_140a1d5c0(&var_d8)
    label_141d01d4c:
        int16_t* rcx_39 = var_b0
        rsi_2.b += 1
        
        if (rcx_39 != 0)
            sub_140a74f90(rcx_39)
        
        result = zx.q(rsi_2.b)

__security_check_cookie(rax_1 ^ &var_108)
return result
