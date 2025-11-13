// 函数: sub_141c7f350
// 地址: 0x141c7f350
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t arg_18 = arg3
arg3.b = 1
char rax
int64_t r8
rax, r8 = sub_140b0f6c0(&arg_18, u"MESSAGING")

if (rax == 0)
    return rax

r8.b = 1
wchar16 const* const rdx

if (sub_140b0f6c0(&arg_18, u"STATUS") == 0)
    sub_140b1f640(arg4, u"Usage: MESSAGING <Command>")
    sub_140b1f640(arg4, &data_142d40450)
    sub_140b1f640(arg4, u"Command")
    rdx = u"    STATUS = Displays the status of the default message bus"
else
    rdx = u"Default message bus has been initialized."
    
    if (*(arg1 + 0x10) == 0)
        rdx = u"Default message bus has NOT been initialized yet."

sub_140b1f640(arg4, rdx)
int64_t rax_2
rax_2.b = 1
return rax_2
