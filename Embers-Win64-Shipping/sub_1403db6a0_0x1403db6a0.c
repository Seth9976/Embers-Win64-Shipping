// 函数: sub_1403db6a0
// 地址: 0x1403db6a0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

char* rsi = arg2
char* rcx_6
int64_t rdx_1
int32_t r8_2

if (arg3 != 0xff)
    uint64_t r13_1 = zx.q(*(arg1 + 0x23b))
    int32_t rax
    
    if (r13_1 == 4)
        int32_t i_6 = *(arg1 + 0x1d8)
        
        if (i_6 != 0)
            int32_t r11_6 = 0x10000 & *(arg1 + 0x15c)
            uint32_t r8_6 = r11_6 u>> 0xe
            int32_t r9_7 = r8_6 ^ 4
            char* rdi_6 = *(arg1 + 0x200) + 1
            rax = r9_7
            int32_t rbp_2 = 0x80
            int32_t i
            
            do
                if ((rbp_2 & arg3) != 0)
                    *rsi = ((zx.d(*rdi_6) u>> rax.b & 0xf) << rax.b).b
                        | ((0xf0f u>> (4 - rax.b)).b & *rsi)
                
                bool cond:2_1 = rax == r8_6
                
                if (rax == r8_6)
                    rdi_6 = &rdi_6[1]
                
                if (rax == r8_6)
                    rsi = &rsi[1]
                
                rax += (r11_6 u>> 0xd) - 4
                
                if (cond:2_1)
                    rax = r9_7
                
                int32_t rcx_12 = rbp_2 s>> 1
                
                if (rbp_2 == 1)
                    rcx_12 = 0x80
                
                rbp_2 = rcx_12
                i = i_6
                i_6 -= 1
            while (i != 1)
        
        return 
    
    if (r13_1.b == 2)
        int32_t r9_8 = *(arg1 + 0x15c)
        int32_t i_7 = *(arg1 + 0x1d8)
        int32_t r11_10 = r9_8 & 0x10000
        int32_t r8_7 = 6
        
        if (r11_10 != 0)
            r8_7 = 0
        
        if (i_7 != 0)
            int32_t r9_11 = r9_8 << 0xf s>> 0x1f & 6
            char* rdx_8 = *(arg1 + 0x200) + 1
            rax = r8_7
            int32_t rbp_3 = 0x80
            int32_t i_1
            
            do
                if ((rbp_3 & arg3) != 0)
                    *rsi = ((zx.d(*rdx_8) u>> rax.b & 3) << rax.b).b
                        | ((0x3f3f u>> (6 - rax.b)).b & *rsi)
                
                bool cond:5_1 = rax == r9_11
                
                if (rax == r9_11)
                    rdx_8 = &rdx_8[1]
                
                if (rax == r9_11)
                    rsi = &rsi[1]
                
                rax += (r11_10 u>> 0xe) - 2
                
                if (cond:5_1)
                    rax = r8_7
                
                int32_t rcx_17 = rbp_3 s>> 1
                
                if (rbp_3 == 1)
                    rcx_17 = 0x80
                
                rbp_3 = rcx_17
                i_1 = i_7
                i_7 -= 1
            while (i_1 != 1)
        
        return 
    
    if (r13_1.b == 1)
        int32_t r9_1 = *(arg1 + 0x15c)
        int32_t i_5 = *(arg1 + 0x1d8)
        int32_t r11_2 = r9_1 & 0x10000
        int32_t r8_3 = 7
        
        if (r11_2 != 0)
            r8_3 = 0
        
        if (i_5 != 0)
            int32_t r9_4 = r9_1 << 0xf s>> 0x1f & 7
            char* rdx_3 = *(arg1 + 0x200) + 1
            int32_t rbp_1 = 0x80
            rax = r8_3
            int32_t i_2
            
            do
                if ((rbp_1 & arg3) != 0)
                    *rsi = ((zx.d(*rdx_3) u>> rax.b & 1) << rax.b).b
                        | ((0x7f7f u>> (7 - rax.b)).b & *rsi)
                
                bool cond:7_1 = rax == r9_4
                bool cond:8_1 = rax == r9_4
                bool cond:9_1 = rax == r9_4
                rax += (r11_2 u>> 0xf) - 1
                
                if (cond:7_1)
                    rax = r8_3
                
                if (cond:8_1)
                    rsi = &rsi[1]
                
                if (cond:9_1)
                    rdx_3 = &rdx_3[1]
                
                int32_t rcx_5 = rbp_1 s>> 1
                
                if (rbp_1 == 1)
                    rcx_5 = 0x80
                
                rbp_1 = rcx_5
                i_2 = i_5
                i_5 -= 1
            while (i_2 != 1)
        
        return 
    
    rax = *(arg1 + 0x1d8)
    
    if (rax == 0)
        return 
    
    uint64_t r13_2 = r13_1 u>> 3
    int64_t rdi_13 = *(arg1 + 0x200) + 1
    int32_t rcx_19 = rax & 1
    uint32_t rbx_7 = 0x80
    
    if (rax != 1)
        int32_t i_4 = rcx_19 - rax
        rbx_7 = 0x80
        int32_t i_3
        
        do
            if ((rbx_7 & arg3) != 0)
                memcpy(rsi, rdi_13, r13_2.d)
            
            int64_t rdi_14 = rdi_13 + r13_2
            void* rsi_1 = &rsi[r13_2]
            uint32_t r14_2 = rbx_7 u>> 1
            
            if (rbx_7 == 1)
                r14_2 = 0x80
            
            if ((r14_2 & arg3) != 0)
                memcpy(rsi_1, rdi_14, r13_2.d)
            
            rdi_13 = rdi_14 + r13_2
            rsi = rsi_1 + r13_2
            rbx_7 = r14_2 u>> 1
            
            if (r14_2 == 1)
                rbx_7 = 0x80
            
            i_3 = i_4
            i_4 += 2
        while (i_3 != 0xfffffffe)
    
    if (rcx_19 == 0 || (rbx_7 & arg3) == 0)
        return 
    
    rcx_6 = rsi
    rdx_1 = rdi_13
    r8_2 = r13_2.d
else
    rdx_1 = *(arg1 + 0x200) + 1
    uint64_t r8 = zx.q(*(arg1 + 0x23b))
    uint64_t rax_1 = zx.q(*(arg1 + 0x1d8))
    
    if (r8 u< 8)
        r8_2 = ((rax_1 * r8 + 7) u>> 3).d
    else
        r8_2 = (r8 u>> 3).d * rax_1.d
    
    rcx_6 = rsi

return memcpy(rcx_6, rdx_1, r8_2) __tailcall
