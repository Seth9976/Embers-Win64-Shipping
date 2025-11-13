// 函数: sub_141d04e90
// 地址: 0x141d04e90
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int16_t* _String_1 = nullptr
int64_t var_58 = 0
int32_t var_50 = 0
sub_1405947f0(&var_58, 9)
int32_t rax = var_50 + 9

if (rax s> 0)
    sub_140594770(&var_58)

UnDecorator::getReferenceType(var_58, u"pakchunk", 0x12)
int16_t* var_38
sub_140b18720(&var_38, arg1, 1)
int32_t r12 = -1

if (sub_140a32a50(&var_38, &var_58, 1) != 0)
    int32_t r15_2
    
    if (rax == 0)
        r15_2 = 0
    else
        r15_2 = rax - 1
    
    int32_t rdi_1 = 0
    int64_t r13_1 = sx.q(r15_2)
    int64_t rsi_1 = r13_1 << 1
    
    if (iswdigit(*(rsi_1 + var_38)) != 0)
        int32_t rcx_7
        int32_t r14_1
        
        while (true)
            int32_t var_30
            rcx_7 = var_30
            int32_t rax_4 = rcx_7 - 1
            
            if (rcx_7 == 0)
                rax_4 = 0
            
            r14_1 = rdi_1 + r15_2
            
            if (r14_1 s>= rax_4)
                break
            
            if (iswdigit(*(rsi_1 + var_38)) == 0)
                rcx_7 = var_30
                break
            
            rdi_1 += 1
            rsi_1 += 2
        
        int32_t rax_7 = rcx_7 - 1
        
        if (rcx_7 == 0)
            rax_7 = 0
        
        if (r14_1 s< rax_7)
            int16_t* const _String = &data_142d40450
            
            if (rdi_1 s>= 0)
                int32_t rsi_2 = rcx_7 - 1
                
                if (rcx_7 == 0)
                    rsi_2 = 0
                
                int32_t rdx_3
                
                if (r15_2 s>= 0)
                    rdx_3 = rsi_2
                    
                    if (r15_2 s< rsi_2)
                        rdx_3 = r15_2
                else
                    rdx_3 = 0
                
                int64_t r8_2 = sx.q(rdi_1) + r13_1
                int64_t r9_1 = sx.q(rdx_3)
                
                if (r8_2 s< r9_1)
                    rsi_2 = rdx_3
                else if (r8_2 s< sx.q(rsi_2))
                    rsi_2 = r8_2.d
                
                int16_t* _String_3 = nullptr
                int16_t* const rax_9 = &data_142d40450
                int64_t var_40_1 = 0
                
                if (rcx_7 != 0)
                    rax_9 = var_38
                
                int16_t* _String_2 = nullptr
                int32_t rsi_3 = rsi_2 - rdx_3
                int32_t rdi_2 = 0
                void* r15_3 = &rax_9[r9_1]
                int32_t rax_10 = 0
                
                if (r15_3 != 0 && *r15_3 != 0 && rsi_3 s> 0)
                    if (rsi_3 + 1 s> 0)
                        sub_1405947f0(&_String_3, rsi_3 + 1)
                        rax_10 = var_40_1:4.d
                        rdi_2 = var_40_1.d
                        _String_2 = _String_3
                    
                    rdi_2 = rdi_2 + 1 + rsi_3
                    var_40_1.d = rdi_2
                    
                    if (rdi_2 s> rax_10)
                        sub_140594770(&_String_3)
                        rdi_2 = var_40_1.d
                        _String_2 = _String_3
                    
                    UnDecorator::getReferenceType(_String_2, r15_3, rsi_3 * 2)
                    _String_2[sx.q(rdi_2) - 1] = 0
                
                _String_1 = _String_2
                
                if (rdi_2 != 0)
                    _String = _String_1
            
            r12 = _wtoi(_String)
            
            if (_String_1 != 0)
                sub_140a74f90(_String_1)

int16_t* rcx_13 = var_38

if (rcx_13 != 0)
    sub_140a74f90(rcx_13)

int64_t rcx_14 = var_58

if (rcx_14 != 0)
    sub_140a74f90(rcx_14)

return zx.q(r12)
