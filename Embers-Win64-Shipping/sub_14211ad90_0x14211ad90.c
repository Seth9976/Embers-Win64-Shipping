// 函数: sub_14211ad90
// 地址: 0x14211ad90
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

sub_140a1d5c0(&arg1[0xf0])
sub_140a1d5c0(&arg1[0xd8])
sub_140a1d5c0(&arg1[0xc0])
sub_140a1d5c0(&arg1[0xb0])
sub_140a1d5c0(&arg1[0xa0])
void* rsi = &arg1[0x90]
sub_140a1d5c0(rsi)

for (int64_t i = 5; i != 0; )
    void* rbx_2 = *(rsi - 0x10)
    rsi -= 0x10
    i -= 1
    
    if ((rbx_2.b & 1) != 0)
        rbx_2 = (rbx_2 s>> 1) + rsi
    
    int32_t j_1 = *(rsi + 8)
    
    if (j_1 != 0)
        void* rbx_3 = rbx_2 + 0x10
        int32_t j
        
        do
            sub_140a1d5c0(rbx_3)
            rbx_3 += 0x28
            j = j_1
            j_1 -= 1
        while (j != 1)
    
    sub_140a1d5c0(rsi)

void* rbx_4 = *(arg1 + 0x30)

if ((rbx_4.b & 1) != 0)
    rbx_4 = &arg1[0x30 + (rbx_4 s>> 1)]

int32_t i_3 = *(arg1 + 0x38)

if (i_3 != 0)
    void* rbx_6 = rbx_4 + 0x10
    int32_t i_1
    
    do
        sub_140a1d5c0(rbx_6)
        rbx_6 += 0x30
        i_1 = i_3
        i_3 -= 1
    while (i_1 != 1)

sub_140a1d5c0(&arg1[0x30])
void* rbx_7 = *(arg1 + 0x20)

if ((rbx_7.b & 1) != 0)
    rbx_7 = &arg1[0x20 + (rbx_7 s>> 1)]

int32_t i_4 = *(arg1 + 0x28)

if (i_4 != 0)
    void* rbx_9 = rbx_7 + 0x10
    int32_t i_2
    
    do
        sub_140a1d5c0(rbx_9)
        rbx_9 += 0x28
        i_2 = i_4
        i_4 -= 1
    while (i_2 != 1)

sub_140a1d5c0(&arg1[0x20])
sub_140a1d5c0(&arg1[0x10])
return sub_140a1d5c0(arg1) __tailcall
