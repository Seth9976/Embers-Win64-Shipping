// 函数: sub_140abcf90
// 地址: 0x140abcf90
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int16_t* result = nullptr
int16_t* r9 = nullptr
int32_t i = 0
int16_t* result_1 = arg1
wchar16 ch = *arg1
int16_t* var_108 = nullptr
int64_t var_100 = 0

if (ch != 0)
    do
        if (wcschr(u"+-0123456789.ful", ch) == 0)
            break
        
        int16_t rdi_1 = *result_1
        
        if (rdi_1 != 0)
            int32_t rdx_1 = var_100.d
            int32_t rsi_1 = rdx_1 - 1
            
            if (rdx_1 s<= 0)
                rsi_1 = 0
            
            int32_t rax_1
            rax_1.b = rdx_1 s<= 0
            int32_t rax_3 = rax_1 + 1 + rdx_1
            var_100.d = rax_3
            
            if (rax_3 s> var_100:4.d)
                sub_140594770(&var_108)
            
            int64_t rcx_1 = sx.q(rsi_1)
            var_108[rcx_1] = rdi_1
            var_108[rcx_1 + 1] = 0
        
        ch = result_1[1]
        result_1 = &result_1[1]
    while (ch != 0)
    
    i = var_100.d
    r9 = var_108

int16_t* string_3 = nullptr
int16_t* string_4 = nullptr
int32_t rdi_2 = 0
int64_t var_f0 = 0
int32_t r13 = 0

while (i != 0)
    if (i - 1 s<= 0)
        break
    
    if (wcschr(u"ful", r9[sx.q(i - 1) - 1]) == 0)
        break
    
    i = var_100.d
    int32_t rax_8 = i - 1
    
    if (i == 0)
        rax_8 = 0
    
    r9 = var_108
    int16_t r12_1 = r9[sx.q(rax_8) - 1]
    
    if (r12_1 != 0)
        int32_t rsi_2 = rdi_2 - 1
        
        if (rdi_2 s<= 0)
            rsi_2 = 0
        
        int32_t rdi_3
        rdi_3.b = rdi_2 s<= 0
        rdi_2 += rdi_3 + 1
        var_f0.d = rdi_2
        
        if (rdi_2 s> r13)
            sub_140594770(&string_4)
            r13 = var_f0:4.d
            rdi_2 = var_f0.d
            string_3 = string_4
        
        int64_t rax_10 = sx.q(rsi_2)
        string_3[rax_10] = r12_1
        string_3[rax_10 + 1] = 0
        i = var_100.d
        r9 = var_108
    
    int32_t r10_1 = i - 1
    
    if (i == 0)
        r10_1 = 0
    
    int32_t rdx_4 = i - 1
    
    if (i == 0)
        rdx_4 = 0
    
    int32_t rcx_4 = rdx_4 - (r10_1 - 1)
    int32_t rsi_3 = rcx_4
    
    if (rcx_4 s> 1)
        rsi_3 = 1
    
    if (rsi_3 != 0)
        int32_t rax_12 = i - rsi_3
        
        if (rax_12 != r10_1 - 1)
            if (rcx_4 s> 1)
                rdx_4 = r10_1
            
            memmove(&r9[sx.q(r10_1 - 1)], &r9[sx.q(rdx_4)], (rax_12 - (r10_1 - 1)) * 2)
            i = var_100.d
            r9 = var_108
        
        i -= rsi_3
        var_100.d = i

if (sub_140a24720(&var_108) != 0)
    int16_t* const _String = &data_142d40450
    int16_t* const string = &data_142d40450
    
    if (rdi_2 != 0)
        string = string_3
    
    wchar16* rax_17
    double zmm0_1
    rax_17, zmm0_1 = wcschr(string, 0x66)
    
    if (rax_17 == 0)
        int16_t* string_1 = &data_142d40450
        
        if (rdi_2 != 0)
            string_1 = string_3
        
        if (wcschr(string_1, 0x75) == 0)
            int16_t* string_2 = &data_142d40450
            
            if (var_100.d != 0)
                string_2 = var_108
            
            wchar16* rax_22
            int64_t zmm0_2
            rax_22, zmm0_2 = wcschr(string_2, 0x2e)
            
            if (rax_22 == 0)
                int32_t var_88 = 0
                
                if (var_100.d != 0)
                    _String = var_108
                
                char var_60_1 = 0
                int64_t var_80_1 = _wtoi64(_String)
                sub_140a99d90(arg2, &var_88)
                int64_t* var_70
                
                if (var_60_1 != 0 && var_70 != 0)
                    var_70[1].d -= 1
                    
                    if (var_70[1].d != 1)
                        string_3 = string_4
                    else
                        (**var_70)(var_70)
                        int32_t rdi_7 = *(var_70 + 0xc)
                        *(var_70 + 0xc) -= 1
                        
                        if (rdi_7 != 1)
                            string_3 = string_4
                        else
                            (*(*var_70 + 8))(var_70, 1)
                            string_3 = string_4
            else
                int32_t var_b8 = 3
                
                if (var_100.d != 0)
                    _String = var_108
                
                char var_90_1 = 0
                wcstod(_String, nullptr)
                int64_t var_b0_1 = zmm0_2
                sub_140a99d90(arg2, &var_b8)
                int64_t* var_a0
                
                if (var_90_1 != 0 && var_a0 != 0)
                    var_a0[1].d -= 1
                    
                    if (var_a0[1].d != 1)
                        string_3 = string_4
                    else
                        (**var_a0)(var_a0)
                        int32_t rdi_6 = *(var_a0 + 0xc)
                        *(var_a0 + 0xc) -= 1
                        
                        if (rdi_6 != 1)
                            string_3 = string_4
                        else
                            (*(*var_a0 + 8))(var_a0, 1)
                            string_3 = string_4
        else
            int32_t var_e8 = 1
            
            if (var_100.d != 0)
                _String = var_108
            
            char var_c0_1 = 0
            uintmax_t var_e0_1 = _wcstoui64(_String, nullptr, 0)
            sub_140a99d90(arg2, &var_e8)
            int64_t* var_d0
            
            if (var_c0_1 != 0 && var_d0 != 0)
                var_d0[1].d -= 1
                
                if (var_d0[1].d != 1)
                    string_3 = string_4
                else
                    (**var_d0)(var_d0)
                    int32_t rdi_5 = *(var_d0 + 0xc)
                    *(var_d0 + 0xc) -= 1
                    
                    if (rdi_5 != 1)
                        string_3 = string_4
                    else
                        (*(*var_d0 + 8))(var_d0, 1)
                        string_3 = string_4
    else
        if (var_100.d != 0)
            _String = var_108
        
        _wtof(_String)
        *arg2 = 2
        int64_t zmm2
        zmm2.d = fconvert.s(zmm0_1)
        *(arg2 + 8) = zmm2
        void var_48
        
        if (&var_48 != &arg2[4])
            sub_1405d57e0(&arg2[4])
    
    result = result_1

if (string_3 != 0)
    sub_140a74f90(string_3)

int16_t* rcx_23 = var_108

if (rcx_23 != 0)
    sub_140a74f90(rcx_23)

return result
