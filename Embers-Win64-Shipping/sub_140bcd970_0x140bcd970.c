// 函数: sub_140bcd970
// 地址: 0x140bcd970
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

uint128_t zmm6

if (arg2 != 0)
    zmm6 = zx.o(0)
else
    zmm6 = -0x4010000000000000

int32_t i = *(arg1 + 0x60)

while (i s< *(arg1 + 0x110))
    void* rbx_3 = (sx.q(i) << 6) + *(arg1 + 0x108)
    uint64_t arg_8 = zmm6.q
    void* rax = *(rbx_3 + 0x10)
    void* rcx = rbx_3 + 0x20
    
    if (rax != 0)
        rcx = rax
    
    if ((*rbx_3)((*(*rcx + 8))(rcx), &arg_8) == 0)
        return 0
    
    i = *(arg1 + 0x60) + 1
    *(arg1 + 0x60) = i

int64_t* rbx_4 = *(arg1 + 0x108)
int32_t i_2 = *(arg1 + 0x110)

if (i_2 != 0)
    int32_t i_1
    
    do
        if (*rbx_4 != 0)
            void* rax_5 = rbx_4[2]
            void* rcx_2 = &rbx_4[4]
            
            if (rax_5 != 0)
                rcx_2 = rax_5
            
            (*(*rcx_2 + 0x10))(rcx_2)
        
        rbx_4 = &rbx_4[8]
        i_1 = i_2
        i_2 -= 1
    while (i_1 != 1)

bool cond:0 = *(arg1 + 0x114) == 0
*(arg1 + 0x110) = 0

if (not(cond:0))
    sub_1405a52a0(arg1 + 0x108, 0)

int64_t* rcx_4 = *(arg1 + 0xe0)
rcx_4[2].d -= 1

if (rcx_4[2].d == 1)
    sub_140bc7180(rcx_4)

return 2
