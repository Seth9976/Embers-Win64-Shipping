// 函数: sub_14283f130
// 地址: 0x14283f130
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

char* rsi = arg1[5]
char* rbp = *(arg3 + 0x28)

if (rsi == 0 || rbp == 0)
    return 0x80004003

int64_t r12_1 = *arg1
uint32_t (* rbx_1)[0x4]

if (not(test_bit(arg2, 0x11)))
    uint64_t _Count_1 = 0x10 * r12_1
    
    if (mulu.dp.q(0x10, r12_1) u>> 0x40 != zx.o(0))
        _Count_1 = -1
    
    uint32_t (* rax_8)[0x4] = _aligned_malloc(_Count_1, 0x10)
    rbx_1 = rax_8
    
    if (rax_8 == 0)
        return 0x8007000e
    
    int64_t rax_9 = arg1[1]
    int64_t r14_2 = 0
    
    if (test_bit(arg2, 0x10))
        int64_t r13_1 = 0
        
        if (rax_9 != 0)
            int64_t rcx_9 = arg1[3]
            
            while (sub_142841550(rbx_1, r12_1, rsi, rcx_9, arg1[2].d) != 0)
                int32_t zmm6_2 = sub_14283ffe0(rbx_1, r12_1, *(arg3 + 0x10), arg1[2].d, arg2)
                int32_t var_88_4
                var_88_4.q = r12_1
                
                if (sub_142846f50(rbp, *(arg3 + 0x18), *(arg3 + 0x10), rbx_1, var_88_4, zmm6_2, 
                        r13_1.d, arg4, 0) == 0)
                    break
                
                rcx_9 = arg1[3]
                r13_1 += 1
                rbp = &rbp[*(arg3 + 0x18)]
                rsi = &rsi[rcx_9]
                
                if (r13_1 u>= arg1[1])
                    goto label_14283f285
            
            _aligned_free(rbx_1)
            return 0x80004005
    else if (rax_9 != 0)
        int64_t rcx_13 = arg1[3]
        
        while (sub_142841550(rbx_1, r12_1, rsi, rcx_13, arg1[2].d) != 0)
            int32_t zmm6_3 = sub_14283ffe0(rbx_1, r12_1, *(arg3 + 0x10), arg1[2].d, arg2)
            int32_t var_88_6
            var_88_6.q = r12_1
            
            if (sub_1428440c0(rbp, *(arg3 + 0x18), *(arg3 + 0x10), rbx_1, var_88_6, zmm6_3) == 0)
                break
            
            rcx_13 = arg1[3]
            r14_2 += 1
            rbp = &rbp[*(arg3 + 0x18)]
            rsi = &rsi[rcx_13]
            
            if (r14_2 u>= arg1[1])
                goto label_14283f285
        
        _aligned_free(rbx_1)
        return 0x80004005
else
    uint64_t _Count = 0x10 * ((r12_1 << 1) + 2)
    
    if (mulu.dp.q(0x10, (r12_1 << 1) + 2) u>> 0x40 != zx.o(0))
        _Count = -1
    
    uint32_t (* rax)[0x4] = _aligned_malloc(_Count, 0x10)
    rbx_1 = rax
    
    if (rax == 0)
        return 0x8007000e
    
    void* rax_1 = &rax[r12_1]
    int32_t var_58
    var_58.q = rax_1
    memset(rax_1, 0, (r12_1 << 4) + 0x20)
    int64_t r14_1 = 0
    
    if (arg1[1] u> 0)
        int64_t rcx_3 = arg1[3]
        
        while (sub_142841550(rbx_1, r12_1, rsi, rcx_3, arg1[2].d) != 0)
            int32_t zmm6_1 = sub_14283ffe0(rbx_1, r12_1, *(arg3 + 0x10), arg1[2].d, arg2)
            int32_t var_88_2
            var_88_2.q = r12_1
            
            if (sub_142846f50(rbp, *(arg3 + 0x18), *(arg3 + 0x10), rbx_1, var_88_2, zmm6_1, 
                    r14_1.d, arg4, var_58.q) == 0)
                break
            
            rcx_3 = arg1[3]
            r14_1 += 1
            rbp = &rbp[*(arg3 + 0x18)]
            rsi = &rsi[rcx_3]
            
            if (r14_1 u>= arg1[1])
                goto label_14283f285
        
        _aligned_free(rbx_1)
        return 0x80004005

label_14283f285:
_aligned_free(rbx_1)
return 0
