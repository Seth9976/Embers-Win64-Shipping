// 函数: sub_14278e700
// 地址: 0x14278e700
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t rbp = 0
*(arg1 + 0x6b4) = data_143dbb1f8.q
int32_t rsi = 0
int32_t rax = data_143dbb200
*(arg1 + 0x6bc) = rax
*(arg1 + 0x6a8) = *(arg1 + 0x6b4)
*(arg1 + 0x6b0) = rax
*(arg1 + 0x6c0) = 0
int64_t* r15 = *(arg1 + 0x4a0)
int32_t arg_8 = 0
int64_t* rdi

if (r15 == 0)
    void* rax_1 = *(arg1 + 0x520)
    rdi = *(rax_1 + 0xc8)
    
    if (rdi != 0)
        rdi[1].d += 1
    
    r15 = *(rax_1 + 0xc0) + 0x290
    rsi = 1
else
    rdi = arg_8.q

if ((rsi.b & 1) != 0)
    rsi &= 0xfffffffe
    
    if (rdi != 0)
        rdi[1].d -= 1
        
        if (rdi[1].d == 1)
            (**rdi)(rdi)
            int32_t rax_4 = *(rdi + 0xc)
            *(rdi + 0xc) -= 1
            
            if (rax_4 == 1)
                (*(*rdi + 8))(rdi, 1)

void* r13 = *(arg1 + 0x498)
int64_t* rdi_1

if (r13 == 0)
    void* rax_6 = *(arg1 + 0x520)
    rsi |= 2
    rdi_1 = *(rax_6 + 0xc8)
    
    if (rdi_1 != 0)
        rdi_1[1].d += 1
    
    r13 = *(rax_6 + 0xc0) + 0x278
else
    rdi_1 = arg_8.q

if ((rsi.b & 2) != 0 && rdi_1 != 0)
    rdi_1[1].d -= 1
    
    if (rdi_1[1].d == 1)
        (**rdi_1)(rdi_1)
        int32_t rax_9 = *(rdi_1 + 0xc)
        *(rdi_1 + 0xc) -= 1
        
        if (rax_9 == 1)
            (*(*rdi_1 + 8))(rdi_1, 1)

uint64_t result = (*(*r15 + 0x48))(r15)
int64_t r12 = sx.q(result.d)

if (result.d s> 0)
    int64_t rdi_2 = 0
    
    do
        void* rax_13 = *(arg1 + 0x520)
        int64_t* rsi_1 = *(rax_13 + 0xc8)
        
        if (rsi_1 != 0)
            rsi_1[1].d += 1
        
        result = *(*(rax_13 + 0xc0) + 0x130)
        int32_t r14_1 = *(result + (sx.q(*(*(r13 + 8) + (rbp << 2))) << 2))
        
        if (rsi_1 != 0)
            result = zx.q(rsi_1[1].d)
            rsi_1[1].d -= 1
            
            if (result.d == 1)
                (**rsi_1)(rsi_1)
                result = zx.q(*(rsi_1 + 0xc))
                *(rsi_1 + 0xc) -= 1
                
                if (result.d == 1)
                    result = (*(*rsi_1 + 8))(rsi_1, 1)
        
        if (r14_1 != 0xffffffff)
            result = r15[1]
            
            if (*(arg1 + 0x6c0) == 0)
                if (*(rdi_2 + result + 0x18) != 0)
                    *(arg1 + 0x6a8) = *(rdi_2 + result)
                    *(arg1 + 0x6b8) = *(rdi_2 + result + 0x10)
                    result = zx.q(*(rdi_2 + result + 0x18))
                    *(arg1 + 0x6c0) = result.d
            else if (*(rdi_2 + result + 0x18) != 0)
                *(arg1 + 0x6a8) = __minss_xmmss_memss((*(rdi_2 + result)).d, *(arg1 + 0x6a8)).d
                *(arg1 + 0x6ac) =
                    __minss_xmmss_memss((*(rdi_2 + result + 4)).d, *(arg1 + 0x6ac)).q.d
                *(arg1 + 0x6b0) = __minss_xmmss_memss((*(rdi_2 + result + 8)).d, *(arg1 + 0x6b0)).d
                *(arg1 + 0x6b4) =
                    __maxss_xmmss_memss((*(rdi_2 + result + 0xc)).d, *(arg1 + 0x6b4)).q.d
                *(arg1 + 0x6b8) =
                    __maxss_xmmss_memss((*(rdi_2 + result + 0x10)).d, *(arg1 + 0x6b8)).d
                *(arg1 + 0x6bc) =
                    __maxss_xmmss_memss((*(rdi_2 + result + 0x14)).d, *(arg1 + 0x6bc)).q.d
        
        rbp += 1
        rdi_2 += 0x1c
    while (rbp s< r12)

return result
