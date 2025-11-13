// 函数: sub_141b05750
// 地址: 0x141b05750
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t* rsi = arg3
int32_t arg_10

if (arg2 != 0)
    void* rax_1 = sub_14252e6d0()
    void* rdx = *(arg2 + 0x10)
    int64_t rax_2 = sx.q(*(rax_1 + 0x38))
    int128_t var_58
    
    if (rax_2.d s> *(rdx + 0x38) || *(*(rdx + 0x30) + (rax_2 << 3)) != rax_1 + 0x30)
        void* rax_7 = sub_14259ad30()
        void* rdx_2 = *(arg2 + 0x10)
        int64_t rax_8 = sx.q(*(rax_7 + 0x38))
        
        if (rax_8.d s<= *(rdx_2 + 0x38) && *(*(rdx_2 + 0x30) + (rax_8 << 3)) == rax_7 + 0x30)
            int64_t* rax_10
            rax_10, arg3 = sub_140b58260(&arg_10, u"LightColor", 1)
            
            if (rsi[0xe] == *rax_10)
                var_58 = *arg1
                return sub_141f70d70(arg2, &var_58)
    else
        int64_t* rax_4
        rax_4, arg3 = sub_140b58260(&arg_10, u"LightColor", 1)
        
        if (rsi[0xe] == *rax_4)
            arg3.b = 1
            var_58 = *arg1
            return sub_141f25c00(arg2, &var_58, arg3.b)

arg3.b = 1
int32_t arg_20
sub_140ae16d0(arg1, &arg_20, arg3.b)
arg_10 = arg_20
void var_48
sub_1405bb0c0(rsi, &var_48, arg2)
void var_18
void* rax_14 = sub_140d3c6e0(&var_18)

if (rax_14 == 0)
    void* rax_15 = sub_1405bdd80(&var_48)
    
    if (rax_15 != 0)
        int64_t rcx_11 = sx.q(*(rax_15 + 0x4c))
        int64_t var_20
        
        if (rcx_11 != neg.q(var_20))
            *(rcx_11 + var_20) = arg_10
else
    sub_141af1d20(arg2, rax_14, &arg_10)

void var_10
int64_t result = sub_140d3c6e0(&var_10)

if (result != 0)
    int64_t r9_1 = *arg2
    result = (*(r9_1 + 0x210))(arg2, result, 0, r9_1)

int64_t var_30

if (var_30 == 0)
    return result

return sub_140a74f90(var_30)
