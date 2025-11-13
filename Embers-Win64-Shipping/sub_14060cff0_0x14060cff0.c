// 函数: sub_14060cff0
// 地址: 0x14060cff0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int32_t* rax = j_sub_140a82f30(0x18)
int32_t* rsi = rax

if (rax == 0)
    rsi = nullptr
else
    int32_t rdx = arg5[2].d
    *(rax + 8) = 0
    sub_140615390(rax, rdx)

sub_14060ca80(arg1, arg2, arg3)
arg1[1].d = zx.d(arg4)
*arg1 = &data_142d63858
arg1[3] = rsi
arg1[6] = 0
arg1[7] = 0xf
arg1[4].b = 0

if (&arg1[4] != arg5)
    int64_t* rdx_2 = arg5
    
    if (arg5[3] u>= 0x10)
        rdx_2 = *arg5
    
    sub_14058ad40(&arg1[4], rdx_2, arg5[2])

int64_t rdx_3 = arg5[3]

if (rdx_3 u>= 0x10)
    void* rcx_3 = *arg5
    
    if (rdx_3 + 1 u>= 0x1000)
        void* r8_2 = *(rcx_3 - 8)
        
        if (rcx_3 - r8_2 - 8 u> 0x1f)
            _invalid_parameter_noinfo_noreturn()
            noreturn
        
        rcx_3 = r8_2
    
    j_sub_140a74f90(rcx_3)

arg5[2] = 0
arg5[3] = 0xf
*arg5 = 0
return arg1
