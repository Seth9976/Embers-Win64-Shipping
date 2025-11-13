// 函数: sub_140d06b10
// 地址: 0x140d06b10
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void* result = nullptr
char* r13 = arg3
int16_t* _String_2

if (arg1[0xf] == 0 || test_bit(arg4, 0x1a))
label_140d06c93:
    
    if (arg1[0xf] != 0)
    label_140d06da8:
        int64_t var_40_1 = arg6
        int64_t var_48_1 = arg5
        return sub_140d07a90(arg1, arg2, r13)
    
    _String_2 = nullptr
    int32_t var_30_2 = 0
    void* result_2 = sub_140ce37a0(arg2, &_String_2, 0)
    result = result_2
    
    if (result_2 != 0)
        int64_t* rax_8 = sub_140af2bc0()
        int16_t* _String_11 = &data_142d40450
        int16_t* _String_6 = &data_142d40450
        
        if (var_30_2 != 0)
            _String_6 = _String_2
        
        int32_t rax_9 = sub_140a54510(_String_6, u"True")
        int32_t rax_11
        
        if (rax_9 != 0)
            int16_t** rax_10 = sub_140ac6680(*rax_8)
            int16_t* rdx_7
            
            if (rax_10[1].d == 0)
                rdx_7 = &data_142d40450
            else
                rdx_7 = *rax_10
            
            int16_t* _String_7 = &data_142d40450
            
            if (var_30_2 != 0)
                _String_7 = _String_2
            
            rax_11 = sub_140a54510(_String_7, rdx_7)
        
        if (rax_9 == 0 || rax_11 == 0)
            (*(*arg1 + 0x150))(arg1, r13, 1)
        label_140d06c6f:
            int16_t* _String_4 = _String_2
            
            if (_String_4 != 0)
                sub_140a74f90(_String_4)
            
            return result
        
        int16_t* _String_8 = &data_142d40450
        
        if (var_30_2 != 0)
            _String_8 = _String_2
        
        int32_t rax_12 = sub_140a54510(_String_8, u"False")
        int32_t rax_14
        
        if (rax_12 != 0)
            int16_t** rax_13 = sub_140ac6680(rax_8[1])
            int16_t* rdx_8
            
            if (rax_13[1].d == 0)
                rdx_8 = &data_142d40450
            else
                rdx_8 = *rax_13
            
            if (var_30_2 != 0)
                _String_11 = _String_2
            
            rax_14 = sub_140a54510(_String_11, rdx_8)
        
        if (rax_12 == 0 || rax_14 == 0)
            (*(*arg1 + 0x150))(arg1, r13, 0)
            goto label_140d06c6f
    
    int16_t* _String_9 = _String_2
    
    if (_String_9 != 0)
        sub_140a74f90(_String_9)
    
    goto label_140d06da8

arg3.b = 1
_String_2 = nullptr
int32_t var_30_1 = 0
void* result_1 = sub_140ce37a0(arg2, &_String_2, arg3.b)

if (result_1 == 0)
    int16_t* _String_5 = _String_2
    
    if (_String_5 != 0)
        sub_140a74f90(_String_5)
    
    goto label_140d06c93

int16_t* const _String = &data_142d40450
int16_t* const _String_10 = &data_142d40450

if (var_30_1 != 0)
    _String_10 = _String_2

void arg_8
int64_t* rax_1 = sub_140b58260(&arg_8, _String_10, 1)
int32_t rax_2 = sub_140bddcb0(arg1[0xf], *rax_1, 4)

if (rax_2 != 0xffffffff)
label_140d06c55:
    result = result_1
    *r13 = *(*(arg1[0xf] + 0x40) + sx.q(rax_2) * 0x10 + 8)
else
    if (sub_140a24720(&_String_2) != 0)
        int16_t* _String_1 = _String_2
        int64_t r8 = sx.q(var_30_1)
        int16_t* _String_3 = _String_1
        void* rcx_4 = &_String_1[r8]
        void* rax_4 = rcx_4 - 2
        
        if (r8.d == 0)
            rax_4 = rcx_4
        
        if (_String_1 != rax_4)
            do
                if (*_String_3 == 0x2e)
                    goto label_140d06c3d
                
                _String_3 = &_String_3[1]
            while (_String_3 != rax_4)
        
        if (r8.d != 0)
            _String = _String_1
        
        int64_t i = _wtoi64(_String)
        void* rcx_6 = arg1[0xf]
        rax_2 = 0
        int64_t rdx_2 = sx.q(*(rcx_6 + 0x48))
        
        if (rdx_2.d s> 0)
            int64_t* rcx_8 = *(rcx_6 + 0x40) + 8
            int64_t rdx_3 = 0
            
            while (*rcx_8 != i)
                rax_2 += 1
                rdx_3 += 1
                rcx_8 = &rcx_8[2]
                
                if (rdx_3 s>= rdx_2)
                    goto label_140d06c3d
            
            if (rax_2 != 0xffffffff)
                goto label_140d06c55
    
label_140d06c3d:
    
    if (sub_140cbccd0(arg1) != 0)
        sub_140baa940()

goto label_140d06c6f
