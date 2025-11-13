// 函数: sub_140977350
// 地址: 0x140977350
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t* rcx = *(arg1 + 0x248)

if (rcx == 0 || *(arg1 + 0x240) s<= 0)
    return 

int32_t rax_2 = (*(*rcx + 0x2a8))(rcx)
int64_t* rcx_1 = *(arg1 + 0x248)
int64_t rdx_1 = *rcx_1

if (rax_2 s>= (*(rdx_1 + 0x2a0))(rcx_1, rdx_1).d)
    return 

int64_t** i = *(arg1 + 0x238)
void* rsi_1 = &i[sx.q(*(arg1 + 0x240))]
int64_t rax

if (rax_2 s<= 0)
    for (; i != rsi_1; i = &i[1])
        int64_t* rdi_2 = *i
        
        if (rdi_2 != 0)
            void* rax_5 = sub_140985530()
            void* rcx_4 = rdi_2[2]
            rax = sx.q(*(rax_5 + 0x38))
            
            if (rax.d s<= *(rcx_4 + 0x38) && *(*(rcx_4 + 0x30) + (rax << 3)) == rax_5 + 0x30)
                (*(*rdi_2 + 0x6d0))(rdi_2, rax)
else
    for (; i != rsi_1; i = &i[1])
        int64_t* rdi_1 = *i
        
        if (rdi_1 != 0)
            void* rax_3 = sub_140985530()
            void* rcx_2 = rdi_1[2]
            rax = sx.q(*(rax_3 + 0x38))
            
            if (rax.d s<= *(rcx_2 + 0x38) && *(*(rcx_2 + 0x30) + (rax << 3)) == rax_3 + 0x30)
                (*(*rdi_1 + 0x6c8))(rdi_1, zx.q(rax_2))
