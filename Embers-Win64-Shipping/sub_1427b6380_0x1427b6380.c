// 函数: sub_1427b6380
// 地址: 0x1427b6380
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void var_d8
int64_t rax_1 = __security_cookie ^ &var_d8
void* rax_2 = sub_140cde0b0()
sub_140d19010(rax_2, 
    NewObject with empty name can't be used to create default subobjects (inside of UObject derived "
"class constructor) as it produces incon")
int64_t var_88 = 0
void* rax_4 = sub_140d2dfc0(sub_1427bc220(), rax_2, 0, 0, 0, 0, 0, 0, 0)
void*** var_58 = nullptr
int32_t rdx_1 = 1
uint64_t (* var_40)(void* arg1) = sub_1417dca20
void** const var_48 = &data_142e347e8
int64_t (* var_68)(int64_t arg1) = std::_Callable_fun<bool,enum Concurrency::agent_status const& __ptr64,bool (__cdecl* const)(enum Concurrency::agent_status const& __ptr64),0>::_ApplyX<bool,enum Concurrency::agent_status const& __ptr64>
int64_t rsi = sx.q(*(rax_4 + 0x88))
int32_t var_80 = 1
int32_t rcx_2 = (rsi + 1).d
*(rax_4 + 0x88) = rcx_2

if (rcx_2 s> *(rax_4 + 0x8c))
    sub_1405a4cf0(rax_4 + 0x80)
    rdx_1 = var_80

*(*(rax_4 + 0x80) + (rsi << 2)) = rdx_1
int32_t* var_78 = &var_80
int64_t (** var_70)(int64_t arg1) = &var_68
sub_14279aef0(rax_4 + 0x90, &var_88, &var_78, nullptr)

if (var_68 != 0)
    void** const* rcx_5 = &var_48
    
    if (var_58 != 0)
        rcx_5 = var_58
    
    (*rcx_5)[2](rcx_5)

void* rdx_4 = &arg1[7]

if (arg1 == 0)
    rdx_4 = nullptr

(*(*rax_4 + 0x310))(rax_4, rdx_4)
int64_t rax_9 = *rax_4
var_80 = 0x32
(*(rax_9 + 0x268))(rax_4, &var_80)
(*(*arg1 + 0x288))(arg1, rax_4)
void* rax_11 = sub_140cde0b0()
sub_140d19010(rax_11, 
    NewObject with empty name can't be used to create default subobjects (inside of UObject derived "
"class constructor) as it produces incon")
var_88 = 0
void* rax_13 = sub_140d2dfc0(sub_1427bf6e0(), rax_11, 0, 0, 0, 0, 0, 0, 0)
void* rdx_8 = &arg1[8]

if (arg1 == 0)
    rdx_8 = nullptr

int64_t r8_1 = *rax_13
(*(r8_1 + 0x2c0))(rax_13, rdx_8, r8_1)
int64_t r8_2 = *rax_13
var_80 = 0x32
(*(r8_2 + 0x268))(rax_13, &var_80, r8_2)
(*(*arg1 + 0x288))(arg1, rax_13)
sub_140d19010(arg1, 
    NewObject with empty name can't be used to create default subobjects (inside of UObject derived "
"class constructor) as it produces incon")
var_88 = 0
void* rax_16 = sub_140d2dfc0(sub_1427bb060(), arg1, 0, 0, 0, 0, 0, 0, 0)
arg1[9] = rax_16
void* rax_18

if (rax_16 == 0)
    rax_18 = nullptr
else
    rax_18 = sub_140d21950(rax_16, sub_1427baa40())

arg1[0xa] = rax_18
sub_140d19010(arg1, 
    NewObject with empty name can't be used to create default subobjects (inside of UObject derived "
"class constructor) as it produces incon")
var_88 = 0
void* rax_20 = sub_140d2dfc0(sub_1427c0600(), arg1, 0, 0, 0, 0, 0, 0, 0)
arg1[0xb] = rax_20
void* rax_22

if (rax_20 == 0)
    rax_22 = nullptr
else
    rax_22 = sub_140d21950(rax_20, sub_1427bae60())

arg1[0xc] = rax_22
sub_140d19010(arg1, 
    NewObject with empty name can't be used to create default subobjects (inside of UObject derived "
"class constructor) as it produces incon")
var_88 = 0
void* rax_24 = sub_140d2dfc0(sub_1427bba70(), arg1, 0, 0, 0, 0, 0, 0, 0)
arg1[0xd] = rax_24
void* rax_26

if (rax_24 == 0)
    rax_26 = nullptr
else
    rax_26 = sub_140d21950(rax_24, sub_1427babc0())

arg1[0xe] = rax_26
sub_140d19010(arg1, 
    NewObject with empty name can't be used to create default subobjects (inside of UObject derived "
"class constructor) as it produces incon")
var_88 = 0
void* result = sub_140d2dfc0(sub_1427bf420(), arg1, 0, 0, 0, 0, 0, 0, 0)
arg1[0xf] = result

if (result == 0)
    arg1[0x10] = 0
else
    result = sub_140d21950(result, sub_1427bad50())
    arg1[0x10] = result

arg1[0x11].b = 0
__security_check_cookie(rax_1 ^ &var_d8)
return result
