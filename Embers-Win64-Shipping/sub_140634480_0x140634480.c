// 函数: sub_140634480
// 地址: 0x140634480
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t arg_10 = arg2
*arg3 = 0
void* const rbx = arg1
char rax_1 = sub_140b5b8a0(arg2.d, 0)
int32_t rcx
rcx.b = arg_10:4.d == 0

if ((rcx.b & rax_1) != 0)
    return 0

int64_t var_18
int64_t* rax_3 = sub_140b63b70(&arg_10, &var_18)
int16_t* rdi

if (rax_3[1].d == 0)
    rdi = &data_142d40450
else
    rdi = *rax_3

if (rbx == 0)
    rbx = nullptr
else
    void* rax_4 = sub_140d41340()
    
    if (rax_4 == 0)
        rbx = nullptr
    else
        int64_t rax_5 = sx.q(*(rax_4 + 0x38))
        
        if (rax_5.d s> *(rbx + 0x38) || *(*(rbx + 0x30) + (rax_5 << 3)) != rax_4 + 0x30)
            rbx = nullptr

void* result = sub_140d2f6f0(rbx, 0, rdi, 0, 0, 0, 1, 0)
int64_t rcx_4 = var_18

if (rcx_4 != 0)
    sub_140a74f90(rcx_4)

rcx_4.b = result != 0
*arg3 = rcx_4.b
return result
