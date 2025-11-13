// 函数: sub_140962ca0
// 地址: 0x140962ca0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void* rbx = data_143f5b298
int32_t rdi = 0

if (rbx != 0)
    void* rax_1 = sub_1424ad0c0()
    void* rcx_1 = *(rbx + 0x10)
    int64_t rax_2 = sx.q(*(rax_1 + 0x38))
    
    if (rax_2.d s<= *(rcx_1 + 0x38) && *(*(rcx_1 + 0x30) + (rax_2 << 3)) == rax_1 + 0x30)
        int64_t rax_4 = sub_142004920(rbx)
        
        if (rax_4 != 0)
            int32_t arg_1c = 0
            void arg_10
            int64_t r8_2 = (*sub_140b5e500(&arg_10, 0x11a)).q
            void* rax_6 = sub_1423dcd80(data_143f5b298, rax_4, r8_2)
            
            if (rax_6 != 0 && sub_142168a40(rax_6) s< 3)
                int64_t r8_3 = *rax_6
                int16_t* var_38
                (*(r8_3 + 0x2c0))(rax_6, &var_38, r8_3)
                int16_t* _String_2 = nullptr
                int64_t var_40_1 = 0
                sub_1405947f0(&_String_2, 2)
                int32_t rbx_3 = var_40_1.d + 2
                var_40_1.d = rbx_3
                
                if (rbx_3 s> 0)
                    sub_140594770(&_String_2)
                    rbx_3 = var_40_1.d
                
                int16_t* _String_3 = _String_2
                sub_1405a7220(_String_3, 2, &data_142d6bc34, 2, 0x3f)
                int16_t* const _String = &data_142d40450
                int16_t* const _String_4 = &data_142d40450
                
                if (rbx_3 != 0)
                    _String_4 = _String_3
                
                int32_t rax_8 = sub_140a23cf0(&var_38, _String_4, 1, 1, 0xffffffff)
                
                if (_String_3 != 0)
                    sub_140a74f90(_String_3)
                
                if (rax_8 != 0xffffffff)
                    int32_t var_30
                    int32_t rbx_5 = var_30 - 1
                    
                    if (var_30 == 0)
                        rbx_5 = 0
                    
                    int32_t rcx_13
                    
                    if (rax_8 + 1 s>= 0)
                        rcx_13 = rbx_5
                        
                        if (rax_8 + 1 s< rbx_5)
                            rcx_13 = rax_8 + 1
                    else
                        rcx_13 = 0
                    
                    int64_t r9_1 = sx.q(rcx_13)
                    
                    if (sx.q(rax_8 + 1) + 0x7fffffff s< r9_1)
                        rbx_5 = rcx_13
                    else if (sx.q(rax_8 + 1) + 0x7fffffff s< sx.q(rbx_5))
                        rbx_5 = rax_8 - -0x80000000
                    
                    _String_2 = nullptr
                    int16_t* const rax_10 = &data_142d40450
                    var_40_1.d = 0
                    
                    if (var_30 != 0)
                        rax_10 = var_38
                    
                    int16_t* _String_1 = nullptr
                    int32_t rbx_6 = rbx_5 - rcx_13
                    int32_t rsi_1 = 0
                    void* r12_1 = &rax_10[r9_1]
                    int32_t rax_11 = 0
                    var_40_1:4.d = 0
                    
                    if (r12_1 != 0 && *r12_1 != 0 && rbx_6 s> 0)
                        if (rbx_6 + 1 s> 0)
                            sub_1405947f0(&_String_2, rbx_6 + 1)
                            rax_11 = var_40_1:4.d
                            rsi_1 = var_40_1.d
                            _String_1 = _String_2
                        
                        rsi_1 = rsi_1 + 1 + rbx_6
                        var_40_1.d = rsi_1
                        
                        if (rsi_1 s> rax_11)
                            sub_140594770(&_String_2)
                            rsi_1 = var_40_1.d
                            _String_1 = _String_2
                        
                        UnDecorator::getReferenceType(_String_1, r12_1, rbx_6 * 2)
                        _String_1[sx.q(rsi_1) - 1] = 0
                    
                    if (rsi_1 s> 1)
                        if (rsi_1 != 0)
                            _String = _String_1
                        
                        rdi = _wtoi(_String)
                    
                    if (_String_1 != 0)
                        sub_140a74f90(_String_1)
                
                int16_t* rcx_19 = var_38
                
                if (rcx_19 != 0)
                    sub_140a74f90(rcx_19)

return zx.q(rdi)
