// 函数: sub_1421fc9d0
// 地址: 0x1421fc9d0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void* rbx = *(arg1 + 0x58)
int64_t rax

if (rbx != 0)
    void* rax_1 = sub_1424a01d0()
    void* rdx_1 = *(rbx + 0x10)
    rax = sx.q(*(rax_1 + 0x38))
    
    if (rax.d s<= *(rdx_1 + 0x38) && *(*(rdx_1 + 0x30) + (rax << 3)) == rax_1 + 0x30)
        *(rbx + 0x38) = 0x3f400000

void* rbx_1 = *(arg1 + 0x88)

if (rbx_1 == 0)
    return 

void* rax_2 = sub_1424a01d0()
void* rdx_2 = *(rbx_1 + 0x10)
rax = sx.q(*(rax_2 + 0x38))

if (rax.d s<= *(rdx_2 + 0x38) && *(*(rdx_2 + 0x30) + (rax << 3)) == rax_2 + 0x30)
    *(rbx_1 + 0x38) = 0x3f800000
