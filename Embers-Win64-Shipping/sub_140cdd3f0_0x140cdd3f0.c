// 函数: sub_140cdd3f0
// 地址: 0x140cdd3f0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void* rbx
void* arg_18 = rbx
void var_188
int64_t rax_1 = __security_cookie ^ &var_188
int32_t rbp = 0
*arg1 = 0
arg1[1] = 0
char rsi = 0
int32_t var_158 = 0
int64_t rax_3 = (*(*arg2 + 0x200))(arg2)
int64_t var_48
int32_t rax_6

if (rax_3 != 0)
    var_48 = 0
    void var_148
    void* var_40_1 = &var_148
    int32_t var_38_1 = 7
    sub_1405a7220(&var_148, 8, "Windows", 8, 0x3f)
    rsi = 1
    rax_6 = sub_140a54510((*(*arg2 + 0x200))(arg2), var_40_1)

if (rax_3 == 0 || rax_6 == 0)
    rbx.b = 0
else
    rbx = 1

if ((rsi & 1) != 0 && var_48 != 0)
    sub_140a74f90(var_48)

if (rbx.b != 0)
    int16_t* rax_8 = (*(*arg2 + 0x200))(arg2)
    
    if (*arg1 != rax_8)
        int32_t rbx_2
        
        if (rax_8 == 0 || *rax_8 == 0)
            rbx_2 = 0
        else
            int64_t rbx_1 = -1
            
            do
                rbx_1 += 1
            while (rax_8[rbx_1] != 0)
            
            rbx_2 = rbx_1.d + 1
        
        arg1[1].d = 0
        
        if (*(arg1 + 0xc) != rbx_2)
            sub_1405947f0(arg1, rbx_2)
            rbp = arg1[1].d
        
        int32_t rax_9 = rbx_2 + rbp
        arg1[1].d = rax_9
        
        if (rax_9 s> *(arg1 + 0xc))
            sub_140594770(arg1)
        
        if (rbx_2 != 0)
            memcpy(*arg1, rax_8, rbx_2 * 2)

__security_check_cookie(rax_1 ^ &var_188)
return arg1
