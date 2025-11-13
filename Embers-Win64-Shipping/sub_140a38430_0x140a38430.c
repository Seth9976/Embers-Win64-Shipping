// 函数: sub_140a38430
// 地址: 0x140a38430
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

EnterCriticalSection(arg1)
int32_t i = 1
int64_t r15
r15.b = 1

if (arg1->__offset(0xd8).d s> 1)
    int64_t* r14_1 = 0x28
    
    do
        int64_t rbx_1 = arg1->__offset(0xd0).q
        void* rdx = *(r14_1 + rbx_1 + 8)
        
        if (rdx != 0 && (rdx == arg2 || arg2 == 0))
            if (*(r14_1 + rbx_1 + 0x20) != 0)
                r15.b = 0
            else
                int64_t rcx = sx.q(*(r14_1 + rbx_1 + 0x10))
                *(*(rdx + 8) + (rcx << 2)) = 0xffffffff
                int64_t rax_2 = *(rdx + 0x18)
                int64_t* rcx_1 = *(rax_2 + (rcx << 3))
                
                if (rcx_1 != 0)
                    *(rax_2 + (rcx << 3)) = 0
                    rcx_1[9].d -= 1
                    
                    if (rcx_1[9].d == 1)
                        sub_140a2f6e0(rcx_1)
                
                *(r14_1 + rbx_1 + 8) = 0
                *(r14_1 + rbx_1 + 0x10) = 0xffffffff
                
                if (*(r14_1 + rbx_1) u> 0)
                    *(r14_1 + rbx_1) = 0
                
                int64_t rdx_2 = arg1->__offset(0xd0).q
                void* r8_1 = r14_1 + rdx_2
                *(rdx_2 + sx.q(*(r14_1 + rdx_2 + 0x18)) * 0x28 + 0x14) = *(r8_1 + 0x14)
                *(arg1->__offset(0xd0).q + sx.q(*(r8_1 + 0x14)) * 0x28 + 0x18) = *(r8_1 + 0x18)
                *(r8_1 + 0x18) = i
                *(r8_1 + 0x14) = i
                void* rdx_4 = arg1->__offset(0xd0).q
                *(r14_1 + rdx_4 + 0x14) = *(rdx_4 + 0x3c)
                *(r14_1 + rdx_4 + 0x18) = 1
                *(arg1->__offset(0xd0).q + sx.q(*(rdx_4 + 0x3c)) * 0x28 + 0x18) = i
                *(rdx_4 + 0x3c) = i
        
        i += 1
        r14_1 = &r14_1[5]
    while (i s< arg1->__offset(0xd8).d)

LeaveCriticalSection(arg1)
return zx.q(r15.b)
