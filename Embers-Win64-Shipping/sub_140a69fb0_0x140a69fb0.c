// 函数: sub_140a69fb0
// 地址: 0x140a69fb0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int16_t* var_18 = nullptr
int32_t var_10 = 0
sub_1405947f0(&var_18, 8)
int32_t rdi = var_10 + 8

if (rdi s> 0)
    sub_140594770(&var_18)

int16_t* rbx = var_18
UnDecorator::getReferenceType(rbx, u"Boolean", 0x10)
int16_t* const rsi = &data_142d40450
int16_t* const rbp = &data_142d40450

if (rdi != 0)
    rbp = rbx

int16_t** rax_1 = (*(*arg1 + 0x50))(arg1, &var_18)

if (rax_1[1].d != 0)
    rsi = *rax_1

int16_t* const var_28 = rbp
sub_140af98a0("Unknown", 0xe, u"LocMetadata Value of type '%s' used as a '%s'.", rsi)
int16_t* rdi_1 = var_18

if (rdi_1 != 0)
    int64_t* rcx_4 = data_143ddb3f0
    
    if (rcx_4 == 0)
        sub_140a750a0()
        rcx_4 = data_143ddb3f0
    
    (*(*rcx_4 + 0x30))(rcx_4, rdi_1)

sub_140afbb40()

if (rbx != 0)
    int64_t* rcx_5 = data_143ddb3f0
    
    if (rcx_5 == 0)
        sub_140a750a0()
        rcx_5 = data_143ddb3f0
    
    (*(*rcx_5 + 0x30))(rcx_5, rbx)

int64_t result
result.b = 0
return result
