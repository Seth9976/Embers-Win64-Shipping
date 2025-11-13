// 函数: sub_142039560
// 地址: 0x142039560
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t* rbx = nullptr
int64_t var_78 = 0
int32_t var_70 = 0
sub_1405947f0(&var_78, 0x2d)
int32_t rdi = var_70 + 0x2d

if (rdi s> 0)
    sub_140594770(&var_78)

int64_t r14 = var_78
char result =
    UnDecorator::getReferenceType(r14, ReceivedNetworkEncryptionAck not implemented", 0x5a)
char var_68 = 0
int64_t var_60 = 0
int32_t var_58 = rdi
int32_t var_54

if (rdi != 0)
    sub_1405a4c70(&var_60, rdi, 0)
    result = memcpy(var_60, r14, rdi * 2)
else
    __builtin_memset(&var_54, 0, 0x44)

if (r14 != 0)
    result = sub_140a74f90(r14)

if (arg2[1].d != 0)
    int64_t* rcx_6 = *arg2
    
    if (rcx_6 != 0)
        result = (*(*rcx_6 + 0x28))(rcx_6)
        
        if (result != 0)
            if (arg2[1].d != 0)
                rbx = *arg2
            
            result = (*(*rbx + 0x50))(rbx, &var_68)

int64_t var_20

if (var_20 != 0)
    result = sub_140a74f90(var_20)

int64_t var_30

if (var_30 != 0)
    result = sub_140a74f90(var_30)

int64_t var_40

if (var_40 != 0)
    result = sub_140a74f90(var_40)

int64_t var_50

if (var_50 != 0)
    result = sub_140a74f90(var_50)

int64_t rcx_12 = var_60

if (rcx_12 == 0)
    return result

return sub_140a74f90(rcx_12)
