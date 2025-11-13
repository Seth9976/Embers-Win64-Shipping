// 函数: sub_142813a20
// 地址: 0x142813a20
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t* r15 = arg2
sub_142817350(*r15, 1, "Checking class: %s\n", arg1[4])

if (*arg1 != 0 || arg1[3] != 0)
    int64_t rax
    rax.b = 1
    return rax

int64_t rbx = sx.q(arg1[5].d)
int64_t r12

if (rbx != 0)
    class physx::PxAllocatorCallback* rax_1 = physx::shdfnd::getAllocator()
    r12 = (*(*rax_1 + 8))(rax_1, rbx, "NonTrackedAlloc", 
        "D:\Build\++Fortnite\Sync\Engine\Source\ThirdParty\PhysX3\PhysX_3.4\Source\PhysXExtensions\src\s"
    "erialization\Binary\SnConvX_MetaData.cpp", 
        0x71)
else
    r12 = 0

memset(r12, 0, sx.q(arg1[5].d))
uint64_t i_2 = zx.q(arg1[9].d)
int32_t r14 = 0
int32_t arg_8 = i_2.d
int64_t arg_18

if (i_2.d != 0)
    int64_t r15_1 = 0
    arg_18 = 0
    
    do
        i_2 = arg1[8]
        
        if ((*(r15_1 + i_2 + 0x20) & 0x10) == 0)
            int64_t rcx_3 = sx.q(*(r15_1 + i_2 + 0x10))
            int32_t rdx_1 = -1
            int32_t i_6 = 0
            int64_t rbx_1 = rcx_3
            int64_t rsi_1 = sx.q(*(r15_1 + i_2 + 0x14) + rcx_3.d)
            
            if (rcx_3 s< rsi_1)
                int64_t var_80
                
                do
                    int32_t rcx_4 = rdx_1
                    
                    if (*(rbx_1 + r12) != 0)
                        if (rdx_1 == 0xffffffff)
                            rdx_1 = r14
                        
                        i_2 = 0
                        
                        if (rcx_4 != 0xffffffff)
                            i_2 = zx.q(i_6)
                        
                        i_6 = (i_2 + 1).d
                    else if (rdx_1 != 0xffffffff)
                        var_80.d = rdx_1
                        int32_t i_8 = i_6
                        sub_142817350(*arg2, 0x20, 
                            "PxBinaryConverter: %s: %d overlapping bytes at offset %d!\n", arg1[4])
                        rdx_1 = -1
                    
                    *(rbx_1 + r12) = 1
                    rbx_1 += 1
                while (rbx_1 s< rsi_1)
                
                r15_1 = arg_18
                
                if (rdx_1 != 0xffffffff)
                    var_80.d = rdx_1
                    int32_t i_9 = i_6
                    sub_142817350(*arg2, 0x20, 
                        "PxBinaryConverter: %s: %d overlapping bytes at offset %d!\n", arg1[4])
        
        r15_1 += 0x28
        r14 += 1
        arg_18 = r15_1
    while (r14 u< arg_8)
    
    r15 = arg2

int32_t i_4 = -1
int32_t i_5 = 0
int32_t i = 0
int64_t* r14_2

if (arg1[5].d s<= 0)
    r14_2 = arg2
else
    int64_t r14_1 = r12
    char const* const var_78
    int128_t zmm1
    
    do
        int32_t i_12 = i_4
        
        if (*r14_1 == 0)
            if (i_4 == 0xffffffff)
                i_4 = i
            
            i_2 = 0
            
            if (i_12 != 0xffffffff)
                i_2 = zx.q(i_5)
            
            i_5 = (i_2 + 1).d
        else if (i_4 != 0xffffffff)
            int64_t var_80_1 = arg1[4]
            int32_t i_10 = i_4
            sub_142817350(*r15, 1, "\n Adding %d padding bytes at offset %d in class %s.\n", 
                zx.q(i_5))
            uint64_t rcx_8 = zx.q(arg1[9].d)
            int64_t var_68_1
            __builtin_memset(&var_68_1, 0, 0x18)
            char const* const var_70_1 = "auto-generated padding"
            int32_t rax_7 = *(arg1 + 0x4c) & 0x7fffffff
            var_78 = "paddingByte"
            var_68_1.d = i_4
            var_68_1:4.d = i_5
            int64_t var_60_1
            var_60_1.d = i_5
            int64_t var_58_1
            var_58_1.d = 0x200
            
            if (rax_7 u> rcx_8.d)
                int64_t rdx_3 = arg1[8] + rcx_8 * 0x28
                
                if (rdx_3 != 0)
                    zmm1 = var_68_1.o
                    *rdx_3 = var_78.o
                    *(rdx_3 + 0x10) = zmm1
                    *(rdx_3 + 0x20) = var_58_1
                
                arg1[9].d += 1
            else
                sub_142816070(&arg1[8], &var_78)
            
            i_4 = -1
        
        i += 1
        r14_1 += 1
    while (i s< arg1[5].d)
    
    r14_2 = arg2
    
    if (i_4 != 0xffffffff)
        int64_t var_80_2 = arg1[4]
        int32_t i_11 = i_4
        sub_142817350(*r14_2, 1, "\n Adding %d padding bytes at offset %d in class %s.\n", 
            zx.q(i_5))
        uint64_t rcx_12 = zx.q(arg1[9].d)
        int64_t var_68_2
        __builtin_memset(&var_68_2, 0, 0x18)
        var_78 = "paddingByte"
        char const* const var_70_2 = "auto-generated padding"
        var_68_2.d = i_4
        var_68_2:4.d = i_5
        int64_t var_60_2
        var_60_2.d = i_5
        int64_t var_58_2
        var_58_2.d = 0x200
        
        if ((*(arg1 + 0x4c) & 0x7fffffff) u> rcx_12.d)
            uint64_t rdx_5 = arg1[8] + rcx_12 * 0x28
            
            if (rdx_5 != 0)
                zmm1 = var_68_2.o
                *rdx_5 = var_78.o
                *(rdx_5 + 0x10) = zmm1
                *(rdx_5 + 0x20) = var_58_2
            
            arg1[9].d += 1
        else
            sub_142816070(&arg1[8], &var_78)

