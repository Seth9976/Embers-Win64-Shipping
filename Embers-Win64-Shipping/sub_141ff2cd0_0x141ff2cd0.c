// 函数: sub_141ff2cd0
// 地址: 0x141ff2cd0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t rdx = sx.q(arg1[1].d)
int64_t* rbx = arg1

if (rdx.d == 0)
    return 0

void* rcx = **arg1
int32_t r13 = 0
int32_t r14 = 0
int64_t r15

if (rcx == 0 || (*(rcx + 0x30) & 6) != 0)
    r15.b = 0
else
    r15.b = 1

int64_t rdi = 0

do
    int64_t rdx_1 = sx.q(r14)
    rdi += 1
    r14 += 1
    
    if (rdi s< rdx)
        int64_t* rax_4 = (rdi << 4) + *rbx
        
        do
            void* rcx_1 = *rax_4
            
            if (rcx_1 == 0 || (*(rcx_1 + 0x30) & 6) != 0)
                rcx_1.b = 0
            else
                rcx_1.b = 1
            
            if (r15.b != rcx_1.b)
                break
            
            r14 += 1
            rdi += 1
            rax_4 = &rax_4[2]
        while (rdi s< rdx)
    
    int32_t i_1 = r14 - rdx_1.d
    
    if (r15.b != 0)
        if (r13 != rdx_1.d)
            memmove((sx.q(r13) << 4) + *rbx, (rdx_1 << 4) + *rbx, i_1 << 4)
        
        r13 += i_1
    else if (i_1 != 0)
        int64_t* rsi_4 = (rdx_1 << 4) + 8 + *rbx
        int32_t i
        
        do
            int64_t* rbx_1 = *rsi_4
            
            if (rbx_1 != 0)
                rbx_1[1].d -= 1
                
                if (rbx_1[1].d == 1)
                    (**rbx_1)(rbx_1)
                    int32_t temp2_1 = *(rbx_1 + 0xc)
                    *(rbx_1 + 0xc) -= 1
                    
                    if (temp2_1 == 1)
                        (*(*rbx_1 + 8))(rbx_1, 1)
            
            rsi_4 = &rsi_4[2]
            i = i_1
            i_1 -= 1
        while (i != 1)
        rbx = arg1
    
    r15.b ^= 1
while (rdi s< rdx)

rbx[1].d = r13
return zx.q(rdx.d - r13)
