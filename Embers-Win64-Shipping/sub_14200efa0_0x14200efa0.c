// 函数: sub_14200efa0
// 地址: 0x14200efa0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

sub_140ce8070(arg1, arg2)
sub_140ce8070(arg1, &data_142d576a0)
sub_140b19e60()
uint32_t result = (*(data_1439a8bd0 + 0x10))(&data_1439a8bd0, arg2, zx.q(arg3), arg4)

if (arg1[4] != 0)
    int32_t rdi_1 = 0
    TEB* gsbase
    
    if (data_143f3f400
            s> *(0x14 + *(gsbase->ThreadLocalStoragePointer + (zx.q(data_14401b1a0) << 3))))
        _Init_thread_header(&data_143f3f400)
        
        if (data_143f3f400 == 0xffffffff)
            int64_t* rcx_9 = data_143db18d0
            
            if (rcx_9 == 0)
                sub_140a53c40()
                rcx_9 = data_143db18d0
            
            int64_t r8_4
            r8_4.b = 1
            int64_t* rax_6 = (*(*rcx_9 + 0xb0))(rcx_9, u"con.MinLogVerbosity", r8_4)
            int64_t rax_4
            
            if (rax_6 == 0)
                rax_4 = 0
            else
                int64_t rdx_6 = *rax_6
                rax_4 = (*(rdx_6 + 0x58))(rax_6, rdx_6)
            
            data_143f3f3f8 = rax_4
            _Init_thread_footer(&data_143f3f400)
    
    int32_t* rcx_2 = data_143f3f3f8
    
    if (rcx_2 != 0)
        result = zx.d(arg3)
    
    if (rcx_2 == 0 || result s> *rcx_2)
        int64_t var_18 = 0
        int32_t rcx_3 = 0
        int32_t var_c_1 = 0
        int32_t var_10_1 = 0
        
        if (arg2 != 0 && *arg2 != 0)
            int64_t rbx_1 = -1
            
            do
                rbx_1 += 1
            while (arg2[rbx_1] != 0)
            
            if (rbx_1.d + 1 s> 0)
                sub_1405947f0(&var_18, rbx_1.d + 1)
                rcx_3 = var_c_1
                rdi_1 = var_10_1
            
            int32_t rax_2 = rbx_1.d + 1 + rdi_1
            int32_t var_10_2 = rax_2
            
            if (rax_2 s> rcx_3)
                sub_140594770(&var_18)
            
            UnDecorator::getReferenceType(var_18, arg2, (rbx_1.d + 1) * 2)
        
        int64_t* rcx_7 = arg1[4]
        result = (*(*rcx_7 + 0x280))(rcx_7, &var_18)
        int64_t rcx_8 = var_18
        
        if (rcx_8 != 0)
            return sub_140a74f90(rcx_8)

return result
