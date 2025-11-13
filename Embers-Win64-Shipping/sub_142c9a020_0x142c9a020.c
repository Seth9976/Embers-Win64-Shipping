// 函数: sub_142c9a020
// 地址: 0x142c9a020
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

*arg1 = &Iex_2_3::BaseExc::`vftable'{for `std::exception'}
int64_t rdx = arg1[0xa]

if (rdx u< 0x10)
    goto label_142c9a06a

void* rcx = arg1[7]

if (rdx + 1 u< 0x1000)
    goto label_142c9a065

void* r8_1 = *(rcx - 8)

if (rcx - r8_1 - 8 u<= 0x1f)
    rcx = r8_1
label_142c9a065:
    j_sub_140a74f90(rcx)
label_142c9a06a:
    arg1[9] = 0
    arg1[0xa] = 0xf
    arg1[7].b = 0
    int64_t rdx_3 = arg1[6]
    
    if (rdx_3 u< 0x10)
        goto label_142c9a0b5
    
    void* rcx_2 = arg1[3]
    
    if (rdx_3 + 1 u< 0x1000)
        goto label_142c9a0b0
    
    void* r8_2 = *(rcx_2 - 8)
    
    if (rcx_2 - r8_2 - 8 u<= 0x1f)
        rcx_2 = r8_2
    label_142c9a0b0:
        j_sub_140a74f90(rcx_2)
    label_142c9a0b5:
        arg1[5] = 0
        arg1[6] = 0xf
        arg1[3].b = 0
        *arg1 = &std::exception::`vftable'
        return __std_exception_destroy(&arg1[1]) __tailcall

_invalid_parameter_noinfo_noreturn()
noreturn
