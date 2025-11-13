// 函数: sub_1425d47d0
// 地址: 0x1425d47d0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

if (arg2 == 0)
    return 

uint64_t rax = zx.q(*(arg1 + 0xf0))

if (rax.d != *(arg1 + 0x100))
    *(arg1 + 0x100) = 0
    
    if (*(arg1 + 0x104) s<= 0xffffffff)
        sub_1405dadb0(arg1 + 0xf8, 0)
    
    int64_t rbp_1 = sx.q(*(arg1 + 0xf0))
    int64_t r14_1 = sx.q(*(arg1 + 0x100))
    int32_t rax_1 = (r14_1 + rbp_1).d
    *(arg1 + 0x100) = rax_1
    
    if (rax_1 s> *(arg1 + 0x104))
        sub_1405a4cf0(arg1 + 0xf8)
    
    memset(*(arg1 + 0xf8) + (r14_1 << 2), 0, rbp_1 << 2)
    rax = zx.q(*(arg1 + 0xf0))

int32_t i = 0

if (rax.d s<= 0)
    return 

int64_t r14_2 = 0
int64_t r15_1 = 0

do
    int32_t* rbx_2 = *(arg1 + 0xe8)
    int32_t r12_1 = -1
    int32_t rcx_3
    rcx_3.b = sub_140b5b8a0(*(rbx_2 + r15_1), 0) == 0
    
    if ((*(rbx_2 + r15_1 + 4) != 0 | rcx_3.b) != 0)
        int64_t rbx_3 = *(rbx_2 + r15_1)
        void* const rcx_7
        
        if (*(arg2 + 0x220) == *(arg2 + 0x24c))
        labelid_b:
            rcx_7 = nullptr
        else
            int32_t rax_6 = sub_140b5ead0(rbx_3.d) + rbx_3:4.d
            void* r8_3 = arg2 + 0x250
            void* rcx_5 = *(r8_3 + 8)
            
            if (rcx_5 != 0)
                r8_3 = rcx_5
            
            int32_t rax_8 = *(r8_3 + (((sx.q(*(arg2 + 0x260)) - 1) & sx.q(rax_6)) << 2))
            
            if (rax_8 == 0xffffffff)
            label_1425d4920:
                rcx_7 = nullptr
            else
                int64_t r8_4 = *(arg2 + 0x218)
                
                while (true)
                    int64_t rdx_4 = sx.q(rax_8) * 5
                    rcx_7 = r8_4 + (rdx_4 << 2)
                    
                    if (*(r8_4 + (rdx_4 << 2)) == rbx_3)
                        break
                    
                    rax_8 = *(rcx_7 + 0xc)
                    
                    if (rax_8 == 0xffffffff)
                        goto label_1425d4920_1
                
                if (rax_8 == 0xffffffff)
                label_1425d4920_1:
                    rcx_7 = nullptr
        
        void* rax_9 = rcx_7 + 8
        
        if (rcx_7 == 0)
            rax_9 = nullptr
        
        if (rax_9 != 0)
            r12_1 = *rax_9
    
    i += 1
    r15_1 += 8
    *(r14_2 + *(arg1 + 0xf8)) = r12_1
    r14_2 += 4
while (i s< *(arg1 + 0xf0))
