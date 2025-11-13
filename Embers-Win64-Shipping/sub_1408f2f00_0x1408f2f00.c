// 函数: sub_1408f2f00
// 地址: 0x1408f2f00
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void* rdi = arg3
int32_t rbx = 1
int32_t arg_8 = 0
sub_140fc89f0(sub_140fc6160(sub_140b58260(&arg_8, u"WINDOWS", 1)), 0x38)
int64_t var_38
uint64_t var_28
int64_t* rax_3

if (rdi != 0)
label_1408f2fb5:
    int32_t rsi_1 = *(rdi + 0x18)
    int64_t rdi_1 = *(rdi + 0x10)
    var_28 = 0
    int32_t var_20_1 = rsi_1
    
    if (rsi_1 != 0)
        sub_1405a4c70(&var_28, rsi_1, 0)
        memcpy(var_28, rdi_1, rsi_1 * 2)
    else
        int32_t var_1c_1 = 0
    
    rax_3 = &var_28
else
    rdi = arg1[9]
    
    if (rdi != 0)
        goto label_1408f2fb5
    
    var_38 = 0
    int32_t var_30_1 = 0
    sub_1405947f0(&var_38, 0xc)
    int32_t rax_2 = var_30_1 + 0xc
    var_30_1 = rax_2
    
    if (rax_2 s> 0)
        sub_140594770(&var_38)
    
    UnDecorator::getReferenceType(var_38, u"(No Socket)", 0x18)
    rax_3 = &var_38
    rbx = 2

int64_t rdi_2 = *rax_3
*rax_3 = 0
rax_3[1] = 0

if ((rbx.b & 2) != 0)
    int64_t rcx_8 = var_38
    rbx &= 0xfffffffd
    
    if (rcx_8 != 0)
        sub_140a74f90(rcx_8)

if ((rbx.b & 1) != 0)
    uint64_t rcx_9 = var_28
    
    if (rcx_9 != 0)
        sub_140a74f90(rcx_9)

int64_t result = (*(*arg1 + 0x10))(arg1)

if (rdi_2 == 0)
    return result

return sub_140a74f90(rdi_2) __tailcall
