// 函数: sub_1407e6a00
// 地址: 0x1407e6a00
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void var_168
int64_t rax_1 = __security_cookie ^ &var_168
sub_1408299c0(arg3, arg1 + 0x48)
int32_t rax_2 = sub_14081f620(arg3)
void* rdx_1 = *(arg1 + 0x10)
*(arg1 + 0xb4) = arg2
*(arg1 + 0x48) = rax_2
uint32_t result_1 = *(rdx_1 + 0xc8) + 1
uint64_t rsi_2 = zx.q(arg2 + 0x3f) & 0xffffffc0
uint32_t result = (rsi_2 << 2).d
*(arg1 + 0xb8) = result
*(arg1 + 0xbc) = result

if (rsi_2.d != 0)
    float zmm2 = data_14396ee68
    int32_t r8 = *(arg1 + 0x4c)
    result = ((int.q(_mm_max_ss(zmm2, 0x3f800000) * float.s(zx.q(rsi_2.d)))).d + 0xfff) & 0xfffff000
    
    if (result u<= result_1)
        result_1 = result
    
    void* rcx_17
    
    if (rsi_2.d u> r8)
    label_1407e6c24:
        *(arg1 + 0x4c) = result_1
        rcx_17 = rdx_1
        
        if (*(rdx_1 + 0x20) != 0)
            if (*(arg1 + 0x50) != 0)
                sub_1408081b0(arg1 + 0x50)
                rdx_1 = *(arg1 + 0x10)
                result_1 = *(arg1 + 0x4c)
            
            result = sub_1407b4d10(arg1 + 0x50, 4, *(rdx_1 + 0x20) * result_1, 0xd, 1, 
                NiagaraFloatDataBuffer", 0)
            rcx_17 = *(arg1 + 0x10)
        
        if (*(rcx_17 + 0x24) != 0)
            if (*(arg1 + 0x70) != 0)
                sub_1408081b0(arg1 + 0x70)
                rcx_17 = *(arg1 + 0x10)
            
            result = sub_1407b4d10(arg1 + 0x70, 4, *(rcx_17 + 0x24) * *(arg1 + 0x4c), 0x1d, 1, 
                NiagaraIntDataBuffer", 0)
            rcx_17 = *(arg1 + 0x10)
    else
        rcx_17 = rdx_1
        
        if (not(zmm2 <= 1f))
            result = (int.q(float.s(zx.q(result_1)) * zmm2)).d
            
            if (result u< r8)
                goto label_1407e6c24
    
    if ((*(rcx_17 + 0x28) & 1) != 0)
        void* rdx_5 = *(arg1 + 0x90)
        
        if (rdx_5 == 0)
            result = 0
        else
            result = *(rdx_5 + 0x18) u>> 2
        
        int32_t rsi_6 = *(rcx_17 + 0x90)
        
        if (result u< rsi_6)
            if (rdx_5 != 0)
                sub_1408081b0(arg1 + 0x90)
            
            int32_t var_148
            var_148.q = arg1
            int16_t* const r9_1 = &data_142d40450
            
            if (arg4 != 0)
                r9_1 = arg4
            
            wchar16 var_128[0x80]
            sub_1405a6010(&var_128, 0x80, u"NiagaraIDToIndexTable_%s_%p", r9_1)
            result = sub_1407b4d10(arg1 + 0x90, 4, rsi_6, 0x1d, 1, &var_128, 0)
else
    void* rcx_2 = *(arg1 + 0x50)
    
    if (rcx_2 != 0)
        int32_t rax_3 = 0
        
        if (0 == *(rcx_2 + 8))
            *(rcx_2 + 8) = 0
        else
            rax_3 = *(rcx_2 + 8)
        
        if (rax_3 == 1)
            void* rsi_3 = *(arg1 + 0x50)
            
            if (*(rsi_3 + 0x11) != 0)
                if (data_143f0f1c7 != 0)
                    int64_t* rcx_3 = data_143f0f180
                    (*(*rcx_3 + 0x630))(rcx_3, rsi_3)
                
                *(rsi_3 + 0x11) = 0
        
        *(arg1 + 0x68) = 0
        sub_1405d16e0(arg1 + 0x50, nullptr)
        sub_1405d16e0(arg1 + 0x58, nullptr)
        result = sub_1405d16e0(arg1 + 0x60, nullptr)
    
    void* rcx_7 = *(arg1 + 0x70)
    
    if (rcx_7 != 0)
        int32_t rax_5 = 0
        
        if (0 == *(rcx_7 + 8))
            *(rcx_7 + 8) = 0
        else
            rax_5 = *(rcx_7 + 8)
        
        if (rax_5 == 1)
            void* rsi_4 = *(arg1 + 0x70)
            
            if (*(rsi_4 + 0x11) != 0)
                if (data_143f0f1c7 != 0)
                    int64_t* rcx_8 = data_143f0f180
                    (*(*rcx_8 + 0x630))(rcx_8, rsi_4)
                
                *(rsi_4 + 0x11) = 0
        
        *(arg1 + 0x88) = 0
        sub_1405d16e0(arg1 + 0x70, nullptr)
        sub_1405d16e0(arg1 + 0x78, nullptr)
        result = sub_1405d16e0(arg1 + 0x80, nullptr)
    
    void* rcx_12 = *(arg1 + 0x90)
    
    if (rcx_12 != 0)
        int32_t rax_7 = 0
        
        if (0 == *(rcx_12 + 8))
            *(rcx_12 + 8) = 0
        else
            rax_7 = *(rcx_12 + 8)
        
        if (rax_7 == 1)
            void* rsi_5 = *(arg1 + 0x90)
            
            if (*(rsi_5 + 0x11) != 0)
                if (data_143f0f1c7 != 0)
                    int64_t* rcx_13 = data_143f0f180
                    (*(*rcx_13 + 0x630))(rcx_13, rsi_5)
                
                *(rsi_5 + 0x11) = 0
        
        *(arg1 + 0xa8) = 0
        sub_1405d16e0(arg1 + 0x90, nullptr)
        sub_1405d16e0(arg1 + 0x98, nullptr)
        result = sub_1405d16e0(arg1 + 0xa0, nullptr)
    
    *(arg1 + 0x4c) = 0

__security_check_cookie(rax_1 ^ &var_168)
return result
