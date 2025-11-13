// 函数: sub_14096fb90
// 地址: 0x14096fb90
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void* rsi = arg2
int64_t* rcx = *(arg2 + 8)

if (rcx == 0 || (*(*rcx + 0x28))(rcx).b == 0)
    return 

void* rcx_1 = *(arg1 + 0x248)

if (rcx_1 == 0 || sub_140947320(rcx_1 + 0x68, *(rsi + 8)).d == 0xffffffff)
    return 

int64_t* rbx_2 = *(arg1 + 0x248) + 0x68
int64_t* arg_18 = rbx_2
int64_t rdx_1 = sx.q(rbx_2[1].d)

if (rdx_1.d == 0)
    return 

int32_t r12_1 = 0
int32_t r14_1 = 0
int64_t r13
r13.b = **rbx_2 != *(rsi + 8)
int64_t rdi_1 = 0

do
    int64_t r9_1 = sx.q(r14_1)
    rdi_1 += 1
    r14_1 += 1
    
    if (rdi_1 s< rdx_1)
        int64_t* rcx_6 = (rdi_1 << 4) + *rbx_2
        
        do
            uint64_t rax
            rax.b = *rcx_6 != *(rsi + 8)
            
            if (zx.d(r13.b) != rax.d)
                break
            
            r14_1 += 1
            rdi_1 += 1
            rcx_6 = &rcx_6[2]
        while (rdi_1 s< rdx_1)
    
    int32_t i_1 = r14_1 - r9_1.d
    
    if (r13.b == 0)
        if (i_1 != 0)
            int64_t* rsi_4 = (r9_1 << 4) + 8 + *rbx_2
            int32_t i
            
            do
                int64_t* rbx_3 = *rsi_4
                
                if (rbx_3 != 0)
                    rbx_3[1].d -= 1
                    
                    if (rbx_3[1].d == 1)
                        (**rbx_3)(rbx_3)
                        int32_t temp2_1 = *(rbx_3 + 0xc)
                        *(rbx_3 + 0xc) -= 1
                        
                        if (temp2_1 == 1)
                            (*(*rbx_3 + 8))(rbx_3, 1)
                
                rsi_4 = &rsi_4[2]
                i = i_1
                i_1 -= 1
            while (i != 1)
            rbx_2 = arg_18
        
        rsi = arg2
    else
        if (r12_1 != r9_1.d)
            memmove((sx.q(r12_1) << 4) + *rbx_2, (r9_1 << 4) + *rbx_2, i_1 << 4)
        
        r12_1 += i_1
    
    r13.b ^= 1
while (rdi_1 s< rdx_1)

rbx_2[1].d = r12_1
