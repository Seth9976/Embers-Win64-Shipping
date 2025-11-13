// 函数: sub_14232de80
// 地址: 0x14232de80
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

sub_142064d90(arg1[1])
void* rsi = *arg1

if (*(rsi + 0x118) != 0)
    sub_14198b920(rsi + 0x118)
    int64_t* rcx_2 = *(rsi + 0x118)
    *(rsi + 0x118) = 0
    
    if (rcx_2 != 0)
        rcx_2[9].d -= 1
        
        if (rcx_2[9].d == 1)
            sub_140a2f6e0(rcx_2)

int64_t* result = arg1[1]
*result = 0
return result
