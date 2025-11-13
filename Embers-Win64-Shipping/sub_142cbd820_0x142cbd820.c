// 函数: sub_142cbd820
// 地址: 0x142cbd820
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t i = 4
int32_t* rdi = &data_143db9960

do
    int64_t rsi_1 = *(rdi - 0x10)
    rdi = &rdi[-4]
    i -= 1
    
    if (rsi_1 != 0)
        int64_t* rcx_1 = data_143ddb3f0
        
        if (rcx_1 == 0)
            sub_140a750a0()
            rcx_1 = data_143ddb3f0
        
        (*(*rcx_1 + 0x30))(rcx_1, rsi_1)
while (i != 0)
