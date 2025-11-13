// 函数: sub_142c7c910
// 地址: 0x142c7c910
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void* rcx = *arg1
int32_t rdx = 0
char* rbx = -ffffffffffffffff
void* r14 = *(rcx + 0x250)
char* rbp = *(rcx + 0xa80)
bool cond:0_1

do
    cond:0_1 = *(rbx + rbp + 1) != 0
    rbx = &rbx[1]
while (cond:0_1)
int64_t r8 = *(r14 + 0x10)

if (r8 == 0)
label_142c7c97c:
    
    if (arg2 - 0xc8 u>= 0x64 && arg2 != 1)
        sub_142c64760(rcx, "Command failed: %d", zx.q(arg2), arg3)
        return 0x38
else
    if (arg2 - 0xc8 u>= 0x64 && arg2 != 0x229 && arg2 != 1)
        sub_142c64760(rcx, "Command failed: %d", zx.q(arg2), arg3)
        return 0x38
    
    if (r8 == 0)
        goto label_142c7c97c

if (*(rcx + 0x5e8) == 0)
    *(rbx + rbp) = 0xa
    rdx = sub_142c645e0(arg1, 1, rbp, &rbx[1], arg3)
    *(rbx + rbp) = 0

if (arg2 != 1)
    void* rcx_2 = *(r14 + 0x10)
    
    if (rcx_2 != 0)
        int64_t rcx_3 = *(rcx_2 + 8)
        *(r14 + 0x10) = rcx_3
        
        if (rcx_3 != 0)
            return sub_142c7c4d0(arg1)
    
    arg1[0xe1].d = 0

return zx.q(rdx)
