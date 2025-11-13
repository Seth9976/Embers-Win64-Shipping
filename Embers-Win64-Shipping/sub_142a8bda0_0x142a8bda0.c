// 函数: sub_142a8bda0
// 地址: 0x142a8bda0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int16_t* r10 = arg1

if (arg3 == 0 || arg4.d s< 0xffffffff)
    return r10

if (arg1 == 0 || arg2 s< 0xffffffff)
    return 0

bool cond:0

if (arg2 s>= 0)
    int32_t temp0_1 = arg4.d
    cond:0 = temp0_1 != 0
    
    if (temp0_1 s< 0)
        arg4 = -1
        
        do
            arg4 += 1
        while (arg3[arg4] != 0)
        
        cond:0 = arg4.d != 0
    
    goto label_142a8bebe

int32_t temp1_1 = arg4.d
cond:0 = temp1_1 != 0

if (temp1_1 s>= 0)
label_142a8bebe:
    
    if (cond:0)
        int16_t rbp_1 = *arg3
        void* rbx_2 = &arg3[1 + sx.q(arg4.d - 1)]
        
        if (arg4.d == 1 && (zx.d(rbp_1) & 0xfffff800) != 0xd800)
            if (arg2 s>= 0)
                return sub_142a8bc00(r10, rbp_1, arg2)
            
            return sub_142a8c220(r10, rbp_1)
        
        if (arg2 s< 0)
            for (int16_t i = *r10; i != 0; i = *r10)
                int16_t* r8_2 = r10
                r10 = &r10[1]
                
                if (i == rbp_1)
                    int16_t* rcx_4 = r10
                    int16_t* rax_8 = &arg3[1]
                    
                    if (&arg3[1] != rbx_2)
                        do
                            int16_t rdx_4 = *rcx_4
                            
                            if (rdx_4 == 0)
                                return nullptr
                            
                            if (rdx_4 != *rax_8)
                                goto label_142a8bfbb
                            
                            rcx_4 = &rcx_4[1]
                            rax_8 = &rax_8[1]
                        while (rax_8 != rbx_2)
                    
                    if (((zx.d(r10[-1]) & 0xfffffc00) != 0xdc00 || arg1 == &r10[-1]
                            || (zx.d(r10[-2]) & 0xfffffc00) != 0xd800) && (
                            (zx.d(rcx_4[-1]) & 0xfffffc00) != 0xd800
                            || (zx.d(*rcx_4) & 0xfffffc00) != 0xdc00))
                        return r8_2
                
            label_142a8bfbb:
        else if (arg2 s> arg4.d - 1)
            void* r9_1 = &r10[sx.q(arg2)]
            void* rdi_3 = r9_1 - sx.q(arg4.d - 1) * 2
            
            if (r10 != rdi_3)
                do
                    int16_t rax_18 = *r10
                    int16_t* rsi_1 = r10
                    int16_t* rdx_6 = r10
                    r10 = &r10[1]
                    
                    if (rax_18 == rbp_1)
                        int16_t* r8_3 = r10
                        int16_t* rcx_5 = &arg3[1]
                        
                        if (&arg3[1] == rbx_2)
                        label_142a8c029:
                            
                            if (sub_142a8bb00(arg1, rdx_6, r8_3, r9_1) != 0)
                                return rsi_1
                        else
                            while (*r8_3 == *rcx_5)
                                r8_3 = &r8_3[1]
                                rcx_5 = &rcx_5[1]
                                
                                if (rcx_5 == rbx_2)
                                    goto label_142a8c029
                while (r10 != rdi_3)
        
        return nullptr
else
    int16_t rbx_1 = *arg3
    
    if (rbx_1 != 0)
        int16_t j_1 = arg3[1]
        
        if (j_1 == 0 && (zx.d(rbx_1) & 0xfffff800) != 0xd800)
            return sub_142a8c220(arg1, rbx_1)
        
        int16_t i_1 = *arg1
        
        if (i_1 != 0)
            void* r11_2 = &arg3[1] - r10
            
            do
                int16_t* rdi_1 = r10
                r11_2 -= 2
                int16_t* rdx_1 = r10
                r10 = &r10[1]
                
                if (i_1 == rbx_1)
                    int16_t* r8 = r10
                    int16_t j = j_1
                    
                    if (j_1 != 0)
                        do
                            int16_t rcx = *r8
                            
                            if (rcx == 0)
                                return nullptr
                            
                            if (rcx != j)
                                goto label_142a8be8c
                            
                            j = *(r11_2 + r8 + 2)
                            r8 = &r8[1]
                        while (j != 0)
                    
                    if (sub_142a8bb00(arg1, rdx_1, r8, 0) != 0)
                        return rdi_1
                
            label_142a8be8c:
                i_1 = *r10
            while (i_1 != 0)
        
        return nullptr

return r10
