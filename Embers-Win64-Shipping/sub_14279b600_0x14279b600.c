// 函数: sub_14279b600
// 地址: 0x14279b600
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t rdi = sx.q(arg1[1].d)

if (rdi.d == 0)
    return 0

void* rax_1 = *arg1
int32_t rbx = 0
int32_t rbp = 0
int32_t arg_18 = 0
int16_t* rdx

if (arg2[1].d == 0)
    rdx = &data_142d40450
else
    rdx = *arg2

int16_t* const rcx

if (*(rax_1 + 0x18) == 0)
    rcx = &data_142d40450
else
    rcx = *(rax_1 + 0x10)

uint32_t rax_2
rax_2.b = sub_140a54510(rcx, rdx) != 0
int64_t rsi = 0
char arg_8 = rax_2.b

do
    int64_t r15_1 = sx.q(rbp)
    rsi += 1
    rbp += 1
    
    if (rsi s< rdi)
        int64_t rbx_2 = rsi << 5
        
        do
            int64_t rax_3 = *arg1
            int16_t* rdx_1
            
            if (arg2[1].d == 0)
                rdx_1 = &data_142d40450
            else
                rdx_1 = *arg2
            
            int16_t* const rcx_1
            
            if (*(rbx_2 + rax_3 + 0x18) == 0)
                rcx_1 = &data_142d40450
            else
                rcx_1 = *(rbx_2 + rax_3 + 0x10)
            
            int32_t rcx_2
            rcx_2.b = sub_140a54510(rcx_1, rdx_1) != 0
            
            if (zx.d(rax_2.b) != rcx_2)
                break
            
            rbp += 1
            rsi += 1
            rbx_2 += 0x20
        while (rsi s< rdi)
        
        rbx = arg_18
        rax_2 = zx.d(arg_8)
    
    int32_t i_1 = rbp - r15_1.d
    
    if (rax_2.b == 0)
        if (i_1 != 0)
            int64_t* rbx_6 = (r15_1 << 5) + 0x10 + *arg1
            int32_t i
            
            do
                int64_t rcx_6 = *rbx_6
                
                if (rcx_6 != 0)
                    sub_140a74f90(rcx_6)
                
                rbx_6 = &rbx_6[4]
                i = i_1
                i_1 -= 1
            while (i != 1)
            rax_2 = zx.d(arg_8)
        
        rbx = arg_18
    else
        if (rbx != r15_1.d)
            int64_t rax_5 = *arg1
            memmove((sx.q(rbx) << 5) + rax_5, (r15_1 << 5) + rax_5, i_1 << 5)
            rax_2 = zx.d(arg_8)
        
        rbx += i_1
        arg_18 = rbx
    
    rax_2.b ^= 1
    arg_8 = rax_2.b
while (rsi s< rdi)

arg1[1].d = rbx
return zx.q(rdi.d - rbx)
