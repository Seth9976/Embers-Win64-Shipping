// 函数: sub_140ce34b0
// 地址: 0x140ce34b0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int16_t* r15 = *arg2
int32_t r14 = -1

if (iswspace(*r15) != 0)
    int32_t i
    
    do
        *arg2 += 2
        i = iswspace(**arg2)
    while (i != 0)

int16_t* rcx_2 = *arg2
int16_t rax_2 = *rcx_2

if (rax_2 == 0x28 || rax_2 == 0x5b)
    void* rax_3 = &rcx_2[1]
    *arg2 = rax_3
    int16_t* _String = nullptr
    int16_t i_1 = *rax_3
    int32_t rcx_3 = 0
    int16_t* _String_1 = nullptr
    int32_t r9_1 = 0
    int32_t var_3c_1 = 0
    
    if (i_1 != 0)
        void* r8 = rax_3
        
        do
            rax_3 = r8
            
            if (i_1 == 0x29)
                break
            
            if (i_1 == 0x5d)
                break
            
            if (i_1 == 0x3d)
                sub_140b1f850(arg3, 3, u"Missing ')' in default properties subscript: %s", r15)
                
                if (_String != 0)
                    sub_140a74f90(_String)
                
                return 0
            
            *arg2 = r8 + 2
            
            if (i_1 != 0)
                int32_t rbp_1 = rcx_3 - 1
                
                if (rcx_3 s<= 0)
                    rbp_1 = 0
                
                int32_t rcx_4
                rcx_4.b = rcx_3 s<= 0
                rcx_3 += rcx_4 + 1
                
                if (rcx_3 s> r9_1)
                    sub_140594770(&_String_1)
                    r9_1 = var_3c_1
                    _String = _String_1
                
                int64_t rax_5 = sx.q(rbp_1)
                _String[rax_5] = i_1
                _String[rax_5 + 1] = 0
            
            rax_3 = *arg2
            r8 = rax_3
            i_1 = *rax_3
        while (i_1 != 0)
    
    *arg2 = rax_3 + 2
    wchar16* r8_2
    
    if (i_1 == 0)
        r8_2 = u"Missing ')' in default properties subscript: %s"
    label_140ce3750:
        r14 = 0
        sub_140b1f850(arg3, 3, r8_2, r15)
    else
        if (rcx_3 == 0 || rcx_3 - 1 s<= 0)
            r8_2 = u"Invalid subscript in default properties: %s"
            goto label_140ce3750
        
        if (iswalpha(*_String) == 0)
            if (iswdigit(*_String) == 0)
                sub_140b1f850(arg3, 3, u"Invalid subscript in default properties: %s", r15)
            else
                r14 = _wtoi(_String)
        else
            int32_t arg_10
            sub_140b58260(&arg_10, _String, 0)
            int32_t rcx_9
            rcx_9.b = sub_140b5b8a0(arg_10, 0) == 0
            
            if ((arg4 != 0 | rcx_9.b) == 0)
                r8_2 = u"Invalid subscript in default properties: %s"
                goto label_140ce3750
            
            int64_t rbx_2 = arg_10.q
            
            if (data_1439a9aa8 == data_1439a9ad4)
                r8_2 = u"Invalid subscript in default properties: %s"
                goto label_140ce3750
            
            int32_t rax_12 = sub_140b5ead0(rbx_2.d) + rbx_2:4.d
            void* rcx_11 = data_1439a9ae0
            void* rax_14 = &data_1439a9ad8
            
            if (rcx_11 != 0)
                rax_14 = rcx_11
            
            int32_t rax_15 = *(rax_14 + (((sx.q(data_1439a9ae8) - 1) & sx.q(rax_12)) << 2))
            
            if (rax_15 == 0xffffffff)
                r8_2 = u"Invalid subscript in default properties: %s"
                goto label_140ce3750
            
            int64_t r8_1 = data_1439a9aa0
            int64_t rdx_5
            
            while (true)
                rdx_5 = sx.q(rax_15)
                int64_t rcx_12 = rdx_5 * 3
                
                if (*(r8_1 + (rcx_12 << 3)) == rbx_2)
                    break
                
                rax_15 = *(r8_1 + (rcx_12 << 3) + 0x10)
                
                if (rax_15 == 0xffffffff)
                    r8_2 = u"Invalid subscript in default properties: %s"
                    goto label_140ce3750
            
            if (rax_15 == 0xffffffff)
                r8_2 = u"Invalid subscript in default properties: %s"
                goto label_140ce3750
            
            void* rcx_15 = r8_1 + rdx_5 * 0x18
            
            if (rcx_15 == 0)
                r8_2 = u"Invalid subscript in default properties: %s"
                goto label_140ce3750
            
            int64_t* rcx_16 = *(rcx_15 + 8)
            
            if (rcx_16 == 0)
                r8_2 = u"Invalid subscript in default properties: %s"
                goto label_140ce3750
            
            int32_t rax_17 = sub_140be0d00(rcx_16, rbx_2, 0)
            r14 = rax_17
            
            if (rax_17 == 0xffffffff)
                r8_2 = u"Invalid subscript in default properties: %s"
                goto label_140ce3750
    
    if (_String != 0)
        sub_140a74f90(_String)

return zx.q(r14)