if (r12 != 0)
    class physx::PxAllocatorCallback* rax_11 = physx::shdfnd::getAllocator()
    int64_t r8_1 = *rax_11
    (*(r8_1 + 0x10))(rax_11, r12, r8_1)

int32_t rsi_2 = 0

if (arg_8 u<= 0)
label_142813f01:
    i_2.b = 1
else
    int64_t r15_3 = 0
    
    while (true)
        int64_t* r12_1 = arg1[8]
        i_2 = zx.q(*(r12_1 + r15_3 + 0x20))
        arg_18.d = i_2.d
        
        if ((i_2.b & 8) == 0)
            int32_t rax_12 = r14_2[1].d
            int64_t rdi_1 = *(r12_1 + r15_3)
            void* r14_3 = *r14_2
            uint64_t i_7
            
            if (rax_12 != 1)
                if (rax_12 != 2)
                label_142813ef8:
                    sub_142817350(*arg2, 0x20, "PxBinaryConverter: Missing meta-data for: %s\n", 
                        rdi_1)
                    i_2.b = 0
                    break
                    break
                
                i_2 = *(r14_3 + 0x10)
                uint64_t r10_3 = 0
                int32_t r11_2 = *(i_2 + 0x28)
                
                if (r11_2 == 0)
                label_142813e0f:
                    i_7 = 0
                else
                    int64_t rbx_3 = *(i_2 + 0x20)
                    
                    while (true)
                        i_7 = *(rbx_3 + (r10_3 << 3))
                        i_2 = *(i_7 + 0x20)
                        int64_t r9_9 = rdi_1 - i_2
                        uint32_t i_1
                        uint32_t rdx_9
                        
                        do
                            rdx_9 = zx.d(*i_2)
                            i_1 = zx.d(*(i_2 + r9_9))
                            
                            if (rdx_9 != i_1)
                                break
                            
                            i_2 += 1
                        while (i_1 != 0)
                        
                        if (rdx_9 - i_1 == 0)
                            for (i_2 = *(i_7 + 0x18); i_2 != 0; i_2 = *(i_2 + 0x18))
                                i_7 = i_2
                            
                            break
                        
                        r10_3 = zx.q(r10_3.d + 1)
                        
                        if (r10_3.d u>= r11_2)
                            goto label_142813e0f_1
            else
                i_2 = *(r14_3 + 8)
                uint64_t r10_2 = 0
                int32_t r11_1 = *(i_2 + 0x28)
                
                if (r11_1 == 0)
                label_142813e0f_1:
                    i_7 = 0
                else
                    int64_t rbx_2 = *(i_2 + 0x20)
                    
                    while (true)
                        i_7 = *(rbx_2 + (r10_2 << 3))
                        i_2 = *(i_7 + 0x20)
                        int64_t r9_6 = rdi_1 - i_2
                        uint32_t i_3
                        uint32_t rdx_7
                        
                        do
                            rdx_7 = zx.d(*i_2)
                            i_3 = zx.d(*(i_2 + r9_6))
                            
                            if (rdx_7 != i_3)
                                break
                            
                            i_2 += 1
                        while (i_3 != 0)
                        
                        if (rdx_7 - i_3 == 0)
                            for (i_2 = *(i_7 + 0x18); i_2 != 0; i_2 = *(i_2 + 0x18))
                                i_7 = i_2
                            
                            break
                        
                        r10_2 = zx.q(r10_2.d + 1)
                        
                        if (r10_2.d u>= r11_1)
                            goto label_142813e0f_1
            
            if (i_7 == 0)
                goto label_142813ef8
            
            if ((arg_18.b & 0x10) != 0)
                sub_142817350(r14_3, 1, "Extra data: %s\n", rdi_1)
        
        rsi_2 += 1
        r15_3 += 0x28
        
        if (rsi_2 u>= arg_8)
            goto label_142813f01
        
        r14_2 = arg2

return i_2
