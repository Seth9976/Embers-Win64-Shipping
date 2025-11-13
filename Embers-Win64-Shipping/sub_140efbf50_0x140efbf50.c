// 函数: sub_140efbf50
// 地址: 0x140efbf50
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

TEB* gsbase
uint64_t result = zx.q(*(0x14 + *(gsbase->ThreadLocalStoragePointer + (zx.q(data_14401b1a0) << 3))))

if (data_143e2a1a4 s> result.d)
    result = _Init_thread_header(&data_143e2a1a4)
    
    if (data_143e2a1a4 == 0xffffffff)
        sub_1405947f0(&data_1439b3998, 6)
        int32_t rax_7 = data_1439b39a0 + 6
        bool cond:1_1 = rax_7 s<= data_1439b39a4
        data_1439b39a0 = rax_7
        
        if (not(cond:1_1))
            sub_140594770(&data_1439b3998)
        
        sub_1405a7220(data_1439b3998, 6, "&amp;", 6, 0x3f)
        data_1439b39b0 = 0
        data_1439b39a8 = 0x22
        data_1439b39b8 = 0
        sub_1405947f0(&data_1439b39b0, 7)
        int32_t rax_8 = data_1439b39b8.d + 7
        bool cond:2_1 = rax_8 s<= data_1439b39b8:4.d
        data_1439b39b8.d = rax_8
        
        if (not(cond:2_1))
            sub_140594770(&data_1439b39b0)
        
        sub_1405a7220(data_1439b39b0, 7, "&quot;", 7, 0x3f)
        data_1439b39c8 = 0
        data_1439b39c0 = 0x3c
        data_1439b39d0 = 0
        sub_1405947f0(&data_1439b39c8, 5)
        int32_t rax_9 = data_1439b39d0.d + 5
        bool cond:3_1 = rax_9 s<= data_1439b39d0:4.d
        data_1439b39d0.d = rax_9
        
        if (not(cond:3_1))
            sub_140594770(&data_1439b39c8)
        
        sub_1405a7220(data_1439b39c8, 5, "&lt;", 5, 0x3f)
        data_1439b39e0 = 0
        data_1439b39d8 = 0x3e
        data_1439b39e8 = 0
        sub_1405947f0(&data_1439b39e0, 5)
        int32_t rax_10 = data_1439b39e8.d + 5
        bool cond:5_1 = rax_10 s<= data_1439b39e8:4.d
        data_1439b39e8.d = rax_10
        
        if (not(cond:5_1))
            sub_140594770(&data_1439b39e0)
        
        sub_1405a7220(data_1439b39e0, 5, "&gt;", 5, 0x3f)
        atexit(sub_142ccb690)
        result = _Init_thread_footer(&data_143e2a1a4)

int32_t rbx = arg1[1].d
int32_t r8_1 = 0
int16_t* r9 = nullptr
int32_t r11 = rbx - 1

if (rbx == 0)
    r11 = 0

int32_t rdx_1 = r11

while (r8_1 s< r11)
    result = &data_1439b3990
    
    while (true)
        if (*(r9 + *arg1) == *result)
            int32_t rcx_1 = *(result + 0x10)
            int32_t rdx_3 = rdx_1 - 1 + rcx_1
            
            if (rcx_1 == 0)
                rdx_3 = rdx_1
            
            r8_1 += 1
            rdx_1 = rdx_3 - 1
            r9 = &r9[1]
            break
        
        result += 0x18
        
        if (result == &data_1439b39f0)
            r8_1 += 1
            r9 = &r9[1]
            break

if (rdx_1 != r11)
    if (rdx_1 + 1 s> *(arg1 + 0xc))
        result = sub_1405947f0(arg1, rdx_1 + 1)
        rbx = arg1[1].d
    
    int32_t rsi_1 = rbx - 2
    
    if (rbx == 0)
        rsi_1 = -1
    
    if (rsi_1 s>= 0)
        int64_t rbp_1 = sx.q(rsi_1) * 2
        int64_t r15_1 = rbp_1
        int32_t temp0_1
        
        do
            void* r9_1 = *arg1
            int16_t* i = &data_1439b3990
            result = zx.q(*(r9_1 + rbp_1))
            
            do
                if (result.w == *i)
                    int32_t rcx_3 = arg1[1].d
                    int32_t rdi_1 = rcx_3 - 1
                    
                    if (rcx_3 == 0)
                        rdi_1 = 0
                    
                    int32_t rdi_2 = rdi_1 - rsi_1
                    
                    if (rdi_2 s> 1)
                        rdi_2 = 1
                    
                    if (rdi_2 != 0)
                        int32_t rax_4 = rcx_3 - rdi_2
                        
                        if (rax_4 != rsi_1)
                            memmove(r9_1 + r15_1, r9_1 + (sx.q(rdi_2 + rsi_1) << 1), 
                                (rax_4 - rsi_1) * 2)
                            rcx_3 = arg1[1].d
                        
                        rcx_3 -= rdi_2
                        arg1[1].d = rcx_3
                    
                    int32_t r9_2 = *(i + 0x10)
                    result = zx.q(r9_2 - 1)
                    int32_t r8_4 = r9_2 - 1
                    
                    if (r9_2 == 0)
                        result = 0
                    
                    if (r9_2 == 0)
                        r8_4 = -1
                    
                    if (result.d != 0)
                        int64_t rdx_6 = *(i + 8)
                        
                        if (rcx_3 != 0)
                            if (r9_2 == 0)
                                r8_4 = 0
                            
                            result = sub_140ab3a50(arg1, rdx_6, r8_4, rsi_1)
                        else
                            if (r9_2 == 0)
                                r8_4 = 0
                            
                            result = sub_140a20ba0(arg1, rdx_6, r8_4)
                    
                    break
                
                i = &i[0xc]
            while (i != &data_1439b39f0)
            
            r15_1 -= 2
            rbp_1 -= 2
            temp0_1 = rsi_1
            rsi_1 -= 1
        while (temp0_1 - 1 s>= 0)

return result
