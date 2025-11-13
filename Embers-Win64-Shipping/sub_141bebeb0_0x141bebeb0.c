// 函数: sub_141bebeb0
// 地址: 0x141bebeb0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

sub_141beee70(arg1)
void var_40
sub_140f60ba0(arg1[0xdc], sub_140f1a8d0(&var_40, &arg1[0xbd]))
void* rcx_2 = arg1[0xdc]
char var_58 = 1
int128_t var_68 = *(arg1 + 0x658)
int64_t var_50 = 0
int32_t var_48 = 0
sub_140f5fd30(rcx_2, &var_68)
sub_140f5d3a0(arg1[0xdc], &arg1[0x21])
sub_140f61610(arg1[0xdc], &arg1[0x70])
int64_t var_98 = arg1[0xcf]
void* rax_2 = arg1[0xd0]
void* var_90 = rax_2

if (rax_2 != 0)
    *(rax_2 + 8) += 1

int32_t var_88 = arg1[0xd1].d
sub_141be3540(arg1[0xdc], &var_98)
int64_t var_80 = arg1[0xd2]
void* rax_5 = arg1[0xd3]
void* var_78 = rax_5

if (rax_5 != 0)
    *(rax_5 + 8) += 1

int32_t var_70 = arg1[0xd4].d
sub_141be4ae0(arg1[0xdc], &var_80)
void* rcx_7 = arg1[0xdc]
char rax_7 = arg1[0xd5].b
void* var_a8 = nullptr
*(rcx_7 + 0x428) = rax_7
*(arg1[0xdc] + 0x429) = *(arg1 + 0x6a9)
int32_t i_1 = arg1[0xd7].d
int64_t rsi = arg1[0xd6]
int32_t i_2 = i_1

if (i_1 != 0)
    sub_140808f70(&var_a8, i_1, 0)
    void* rcx_10 = var_a8
    int64_t* rsi_1 = rsi - rcx_10
    void* rax_9 = rcx_10 + 8
    int32_t i
    
    do
        *(rax_9 - 8) = *(rsi_1 + rax_9 - 8)
        *rax_9 = *(rsi_1 + rax_9)
        void* rcx_13 = *(rsi_1 + rax_9 + 8)
        *(rax_9 + 8) = rcx_13
        
        if (rcx_13 != 0)
            *(rcx_13 + 8) += 1
        
        rax_9 += 0x18
        i = i_1
        i_1 -= 1
    while (i != 1)
else
    int32_t var_9c_1 = 0

return sub_141be1980(arg1[0xdc], &var_a8)
