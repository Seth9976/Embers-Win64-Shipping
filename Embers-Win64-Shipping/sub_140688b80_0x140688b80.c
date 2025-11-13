// 函数: sub_140688b80
// 地址: 0x140688b80
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t rbx = sx.q(arg1[1].d)

if (rbx.d == 0)
    return 0

int64_t* rax_1 = *arg2
int64_t* rcx = *arg1
int32_t rbp = 0
int32_t r13 = 0
int16_t* rdx

if (rax_1[1].d == 0)
    rdx = &data_142d40450
else
    rdx = *rax_1

int16_t* const rcx_1

if (rcx[1].d == 0)
    rcx_1 = &data_142d40450
else
    rcx_1 = *rcx

uint32_t rax_2
rax_2.b = sub_140a54510(rcx_1, rdx) != 0
int64_t rsi = 0
char arg_8 = rax_2.b

do
    int32_t r15_2 = rbp
    int32_t arg_18 = rbp
    rbp += 1
    rsi += 1
    
    if (rsi s< rbx)
        int64_t rbx_2 = rsi << 4
        
        do
            int64_t* rax_3 = *arg2
            int64_t* rcx_2 = *arg1
            int16_t* rdx_1
            
            if (rax_3[1].d == 0)
                rdx_1 = &data_142d40450
            else
                rdx_1 = *rax_3
            
            int16_t* const rcx_3
            
            if (*(rcx_2 + rbx_2 + 8) == 0)
                rcx_3 = &data_142d40450
            else
                rcx_3 = *(rcx_2 + rbx_2)
            
            int32_t rcx_4
            rcx_4.b = sub_140a54510(rcx_3, rdx_1) != 0
            
            if (zx.d(rax_2.b) != rcx_4)
                break
            
            rbp += 1
            rsi += 1
            rbx_2 += 0x10
        while (rsi s< rbx)
        
        r15_2 = arg_18
        rax_2 = zx.d(arg_8)
    
    int32_t i_1 = rbp - r15_2
    
    if (rax_2.b == 0)
        int64_t* rbx_5 = (sx.q(r15_2) << 4) + *arg1
        
        if (i_1 != 0)
            int32_t i
            
            do
                int64_t rcx_8 = *rbx_5
                
                if (rcx_8 != 0)
                    sub_140a74f90(rcx_8)
                
                rbx_5 = &rbx_5[2]
                i = i_1
                i_1 -= 1
            while (i != 1)
            rax_2 = zx.d(arg_8)
    else
        if (r13 != r15_2)
            memmove((sx.q(r13) << 4) + *arg1, (sx.q(r15_2) << 4) + *arg1, i_1 << 4)
            rax_2 = zx.d(arg_8)
        
        r13 += i_1
    
    rax_2.b ^= 1
    arg_8 = rax_2.b
while (rsi s< rbx)

arg1[1].d = r13
return zx.q(rbx.d - r13)
