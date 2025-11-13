// 函数: sub_140d1fc00
// 地址: 0x140d1fc00
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

char rbx = 0
int32_t arg_10 = 0
int32_t var_10 = &arg_10
arg_10.b = 0
void*** (* var_18)() = sub_140884c50
void* rax = sub_140a756e0(&var_18, &data_14397f5f0)
int16_t* const lpOutputString_3 = &data_142d40450
void*** (* r8)()

if (*(rax + 0x18) == 0)
    r8 = u"Unknown"
else
    int64_t* rax_2 = *(*(rax + 0x10) + (sx.q(*(rax + 0x18)) << 3) - 8)
    
    if (rax_2 == 0)
        r8 = u"Unknown"
    else
        void* rax_4 = *(*rax_2 + 0x10)
        
        if (rax_4 == 0)
            r8 = u"Unknown"
        else
            arg_10.q = *(rax_4 + 0x18)
            sub_140b63b70(&arg_10, &var_18)
            r8 = &data_142d40450
            rbx = 1
            
            if (var_10 != 0)
                r8 = var_18

int16_t* lpOutputString_1
sub_140a2e390(&lpOutputString_1, u"CDO Constructor (%s): Failed to find %s\n", r8)

if ((rbx & 1) != 0)
    void*** (* rcx_5)() = var_18
    
    if (rcx_5 != 0)
        sub_140a74f90(rcx_5)

int16_t* lpOutputString = &data_142d40450
int32_t var_20

if (var_20 != 0)
    lpOutputString = lpOutputString_1

sub_140a4bcb0(lpOutputString)

if (var_20 != 0)
    lpOutputString_3 = lpOutputString_1

sub_140bdd8e0()
int64_t result = sub_140b1f6d0(&data_143e1ac00, 2, lpOutputString_3)
int16_t* lpOutputString_2 = lpOutputString_1

if (lpOutputString_2 == 0)
    return result

return sub_140a74f90(lpOutputString_2)
