// 函数: sub_1418d2c70
// 地址: 0x1418d2c70
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t* rdi = *(arg1 + 0x38)
int64_t rsi = 0
uint64_t r14_1 = sx.q(*(arg1 + 0x40)) << 3 u>> 3

if (rdi u> &rdi[sx.q(*(arg1 + 0x40))])
    r14_1 = 0

if (r14_1 != 0)
    do
        void* rbx_1 = *rdi
        
        if (rbx_1 != 0)
            sub_1418d29d0(rbx_1)
            j_sub_140a74f90(rbx_1)
        
        rdi = &rdi[1]
        rsi += 1
    while (rsi != r14_1)

*(arg1 + 0x40) = 0

if (*(arg1 + 0x44) s<= 0xffffffff)
    sub_1405c5570(arg1 + 0x38, 0)

int64_t rcx_3 = *(arg1 + 0x38)

if (rcx_3 != 0)
    sub_140a74f90(rcx_3)

return DeleteCriticalSection(arg1 + 0x10) __tailcall
