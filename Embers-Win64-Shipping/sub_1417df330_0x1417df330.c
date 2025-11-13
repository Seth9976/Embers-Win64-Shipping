// 函数: sub_1417df330
// 地址: 0x1417df330
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t* rdi_1 = *(arg1 + 0x280) + 0x290

if (rdi_1 != arg2)
    int64_t rcx = *rdi_1
    
    if (rcx != 0)
        sub_140a74f90(rcx)
    
    *rdi_1 = *arg2
    *arg2 = 0
    rdi_1[1].d = arg2[1].d
    *(rdi_1 + 0xc) = *(arg2 + 0xc)
    arg2[1] = 0

int64_t rcx_1 = *arg2

if (rcx_1 != 0)
    sub_140a74f90(rcx_1)
