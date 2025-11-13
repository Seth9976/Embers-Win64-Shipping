// 函数: sub_1428d8ae0
// 地址: 0x1428d8ae0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

if (arg1 == 0)
    return 

__chkstk(0x20)
sub_1428a6780(arg1[4])
arg1[4] = 0
int64_t* i = *arg1

while (i != 0)
    int64_t j_1 = 0x10
    int64_t j
    
    do
        if (*i != 0)
            sub_14288fbf0(i)
        
        i = &i[3]
        j = j_1
        j_1 -= 1
    while (j != 1)
    void* rcx_2 = *arg1
    arg1[1] = *(rcx_2 + 0x188)
    sub_1428a6780(rcx_2)
    i = arg1[1]
    *arg1 = i

sub_1428a6780(arg1)
