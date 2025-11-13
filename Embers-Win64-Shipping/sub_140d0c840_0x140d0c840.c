// 函数: sub_140d0c840
// 地址: 0x140d0c840
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t* r9 = *(arg1 + 0x10)
int64_t (* var_18)(int64_t* arg1, int64_t* arg2)
int64_t* r8 = &var_18
char rax = not.b(*(arg1 + 0x30))
void* arg_8 = arg1

if ((rax & 1) != 0)
    var_18 = sub_140cf2f70
    void** var_10_1 = &arg_8
    return sub_140d0c0d0(r9, arg1 + 0x1c, r8)

var_18 = sub_140cf2f70
void** var_10 = &arg_8
return sub_140d0bee0(r9, arg1 + 0x1c, r8)
