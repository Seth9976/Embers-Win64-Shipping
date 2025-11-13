// 函数: sub_1406a9bf0
// 地址: 0x1406a9bf0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

uint32_t rsi = zx.d(arg3)
int32_t rbx

if ((*(arg1 + 0x10) & 0x100) == 0)
    rbx = zx.d(arg2)
else
    rbx = sx.d(std::ctype<char>::tolower(*(*(arg1 + 0x18) + 8)))
    rsi = sx.d(std::ctype<char>::tolower(*(*(arg1 + 0x18) + 8)).b)

void* rbp = *(arg1 + 8)

while (rbx u<= rsi)
    if (rsi u>= *(arg1 + 0x20))
        if (rsi u>= rbx)
            if (rsi - rbx u>= *(arg1 + 0x24))
                int64_t* rdi_1 = *(rbp + 0x38)
                
                if (rdi_1 == 0)
                    int64_t* rax_6 = j_sub_140a82f30(zx.q((&rdi_1[2]).d))
                    rdi_1 = rax_6
                    
                    if (rax_6 == 0)
                        rdi_1 = nullptr
                    else
                        *rax_6 = 0
                        rax_6[1] = 0
                    
                    *(rbp + 0x38) = rdi_1
                
                int32_t rax_8 = *(rdi_1 + 4)
                
                if (*rdi_1 u<= rax_8)
                    int32_t r14_1 = rax_8 + 0x10
                    int64_t rax_7 = realloc(rdi_1[1], zx.q(r14_1))
                    
                    if (rax_7 == 0)
                        std::_Xbad_alloc()
                        noreturn
                    
                    rdi_1[1] = rax_7
                    rax_8 = *(rdi_1 + 4)
                    *rdi_1 = r14_1
                
                zx.q(rax_8)[rdi_1[1]] = rbx.b
                *(rdi_1 + 4) += 1
                int32_t* rbx_1 = *(rbp + 0x38)
                int32_t rax_10 = rbx_1[1]
                
                if (*rbx_1 u<= rax_10)
                    int32_t rdi_2 = rax_10 + 0x10
                    int64_t rax_11 = realloc(*(rbx_1 + 8), zx.q(rdi_2))
                    
                    if (rax_11 == 0)
                        std::_Xbad_alloc()
                        noreturn
                    
                    *(rbx_1 + 8) = rax_11
                    rax_10 = rbx_1[1]
                    *rbx_1 = rdi_2
                
                zx.q(rax_10)[*(rbx_1 + 8)] = rsi.b
                rbx_1[1] += 1
            else
                do
                    sub_1406a9710(arg1, rbx.b)
                    rbx += 1
                while (rbx u<= rsi)
        
        break
    
    int64_t rcx_4 = *(rbp + 0x28)
    
    if (rcx_4 == 0)
        int64_t rax_2 = j_sub_140a82f30(0x20)
        rcx_4 = rax_2
        
        if (rax_2 == 0)
            rcx_4 = 0
        else
            __builtin_memset(rax_2, 0, 0x20)
        
        *(rbp + 0x28) = rcx_4
    
    uint64_t rax = zx.q(rbx) & 7
    char* rdx_2 = (zx.q(rbx) u>> 3) + rcx_4
    rbx += 1
    *rdx_2 |= (1 << (rax.d u% 0x20)).b
