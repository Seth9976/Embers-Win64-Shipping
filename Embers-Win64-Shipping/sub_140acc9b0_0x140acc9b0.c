// 函数: sub_140acc9b0
// 地址: 0x140acc9b0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

uint32_t rbx = zx.d(*arg2)
uint64_t r14 = zx.q(data_14401b1a0)
int32_t rdi_2 = (rbx & 0xffff8000) << 0x10
int16_t rax = rbx.w & 0x7c00
int32_t arg_8
TEB* gsbase

if (rax == 0)
    int32_t rbx_1 = rbx & 0x3ff
    
    if (rbx_1 != 0)
        if (data_143cda914 s> *(0x14 + *(gsbase->ThreadLocalStoragePointer + (r14 << 3))))
            _Init_thread_header(&data_143cda914)
            
            if (data_143cda914 == 0xffffffff)
                data_143cda910 = 0x3fb8aa3b
                _Init_thread_footer(&data_143cda914)
        
        int32_t rdx = 0xa - int.d(logf(float.s(zx.q(rbx_1))) f* data_143cda910)
        arg_8 = (rbx_1 << (rdx.b + 0xd) & 0x7fffff) | ((0x71 - rdx) << 0x17 & 0x7f800000) | rdi_2
    else
        arg_8 = rdi_2
else if (rax != 0x7c00)
    arg_8 = ((rbx u>> 0xa & 0x1f) + 0x70) << 0x17 | (rbx & 0x3ff) << 0xd | rdi_2
else
    arg_8 = rdi_2 | 0x477fe000

*arg1 = arg_8
uint32_t rbx_8 = zx.d(arg2[1])
int32_t rdi_6 = (rbx_8 & 0xffff8000) << 0x10
int16_t rax_15 = rbx_8.w & 0x7c00

if (rax_15 == 0)
    int32_t rbx_9 = rbx_8 & 0x3ff
    
    if (rbx_9 != 0)
        if (data_143cda914 s> *(0x14 + *(gsbase->ThreadLocalStoragePointer + (r14 << 3))))
            _Init_thread_header(&data_143cda914)
            
            if (data_143cda914 == 0xffffffff)
                data_143cda910 = 0x3fb8aa3b
                _Init_thread_footer(&data_143cda914)
        
        int32_t rdx_1 = 0xa - int.d(logf(float.s(zx.q(rbx_9))) f* data_143cda910)
        arg_8 =
            (rbx_9 << (rdx_1.b + 0xd) & 0x7fffff) | ((0x71 - rdx_1) << 0x17 & 0x7f800000) | rdi_6
    else
        arg_8 = rdi_6
else if (rax_15 != 0x7c00)
    arg_8 = ((rbx_8 u>> 0xa & 0x1f) + 0x70) << 0x17 | (rbx_8 & 0x3ff) << 0xd | rdi_6
else
    arg_8 = rdi_6 | 0x477fe000

arg1[1] = arg_8
uint32_t rbx_16 = zx.d(arg2[2])
int32_t rdi_10 = (rbx_16 & 0xffff8000) << 0x10
int16_t rax_30 = rbx_16.w & 0x7c00

if (rax_30 == 0)
    int32_t rbx_17 = rbx_16 & 0x3ff
    
    if (rbx_17 != 0)
        if (data_143cda914 s> *(0x14 + *(gsbase->ThreadLocalStoragePointer + (r14 << 3))))
            _Init_thread_header(&data_143cda914)
            
            if (data_143cda914 == 0xffffffff)
                data_143cda910 = 0x3fb8aa3b
                _Init_thread_footer(&data_143cda914)
        
        int32_t rdx_2 = 0xa - int.d(logf(float.s(zx.q(rbx_17))) f* data_143cda910)
        arg_8 =
            (rbx_17 << (rdx_2.b + 0xd) & 0x7fffff) | ((0x71 - rdx_2) << 0x17 & 0x7f800000) | rdi_10
    else
        arg_8 = rdi_10
else if (rax_30 != 0x7c00)
    arg_8 = ((rbx_16 u>> 0xa & 0x1f) + 0x70) << 0x17 | (rbx_16 & 0x3ff) << 0xd | rdi_10
else
    arg_8 = rdi_10 | 0x477fe000

arg1[2] = arg_8
uint32_t rbx_24 = zx.d(arg2[3])
int32_t rdi_14 = (rbx_24 & 0xffff8000) << 0x10
int16_t rax_45 = rbx_24.w & 0x7c00

if (rax_45 == 0)
    int32_t rbx_25 = rbx_24 & 0x3ff
    
    if (rbx_25 == 0)
        arg_8 = rdi_14
    else
        if (data_143cda914 s> *(0x14 + *(gsbase->ThreadLocalStoragePointer + (r14 << 3))))
            _Init_thread_header(&data_143cda914)
            
            if (data_143cda914 == 0xffffffff)
                data_143cda910 = 0x3fb8aa3b
                _Init_thread_footer(&data_143cda914)
        
        int32_t r15_1 = 0xa - int.d(logf(float.s(zx.q(rbx_25))) f* data_143cda910)
        arg_8 =
            (rbx_25 << (r15_1.b + 0xd) & 0x7fffff) | ((0x71 - r15_1) << 0x17 & 0x7f800000) | rdi_14
else if (rax_45 != 0x7c00)
    arg_8 = ((rbx_24 u>> 0xa & 0x1f) + 0x70) << 0x17 | (rbx_24 & 0x3ff) << 0xd | rdi_14
else
    arg_8 = rdi_14 | 0x477fe000

arg1[3] = arg_8
return arg1
