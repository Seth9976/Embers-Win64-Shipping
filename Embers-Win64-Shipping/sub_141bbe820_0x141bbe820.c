// 函数: sub_141bbe820
// 地址: 0x141bbe820
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t r9
int64_t var_20 = r9
int64_t* var_28 = arg1 - 0x218
int64_t* rbx = arg3

if (arg3 == 0)
    rbx = nullptr
else
    void* rax_1 = sub_141c122a0()
    
    if (rax_1 == 0)
        rbx = nullptr
    else
        int64_t rax_2 = sx.q(*(rax_1 + 0x38))
        
        if (rax_2.d s> rbx[7].d || *(rbx[6] + (rax_2 << 3)) != rax_1 + 0x30)
            rbx = nullptr

void** (* var_18)(void** arg1, int64_t* arg2, int64_t* arg3, int64_t* arg4) = sub_141b97310
int64_t** var_10 = &var_28
void* result = sub_141b6ccc0(arg1 - 0xd8, rbx, &var_18)
sub_141ba8370(arg1 - 0x218, result)
return result
