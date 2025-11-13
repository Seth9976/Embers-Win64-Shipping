// 函数: sub_1418f4420
// 地址: 0x1418f4420
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t* rdi = nullptr
*arg1 = arg2
arg1[1] = 0
char rax_4
int32_t rbp_1

if (*(arg2 + 0x220) == 0)
    rbp_1 = *(arg2 + 0x157c)
    TEB* gsbase
    
    if (data_143efbcdc
            s> *(0x14 + *(gsbase->ThreadLocalStoragePointer + (zx.q(data_14401b1a0) << 3))))
        _Init_thread_header(&data_143efbcdc)
        
        if (data_143efbcdc == 0xffffffff)
            data_143efbcd8 = sub_140b74110(0xa, 0)
            _Init_thread_footer(&data_143efbcdc)
    
    if (rbp_1 == 0x1002 && data_143efbcd8 != 0)
        rax_4 = sub_1418c8970(arg2 + 0x10, 7)

int64_t* rax_1

if (*(arg2 + 0x220) != 0 || (rbp_1 == 0x1002 && data_143efbcd8 != 0 && rax_4 != 0))
    rax_1 = j_sub_140a82f30(0x38)
    
    if (rax_1 != 0)
        rdi = sub_1418d1230(rax_1, arg2, 0x1000000, 0x10, 7)
else
    rax_1 = j_sub_140a82f30(0x38)
    
    if (rax_1 != 0)
        rdi = sub_1418d1230(rax_1, arg2, 0x1000000, 0x10, 6)
arg1[1] = rdi
return arg1
