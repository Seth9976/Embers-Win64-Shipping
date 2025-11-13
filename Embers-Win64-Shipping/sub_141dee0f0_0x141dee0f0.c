// 函数: sub_141dee0f0
// 地址: 0x141dee0f0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t rdi = arg2
bool cond:0 = *(arg1 + 0x3f4) == 0
*(arg1 + 0x3f0) = 0

if (not(cond:0))
    sub_1405c5570(arg1 + 0x3e8, 0)

bool cond:1 = *(arg1 + 0x404) == 0
*(arg1 + 0x400) = 0

if (not(cond:1))
    sub_1405c5570(arg1 + 0x3f8, 0)

bool cond:2 = *(arg1 + 0x424) == 0
*(arg1 + 0x420) = 0

if (not(cond:2))
    sub_1405c5570(arg1 + 0x418, 0)

int32_t i = 0

if (*(arg1 + 0x3c0) s> 0)
    int64_t* rcx_3 = nullptr
    int64_t* arg_8 = nullptr
    
    do
        void* rsi_1 = *(rcx_3 + *(arg1 + 0x3b8))
        void* rax_2 = sub_142468460()
        void* rax_3
        int64_t rcx_4
        
        if (rax_2 != 0)
            rcx_4 = sx.q(*(rax_2 + 0x38))
            rax_3 = *(rsi_1 + 0x78)
        
        if (rax_2 == 0 || rcx_4.d s> *(rax_3 + 0x38)
                || *(*(rax_3 + 0x30) + (rcx_4 << 3)) != rax_2 + 0x30)
            void* rax_8 = sub_142468400()
            void* rax_9
            int64_t rcx_5
            
            if (rax_8 != 0)
                rcx_5 = sx.q(*(rax_8 + 0x38))
                rax_9 = *(rsi_1 + 0x78)
            
            if (rax_8 == 0 || rcx_5.d s> *(rax_9 + 0x38)
                    || *(*(rax_9 + 0x30) + (rcx_5 << 3)) != rax_8 + 0x30)
                void* rax_11 = sub_142468160()
                
                if (rax_11 != 0)
                    int64_t rcx_11 = sx.q(*(rax_11 + 0x38))
                    void* rax_12 = *(rsi_1 + 0x78)
                    
                    if (rcx_11.d s<= *(rax_12 + 0x38)
                            && *(*(rax_12 + 0x30) + (rcx_11 << 3)) == rax_11 + 0x30)
                        int64_t* rbx_2 = sx.q(*(rsi_1 + 0x4c)) + rdi
                        
                        if ((*(*rbx_2 + 0x50))(rbx_2) != 0)
                            int64_t rdi_1 = sx.q(*(arg1 + 0x400))
                            int32_t rax_16 = (rdi_1 + 1).d
                            *(arg1 + 0x400) = rax_16
                            
                            if (rax_16 s> *(arg1 + 0x404))
                                sub_1405a4d70(arg1 + 0x3f8)
                            
                            *(*(arg1 + 0x3f8) + (rdi_1 << 3)) = rsi_1
                        
                        if ((*(*rbx_2 + 0x40))(rbx_2) != 0)
                            int64_t rdi_2 = sx.q(*(arg1 + 0x3f0))
                            int32_t rax_20 = (rdi_2 + 1).d
                            *(arg1 + 0x3f0) = rax_20
                            
                            if (rax_20 s> *(arg1 + 0x3f4))
                                sub_1405a4d70(arg1 + 0x3e8)
                            
                            *(*(arg1 + 0x3e8) + (rdi_2 << 3)) = rsi_1
                        
                        if ((*(*rbx_2 + 0x80))(rbx_2) != 0)
                            int64_t rbx_3 = sx.q(*(arg1 + 0x420))
                            int32_t rax_24 = (rbx_3 + 1).d
                            *(arg1 + 0x420) = rax_24
                            
                            if (rax_24 s> *(arg1 + 0x424))
                                sub_1405a4d70(arg1 + 0x418)
                            
                            *(*(arg1 + 0x418) + (rbx_3 << 3)) = rsi_1
                        
                        rdi = arg2
            else
                int64_t* j = *(arg1 + 0x3a8)
                int64_t r11_1 = sx.q(*(rsi_1 + 0x4c))
                
                for (void* rdx_5 = sx.q(*(arg1 + 0x3b0)) * 0x68 + j; j != rdx_5; j = &j[0xd])
                    if (*j == *(r11_1 + rdi + 0x18))
                        int32_t k = 0
                        
                        if (j[4].d s> 0)
                            void** r8_2 = nullptr
                            int32_t* r9_1 = nullptr
                            
                            do
                                if (*(r8_2 + j[3]) == *(r11_1 + rdi + 0x10))
                                    *(r9_1 + j[5]) = i
                                    *(r8_2 + j[8]) = rsi_1
                                
                                k += 1
                                r9_1 = &r9_1[1]
                                r8_2 = &r8_2[1]
                            while (k s< j[4].d)
                        
                        break
        else
            int64_t* j_1 = *(arg1 + 0x3a8)
            int64_t r8_1 = sx.q(*(rsi_1 + 0x4c))
            
            for (void* rdx_2 = sx.q(*(arg1 + 0x3b0)) * 0x68 + j_1; j_1 != rdx_2; j_1 = &j_1[0xd])
                if (*j_1 == *(r8_1 + rdi + 0x20))
                    j_1[1] = *(r8_1 + rdi + 0x28)
                    j_1[2].d = i
                    j_1[7] = rsi_1
                    break
        
        i += 1
        rcx_3 = &arg_8[1]
        arg_8 = rcx_3
    while (i s< *(arg1 + 0x3c0))

void* i_1 = *(arg1 + 0x3a8)
int64_t result = sx.q(*(arg1 + 0x3b0))

for (void* rdx_12 = result * 0x68 + i_1; i_1 != rdx_12; i_1 += 0x68)
    result = *(i_1 + 0x38)
    
    if (result != 0)
        result = sx.q(*(result + 0x4c))
        
        if (*(result + rdi + 0x10) != 0xffffffff)
            *(i_1 + 0x60) = 1

return result
