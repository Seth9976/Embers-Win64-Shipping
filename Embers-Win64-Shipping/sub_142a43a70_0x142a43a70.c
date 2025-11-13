// 函数: sub_142a43a70
// 地址: 0x142a43a70
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

if (arg3 == 0)
    return 

int32_t (* rbx_1)(char const* _Buffer) = arg1

if (sub_142a40dc0().b != 0)
    return 

TEB* gsbase
char* rdi_2 = *(gsbase->ThreadLocalStoragePointer + (zx.q(data_14401b1a0) << 3)) + 0x10

if (*rdi_2 != 0)
    return 

*rdi_2 = 1
char _Buffer[0x200]
__stdio_common_vsprintf(data_143cd5b30 | 2, &_Buffer, 0x1ff, arg3, nullptr, arg4)
*rdi_2 = 0
uint64_t rax = sub_142a40dc0()

if (rax.b != 0 || *rdi_2 != rax.b)
    return 

if (rbx_1 == 0)
label_142a43b3c:
    rbx_1 = data_1440153c8
    
    if (rbx_1 == 0)
        rbx_1 = _cputs
else
    if (rbx_1 == __acrt_iob_func(1))
        goto label_142a43b3c
    
    if (rbx_1 == __acrt_iob_func(2))
        goto label_142a43b3c

*rdi_2 = 1

if (arg2 != 0)
    rbx_1(arg2)

rbx_1(&_Buffer)
*rdi_2 = 0
