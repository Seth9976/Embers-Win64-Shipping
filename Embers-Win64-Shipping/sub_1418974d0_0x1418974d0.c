// 函数: sub_1418974d0
// 地址: 0x1418974d0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int32_t rbp = arg2
EnterCriticalSection(arg1 + 0x2c0)
void*** rax = j_sub_140a82f30(0x58)
void*** r15 = rax

if (rax == 0)
    r15 = nullptr
else
    *r15 = &data_142fe7fc0
    r15[1].d = *arg5
    r15[2] = 0
    r15[2] = *(arg5 + 8)
    *(arg5 + 8) = 0
    r15[3].d = arg5[4]
    *(r15 + 0x1c) = arg5[5]
    *(arg5 + 0x10) = 0
    r15[4].b = arg5[6].b
    *(r15 + 0x24) = arg5[7]
    *(r15 + 0x28) = *(arg5 + 0x20)
    r15[7] = *(arg5 + 0x30)
    *r15 = &data_142fe7fe8
    r15[8] = *arg4
    void* rax_8 = arg4[1]
    r15[9] = rax_8
    
    if (rax_8 != 0)
        *(rax_8 + 8) += 1
        rbp = arg2
    
    r15[0xa].b = arg3

void*** rax_9 = j_sub_140a82f30(0x18)
void*** r14 = rax_9

if (rax_9 == 0)
    r14 = nullptr
    int64_t var_40_1 = 0
else
    rax_9[1].d = 1
    *(rax_9 + 0xc) = 1
    *r14 = &data_142d42ea8
    r14[2] = r15
    void*** var_40 = r14

int32_t var_58
sub_140a696e0(arg1 + 0x2e8, &var_58)
int32_t* var_50
*var_50 = rbp
*(var_50 + 8) = r15
*(var_50 + 0x10) = r14
int32_t rax_10 = var_58
var_50[6] = 0xffffffff
void arg_8
int32_t result = sub_14187da60(arg1 + 0x2e8, &arg_8, *var_50, var_50, rax_10, nullptr)

if (arg1 != -0x2c0)
    result = LeaveCriticalSection(arg1 + 0x2c0)

int64_t* rbx_1 = arg4[1]

if (rbx_1 != 0)
    result = rbx_1[1].d
    rbx_1[1].d -= 1
    
    if (result == 1)
        result = (**rbx_1)(rbx_1)
        int32_t rbp_1 = *(rbx_1 + 0xc)
        *(rbx_1 + 0xc) -= 1
        
        if (rbp_1 == 1)
            return (*(*rbx_1 + 8))(rbx_1, zx.q(rbp_1))

return result
