// 函数: sub_142ad0560
// 地址: 0x142ad0560
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void var_d8
int64_t rax_1 = __security_cookie ^ &var_d8
int64_t rbx = sx.q(std::_WChar_traits<wchar_t>::length(arg1))
char var_a8[0x90]
sub_142a8d6e0(arg1, &var_a8, rbx.d)

if (rbx u>= 0x81)
    __report_rangecheckfailure()
    noreturn

var_a8[rbx] = 0
char (* rax_3)[0x90] = &var_a8

if (var_a8[0] != 0)
    while (true)
        char rcx_1 = (*rax_3)[1]
        rax_3 = &(*rax_3)[1]
        
        if (rcx_1 != 0x2f)
            if (rcx_1 == 0)
                break
        else
            *rax_3 = 0x3a

int32_t var_b8[0x4]
var_b8[0] = 0
char** rax_4 = sub_142a64160(nullptr, "keyTypeData", &var_b8)
sub_142a625a0(rax_4, "typeMap", rax_4, &var_b8)
sub_142a625a0(rax_4, "timezone", rax_4, &var_b8)
void* result = sub_142a63dd0(rax_4, &var_a8, nullptr, &var_b8)
sub_142a5f860(rax_4)
__security_check_cookie(rax_1 ^ &var_d8)
return result
