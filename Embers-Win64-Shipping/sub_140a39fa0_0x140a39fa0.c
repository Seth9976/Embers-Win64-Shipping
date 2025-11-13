// 函数: sub_140a39fa0
// 地址: 0x140a39fa0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int32_t i = 0

if (*(arg1 + 0x20) s<= 0)
    return 

int64_t* rdi_1 = nullptr

do
    uint64_t rax = *(arg1 + 0x18)
    int64_t* rcx = *(rdi_1 + rax)
    
    if (rcx != 0)
        *(rdi_1 + rax) = 0
        rcx[9].d -= 1
        
        if (rcx[9].d == 1)
            sub_140a2f6e0(rcx)
    
    i += 1
    rdi_1 = &rdi_1[1]
while (i s< *(arg1 + 0x20))
