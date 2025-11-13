// 函数: sub_140da7340
// 地址: 0x140da7340
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int32_t* result = arg2
int32_t r9 = arg6
arg6 = r9
int64_t* (* arg_8)(int64_t* arg1, void* arg2, int32_t* arg3) = nullptr
void* arg_18 = nullptr

if (arg7 != 0 && arg4 s> 0)
    int32_t rax_2 = arg4 - arg1[0xb].d
    
    if (rax_2 - 1 s< 0 || rax_2 - 1 s>= arg1[0xd].d)
        arg2.b = 0
    else
        arg2 = arg1[0xc] + ((sx.q(rax_2) * 3 - 3) << 3)
        
        if (arg2 == 0)
            arg2.b = 0
        else
            int64_t rax_5 = sx.q(*arg2)
            
            if (rax_5.d == 0xffffffff)
                arg2.b = 0
            else
                arg2 = zx.q(*(rax_5 * 0x68 + *arg1 + 0x20))
    
    arg6 = sx.d(arg2.b) + r9

void arg_30
void* var_48 = &arg_30
int64_t var_50 = arg3
int32_t* var_40 = &arg6
int64_t* var_58 = arg1
int64_t* var_38 = &arg_8
int64_t* var_30 = &arg_18
int64_t** var_60 = &var_58
int64_t* (* var_68)(int64_t* arg1, void* arg2, int32_t* arg3) = sub_140d9b180

if (sub_140d9f5a0(arg1, arg4, arg5, &var_68) == 0)
    result[4].b = 0
else
    int64_t* (* rcx_3)(int64_t* arg1, void* arg2, int32_t* arg3) = arg_8
    
    if (rcx_3 == 0)
        void* rax_12 = arg_18
        
        if (rax_12 == 0 || *(rax_12 + 0x23) == 0)
            int32_t rcx_6 = arg1[0xb].d
            
            if (arg5 s< rcx_6 || arg5 s> rcx_6 + *(arg1 + 0x5c))
                result[4].b = 0
            else
                var_68 = nullptr
                var_60.d = 0
                var_60:4.d = arg5
                *result = var_68.o
                result[4].b = 1
        else
            int32_t rcx_4 = arg1[0xb].d
            
            if (arg4 s< rcx_4 || arg4 s> rcx_4 + *(arg1 + 0x5c))
                result[4].b = 0
            else
                var_68 = nullptr
                var_60.d = 0
                var_60:4.d = arg4
                *result = var_68.o
                result[4].b = 1
    else
        var_60.d = arg6
        var_60:4.d = *(rcx_3 + 0x14)
        var_68 = rcx_3
        *result = var_68.o
        result[4].b = 1

return result
