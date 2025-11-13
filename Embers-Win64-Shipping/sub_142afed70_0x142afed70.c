// 函数: sub_142afed70
// 地址: 0x142afed70
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void* rdi = *(arg1 + 8)
int64_t i = 0
uint64_t r8 = *(arg1 + 0x10)
int64_t r13 = *(arg1 + 0x18)
int128_t* rsi = *(arg1 + 0x30)
int32_t r15 = 0
int32_t rbx = *(rdi + 0x4c)

if (r8 u>= r13)
label_142afeedf:
    uint128_t zmm1 = _mm_shuffle_epi32(zx.o(r15), 0)
    
    if (rsi != 0 && r15 != 0)
        uint64_t rcx_9 = (*(arg1 + 0x30) - rsi + 3) u>> 2
        
        if (rsi u> *(arg1 + 0x30))
            rcx_9 = 0
        
        if (rcx_9 != 0)
            if (rcx_9 u>= 8)
                do
                    i += 8
                    *rsi = _mm_add_epi32(*rsi, zmm1)
                    rsi[1] = _mm_add_epi32(rsi[1], zmm1)
                    rsi = &rsi[2]
                while (i u< (rcx_9 & 0xfffffffffffffff8))
            
            for (; i u< rcx_9; i += 1)
                *rsi += r15
                rsi += 4
    
    *(arg1 + 0x10) = r8
    
    if (r8 == r13 && *(arg1 + 2) != 0)
        if (rbx == 8)
            sub_142aff470(arg1, arg2)
        else if (rbx == 9)
            sub_142affed0(arg1, arg2)
    
    *(rdi + 0x4c) = rbx
else
    while (true)
        if (*arg2 s> 0)
            goto label_142afeedf
        
        if (rbx == 0)
            rbx = 1
            *(rdi + 0x41) = *r8
            r8 += 1
            *(rdi + 0x40) = 1
        else if (rbx == 1)
            uint64_t rax = zx.q(*(rdi + 0x41))
            char rdx_2 = *r8
            
            if (rax.b != 0xfe || rdx_2 != 0xff)
                if (rax.b == 0xff && rdx_2 == 0xfe)
                    rbx = 6
                    
                    if (*(rdi + 0x30) != &data_143664a20)
                        rbx = 9
                    
                    goto label_142afee60
                
                if (sub_142b00510(rdi) != 0 && ((*(rdi + 0x38)).b & 0xf) == 1)
                    rbx = 6
                label_142afef8c:
                    *(rdi + 0x42) = rdx_2
                    *(rdi + 0x40) = 2
                    *(arg1 + 0x10) = r8 + 1
                    *(rdi + 0x4c) = rbx + 2
                    *arg2 = 0x12
                    break
                
            label_142afee9c:
                rax = *(arg1 + 0x10)
                
                if (r8 != rax)
                    r8 = rax
                    *(rdi + 0x40) = 0
                
                int32_t rbx_2
                rbx_2.b = *(rdi + 0x30) == &data_143664b50
                rbx = rbx_2 + 8
                *(rdi + 0x4c) = rbx
            else
                int32_t rbx_1
                rbx_1.b = *(rdi + 0x30) != &data_143664b50
                rbx = rbx_1 + 7
            label_142afee60:
                
                if (rbx s< 8)
                    if (rbx s>= 6)
                        goto label_142afef8c
                    
                    goto label_142afee9c
                
                r8 += 1
                *(rdi + 0x40) = 0
                r15 = r8.d - *(arg1 + 0x10)
                *(rdi + 0x4c) = rbx
        else if (rbx == 8)
            *(arg1 + 0x10) = r8
            sub_142aff470(arg1, arg2)
            r8 = *(arg1 + 0x10)
        else if (rbx == 9)
            *(arg1 + 0x10) = r8
            sub_142affed0(arg1, arg2)
            r8 = *(arg1 + 0x10)
        
        if (r8 u>= r13)
            goto label_142afeedf
