// 函数: sub_1429c22c0
// 地址: 0x1429c22c0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void* rcx = arg1[0x1b]

if (rcx == 0)
    goto label_1429c232f

if (((arg1[0x1d] - rcx) & 0xfffffffffffffff8) u< 0x1000)
    goto label_1429c230e

void* r8_1 = *(rcx - 8)

if (rcx - r8_1 - 8 u<= 0x1f)
    rcx = r8_1
label_1429c230e:
    j_sub_140a74f90(rcx)
    __builtin_memset(&arg1[0x1b], 0, 0x18)
label_1429c232f:
    _Mtx_destroy_in_situ(&arg1[0x11])
    sub_1429c3230(&arg1[0xf])
    void* rcx_4 = arg1[0xc]
    
    if (rcx_4 == 0)
        _Mtx_destroy_in_situ(&arg1[2])
        return sub_1429c3230(arg1) __tailcall
    
    if (((arg1[0xe] - rcx_4) & 0xfffffffffffffff8) u< 0x1000)
        goto label_1429c2372
    
    void* r8_2 = *(rcx_4 - 8)
    
    if (rcx_4 - r8_2 - 8 u<= 0x1f)
        rcx_4 = r8_2
    label_1429c2372:
        j_sub_140a74f90(rcx_4)
        __builtin_memset(&arg1[0xc], 0, 0x18)
        _Mtx_destroy_in_situ(&arg1[2])
        return sub_1429c3230(arg1) __tailcall

_invalid_parameter_noinfo_noreturn()
noreturn
