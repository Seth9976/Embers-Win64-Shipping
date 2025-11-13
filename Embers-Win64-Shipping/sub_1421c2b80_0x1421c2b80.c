// 函数: sub_1421c2b80
// 地址: 0x1421c2b80
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void* rbx = *(arg1 + 0x78)
int64_t rax

if (rbx != 0)
    void* rax_1 = sub_14249f080()
    void* rdx_1 = *(rbx + 0x10)
    rax = sx.q(*(rax_1 + 0x38))
    
    if (rax.d s<= *(rdx_1 + 0x38) && *(*(rdx_1 + 0x30) + (rax << 3)) == rax_1 + 0x30)
        *(rbx + 0x30) |= 2
        int32_t var_10_1 = 0x3f800000
        *(rbx + 0x38) = _mm_unpacklo_ps(0x3f800000, 0x3f800000)
        *(rbx + 0x40) = 0x3f800000

void* rbx_1 = *(arg1 + 0xa8)

if (rbx_1 != 0)
    void* rax_2 = sub_1424a01d0()
    void* rdx_2 = *(rbx_1 + 0x10)
    rax = sx.q(*(rax_2 + 0x38))
    
    if (rax.d s<= *(rdx_2 + 0x38) && *(*(rdx_2 + 0x30) + (rax << 3)) == rax_2 + 0x30)
        *(rbx_1 + 0x30) |= 2
        *(rbx_1 + 0x38) = 0x42000000

void* rbx_2 = *(arg1 + 0xd8)

if (rbx_2 != 0)
    void* rax_3 = sub_1424a01d0()
    void* rdx_3 = *(rbx_2 + 0x10)
    rax = sx.q(*(rax_3 + 0x38))
    
    if (rax.d s<= *(rdx_3 + 0x38) && *(*(rdx_3 + 0x30) + (rax << 3)) == rax_3 + 0x30)
        *(rbx_2 + 0x30) |= 2
        *(rbx_2 + 0x38) = 0x41700000

void* rbx_3 = *(arg1 + 0x108)

if (rbx_3 == 0)
    return 

void* rax_4 = sub_1424a01d0()
void* rdx_4 = *(rbx_3 + 0x10)
rax = sx.q(*(rax_4 + 0x38))

if (rax.d s<= *(rdx_4 + 0x38) && *(*(rdx_4 + 0x30) + (rax << 3)) == rax_4 + 0x30)
    *(rbx_3 + 0x30) |= 2
    *(rbx_3 + 0x38) = 0x41800000
