// 函数: sub_1426b26b0
// 地址: 0x1426b26b0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

TEB* gsbase

if (data_143f72118 s> *(0x14 + *(gsbase->ThreadLocalStoragePointer + (zx.q(data_14401b1a0) << 3))))
    _Init_thread_header(&data_143f72118)
    
    if (data_143f72118 == 0xffffffff)
        data_143f72110 = sub_14272ba80()
        _Init_thread_footer(&data_143f72118)

int32_t rbx = 1
*arg2 = 0
arg2[1] = 0
int64_t rdi = 0
int64_t i_1 = 5
int64_t i

do
    int16_t rax_2 = *arg1
    
    if (rax_2 != 0 && (rbx & zx.d(rax_2)) != 0)
        int64_t var_18
        int64_t* rax_4 = sub_140bdef30(data_143f72110, &var_18, rdi)
        int16_t* const r8_3
        
        if (rax_4[1].d == 0)
            r8_3 = &data_142d40450
        else
            r8_3 = *rax_4
        
        int64_t var_28
        sub_140a2e390(&var_28, u"%s, ", r8_3)
        int32_t var_20
        int32_t r8_5
        
        if (var_20 == 0)
            r8_5 = 0
        else
            r8_5 = var_20 - 1
        
        sub_140a20ba0(arg2, var_28, r8_5)
        int64_t rcx_3 = var_28
        
        if (rcx_3 != 0)
            sub_140a74f90(rcx_3)
        
        int64_t rcx_4 = var_18
        
        if (rcx_4 != 0)
            sub_140a74f90(rcx_4)
    
    rdi += 1
    rbx = rol.d(rbx, 1)
    i = i_1
    i_1 -= 1
while (i != 1)
return arg2
