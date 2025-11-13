// 函数: sub_142a43620
// 地址: 0x142a43620
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t _ArgList = arg2
int64_t r8
int64_t arg_18 = r8
int64_t r9
int64_t arg_20 = r9
char* _Format = arg1

if (data_143cc82c4 == 0)
    sub_142a438a0(&data_143cc82c0)
    _Format = arg1

if (data_143cc82c0 == 0 || _Format == 0 || sub_142a40dc0().b != 0)
    return 

TEB* gsbase
char* rdi_2 = *(gsbase->ThreadLocalStoragePointer + (zx.q(data_14401b1a0) << 3)) + 0x10

if (*rdi_2 != 0)
    return 

*rdi_2 = 1
char _Buffer[0x200]
__stdio_common_vsprintf(data_143cd5b30 | 2, &_Buffer, 0x1ff, _Format, nullptr, &_ArgList)
*rdi_2 = 0
uint8_t (* rax)[0x50] = sub_142a40dc0()

if (rax.b != 0 || *rdi_2 != rax.b)
    return 

int32_t (* rbx)(char const* _Buffer) = data_1440153c8
*rdi_2 = 1

if (rbx == 0)
    rbx = _cputs

rbx("mimalloc: ")
rbx(&_Buffer)
*rdi_2 = 0
