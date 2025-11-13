// 函数: sub_140a69de0
// 地址: 0x140a69de0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int16_t* var_28 = nullptr
int32_t var_20 = 0
sub_1405947f0(&var_28, 6)
int32_t rsi = var_20 + 6

if (rsi s> 0)
    sub_140594770(&var_28)

int16_t* rdi = var_28
UnDecorator::getReferenceType(rdi, u"Array", 0xc)
int16_t* const rbp = &data_142d40450
int16_t* const r14 = &data_142d40450

if (rsi != 0)
    r14 = rdi

int16_t** rax_1 = (*(*arg1 + 0x50))(arg1, &var_28)

if (rax_1[1].d != 0)
    rbp = *rax_1

int16_t* const var_38 = r14
sub_140af98a0("Unknown", 0xe, u"LocMetadata Value of type '%s' used as a '%s'.", rbp)
int16_t* rsi_1 = var_28

if (rsi_1 != 0)
    int64_t* rcx_4 = data_143ddb3f0
    
    if (rcx_4 == 0)
        sub_140a750a0()
        rcx_4 = data_143ddb3f0
    
    (*(*rcx_4 + 0x30))(rcx_4, rsi_1)

sub_140afbb40()

if (rdi != 0)
    int64_t* rcx_5 = data_143ddb3f0
    
    if (rcx_5 == 0)
        sub_140a750a0()
        rcx_5 = data_143ddb3f0
    
    (*(*rcx_5 + 0x30))(rcx_5, rdi)

*arg2 = 0
arg2[1] = 0
return arg2
