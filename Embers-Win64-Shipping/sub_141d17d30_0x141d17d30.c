// 函数: sub_141d17d30
// 地址: 0x141d17d30
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

if (arg3 s<= 0)
    return 

int64_t* arg_8 = arg1
int64_t r15_1 = 0
int64_t i_1 = sx.q(arg3)
int64_t i

do
    int64_t* r14_2 = *(arg2 + 8) + r15_1
    int64_t* rbx_2 = *arg1 + r15_1
    
    if (rbx_2 != r14_2)
        int64_t rsi_1 = sx.q(r14_2[9].d)
        void* rdi_1 = &rbx_2[7]
        sub_1405a4aa0(rdi_1, 0, rsi_1.d, 4)
        void* rax_1 = r14_2[8]
        void* rdx = &r14_2[7]
        void* r9_1 = *(rdi_1 + 8)
        
        if (rax_1 != 0)
            rdx = rax_1
        
        if (r9_1 != 0)
            rdi_1 = r9_1
        
        memcpy(rdi_1, rdx, (rsi_1 << 2).d)
        rbx_2[9].d = rsi_1.d
        int64_t rbp_1 = sx.q(r14_2[1].d)
        rbx_2[1].d = 0
        
        if (*(rbx_2 + 0xc) != rbp_1.d)
            sub_140638cc0(rbx_2, rbp_1.d)
        
        *(rbx_2 + 0x34) = 0
        void* rdi_2 = &rbx_2[2]
        rbx_2[6].d = 0xffffffff
        sub_14059a8e0(rdi_2, rbp_1.d)
        int32_t rax_2 = rbx_2[1].d + rbp_1.d
        rbx_2[1].d = rax_2
        
        if (rax_2 s> *(rbx_2 + 0xc))
            sub_140638a00(rbx_2)
        
        void* rsi_2 = &r14_2[2]
        rbx_2[6].d = r14_2[6].d
        *(rbx_2 + 0x34) = *(r14_2 + 0x34)
        
        if (rdi_2 != rsi_2)
            sub_14059a8e0(rdi_2, *(rsi_2 + 0x18))
            int32_t rax_5 = *(rsi_2 + 0x18)
            *(rdi_2 + 0x18) = rax_5
            
            if (rax_5 != 0)
                void* r9_2 = *(rsi_2 + 0x10)
                void* r10_1 = *(rdi_2 + 0x10)
                
                if (r9_2 != 0)
                    rsi_2 = r9_2
                
                if (r10_1 != 0)
                    rdi_2 = r10_1
                
                memcpy(rdi_2, rsi_2, (zx.q(rax_5 + 0x1f) u>> 5 << 2).d)
        
        memcpy(*rbx_2, *r14_2, (rbp_1 * 0xc).d)
        arg1 = arg_8
    
    r15_1 += 0x50
    i = i_1
    i_1 -= 1
while (i != 1)
