// 函数: sub_1421575d0
// 地址: 0x1421575d0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void* arg_8
void* rbx

if (arg2 != 0)
    if (sub_1420e6590(arg2) == 0 || *(*(*(arg1 + 0x58) + 0x148) + 0x18) != *(arg1 + 0x15a8))
        rbx = *(sub_140d21d80(arg2) + 0x18)
        int32_t rax_5 = *(arg1 + 0x14c0)
        arg_8 = rbx
        int32_t rax_9
        
        if (rax_5 != *(arg1 + 0x14ec))
            int32_t rax_7 = sub_140b5ead0(rbx.d) + arg_8:4.d
            void* r8_1 = arg1 + 0x14f0
            void* rcx_4 = *(r8_1 + 8)
            
            if (rcx_4 != 0)
                r8_1 = rcx_4
            
            rax_9 = *(r8_1 + (((sx.q(*(arg1 + 0x1500)) - 1) & sx.q(rax_7)) << 2))
        
        if (rax_5 == *(arg1 + 0x14ec) || rax_9 == 0xffffffff)
        label_142157689:
            rax_9 = -1
        else
            int64_t rdx_3 = *(arg1 + 0x14b8)
            
            while (true)
                int64_t rcx_6 = sx.q(rax_9) * 2
                
                if (*(rdx_3 + (rcx_6 << 3)) == rbx)
                    break
                
                rax_9 = *(rdx_3 + (rcx_6 << 3) + 8)
                
                if (rax_9 == 0xffffffff)
                    goto label_142157689
        
        rbx.b = rax_9 != 0xffffffff
    else
        rbx.b = 1
else
    rbx.b = 1

arg_8 = arg2
uint32_t rcx_8 = (arg2 u>> 4).d
int32_t rdx_5 = (0x9e3779b9 - rcx_8) ^ rcx_8 << 8
int32_t r9_2 = neg.d(rdx_5 + rcx_8) ^ rdx_5 u>> 0xd
int32_t rcx_11 = (rcx_8 - rdx_5 - r9_2) ^ r9_2 u>> 0xc
int32_t rdx_8 = (rdx_5 - rcx_11 - r9_2) ^ rcx_11 << 0x10
int32_t r9_5 = (r9_2 - rdx_8 - rcx_11) ^ rdx_8 u>> 5
int32_t rcx_14 = (rcx_11 - rdx_8 - r9_5) ^ r9_5 u>> 3
int32_t rdx_11 = (rdx_8 - rcx_14 - r9_5) ^ rcx_14 << 0xa
int32_t r9_8 = (r9_5 - rdx_11 - rcx_14) ^ rdx_11 u>> 0xf

if (*(arg1 + 0x1560) != *(arg1 + 0x158c))
    void* rcx_15 = *(arg1 + 0x1598)
    void* r8_2 = arg1 + 0x1590
    
    if (rcx_15 != 0)
        r8_2 = rcx_15
    
    int32_t i = *(r8_2 + (((sx.q(*(arg1 + 0x15a0)) - 1) & sx.q(r9_8)) << 2))
    
    if (i != 0xffffffff)
        int64_t r8_3 = *(arg1 + 0x1558)
        
        do
            int64_t rdx_16 = sx.q(i) * 3
            void* rcx_17 = r8_3 + (rdx_16 << 3)
            
            if (*(r8_3 + (rdx_16 << 3)) == arg2)
                if (i == 0xffffffff || rcx_17 == 0)
                    break
                
                *(rcx_17 + 8) = rbx.b
                return zx.q(rbx.b)
            
            i = *(rcx_17 + 0x10)
        while (i != 0xffffffff)

*sub_142136400(arg1 + 0x1558, r9_8, &arg_8) = rbx.b
return zx.q(rbx.b)
