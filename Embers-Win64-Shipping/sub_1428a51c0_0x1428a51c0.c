// 函数: sub_1428a51c0
// 地址: 0x1428a51c0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

__chkstk(0x28)
int32_t rcx = 0

if (sub_1428a5c60(&data_143feb13c, sub_1428a5870) != 0)
    rcx = data_143fec930

if (rcx == 0)
    return 0

int32_t* rbx = &data_143b84cc0
sub_1428a5c40(data_143feb140)

if (data_143b84cc0 != 0)
    do
        sub_1428a8a90(data_143feb148, rbx)
        rbx = &rbx[4]
    while (*rbx != 0)

sub_1428a5d00(data_143feb140)
int32_t* rbx_1 = &data_143b850a0
sub_1428a5c40(data_143feb140)

if (data_143b850a0 != 0)
    do
        sub_1428a8a90(data_143feb148, rbx_1)
        rbx_1 = &rbx_1[4]
    while (*rbx_1 != 0)

sub_1428a5d00(data_143feb140)
int32_t i = data_143b84f10
int32_t* rbx_2 = &data_143b84f10
int32_t* rcx_7 = &data_143b84f10

for (; i != 0; i = *rcx_7)
    *rcx_7 = i | 0x2000000
    rcx_7 = &rcx_7[4]

sub_1428a5c40(data_143feb140)

if (data_143b84f10 != 0)
    do
        sub_1428a8a90(data_143feb148, rbx_2)
        rbx_2 = &rbx_2[4]
    while (*rbx_2 != 0)

sub_1428a5d00(data_143feb140)
sub_1428a5c40(data_143feb140)

if (data_143b85284 != 0)
    void* rbx_3 = &data_143feb158
    void* rsi_1 = &data_143feb950
    
    for (int32_t i_1 = 1; i_1 s<= 0x7f; )
        bool cond:0_1 = *rbx_3 != 0
        *(rbx_3 - 8) = (i_1 & 0xfff) | 0x2000000
        
        if (not(cond:0_1))
            void* rax_7
            
            if (sub_1428a7110(i_1, rsi_1, 0x20) == 0)
                rax_7 = *rbx_3
            else
                *rbx_3 = rsi_1
                rax_7 = rsi_1
            
            if (rax_7 == 0)
                *rbx_3 = "unknown"
        
        i_1 += 1
        rsi_1 += 0x20
        rbx_3 += 0x10
    
    CRITICAL_SECTION* rcx_13 = data_143feb140
    data_143b85284 = 0
    sub_1428a5d00(rcx_13)
    int32_t* rbx_4 = &data_143feb150
    sub_1428a5c40(data_143feb140)
    
    if (data_143feb150 != 0)
        do
            sub_1428a8a90(data_143feb148, rbx_4)
            rbx_4 = &rbx_4[4]
        while (*rbx_4 != 0)

sub_1428a5d00(data_143feb140)
return 1
