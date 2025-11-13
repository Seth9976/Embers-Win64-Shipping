// 函数: sub_1407479f0
// 地址: 0x1407479f0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void* rsi = *arg1
int32_t i = 0

if (*(rsi + 0x180) s<= 0)
    return 

int64_t* rbx_1 = nullptr

do
    void* rcx = *(rbx_1 + *(rsi + 0x178))
    
    if (rcx != 0)
        void* rax_1 = arg1[9]
        void* rdx_1 = &arg1[1]
        
        if (rax_1 != 0)
            rdx_1 = rax_1
        
        sub_14083c9e0(rcx, *(rdx_1 + rbx_1))
    
    i += 1
    rbx_1 = &rbx_1[1]
while (i s< *(rsi + 0x180))
