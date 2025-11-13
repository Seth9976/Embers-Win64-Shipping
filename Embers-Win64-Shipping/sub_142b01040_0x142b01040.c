// 函数: sub_142b01040
// 地址: 0x142b01040
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int16_t* rdi = *(arg1 + 0x10)
int64_t rbp = *(arg1 + 0x18)
int64_t rsi = *(arg1 + 0x28)

if (rdi u>= rbp)
    return 

void* rcx = *(arg1 + 8)

if (*(rcx + 0x50) == 1)
    sub_142b6b510(rcx, &data_1436659d4, 4, arg1 + 0x20, rsi, arg1 + 0x30, 0xffffffff, arg2)
    *(*(arg1 + 8) + 0x50) = 0

void* rcx_1 = *(arg1 + 8)
char* rax = *(arg1 + 0x20)
int32_t r8_1 = *(rcx_1 + 0x54)

if (r8_1 != 0)
    *(rcx_1 + 0x54) = 0
    goto label_142b01111

while (true)
    if (rdi u< rbp)
        if (rax u< rsi)
            r8_1 = zx.d(*rdi)
            rdi = &rdi[1]
            
            if ((r8_1 & 0xfffff800) != 0xd800)
                goto label_142b0114d
            
            if ((r8_1 & 0xfffffc00) != 0xd800)
                goto label_142b01215
            
        label_142b01111:
            
            if (rdi u>= rbp)
                *(*(arg1 + 8) + 0x54) = r8_1
                
                if (*(arg1 + 2) == 0)
                    goto label_142b01220
                
                goto label_142b01219
            
            uint32_t rdx = zx.d(*rdi)
            
            if ((rdx & 0xfffffc00) != 0xdc00)
            label_142b01215:
                *(*(arg1 + 8) + 0x54) = r8_1
            label_142b01219:
                *arg2 = 0xc
            else
                r8_1 = ((r8_1 - 0xd7f7) << 0xa) + rdx
                rdi = &rdi[1]
            label_142b0114d:
                char r9_3 = (r8_1 s>> 0x10).b & 0x1f
                char r10_2 = (r8_1 s>> 8).b
                
                if (rax u>= rsi)
                    void* rdx_1 = *(arg1 + 8)
                    *(sx.q(*(rdx_1 + 0x5b)) + rdx_1 + 0x68) = r8_1.b
                    void* rcx_9 = *(arg1 + 8)
                    *(rcx_9 + 0x5b) += 1
                    *arg2 = 0xf
                else
                    *rax = r8_1.b
                    rax = &rax[1]
                
                if (rax u>= rsi)
                    void* rdx_2 = *(arg1 + 8)
                    *(sx.q(*(rdx_2 + 0x5b)) + rdx_2 + 0x68) = r10_2
                    void* rcx_11 = *(arg1 + 8)
                    *(rcx_11 + 0x5b) += 1
                    *arg2 = 0xf
                else
                    *rax = r10_2
                    rax = &rax[1]
                
                if (rax u>= rsi)
                    void* rdx_3 = *(arg1 + 8)
                    *(sx.q(*(rdx_3 + 0x5b)) + rdx_3 + 0x68) = r9_3
                    void* rcx_13 = *(arg1 + 8)
                    *(rcx_13 + 0x5b) += 1
                    *arg2 = 0xf
                else
                    *rax = r9_3
                    rax = &rax[1]
                
                if (rax u>= rsi)
                    void* rdx_4 = *(arg1 + 8)
                    *(sx.q(*(rdx_4 + 0x5b)) + rdx_4 + 0x68) = 0
                    void* rcx_15 = *(arg1 + 8)
                    *(rcx_15 + 0x5b) += 1
                    *arg2 = 0xf
                    continue
                else
                    *rax = 0
                    rax = &rax[1]
                    continue
        
    label_142b01220:
        
        if (rdi u< rbp && rax u>= rsi && *arg2 s<= 0)
            *arg2 = 0xf
    
    *(arg1 + 0x20) = rax
    *(arg1 + 0x10) = rdi
    break
