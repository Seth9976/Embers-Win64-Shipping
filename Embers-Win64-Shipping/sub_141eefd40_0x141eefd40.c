// 函数: sub_141eefd40
// 地址: 0x141eefd40
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

sub_140d266d0(arg1)
void* rcx = *(arg1 + 0xa0)

if (rcx != 0 && *(arg1 + 0x8c) != 3)
    sub_141dba110(rcx, arg1)

int64_t* rbx = *(arg1 + 0x70)
int64_t rdi_1 = 0
void* result = &rbx[sx.q(*(arg1 + 0x78))]
uint64_t rsi_1 = sx.q(*(arg1 + 0x78)) << 3 u>> 3

if (rbx u> result)
    rsi_1 = 0

if (rsi_1 != 0)
    do
        int64_t* rcx_1 = *rbx
        
        if (rcx_1 != 0)
            result = (*(*rcx_1 + 0x268))(rcx_1)
        
        rbx = &rbx[1]
        rdi_1 += 1
    while (rdi_1 != rsi_1)

return result
