// 函数: sub_142666b00
// 地址: 0x142666b00
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void* rax = sub_141decb50(arg2)

if (rax != 0)
    int64_t* rbx_1 = *(rax + 0x120)
    
    if (rbx_1 != 0)
        void* rax_1 = sub_14269bba0()
        void* r8_1 = rbx_1[2]
        int64_t rax_2 = sx.q(*(rax_1 + 0x38))
        
        if (rax_2.d s<= *(r8_1 + 0x38) && *(*(r8_1 + 0x30) + (rax_2 << 3)) == rax_1 + 0x30)
            jump(*(*rbx_1 + 0x348))

EnterCriticalSection(&data_143f714c8)
void var_28
sub_140d3a3a0(&var_28, arg2)
int64_t arg_20 = arg1
int64_t* var_20 = &arg_20
void* var_18 = &var_28
int32_t arg_18
sub_14263f5c0(&data_143b51540, &arg_18, &var_20, nullptr)
return LeaveCriticalSection(&data_143f714c8) __tailcall
