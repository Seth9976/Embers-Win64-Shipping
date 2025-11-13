// 函数: sub_140d8ff90
// 地址: 0x140d8ff90
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t rdx = sx.q(arg1[1].d)

if (rdx.d == 0)
    return 0

int64_t* rax_1 = *arg1
int32_t r12 = 0
int32_t rbp = 0
void* rcx

if (*rax_1 != 0)
    rcx = rax_1[1]

int64_t r14

if (*rax_1 == 0 || rcx == 0 || *(rcx + 8) s<= 0)
    r14.b = 0
else
    r14.b = 1

int64_t rbx = 0

do
    int64_t rdx_1 = sx.q(rbp)
    rbx += 1
    rbp += 1
    
    if (rbx s< rdx)
        int64_t* rax_4 = (rbx << 4) + *arg1
        
        do
            void* const rcx_1
            
            if (*rax_4 != 0)
                rcx_1 = rax_4[1]
            
            if (*rax_4 == 0 || rcx_1 == 0 || *(rcx_1 + 8) s<= 0)
                rcx_1 = nullptr
            else
                rcx_1.b = 1
            
            if (r14.b != rcx_1.b)
                break
            
            rbp += 1
            rbx += 1
            rax_4 = &rax_4[2]
        while (rbx s< rdx)
    
    int32_t i_1 = rbp - rdx_1.d
    
    if (r14.b != 0)
        if (r12 != rdx_1.d)
            memmove((sx.q(r12) << 4) + *arg1, (rdx_1 << 4) + *arg1, i_1 << 4)
        
        r12 += i_1
    else if (i_1 != 0)
        int64_t* rdi_4 = (rdx_1 << 4) + 8 + *arg1
        int32_t i
        
        do
            int64_t* rcx_5 = *rdi_4
            
            if (rcx_5 != 0)
                int32_t temp1_1 = *(rcx_5 + 0xc)
                *(rcx_5 + 0xc) -= 1
                
                if (temp1_1 == 1)
                    (*(*rcx_5 + 8))(rcx_5, 1)
            
            rdi_4 = &rdi_4[2]
            i = i_1
            i_1 -= 1
        while (i != 1)
    
    r14.b ^= 1
while (rbx s< rdx)

arg1[1].d = r12
return zx.q(rdx.d - r12)
