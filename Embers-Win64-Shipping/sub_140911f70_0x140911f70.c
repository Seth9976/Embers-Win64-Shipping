// 函数: sub_140911f70
// 地址: 0x140911f70
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t* rax = sub_140914510()
void* rax_1 = rax[0x23]

if (rax_1 == 0)
    int64_t rdx_1 = *rax
    (*(rdx_1 + 0x390))(rax, rdx_1)
    rax_1 = rax[0x23]

if (*(rax_1 + 0x28) == 0)
    sub_140af2b60()
    
    if (sub_140b21a10(&data_143dbb3f0, u"TcpMessagingListen=") == 0)
        sub_140af2b60()
        
        if (sub_140b21a10(&data_143dbb3f0, u"TcpMessagingConnect=") == 0)
            return sub_140913660(arg1) __tailcall

return sub_140910a90(arg1) __tailcall
