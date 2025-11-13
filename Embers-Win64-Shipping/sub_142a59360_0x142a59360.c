// 函数: sub_142a59360
// 地址: 0x142a59360
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void var_78
int64_t rax_1 = __security_cookie ^ &var_78
int32_t rdi = arg2

if (arg2 == 2)
    char var_40
    __builtin_memset(&var_40, 0, 0x20)
    int64_t rbx_1 = 0
    int32_t var_48
    int32_t* var_58_1 = &var_48
    var_48 = 0
    int32_t rax_2 = sub_142a46470(arg1, "cf", &var_40, zx.q(arg2 + 0x1e))
    
    if (var_48 s<= 0 && rax_2 s> 0)
        bool cond:0_1
        
        while (true)
            char rax_3 = (&var_40)[rbx_1]
            rbx_1 += 1
            char temp0_1 = *(rbx_1 + 0x14363d42f)
            cond:0_1 = rax_3 == temp0_1
            
            if (rax_3 != temp0_1)
                break
            
            if (rbx_1 == 8)
                cond:0_1 = rax_3 == *(rbx_1 + 0x14363d42f)
                break
        
        if (cond:0_1)
            rdi = 0xc

int64_t* rcx

if (data_144015618 != 0)
    if (data_144015618 != 2 && sub_142a85f00(&data_144015618) != 0)
        sub_142a59300()
        sub_142a85e80(&data_144015618)
    
    rcx = data_144015610

struct icu_64::NumberFormat::icu_64::Win32NumberFormat::VTable** result

if (data_144015618 == 0 || rcx == 0)
    result = sub_142a594a0(arg1, rdi, 0, arg3)
else
    result = sub_142a9b440(rcx, arg1, rdi, arg3)

__security_check_cookie(rax_1 ^ &var_78)
return result
