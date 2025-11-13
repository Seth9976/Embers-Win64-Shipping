// 函数: sub_141b078e0
// 地址: 0x141b078e0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

bool cond:0 = (*(arg3 + 0x433) & 8) != 0
void** const var_50 = &data_143057d68
int64_t var_48
__builtin_memset(&var_48, 0, 0x30)
uint32_t rax_1
int64_t* rax_2

if (not(cond:0) && data_143de5480 != 0)
    rax_1.b = GetCurrentThreadId() == data_143de5470
    rax_2 = 0x5a0

if (cond:0 || data_143de5480 == 0 || rax_1.b != 0)
    rax_2 = 0x440

int64_t* i = *(rax_2 + arg3)
int64_t var_40_1
int64_t var_38
int64_t var_30_1
int64_t var_28
int64_t var_20_1

for (void* rsi_2 = &i[sx.q(*(rax_2 + arg3 + 8)) * 0x10]; i != rsi_2; i -= -0x80)
    uint32_t rcx = zx.d(i[1].b)
    
    if (rcx == 1)
        int64_t rdi_3 = sx.q(var_40_1.d)
        int64_t rax_9 = *i
        int32_t rax_10 = (rdi_3 + 1).d
        int32_t var_70_1 = (*(i + 0xc)).d
        var_40_1.d = rax_10
        
        if (rax_10 s> var_40_1:4.d)
            sub_14083a7e0(&var_48)
        
        int64_t rcx_9 = var_48
        int64_t rdx_4 = rdi_3 * 3
        *(rcx_9 + (rdx_4 << 2)) = rax_9
        *(rcx_9 + (rdx_4 << 2) + 8) = var_70_1
    else
        uint64_t var_64
        
        if (rcx == 3)
            int64_t rdi_2 = sx.q(var_30_1.d)
            int64_t rax_6 = *i
            int32_t r14_1 = *(i + 0x1c)
            int32_t rax_7 = (rdi_2 + 1).d
            var_64 = *(i + 0x14)
            var_30_1.d = rax_7
            
            if (rax_7 s> var_30_1:4.d)
                sub_1405c4d20(&var_38)
            
            int64_t rax_8 = var_38
            int64_t rcx_7 = rdi_2 * 5
            *(rax_8 + (rcx_7 << 2)) = rax_6.o
            *(rax_8 + (rcx_7 << 2) + 0x10) = r14_1
        else if (rcx == 5)
            int64_t rax_3 = *i
            sub_140acc920(&var_64, i + 0x2c)
            int64_t rdi_1 = sx.q(var_20_1.d)
            int32_t rax_4 = (rdi_1 + 1).d
            var_20_1.d = rax_4
            
            if (rax_4 s> var_20_1:4.d)
                sub_1405a4df0(&var_28)
            
            int64_t rax_5 = var_28
            int64_t rcx_5 = rdi_1 * 3
            *(rax_5 + (rcx_5 << 3)) = rax_3.o
            int64_t var_5c
            *(rax_5 + (rcx_5 << 3) + 0x10) = var_5c

arg2[4].b &= 0xfc
void** rax_12 = sub_140a82f30(0x38, 8)
void** rdx_5 = rax_12
char rcx_10 = arg2[4].b | 1
*arg2 = rax_12
int64_t rax_13 = var_48

if ((rcx_10 & 2) != 0)
    rdx_5 = arg2

arg2[4].b = rcx_10
*rdx_5 = &data_143057d68
rdx_5[1] = rax_13
rdx_5[2].d = var_40_1.d
*(rdx_5 + 0x14) = var_40_1:4.d
rdx_5[3] = var_38
rdx_5[4].d = var_30_1.d
*(rdx_5 + 0x24) = var_30_1:4.d
rdx_5[5] = var_28
rdx_5[6].d = var_20_1.d
*(rdx_5 + 0x34) = var_20_1:4.d
return arg2
