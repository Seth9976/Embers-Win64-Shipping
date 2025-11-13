// 函数: sub_140cd9110
// 地址: 0x140cd9110
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

char arg_8 = 0
char* var_20 = &arg_8
void*** (* var_28)() = sub_140884c50
void* rax
int64_t r9
rax, r9 = sub_140a756e0(&var_28, &data_14397f5f0)
int64_t* rdi

if (*(rax + 0x18) == 0)
    rdi = nullptr
    sub_140af98a0("Unknown", 0x6c, u"No object initializer found during construction.", r9)
    r9 = sub_140afbb40()
else
    rdi = *(*(rax + 0x10) + (sx.q(*(rax + 0x18)) << 3) - 8)
    
    if (rdi == 0)
        sub_140af98a0("Unknown", 0x6c, u"No object initializer found during construction.", r9)
        r9 = sub_140afbb40()

if (*rdi != arg1)
    sub_140af98a0("Unknown", 0x6d, u"Using incorrect object initializer.", r9)
    sub_140afbb40()

return sub_140d1dc20(rdi, arg1, arg2, arg3, arg4, arg5, arg6)
