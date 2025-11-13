// 函数: sub_1409a9d30
// 地址: 0x1409a9d30
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t* rdi = &arg1[2]
*arg1 = 0
arg1[1] = 0
rdi[2] = 0
int64_t* rcx = rdi
rdi[3].d = 0
*(rdi + 0x1c) = 0x80
int64_t* rax = rdi[2]

if (rax != 0)
    rcx = rax

*rcx = 0
rcx[1] = 0
arg1[6].d = 0xffffffff
*(arg1 + 0x34) = 0

if (arg1 != arg2)
    int64_t rbp_1 = sx.q(arg2[1].d)
    arg1[1].d = 0
    
    if (*(arg1 + 0xc) != rbp_1.d)
        sub_1405a5410(arg1, rbp_1.d)
    
    arg1[6].d = 0xffffffff
    *(arg1 + 0x34) = 0
    sub_14059a8e0(rdi, rbp_1.d)
    int32_t rax_1 = arg1[1].d + rbp_1.d
    arg1[1].d = rax_1
    
    if (rax_1 s> *(arg1 + 0xc))
        sub_140610660(arg1)
    
    void* rsi_1 = &arg2[2]
    arg1[6].d = arg2[6].d
    *(arg1 + 0x34) = *(arg2 + 0x34)
    
    if (rdi != rsi_1)
        sub_14059a8e0(rdi, *(rsi_1 + 0x18))
        int32_t rax_4 = *(rsi_1 + 0x18)
        rdi[3].d = rax_4
        
        if (rax_4 != 0)
            void* r9_1 = *(rsi_1 + 0x10)
            int64_t* r10_1 = rdi[2]
            
            if (r9_1 != 0)
                rsi_1 = r9_1
            
            if (r10_1 != 0)
                rdi = r10_1
            
            memcpy(rdi, rsi_1, (zx.q(rax_4 + 0x1f) u>> 5 << 2).d)
    
    memcpy(*arg1, *arg2, (rbp_1 << 4).d)

return arg1
