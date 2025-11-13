// 函数: sub_142364710
// 地址: 0x142364710
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void arg_8
sub_142367b70(arg1, &arg_8)
void* const rbx = *(arg1 + 0x38)
void* rax_1
int64_t rax_2
void* rdx_1

if (rbx != 0)
    rax_1 = sub_1425a21c0()
    rdx_1 = *(rbx + 0x10)
    rax_2 = sx.q(*(rax_1 + 0x38))

if (rbx == 0 || rax_2.d s> *(rdx_1 + 0x38) || *(*(rdx_1 + 0x30) + (rax_2 << 3)) != rax_1 + 0x30)
    rbx = nullptr

int64_t* result = *(arg1 + 0x48)

if (result == 0)
    if (rbx != 0)
        void arg_10
        int64_t rax_5 = *sub_141c4a970(&arg_10)
        
        if (*(arg1 + 0x40) == rax_5)
            return sub_142364710(rbx)
    
    result = sub_141c4a7d0(&arg_8)
    
    if (result != 0)
        int64_t rdx_2 = *result
        return (*(rdx_2 + 0x60))(result, rdx_2)

return result
