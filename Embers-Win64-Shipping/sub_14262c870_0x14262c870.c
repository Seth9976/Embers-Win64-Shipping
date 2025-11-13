// 函数: sub_14262c870
// 地址: 0x14262c870
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int32_t* rax = arg1
int32_t r11 = 0
int64_t r10 = 0

while (*rax != arg2)
    r11 += 1
    r10 += 1
    rax = &rax[0x1a]
    
    if (r10 s>= 8)
        return 0x80000000

int32_t rbx = arg5
void* rdx_1 = sx.q(r11) * 0x68 + arg1
bool cond:0 = *(rdx_1 + 0x40) s< rbx
*rdx_1 = 0

if (cond:0)
    rbx = *(rdx_1 + 0x40)

*(rdx_1 + 0x44) = 0
memcpy(arg3, *(rdx_1 + 0x38), rbx << 3)
*arg4 = rbx
return 0x40000000
