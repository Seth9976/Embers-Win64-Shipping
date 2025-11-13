// 函数: sub_141b86890
// 地址: 0x141b86890
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t arg_8 = arg2[3]
int16_t* var_18
sub_140b63b70(&arg_8, &var_18)
int16_t* const rdx_1 = &data_142d40450
void* rbx = arg1[1]
int32_t var_10

if (var_10 != 0)
    rdx_1 = var_18

sub_140b58260(&arg_8, rdx_1, 0)
void* rax_1 = sub_141b719f0(rbx, arg_8)

if (rax_1 != 0)
    int64_t r9_1 = *rax_1
    (*(r9_1 + 0x148))(rax_1, sx.q(*(rax_1 + 0x4c)) + *arg1, arg2, r9_1)

void* rcx_4 = arg2[0x19]

if (rcx_4 != 0)
    void* rdx_5 = *arg1
    sub_141bdcba0(rcx_4, rdx_5, *(rdx_5 + 0x1a8))

void* rax_2 = sub_141c122a0()
void* rdx_6 = arg2[2]
int64_t result = sx.q(*(rax_2 + 0x38))

if (result.d s<= *(rdx_6 + 0x38))
    int64_t result_1 = result
    result = *(rdx_6 + 0x30)
    
    if (*(result + (result_1 << 3)) == rax_2 + 0x30)
        result = (*(*arg2 + 0x2c8))(arg2, rdx_6)

int16_t* rcx_6 = var_18

if (rcx_6 == 0)
    return result

return sub_140a74f90(rcx_6)
