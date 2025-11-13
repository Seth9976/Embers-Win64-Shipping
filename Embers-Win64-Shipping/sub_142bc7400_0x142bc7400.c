// 函数: sub_142bc7400
// 地址: 0x142bc7400
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

char rsi = *arg4 & 1
uint32_t r11 = arg3
int32_t r8 = *arg4
int32_t r10
r10.b = rsi != 0
int32_t rax = r10 + 5

if ((r8.b & 2) == 0)
    rax = r10 + 4

int32_t rbx = rax + 1

if ((r8.b & 4) == 0)
    rbx = rax

if ((r8.b & 0x40) == 0)
    int32_t r8_1 = r8 | 0x80
    *arg4 = r8_1
    uint32_t r9 = -1
    void* r10_4 = &arg1[zx.q(rbx * r11)]
    
    if (r10_4 u> arg2)
    label_142bc749f:
        *arg4 = r8_1 & 0xffffff7f
    else
        char* rdx = arg1
        
        if (arg1 u< r10_4)
            do
                uint32_t rcx_1 = zx.d(*rdx)
                
                if (rsi != 0)
                    rcx_1 = rcx_1 << 8 | zx.d(rdx[1])
                
                if (rcx_1 s<= r9)
                    goto label_142bc749f
                
                r9 = rcx_1
                rdx = &rdx[zx.q(rbx)]
            while (rdx u< r10_4)
    
    *arg4 |= 0x40

int32_t r9_1

if ((*arg4 & 0x80) != 0)
    r9_1 = 0

int32_t* result

if ((*arg4 & 0x80) == 0 || r11 == 0)
label_142bc7507:
    *arg7 = 0
    result = arg6
    *result = 0
else
    while (true)
        uint32_t r8_4 = (r11 + r9_1) u>> 1
        char* rax_5 = &arg1[zx.q(rbx * r8_4)]
        void* rax_6
        uint32_t rdx_3
        
        if (rsi == 0)
            rdx_3 = zx.d(*rax_5)
            rax_6 = &rax_5[1]
        else
            rax_6 = &rax_5[2]
            rdx_3 = zx.d(*rax_5) << 8 | zx.d(*(rax_6 - 1))
        
        if (arg5 u>= rdx_3)
            if (arg5 u<= rdx_3)
                void* rax_8
                uint32_t rdx_6
                
                if ((*arg4 & 2) == 0)
                    rdx_6 = zx.d(*rax_6)
                    rax_8 = rax_6 + 1
                else
                    rax_8 = rax_6 + 2
                    rdx_6 = zx.d(*rax_6) << 8 | zx.d(*(rax_8 - 1))
                
                *arg7 = rdx_6
                uint32_t rdx_9 = zx.d(*rax_8) << 8 | zx.d(*(rax_8 + 1))
                
                if ((*arg4 & 4) != 0)
                    rdx_9 = rdx_9 << 8 | zx.d(*(rax_8 + 2))
                
                result = arg6
                *result = rdx_9
                break
            
            r9_1 = r8_4 + 1
        else
            r11 = r8_4
        
        if (r9_1 u>= r11)
            goto label_142bc7507

return result
