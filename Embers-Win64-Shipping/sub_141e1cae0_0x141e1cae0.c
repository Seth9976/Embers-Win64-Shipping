// 函数: sub_141e1cae0
// 地址: 0x141e1cae0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

if (*(arg3 + 0x20) == 0xffffffff)
    return &__return_addr

int64_t rsi_1 = 0
int32_t i = 0

while (i s>= 0)
    if (i s>= *(arg3 + 0x50))
        break
    
    void* rbx_1 = *(*(arg3 + 0x48) + (sx.q(i) << 3))
    
    if (*(rbx_1 + 0x51) == 0 || *(rbx_1 + 0x4c) s> 0)
        int32_t rdx_1
        
        if (arg4 != 0)
            if (*(rbx_1 + 0x50) == 0)
                arg5 = sub_141e17640(rbx_1, arg2, arg5)
                i += 1
                continue
            
            rdx_1 = *(arg3 + 0x30)
        else if (*(rbx_1 + 0x50) != 0)
            rdx_1 = *(arg3 + 0x30)
        else
            rdx_1 = *(arg3 + 0x34)
        
        int64_t* rax_1
        uint32_t zmm1[0x8]
        rax_1, zmm1 = sub_141e1c9d0(arg1, rdx_1, arg2, arg5)
        arg5 = sub_141e17640(rbx_1, rax_1, zmm1)
    
    i += 1

void* rax_2 = *arg2
int32_t rcx_4 = 0
bool cond:1_1 = arg2[8].b != 0
int32_t rdx_3 = 0
void* var_78 = rax_2
int64_t var_70 = 0
int32_t var_64_1 = 0
void* var_60_1 = rax_2 + 0x4a0
int64_t var_58
__builtin_memset(&var_58, 0, 0x1b)
int32_t rbx_2 = *(rax_2 + 0x4a8)

if (rbx_2 s> 0)
    int32_t var_68_1 = 0
    sub_141acba60(&var_70, rbx_2)
    rcx_4 = var_64_1
    rdx_3 = var_68_1

int32_t rax_3 = rbx_2 + rdx_3
int32_t var_68_2 = rax_3

if (rax_3 s> rcx_4)
    sub_141acb8e0(&var_70, rdx_3)

int256_t zmm1_1 = sub_141abd4c0(&var_58, rax_2 + 0x4a0)
int64_t* rcx_8 = *(arg3 + 0x28)

if (rcx_8 == 0)
    int64_t* rcx_9 = &var_70
    
    if (cond:1_1 == 0)
        sub_141e0ba30(rcx_9)
    else
        sub_141e47c50(rcx_9, zmm1_1)
else
    (*(*rcx_8 + 0x18))(rcx_8, &var_78)

int32_t i_3 = arg2[2].d

if (i_3 != 0)
    uint64_t i_2 = zx.q(i_3)
    uint64_t i_1
    
    do
        int64_t rcx_10 = var_70
        rsi_1 += 0x30
        int64_t rax_5 = arg2[1]
        *(rsi_1 + rax_5 - 0x30) = *(rcx_10 + rsi_1 - 0x30)
        zmm1_1.o = *(rcx_10 + rsi_1 - 0x20)
        *(rsi_1 + rax_5 - 0x20) = zmm1_1.o
        *(rsi_1 + rax_5 - 0x10) = *(rcx_10 + rsi_1 - 0x10)
        i_1 = i_2
        i_2 -= 1
    while (i_1 != 1)

return sub_141de7110(&arg2[4], &var_58)
