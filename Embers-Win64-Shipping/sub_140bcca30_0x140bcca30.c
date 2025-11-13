// 函数: sub_140bcca30
// 地址: 0x140bcca30
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t rax = 0

if (0 == *(arg1 + 8))
    *(arg1 + 8) = 0
else
    rax = *(arg1 + 8)

int64_t rax_1 = 0

if (0 == *(arg1 + 0x10))
    *(arg1 + 0x10) = 0
else
    rax_1 = *(arg1 + 0x10)

int64_t rdx = rax_1

if (rax_1 u< rax)
    do
        rax_1 = rdx
        bool z_1
        
        if (rax_1 == *(arg1 + 0x10))
            *(arg1 + 0x10) = rdx + 1
            z_1 = true
        else
            rax_1 = *(arg1 + 0x10)
            z_1 = false
        
        rdx = rax_1
        rax_1.b = z_1
        
        if (rax_1.b != 0)
            void* rax_2 = arg1 + ((zx.q(rdx.d) & 0x7ffff) << 3)
            int64_t* i
            
            do
                i = *(rax_2 + 0x18)
                *(rax_2 + 0x18) = 0
            while (i == 0)
            
            (*i[3])(i[4], zx.q(i[5].d))
            char temp0_1 = *(i + 0x15)
            *(i + 0x15) = 1
            int64_t rax_4
            rax_4.b = temp0_1
            sub_140bcd5d0(i, arg2)
            uint64_t rax_5
            rax_5.b = 1
            return rax_5
    while (rdx u< rax)

rax_1.b = 0
return rax_1
