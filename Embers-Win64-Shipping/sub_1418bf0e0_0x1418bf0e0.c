// 函数: sub_1418bf0e0
// 地址: 0x1418bf0e0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void* rbx = *(arg1 + 0x10)
void* rdi = *(*(arg1 + 8) + 0x1a50)
sub_1405af100(rbx + 0x298, rdi + 0x298)
sub_1405af100(rbx + 0x248, rdi + 0x248)
sub_1405af100(rbx + 0x2e8, rdi + 0x2e8)
int64_t* rbx_1 = *(*(arg1 + 0x10) + 0x240)

if (rbx_1[0xf] != 0)
    sub_1418c86c0(rbx_1, 0, 0)

void* rdi_1 = rbx_1[0xe]

if (rdi_1 == 0)
label_1418bf186:
    sub_1418c2ee0(rbx_1)
    
    if (rbx_1[0xf] != 0)
        sub_1418c86c0(rbx_1, 0, 0)
    
    rdi_1 = rbx_1[0xe]
else
    char rax_2 = *(rdi_1 + 0x2c)
    
    if (rax_2 == 2)
        sub_1418e06b0(*(arg1 + 0x10) + 0x248, rdi_1)
    else if (rax_2 == 4)
        goto label_1418bf186

if (*(rdi_1 + 0x2c) - 1 u> 1)
    sub_1418bc690(rdi_1)

sub_1418e9390(*(arg1 + 0x10), u"Parallel Context", data_14399f640)
return *(arg1 + 0x10)
