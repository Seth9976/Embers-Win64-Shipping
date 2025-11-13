// 函数: sub_1413cf640
// 地址: 0x1413cf640
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

if (data_143de5429 != 0)
    TEB* gsbase
    
    if (data_143cd80cc
            s> *(0x14 + *(gsbase->ThreadLocalStoragePointer + (zx.q(data_14401b1a0) << 3))))
        _Init_thread_header(&data_143cd80cc)
        
        if (data_143cd80cc == 0xffffffff)
            sub_140af2b60()
            data_143cd80c8 = sub_140b21a10(&data_143dbb3f0, u"nullrhi")
            _Init_thread_footer(&data_143cd80cc)
    
    if ((data_143de5426 == 0 || data_143de5427 != 0) && data_143cd80c8 == 0 && data_143f0f1d4 == 0)
        void*** rax_3 = j_sub_140a82f30(0x65d0)
        void*** rdi_1
        
        if (rax_3 == 0)
            rdi_1 = nullptr
        else
            rdi_1 = sub_1413bf8d0(rax_3, arg2, arg3, 0, arg4, arg5)
        
        void*** var_10 = rdi_1
        void var_18
        sub_140812a70(arg1 + 8, &var_18, &var_10, nullptr)
        return rdi_1

void*** rax_6 = j_sub_140a82f30(0x20)

if (rax_6 == 0)
    return nullptr

rax_6[1].d = data_1439c7a08
*rax_6 = &data_142f78a80
rax_6[2] = arg2
rax_6[3] = 0
*(arg2 + 0x1b0) = rax_6
void* rax_7 = rax_6[2]

if (arg4 == 0)
    *(rax_7 + 0x468) = 0
    rax_6[3] = 0
else
    sub_14242fad0(rax_7)

return rax_6
