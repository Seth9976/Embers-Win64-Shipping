// 函数: sub_14263cc00
// 地址: 0x14263cc00
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int512_t zmm1
int128_t zmm6
zmm1, zmm6 = sub_141efce60(arg1, arg2.d)
int32_t rcx = arg1[0x1f].d
int32_t rbp = 0
int64_t result

if (rcx == 0)
label_14263cd49:
    int64_t rbx_3 = sx.q(arg1[0x1f].d)
    int32_t temp0_1 = rbx_3.d
    
    if (temp0_1 s< 0)
        arg1[0x1f].d = 0
        
        if (*(arg1 + 0xfc) s< 0)
            sub_1405a4d70(&arg1[0x1e])
        
        memset(arg1[0x1e] + (rbx_3 << 3), 0, sx.q(neg.d(rbx_3.d)) << 3)
    else if (temp0_1 s> 0 && rbx_3.d != 0)
        arg1[0x1f].d = 0
    
    result = (*(*arg1 + 0x3e8))(arg1)
    
    if ((*(arg1 + 0x8a) & 1) != result.b)
        int64_t r9_1 = *arg1
        return (*(r9_1 + 0x278))(arg1, zx.q(result.b), 0, r9_1, arg3)
else
    if (rcx == 1)
        int64_t* rcx_10 = *arg1[0x1e]
        
        if (rcx_10 == 0)
            goto label_14263cd49
        
        zmm1.o = zmm6
        return (*(*rcx_10 + 0x270))(rcx_10, zmm1)
    
    TEB* gsbase
    
    if (data_143f712c0
            s> *(0x14 + *(gsbase->ThreadLocalStoragePointer + (zx.q(data_14401b1a0) << 3))))
        _Init_thread_header(&data_143f712c0)
        
        if (data_143f712c0 == 0xffffffff)
            atexit(sub_142d12030)
            _Init_thread_footer(&data_143f712c0)
    
    int32_t rcx_3 = data_143f712bc
    int32_t result_1 = 0
    data_143f712b8 = 0
    
    if (rcx_3 s< 0 && rcx_3 != 0)
        sub_1405c5570(&data_143f712b0, 0)
        rcx_3 = data_143f712bc
        result_1 = data_143f712b8
    
    int64_t rbx_1 = sx.q(arg1[0x1f].d)
    
    if (rbx_1.d != 0)
        int32_t rdx_1 = result_1 + rbx_1.d
        
        if (rdx_1 s> rcx_3)
            sub_1405c5570(&data_143f712b0, rdx_1)
            result_1 = data_143f712b8
        
        memcpy(data_143f712b0 + (sx.q(result_1) << 3), arg1[0x1e], (rbx_1 << 3).d)
        result_1 = data_143f712b8 + rbx_1.d
        data_143f712b8 = result_1
    
    int64_t* rbx_2 = data_143f712b0
    int64_t rdi_1 = 0
    result = sx.q(result_1)
    void* rcx_6 = &rbx_2[result]
    uint64_t r14_4 = (rcx_6 - rbx_2 + 7) u>> 3
    
    if (rbx_2 u> rcx_6)
        r14_4 = 0
    
    if (r14_4 == 0)
        goto label_14263cd49
    
    do
        int64_t* rcx_7 = *rbx_2
        
        if (rcx_7 != 0)
            zmm1.o = zmm6
            result = (*(*rcx_7 + 0x270))(rcx_7, zmm1)
            rbp += 1
        
        rbx_2 = &rbx_2[1]
        rdi_1 += 1
    while (rdi_1 != r14_4)
    
    if (rbp == 0)
        goto label_14263cd49

return result
