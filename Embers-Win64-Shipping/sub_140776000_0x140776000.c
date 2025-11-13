// 函数: sub_140776000
// 地址: 0x140776000
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void* const rbx = arg2
int64_t rax_2
void* rdx

if (arg2 != 0)
    void* rax_1 = sub_14086a680()
    rdx = *(rbx + 0x10)
    arg3 = rax_1 + 0x30
    rax_2 = sx.q(*(rax_1 + 0x38))

if (arg2 == 0 || rax_2.d s> *(rdx + 0x38) || *(*(rdx + 0x30) + (rax_2 << 3)) != arg3)
    rbx = nullptr

int64_t rax_4 = *(rbx + 0x418)

if (*(arg1 + 0x40) == 0)
    jump(*(rax_4 + 0x10))

int64_t rbp = *(arg1 + 0x30)
int64_t result = (*(rax_4 + 0x30))(rbx + 0x418, arg1 + 8, arg3)

if (result != 0)
    result = sx.q(*result)
    int32_t arg_8 = result.d
    
    if (result.d != 0xffffffff)
        int64_t rdi_2 = result + *(rbx + 0x438)
        
        if (rdi_2 != rbp)
            result = memcpy(rdi_2, rbp, sub_14075e990(arg1 + 8))
        
        *(rbx + 0x4c8) |= 1

return result
