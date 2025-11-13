// 函数: sub_14183f5a0
// 地址: 0x14183f5a0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

TEB* gsbase

if (data_143efaa08 s> *(0x14 + *(gsbase->ThreadLocalStoragePointer + (zx.q(data_14401b1a0) << 3))))
    arg3 = _Init_thread_header(&data_143efaa08)
    
    if (data_143efaa08 == 0xffffffff)
        _vfprintf_p_l(&data_143efa9f0, u"Please Wait", u"BuildPatchInstaller")
        atexit(sub_142cec250)
        arg3 = _Init_thread_footer(&data_143efaa08)

EnterCriticalSection(&arg1[0x23])
(*(*arg1 + 0x90))(arg1)
arg3.d = arg3.d f* 100f
int32_t zmm1 = (zx.o(0)).d

if (arg3.d f> zmm1)
    void var_28
    sub_140a95a00(&var_28)
    int64_t var_18_1 = 0
    int64_t rax_7 = *arg1
    int128_t var_38 = zx.o(0)
    sub_140aa1160(arg2, (*(rax_7 + 0x90))(arg1, zmm1), &var_28, &var_38)
    int64_t* rsi_1 = var_38:8.q
    
    if (rsi_1 != 0)
        rsi_1[1].d -= 1
        
        if (rsi_1[1].d == 1)
            (**rsi_1)(rsi_1)
            int32_t rbp_1 = *(rsi_1 + 0xc)
            *(rsi_1 + 0xc) -= 1
            
            if (rbp_1 == 1)
                (*(*rsi_1 + 8))(rsi_1, zx.q(rbp_1))
else
    *arg2 = data_143efa9f0
    int64_t rax_4 = data_143efa9f8
    arg2[1] = rax_4
    
    if (rax_4 != 0)
        void* rax_5 = data_143efa9f8
        *(rax_5 + 8) += 1
    
    arg2[2].d = data_143efaa00

if (arg1 != -0x118)
    LeaveCriticalSection(&arg1[0x23])

return arg2
