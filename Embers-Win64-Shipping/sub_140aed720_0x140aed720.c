// 函数: sub_140aed720
// 地址: 0x140aed720
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int32_t rdx = data_14399fe40
int32_t r8_1 = data_14399fe4c + 1
int64_t rbp
rbp.b = 0
int32_t rsi = 0
uint64_t rax = zx.q(rdx - 1)
int32_t arg_10 = 0
data_14399fe4c = r8_1
int64_t rbx = sx.q(rax.d)

if (rax.d s>= 0)
    int64_t rdi_2 = rbx << 4
    int64_t temp0_1
    
    do
        rax = data_14399fe38
        
        if (*(rdi_2 + rax + 8) == 0)
            rbp.b = 1
        else
            int64_t* rcx = *(rdi_2 + rax)
            
            if (rcx == 0)
                rbp.b = 1
            else if ((*(*rcx + 0x50))(rcx, arg1, &arg_10).b == 0)
                rbp.b = 1
        
        rdi_2 -= 0x10
        temp0_1 = rbx
        rbx -= 1
    while (temp0_1 - 1 s>= 0)
    r8_1 = data_14399fe4c
    rdx = data_14399fe40

data_14399fe4c = r8_1 - 1

if (rbp.b != 0 && r8_1 - 1 s<= 0)
    int32_t rdi_3 = rdx
    
    if (rdx s> 0)
        int64_t* rbx_1 = nullptr
        
        do
            int64_t rax_2 = data_14399fe38
            
            if (*(rbx_1 + rax_2 + 8) == 0)
                sub_1405a4880(&data_14399fe38, rsi, 1, 1)
            else
                int64_t* rcx_1 = *(rbx_1 + rax_2)
                
                if (rcx_1 == 0)
                    sub_1405a4880(&data_14399fe38, rsi, 1, 1)
                else if ((*(*rcx_1 + 0x20))(rcx_1) != 0)
                    sub_1405a4880(&data_14399fe38, rsi, 1, 1)
                else
                    rsi += 1
                    rbx_1 = &rbx_1[2]
            
            rdx = data_14399fe40
        while (rsi s< rdx)
    
    rax = zx.q(rdx * 2)
    
    if (rax.d s<= 2)
        rax = 2
    
    data_14399fe48 = rax.d
    
    if (rdi_3 s> rax.d && data_14399fe44 != rdx)
        sub_1405a5410(&data_14399fe38, rdx)

if (arg_10 s> 0)
    rax.b = 1
    return rax

sub_140a464c0()
char const (* r8_4)[0x4] = data_14399ea08
int64_t rax_5
rax_5.b = (*(r8_4 + 0x108))(&data_14399ea08, arg1, r8_4) s>= 0
return rax_5
