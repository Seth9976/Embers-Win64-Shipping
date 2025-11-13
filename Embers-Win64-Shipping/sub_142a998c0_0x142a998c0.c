// 函数: sub_142a998c0
// 地址: 0x142a998c0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

*(arg1 + 0x50) += 1
int64_t* rdi = *(arg1 + 0x70)

if (rdi != 0)
    sub_142a45a20(&rdi[0xb])
    int64_t* rcx_1 = *rdi
    
    if (rcx_1 != 0)
        sub_142a869e0(rcx_1)
    
    sub_142a47920(rdi)

int64_t* rdi_1 = *(arg1 + 0x68)
*(arg1 + 0x70) = 0

if (rdi_1 != 0)
    int64_t* rcx_3 = *rdi_1
    
    if (rcx_3 != 0)
        sub_142a869e0(rcx_3)
    
    sub_142a47920(rdi_1)

int64_t* rdi_2 = *(arg1 + 0x60)
*(arg1 + 0x68) = 0

if (rdi_2 != 0)
    int64_t* rcx_5 = *rdi_2
    
    if (rcx_5 != 0)
        sub_142a869e0(rcx_5)
    
    sub_142a47920(rdi_2)

*(arg1 + 0x60) = 0
