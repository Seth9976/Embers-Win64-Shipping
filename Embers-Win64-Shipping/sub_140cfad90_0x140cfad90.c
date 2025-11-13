// 函数: sub_140cfad90
// 地址: 0x140cfad90
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

uint64_t* rbx = arg2
int32_t rbp = arg2[1].d
int32_t r13 = *(arg1 + 0x90)
int64_t* r14 = *(arg1 + 0x78)
int32_t i = rbp - *(arg2 + 0x34)

if (rbp != *(arg2 + 0x34))
    int32_t rdi_1 = 0
    
    if ((r14[8] & 0x1040000000) == 0)
        int32_t rsi_1 = 1
        uint64_t r12_1 = zx.q((*(arg1 + 0x80)).12:8.d)
        int64_t r15_1 = *arg2
        
        do
            if (rdi_1 s>= 0 && rdi_1 s< rbx[5].d)
                void* rax_1 = rbx[4]
                void* rcx = &rbx[2]
                
                if (rax_1 != 0)
                    rcx = rax_1
                
                int32_t rax_2 = rdi_1
                
                if (rdi_1 s< 0)
                    rax_2 = rdi_1 + 0x1f
                
                if ((*(rcx + (sx.q(rax_2 s>> 5) << 2)) & rsi_1) != 0)
                    if ((not.b((r14[8] u>> 0x24).b) & 1) != 0)
                        (*(*r14 + 0xe8))(r14, sx.q(*(r14 + 0x4c)) + r15_1)
                    
                    i -= 1
            
            r15_1 += r12_1
            rsi_1 = rol.d(rsi_1, 1)
            rdi_1 += 1
        while (i != 0)
    
    rbx[1].d = 0
    
    if (*(rbx + 0xc) != 0)
        sub_140ce4fc0(rbx, 0, r13)
    
    rbx[6].d = 0xffffffff
    *(rbx + 0x34) = 0
    rbx[5].d = 0
    
    if (*(rbx + 0x2c) != 0)
        *(rbx + 0x2c) = 0
        sub_140d0bc80(&rbx[2], 0)
    
    int64_t rcx_4 = sx.q(rbx[9].d)
    void* rdi_2 = &rbx[7]
    void* rax = *(rdi_2 + 8)
    
    if (rcx_4 s> 0)
        if (rax != 0)
            rdi_2 = rax
        
        __builtin_memset(rdi_2, 0xffffffff, rcx_4 << 2)

int64_t rcx_5 = rbx[8]

if (rcx_5 != 0)
    sub_140a74f90(rcx_5)

int64_t rcx_6 = rbx[4]

if (rcx_6 != 0)
    sub_140a74f90(rcx_6)

uint64_t rcx_7 = *rbx

if (rcx_7 == 0)
    return 

return sub_140a74f90(rcx_7) __tailcall
