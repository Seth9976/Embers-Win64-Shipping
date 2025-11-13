// 函数: sub_1427b6e20
// 地址: 0x1427b6e20
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void var_e8
int64_t rax_1 = __security_cookie ^ &var_e8
arg1[0x13].w = 0
void* rax_2 = sub_140cde0b0()
sub_140d19010(rax_2, 
    NewObject with empty name can't be used to create default subobjects (inside of UObject derived "
"class constructor) as it produces incon")
int64_t var_90 = 0
void* rax_4 = sub_140d2dfc0(sub_1427bc220(), rax_2, 0, 0, 0, 0, 0, 0, 0)
void*** var_68 = nullptr
int32_t r12 = 1
uint64_t (* var_50)(void* arg1) = sub_1417dca20
int32_t rdx_1 = 1
int32_t var_98 = 1
void** const var_58 = &data_142e347e8
int64_t rsi = sx.q(*(rax_4 + 0x88))
int64_t (* var_78)(int64_t arg1) = std::_Callable_fun<bool,enum Concurrency::agent_status const& __ptr64,bool (__cdecl* const)(enum Concurrency::agent_status const& __ptr64),0>::_ApplyX<bool,enum Concurrency::agent_status const& __ptr64>
int32_t rax_5 = (rsi + 1).d
*(rax_4 + 0x88) = rax_5

if (rax_5 s> *(rax_4 + 0x8c))
    sub_1405a4cf0(rax_4 + 0x80)
    rdx_1 = var_98

*(*(rax_4 + 0x80) + (rsi << 2)) = rdx_1
int32_t* var_88 = &var_98
int64_t (** var_80)(int64_t arg1) = &var_78
sub_14279aef0(rax_4 + 0x90, &var_90, &var_88, nullptr)

if (var_78 != 0)
    void** const* rcx_4 = &var_58
    
    if (var_68 != 0)
        rcx_4 = var_68
    
    (*rcx_4)[2](rcx_4)

void*** var_68_1 = nullptr
int64_t r14 = sx.q(*(rax_4 + 0x88))
int32_t rsi_1 = 2
uint64_t (* var_50_1)(void* arg1) = sub_1427ad0e0
int32_t rdx_4 = 2
var_98 = 2
var_58 = &data_142e347e8
var_78 = std::_Callable_fun<bool,enum Concurrency::agent_status const& __ptr64,bool (__cdecl* const)(enum Concurrency::agent_status const& __ptr64),0>::_ApplyX<bool,enum Concurrency::agent_status const& __ptr64>
int32_t rax_9 = (r14 + 1).d
*(rax_4 + 0x88) = rax_9

if (rax_9 s> *(rax_4 + 0x8c))
    sub_1405a4cf0(rax_4 + 0x80)
    rdx_4 = var_98

*(*(rax_4 + 0x80) + (r14 << 2)) = rdx_4
var_88 = &var_98
int64_t (** var_80_1)(int64_t arg1) = &var_78
sub_14279aef0(rax_4 + 0x90, &var_90, &var_88, nullptr)

if (var_78 != 0)
    void** const* rcx_7 = &var_58
    
    if (var_68_1 != 0)
        rcx_7 = var_68_1
    
    (*rcx_7)[2](rcx_7)

void* rdx_7 = &arg1[0x11]

if (arg1 == 0)
    rdx_7 = nullptr

(*(*rax_4 + 0x310))(rax_4, rdx_7)
(*(*arg1 + 0x2a0))(arg1, rax_4)
void* rax_15 = sub_140cde0b0()
sub_140d19010(rax_15, 
    NewObject with empty name can't be used to create default subobjects (inside of UObject derived "
"class constructor) as it produces incon")
var_90 = 0
int64_t* r15 = sub_140d2dfc0(sub_1427bf6e0(), rax_15, 0, 0, 0, 0, 0, 0, 0)
void*** var_68_2 = nullptr
var_98 = 1
uint64_t (* var_50_2)(void* arg1) = sub_1417dca20
var_58 = &data_142e347e8
int64_t r14_1 = sx.q(r15[7].d)
var_78 = std::_Callable_fun<bool,enum Concurrency::agent_status const& __ptr64,bool (__cdecl* const)(enum Concurrency::agent_status const& __ptr64),0>::_ApplyX<bool,enum Concurrency::agent_status const& __ptr64>
int32_t rcx_12 = (r14_1 + 1).d
r15[7].d = rcx_12

if (rcx_12 s> *(r15 + 0x3c))
    sub_1405a4cf0(&r15[6])
    r12 = var_98

*(r15[6] + (r14_1 << 2)) = r12
var_88 = &var_98
int64_t (** var_80_2)(int64_t arg1) = &var_78
sub_14279aef0(&r15[8], &var_90, &var_88, nullptr)

if (var_78 != 0)
    void** const* rcx_15 = &var_58
    
    if (var_68_2 != 0)
        rcx_15 = var_68_2
    
    (*rcx_15)[2](rcx_15)

int64_t r14_2 = sx.q(r15[7].d)
uint64_t (* var_50_3)(void* arg1) = sub_1427ad0e0
var_58 = &data_142e347e8
var_78 = std::_Callable_fun<bool,enum Concurrency::agent_status const& __ptr64,bool (__cdecl* const)(enum Concurrency::agent_status const& __ptr64),0>::_ApplyX<bool,enum Concurrency::agent_status const& __ptr64>
int32_t rax_21 = (r14_2 + 1).d
void*** var_68_3 = nullptr
var_98 = 2
r15[7].d = rax_21

if (rax_21 s> *(r15 + 0x3c))
    sub_1405a4cf0(&r15[6])
    rsi_1 = var_98

*(r15[6] + (r14_2 << 2)) = rsi_1
var_88 = &var_98
int64_t (** var_80_3)(int64_t arg1) = &var_78
sub_14279aef0(&r15[8], &var_90, &var_88, nullptr)

if (var_78 != 0)
    void** const* rcx_18 = &var_58
    
    if (var_68_3 != 0)
        rcx_18 = var_68_3
    
    (*rcx_18)[2](rcx_18)

void* rdx_14 = &arg1[0x12]

if (arg1 == 0)
    rdx_14 = nullptr

(*(*r15 + 0x2c0))(r15, rdx_14)
int64_t result = (*(*arg1 + 0x2a0))(arg1, r15)
__security_check_cookie(rax_1 ^ &var_e8)
return result
