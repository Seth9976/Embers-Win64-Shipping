// 函数: sub_142be8ba0
// 地址: 0x142be8ba0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int32_t rbx = *(arg1 + 0x2c)

if (rbx u< 0xffffffff)
    uint64_t r8_1 = zx.q(*(arg1 + 0x34))
    uint32_t rbx_1 = rbx + 1
    int32_t i = arg1[7].d
    
    if (r8_1.d u< i)
        uint32_t r9_2 = (r8_1 * 3).d << 2
        
        do
            void* rdx_2 = zx.q(r9_2) + arg1[3]
            uint32_t rcx_6 = ((zx.d(*(rdx_2 + 0x10)) << 8 | zx.d(*(rdx_2 + 0x11))) << 8
                | zx.d(*(rdx_2 + 0x12))) << 8 | zx.d(*(rdx_2 + 0x13))
            
            if (rbx_1 u>= rcx_6)
                rcx_6 = rbx_1
            
            rbx_1 = rcx_6
            
            if (rbx_1 u<= (((zx.d(*(rdx_2 + 0x14)) << 8 | zx.d(*(rdx_2 + 0x15))) << 8
                    | zx.d(*(rdx_2 + 0x16))) << 8 | zx.d(*(rdx_2 + 0x17))))
                uint32_t rax = ((zx.d(*(rdx_2 + 0x18)) << 8 | zx.d(*(rdx_2 + 0x19))) << 8
                    | zx.d(*(rdx_2 + 0x1a))) << 8 | zx.d(*(rdx_2 + 0x1b))
                
                if (rax != 0 && rax u< *(*arg1 + 0x10))
                    *(arg1 + 0x2c) = rbx_1
                    arg1[6].d = rax
                    *(arg1 + 0x34) = r8_1.d
                    return 
            
            r8_1 = zx.q(r8_1.d + 1)
            r9_2 += 0xc
        while (r8_1.d u< i)

arg1[5].b = 0
