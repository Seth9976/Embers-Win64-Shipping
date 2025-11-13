// 函数: sub_141a4b950
// 地址: 0x141a4b950
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void var_88
int64_t rax_1 = __security_cookie ^ &var_88
int64_t rdx = sx.q(arg3[1].d)
int32_t temp0 = rdx.d
int32_t var_60 = 0xffffffff
int32_t r9 = (rdx - 1).d

if (temp0 == 0)
    r9 = -1

int32_t rax_2 = (rdx - 1).d

if (temp0 == 0)
    rax_2 = -1

if (rdx.d == 0)
    rax_2 = 0

if (rax_2 s> 0)
    int16_t* rcx = *arg3
    
    if (rdx.d == 0)
        r9 = 0
    
    if (rcx[sx.q(r9) - 1] == 0x5d)
        int16_t* rbx_1 = &rcx[rdx]
        
        while (rbx_1 != rcx)
            rbx_1 -= 2
            
            if (*rbx_1 == 0x5b)
                int32_t rbx_3 = ((rbx_1 - rcx) s>> 1).d
                
                if (rbx_3 == 0xffffffff)
                    goto label_141a4b9cf
                
                int16_t* _String_2 = &data_142d40450
                int16_t* const r14_1 = &data_142d40450
                int16_t* _String = nullptr
                
                if (rdx.d != 0)
                    r14_1 = rcx
                
                int32_t rdx_1 = 0
                int32_t var_50_1 = 0
                int32_t rax_4 = 0
                int32_t var_4c_1 = 0
                int16_t* _String_1 = nullptr
                
                if (r14_1 != 0 && *r14_1 != 0 && rbx_3 s> 0)
                    if (rbx_3 + 1 s> 0)
                        sub_1405947f0(&_String, rbx_3 + 1)
                        rax_4 = var_4c_1
                        rdx_1 = var_50_1
                        _String_1 = _String
                    
                    int32_t rbp_2 = rdx_1 + 1 + rbx_3
                    
                    if (rbp_2 s> rax_4)
                        sub_140594770(&_String)
                        _String_1 = _String
                    
                    UnDecorator::getReferenceType(_String_1, r14_1, rbx_3 * 2)
                    _String_1[sx.q(rbp_2) - 1] = 0
                    
                    if (rbp_2 != 0)
                        _String_2 = _String_1
                
                void* rax_6 = sub_140cd2ae0(arg2, _String_2)
                int32_t rax_7 = arg3[1].d
                int32_t rcx_6 = rax_7 - 1
                
                if (rax_7 == 0)
                    rcx_6 = 0
                
                if (rcx_6 - rbx_3 - 3 u<= 9)
                    memcpy(&_String, *arg3 + (sx.q(rbx_3 + 1) << 1), (rcx_6 - rbx_3 - 2) * 2)
                    int32_t var_60_1 = _wtoi(&_String)
                
                *arg1 = rax_6.o
                
                if (_String_1 != 0)
                    sub_140a74f90(_String_1)
                
                goto label_141a4bb4c

label_141a4b9cf:
int16_t* rsi

if (rdx.d == 0)
    rsi = &data_142d40450
else
    rsi = *arg3

*arg1 = sub_140cd2ae0(arg2, rsi).o
label_141a4bb4c:
__security_check_cookie(rax_1 ^ &var_88)
return arg1
