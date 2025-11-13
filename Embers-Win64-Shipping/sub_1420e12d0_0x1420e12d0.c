// 函数: sub_1420e12d0
// 地址: 0x1420e12d0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void* rdx

if (sub_140d23dc0(arg1, 0x30) == 0)
    rdx = arg1[4]
else
    rdx = nullptr

uint64_t rax_1 = zx.q(arg1[0x17].b)
int64_t rdi
rdi.b = 1

if (rax_1.d u<= 7)
    switch (rax_1)
        case 0, 2
            rdi.b = 0
        case 1
            if ((*(arg1 + 0xba) & 1) != 0)
                *(arg1 + 0xb9) = 1
                return 1
            
            if ((*(rdx + 0x11e) & 0x40) != 0)
                rdi.b = 0
            else
                if (sub_14243ade0(rdx) == 0)
                    *(arg1 + 0xb9) = 2
                    return 1
                
                if ((*(*arg1 + 0x268))(arg1) != 0)
                    *(arg1 + 0xb9) = 2
                    return 1
                
                rdi.b = 0
        case 3, 7
            *(arg1 + 0xb9) = 2
            return 1
        case 4
            if ((*(arg1 + 0xba) & 1) != 0 || (*(rdx + 0x11e) & 0x40) != 0)
                *(arg1 + 0xb9) = 0
                return 1
            
            if (sub_14243ade0(rdx) != 0 && (*(*arg1 + 0x268))(arg1) == 0)
                *(arg1 + 0xb9) = 0
                return 1
            
            if (sub_1420e6170(arg1) == 0)
                *(arg1 + 0xb9) = 2
                return 1
            
            if ((*(*arg1 + 0x270))(arg1) != 0)
                *(arg1 + 0xb9) = 3
                return 1
            
            rdi.b = 0
        case 5
            *(arg1 + 0xb9) = 3
            return 1
        case 6
            if ((*(arg1 + 0xba) & 1) != 0 || (*(rdx + 0x11e) & 0x40) != 0)
                *(arg1 + 0xb9) = 2
                return 1
            
            char rax_16 = sub_14243ade0(rdx)
            char rax_18
            
            if (rax_16 != 0)
                rax_18 = (*(*arg1 + 0x268))(arg1)
            
            if (rax_16 != 0 && rax_18 == 0)
                *(arg1 + 0xb9) = 2
                return 1
            
            if ((*(*arg1 + 0x270))(arg1) == 0)
                *(arg1 + 0xb9) = 2
                return 1
            
            if (sub_1420e6170(arg1) == 0)
                *(arg1 + 0xb9) = 3
                return 1
            
            rdi.b = 0

return zx.q(rdi.b)
