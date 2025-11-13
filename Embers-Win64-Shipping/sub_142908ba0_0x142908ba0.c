// 函数: sub_142908ba0
// 地址: 0x142908ba0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

__chkstk(0x258)
void var_288
int64_t rax_1 = __security_cookie ^ &var_288
char* rsi = arg4
int32_t rbp = arg3
int32_t rdi = -1

if (arg4 == 0)
    rsi = &data_143fecf30
    
    if (data_143fecf30 == arg4.b)
        rsi = arg4

int64_t* rax_2 = sub_14293b1a0()

if (rax_2 != 0)
    if (rbp s>= 0x200)
        rbp = 0x1ff
    
    if (sub_14293ae40(rax_2, rsi, 0, arg1, arg2, rbp) s>= 0)
        void var_248
        
        if (arg5 == 0)
            rdi = sub_14293b270(rax_2)
            sub_1428b8960(&var_248, 0x200)
        else if (sub_14293af30(rax_2, rsi, 0, &var_248, arg2, rbp, arg1) s>= 0)
            rdi = sub_14293b270(rax_2)
            sub_1428b8960(&var_248, 0x200)
    
    sub_14293b0f0(rax_2)

__security_check_cookie(rax_1 ^ &var_288)
return zx.q(rdi)
