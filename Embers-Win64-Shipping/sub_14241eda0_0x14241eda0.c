// 函数: sub_14241eda0
// 地址: 0x14241eda0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

TEB* gsbase
int32_t* rbx_1 = *(gsbase->ThreadLocalStoragePointer + (zx.q(data_14401b1a0) << 3)) + 0x14

if (data_143f5d808 s> *rbx_1)
    _Init_thread_header(&data_143f5d808)
    
    if (data_143f5d808 == 0xffffffff)
        sub_140b58170(&data_143f5d800, "LogConsoleResponse", 1)
        _Init_thread_footer(&data_143f5d808)

int32_t rdi_1 = 0
uint32_t result
int64_t var_18
int32_t var_10_1
int32_t var_c_1
int32_t rcx
int64_t rbx_2

if (*arg4 != data_143f5d800)
    result = *rbx_1
    
    if (data_143f5d818 s> result)
        int64_t r8_2
        result, r8_2 = _Init_thread_header(&data_143f5d818)
        
        if (data_143f5d818 == 0xffffffff)
            int64_t* rcx_7 = data_143db18d0
            
            if (rcx_7 == 0)
                sub_140a53c40()
                rcx_7 = data_143db18d0
            
            r8_2.b = 1
            int64_t* rax_8 = (*(*rcx_7 + 0xb0))(rcx_7, u"con.MinLogVerbosity", r8_2)
            int64_t rax_6
            
            if (rax_8 == 0)
                rax_6 = 0
            else
                int64_t rdx_4 = *rax_8
                rax_6 = (*(rdx_4 + 0x58))(rax_8, rdx_4)
            
            data_143f5d810 = rax_6
            result = _Init_thread_footer(&data_143f5d818)
    
    int64_t rbx_3 = data_143f5d810
    
    if (rbx_3 != 0)
        int64_t rcx_1
        
        if (data_143de5480 == 0)
            rcx_1 = 0
        else
            rcx_1.b = GetCurrentThreadId() != data_143de5470
        
        result = zx.d(arg3)
        
        if (result s<= *(rbx_3 + (rcx_1 << 2)))
            var_18 = 0
            rcx = 0
            var_c_1 = 0
            var_10_1 = 0
            
            if (arg2 == 0 || *arg2 == 0)
                goto label_14241eefa
            
            rbx_2 = -1
            
            do
                rbx_2 += 1
            while (arg2[rbx_2] != 0)
            
        label_14241eead:
            
            if (rbx_2.d + 1 s> 0)
                sub_1405947f0(&var_18, rbx_2.d + 1)
                rcx = var_c_1
                rdi_1 = var_10_1
            
            int32_t rax_4 = rbx_2.d + 1 + rdi_1
            int32_t var_10_2 = rax_4
            
            if (rax_4 s> rcx)
                sub_140594770(&var_18)
            
            UnDecorator::getReferenceType(var_18, arg2, (rbx_2.d + 1) * 2)
            goto label_14241eefa
else
    var_18 = 0
    rcx = 0
    var_c_1 = 0
    var_10_1 = 0
    
    if (arg2 != 0 && *arg2 != 0)
        rbx_2 = -1
        
        do
            rbx_2 += 1
        while (arg2[rbx_2] != 0)
        
        goto label_14241eead
    
label_14241eefa:
    result = (*(*(arg1 - 0x28) + 0x280))(arg1 - 0x28, &var_18)
    int64_t rcx_6 = var_18
    
    if (rcx_6 != 0)
        return sub_140a74f90(rcx_6)
return result
