// 函数: sub_14090cdd0
// 地址: 0x14090cdd0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t arg_18 = arg3
arg3.b = 1
char rax
int64_t r8
rax, r8 = sub_140b0f6c0(&arg_18, u"TCPMESSAGING")

if (rax == 0)
    return rax

r8.b = 1
char rax_1
int64_t r8_1
rax_1, r8_1 = sub_140b0f6c0(&arg_18, u"STATUS")
wchar16 const* const rdx

if (rax_1 == 0)
    r8_1.b = 1
    char rax_4
    int64_t r8_2
    rax_4, r8_2 = sub_140b0f6c0(&arg_18, u"RESTART")
    
    if (rax_4 != 0)
        sub_140911f70(arg1)
        int64_t rax_5
        rax_5.b = 1
        return rax_5
    
    r8_2.b = 1
    
    if (sub_140b0f6c0(&arg_18, u"SHUTDOWN") != 0)
        sub_140913660(arg1)
        int64_t rax_7
        rax_7.b = 1
        return rax_7
    
    sub_140b1f640(arg4, u"Usage: TCPMESSAGING <Command>")
    sub_140b1f640(arg4, &data_142d40450)
    sub_140b1f640(arg4, u"Command")
    sub_140b1f640(arg4, u"    RESTART = Restarts the message bridge, if enabled")
    sub_140b1f640(arg4, u"    SHUTDOWN = Shut down the message bridge, if running")
    rdx = u"    STATUS = Displays the status of the TCP message transport"
else
    sub_140b1f700(arg4, u"Protocol Version: %d", 1)
    int64_t* rcx_3 = *(arg1 + 0x10)
    
    if (rcx_3 == 0)
        rdx = u"Message Bridge: Not initialized."
    else
        rdx = u"Message Bridge: Initialized and enabled"
        
        if ((*(*rcx_3 + 0x10))(rcx_3) == 0)
            rdx = u"Message Bridge: Initialized, but disabled"

sub_140b1f640(arg4, rdx)
int64_t rax_8
rax_8.b = 1
return rax_8
