// 函数: sub_140bdab00
// 地址: 0x140bdab00
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int32_t r9 = *(arg1 + 0x5c)
int64_t r14
r14.b = 0
int64_t* rbx = *(arg1 + 0x80)
uint64_t i_2 = zx.q(arg3)
int32_t r15_2 = (r9 - 1 + *(arg1 + 0x58)) & neg.d(r9)

if (rbx == 0)
    return 

while (r14.b == 0)
    if ((rbx[8] & 0x1000000000) != 0)
        r14.b = 1
    else if (*(rbx + 0x3c) * rbx[7].d + *(rbx + 0x4c) s<= r15_2 && i_2.d s> 0)
        int64_t rdi_1 = 0
        uint64_t i_1 = i_2
        uint64_t i
        
        do
            if ((not.b((rbx[8] u>> 0x24).b) & 1) != 0)
                (*(*rbx + 0xe8))(rbx, sx.q(*(rbx + 0x4c)) + rdi_1 + arg2)
            
            rdi_1 += sx.q(r15_2)
            i = i_1
            i_1 -= 1
        while (i != 1)
    
    rbx = rbx[0xd]
    
    if (rbx == 0)
        break
