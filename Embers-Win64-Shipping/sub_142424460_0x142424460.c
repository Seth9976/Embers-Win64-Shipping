// 函数: sub_142424460
// 地址: 0x142424460
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t i = 0

if (*(arg1 + 0x54) == 0)
    *(arg1 + 0x88) = 0
    
    if (*(arg1 + 0x8c) != 0)
        return sub_1405a5410(arg1 + 0x80, 0) __tailcall
    
    return 

int64_t var_58 = 0
sub_140bc7fd0(arg1 + 0x60, &var_58, arg2)

if (var_58 == 0)
    return 

int32_t rbx_3 = *(arg1 + 0x4c) * *(arg1 + 0x50) * *(arg1 + 0x48)

if (sub_140bc7f20(arg1 + 0x60) != sx.q(rbx_3) << 3)
    sub_140a74f90(var_58)
    return 

int32_t rax_2 = *(arg1 + 0x88)

if (rbx_3 s> rax_2)
    *(arg1 + 0x88) = rbx_3
    
    if (rbx_3 s> *(arg1 + 0x8c))
        sub_1405a4f90(arg1 + 0x80)
else if (rbx_3 s< rax_2 && rbx_3 != rax_2)
    *(arg1 + 0x88) = rbx_3
    sub_1405a5010(arg1 + 0x80)

if (*(arg1 + 0x4c) * *(arg1 + 0x50) * *(arg1 + 0x48) != 0)
    uint64_t r14_1 = zx.q(data_14401b1a0)
    TEB* gsbase
    void* ThreadLocalStoragePointer = gsbase->ThreadLocalStoragePointer
    int32_t var_3c_1 = (zx.o(0)).d
    
    do
        uint32_t rbx_4 = zx.d(*(var_58 + (i << 3) + 4))
        int32_t rdi_3 = (rbx_4 & 0xffff8000) << 0x10
        int16_t rax_7 = rbx_4.w & 0x7c00
        int32_t arg_20
        
        if (rax_7 == 0)
            int32_t rbx_5 = rbx_4 & 0x3ff
            
            if (rbx_5 != 0)
                if (data_143cda914 s> *(0x14 + *(ThreadLocalStoragePointer + (r14_1 << 3))))
                    _Init_thread_header(&data_143cda914)
                    
                    if (data_143cda914 == 0xffffffff)
                        data_143cda910 = 0x3fb8aa3b
                        _Init_thread_footer(&data_143cda914)
                
                int32_t rdx_2 = 0xa - int.d(logf(float.s(zx.q(rbx_5))) f* data_143cda910)
                arg_20 = (rbx_5 << (rdx_2.b + 0xd) & 0x7fffff)
                    | ((0x71 - rdx_2) << 0x17 & 0x7f800000) | rdi_3
            else
                arg_20 = rdi_3
        else if (rax_7 != 0x7c00)
            arg_20 = ((rbx_4 u>> 0xa & 0x1f) + 0x70) << 0x17 | (rbx_4 & 0x3ff) << 0xd | rdi_3
        else
            arg_20 = rdi_3 | 0x477fe000
        
        uint32_t rbx_12 = zx.d(*(var_58 + (i << 3) + 2))
        int32_t rdi_7 = (rbx_12 & 0xffff8000) << 0x10
        int16_t rax_23 = rbx_12.w & 0x7c00
        int32_t arg_18
        
        if (rax_23 == 0)
            int32_t rbx_13 = rbx_12 & 0x3ff
            
            if (rbx_13 != 0)
                if (data_143cda914 s> *(0x14 + *(ThreadLocalStoragePointer + (r14_1 << 3))))
                    _Init_thread_header(&data_143cda914)
                    
                    if (data_143cda914 == 0xffffffff)
                        data_143cda910 = 0x3fb8aa3b
                        _Init_thread_footer(&data_143cda914)
                
                int32_t rdx_3 = 0xa - int.d(logf(float.s(zx.q(rbx_13))) f* data_143cda910)
                arg_18 = (rbx_13 << (rdx_3.b + 0xd) & 0x7fffff)
                    | ((0x71 - rdx_3) << 0x17 & 0x7f800000) | rdi_7
            else
                arg_18 = rdi_7
        else if (rax_23 != 0x7c00)
            arg_18 = ((rbx_12 u>> 0xa & 0x1f) + 0x70) << 0x17 | (rbx_12 & 0x3ff) << 0xd | rdi_7
        else
            arg_18 = rdi_7 | 0x477fe000
        
        uint32_t rbx_20 = zx.d(*(var_58 + (i << 3)))
        int32_t rdi_11 = (rbx_20 & 0xffff8000) << 0x10
        int16_t rax_39 = rbx_20.w & 0x7c00
        int32_t arg_8
        
        if (rax_39 == 0)
            int32_t rbx_21 = rbx_20 & 0x3ff
            
            if (rbx_21 != 0)
                if (data_143cda914 s> *(0x14 + *(ThreadLocalStoragePointer + (r14_1 << 3))))
                    _Init_thread_header(&data_143cda914)
                    
                    if (data_143cda914 == 0xffffffff)
                        data_143cda910 = 0x3fb8aa3b
                        _Init_thread_footer(&data_143cda914)
                
                int32_t rdx_4 = 0xa - int.d(logf(float.s(zx.q(rbx_21))) f* data_143cda910)
                arg_8 = (rbx_21 << (rdx_4.b + 0xd) & 0x7fffff)
                    | ((0x71 - rdx_4) << 0x17 & 0x7f800000) | rdi_11
            else
                arg_8 = rdi_11
        else if (rax_39 != 0x7c00)
            arg_8 = ((rbx_20 u>> 0xa & 0x1f) + 0x70) << 0x17 | (rbx_20 & 0x3ff) << 0xd | rdi_11
        else
            arg_8 = rdi_11 | 0x477fe000
        
        int64_t rax_54 = *(arg1 + 0x80)
        float var_48[0x4]
        var_48[0] = arg_8
        float temp0_1[0x4] = _mm_shuffle_ps(var_48, var_48, 0xe1)
        temp0_1[0] = arg_18
        int64_t rcx_10 = sx.q(i.d)
        float temp0_2[0x4] = _mm_shuffle_ps(temp0_1, temp0_1, 0xc6)
        temp0_2[0] = arg_20
        i += 1
        float temp0_3[0x4] = _mm_shuffle_ps(temp0_2, temp0_2, 0xc9)
        var_48 = temp0_3
        *(rax_54 + rcx_10 * 0x10) = temp0_3
    while (i u< sx.q(*(arg1 + 0x4c) * *(arg1 + 0x50) * *(arg1 + 0x48)))

sub_140a74f90(var_58)
