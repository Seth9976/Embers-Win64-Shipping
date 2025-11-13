// 函数: sub_142af0ee0
// 地址: 0x142af0ee0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int32_t* r9 = *(arg1 + 8)
int64_t rdx = 0x7000000
void* rsi = *(*(arg1 + 0x10) + 0x20)

if (*r9 s> 0)
    rdx = 0

sub_142aeb330(rsi, rdx, arg2, r9)
int32_t rax_1 = *(rsi + 8)
int32_t rbx = 0

if (rax_1 s> 0)
    int32_t* rdi_1 = nullptr
    
    do
        int32_t rdx_1
        
        if (rbx s< 0 || rbx s>= rax_1)
            rdx_1 = 0
        else
            rdx_1 = *(rdi_1 + *(rsi + 0x18))
        
        int32_t rdx_2 = rdx_1 & 0xffffff
        uint64_t rcx_2 = zx.q(rdx_1 u>> 0x18)
        
        if (rcx_2.d u<= 0x24 && test_bit(0x10b004a040, rcx_2) && rdx_2 s> arg2)
            int32_t rcx_3
            
            if (**(arg1 + 8) s<= 0)
                if (rdx_2 + 1 u> 0xffffff)
                    abort()
                    noreturn
                
                rcx_3 = rcx_2.d << 0x18 | (rdx_2 + 1)
            else
                rcx_3 = 0
            
            sub_142aeb3c0(rsi, sx.q(rcx_3), rbx)
        
        rax_1 = *(rsi + 8)
        rbx += 1
        rdi_1 = &rdi_1[2]
    while (rbx s< rax_1)

int32_t i = 0

if (*(arg1 + 0x180) s> 0)
    int32_t* rdi_2 = nullptr
    
    do
        int32_t rax_4
        
        if (i s>= 0)
            rax_4 = *(arg1 + 0x180)
        
        int32_t rdx_5
        
        if (i s< 0 || rax_4 s<= 0 || rax_4 - i s<= 0)
            rdx_5 = 0
        else
            rdx_5 = *(rdi_2 + *(arg1 + 0x190))
        
        if (rdx_5 s> arg2)
            sub_142ae7f70(arg1 + 0x178, rdx_5 + 1, i)
        
        i += 1
        rdi_2 = &rdi_2[1]
    while (i s< *(arg1 + 0x180))

int32_t rax_7 = *(arg1 + 0x19c)

if (rax_7 s> arg2)
    *(arg1 + 0x19c) = rax_7 + 1

int32_t result = *(arg1 + 0x198)

if (result s> arg2)
    result += 1
    *(arg1 + 0x198) = result

return result
