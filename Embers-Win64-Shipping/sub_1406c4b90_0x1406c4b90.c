// 函数: sub_1406c4b90
// 地址: 0x1406c4b90
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void var_858
int64_t rax_1 = __security_cookie ^ &var_858
char _Buffer[0x800]
__stdio_common_vsprintf_s(data_143cd5b30, &_Buffer, 0x800, arg3, nullptr, arg4)
int16_t* var_828 = nullptr
int32_t var_820 = 0
sub_1405947f0(&var_828, 0xa)
int32_t rax_2 = var_820 + 0xa

if (rax_2 s> 0)
    sub_140594770(&var_828)

UnDecorator::getReferenceType(var_828, u"FFMPEG - ", 0x14)
int64_t r8 = -1

do
    r8 += 1
while (_Buffer[r8] != 0)

sub_140a20b00(&var_828, &_Buffer, r8.d)
uint64_t result = zx.q(arg2 - 8)

if (result.d u<= 0x30)
    result = zx.q(lookup_table_1406c4cf0[sx.q(result.d)])
    
    switch (result)
        case 0
            int16_t* const r9_1 = &data_142d40450
            
            if (rax_2 != 0)
                r9_1 = var_828
            
            sub_140af98a0("Unknown", 0x97, u"%s", r9_1)
            result = sub_140afbb40()

int16_t* rcx_7 = var_828

if (rcx_7 != 0)
    result = sub_140a74f90(rcx_7)

__security_check_cookie(rax_1 ^ &var_858)
return result
