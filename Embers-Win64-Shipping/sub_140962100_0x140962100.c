// 函数: sub_140962100
// 地址: 0x140962100
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t rcx
int64_t arg_8 = rcx
void* rbx = data_143f5b298

if (rbx != 0)
    void* rax_1 = sub_1424ad0c0()
    void* rcx_1 = *(rbx + 0x10)
    int64_t rax_2 = sx.q(*(rax_1 + 0x38))
    
    if (rax_2.d s<= *(rcx_1 + 0x38) && *(*(rcx_1 + 0x30) + (rax_2 << 3)) == rax_1 + 0x30
            && sub_142004920(rbx) != 0)
        TEB* gsbase
        
        if (data_143cecf88
                s> *(0x14 + *(gsbase->ThreadLocalStoragePointer + (zx.q(data_14401b1a0) << 3))))
            _Init_thread_header(&data_143cecf88)
            
            if (data_143cecf88 == 0xffffffff)
                sub_140b58260(&data_143cecf80, u"OnlineSubsystem", 1)
                _Init_thread_footer(&data_143cecf88)
        
        int64_t rbx_1 = data_143cecf80
        j_sub_140b3db50()
        jump(*(*sub_140b3da90(&data_143de7d78, rbx_1) + 0x50))

return 0
