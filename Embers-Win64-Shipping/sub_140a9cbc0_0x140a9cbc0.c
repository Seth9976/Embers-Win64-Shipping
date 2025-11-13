// 函数: sub_140a9cbc0
// 地址: 0x140a9cbc0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

TEB* gsbase

if (data_143dba1a0 s> *(0x14 + *(gsbase->ThreadLocalStoragePointer + (zx.q(data_14401b1a0) << 3))))
    _Init_thread_header(&data_143dba1a0)
    
    if (data_143dba1a0 == 0xffffffff)
        data_143dba190 = 0
        data_143dba198.q = 0
        sub_1405947f0(&data_143dba190, 0x11)
        int32_t rax_10 = data_143dba198 + 0x11
        bool cond:0_1 = rax_10 s<= data_143dba19c
        data_143dba198 = rax_10
        
        if (not(cond:0_1))
            sub_140594770(&data_143dba190)
        
        UnDecorator::getReferenceType(data_143dba190, u"EDateTimeStyle::", 0x22)
        atexit(&data_142cbd930)
        _Init_thread_footer(&data_143dba1a0)

int32_t rax_2 = data_143dba198
int16_t* const rdi = &data_142d40450
int32_t rax_3
int16_t* rdx

if (rax_2 == 0)
    rax_3 = 0
    rdx = &data_142d40450
else
    rdx = data_143dba190
    rax_3 = rax_2 - 1

if (sub_140a546e0(arg2, rdx, sx.q(rax_3)) == 0)
    int32_t rax_5 = data_143dba198
    int32_t rax_6
    
    if (rax_5 == 0)
        rax_6 = 0
    else
        rax_6 = rax_5 - 1
    
    uint64_t var_18 = 0
    int32_t var_10_1 = 0
    int16_t* result = sub_140ab99c0(arg2 + (sx.q(rax_6) << 1), &var_18)
    uint64_t rbx_1 = var_18
    
    if (result != 0)
        if (var_10_1 != 0)
            rdi = rbx_1
        
        if (sub_140ab4220(arg3, rdi) != 0)
            if (rbx_1 != 0)
                sub_140a74f90(rbx_1)
            
            return result
    
    if (rbx_1 != 0)
        sub_140a74f90(rbx_1)

return nullptr
