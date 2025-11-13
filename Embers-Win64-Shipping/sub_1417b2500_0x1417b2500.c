// 函数: sub_1417b2500
// 地址: 0x1417b2500
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
    int64_t rdx_3 = sx.q(i_1) * 3
    int64_t rcx_4 = *var_38
    void* rbx = rcx_4 + (rdx_3 << 3)
    uint32_t r8_6 = (*(rcx_4 + (rdx_3 << 3)) u>> 4).d
    uint32_t rcx_6 = (*(rcx_4 + (rdx_3 << 3) + 8) u>> 4).d
    int32_t r9_2 = (0x9e3779b9 - r8_6) ^ r8_6 << 8
    int32_t r11_3 = neg.d(r9_2 + r8_6) ^ r9_2 u>> 0xd
    int32_t r8_9 = (r8_6 - r9_2 - r11_3) ^ r11_3 u>> 0xc
    int32_t r9_5 = (r9_2 - r8_9 - r11_3) ^ r8_9 << 0x10
    int32_t r11_6 = (r11_3 - r9_5 - r8_9) ^ r9_5 u>> 5
    int32_t r8_12 = (r8_9 - r9_5 - r11_6) ^ r11_6 u>> 3
    int32_t r9_8 = (r9_5 - r8_12 - r11_6) ^ r8_12 << 0xa
    int32_t rdx_5 = (0x9e3779b9 - rcx_6) ^ rcx_6 << 8
    int32_t r10_3 = neg.d(rdx_5 + rcx_6) ^ rdx_5 u>> 0xd
    int32_t rcx_9 = (rcx_6 - rdx_5 - r10_3) ^ r10_3 u>> 0xc
    int32_t rdx_8 = (rdx_5 - rcx_9 - r10_3) ^ rcx_9 << 0x10
    int32_t r10_6 = (r10_3 - rdx_8 - rcx_9) ^ rdx_8 u>> 5
    int32_t rcx_12 = (rcx_9 - rdx_8 - r10_6) ^ r10_6 u>> 3
    int32_t rdx_11 = (rdx_8 - rcx_12 - r10_6) ^ rcx_12 << 0xa
    int32_t r10_9 = (r10_6 - rdx_11 - rcx_12) ^ rdx_11 u>> 0xf
    int32_t r11_11 = (((r11_6 - r9_8 - r8_12) ^ r9_8 u>> 0xf) - r10_9) ^ r10_9 u>> 0xd
    int32_t rcx_15 = (0x9e3779b9 - r11_11 - r10_9) ^ r11_11 << 8
    int32_t r10_12 = (r10_9 - rcx_15 - r11_11) ^ rcx_15 u>> 0xd
    int32_t r11_14 = (r11_11 - rcx_15 - r10_12) ^ r10_12 u>> 0xc
    int32_t rcx_18 = (rcx_15 - r11_14 - r10_12) ^ r11_14 << 0x10
    int32_t r10_15 = (r10_12 - rcx_18 - r11_14) ^ rcx_18 u>> 5
    int32_t r11_17 = (r11_14 - rcx_18 - r10_15) ^ r10_15 u>> 3
    int32_t rcx_21 = (rcx_18 - r11_17 - r10_15) ^ r11_17 << 0xa
    int32_t r10_19 = ((r10_15 - rcx_21 - r11_17) ^ rcx_21 u>> 0xf) & (*(arg1 + 0x48) - 1)
    void* rax_50 = arg1 + 0x38
    *(rbx + 0x14) = r10_19
    void* rdx_13 = *(arg1 + 0x40)
    int64_t r8_13 = sx.q(r10_19)
    
    if (rdx_13 != 0)
        rax_50 = rdx_13
    
    *(rbx + 0x10) = *(rax_50 + (((sx.q(*(arg1 + 0x48)) - 1) & r8_13) << 2))
    void* rax_52 = arg1 + 0x38
    void* rcx_26 = *(arg1 + 0x40)
    
    if (rcx_26 != 0)
        rax_52 = rcx_26
    
    *(rax_52 + (((sx.q(*(arg1 + 0x48)) - 1) & r8_13) << 2)) = i_1
    int32_t var_2c
    int32_t var_20 = var_20 & not.d(var_2c)
    void var_30
    sub_14059bdd0(&var_30)
