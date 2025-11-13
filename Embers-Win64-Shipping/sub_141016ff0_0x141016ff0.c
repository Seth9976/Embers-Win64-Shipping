// 函数: sub_141016ff0
// 地址: 0x141016ff0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t* rbx = *(*(arg1 + 0x38) + 0x28)

if (rbx != 0)
    (*(*rbx + 8))(rbx)
    (*(*rbx + 0x10))(rbx)

int64_t* rbx_1 = *(*(arg1 + 0x40) + 0x28)

if (rbx_1 != 0)
    (*(*rbx_1 + 8))(rbx_1)
    (*(*rbx_1 + 0x10))(rbx_1)

int64_t* rbx_2 = *(*(arg1 + 0x48) + 0x28)

if (rbx_2 != 0)
    (*(*rbx_2 + 8))(rbx_2)
    (*(*rbx_2 + 0x10))(rbx_2)

void* rsi = *(arg1 + 0x38)

if (*(rsi + 0x28) != 0)
    void* rbx_3 = *(rsi + 0xe8)
    sub_1410644f0(rbx_3, *(rsi + 0xf4), *(rbx_3 + 0x38))
    sub_141037da0(rbx_3)
    *(rbx_3 + 0x38) += 1
    sub_14106a230(*(rsi + 0xe8), *(rbx_3 + 0x40))

void* rsi_1 = *(arg1 + 0x40)

if (*(rsi_1 + 0x28) != 0)
    void* rbx_4 = *(rsi_1 + 0xe8)
    sub_1410644f0(rbx_4, *(rsi_1 + 0xf4), *(rbx_4 + 0x38))
    sub_141037da0(rbx_4)
    *(rbx_4 + 0x38) += 1
    sub_14106a230(*(rsi_1 + 0xe8), *(rbx_4 + 0x40))

void* rsi_2 = *(arg1 + 0x48)

if (*(rsi_2 + 0x28) != 0)
    void* rbx_5 = *(rsi_2 + 0xe8)
    sub_1410644f0(rbx_5, *(rsi_2 + 0xf4), *(rbx_5 + 0x38))
    sub_141037da0(rbx_5)
    *(rbx_5 + 0x38) += 1
    sub_14106a230(*(rsi_2 + 0xe8), *(rbx_5 + 0x40))

sub_14101ee50(arg1 + 0x730, 0)
int32_t i_2 = *(arg1 + 0x778)

if (i_2 s> 0)
    int64_t r8_4 = 0
    uint64_t i_1 = zx.q(i_2)
    uint64_t i
    
    do
        void* rcx_16 = *(arg1 + 0x770)
        void* rax_9 = arg1 + 0x768
        int64_t rdx_9 = (sx.q(*(arg1 + 0x778)) - 1) & r8_4
        
        if (rcx_16 != 0)
            rax_9 = rcx_16
        
        r8_4 += 1
        *(rax_9 + (rdx_9 << 2)) = 0xffffffff
        i = i_1
        i_1 -= 1
    while (i != 1)

int32_t rax_10 = *(arg1 + 0x6e0)
int64_t rbx_6 = sx.q(rax_10 - 1)

if (rax_10 - 1 s>= 0)
    int64_t temp3_1
    
    do
        int64_t rax_13 = *(arg1 + 0x6d8)
        int64_t* rcx_18 = *(rax_13 + (rbx_6 << 3))
        
        if (rcx_18 != 0)
            (*(*rcx_18 + 0xf8))(rcx_18, 1)
            rax_13 = *(arg1 + 0x6d8)
        
        *(rax_13 + (rbx_6 << 3)) = 0
        temp3_1 = rbx_6
        rbx_6 -= 1
    while (temp3_1 - 1 s>= 0)

int32_t rax_14 = *(arg1 + 0x728)
int64_t rbx_7 = sx.q(rax_14 - 1)

if (rax_14 - 1 s>= 0)
    int64_t temp4_1
    
    do
        int64_t rax_17 = *(arg1 + 0x720)
        int64_t* rcx_19 = *(rax_17 + (rbx_7 << 3))
        
        if (rcx_19 != 0)
            (*(*rcx_19 + 0xf8))(rcx_19, 1)
            rax_17 = *(arg1 + 0x720)
        
        *(rax_17 + (rbx_7 << 3)) = 0
        temp4_1 = rbx_7
        rbx_7 -= 1
    while (temp4_1 - 1 s>= 0)

sub_1419712f0(0)
sub_14101c520(*(arg1 + 0x38))
sub_14101c520(*(arg1 + 0x40))
sub_14101c520(*(arg1 + 0x48))
sub_14101cdc0(arg1 + 0x520, 0)
void* result = sub_14101cdc0(arg1 + 0x5e8, 0)

if (data_1439b4ad4 == 0)
    return result

return sub_14101cc30(arg1 + 0x910)
