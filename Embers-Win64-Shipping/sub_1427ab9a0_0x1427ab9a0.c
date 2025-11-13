// 函数: sub_1427ab9a0
// 地址: 0x1427ab9a0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void var_a8
int64_t rax_1 = __security_cookie ^ &var_a8
*(arg1 + 0x70) = arg2
int32_t rbp = arg3
sub_140627710(arg1 + 0x78, arg4)
int64_t rcx_1 = arg4[1]
int64_t* rbx_1 = arg4[2]

if (rbx_1 != 0)
    rbx_1[1].d += 1
    
    if (rbx_1 != 0)
        rbx_1[1].d += 1

int64_t var_40 = *arg4
void*** var_58 = nullptr
void** const var_48 = &data_1434b9f00
int64_t (* var_68)(int64_t* arg1, void* arg2) = sub_1427a25c0
int64_t rsi = sx.q(*(arg1 + 0x98))
int64_t var_38 = rcx_1
int64_t* var_30 = rbx_1
int32_t var_88 = rbp
int32_t rax_3 = (rsi + 1).d
*(arg1 + 0x98) = rax_3

if (rax_3 s> *(arg1 + 0x9c))
    sub_1405a4cf0(arg1 + 0x90)
    rbp = var_88

*(*(arg1 + 0x90) + (rsi << 2)) = rbp
int32_t* var_78 = &var_88
int64_t (** var_70)(int64_t* arg1, void* arg2) = &var_68
void var_80
int32_t* result = sub_14279aef0(arg1 + 0xa0, &var_80, &var_78, nullptr)

if (var_68 != 0)
    void** const* rcx_4 = &var_48
    
    if (var_58 != 0)
        rcx_4 = var_58
    
    result = (*rcx_4)[2](rcx_4)

if (rbx_1 != 0)
    rbx_1[1].d -= 1
    
    if (rbx_1[1].d == 1)
        result = (**rbx_1)(rbx_1)
        int32_t temp1_1 = *(rbx_1 + 0xc)
        *(rbx_1 + 0xc) -= 1
        
        if (temp1_1 == 1)
            result = (*(*rbx_1 + 8))(rbx_1, 1)

__security_check_cookie(rax_1 ^ &var_a8)
return result
