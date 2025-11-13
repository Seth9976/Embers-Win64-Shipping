// 函数: sub_142bb9070
// 地址: 0x142bb9070
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int32_t rbp = arg5
uint32_t count_1 = 0

if (rbp s< 0)
    rbp = 0

uint64_t rcx_5
char* rdx
int64_t rdi

switch (arg2)
    case 0
        count_1 = 1
        
        if (arg4 != 0 && rbp u>= 1)
            *arg4 = *(arg1 + 0x261)
    case 1
        if (arg3 u< 4)
            count_1 = 4
            
            if (arg4 != 0 && rbp u>= 4)
                if (arg3 == 0)
                    *arg4 = *(arg1 + 0x264)
                else if (arg3 == 1)
                    *arg4 = *(arg1 + 0x268)
                else if (arg3 == 2)
                    *arg4 = *(arg1 + 0x26c)
                else if (arg3 != 3)
                    *arg4 = 0
                else
                    *arg4 = *(arg1 + 0x270)
    case 2
        if (arg3 u< 4)
            count_1 = 4
            
            if (arg4 != 0 && rbp u>= 4)
                if (arg3 == 0)
                    *arg4 = *(arg1 + 0x27c)
                else if (arg3 == 1)
                    *arg4 = *(arg1 + 0x280)
                else if (arg3 == 2)
                    *arg4 = *(arg1 + 0x284)
                else if (arg3 != 3)
                    *arg4 = 0
                else
                    *arg4 = *(arg1 + 0x288)
    case 3
        count_1 = 1
        
        if (arg4 != 0 && rbp u>= 1)
            *arg4 = *(arg1 + 0x260)
    case 4
        rdx = *(arg1 + 0x1d8)
        
        if (rdx != 0)
            rdi = -1
            
            do
                rdi += 1
            while (rdx[rdi] != 0)
            
        label_142bb920a:
            count_1 = rdi.d + 1
            
            if (arg4 != 0 && rbp u>= count_1)
                memcpy(arg4, rdx, count_1)
    case 5
        count_1 = 4
        
        if (arg4 != 0 && rbp u>= 4)
            *arg4 = *(arg1 + 0x114)
    case 6
        count_1 = 4
        
        if (arg4 != 0 && rbp u>= 4)
            *arg4 = *(arg1 + 0x240)
    case 7
        if (arg3 u< *(arg1 + 0x240))
            int64_t rdi_1 = -1
            char* rdx_1 = *(*(arg1 + 0x248) + (zx.q(arg3) << 3))
            
            do
                rdi_1 += 1
            while (rdx_1[rdi_1] != 0)
            
            count_1 = rdi_1.d + 1
            
            if (arg4 != 0 && rbp u>= count_1)
                memcpy(arg4, rdx_1, count_1)
                *(zx.q(count_1 - 1) + arg4) = 0
    case 8
        if (arg3 u< *(arg1 + 0x240))
            rcx_5 = zx.q(arg3)
            uint32_t count = *(*(arg1 + 0x258) + (rcx_5 << 2))
            count_1 = count + 1
            
            if (arg4 != 0 && rbp u>= count_1)
                memcpy(arg4, *(*(arg1 + 0x250) + (rcx_5 << 3)), count)
                *(zx.q(count_1 - 1) + arg4) = 0
    case 9
        count_1 = 4
        
        if (arg4 != 0 && rbp u>= 4)
            *arg4 = *(arg1 + 0x1e0)
    case 0xa
        if (*(arg1 + 0x1e0) == 1 && arg3 u< *(arg1 + 0x1e8))
            int64_t rdi_2 = -1
            char* rdx_4 = *(*(arg1 + 0x200) + (zx.q(arg3) << 3))
            
            do
                rdi_2 += 1
            while (rdx_4[rdi_2] != 0)
            
            count_1 = rdi_2.d + 1
            
            if (arg4 != 0 && rbp u>= count_1)
                memcpy(arg4, rdx_4, count_1 - 1)
                *(zx.q(count_1 - 1) + arg4) = 0
    case 0xb
        count_1 = 4
        
        if (arg4 != 0 && rbp u>= 4)
            *arg4 = *(arg1 + 0x220)
    case 0xc
        void* rdx_5 = *(arg1 + 0x238)
        
        if (rdx_5 != 0)
            int32_t* rax_22 = sub_142b992a0(arg3, rdx_5)
            
            if (rax_22 != 0)
                arg3 = *rax_22
            label_142bb93ea:
                int64_t rdx_2 = *(arg1 + 0x228)
                
                if (rdx_2 != 0)
                    rcx_5 = zx.q(arg3)
                    uint32_t count_2 = *(*(arg1 + 0x230) + (rcx_5 << 2))
                    count_1 = count_2 + 1
                    
                    if (arg4 != 0 && rbp u>= count_1)
                        memcpy(arg4, *(rdx_2 + (rcx_5 << 3)), count_2)
                        *(zx.q(count_1 - 1) + arg4) = 0
        else if (arg3 u< *(arg1 + 0x220))
            goto label_142bb93ea
    case 0xd
        count_1 = 2
        
        if (arg4 != 0 && rbp u>= 2)
            *arg4 = *(arg1 + 0x18c)
    case 0xe
        count_1 = 2
        
        if (arg4 != 0 && rbp u>= 2)
            *arg4 = *(arg1 + 0x18e)
    case 0xf
        count_1 = 1
        
        if (arg4 != 0 && rbp u>= 1)
            *arg4 = *(arg1 + 0x11c)
    case 0x10
        if (arg3 u< zx.d(*(arg1 + 0x11c)))
            count_1 = 2
            
            if (arg4 != 0 && rbp u>= 2)
                *arg4 = *(arg1 + 0xd8 + (zx.q(arg3) << 1) + 0x48)
    case 0x11
        count_1 = 4
        
        if (arg4 != 0 && rbp u>= 4)
            *arg4 = *(arg1 + 0x188)
    case 0x12
        count_1 = 1
        
        if (arg4 != 0 && rbp u>= 1)
            *arg4 = *(arg1 + 0x11d)
    case 0x13
        if (arg3 u< zx.d(*(arg1 + 0x11d)))
            count_1 = 2
            
            if (arg4 != 0 && rbp u>= 2)
                *arg4 = *(arg1 + 0xd8 + (zx.q(arg3) << 1) + 0x64)
    case 0x14
        count_1 = 1
        
        if (arg4 != 0 && rbp u>= 1)
            *arg4 = *(arg1 + 0x11e)
    case 0x15
        if (arg3 u< zx.d(*(arg1 + 0x11e)))
            count_1 = 2
            
            if (arg4 != 0 && rbp u>= 2)
                *arg4 = *(arg1 + 0xd8 + (zx.q(arg3) << 1) + 0x78)
    case 0x16
        count_1 = 1
        
        if (arg4 != 0 && rbp u>= 1)
            *arg4 = *(arg1 + 0x11f)
    case 0x17
        if (arg3 u< zx.d(*(arg1 + 0x11f)))
            count_1 = 2
            
            if (arg4 != 0 && rbp u>= 2)
                *arg4 = *(arg1 + 0xd8 + (zx.q(arg3) << 1) + 0x94)
    case 0x18
        count_1 = 4
        
        if (arg4 != 0 && rbp u>= 4)
            *arg4 = *(arg1 + 0x180)
    case 0x19
        count_1 = 4
        
        if (arg4 != 0 && rbp u>= 4)
            *arg4 = *(arg1 + 0x184)
    case 0x1a
        count_1 = 1
        
        if (arg4 != 0 && rbp u>= 1)
            *arg4 = *(arg1 + 0x190)
    case 0x1b
        if (arg3 u< zx.d(*(arg1 + 0x190)))
            count_1 = 2
            
            if (arg4 != 0 && rbp u>= 2)
                *arg4 = *(arg1 + 0xd8 + (zx.q(arg3) << 1) + 0xbc)
    case 0x1c
        count_1 = 1
        
        if (arg4 != 0 && rbp u>= 1)
            *arg4 = *(arg1 + 0x191)
    case 0x1d
        if (arg3 u< zx.d(*(arg1 + 0x191)))
            count_1 = 2
            
            if (arg4 != 0 && rbp u>= 2)
                *arg4 = *(arg1 + 0xd8 + (zx.q(arg3) << 1) + 0xd6)
    case 0x1e
        count_1 = 1
        
        if (arg4 != 0 && rbp u>= 1)
            *arg4 = *(arg1 + 0x192)
    case 0x1f
        count_1 = 1
        
        if (arg4 != 0 && rbp u>= 1)
            *arg4 = *(arg1 + 0x193)
    case 0x20
        if (arg3 u< 2)
            count_1 = 2
            
            if (arg4 != 0 && rbp u>= 2)
                *arg4 = *(arg1 + 0xd8 + (zx.q(arg3) << 1) + 0xfc)
    case 0x21
        count_1 = 4
        
        if (arg4 != 0 && rbp u>= 4)
            *arg4 = *(arg1 + 0x118)
    case 0x22
        count_1 = 4
        
        if (arg4 != 0 && rbp u>= 4)
            *arg4 = *(arg1 + 0x1d0)
    case 0x23
        count_1 = 4
        
        if (arg4 != 0 && rbp u>= 4)
            *arg4 = *(arg1 + 0x1cc)
    case 0x24
        rdx = *(arg1 + 0xd8)
        
        if (rdx != 0)
            rdi = -1
            
            do
                rdi += 1
            while (rdx[rdi] != 0)
            
            goto label_142bb920a
    case 0x25
        rdx = *(arg1 + 0xe0)
        
        if (rdx != 0)
            rdi = -1
            
            do
                rdi += 1
            while (rdx[rdi] != 0)
            
            goto label_142bb920a
    case 0x26
        rdx = *(arg1 + 0xe8)
        
        if (rdx != 0)
            rdi = -1
            
            do
                rdi += 1
            while (rdx[rdi] != 0)
            
            goto label_142bb920a
    case 0x27
        rdx = *(arg1 + 0xf0)
        
        if (rdx != 0)
            rdi = -1
            
            do
                rdi += 1
            while (rdx[rdi] != 0)
            
            goto label_142bb920a
    case 0x28
        rdx = *(arg1 + 0xf8)
        
        if (rdx != 0)
            rdi = -1
            
            do
                rdi += 1
            while (rdx[rdi] != 0)
            
            goto label_142bb920a
    case 0x29
        count_1 = 1
        
        if (arg4 != 0 && rbp u>= 1)
            *arg4 = *(arg1 + 0x104)
    case 0x2a
        count_1 = 2
        
        if (arg4 != 0 && rbp u>= 2)
            *arg4 = *(arg1 + 0x106)
    case 0x2b
        count_1 = 2
        
        if (arg4 != 0 && rbp u>= 2)
            *arg4 = *(arg1 + 0x108)
    case 0x2c
        count_1 = 2
        
        if (arg4 != 0 && rbp u>= 2)
            *arg4 = *(arg1 + 0x110)
    case 0x2d
        count_1 = 4
        
        if (arg4 != 0 && rbp u>= 4)
            *arg4 = *(arg1 + 0x100)

if (count_1 == 0)
    count_1 = -1

return zx.q(count_1)
