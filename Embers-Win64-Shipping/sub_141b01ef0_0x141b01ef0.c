// 函数: sub_141b01ef0
// 地址: 0x141b01ef0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

if (arg2 == 0)
    return 

void var_a8
int64_t rax_2 = __security_cookie ^ &var_a8
void* r13_1 = arg1
int64_t* rbx_1 = *(arg4 + 0x10)
int64_t rdi_1 = 0
void** const var_60 = &data_143054110
int64_t* r15_1 = *(arg1 + 0x38)
arg1.b = 0
int64_t* var_58_1 = r15_1
char var_67_1 = 0
uint64_t r14_2 = sx.q(*(arg4 + 0x18)) << 3 u>> 3

if (rbx_1 u> &rbx_1[sx.q(*(arg4 + 0x18))])
    r14_2 = 0

int32_t var_78

if (r14_2 != 0)
    do
        void* rax_5 = *rbx_1
        
        if (*(rax_5 + 0x24) == 1)
            *(arg5 + 0x2d0) = *(rax_5 + 0x18)
            *(arg5 + 0x2d8) = *(rax_5 + 0x20)
            *(arg5 + 0x2dc) = 2
            int32_t var_70_1 = *(arg5 + 0x2d8)
            var_78.q = *(arg5 + 0x2d0)
            sub_1405c5900(arg5 + 0xf8, *(r13_1 + 0x48), &var_60, arg2, 2, &var_78)
            arg1.b = 1
        
        rbx_1 = &rbx_1[1]
        rdi_1 += 1
    while (rdi_1 != r14_2)

char rdx_1 = *(arg5 + 0x2dd)
var_78 = data_1439e5888
int32_t var_74_1 = 0xffffffff
*(arg5 + 0x2d0) = var_78.q
*(arg5 + 0x2d8) = 0xffffffff
*(arg5 + 0x2dc) = rdx_1

if (arg1.b == 0)
    int32_t var_70_2 = *(arg5 + 0x2d8)
    var_78.q = *(arg5 + 0x2d0)
    sub_1405c5900(arg5 + 0xf8, *(r13_1 + 0x48), &var_60, arg2, rdx_1, &var_78)

char var_4f_1 = 0
var_60.o = *arg3

if (sub_141b0f4a0(&var_60, arg2, r15_1) != 0)
    char var_50
    uint32_t rcx_3 = zx.d(var_50)
    
    if (rcx_3 == 0)
        sub_141b05f60(&var_60, arg2, r15_1)
    else if (rcx_3 == 1)
        sub_141aed7e0(r15_1, arg2, &var_60)
    else if (rcx_3 == 2)
        sub_141b05750(&var_60, arg2, r15_1)

__security_check_cookie(rax_2 ^ &var_a8)
