// 函数: sub_141d06c80
// 地址: 0x141d06c80
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t var_28
int64_t* rax = sub_140b19c30(&var_28, arg2, 0)
int16_t* const rbp = &data_142d40450
int16_t* rdx

if (rax[1].d == 0)
    rdx = &data_142d40450
else
    rdx = *rax

int64_t arg_8
sub_140b58260(&arg_8, rdx, 1)
int64_t rcx_2 = var_28

if (rcx_2 != 0)
    sub_140a74f90(rcx_2)

int64_t rdi = arg_8
int32_t rbx_1

if (*(arg1 + 0x68) != *(arg1 + 0x94))
    int32_t rax_3 = sub_140b5ead0(rdi.d) + rdi:4.d
    void* r8_1 = arg1 + 0x98
    void* rcx_4 = *(r8_1 + 8)
    
    if (rcx_4 != 0)
        r8_1 = rcx_4
    
    rbx_1 = *(r8_1 + (((sx.q(*(arg1 + 0xa8)) - 1) & sx.q(rax_3)) << 2))

if (*(arg1 + 0x68) == *(arg1 + 0x94) || rbx_1 == 0xffffffff)
label_141d06d45:
    rbx_1 = -1
else
    int64_t rcx_5 = *(arg1 + 0x60)
    
    while (true)
        int64_t rax_6 = sx.q(rbx_1) * 2
        
        if (*(rcx_5 + (rax_6 << 3)) == rdi)
            break
        
        rbx_1 = *(rcx_5 + (rax_6 << 3) + 8)
        
        if (rbx_1 == 0xffffffff)
            goto label_141d06d45

rdi.b = rbx_1 == 0xffffffff
sub_140a236f0(arg2, arg1 + 0xb0, 1)
int64_t* rsi_1 = nullptr
TEB* gsbase

if (data_143f36870 s> *(0x14 + *(gsbase->ThreadLocalStoragePointer + (zx.q(data_14401b1a0) << 3))))
    _Init_thread_header(&data_143f36870)
    
    if (data_143f36870 == 0xffffffff)
        data_143f36860 = 0
        data_143f36868 = 0
        atexit(sub_142cf7990)
        _Init_thread_footer(&data_143f36870)

if (rbx_1 == 0xffffffff && data_143f36868 != 0)
    int64_t* rcx_8 = data_143f36860
    
    if (rcx_8 != 0 && (*(*rcx_8 + 0x28))(rcx_8) != 0)
        if (arg2[1].d != 0)
            rbp = *arg2
        
        if (data_143f36868 != 0)
            rsi_1 = data_143f36860
        
        return (*(*rsi_1 + 0x48))(rsi_1, rbp)

return zx.q(rdi.b)
