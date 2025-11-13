// 函数: sub_140a01810
// 地址: 0x140a01810
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void* rbx = nullptr
void* rbp = arg10
int32_t rax = *(rbp + 8)
void* var_38 = nullptr
int64_t var_30 = 0

if (rax s> 0)
    var_30.d = rax
    sub_1406105e0(&var_38)
    int32_t i = 0
    rbx = var_38
    
    if (*(rbp + 8) s> 0)
        void* rsi_1 = rbx
        
        do
            char* rax_1 = sub_140ae16d0((sx.q(i) << 4) + *rbp, &arg10, 0)
            i += 1
            rsi_1 += 4
            *(rsi_1 - 4) = *rax_1
        while (i s< *(rbp + 8))

int64_t result =
    sub_140a01450(arg1, arg2, arg3, arg4, arg5, arg6, arg7, arg8, arg9, &var_38, arg11, arg12)

if (rbx == 0)
    return result

return sub_140a74f90(rbx)
