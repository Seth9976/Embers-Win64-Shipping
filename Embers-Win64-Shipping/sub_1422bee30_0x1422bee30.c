// 函数: sub_1422bee30
// 地址: 0x1422bee30
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t* r13 = *(arg1 + 0x50)
*(arg1 + 0x80) = 1
uint64_t result_1 = arg2
void*** rax = j_sub_140a82f30(0x28)
void*** rbx = rax
int32_t i

if (rax == 0)
    i = 0
    rbx = nullptr
else
    int64_t rdx = *r13
    char rax_1 = (*(rdx + 0x58))(r13, rdx)
    i = 0
    *rbx = &data_143317878
    rbx[2] = 0
    rbx[3] = 0
    rbx[1] = &data_143317838
    rbx[4].b = rax_1

uint64_t rdx_2 = zx.q(*(arg1 + 0x78) * *(arg1 + 0x7c))
*(arg1 + 0x50) = rbx
(*rbx)[1](rbx, rdx_2, 0)
int64_t* rcx_2 = *(arg1 + 0x50)
uint64_t result = (*(*rcx_2 + 0x30))(rcx_2)
*(arg1 + 0x74) = 8
uint64_t result_2 = result
*(arg1 + 0x68) = result

if (result_1 == 0)
    result = (*(*r13 + 0x30))(r13)
    result_1 = result

if (*(arg1 + 0x78) * *(arg1 + 0x7c) != 0)
    uint64_t r13_1 = zx.q(data_14401b1a0)
    int32_t* r14 = result_2 + 4
    TEB* gsbase
    void* ThreadLocalStoragePointer = gsbase->ThreadLocalStoragePointer
    
    do
        uint64_t result_3 = result_1
        result_1 += 4
        uint32_t rbx_1 = zx.d(*(result_3 + 2))
        int32_t rdi_3 = (rbx_1 & 0xffff8000) << 0x10
        int16_t rax_5 = rbx_1.w & 0x7c00
        int32_t arg_10
        
        if (rax_5 == 0)
            int32_t rbx_2 = rbx_1 & 0x3ff
            
            if (rbx_2 != 0)
                if (data_143cda914 s> *(0x14 + *(ThreadLocalStoragePointer + (r13_1 << 3))))
                    _Init_thread_header(&data_143cda914)
                    
                    if (data_143cda914 == 0xffffffff)
                        data_143cda910 = 0x3fb8aa3b
                        _Init_thread_footer(&data_143cda914)
                
                int32_t rdx_3 = 0xa - int.d(logf(float.s(zx.q(rbx_2))) f* data_143cda910)
                ThreadLocalStoragePointer = gsbase->ThreadLocalStoragePointer
                arg_10 = (rbx_2 << (rdx_3.b + 0xd) & 0x7fffff)
                    | ((0x71 - rdx_3) << 0x17 & 0x7f800000) | rdi_3
            else
                arg_10 = rdi_3
        else if (rax_5 != 0x7c00)
            arg_10 = ((rbx_1 u>> 0xa & 0x1f) + 0x70) << 0x17 | (rbx_1 & 0x3ff) << 0xd | rdi_3
        else
            arg_10 = rdi_3 | 0x477fe000
        
        uint32_t rbx_9 = zx.d(*result_3)
        int32_t rdi_7 = (rbx_9 & 0xffff8000) << 0x10
        int16_t rax_20 = rbx_9.w & 0x7c00
        int32_t arg_8
        
        if (rax_20 == 0)
            int32_t rbx_10 = rbx_9 & 0x3ff
            
            if (rbx_10 != 0)
                if (data_143cda914 s> *(0x14 + *(ThreadLocalStoragePointer + (r13_1 << 3))))
                    _Init_thread_header(&data_143cda914)
                    
                    if (data_143cda914 == 0xffffffff)
                        data_143cda910 = 0x3fb8aa3b
                        _Init_thread_footer(&data_143cda914)
                
                int32_t rdx_4 = 0xa - int.d(logf(float.s(zx.q(rbx_10))) f* data_143cda910)
                arg_8 = (rbx_10 << (rdx_4.b + 0xd) & 0x7fffff)
                    | ((0x71 - rdx_4) << 0x17 & 0x7f800000) | rdi_7
            else
                arg_8 = rdi_7
        else if (rax_20 != 0x7c00)
            arg_8 = ((rbx_9 u>> 0xa & 0x1f) + 0x70) << 0x17 | (rbx_9 & 0x3ff) << 0xd | rdi_7
        else
            arg_8 = rdi_7 | 0x477fe000
        
        i += 1
        ThreadLocalStoragePointer = gsbase->ThreadLocalStoragePointer
        r14[-1] = arg_8
        *r14 = arg_10
        r14 = &r14[2]
        result = zx.q(*(arg1 + 0x78) * *(arg1 + 0x7c))
    while (i u< result.d)

if (r13 == 0)
    return result

jump(**r13)
