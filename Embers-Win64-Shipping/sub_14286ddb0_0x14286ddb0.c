// 函数: sub_14286ddb0
// 地址: 0x14286ddb0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

__chkstk(0x20)
void* rbp = *(arg1 + 0xeb0)
void* i_6 = sub_142885870(*(rbp + 0x28))
void* i_3 = i_6

if (i_6 != 0)
    void* i
    
    do
        sub_1428a6780(*(*(i_3 + 8) + 0x10))
        sub_1428a6780(*(i_3 + 8))
        sub_142885600(i_3)
        i = sub_142885870(*(rbp + 0x28))
        i_3 = i
    while (i != 0)

void* i_7 = sub_142885870(*(rbp + 0x38))
void* i_4 = i_7

if (i_7 != 0)
    void* i_1
    
    do
        sub_1428a6780(*(*(i_4 + 8) + 0x10))
        sub_1428a6780(*(i_4 + 8))
        sub_142885600(i_4)
        i_1 = sub_142885870(*(rbp + 0x38))
        i_4 = i_1
    while (i_1 != 0)

void* i_8 = sub_142885870(*(rbp + 0x48))
void* i_5 = i_8

if (i_8 != 0)
    void* i_2
    
    do
        sub_1428a6780(*(*(i_5 + 8) + 0x10))
        sub_1428a6780(*(i_5 + 8))
        sub_142885600(i_5)
        i_2 = sub_142885870(*(rbp + 0x48))
        i_5 = i_2
    while (i_2 != 0)

int64_t rbx = *(rbp + 0x28)
int64_t rdi = *(rbp + 0x38)
int64_t rsi = *(rbp + 0x48)
int64_t result = memset(rbp, 0, 0x60)
*(rbp + 0x28) = rbx
*(rbp + 0x48) = rsi
*(rbp + 0x38) = rdi
return result
