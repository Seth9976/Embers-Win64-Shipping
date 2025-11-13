// 函数: sub_140a3ad00
// 地址: 0x140a3ad00
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t rdi = sx.q(arg1[1].d)

if (rdi.d == 0)
    return 0

int64_t* rcx = *arg1
uint64_t rax_1 = 0
int32_t rbp = 0
int32_t r13 = 0
char arg_8

if (rcx[1].d != 0)
    int64_t* rcx_1 = *rcx
    
    if (rcx_1 != 0)
        rax_1 = *(*(*rcx_1 + 0x30))(rcx_1, &arg_8)

rax_1.b = rax_1 != *arg2
int64_t rdi_1 = 0
arg_8 = rax_1.b

do
    int64_t r12_1 = sx.q(rbp)
    rdi_1 += 1
    rbp += 1
    
    if (rdi_1 s< rdi)
        int64_t* rdx_1 = arg2
        int64_t rbx_2 = rdi_1 << 4
        
        do
            int64_t* rcx_2 = *arg1
            int64_t rax_4 = 0
            
            if (*(rcx_2 + rbx_2 + 8) != 0)
                int64_t* rcx_3 = *(rcx_2 + rbx_2)
                
                if (rcx_3 != 0)
                    rdx_1 = arg2
                    void arg_20
                    rax_4 = *(*(*rcx_3 + 0x30))(rcx_3, &arg_20)
            
            int32_t rcx_4
            rcx_4.b = rax_4 != *rdx_1
            
            if (zx.d(rax_1.b) != rcx_4)
                break
            
            rbp += 1
            rdi_1 += 1
            rbx_2 += 0x10
        while (rdi_1 s< rdi)
        
        rax_1 = zx.q(arg_8)
    
    int32_t i_1 = rbp - r12_1.d
    
    if (rax_1.b == 0)
        int64_t* rbx_5 = (r12_1 << 4) + *arg1
        
        if (i_1 != 0)
            int32_t i
            
            do
                sub_140745b20(rbx_5)
                rbx_5 = &rbx_5[2]
                i = i_1
                i_1 -= 1
            while (i != 1)
            rax_1 = zx.q(arg_8)
    else
        if (r13 != r12_1.d)
            int64_t rax_7 = *arg1
            memmove((sx.q(r13) << 4) + rax_7, (r12_1 << 4) + rax_7, i_1 << 4)
            rax_1 = zx.q(arg_8)
        
        r13 += i_1
    
    rax_1.b ^= 1
    arg_8 = rax_1.b
while (rdi_1 s< rdi)

arg1[1].d = r13
return zx.q(rdi.d - r13)
