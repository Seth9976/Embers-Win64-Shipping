// 函数: sub_142903010
// 地址: 0x142903010
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

uint64_t result = 0x20
__chkstk(0x20)
int64_t rdi = *(arg1 + 0xe0)
int64_t rbx = arg3
void* rbp = arg2
void* r15_1

if (rdi == 0)
    r15_1 = &arg1[0x34]
label_1429030a6:
    uint64_t rdi_2 = zx.q(rbx.d) & 0xf
    int64_t rbx_1 = rbx - rdi_2
    
    if (rbx_1 u>= 0x10)
        result = sub_142903110(arg1, rbp, rbx_1, 1)
        rbp += rbx_1
    
    if (rdi_2 != 0)
        result = memcpy(r15_1, rbp, rdi_2.d)
    
    *(arg1 + 0xe0) = rdi_2
else
    void* rcx_1 = &arg1[0x34] + rdi
    
    if (rbx u>= 0x10 - rdi)
        memcpy(rcx_1, arg2, (0x10 - rdi).d)
        r15_1 = &arg1[0x34]
        result = sub_142903110(arg1, r15_1, 0x10, 1)
        rbp += 0x10 - rdi
        rbx -= 0x10 - rdi
        goto label_1429030a6
    
    memcpy(rcx_1, arg2, arg3.d)
    result = rdi + rbx
    *(arg1 + 0xe0) = result
return result
