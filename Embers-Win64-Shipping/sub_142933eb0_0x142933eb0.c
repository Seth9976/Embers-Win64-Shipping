// 函数: sub_142933eb0
// 地址: 0x142933eb0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

__chkstk(0x38)

if (arg2 == 0xb)
    int32_t* rcx = *(arg1 + 0x90)
    
    if (rcx != 0)
        int32_t rax_1 = *rcx
        
        if (rax_1 != 0 && *(rcx + 8) != 0)
            return rax_1
    
    return 0

if (((arg2 - 0xd) & 0xfffffff9) == 0 && arg2 != 0x13 && arg4 == 0)
    sub_1428a5670((&arg4[0x26]).d, 0xac, (&arg4[0x43]).d, "crypto\engine\eng_ctrl.c", 0x4f)
    return -1

int32_t* rdi_1 = *(arg1 + 0x90)
int32_t var_18_1
int32_t r8_2

if (arg2 != 0xd)
    int32_t rdx_2
    int32_t r10_2
    bool cond:0_1
    
    if (rdi_1 != 0)
        r10_2 = 0
        int32_t* rax_9 = rdi_1
        rdx_2 = 0
        
        while (true)
            int32_t rcx_2 = *rax_9
            
            if (rcx_2 == 0 || *(rax_9 + 8) == 0)
                cond:0_1 = rcx_2 != arg3
                break
            
            cond:0_1 = rcx_2 != arg3
            
            if (rcx_2 u>= arg3)
                break
            
            rdx_2 += 1
            rax_9 = &rax_9[8]
            continue
    
    if (rdi_1 == 0 || cond:0_1 || rdx_2 s< 0)
        var_18_1 = 0x62
        r8_2 = 0x8a
    else
        void* rdx_5 = &rdi_1[sx.q(rdx_2) * 8]
        
        if (arg2 - 0xc u> 6)
            var_18_1 = 0x79
            r8_2 = 0x6e
        else
            switch (arg2)
                case 0xc
                    int32_t rcx_5 = *(rdx_5 + 0x20)
                    int32_t rax_11
                    
                    if (rcx_5 != 0)
                        rax_11 = 0
                    
                    if (rcx_5 == 0 || *(rdx_5 + 0x28) == 0)
                        rax_11 = 1
                    
                    if (rax_11 == 0)
                        r10_2 = rcx_5
                    
                    return zx.q(r10_2)
                case 0xe
                    int64_t rax_13 = -1
                    
                    do
                        rax_13 += 1
                    while ((*(rdx_5 + 8))[rax_13] != 0)
                    
                    return rax_13
                case 0xf
                    char* rcx_7 = *(rdx_5 + 8)
                    char* rdx_6 = arg4
                    char i
                    
                    do
                        i = *rcx_7
                        rcx_7 = &rcx_7[1]
                        *rdx_6 = i
                        rdx_6 = &rdx_6[1]
                    while (i != 0)
                    int64_t rax_14 = -1
                    
                    do
                        rax_14 += 1
                    while (arg4[rax_14] != 0)
                    
                    return rax_14
                case 0x10
                    char* rcx_8 = *(rdx_5 + 0x10)
                    int64_t rax_15 = -1
                    
                    if (rcx_8 == 0)
                        rcx_8 = data_143b86558
                    
                    do
                        rax_15 += 1
                    while (rcx_8[rax_15] != 0)
                    
                    return rax_15
                case 0x11
                    char* rcx_9 = *(rdx_5 + 0x10)
                    
                    if (rcx_9 == 0)
                        rcx_9 = data_143b86558
                    
                    char* rdx_8 = arg4 - rcx_9
                    char i_1
                    
                    do
                        i_1 = *rcx_9
                        *(rdx_8 + rcx_9) = i_1
                        rcx_9 = &rcx_9[1]
                    while (i_1 != 0)
                    int64_t rax_16 = -1
                    
                    do
                        rax_16 += 1
                    while (arg4[rax_16] != 0)
                    
                    return rax_16
                case 0x12
                    return zx.q(*(rdx_5 + 0x18))
else
    if (rdi_1 != 0)
        int32_t* r8_1 = rdi_1
        int32_t r10_1 = 0
        
        while (*r8_1 != 0)
            char* rax_5 = *(r8_1 + 8)
            
            if (rax_5 != 0)
                void* r9_2 = arg4 - rax_5
                uint32_t i_2
                uint32_t rdx
                
                do
                    rdx = zx.d(*rax_5)
                    i_2 = zx.d(*(rax_5 + r9_2))
                    
                    if (rdx != i_2)
                        break
                    
                    rax_5 = &rax_5[1]
                while (i_2 != 0)
                
                if (rdx - i_2 != 0)
                    r10_1 += 1
                    r8_1 = &r8_1[8]
                    continue
            
            if (*r8_1 == 0)
                break
            
            if (*(r8_1 + 8) != 0 && r10_1 s>= 0)
                return zx.q(rdi_1[sx.q(r10_1) * 8])
            
            break
    
    var_18_1 = 0x57
    r8_2 = 0x89

sub_1428a5670(0x26, 0xac, r8_2, "crypto\engine\eng_ctrl.c", var_18_1)
return -1
