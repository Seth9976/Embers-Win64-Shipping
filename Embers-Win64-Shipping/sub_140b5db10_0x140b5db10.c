// 函数: sub_140b5db10
// 地址: 0x140b5db10
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int16_t* _Source_1 = nullptr
int32_t var_20 = 0
sub_1405947f0(&_Source_1, 0x16)
int32_t rax = var_20 + 0x16

if (rax s> 0)
    sub_140594770(&_Source_1)

UnDecorator::getReferenceType(_Source_1, u"Unhandled Exception: ", 0x2c)
uint64_t r8 = zx.q(*arg1)
int32_t rax_1 = r8.d

if (r8.d u> 0xc000008c)
    uint64_t rax_3 = zx.q(rax_1 + 0x3fffff73)
    
    if (rax_3.d u> 0x70)
    label_140b5dc08:
        int64_t var_18
        sub_140a2e390(&var_18, u"0x%08x", r8)
        int32_t var_10
        int32_t r8_2
        
        if (var_10 == 0)
            r8_2 = 0
        else
            r8_2 = var_10 - 1
        
        sub_140a20ba0(&_Source_1, var_18, r8_2)
        int64_t rcx_18 = var_18
        
        if (rcx_18 != 0)
            sub_140a74f90(rcx_18)
    else
        switch (rax_3)
            case 0
                sub_140a20ba0(&_Source_1, u"EXCEPTION_FLT_DENORMAL_OPERAND", 0x1e)
            case 1
                sub_140a20ba0(&_Source_1, u"EXCEPTION_FLT_DIVIDE_BY_ZERO", 0x1c)
            case 2, 4, 5, 6, 8, 0xa, 0xb, 0xc, 0xd, 0xe, 0xf, 0x10, 0x11, 0x12, 0x13, 0x14, 0x15, 
                    0x16, 0x17, 0x18, 0x19, 0x1a, 0x1b, 0x1c, 0x1d, 0x1e, 0x1f, 0x20, 0x21, 0x22, 
                    0x23, 0x24, 0x25, 0x26, 0x27, 0x28, 0x29, 0x2a, 0x2b, 0x2c, 0x2d, 0x2e, 0x2f, 
                    0x30, 0x31, 0x32, 0x33, 0x34, 0x35, 0x36, 0x37, 0x38, 0x39, 0x3a, 0x3b, 0x3c, 
                    0x3d, 0x3e, 0x3f, 0x40, 0x41, 0x42, 0x43, 0x44, 0x45, 0x46, 0x47, 0x48, 0x49, 
                    0x4a, 0x4b, 0x4c, 0x4d, 0x4e, 0x4f, 0x50, 0x51, 0x52, 0x53, 0x54, 0x55, 0x56, 
                    0x57, 0x58, 0x59, 0x5a, 0x5b, 0x5c, 0x5d, 0x5e, 0x5f, 0x60, 0x61, 0x62, 0x63, 
                    0x64, 0x65, 0x66, 0x67, 0x68, 0x69, 0x6a, 0x6b, 0x6c, 0x6d, 0x6e, 0x6f
                goto label_140b5dc08
            case 3
                sub_140a20ba0(&_Source_1, u"EXCEPTION_FLT_INVALID_OPERATION", 0x1f)
            case 7
                sub_140a20ba0(&_Source_1, u"EXCEPTION_INT_DIVIDE_BY_ZERO", 0x1c)
            case 9
                sub_140a20ba0(&_Source_1, u"EXCEPTION_PRIV_INSTRUCTION", 0x1a)
            case 0x70
                sub_140a20ba0(&_Source_1, u"EXCEPTION_STACK_OVERFLOW", 0x18)
else if (r8.d == 0xc000008c)
    sub_140a20ba0(&_Source_1, u"EXCEPTION_ARRAY_BOUNDS_EXCEEDED", 0x1f)
else if (rax_1 == 0x80000002)
    sub_140a20ba0(&_Source_1, u"EXCEPTION_DATATYPE_MISALIGNMENT", 0x1f)
else
    if (rax_1 == 0xc0000005)
        sub_140a20ba0(&_Source_1, u"EXCEPTION_ACCESS_VIOLATION ", 0x1b)
        int64_t rax_2 = *(arg1 + 0x20)
        
        if (rax_2 == 0)
            sub_140a20ba0(&_Source_1, u"reading address ", 0x10)
        else if (rax_2 == 1)
            sub_140a20ba0(&_Source_1, u"writing address ", 0x10)
        
        r8 = zx.q(arg1[0xa])
        goto label_140b5dc08
    
    if (rax_1 != 0xc000001d)
        goto label_140b5dc08
    
    sub_140a20ba0(&_Source_1, u"EXCEPTION_ILLEGAL_INSTRUCTION", 0x1d)

int16_t* const _Source = &data_142d40450

if (rax != 0)
    _Source = _Source_1

wchar16* result = wcsncpy(&data_143de3420, _Source, 0xfff)
int16_t* _Source_2 = _Source_1
data_143de541e = 0

if (_Source_2 == 0)
    return result

return sub_140a74f90(_Source_2)
