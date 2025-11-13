// 函数: sub_141e3b6b0
// 地址: 0x141e3b6b0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t rbx = sx.q(*(arg2 + 0x1b0))
char* rdi = nullptr
int64_t* rsi = arg1
arg1[1].d = 0
int32_t rdx = 0

if (*(arg1 + 0xc) != rbx.d)
    sub_1405dadb0(arg1, rbx.d)
    rdx = rsi[1].d

uint64_t result = zx.q(rdx + rbx.d)
rsi[1].d = result.d

if (result.d s> *(rsi + 0xc))
    result = sub_1405a4cf0(rsi)

if (rbx s> 0)
    int64_t r9_1 = 0
    int64_t* r11_1 = nullptr
    
    do
        int64_t* r10_1 = *(arg3 + 0x30)
        int64_t* rdx_2 = r10_1
        void* r8 = &r10_1[sx.q(*(arg3 + 0x38))]
        int32_t rdx_3
        
        if (r10_1 == r8)
        label_141e3b742:
            rdx_3 = -1
        else
            while (*rdx_2 != *(r11_1 + *(arg2 + 0x1a8)))
                rdx_2 = &rdx_2[1]
                
                if (rdx_2 == r8)
                    goto label_141e3b742
            
            rdx_3 = ((rdx_2 - r10_1) s>> 3).d
        
        result = *rsi
        r11_1 += 0xc
        *(result + (r9_1 << 2)) = rdx_3
        r9_1 += 1
    while (r9_1 s< rbx)

int64_t rbx_1 = sx.q(*(arg3 + 0x38))

if (*(arg3 + 0x58) != rbx_1.d)
    int32_t rdx_4 = 0
    *(arg3 + 0x58) = 0
    
    if (*(arg3 + 0x5c) != rbx_1.d)
        sub_1405c5510(arg3 + 0x50, rbx_1.d)
        rdx_4 = *(arg3 + 0x58)
    
    int32_t rax_2 = rdx_4 + rbx_1.d
    *(arg3 + 0x58) = rax_2
    
    if (rax_2 s> *(arg3 + 0x5c))
        sub_1405daba0(arg3 + 0x50)
    
    int32_t rdx_7 = 0
    *(arg3 + 0x68) = 0
    
    if (*(arg3 + 0x6c) != rbx_1.d)
        sub_1405c5510(arg3 + 0x60, rbx_1.d)
        rdx_7 = *(arg3 + 0x68)
    
    result = zx.q(rdx_7 + rbx_1.d)
    *(arg3 + 0x68) = result.d
    
    if (result.d s> *(arg3 + 0x6c))
        result = sub_1405daba0(arg3 + 0x60)
    
    if (rbx_1.d s> 0)
        do
            int64_t* rcx_6 = *(arg3 + 0x70)
            void* r8_1 = &rcx_6[sx.q(*(arg3 + 0x78))]
            int64_t i = *(*(arg3 + 0x30) + (rdi << 3))
            int64_t rdx_8
            
            if (rcx_6 == r8_1)
            label_141e3b7fe:
                rdx_8.b = 0
            else
                while (*rcx_6 != i)
                    rcx_6 = &rcx_6[1]
                    
                    if (rcx_6 == r8_1)
                        goto label_141e3b7fe
                
                rdx_8.b = 1
            
            rdi[*(arg3 + 0x50)] = rdx_8.b
            int64_t* rdx_9 = *(arg3 + 0x80)
            void* r8_2 = &rdx_9[sx.q(*(arg3 + 0x88))]
            int64_t rcx_8
            
            if (rdx_9 == r8_2)
            label_141e3b82e:
                rcx_8.b = 0
            else
                while (*rdx_9 != i)
                    rdx_9 = &rdx_9[1]
                    
                    if (rdx_9 == r8_2)
                        goto label_141e3b82e
                
                rcx_8.b = 1
            
            result = *(arg3 + 0x60)
            rdi[result] = rcx_8.b
            rdi = &rdi[1]
        while (rdi s< rbx_1)

return result
