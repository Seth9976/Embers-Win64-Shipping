// 函数: sub_142b01260
// 地址: 0x142b01260
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int16_t* rdi = *(arg1 + 0x10)
int32_t rbp = 0
int64_t r12 = *(arg1 + 0x18)
int64_t rsi = *(arg1 + 0x28)

if (rdi u>= r12)
    return 

void* rcx = *(arg1 + 8)

if (*(rcx + 0x50) == 1)
    sub_142b6b510(rcx, &data_1436659d8, 4, arg1 + 0x20, rsi, arg1 + 0x30, 0xffffffff, arg2)
    *(*(arg1 + 8) + 0x50) = 0

void* rcx_1 = *(arg1 + 8)
char* rax = *(arg1 + 0x20)
int32_t* r10_1 = *(arg1 + 0x30)
int32_t rdx = *(rcx_1 + 0x54)
char arg_b = 0

if (rdx != 0)
    *(rcx_1 + 0x54) = 0
    goto label_142b0132c

while (true)
    if (rdi u< r12)
        if (rax u< rsi)
            rdx = zx.d(*rdi)
            rdi = &rdi[1]
            
            if ((rdx & 0xfffff800) != 0xd800)
                goto label_142b01361
            
            if ((rdx & 0xfffffc00) != 0xd800)
                goto label_142b013e6
            
        label_142b0132c:
            
            if (rdi u>= r12)
                *(*(arg1 + 8) + 0x54) = rdx
                
                if (*(arg1 + 2) == 0)
                    goto label_142b013f0
                
                goto label_142b013e9
            
            uint32_t r8_1 = zx.d(*rdi)
            
            if ((r8_1 & 0xfffffc00) != 0xdc00)
            label_142b013e6:
                *(*(arg1 + 8) + 0x54) = rdx
            label_142b013e9:
                *arg2 = 0xc
            else
                rdx = ((rdx - 0xd7f7) << 0xa) + r8_1
                rdi = &rdi[1]
            label_142b01361:
                char arg_8 = rdx.b
                char* r9_2 = &arg_8
                char r14_2 = (rdx s>> 0x10).b & 0x1f
                int64_t r11_1 = 4
                char arg_9 = (rdx s>> 8).b
                char arg_a = r14_2
            label_142b01386:
                char rcx_10 = *r9_2
                
                if (rax u>= rsi)
                    void* r8_2 = *(arg1 + 8)
                    *(sx.q(*(r8_2 + 0x5b)) + r8_2 + 0x68) = rcx_10
                    void* rcx_11 = *(arg1 + 8)
                    *(rcx_11 + 0x5b) += 1
                    *arg2 = 0xf
                else
                    *rax = rcx_10
                    rax = &rax[1]
                    *r10_1 = rbp
                    r10_1 = &r10_1[1]
                
                r9_2 = &r9_2[1]
                int64_t temp0_1 = r11_1
                r11_1 -= 1
                
                if (temp0_1 != 1)
                    goto label_142b01386
                
                int32_t rcx_12
                rcx_12.b = r14_2 != 0
                rbp = rbp + 1 + rcx_12
                continue
        
    label_142b013f0:
        
        if (rdi u< r12 && rax u>= rsi && *arg2 s<= 0)
            *arg2 = 0xf
    
    *(arg1 + 0x20) = rax
    *(arg1 + 0x10) = rdi
    *(arg1 + 0x30) = r10_1
    break
