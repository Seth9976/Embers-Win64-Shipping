// 函数: sub_140b01f80
// 地址: 0x140b01f80
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

__chkstk(0x4178)
void var_41a8
int64_t rax_1 = __security_cookie ^ &var_41a8
int64_t rax_2 = data_143de54a0

if (rax_2 != 0)
    rax_2()

wchar16 _Destination[0xffe]
wcsncpy(&_Destination, arg4, 0xffe)
int16_t var_204c = 0
TEB* gsbase

if (data_143de5910 s> *(0x14 + *(gsbase->ThreadLocalStoragePointer + (zx.q(data_14401b1a0) << 3))))
    _Init_thread_header(&data_143de5910)
    
    if (data_143de5910 == 0xffffffff)
        InitializeCriticalSection(&data_143de58e8)
        SetCriticalSectionSpinCount(&data_143de58e8, 0xfa0)
        atexit(sub_142cbee30)
        _Init_thread_footer(&data_143de5910)

EnterCriticalSection(&data_143de58e8)
void var_4168
sub_1405eb940(&var_4168, arg2)
wchar16* var_4188 = arg4
sub_140a4bcc0(u"%s [File:%s] [Line: %i] \n%s\n", arg1)
int64_t var_4068

if (var_4068 != 0)
    sub_140a74f90(var_4068)

sub_1405eb940(&var_4168, arg2)
wchar16 (* var_4178)[0xffe] = &_Destination
int32_t var_4180 = arg3
int64_t var_4060
int64_t var_4188_1 = var_4060
wchar16 _Source[0x1000]
int64_t r14
r14.b = sub_1405a6010(&_Source, 0x1000, u"%s [File:%s] [Line: %i] \n%s\n", arg1) s< 0

if (var_4068 != 0)
    sub_140a74f90(var_4068)

if (r14.b != 0)
    sub_1405eb940(&var_4168, arg2)
    wchar16* var_4178_1 = arg4
    int32_t var_4180_1 = arg3
    int64_t var_4188_2 = var_4060
    sub_1405a6010(&_Source, 0x1000, u"%s [File:%s] [Line: %i] \n%s\n<< callstack too long >>", arg1)
    
    if (var_4068 != 0)
        sub_140a74f90(var_4068)

wcsncpy(&data_143ddb420, &_Source, 0x3fff)
int64_t rdx_6 = -1
data_143de341e = 0

do
    rdx_6 += 1
while ((&data_143ddb420)[rdx_6] != 0)

if (0x4000 - rdx_6.d s> 0)
    int64_t rbx_1 = sx.q(0x4000 - rdx_6.d)
    wcsncpy(&(&data_143ddb420)[sx.q(rdx_6.d)], u"\r\n\r\n", rbx_1 - 1)
    (&data_143ddb420)[sx.q(rdx_6.d) + rbx_1 - 1] = 0

int64_t result = LeaveCriticalSection(&data_143de58e8)
__security_check_cookie(rax_1 ^ &var_41a8)
return result
