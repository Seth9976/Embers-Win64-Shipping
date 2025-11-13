// 函数: sub_1417b27c0
// 地址: 0x1417b27c0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t rcx = *(arg1 + 0x40)

if (rcx != 0)
    *(arg1 + 0x40) = sub_140a84c80(rcx, 0, 0)

int32_t i_4 = *(arg1 + 0x48)

if (i_4 == 0)
    return 

sub_1405a4aa0(arg1 + 0x38, 0, i_4, 4)

if (i_4 s> 0)
    int64_t rax_1 = 0
    uint64_t i_3 = zx.q(i_4)
    uint64_t i
    
    do
        void* rdx_1 = *(arg1 + 0x40)
        void* rcx_2 = arg1 + 0x38
        int64_t r8_4 = (sx.q(*(arg1 + 0x48)) - 1) & rax_1
        
        if (rdx_1 != 0)
            rcx_2 = rdx_1
        
        rax_1 += 1
        *(rcx_2 + (r8_4 << 2)) = 0xffffffff
        i = i_3
        i_3 -= 1
    while (i != 1)

int64_t* var_38
sub_1407453e0(&var_38, arg1)
void* var_28
int32_t i_2

for (int32_t i_1 = i_2; i_1 s< *(var_28 + 0x18); i_1 = i_2)
    int64_t* r9_1 = *var_38 + sx.q(i_1) * 0x18
    uint32_t rcx_6 = (*r9_1 u>> 4).d
    int32_t rdx_5 = (0x9e3779b9 - rcx_6) ^ rcx_6 << 8
    int32_t r8_7 = neg.d(rdx_5 + rcx_6) ^ rdx_5 u>> 0xd
    int32_t rcx_9 = (rcx_6 - rdx_5 - r8_7) ^ r8_7 u>> 0xc
    int32_t rdx_8 = (rdx_5 - rcx_9 - r8_7) ^ rcx_9 << 0x10
    int32_t r8_10 = (r8_7 - rdx_8 - rcx_9) ^ rdx_8 u>> 5
    int32_t rcx_12 = (rcx_9 - rdx_8 - r8_10) ^ r8_10 u>> 3
    int32_t rdx_11 = (rdx_8 - rcx_12 - r8_10) ^ rcx_12 << 0xa
    int32_t r8_14 = ((r8_10 - rdx_11 - rcx_12) ^ rdx_11 u>> 0xf) & (*(arg1 + 0x48) - 1)
    void* rax_20 = arg1 + 0x38
    *(r9_1 + 0x14) = r8_14
    void* rdx_13 = *(arg1 + 0x40)
    int64_t r8_15 = sx.q(r8_14)
    
    if (rdx_13 != 0)
        rax_20 = rdx_13
    
    r9_1[2].d = *(rax_20 + (((sx.q(*(arg1 + 0x48)) - 1) & r8_15) << 2))
    void* rax_22 = arg1 + 0x38
    void* rcx_16 = *(arg1 + 0x40)
    
    if (rcx_16 != 0)
        rax_22 = rcx_16
    
    *(rax_22 + (((sx.q(*(arg1 + 0x48)) - 1) & r8_15) << 2)) = i_1
    int32_t var_2c
    int32_t var_20 = var_20 & not.d(var_2c)
    void var_30
    sub_14059bdd0(&var_30)
