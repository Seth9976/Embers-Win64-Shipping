// 函数: sub_140be0fa0
// 地址: 0x140be0fa0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

TEB* gsbase

if (data_143e1adc0 s> *(0x14 + *(gsbase->ThreadLocalStoragePointer + (zx.q(data_14401b1a0) << 3))))
    _Init_thread_header(&data_143e1adc0)
    
    if (data_143e1adc0 == 0xffffffff)
        sub_1405947f0(&data_143e1adb0, 0x1a)
        int32_t rax_6 = data_143e1adb8 + 0x1a
        bool cond:0_1 = rax_6 s<= data_143e1adbc
        data_143e1adb8 = rax_6
        
        if (not(cond:0_1))
            sub_140594770(&data_143e1adb0)
        
        UnDecorator::getReferenceType(data_143e1adb0, u""' ,|&!~\n\r\t@#(){}[]=;^%$`", 0x34)
        atexit(sub_142cc1eb0)
        _Init_thread_footer(&data_143e1adc0)

int64_t var_18
char rax_3 = sub_140b5f100(sub_140b63b70(arg1, &var_18), &data_143e1adb0, nullptr, nullptr)
int64_t rcx_2 = var_18

if (rcx_2 != 0)
    sub_140a74f90(rcx_2)

if (rax_3 != 0)
    rax_3 = sub_140b5f100(sub_140b63b70(&arg1[2], &var_18), &data_143e1adb0, nullptr, nullptr)
    int64_t rcx_5 = var_18
    
    if (rcx_5 != 0)
        sub_140a74f90(rcx_5)
    
    if (rax_3 != 0)
        rax_3 = sub_140b5f100(sub_140b63b70(&arg1[4], &var_18), &data_143e1adb0, nullptr, nullptr)
        int64_t rcx_8 = var_18
        
        if (rcx_8 != 0)
            sub_140a74f90(rcx_8)
        
        if (rax_3 != 0)
            return 1

return 0
