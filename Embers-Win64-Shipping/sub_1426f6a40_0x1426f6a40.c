// 函数: sub_1426f6a40
// 地址: 0x1426f6a40
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t r8 = arg2 + 0x258

if (arg2 == 0)
    r8 = 0

int32_t arg_8
sub_140ba6bd0(arg1 + 0x78, &arg_8, r8)
int64_t rax = sx.q(arg_8)
void* const result

if (rax.d == 0xffffffff)
    result = nullptr
else
    result = rax * 0x38 + *(arg1 + 0x78)

void* rbx = result + 8

if (result == 0)
    rbx = nullptr

if (rbx != 0 && (*(rbx + 0x20) & 1) != 0)
    int32_t rdx_1 = *(rbx + 0x18)
    
    if (rdx_1 s>= 0)
        int32_t* rcx_1 = *(arg1 + 0xd8)
        
        if (rcx_1 != 0)
            sub_142616130(rcx_1, rdx_1)
            return sub_1426160f0(*(arg1 + 0xd8), *(rbx + 0x18))

return result
