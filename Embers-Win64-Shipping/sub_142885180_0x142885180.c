// 函数: sub_142885180
// 地址: 0x142885180
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

__chkstk(0x20)
void* rax = *(arg1 + 0x18)
int64_t rax_1

if (rax == 0)
    void* rax_2 = *(arg1 + 0x20)
    
    if (rax_2 == 0)
        return 1
    
    rax_1 = *(rax_2 + 0x488)
else
    rax_1 = *(rax + 0x130)

void* const rbx = 0x1e0

if (arg4 == 0)
    rbx = 0x1d8

int64_t* rbx_1 = rbx + rax_1
int32_t* result = *rbx_1

if (result == 0)
    result = sub_14289db80()
    *rbx_1 = result
    
    if (result == 0)
        return result

int32_t rcx_1
rcx_1.b = sub_1428ab130(result, arg2, arg3) s> 0
return zx.q(rcx_1)
