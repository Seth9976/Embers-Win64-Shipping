// 函数: sub_142280900
// 地址: 0x142280900
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int32_t rbx = *(arg1 + 0x24c)
char result = sub_140b5b8a0(arg1[0x49].d, 0x145)
bool rdx = rbx == 0

if ((rdx & result) == 0)
label_1422809dd:
    int64_t rdx_4 = arg1[0x9a]
    
    if (rdx_4 != 0)
        (*(*arg1 + 0xbe0))(arg1, rdx_4)
        int64_t* rcx_9 = arg1[0x9a]
        result = (*(*rcx_9 + 0x3a0))(rcx_9, 0)
        arg1[0x9a] = 0
else
    result = (*(*arg1 + 0x6a8))(arg1, rdx)
    
    if (result == 0)
        goto label_1422809dd
    
    if (arg1[0x9a] == 0)
        TEB* gsbase
        
        if (data_143f52840
                s> *(0x14 + *(gsbase->ThreadLocalStoragePointer + (zx.q(data_14401b1a0) << 3))))
            _Init_thread_header(&data_143f52840)
            
            if (data_143f52840 == 0xffffffff)
                sub_140b58260(&data_143f52838, u"PC_InactiveStateInputComponent0", 1)
                _Init_thread_footer(&data_143f52840)
        
        void* rax_3 = sub_141b77910(arg1, data_143f52838, 0, 0, 0, 0)
        int64_t r8 = *arg1
        arg1[0x9a] = rax_3
        (*(r8 + 0xbc8))(arg1, rax_3, r8)
        sub_141ef1390(arg1[0x9a])
        arg1[0x9a]
        jump(*(*arg1 + 0xbd8))

return result
