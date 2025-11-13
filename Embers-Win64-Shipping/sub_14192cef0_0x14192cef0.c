// 函数: sub_14192cef0
// 地址: 0x14192cef0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t var_48 = 0
void* r12_1 = arg1 - arg2
bool i = true
int32_t* rdi = arg2 + 0x80
int32_t* rbx = r12_1 - 0x10
void* rbp = r12_1 - 0x20

while (i != 0)
    bool i_1 = false
    uint64_t r14_1 = zx.q(*(rdi + r12_1 - 0x68))
    int64_t j_2 = sx.q(*(rdi + r12_1 - 0x78))
    uint64_t r13_1 = zx.q(*(r12_1 + rdi))
    
    if (*(r12_1 + rdi + 0x30) == rdi[0xc])
        i_1 = i
    
    bool rdx = false
    
    if (*(rdi + r12_1 + 0x1b) == *(rdi + 0x1b))
        rdx = *(r12_1 + rdi + 0x1c) == rdi[7].b & *(r12_1 + rdi + 0x1d) == *(rdi + 0x1d)
    
    bool rcx_1 = false
    uint64_t r9_2 = zx.q(*(r12_1 + rdi - 0x30))
    
    if (*(rdi + r12_1 + 0x18) == rdi[6].w)
        rcx_1 = rdx & *(rdi + r12_1 + 0x1a) == *(rdi + 0x1a)
    
    bool rdx_1 = false
    
    if (*(r12_1 + rdi - 0x58) == rdi[-0x16])
        rdx_1 = rcx_1 & *(r12_1 + rdi - 0x48) == rdi[-0x12]
    
    bool rsi_1 = false
    
    if (j_2.d == rdi[-0x1e])
        rsi_1 = rdx_1 & r14_1.d == rdi[-0x1a]
    
    int32_t rax_8
    rax_8.b = r13_1.d == *rdi
    bool rdx_2 = false
    
    if (*(rdi + rbp) == rdi[-8])
        rdx_2 = *(rbx + rdi) == rdi[-4] & rax_8.b
    
    bool rbp_1 = false
    
    if (*(rdi + r12_1 - 0x40) == rdi[-0x10])
        rbp_1 = rdx_2 & r9_2.d == rdi[-0xc]
    
    if (rbp_1 == 0)
        rbx.b = 0
    else
        rbx.b = memcmp(*(r12_1 + rdi - 0x38), *(rdi - 0x38), zx.q((r9_2 << 2).d)) == 0
        int32_t rax_13
        rax_13.b =
            memcmp(*(r12_1 + rdi - 0x28), *(rdi - 0x28), zx.q(*(r12_1 + rdi - 0x20) << 2)) == 0
        rbx.b &= rax_13.b
        int32_t rax_15
        rax_15.b =
            memcmp(*(r12_1 + rdi - 0x18), *(rdi - 0x18), zx.q(*(r12_1 + rdi - 0x10) << 2)) == 0
        rbx.b &= rax_15.b
        int32_t rax_16
        rax_16.b = memcmp(*(r12_1 + rdi - 8), *(rdi - 8), zx.q((r13_1 << 2).d)) == 0
        rbx.b &= rax_16.b
        rbx.b &= rbp_1
        
        if (rbx.b == 0)
            rbx.b = 0
        else
            uint64_t rax_17 = zx.q(*(r12_1 + rdi + 0x10))
            
            if (rax_17.d != rdi[4])
                rbx.b = 0
            else if (memcmp(*(r12_1 + rdi + 8), *(rdi + 8), zx.q((rax_17 << 2).d)) != 0
                    || rsi_1 == 0)
                rbx.b = 0
            else
                int64_t j_1 = j_2
                rbx.b = memcmp(*(rdi + r12_1 - 0x70), *(rdi - 0x70), zx.q((r14_1 << 2).d)) == 0
                rbx.b &= rsi_1
                
                if (j_2.d s> 0)
                    void* r15_1 = *(rdi + r12_1 - 0x80)
                    int64_t* rsi_2 = *(rdi - 0x80)
                    int32_t* r14_2 = r15_1 + 8
                    void* r15_2 = r15_1 - rsi_2
                    int64_t j
                    
                    do
                        bool cond:11_1 = memcmp(*(rsi_2 + r15_2), *rsi_2, zx.q(*r14_2 << 2)) == 0
                        r14_2 = &r14_2[4]
                        rsi_2 = &rsi_2[2]
                        int32_t rax_20
                        rax_20.b = cond:11_1
                        rbx.b &= rax_20.b
                        j = j_1
                        j_1 -= 1
                    while (j != 1)
                
                int64_t rbp_2 = 0
                
                if (rbx.b != 0)
                    int64_t r14_3 = sx.q(*(r12_1 + rdi - 0x58))
                    int64_t rsi_3 = 0
                    
                    while (rbp_2 s< r14_3)
                        int64_t* rdx_11 = *(rdi - 0x60) + rsi_3
                        int64_t* rcx_9 = rsi_3 + *(r12_1 + rdi - 0x60)
                        uint64_t count
                        
                        if (rcx_9 == rdx_11)
                            count.b = 1
                        else if (rcx_9[2].d != rdx_11[2].d)
                            count.b = 0
                        else
                            count = sx.q(rcx_9[1].d)
                            
                            if (count.d != rdx_11[1].d)
                                count.b = 0
                            else if (memcmp(*rcx_9, *rdx_11, count).d == 0)
                                count.b = 1
                            else
                                count.b = 0
                        
                        rbp_2 += 1
                        rsi_3 += 0x18
                        rbx.b &= count.b
                        
                        if (rbx.b == 0)
                            break
                
                int64_t rbp_3 = 0
                
                if (rbx.b != 0)
                    int64_t r14_4 = sx.q(*(r12_1 + rdi - 0x48))
                    int64_t rsi_4 = 0
                    
                    while (rbp_3 s< r14_4)
                        int64_t* rdx_14 = *(rdi - 0x50) + rsi_4
                        int64_t* rcx_11 = rsi_4 + *(r12_1 + rdi - 0x50)
                        uint64_t count_1
                        
                        if (rcx_11 == rdx_14)
                            count_1.b = 1
                        else if (rcx_11[2].d != rdx_14[2].d)
                            count_1.b = 0
                        else
                            count_1 = sx.q(rcx_11[1].d)
                            
                            if (count_1.d != rdx_14[1].d)
                                count_1.b = 0
                            else if (memcmp(*rcx_11, *rdx_14, count_1).d == 0)
                                count_1.b = 1
                            else
                                count_1.b = 0
                        
                        rbp_3 += 1
                        rsi_4 += 0x18
                        rbx.b &= count_1.b
                        
                        if (rbx.b == 0)
                            break
    
    rbp = r12_1 - 0x20
    int64_t rcx_14 = var_48 + 1
    i = i_1 & rbx.b
    var_48 = rcx_14
    rdi = &rdi[0x2e]
    rbx = r12_1 - 0x10
    
    if (rcx_14 s>= 6)
        break

return i
