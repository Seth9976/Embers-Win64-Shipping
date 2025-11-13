// 函数: sub_1408d7800
// 地址: 0x1408d7800
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void* i = arg1
TEB* gsbase
void* r12 = *(gsbase->ThreadLocalStoragePointer + (zx.q(data_14401b1a0) << 3))
uint64_t result

do
    result = zx.q(*(r12 + 0x14))
    
    if (data_143cebeb0 s> result.d)
        result = _Init_thread_header(&data_143cebeb0)
        
        if (data_143cebeb0 == 0xffffffff)
            sub_140b58170(&data_143cebea8, "SignificanceManager", 1)
            result = _Init_thread_footer(&data_143cebeb0)
    
    if (arg3 == 0)
        break
    
    result = (*(*arg2 + 0x680))(arg2, &data_143cebea8)
    
    if (result.b == 0)
        break
    
    int32_t result_1
    
    if (((*(i + 8) u>> 4).b & 1) == 0)
        void* rax_6 = sub_1423de050()
        
        if (rax_6 != 0 && rax_6 != *(arg3 + 0x1e0))
            *(arg3 + 0x1e0) = rax_6
            *(arg3 + 0x24c) = sub_142005cc0(rax_6)
        
        sub_1408d8640(arg3 + 0x98, &data_14399f638)
        uint64_t r8_2 = zx.q(*(i + 0xa0) - *(i + 0xcc))
        result_1 = 0
        int64_t var_58
        sub_140a2e390(&var_58, u"SIGNIFICANCE MANAGER - %d Managed Objects", r8_2)
        sub_142409af0(arg3 + 0x98, &var_58, &result_1)
        int64_t rcx_6 = var_58
        
        if (rcx_6 != 0)
            sub_140a74f90(rcx_6)
        
        int64_t* rcx_7 = data_143cebe78
        int64_t var_48
        int64_t* rax_8 = (*(*rcx_7 + 0xa0))(rcx_7, &var_48)
        int16_t* rdx_4
        
        if (rax_8[1].d == 0)
            rdx_4 = &data_142d40450
        else
            rdx_4 = *rax_8
        
        int64_t var_78
        sub_140b58260(&var_78, rdx_4, 1)
        int64_t rcx_9 = var_48
        
        if (rcx_9 != 0)
            sub_140a74f90(rcx_9)
        
        int64_t j = 0
        int64_t r13_1 = 0
        int64_t var_68 = 0
        int64_t var_60_1 = 0
        void* r14_1
        void* r8_4
        
        if (var_78 != 0)
            int64_t rbx_1 = var_78
            void* rdx_10
            
            if (*(i + 0x50) == *(i + 0x7c))
            label_1408d7a2e:
                rdx_10 = nullptr
            else
                result_1.q = rbx_1
                int32_t rax_11 = sub_140b5ead0(rbx_1.d) + arg4
                r8_4 = i + 0x80
                void* rcx_11 = *(r8_4 + 8)
                
                if (rcx_11 != 0)
                    r8_4 = rcx_11
                
                int32_t rax_13 = *(r8_4 + (((sx.q(*(i + 0x90)) - 1) & sx.q(rax_11)) << 2))
                
                if (rax_13 == 0xffffffff)
                label_1408d7a2e_1:
                    rdx_10 = nullptr
                else
                    while (true)
                        rdx_10 = (sx.q(rax_13) << 5) + *(i + 0x48)
                        
                        if (*rdx_10 == rbx_1)
                            break
                        
                        rax_13 = *(rdx_10 + 0x18)
                        
                        if (rax_13 == 0xffffffff)
                            goto label_1408d7a2e_2
                    
                    if (rax_13 == 0xffffffff)
                    label_1408d7a2e_2:
                        rdx_10 = nullptr
            
            r14_1 = rdx_10 + 8
            
            if (rdx_10 == 0)
                r14_1 = nullptr
            
            if (r14_1 == 0)
                if (data_143cebea0 s> *(r12 + 0x14))
                    _Init_thread_header(&data_143cebea0)
                    
                    if (data_143cebea0 == 0xffffffff)
                        data_143cebe90 = 0
                        data_143cebe98 = 0
                        atexit(sub_142cb64e0)
                        _Init_thread_footer(&data_143cebea0)
                
                r14_1 = &data_143cebe90
            
            if (var_78 == 0)
                goto label_1408d7a63
        else
            r14_1 = &var_68
        label_1408d7a63:
            r8_4.b = 1
            sub_1408d7280(i, &var_68, r8_4.b)
            r13_1 = var_68
        result = sub_1408d8640(arg3 + 0x98, &data_14399f630)
        int32_t rcx_14 = *(r14_1 + 8)
        
        if (data_143984e50 s<= rcx_14)
            rcx_14 = data_143984e50
        
        if (rcx_14 s> 0)
            do
                void* rsi_1 = *(*r14_1 + (j << 3))
                result_1.q = *(rsi_1 + 0x18)
                int64_t var_38
                int64_t* rax_17 = sub_140b63b70(&result_1, &var_38)
                int16_t* const rbx_2
                
                if (rax_17[1].d == 0)
                    rbx_2 = &data_142d40450
                else
                    rbx_2 = *rax_17
                
                int64_t var_70 = *(*(rsi_1 + 0x10) + 0x18)
                sub_140b63b70(&var_70, &var_58)
                int16_t* const var_88_1 = rbx_2
                sub_140a2e390(&var_48, u"%6.3f - %s (%s)", _mm_cvtps_pd(*(rsi_1 + 0x20)))
                int64_t rcx_19 = var_58
                
                if (rcx_19 != 0)
                    sub_140a74f90(rcx_19)
                
                int64_t rcx_20 = var_38
                
                if (rcx_20 != 0)
                    sub_140a74f90(rcx_20)
                
                result_1 = 0
                result = sub_142409af0(arg3 + 0x98, &var_48, &result_1)
                int64_t rcx_22 = var_48
                
                if (rcx_22 != 0)
                    result = sub_140a74f90(rcx_22)
                
                j += 1
            while (j s< sx.q(rcx_14))
        
        if (r13_1 != 0)
            return sub_140a74f90(r13_1)
        
        break
    
    sub_140865c40(&data_143984e60, &result_1, (*(*arg2 + 0x150))(arg2))
    result = sx.q(result_1)
    
    if (result.d == 0xffffffff)
        break
    
    uint64_t rdx_1 = result * 3
    result = data_143984e60
    int64_t rsi = result + (rdx_1 << 3)
    
    if (rsi == 0)
        break
    
    i = *(rsi + 8)
while (i != 0)

return result
