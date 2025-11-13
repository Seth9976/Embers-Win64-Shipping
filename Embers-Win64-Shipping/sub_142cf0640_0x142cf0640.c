// 函数: sub_142cf0640
// 地址: 0x142cf0640
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t i = 2
void* rdi = &data_143f02f58

do
    int64_t* rcx_1 = *(rdi - 8)
    rdi -= 8
    i -= 1
    
    if (rcx_1 != 0)
        rcx_1[9].d -= 1
        
        if (rcx_1[9].d == 1)
            sub_140a2f6e0(rcx_1)
while (i != 0)
