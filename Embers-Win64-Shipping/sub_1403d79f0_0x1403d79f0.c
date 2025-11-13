// 函数: sub_1403d79f0
// 地址: 0x1403d79f0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

if (arg1 == 0)
    return 

int32_t rax_1 = *(arg1 + 0x15c)

if ((rax_1 & 0x100000) != 0)
    int64_t r9_1 = *(arg1 + 0x140)
    
    if (r9_1 != 0)
        r9_1(arg1, arg1 + 0x228, *(arg1 + 0x200) + 1)
        rax_1 = *(arg1 + 0x15c)

if (rax_1.w s>= 0)
    if ((rax_1 & 0x10000) != 0)
        goto label_1403d7ab7
    
    goto label_1403d7a44

sub_1403cbd00(arg1 + 0x228, *(arg1 + 0x200) + 1, not.d(*(arg1 + 0x158)) & 1)
rax_1 = *(arg1 + 0x15c)

if ((rax_1 & 0x10000) != 0)
label_1403d7ab7:
    sub_1403cbc90(arg1 + 0x228, *(arg1 + 0x200) + 1)
    rax_1 = *(arg1 + 0x15c)
    
    if ((rax_1.b & 4) == 0)
        goto label_1403d7a48
    
    goto label_1403d7ae0

label_1403d7a44:

if ((rax_1.b & 4) == 0)
label_1403d7a48:
    
    if ((rax_1.b & 0x10) != 0)
        goto label_1403d7b05
    
    goto label_1403d7a50

label_1403d7ae0:
sub_1403d7d80(arg1 + 0x228, *(arg1 + 0x200) + 1, zx.d(*(arg1 + 0x25f)))
rax_1 = *(arg1 + 0x15c)

if ((rax_1.b & 0x10) != 0)
label_1403d7b05:
    sub_1403cbbd0(arg1 + 0x228, *(arg1 + 0x200) + 1)
    rax_1 = *(arg1 + 0x15c)
    
    if ((rax_1.b & 8) == 0)
        goto label_1403d7a58
    
    goto label_1403d7b31

label_1403d7a50:

if ((rax_1.b & 8) == 0)
label_1403d7a58:
    
    if ((rax_1 & 0x20000) != 0)
        goto label_1403d7b59
    
    goto label_1403d7a63

label_1403d7b31:
sub_1403d80c0(arg1 + 0x228, *(arg1 + 0x200) + 1, arg1 + 0x2dd)
rax_1 = *(arg1 + 0x15c)

