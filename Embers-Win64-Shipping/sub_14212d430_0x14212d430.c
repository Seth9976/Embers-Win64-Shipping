// 函数: sub_14212d430
// 地址: 0x14212d430
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void* const rbx = arg1
int64_t result
bool cond:0_1

if (arg1 != arg2)
    do
        cond:0_1 = rbx != 0
        
        if (rbx == 0)
            goto label_14212d485
        
        void* rax = sub_142543020()
        void* rdx = *(rbx + 0x10)
        result = sx.q(*(rax + 0x38))
        int64_t result_1
        
        if (result.d s<= *(rdx + 0x38))
            result_1 = result
        
        if (result.d s> *(rdx + 0x38) || *(*(rdx + 0x30) + (result_1 << 3)) != rax + 0x30)
            rbx = nullptr
        else
            rbx = *(rbx + 0xd0)
    while (rbx != arg2)

cond:0_1 = rbx != 0
label_14212d485:
result.b = cond:0_1
return result
