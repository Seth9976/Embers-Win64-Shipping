// 函数: sub_140b280e0
// 地址: 0x140b280e0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

__chkstk(0x1050)
void var_1058
int64_t rax_1 = __security_cookie ^ &var_1058
enum WIN32_ERROR rax_2 = GetLastError()
wchar16 var_1018[0x400]
memset(&var_1018, 0, 0x800)
void var_818
sub_140b6cae0(&var_818, 0x400, NO_ERROR)
sub_140b01a80(&var_1018, u"GetLastError : %d\n\n%s", zx.q(rax_2))
char rax_4
int64_t r9_1
rax_4, r9_1 = sub_140a4aa30()
int32_t result

if (rax_4 != 1)
    void var_1038
    int64_t* rax_6 = sub_140ac6680(_vfprintf_p_l(&var_1038, u"System Error", u"MessageDialog"))
    PWSTR r8_2
    
    if (rax_6[1].d == 0)
        r8_2 = &data_142d40450
    else
        r8_2 = *rax_6
    
    result = sub_140b709d0(0, &var_1018, r8_2)
    int64_t* var_1030
    
    if (var_1030 != 0)
        result = var_1030[1].d
        var_1030[1].d -= 1
        
        if (result == 1)
            result = (**var_1030)(var_1030)
            int32_t rdi_1 = *(var_1030 + 0xc)
            *(var_1030 + 0xc) -= 1
            
            if (rdi_1 == 1)
                result = (*(*var_1030 + 8))(var_1030, zx.q(rdi_1))
else
    sub_140af98a0("Unknown", 0x38, &var_1018, r9_1)
    result = sub_140afbb40()

__security_check_cookie(rax_1 ^ &var_1058)
return result
