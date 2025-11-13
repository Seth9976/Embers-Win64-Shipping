// 函数: sub_1427480b0
// 地址: 0x1427480b0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

sub_141f26010(arg1, arg2, arg3)
int64_t rax = *arg1
int64_t r8
r8.b = 1
int64_t arg_8 = 0
void* rax_1
int64_t r8_1
rax_1, r8_1 = (*(rax + 0x6a8))(arg1, 0, r8)

if (rax_1 != 0)
    sub_1422274a0(rax_1)

void* result = arg1[0x86]

if (result != 0)
    int64_t i_1 = sx.q(*(result + 0x190))
    
    if (i_1 s> 0)
        int64_t* rbx_1 = nullptr
        int64_t i
        
        do
            r8_1.b = 1
            result, r8_1 = (*(*arg1 + 0x6a8))(arg1, *(rbx_1 + *(arg1[0x86] + 0x1a8)), r8_1)
            
            if (result != 0)
                result, r8_1 = sub_1422274a0(result)
            
            rbx_1 += 0xc
            i = i_1
            i_1 -= 1
        while (i != 1)

void* rcx_4 = arg1[0xd0]

if (rcx_4 == 0)
    return result

int64_t* rax_5 = (*(*(rcx_4 + 0x18) + 0x10))(rcx_4 + 0x18)
int64_t* rcx_7 = arg1[0xd0] + 0x18
int64_t r8_2 = *rcx_7
char rax_6
int64_t r8_3
rax_6, r8_3 = (*(r8_2 + 8))(rcx_7, rax_5, r8_2)

if (rax_6 != 0)
    int64_t r9_1 = *arg1
    r8_3.b = 1
    arg_8 = 0
    void* rax_8 = sub_142218330((*(r9_1 + 0x6a8))(arg1, 0, r8_3, r9_1))
    
    if (rax_8 != 0)
        int64_t rcx_11 = *sub_14224f4a0(rax_8)
        int64_t rax_10 = *rax_5
        arg_8 = rcx_11
        (*(rax_10 + 0x198))(rax_5, &arg_8, 1)
        int64_t* rcx_14 = arg1[0xd0] + 0x18
        (**rcx_14)(rcx_14, rax_5)

return (*(*rax_5 + 0x1a0))(rax_5)
