// 函数: sub_1423234f0
// 地址: 0x1423234f0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void* r14 = arg3 + 0xd0

if (arg3 == 0)
    r14 = nullptr

sub_142290930(*arg2 + 0x88, r14, arg1)
sub_1422b9c80(*arg2, r14, arg1)
sub_1422b9d20(*arg2, r14, arg1, 0xffffffff)
char r15 = *(arg2[1] + 0x28)
*(arg1 + 0x11c) = r15
*(arg1 + 0x118) = *(arg2[1] + 0x24)
int32_t rax_2 = sub_1422c5b90(arg2[1])
void* r9 = arg2[1]
uint64_t result

if (rax_2 != 2)
    char result_1 = (*(r9 + 0x24)).b
    char r11_1 = 6
    char r8_4 = (*(r9 + 0x28) != 0) + 1
    int32_t var_30_1 = 0
    char var_2c_1 = 0
    char var_29_1 = 0
    char r10_2 = (r8_4 + 1) * result_1
    
    if (r15 != 0)
        r11_1 = 0x10
    
    result = zx.q(result_1)
    char var_2a_1 = r11_1
    char var_2b_1 = r10_2
    char rdx_6 = r8_4 * result.b
    int32_t var_30_2 = 0
    char var_2b_2 = r10_2
    var_2a_1.w = 7
    char var_2c_2 = rdx_6
    *(arg1 + 0xc8) = r9.o
    *(arg1 + 0xe8) = r9.o
    
    if (rax_2 == 1)
        result = arg2[1]
        char rcx_8 = 4
        int32_t var_30_3 = 0
        char var_2b_3 = r10_2
        char var_2a_2 = r11_1
        char var_29_2 = 0
        
        if (*(result + 0x28) != 0)
            rcx_8 = 8
        
        char var_2c_3 = rcx_8
        int32_t var_30_4 = 0
        *(arg1 + 0xd8) = r9.o
        char var_2c_4 = rdx_6 + 4
        char var_2b_4 = r10_2
        var_2a_2.w = 7
        *(arg1 + 0xf8) = r9.o
else
    int32_t rax_3
    rax_3.b = *(r9 + 0x28) != 0
    *(arg3 + 0x200) = rax_3 + 1
    sub_1405d16e0(arg3 + 0x208, *(arg2[1] + 0x18))
    result = arg2[1] + 0x48
    int32_t var_30 = 0
    char var_2c
    var_2c.d = 0x140400
    *(arg1 + 0x108) = result.o

void** rcx_9 = arg2[2]

if (rcx_9 != 0 && rcx_9[1].d != 0xffffffff)
    return sub_142290850(rcx_9, r14, arg1)

arg1[0xb].q = 0
arg1[0xc].d = 0
return result
