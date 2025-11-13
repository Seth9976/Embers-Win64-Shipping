// 函数: sub_14173e5e0
// 地址: 0x14173e5e0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void* r9 = *arg1
int64_t r8 = sx.q(arg1[1].d)
int64_t* rdi_2 = r8 * 0x50 + *(r9 + 0x110)
void* rbx = *(r9 + 0xf8) + r8 * 0x18
int32_t arg_8
sub_140865c40(rdi_2, &arg_8, arg2)
int64_t rax_1 = sx.q(arg_8)
void* const rcx_2

if (rax_1.d == 0xffffffff)
    rcx_2 = nullptr
else
    rcx_2 = *rdi_2 + rax_1 * 0x18

int32_t* rax_3 = rcx_2 + 8

if (rcx_2 == 0)
    rax_3 = nullptr

if (rax_3 != 0)
    int64_t rcx_3 = sx.q(*rax_3)
    
    if (rcx_3.d s>= 0 && rcx_3.d s< *(rbx + 0x10))
        void* rax_4 = *(rbx + 8)
        
        if (rax_4 != 0)
            rbx = rax_4
        
        return *(rbx + (rcx_3 << 3))

return 0
