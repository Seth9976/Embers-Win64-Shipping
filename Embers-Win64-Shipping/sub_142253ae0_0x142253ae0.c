// 函数: sub_142253ae0
// 地址: 0x142253ae0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void* rax_1 = sub_142240500(arg1 + 0x40, *(arg1 + 0x16c) * 0x18)
int64_t r10 = sx.q(*(arg1 + 0x16c))
void* rbx = rax_1 + r10 * 0xc
PxSolveConstraints(*(arg1 + 0x128), zx.q(*(arg1 + 0x150) + *(arg1 + 0x14c)), *(arg1 + 0x118), 
    *(arg1 + 0x110), rax_1, rbx, r10.d, *(arg1 + 0x178), *(arg1 + 0x17c))
void* var_40
var_40.d = arg2.d
void* var_48
var_48.d = *(arg1 + 0x16c)
PxIntegrateSolverBodies(*(arg1 + 0x60), *(arg1 + 0x110), rax_1, rbx, var_48, var_40)
int32_t i = 0

if (*(arg1 + 0x16c) s> 0)
    int64_t r8_3 = 0
    int64_t r9_2 = 0
    
    do
        int64_t rdx_5 = *(arg1 + 0x60)
        r9_2 += 0x70
        int64_t rcx_5 = *(arg1 + 0x50)
        r8_3 += 0x60
        i += 1
        *(r8_3 + rcx_5 - 0x60) = *(r9_2 + rdx_5 - 0x70)
        *(r8_3 + rcx_5 - 0x5c) = *(r9_2 + rdx_5 - 0x6c)
        *(r8_3 + rcx_5 - 0x58) = *(r9_2 + rdx_5 - 0x68)
        int64_t rdx_6 = *(arg1 + 0x60)
        int64_t rcx_6 = *(arg1 + 0x50)
        *(rcx_6 + r8_3 - 0x50) = *(rdx_6 + r9_2 - 0x60)
        *(rcx_6 + r8_3 - 0x4c) = *(rdx_6 + r9_2 - 0x5c)
        *(rcx_6 + r8_3 - 0x48) = *(rdx_6 + r9_2 - 0x58)
        int64_t rdx_7 = *(arg1 + 0x60)
        int64_t rcx_7 = *(arg1 + 0x50)
        *(rcx_7 + r8_3 - 0x30) = *(rdx_7 + r9_2 - 0x20)
        *(rcx_7 + r8_3 - 0x2c) = *(rdx_7 + r9_2 - 0x1c)
        *(rcx_7 + r8_3 - 0x28) = *(rdx_7 + r9_2 - 0x18)
        *(rcx_7 + r8_3 - 0x24) = *(rdx_7 + r9_2 - 0x14)
        *(rcx_7 + r8_3 - 0x20) = *(rdx_7 + r9_2 - 0x10)
        *(rcx_7 + r8_3 - 0x1c) = *(rdx_7 + r9_2 - 0xc)
        *(rcx_7 + r8_3 - 0x18) = *(rdx_7 + r9_2 - 8)
    while (i s< *(arg1 + 0x16c))

int64_t r11 = sx.q(*(arg1 + 0x168))
int64_t rbx_1 = sx.q(*(arg1 + 0x28))

