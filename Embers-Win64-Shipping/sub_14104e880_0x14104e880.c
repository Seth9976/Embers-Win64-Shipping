// 函数: sub_14104e880
// 地址: 0x14104e880
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t* r14

if (arg2 != 0)
    r14 = (*(*arg2 + 0x48))(arg2)
else
    r14 = nullptr

int64_t* i

if (arg3 != 0)
    i = (*(*arg3 + 0x48))(arg3)
else
    i = nullptr

if (r14 == 0)
    return 

while (i != 0)
    sub_141059a80(&r14[9], arg1)
    r14[0xa].d = 0
    __builtin_memset(&r14[0xb], 0, 0x50)
    *(r14 + 0xa9) = 0xff
    memmove(&r14[9], &i[9], 0x68)
    r14[0xa].d = 5
    void* rax_3 = i[0xb]
    i[0xa].d = 5
    *(rax_3 + 8) += 1
    sub_1405d16e0(&r14[0x1e], i[0x1e])
    void* rdi_1 = &i[0x23]
    int64_t j_2 = 4
    void* rbx_1 = &r14[0x23]
    int64_t* rax
    int64_t j
    
    do
        rax, arg1 = sub_1410407f0(rbx_1, *rdi_1)
        rbx_1 += 8
        rdi_1 += 8
        j = j_2
        j_2 -= 1
    while (j != 1)
    int32_t j_1 = 0
    
    if (i[0x21].d s> 0)
        int64_t rdi_2 = 0
        
        do
            void* rax_4 = i[0x20]
            void* rdx_3 = &i[0x1f]
            void* r8 = r14[0x20]
            void* rcx_7 = &r14[0x1f]
            
            if (rax_4 != 0)
                rdx_3 = rax_4
            
            if (r8 != 0)
                rcx_7 = r8
            
            rax, arg1 = sub_1410407f0(rcx_7 + (sx.q(j_1) << 3), *(rdx_3 + rdi_2))
            j_1 += 1
            rdi_2 += 8
        while (j_1 s< i[0x21].d)
    
    r14 = r14[0x17]
    i = i[0x17]
    
    if (r14 == 0)
        break
