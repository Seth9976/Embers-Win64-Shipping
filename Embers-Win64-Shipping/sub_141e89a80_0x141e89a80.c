// 函数: sub_141e89a80
// 地址: 0x141e89a80
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

EnterCriticalSection(arg1 + 0x48)
void* r15 = *(arg1 + 0x18)
int64_t r15_1

if (r15 != 0)
    r15_1 = *(r15 + 0x38)

int64_t result

if (r15 == 0 || r15_1 == 0)
    result = 0
else
    int128_t* rdi_1 = *(arg1 + 0x20)
    result = 0
    
    if (rdi_1 != r15_1)
        while (result u< arg2)
            int32_t rax_1 = 0
            
            if (0 == *(rdi_1 + 0x48))
                *(rdi_1 + 0x48) = 0
            else
                rax_1 = *(rdi_1 + 0x48)
            
            if (rax_1 s<= 0)
                bool z_1
                
                if (0 == *(rdi_1 + 0x44))
                    *(rdi_1 + 0x44) = 0
                    z_1 = true
                else
                    *(rdi_1 + 0x44)
                    z_1 = false
                
                if (not(z_1))
                    int64_t rax_3 = sx.q(rdi_1[2].d)
                    result += rax_3
                    *(arg1 + 0x30)
                    *(arg1 + 0x30) += neg.q(rax_3)
                    rdi_1[2].d = 0
                    
                    if (*(rdi_1 + 0x24) != 0)
                        sub_1405c5510(rdi_1 + 0x18, 0)
                    
                    int64_t var_30_1 = 0
                    int32_t var_24_1 = 0
                    *rdi_1 = 0.o
                    *(rdi_1 + 0x28) = 0
                    rdi_1[1].q = 0xffffffff.q
            
            rdi_1 = rdi_1[3].q
            
            if (rdi_1 == r15_1)
                break

if (arg1 != -0x48)
    LeaveCriticalSection(arg1 + 0x48)

return result
