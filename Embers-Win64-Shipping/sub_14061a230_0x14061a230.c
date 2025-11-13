// 函数: sub_14061a230
// 地址: 0x14061a230
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

uint64_t* result = arg2
*arg2 = 0
arg2[1] = 0
int64_t* var_50 = nullptr
int32_t i_4 = 0
PSGSI1::packSym(arg3, &var_50)
int32_t i_2 = i_4
int64_t* r12 = var_50

if (i_2 s> 0)
    int64_t* rbx_1 = r12
    uint64_t i_3 = zx.q(i_2)
    uint64_t i
    
    do
        int64_t rsi_1 = sx.q(rbx_1[1].d)
        
        if (rsi_1.d != 0)
            int32_t rax_1 = result[1].d
            int32_t rdx_1 = rax_1 + rsi_1.d
            
            if (rdx_1 s> *(result + 0xc))
                sub_14061cd70(result, rdx_1)
                rax_1 = result[1].d
            
            memcpy((sx.q(rax_1) << 4) + *result, *rbx_1, (rsi_1 << 4).d)
            result[1].d += rsi_1.d
        
        rbx_1 = &rbx_1[4]
        i = i_3
        i_3 -= 1
    while (i != 1)

char var_58 = 0
sub_140617ea0(*result, result[1].d, 0)
int64_t* rbx_2 = r12

if (i_2 != 0)
    int32_t i_1
    
    do
        int64_t rcx_6 = rbx_2[2]
        
        if (rcx_6 != 0)
            sub_140a74f90(rcx_6)
        
        int64_t rcx_7 = *rbx_2
        
        if (rcx_7 != 0)
            sub_140a74f90(rcx_7)
        
        rbx_2 = &rbx_2[4]
        i_1 = i_2
        i_2 -= 1
    while (i_1 != 1)

if (r12 != 0)
    sub_140a74f90(r12)

arg3[9].d = 0
int64_t rcx_9 = arg3[8]

if (rcx_9 != 0)
    sub_140a74f90(rcx_9)

sub_140619f90(arg3, 0)
int64_t rcx_11 = arg3[4]

if (rcx_11 != 0)
    sub_140a74f90(rcx_11)

int64_t rcx_12 = *arg3

if (rcx_12 != 0)
    sub_140a74f90(rcx_12)

return result
