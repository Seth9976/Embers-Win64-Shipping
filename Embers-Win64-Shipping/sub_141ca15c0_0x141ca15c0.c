// 函数: sub_141ca15c0
// 地址: 0x141ca15c0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

EnterCriticalSection(arg1 + 8)
int64_t rsi = sx.q(*(arg1 + 0x60))

if (rsi.d != 0)
    int32_t rax_1 = arg2[1].d
    int32_t rdx = rax_1 + rsi.d
    
    if (rdx s> *(arg2 + 0xc))
        sub_14061cd70(arg2, rdx)
        rax_1 = arg2[1].d
    
    memmove((sx.q(rax_1) << 4) + *arg2, *(arg1 + 0x58), (rsi << 4).d)
    *(arg1 + 0x60) = 0
    arg2[1].d += rsi.d

int32_t rax_2 = *(arg1 + 0x64)
int64_t* rdi_1 = *(arg1 + 0x58)
int32_t i_7 = *(arg1 + 0x60)

if (rax_2 s< 0)
    if (i_7 != 0)
        int32_t i
        
        do
            int64_t rcx_6 = *rdi_1
            
            if (rcx_6 != 0)
                sub_140a74f90(rcx_6)
            
            rdi_1 = &rdi_1[2]
            i = i_7
            i_7 -= 1
        while (i != 1)
        rax_2 = *(arg1 + 0x64)
    
    *(arg1 + 0x60) = 0
    
    if (rax_2 != 0)
        sub_14061cd70(arg1 + 0x58, 0)
else
    if (i_7 != 0)
        int32_t i_1
        
        do
            int64_t rcx_5 = *rdi_1
            
            if (rcx_5 != 0)
                sub_140a74f90(rcx_5)
            
            rdi_1 = &rdi_1[2]
            i_1 = i_7
            i_7 -= 1
        while (i_1 != 1)
    
    *(arg1 + 0x60) = 0

if (*(arg1 + 0x70) s<= 0)
    sub_141c8efe0(arg3, arg1 + 0x78)
else
    sub_141c8efe0(arg1 + 0x68, arg3)
    sub_141c8efe0(arg1 + 0x68, arg1 + 0x78)
    
    if (arg3 != arg1 + 0x68)
        int32_t i_8 = arg3[1].d
        int64_t* rdi_2 = *arg3
        
        if (i_8 != 0)
            int32_t i_2
            
            do
                int64_t rcx_10 = *rdi_2
                
                if (rcx_10 != 0)
                    sub_140a74f90(rcx_10)
                
                rdi_2 = &rdi_2[3]
                i_2 = i_8
                i_8 -= 1
            while (i_2 != 1)
            rdi_2 = *arg3
        
        if (rdi_2 != 0)
            sub_140a74f90(rdi_2)
        
        *arg3 = *(arg1 + 0x68)
        *(arg1 + 0x68) = 0
        arg3[1].d = *(arg1 + 0x70)
        *(arg3 + 0xc) = *(arg1 + 0x74)
        *(arg1 + 0x70) = 0

int32_t rax_6 = *(arg1 + 0x74)
int64_t* rdi_3 = *(arg1 + 0x68)
int32_t i_9 = *(arg1 + 0x70)

if (rax_6 s< 0)
    if (i_9 != 0)
        int32_t i_3
        
        do
            int64_t rcx_14 = *rdi_3
            
            if (rcx_14 != 0)
                sub_140a74f90(rcx_14)
            
            rdi_3 = &rdi_3[3]
            i_3 = i_9
            i_9 -= 1
        while (i_3 != 1)
        rax_6 = *(arg1 + 0x74)
    
    *(arg1 + 0x70) = 0
    
    if (rax_6 != 0)
        sub_1405a5130(arg1 + 0x68, 0)
else
    if (i_9 != 0)
        int32_t i_4
        
        do
            int64_t rcx_13 = *rdi_3
            
            if (rcx_13 != 0)
                sub_140a74f90(rcx_13)
            
            rdi_3 = &rdi_3[3]
            i_4 = i_9
            i_9 -= 1
        while (i_4 != 1)
    
    *(arg1 + 0x70) = 0

int32_t rax_7 = *(arg1 + 0x84)
int64_t* rdi_4 = *(arg1 + 0x78)
int32_t i_10 = *(arg1 + 0x80)

if (rax_7 s< 0)
    if (i_10 != 0)
        int32_t i_5
        
        do
            int64_t rcx_17 = *rdi_4
            
            if (rcx_17 != 0)
                sub_140a74f90(rcx_17)
            
            rdi_4 = &rdi_4[3]
            i_5 = i_10
            i_10 -= 1
        while (i_5 != 1)
        rax_7 = *(arg1 + 0x84)
    
    *(arg1 + 0x80) = 0
    
    if (rax_7 != 0)
        sub_1405a5130(arg1 + 0x78, 0)
else
    if (i_10 != 0)
        int32_t i_6
        
        do
            int64_t rcx_16 = *rdi_4
            
            if (rcx_16 != 0)
                sub_140a74f90(rcx_16)
            
            rdi_4 = &rdi_4[3]
            i_6 = i_10
            i_10 -= 1
        while (i_6 != 1)
    
    *(arg1 + 0x80) = 0

*arg4 = *(arg1 + 0x50)
char rdi_5 = *(arg1 + 0x41)

if (arg1 != -8)
    LeaveCriticalSection(arg1 + 8)

return zx.q(rdi_5)
