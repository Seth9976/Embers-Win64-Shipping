// 函数: sub_142323710
// 地址: 0x142323710
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

sub_142290930(*arg2 + 0x88, arg3, arg1)
sub_1422b9c80(*arg2, arg3, arg1)
sub_1422b9d20(*arg2, arg3, arg1, 0xffffffff)
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
    int32_t var_20_1 = 0
    char var_1c_1 = 0
    char var_19_1 = 0
    char r10_2 = (r8_4 + 1) * result_1
    
    if (r15 != 0)
        r11_1 = 0x10
    
    result = zx.q(result_1)
    char var_1a_1 = r11_1
    char var_1b_1 = r10_2
    char rdx_6 = r8_4 * result.b
    int32_t var_20_2 = 0
    char var_1b_2 = r10_2
    var_1a_1.w = 7
    char var_1c_2 = rdx_6
    *(arg1 + 0xc8) = r9.o
    *(arg1 + 0xe8) = r9.o
    
    if (rax_2 == 1)
        result = arg2[1]
        char rcx_8 = 4
        int32_t var_20_3 = 0
        char var_1b_3 = r10_2
        char var_1a_2 = r11_1
        char var_19_2 = 0
        
        if (*(result + 0x28) != 0)
            rcx_8 = 8
        
        char var_1c_3 = rcx_8
        int32_t var_20_4 = 0
        *(arg1 + 0xd8) = r9.o
        char var_1c_4 = rdx_6 + 4
        char var_1b_4 = r10_2
        var_1a_2.w = 7
        *(arg1 + 0xf8) = r9.o
else
    int32_t rax_3
    rax_3.b = *(r9 + 0x28) != 0
    *(arg3 + 0x130) = rax_3 + 1
    sub_1405d16e0(arg3 + 0x138, *(arg2[1] + 0x18))
    result = arg2[1] + 0x48
    int32_t var_20 = 0
    char var_1c
    var_1c.d = 0x140400
    *(arg1 + 0x108) = result.o

void** rcx_9 = arg2[2]

if (rcx_9 != 0 && rcx_9[1].d != 0xffffffff)
    return sub_142290850(rcx_9, arg3, arg1) __tailcall

arg1[0xb].q = 0
arg1[0xc].d = 0
return result
