// 函数: sub_142ce0820
// 地址: 0x142ce0820
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t i = 3
int64_t* rdi = &data_143ed2e38

do
    int64_t* rcx_1 = rdi[-1]
    rdi = &rdi[-1]
    i -= 1
    
    if (rcx_1 != 0)
        rcx_1[9].d -= 1
        
        if (rcx_1[9].d == 1)
            sub_140a2f6e0(rcx_1)
while (i != 0)
