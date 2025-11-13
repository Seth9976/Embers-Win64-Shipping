// 函数: sub_140e40810
// 地址: 0x140e40810
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void* r9 = arg2
uint32_t count = *(arg1 + 0x1c)
void* rbp = arg1[zx.q(arg1[0x19].b) + 9]
int32_t rax_1 = *(arg1 + 0x24)

if (*(arg1 + 0x14) != 1)
    if (rax_1 != 4)
        if (rax_1 != 3)
            if (count != 0)
                void* rcx_31 = rbp + 2
                uint32_t i
                
                do
                    char rax_34 = *r9
                    r9 += 1
                    *(rcx_31 - 2) = rax_34
                    *(rcx_31 - 1) = 0x8080
                    rcx_31 += 3
                    i = count
                    count -= 1
                while (i != 1)
        else if (count != 0)
            void* r10_4 = rbp + 2
            void* r9_4 = r9 - rbp
            uint32_t i_1
            
            do
                uint32_t r11_2 = zx.d(*(r9_4 + r10_4 - 2))
                uint32_t rsi_2 = zx.d(*(r9_4 + r10_4))
                uint32_t rdi_2 = zx.d(*(r9_4 + r10_4 - 1))
                *(r10_4 - 2) =
                    ((r11_2 * 0x4c8b + rsi_2 * 0x1d2f + rdi_2 * 0x9646 + 0x8000) u>> 0x10).b
                int32_t rcx_24 =
                    ((((rsi_2 + 1) << 0xf) - rdi_2 * 0x54cd - r11_2 * 0x2b33) s>> 0x10) + 0x80
                
                if (rcx_24 u> 0xff)
                    if (rcx_24 s< 0)
                        rcx_24 = 0
                    else if (rcx_24 s> 0xff)
                        rcx_24 = 0xff
                
                *(r10_4 - 1) = rcx_24.b
                int32_t rcx_30 =
                    ((((r11_2 + 1) << 0xf) - rdi_2 * 0x6b2f - rsi_2 * 0x14d1) s>> 0x10) + 0x80
                
                if (rcx_30 u> 0xff)
                    if (rcx_30 s< 0)
                        rcx_30 = 0
                    else if (rcx_30 s> 0xff)
                        rcx_30 = 0xff
                
                *r10_4 = rcx_30.b
                r10_4 += 3
                i_1 = count
                count -= 1
            while (i_1 != 1)
    else if (count != 0)
        void* r10_3 = rbp + 2
        void* r9_3 = r9 + 2
        uint32_t i_2
        
        do
            uint32_t r11_1 = zx.d(*(r9_3 - 2))
            uint32_t rsi_1 = zx.d(*r9_3)
            uint32_t rdi_1 = zx.d(*(r9_3 - 1))
            *(r10_3 - 2) = ((r11_1 * 0x4c8b + rsi_1 * 0x1d2f + rdi_1 * 0x9646 + 0x8000) u>> 0x10).b
            int32_t rcx_12 =
                ((((rsi_1 + 1) << 0xf) - rdi_1 * 0x54cd - r11_1 * 0x2b33) s>> 0x10) + 0x80
            
            if (rcx_12 u> 0xff)
                if (rcx_12 s< 0)
                    rcx_12 = 0
                else if (rcx_12 s> 0xff)
                    rcx_12 = 0xff
            
            *(r10_3 - 1) = rcx_12.b
            int32_t rax_26 =
                ((((r11_1 + 1) << 0xf) - rdi_1 * 0x6b2f - rsi_1 * 0x14d1) s>> 0x10) + 0x80
            
            if (rax_26 u> 0xff)
                if (rax_26 s< 0)
                    rax_26 = 0
                else if (rax_26 s> 0xff)
                    rax_26 = 0xff
            
            *r10_3 = rax_26.b
            r9_3 += 4
            r10_3 += 3
            i_2 = count
            count -= 1
        while (i_2 != 1)
else if (rax_1 == 4)
    void* r10_1 = rbp
    
    if (count != 0)
        void* r9_1 = r9 + 1
        uint32_t i_3
        
        do
            r10_1 += 1
            int32_t rdx = zx.d(*(r9_1 - 1)) * 0x4c8b
            int32_t rcx = zx.d(*(r9_1 + 1)) * 0x1d2f
            uint32_t rax_4 = zx.d(*r9_1)
            r9_1 += 4
            *(r10_1 - 1) = ((rax_4 * 0x9646 + 0x8000 + rdx + rcx) u>> 0x10).b
            i_3 = count
            count -= 1
        while (i_3 != 1)
else if (rax_1 != 3)
    memcpy(rbp, arg2, count)
else
    void* r10_2 = rbp
    
    if (count != 0)
        void* r9_2 = r9 + 1
        uint32_t i_4
        
        do
            r10_2 += 1
            int32_t rdx_2 = zx.d(*(r9_2 - 1)) * 0x4c8b
            int32_t rcx_1 = zx.d(*(r9_2 + 1)) * 0x1d2f
            uint32_t rax_11 = zx.d(*r9_2)
            r9_2 += 3
            *(r10_2 - 1) = ((rax_11 * 0x9646 + 0x8000 + rdx_2 + rcx_1) u>> 0x10).b
            i_4 = count
            count -= 1
        while (i_4 != 1)

int64_t r10_5 = sx.q(*(arg1 + 0x34))

if (*(arg1 + 0x14) != 1)
    int32_t i_5 = *(arg1 + 0x1c)
    char rdx_5 = *(r10_5 + rbp - 3)
    char r8_1 = *(r10_5 + rbp - 2)
    char r9_5 = *(r10_5 + rbp - 1)
    char* rax_40 = arg1[zx.q(arg1[0x19].b) + 9] + r10_5
    
    while (i_5 s< *(arg1 + 0x2c))
        *rax_40 = rdx_5
        i_5 += 1
        rax_40[1] = r8_1
        rax_40[2] = r9_5
        rax_40 = &rax_40[3]
else
    memset(arg1[zx.q(arg1[0x19].b) + 9] + r10_5, zx.d(*(r10_5 + rbp - 1)), 
        sx.q(*(arg1 + 0x2c) - *(arg1 + 0x1c)))

arg1[0x19].b += 1
uint32_t result = zx.d(arg1[0x19].b)

if (result == *(arg1 + 0x44))
    result = sub_140e42140(arg1)
    arg1[0x19].b = 0

return result
