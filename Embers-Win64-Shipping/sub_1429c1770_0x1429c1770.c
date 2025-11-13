// 函数: sub_1429c1770
// 地址: 0x1429c1770
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void var_98
int64_t rax_1 = __security_cookie ^ &var_98
int32_t rcx = 0x40

for (int64_t* i = 0x18; i s<= 0x1e8; i = &i[1])
    int64_t rax_2 = *(arg2 + i - 0x18)
    int64_t rax_3
    
    if (rax_2 == -1)
        rax_3 = -1
    else
        rax_3 = rax_2 << rcx.b
    
    *(i + arg1) = rax_3
    rcx -= 1

int32_t rcx_1 = 0x40
void* r8 = arg1 + 0x1f0
int64_t i_2 = 0x3b
int64_t i_1

do
    int64_t rax_4 = *(arg3 - arg1 + r8 - 0x1f0)
    int64_t rdx = *(r8 - 0x1d8)
    r8 += 8
    uint64_t rdx_1 = rdx u>> rcx_1.b
    rcx_1 -= 1
    *(r8 - 8) = rax_4 - rdx_1
    i_1 = i_2
    i_2 -= 1
while (i_1 != 1)
int32_t* r11_2 = arg1 + 0x3c8

do
    *r11_2 = 0xffff
    *(arg1 + i_2 + 0x43c8) = 0
    uint32_t rax_6 = zx.d(*(arg1 + 8))
    uint32_t rcx_2 = zx.d(*(arg1 + 9))
    int64_t rdx_3 = i_2 << 0x34
    
    if (rax_6 u<= rcx_2)
        do
            int64_t r8_1 = sx.q(rax_6)
            
            if (*(arg1 + (r8_1 << 3) + 0x18) u<= rdx_3)
                *(arg1 + i_2 + 0x43c8) = rax_6.b
                int64_t rdx_5 = (rdx_3 u>> (0x40 - rax_6.b)) + *(arg1 + (r8_1 << 3) + 0x1f0)
                
                if (rdx_5 u< sx.q(*(arg1 + 4)))
                    *r11_2 = *(*(arg1 + 0x10) + (rdx_5 << 2))
                    break
                
                struct std::exception::Iex_2_3::BaseExc::VTable* exceptionObject
                sub_14297ab20(&exceptionObject, "Huffman decode error (Overrun).")
                _CxxThrowException(&exceptionObject, &data_1439465c8)
                noreturn
            
            rax_6 += 1
        while (rax_6 s<= rcx_2)
    
    i_2 += 1
    r11_2 = &r11_2[1]
while (i_2 u< 0x1000)

int32_t rcx_5 = 0xc
void* rax_9 = arg1 + 0x70
int64_t rdx_6 = 0xc

while (*(rax_9 + 8) == -1)
    if (*rax_9 != -1)
        rcx_5 -= 1
        break
    
    if (*(rax_9 - 8) != -1)
        rcx_5 -= 2
        break
    
    if (*(rax_9 - 0x10) != -1)
        rcx_5 -= 3
        break
    
    if (*(rax_9 - 0x18) != -1)
        rcx_5 -= 4
        break
    
    if (*(rax_9 - 0x20) != -1)
        rcx_5 -= 5
        break
    
    rdx_6 -= 6
    rax_9 -= 0x30
    rcx_5 -= 6
    
    if (rdx_6 s<= 0)
        break

if (rcx_5 s< 0)
    *(arg1 + 0x53c8) = -1
    __security_check_cookie(rax_1 ^ &var_98)
    return rax_9

int64_t rax_10 = sx.q(rcx_5)
*(arg1 + 0x53c8) = *(arg1 + (rax_10 << 3) + 0x18)
__security_check_cookie(rax_1 ^ &var_98)
return rax_10
