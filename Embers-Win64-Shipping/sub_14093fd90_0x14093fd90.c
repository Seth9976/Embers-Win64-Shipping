// 函数: sub_14093fd90
// 地址: 0x14093fd90
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

*arg2 = 0
arg2[1] = 0
int64_t var_38 = 0
int32_t var_30 = 0
sub_1405947f0(&var_38, 0x19)
int32_t rax = var_30 + 0x19
var_30 = rax

if (rax s> 0)
    sub_140594770(&var_38)

UnDecorator::getReferenceType(var_38, u"SanitizerPlatformService", 0x32)
TEB* gsbase

if (data_143cecfa8 s> *(0x14 + *(gsbase->ThreadLocalStoragePointer + (zx.q(data_14401b1a0) << 3))))
    _Init_thread_header(&data_143cecfa8)
    
    if (data_143cecfa8 == 0xffffffff)
        arg5 = sub_140b58260(&data_143cecfa0, u"OnlineSubsystem", 1)
        _Init_thread_footer(&data_143cecfa8)

int64_t rbx = data_143cecfa0
j_sub_140b3db50()
int64_t* rax_3
int64_t r8
rax_3, r8 = sub_140b3da90(&data_143de7d78, rbx)
r8.b = 1
int64_t r9 = *rax_3
int64_t* rax_4 = (*(r9 + 0x60))(rax_3, &var_38, r8, r9)
int64_t rcx_5 = var_38
int64_t* rbx_1 = rax_4

if (rcx_5 != 0)
    rcx_5, arg5 = sub_140a74f90(rcx_5)

if (rbx_1 != 0)
label_14093fe83:
    
    if (rbx_1 != arg1)
        void var_28
        int64_t* rax_7 = (*(*rbx_1 + 0x30))(rbx_1, &var_28, zx.q(arg3), arg4)
        
        if (arg2 != rax_7)
            *arg2 = *rax_7
            *rax_7 = 0
            sub_1405aeff0(&arg2[1], &rax_7[1])
        
        int64_t* var_20
        
        if (var_20 != 0)
            var_20[1].d -= 1
            
            if (var_20[1].d == 1)
                (**var_20)(var_20)
                int32_t rsi_1 = *(var_20 + 0xc)
                *(var_20 + 0xc) -= 1
                
                if (rsi_1 == 1)
                    (*(*var_20 + 8))(var_20, zx.q(rsi_1))
else
    rcx_5.b = 1
    int64_t* rax_5 = sub_14093fb10(rcx_5, arg5)
    rbx_1 = rax_5
    
    if (rax_5 != 0)
        goto label_14093fe83

return arg2