if (r11 s< rbx_1)
    if (rbx_1 - r11 s>= 4)
        int64_t rdx_9 = r11 * 0x60
        int64_t r8_5 = r11 << 5
        int64_t i_3 = ((rbx_1 - r11 - 4) u>> 2) + 1
        r11 += i_3 << 2
        int64_t i_1
        
        do
            int32_t* r9_3 = *(arg1 + 0x70)
            
            if (*(r9_3 + r8_5 + 0x1c) != 0)
                int64_t rcx_8 = *(arg1 + 0x50)
                *(rcx_8 + rdx_9 + 0x30) = *(r9_3 + r8_5)
                *(rcx_8 + rdx_9 + 0x34) = *(r9_3 + r8_5 + 4)
                *(rcx_8 + rdx_9 + 0x38) = *(r9_3 + r8_5 + 8)
                *(rcx_8 + rdx_9 + 0x3c) = *(r9_3 + r8_5 + 0xc)
                *(rcx_8 + rdx_9 + 0x40) = *(r9_3 + r8_5 + 0x10)
                *(rcx_8 + rdx_9 + 0x44) = *(r9_3 + r8_5 + 0x14)
                *(rcx_8 + rdx_9 + 0x48) = *(r9_3 + r8_5 + 0x18)
                int64_t rax_25 = *(arg1 + 0x50)
                *(rdx_9 + rax_25) = 0
                *(rdx_9 + rax_25 + 8) = 0
                int64_t rax_26 = *(arg1 + 0x50)
                *(rax_26 + rdx_9 + 0x10) = 0
                *(rax_26 + rdx_9 + 0x18) = 0
                r9_3 = *(arg1 + 0x70)
            
            if (*(r8_5 + r9_3 + 0x3c) != 0)
                int64_t rcx_9 = *(arg1 + 0x50)
                *(rcx_9 + rdx_9 + 0x90) = *(r8_5 + r9_3 + 0x20)
                *(rcx_9 + rdx_9 + 0x94) = *(r8_5 + r9_3 + 0x24)
                *(rcx_9 + rdx_9 + 0x98) = *(r8_5 + r9_3 + 0x28)
                *(rcx_9 + rdx_9 + 0x9c) = *(r8_5 + r9_3 + 0x2c)
                *(rcx_9 + rdx_9 + 0xa0) = *(r8_5 + r9_3 + 0x30)
                *(rcx_9 + rdx_9 + 0xa4) = *(r8_5 + r9_3 + 0x34)
                *(rcx_9 + rdx_9 + 0xa8) = *(r8_5 + r9_3 + 0x38)
                int64_t rax_34 = *(arg1 + 0x50)
                *(rax_34 + rdx_9 + 0x60) = 0
                *(rax_34 + rdx_9 + 0x68) = 0
                int64_t rax_35 = *(arg1 + 0x50)
                *(rax_35 + rdx_9 + 0x70) = 0
                *(rax_35 + rdx_9 + 0x78) = 0
                r9_3 = *(arg1 + 0x70)
            
            if (*(r8_5 + r9_3 + 0x5c) != 0)
                int64_t rcx_10 = *(arg1 + 0x50)
                *(rcx_10 + rdx_9 + 0xf0) = *(r8_5 + r9_3 + 0x40)
                *(rcx_10 + rdx_9 + 0xf4) = *(r8_5 + r9_3 + 0x44)
                *(rcx_10 + rdx_9 + 0xf8) = *(r8_5 + r9_3 + 0x48)
                *(rcx_10 + rdx_9 + 0xfc) = *(r8_5 + r9_3 + 0x4c)
                *(rcx_10 + rdx_9 + 0x100) = *(r8_5 + r9_3 + 0x50)
                *(rcx_10 + rdx_9 + 0x104) = *(r8_5 + r9_3 + 0x54)
                *(rcx_10 + rdx_9 + 0x108) = *(r8_5 + r9_3 + 0x58)
                int64_t rax_43 = *(arg1 + 0x50)
                *(rdx_9 + rax_43 + 0xc0) = 0
                *(rdx_9 + rax_43 + 0xc8) = 0
                int64_t rax_44 = *(arg1 + 0x50)
                *(rax_44 + rdx_9 + 0xd0) = 0
                *(rax_44 + rdx_9 + 0xd8) = 0
                r9_3 = *(arg1 + 0x70)
            
            if (*(r8_5 + r9_3 + 0x7c) != 0)
                int64_t rcx_11 = *(arg1 + 0x50)
                *(rcx_11 + rdx_9 + 0x150) = *(r8_5 + r9_3 + 0x60)
                *(rcx_11 + rdx_9 + 0x154) = *(r8_5 + r9_3 + 0x64)
                *(rcx_11 + rdx_9 + 0x158) = *(r8_5 + r9_3 + 0x68)
                *(rcx_11 + rdx_9 + 0x15c) = *(r8_5 + r9_3 + 0x6c)
                *(rcx_11 + rdx_9 + 0x160) = *(r8_5 + r9_3 + 0x70)
                *(rcx_11 + rdx_9 + 0x164) = *(r8_5 + r9_3 + 0x74)
                *(rcx_11 + rdx_9 + 0x168) = *(r8_5 + r9_3 + 0x78)
                int64_t rax_52 = *(arg1 + 0x50)
                *(rdx_9 + rax_52 + 0x120) = 0
                *(rdx_9 + rax_52 + 0x128) = 0
                int64_t rax_53 = *(arg1 + 0x50)
                *(rax_53 + rdx_9 + 0x130) = 0
                *(rax_53 + rdx_9 + 0x138) = 0
            
            r8_5 -= -0x80
            rdx_9 += 0x180
            i_1 = i_3
            i_3 -= 1
        while (i_1 != 1)
    
    if (r11 s< rbx_1)
        int64_t rdx_11 = r11 * 0x60
        int64_t r9_5 = r11 << 5
        int64_t i_4 = rbx_1 - r11
        int64_t i_2
        
        do
            int64_t r8_6 = *(arg1 + 0x70)
            
            if (*(r9_5 + r8_6 + 0x1c) != 0)
                int64_t rcx_12 = *(arg1 + 0x50)
                *(rdx_11 + rcx_12 + 0x30) = *(r9_5 + r8_6)
                *(rdx_11 + rcx_12 + 0x34) = *(r9_5 + r8_6 + 4)
                *(rdx_11 + rcx_12 + 0x38) = *(r9_5 + r8_6 + 8)
                *(rdx_11 + rcx_12 + 0x3c) = *(r9_5 + r8_6 + 0xc)
                *(rdx_11 + rcx_12 + 0x40) = *(r9_5 + r8_6 + 0x10)
                *(rdx_11 + rcx_12 + 0x44) = *(r9_5 + r8_6 + 0x14)
                *(rdx_11 + rcx_12 + 0x48) = *(r9_5 + r8_6 + 0x18)
                int64_t rax_61 = *(arg1 + 0x50)
                *(rdx_11 + rax_61) = 0
                *(rdx_11 + rax_61 + 8) = 0
                int64_t rax_62 = *(arg1 + 0x50)
                *(rdx_11 + rax_62 + 0x10) = 0
                *(rdx_11 + rax_62 + 0x18) = 0
            
            r9_5 += 0x20
            rdx_11 += 0x60
            i_2 = i_4
            i_4 -= 1
        while (i_2 != 1)

return memset(*(arg1 + 0x70), 0, rbx_1 << 5) __tailcall
