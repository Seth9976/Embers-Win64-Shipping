// 函数: sub_140dbb2a0
// 地址: 0x140dbb2a0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t* rbx = arg2[1]
int64_t* rdi = nullptr

if (rbx != 0)
    int32_t rax_1 = rbx[1].d
    
    if (rax_1 == 0)
        rbx = nullptr
    else
        rbx[1].d = rax_1 + 1
        
        if (rbx != 0)
            rdi = *arg2

int64_t* rdx = *(arg1 + 0x38)
int64_t* rax_3 = rdx
void* rcx_2 = &rdx[sx.q(*(arg1 + 0x40)) * 2]

if (rdx != rcx_2)
    do
        if (*rax_3 == rdi)
            int32_t rax_5 = ((rax_3 - rdx) s>> 4).d
            
            if (rax_5 != 0xffffffff)
                sub_140911e80(arg1 + 0x38, rax_5, 1, 1)
            
            break
        
        rax_3 = &rax_3[2]
    while (rax_3 != rcx_2)

void* rax_6 = *(arg1 + 0x1d8)
void* r9 = arg1 + 0x48
uint64_t r10 = sx.q(*(arg1 + 0x1e0))

if (rax_6 != 0)
    r9 = rax_6

void* rcx_4 = r9
void* rdx_2 = r9 + (r10 << 3)

if (r9 != rdx_2)
    do
        if (*rcx_4 == rdi)
            int32_t rcx_6 = ((rcx_4 - r9) s>> 3).d
            
            if (rcx_6 != 0xffffffff)
                int32_t rax_9 = r10.d - rcx_6 - 1
                
                if (rax_9 s>= 1)
                    rax_9 = 1
                
                if (rax_9 != 0)
                    memcpy(r9 + (sx.q(rcx_6) << 3), r9 + (sx.q(r10.d - rax_9) << 3), rax_9 << 3)
                    r10 = zx.q(*(arg1 + 0x1e0))
                
                *(arg1 + 0x1e0) = (r10 - 1).d
                sub_140dbcf70(arg1 + 0x48)
            
            break
        
        rcx_4 += 8
    while (rcx_4 != rdx_2)

sub_140d9cbf0(rdi)
void* const result = j_sub_140a82f30(0x40)

if (result == 0)
    result = nullptr
else
    *(result + 0x10) = 0
    *(result + 0x18) = 0
    *(result + 0x1c) = 1
    __builtin_memset(result + 0x20, 0, 0x20)

rdi[6] = result

if (rbx != 0)
    rbx[1].d -= 1
    
    if (rbx[1].d == 1)
        result = (**rbx)(rbx)
        int32_t temp1_1 = *(rbx + 0xc)
        *(rbx + 0xc) -= 1
        
        if (temp1_1 == 1)
            return (*(*rbx + 8))(rbx, 1)

return result
