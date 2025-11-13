// 函数: sub_141dbc050
// 地址: 0x141dbc050
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

if (arg2 == 0)
    return 

int32_t var_78_1 = 0
int64_t* rax = sub_140d2f0c0(sub_140d41340(), arg1, arg2, 0, 0, 0)

if (rax == 0)
    return 

void* rax_2 = sub_142459c10()
void* rcx_1 = rax[2]
int64_t rdx_1 = sx.q(*(rax_2 + 0x38))

if (rdx_1.d s> *(rcx_1 + 0x38) || *(*(rcx_1 + 0x30) + (rdx_1 << 3)) != rax_2 + 0x30
        || *(rax + 0x8c) != 3)
    return 

int64_t arg_10 = rax[3]
int16_t* var_58
sub_140b63b70(&arg_10, &var_58)
int32_t var_50
int32_t rcx_4 = var_50
int32_t rdi_2 = rcx_4 - 1

if (rcx_4 == 0)
    rdi_2 = 0

int32_t rdi_3 = rdi_2 - 1
int64_t rbx_2 = sx.q(rdi_3)

if (rdi_2 - 1 s>= 0)
    int64_t temp1_1
    
    do
        if (iswdigit(var_58[rbx_2]).d == 0)
            break
        
        rdi_3 -= 1
        temp1_1 = rbx_2
        rbx_2 -= 1
    while (temp1_1 - 1 s>= 0)
    rcx_4 = var_50

if (rdi_3 s>= 0)
    int32_t rax_5 = rcx_4 - 1
    int32_t r15_1 = 0
    
    if (rcx_4 == 0)
        rax_5 = 0
    
    int16_t* const _String_8 = &data_142d40450
    int16_t* _String_2
    
    if (rdi_3 s< rax_5 - 1)
        int32_t rcx_6
        int16_t* const r8_2
        
        if (rcx_4 == 0)
            rcx_6 = 0
            r8_2 = &data_142d40450
        else
            r8_2 = var_58
            rcx_6 = rcx_4 - 1
        
        int32_t rax_8 = rcx_6 - rdi_3
        int32_t rdx_3
        
        if (rax_8 - 1 s>= 0)
            rdx_3 = rcx_6
            
            if (rax_8 s<= rcx_6)
                rdx_3 = rax_8 - 1
        else
            rdx_3 = 0
        
        int16_t* r14_1 = &r8_2[sx.q(rcx_6) - sx.q(rdx_3)]
        _String_2 = nullptr
        int16_t* _String_1 = nullptr
        int32_t var_60_1 = 0
        int32_t rdx_4 = 0
        int32_t rax_10 = 0
        int16_t* _String
        int32_t r15_2
        
        if (r14_1 != 0 && *r14_1 != 0)
            int64_t rbx_3 = -1
            
            do
                rbx_3 += 1
            while (r14_1[rbx_3] != 0)
            
            if (rbx_3.d + 1 s> 0)
                sub_1405947f0(&_String_2, rbx_3.d + 1)
                int32_t var_5c
                rax_10 = var_5c
                rdx_4 = var_60_1
                _String_1 = _String_2
            
            r15_2 = rbx_3.d + 1 + rdx_4
            
            if (r15_2 s> rax_10)
                sub_140594770(&_String_2)
                _String_1 = _String_2
            
            UnDecorator::getReferenceType(_String_1, r14_1, (rbx_3.d + 1) * 2)
            _String = _String_1
        
        if (r14_1 == 0 || *r14_1 == 0 || r15_2 == 0)
            _String = &data_142d40450
        
        r15_1 = _wtoi(_String)
        
        if (_String_1 != 0)
            sub_140a74f90(_String_1)
        
        int32_t rcx_15 = var_50
        int32_t rdx_7 = rcx_15 - 1
        
        if (rcx_15 == 0)
            rdx_7 = 0
        
        int32_t r10_1
        
        if (rdi_3 + 1 s>= 0)
            r10_1 = rdx_7
            
            if (rdi_3 + 1 s< rdx_7)
                r10_1 = rdi_3 + 1
        else
            r10_1 = 0
        
        int32_t rdx_8 = rdx_7 - r10_1
        int32_t rbx_5 = rcx_15 - 1
        
        if (rcx_15 == 0)
            rbx_5 = 0
        
        int32_t rbx_6 = rbx_5 - r10_1
        
        if (rdx_8 s>= 0)
            if (rdx_8 s< rbx_6)
                rbx_6 = rdx_8
            
            if (rbx_6 != 0)
                int32_t rax_13 = rcx_15 - rbx_6
                
                if (rax_13 != r10_1)
                    int16_t* r9_2 = var_58
                    memmove(&r9_2[sx.q(r10_1)], &r9_2[sx.q(rbx_6 + r10_1)], (rax_13 - r10_1) * 2)
                    rcx_15 = var_50
                
                var_50 = rcx_15 - rbx_6
    
    int16_t* _String_7 = nullptr
    int16_t* _String_4
    int32_t r14_2
    int64_t i
    
    do
        r15_1 += 1
        _String_2 = nullptr
        int32_t var_60_2 = 0
        sub_140a20c40(&_String_2, r15_1)
        int16_t* _String_3
        
        if (var_50 s> 1)
            int32_t rdi_6
            
            if (var_60_2 == 0)
                rdi_6 = 0
            else
                rdi_6 = var_60_2 - 1
            
            int32_t rax_17
            
            if (var_50 == 0)
                rax_17 = var_50 + 1
            
            if (var_50 != 0 || rdi_6 == 0)
                rax_17 = 0
            
            int16_t* _String_5 = nullptr
            int32_t rcx_18 = rax_17 + rdi_6
            int16_t* r14_3 = var_58
            
            if (var_50 != 0 || rcx_18 != 0)
                sub_1405a4c70(&_String_5, rcx_18 + var_50, 0)
                memcpy(_String_5, r14_3, var_50 * 2)
            else
                int32_t var_3c_1 = 0
            
            sub_140a20ba0(&_String_5, _String_2, rdi_6)
            _String_4 = _String_5
            r14_2 = var_50
            _String_3 = _String_2
            _String_5 = nullptr
            int32_t var_40_1
            var_40_1.q = 0
        else
            _String_4 = _String_2
            _String_3 = nullptr
            r14_2 = var_60_2
            _String_2 = nullptr
            int64_t var_60_3 = 0
        
        if (_String_7 != 0)
            sub_140a74f90(_String_7)
            _String_3 = _String_2
        
        _String_7 = _String_4
        
        if (_String_3 != 0)
            sub_140a74f90(_String_3)
        
        int16_t* _String_6 = &data_142d40450
        
        if (r14_2 != 0)
            _String_6 = _String_4
        
        uint64_t rbx_8 = *sub_140b58260(&arg_10, _String_6, 1)
        int32_t var_78_2 = 0
        i = sub_140d2f0c0(sub_140d41340(), arg1, rbx_8, 0, 0, 0)
    while (i != 0)
    
    if (r14_2 != 0)
        _String_8 = _String_4
    
    (*(*rax + 0x138))(rax, _String_8, arg1, 0)
    
    if (_String_4 != 0)
        sub_140a74f90(_String_4)

int16_t* rcx_27 = var_58

if (rcx_27 != 0)
    sub_140a74f90(rcx_27)