if ((rax_1 & 0x20000) == 0)
label_1403d7a63:
    
    if ((rax_1 & 0x80000) != 0)
    label_1403d7b6f:
        void* rcx_7 = *(arg1 + 0x200)
        void* rax_3 = rcx_7 + 1
        char* rdx
        rdx.b = *(arg1 + 0x238)
        
        if (rdx.b == 4)
            int32_t r10_3 = *(arg1 + 0x228)
            
            if (*(arg1 + 0x239) != 8)
                if (r10_3 != 0)
                    int32_t r8_15 = r10_3 & 1
                    
                    if (r10_3 != 1)
                        int64_t rdx_18 = 0
                        
                        do
                            *(rcx_7 + (rdx_18 << 2) + 3) = not.b(*(rcx_7 + (rdx_18 << 2) + 3))
                            *(rcx_7 + (rdx_18 << 2) + 4) = not.b(*(rcx_7 + (rdx_18 << 2) + 4))
                            *(rcx_7 + (rdx_18 << 2) + 7) = not.b(*(rcx_7 + (rdx_18 << 2) + 7))
                            *(rcx_7 + (rdx_18 << 2) + 8) = not.b(*(rcx_7 + (rdx_18 << 2) + 8))
                            rax_3 += 8
                            rdx_18 += 2
                        while (r10_3 - r8_15 != rdx_18.d)
                    
                    if (r8_15 != 0)
                        *(rax_3 + 2) = not.b(*(rax_3 + 2))
                        *(rax_3 + 3) = not.b(*(rax_3 + 3))
            else if (r10_3 != 0)
                int32_t r8_11 = r10_3 & 3
                
                if (r10_3 - 1 u>= 3)
                    int64_t rdx_16 = 0
                    
                    do
                        *(rcx_7 + (rdx_16 << 1) + 2) = not.b(*(rcx_7 + (rdx_16 << 1) + 2))
                        *(rcx_7 + (rdx_16 << 1) + 4) = not.b(*(rcx_7 + (rdx_16 << 1) + 4))
                        *(rcx_7 + (rdx_16 << 1) + 6) = not.b(*(rcx_7 + (rdx_16 << 1) + 6))
                        *(rcx_7 + (rdx_16 << 1) + 8) = not.b(*(rcx_7 + (rdx_16 << 1) + 8))
                        rax_3 += 8
                        rdx_16 += 4
                    while (r10_3 - r8_11 != rdx_16.d)
                
                if (r8_11 != 0)
                    int64_t rcx_9 = 0
                    
                    do
                        *(rax_3 + (rcx_9 << 1) + 1) = not.b(*(rax_3 + (rcx_9 << 1) + 1))
                        rcx_9 += 1
                    while ((r10_3 & 3) != rcx_9.d)
        else if (rdx.b == 6)
            int32_t r10_1 = *(arg1 + 0x228)
            
            if (*(arg1 + 0x239) != 8)
                if (r10_1 != 0)
                    int32_t r8_13 = r10_1 & 1
                    
                    if (r10_1 != 1)
                        int64_t rdx_17 = 0
                        
                        do
                            *(rcx_7 + (rdx_17 << 3) + 7) = not.b(*(rcx_7 + (rdx_17 << 3) + 7))
                            *(rcx_7 + (rdx_17 << 3) + 8) = not.b(*(rcx_7 + (rdx_17 << 3) + 8))
                            *(rcx_7 + (rdx_17 << 3) + 0xf) = not.b(*(rcx_7 + (rdx_17 << 3) + 0xf))
                            *(rcx_7 + (rdx_17 << 3) + 0x10) = not.b(*(rcx_7 + (rdx_17 << 3) + 0x10))
                            rax_3 += 0x10
                            rdx_17 += 2
                        while (r10_1 - r8_13 != rdx_17.d)
                    
                    if (r8_13 != 0)
                        *(rax_3 + 6) = not.b(*(rax_3 + 6))
                        *(rax_3 + 7) = not.b(*(rax_3 + 7))
            else if (r10_1 != 0)
                int32_t r8_9 = r10_1 & 3
                
                if (r10_1 - 1 u>= 3)
                    int64_t rdx_14 = 0
                    
                    do
                        *(rcx_7 + (rdx_14 << 2) + 4) = not.b(*(rcx_7 + (rdx_14 << 2) + 4))
                        *(rcx_7 + (rdx_14 << 2) + 8) = not.b(*(rcx_7 + (rdx_14 << 2) + 8))
                        *(rcx_7 + (rdx_14 << 2) + 0xc) = not.b(*(rcx_7 + (rdx_14 << 2) + 0xc))
                        *(rcx_7 + (rdx_14 << 2) + 0x10) = not.b(*(rcx_7 + (rdx_14 << 2) + 0x10))
                        rax_3 += 0x10
                        rdx_14 += 4
                    while (r10_1 - r8_9 != rdx_14.d)
                
                if (r8_9 != 0)
                    int64_t rcx_8 = 0
                    
                    do
                        *(rax_3 + (rcx_8 << 2) + 3) = not.b(*(rax_3 + (rcx_8 << 2) + 3))
                        rcx_8 += 1
                    while ((r10_1 & 3) != rcx_8.d)
else
label_1403d7b59:
    sub_1403d8340(arg1 + 0x228, *(arg1 + 0x200) + 1)
    
    if ((*(arg1 + 0x15c) & 0x80000) != 0)
        goto label_1403d7b6f

char rax = (*(arg1 + 0x15c)).b

if ((rax & 1) != 0)
    sub_1403cc0f0(arg1 + 0x228, *(arg1 + 0x200) + 1)
    rax = (*(arg1 + 0x15c)).b

int32_t entry_zmm2[0x4]

if ((rax & 0x20) != 0)
    return sub_1403cba60(arg1 + 0x228, *(arg1 + 0x200) + 1, entry_zmm2, arg2) __tailcall
