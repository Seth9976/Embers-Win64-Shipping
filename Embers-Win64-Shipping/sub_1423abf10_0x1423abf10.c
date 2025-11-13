// 函数: sub_1423abf10
// 地址: 0x1423abf10
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void* rdx = *(arg1 + 0x80)
void* rbx = arg1 + 0x10
int64_t rdi = sx.q(*(arg1 + 0x88))

if (rdx != 0)
    rbx = rdx

void* rsi = rbx + (rdi << 3)

if (rbx != rsi)
    do
        int64_t* rcx = *rbx
        
        if (rcx != 0 && *(rcx + 0x61) == 0)
            if (*(rcx + 0x63) == 0)
                *(rcx + 0x63) = 1
                rcx[0xc].b = 1
                
                if (*(rcx + 0x61) == 0)
                    (*(*rcx + 0x10))()
            
            int64_t* rcx_1 = *rbx
            
            if (*(rcx_1 + 0x61) == 0)
                int512_t zmm1
                zmm1.o = zx.o(0)
                (*(*rcx_1 + 8))(rcx_1, zmm1)
        
        rbx += 8
    while (rbx != rsi)
    
    rdx = *(arg1 + 0x80)
    rdi = zx.q(*(arg1 + 0x88))

void* rbx_1 = arg1 + 0x10

if (rdx != 0)
    rbx_1 = rdx

if (rdi.d != 0)
    int32_t i
    
    do
        int64_t* rcx_2 = *rbx_1
        
        if (rcx_2 != 0)
            (**rcx_2)(rcx_2, 1)
        
        rbx_1 += 8
        i = rdi.d
        rdi = zx.q(rdi.d - 1)
    while (i != 1)

bool cond:2 = *(arg1 + 0x8c) == 0
*(arg1 + 0x88) = 0

if (not(cond:2))
    sub_1423b4fa0(arg1 + 0x10, 0)
