// 函数: sub_1418a57d0
// 地址: 0x1418a57d0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

char arg_20 = arg4

if (arg4 == 0)
    *(0x18 + arg1) += 1
    return 0x18

int16_t* rax = sub_141851680(&arg_20)
int64_t var_38 = 0
int32_t rdx = 0
int32_t var_30 = 0
int32_t rcx_1 = 0
int32_t var_2c = 0

if (rax != 0 && *rax != 0)
    int64_t rbx_1 = -1
    
    do
        rbx_1 += 1
    while (rax[rbx_1] != 0)
    
    if (rbx_1.d + 1 s> 0)
        sub_1405947f0(&var_38, rbx_1.d + 1)
        rcx_1 = var_2c
        rdx = var_30
    
    int32_t rax_1 = rdx + rbx_1.d + 1
    int32_t var_30_1 = rax_1
    
    if (rax_1 s> rcx_1)
        sub_140594770(&var_38)
    
    UnDecorator::getReferenceType(var_38, rax, (rbx_1.d + 1) * 2)

int64_t var_48 = 0
int32_t var_40 = 0
sub_1405947f0(&var_48, 0x13)
int32_t rax_2 = var_40 + 0x13
var_40 = rax_2

if (rax_2 s> 0)
    sub_140594770(&var_48)

UnDecorator::getReferenceType(var_48, u"DiskChunkStoreLoad", 0x26)
int64_t rbx_3 = **(arg1 + 8)
enum WIN32_ERROR rax_4 = GetLastError()
(*(rbx_3 + 0x18))(*(arg1 + 8), arg2, arg3, zx.q(rax_4), &var_48, &var_38)
int64_t rcx_9 = var_48

if (rcx_9 != 0)
    sub_140a74f90(rcx_9)

int64_t rcx_10 = var_38

if (rcx_10 != 0)
    sub_140a74f90(rcx_10)

*(0x20 + arg1) += 1
return 0x20
