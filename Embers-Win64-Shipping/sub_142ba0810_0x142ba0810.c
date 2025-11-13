// 函数: sub_142ba0810
// 地址: 0x142ba0810
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t r9 = sx.q(arg3)
void* r13_1 = r9 * 0x898 + arg1
int16_t* rsi = *(r13_1 + 0x50)
void* r14_1 = r9 * 0x1c58 + arg2
int32_t temp0
int32_t temp1
temp0:temp1 = mulu.dp.d(0xcccccccd, *(arg2 + 0x38))
int32_t r12 = *(r14_1 + 0x3c)
void* rbx = &rsi[sx.q(*(r13_1 + 0x48)) * 0x24]
int32_t result = sub_142b93e80(temp0 u>> 5, r12)

if (result s> 0x20)
    result = 0x20

int32_t result_1 = result

if (rsi u< rbx)
    void* rcx_3 = rbx
    
    do
        void* rbp_1 = nullptr
        int32_t i = 0
        int32_t result_2 = result
        
        if (*(r14_1 + 0x114) u> 0)
            do
                void* r8_1 = r14_1 + 0x118 + zx.q(i) * 0x1c
                int32_t rax_3 = *(r8_1 + 0x18)
                
                if ((rax_3.b & 1) != 0)
                    int32_t rcx_5
                    rcx_5.b = sx.d(*(rsi + 0xd)) == *(r13_1 + 0x58)
                    
                    if (rcx_5.b != ((rax_3 u>> 1).b & 1))
                        int32_t rax_5 = sx.d(*rsi)
                        int32_t rcx_6 = *r8_1
                        int32_t rcx_7
                        
                        if (rax_5 - rcx_6 s>= 0)
                            rcx_7 = rax_5 - rcx_6
                        else
                            rcx_7 = rcx_6 - rax_5
                        
                        int32_t rdx_4 = *(r8_1 + 0xc)
                        void* rdi_1 = r8_1 + 0xc
                        int32_t rdx_5
                        
                        if (rax_5 - rdx_4 s>= 0)
                            rdx_5 = rax_5 - rdx_4
                        else
                            rdx_5 = rdx_4 - rax_5
                        
                        if (rcx_7 s<= rdx_5)
                            rdi_1 = r8_1
                        
                        int32_t temp4_1
                        int32_t temp5_1
                        temp4_1:temp5_1 = sx.q(rax_5 - *rdi_1)
                        int32_t result_3 = sub_142b93e80((temp5_1 ^ temp4_1) - temp4_1, r12)
                        
                        if (result_3 s< result_2)
                            result_2 = result_3
                            rbp_1 = rdi_1
                
                i += 1
            while (i u< *(r14_1 + 0x114))
            
            result = result_1
            rcx_3 = rbx
            
            if (rbp_1 != 0)
                *(rsi + 0x18) = rbp_1
        
        rsi = &rsi[0x24]
    while (rsi u< rcx_3)

return result
