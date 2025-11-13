// 函数: sub_142639b70
// 地址: 0x142639b70
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t* rbx = arg2

if (arg2 == 0)
    rbx = nullptr
else
    void* rax_1 = sub_14263d1a0()
    
    if (rax_1 == 0)
        rbx = nullptr
    else
        int64_t rax_2 = sx.q(*(rax_1 + 0x38))
        
        if (rax_2.d s> rbx[7].d || *(rbx[6] + (rax_2 << 3)) != rax_1 + 0x30)
            rbx = nullptr

void* rax_5 = rbx[0x23]

if (rax_5 == 0)
    (*(*rbx + 0x390))(rbx)
    rax_5 = rbx[0x23]

char result_1

if ((*(rax_5 + 0x30) & 1) != 0 || *(rax_5 + 0x28) != 0xffffffff)
    result_1 = *(rax_5 + 0x28)
else
    result_1 = *(rax_5 + 0x2c)

uint32_t result = zx.d(result_1)
*(arg1 + 0x40) |= (1 << (result u% 0x20)).w
return result
