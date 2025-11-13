// 函数: sub_140756b20
// 地址: 0x140756b20
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

TEB* gsbase

if (data_143cdfea8 s> *(0x14 + *(gsbase->ThreadLocalStoragePointer + (zx.q(data_14401b1a0) << 3))))
    _Init_thread_header(&data_143cdfea8)
    
    if (data_143cdfea8 == 0xffffffff)
        int64_t rax_9 = data_143cdfea0
        
        if (rax_9 == 0)
            rax_9 = sub_141a54240(&data_143cdfea0, 0)
        
        data_143cdfe98 = rax_9
        _Init_thread_footer(&data_143cdfea8)

uint64_t result = sub_140d3c6e0(arg1 + 8)

if (result != 0)
    void var_68
    int64_t* rax_2 = sub_140745220(&var_68, arg1 + 0x10)
    void** const var_40 = &data_142d9ada0
    void var_38
    sub_140745220(&var_38, rax_2)
    int64_t rcx_3 = rax_2[3]
    
    if (rcx_3 != 0)
        sub_140a74f90(rcx_3)
    
    int64_t rdx_4 = data_143cdfe98
    int32_t var_70_1 = *(arg2 + 0x2d8)
    char rax_4 = *(arg2 + 0x2dc)
    int64_t var_78 = *(arg2 + 0x2d0)
    sub_1405c5900(arg2 + 0xf8, rdx_4, &var_40, result, rax_4, &var_78)
    int64_t var_20
    
    if (var_20 != 0)
        sub_140a74f90(var_20)
    
    void* rbx_2 = result + 0x418
    int64_t r9_2
    r9_2.b = 1
    (*(*rbx_2 + 8))(rbx_2, arg1 + 0x10, 0, r9_2, 0)
    int64_t rsi_1 = *(arg1 + 0x38)
    int32_t* rax_7 = (*(*rbx_2 + 0x30))(rbx_2, arg1 + 0x10)
    
    if (rax_7 == 0)
        result = 0xffffffff
    else
        result = zx.q(*rax_7)
    
    int32_t arg_8 = result.d
    
    if (result.d != 0xffffffff)
        int64_t rdi_2 = sx.q(result.d) + *(rbx_2 + 0x20)
        
        if (rdi_2 != rsi_1)
            result = memcpy(rdi_2, rsi_1, sub_14075e990(arg1 + 0x10))
        
        *(rbx_2 + 0xb0) |= 1

return result
