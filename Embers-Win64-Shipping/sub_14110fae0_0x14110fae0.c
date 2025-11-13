// 函数: sub_14110fae0
// 地址: 0x14110fae0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int32_t rcx = *(arg1 + 0x10)

if (rcx s<= 0)
    return 

int32_t rbp_1

if (data_143f0f1c7 == 0 || *(data_143ed2e18 + 4) == 0)
    rbp_1 = 0
else
    rbp_1 = 0x2000

char rdi_1 = 0x1c
int32_t rbx_1 = 4
int32_t rbp_3 = rbp_1 | data_143ed343c | 1
int32_t rsi_3 = rcx * rcx * rcx
sub_1407b4d10(arg1 + 0x18, 4, rsi_3, 0x1c, rbp_3, u"GlobalDistanceField::TileObjectNum", 0)
char rax_2 = *(arg1 + 0x14)

if (rax_2 != 0)
    rdi_1 = 0x20

if (rax_2 != 0)
    rbx_1 = 2

sub_1407b4d10(arg1 + 0x38, rbx_1, rsi_3 << 0xb, rdi_1, rbp_3, 
    GlobalDistanceField::TileObjectArray", 0)
