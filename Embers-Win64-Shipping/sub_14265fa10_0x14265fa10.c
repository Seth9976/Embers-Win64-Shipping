// 函数: sub_14265fa10
// 地址: 0x14265fa10
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

if (data_143f71424 != 0 || arg3 != (*(*arg1 + 0x150))() || arg2 == 0)
    return 

void* var_38 = &arg1[0x49]
void* var_30_1 = &arg1[0x6a]
sub_142665e00(&var_38, arg2)

if (sub_1420e6590(arg2).b != 0)
    return 

int32_t rdi_1 = arg1[0x13].d
int32_t rdi_2 = rdi_1 - 1

if (rdi_1 - 1 s< 0)
    return 

int64_t* r14_1 = sx.q(rdi_2) << 3
int64_t* r12_1 = r14_1
int64_t r15_2 = sx.q(rdi_2 + 1) << 3
int32_t temp1_1

do
    int64_t* rsi_1 = *(r14_1 + arg1[0x12])
    
    if (rsi_1 != 0)
        if (sub_141dc9840(rsi_1) == arg2)
            int32_t rax_8 = arg1[0x13].d
            int32_t rcx_5 = rax_8 - rdi_2
            
            if (rcx_5 != 1)
                int64_t rax_9 = arg1[0x12]
                memmove(r12_1 + rax_9, r15_2 + rax_9, (rcx_5 - 1) << 3)
                rax_8 = arg1[0x13].d
            
            arg1[0x13].d = rax_8 - 1
            (*(*arg1 + 0x300))(arg1, rsi_1)
        else
            (*(*rsi_1 + 0x668))(rsi_1, arg2, arg3)
    
    r15_2 -= 8
    r12_1 -= 8
    r14_1 -= 8
    temp1_1 = rdi_2
    rdi_2 -= 1
while (temp1_1 - 1 s>= 0)
