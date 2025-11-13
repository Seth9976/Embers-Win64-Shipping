// 函数: sub_141fbf320
// 地址: 0x141fbf320
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

if (*(arg1 + 0x48) == 0)
    return 

void* rbx_1 = *(arg1 + 0x30)
uint8_t r13_2 = (*(*(arg1 + 0x58) + 0x30) u>> 8).b & 1

if (rbx_1 == 0)
    return 

char* rbx_2 = *(rbx_1 + 8)

if (rbx_2 == 0)
    return 

uint64_t rax = zx.q(*(rbx_2 + 8))
int32_t i = *(rbx_2 + 4)

if (r13_2 != 0)
    if (rax.d s> i)
        rax = zx.q(rax.d - 1) & 0x8000001f
        
        if (rax.d s< 0)
            rax = zx.q(((rax.d - 1) | 0xffffffe0) + 1)
        
        void* rdi_3 = &rbx_2[sx.q(rax.d) << 5]
        
        if (*(rdi_3 + 0x30) == 0xffffffff)
            *(rdi_3 + 0x30) = -1
            bool cond:1_1 = *(rdi_3 + 0x44) == 0
            *(rdi_3 + 0x40) = 0
            
            if (not(cond:1_1))
                sub_1405947f0(rdi_3 + 0x38, 0)
            
            *(rdi_3 + 0x48) = 0
            *(rbx_2 + 8) -= 1
else if (i s< rax.d)
    do
        rax = zx.q(i) & 0x8000001f
        
        if (rax.d s< 0)
            rax = zx.q(((rax.d - 1) | 0xffffffe0) + 1)
        
        int64_t r14_2 = sx.q(rax.d) << 5
        
        if (*(r14_2 + rbx_2 + 0x30) == 0xffffffff)
            *(r14_2 + rbx_2 + 0x30) = *arg2
            
            if (arg3 == 0 && *rbx_2 == arg3)
                int64_t rbp_1 = sx.q(*(rbx_2 + 0x448))
                int32_t rax_4 = (rbp_1 + 1).d
                *(rbx_2 + 0x448) = rax_4
                
                if (rax_4 s> *(rbx_2 + 0x44c))
                    sub_1405c4e40(&rbx_2[0x440])
                
                sub_141fa4e70((rbp_1 << 5) + *(rbx_2 + 0x440), &rbx_2[0x30 + r14_2])
        
        i += 1
    while (i s< *(rbx_2 + 8))

int64_t* i_1 = *(rbx_2 + 0x430)

for (void* rbp_4 = &i_1[sx.q(*(rbx_2 + 0x438)) * 4]; i_1 != rbp_4; i_1 = &i_1[4])
    int64_t* j = *i_1
    int64_t* rsi_1 = i_1
    
    for (; j != 0; j = *j)
        if (j[3].d == 0xffffffff)
            if (r13_2 != 0)
                *rsi_1 = *j
                int64_t* rdi_4 = j[2]
                
                if (rdi_4 != 0)
                    rdi_4[1].d -= 1
                    
                    if (rdi_4[1].d == 1)
                        (**rdi_4)(rdi_4)
                        int32_t temp1_1 = *(rdi_4 + 0xc)
                        *(rdi_4 + 0xc) -= 1
                        
                        if (temp1_1 == 1)
                            (*(*rdi_4 + 8))(rdi_4, 1)
                
                j_sub_140a74f90(j)
                j = rsi_1
            else
                j[3] = *arg2
                i_1[3] = *arg2
        
        rsi_1 = j
