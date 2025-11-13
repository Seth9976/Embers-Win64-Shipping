// 函数: sub_1422bf1d0
// 地址: 0x1422bf1d0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void* r9 = *arg1
int64_t rsi = 0
int32_t i = 0
int64_t arg_18 = 0
int32_t i_1 = 0
int64_t* rcx = arg1[2]
int64_t r8 = *(r9 + 0x98)

if (rcx[1].d s<= 0)
    return 

int64_t r11_1 = 0
int64_t* rdx_1 = rcx
int64_t arg_20 = 0

do
    int64_t rbx_1 = r8
    int64_t rdi_1 = arg1[1]
    void* r13_2 = *rdx_1 + r11_1
    uint32_t rax_1 = zx.d(*(r13_2 + 0x1e))
    uint32_t rbp_1 = zx.d(*(r13_2 + 0x1c))
    
    if (rbp_1 u< rax_1)
        do
            void* rsi_3 = (sx.q(rbp_1) << 5) + *arg1[3]
            char rax_3 = *(rsi_3 + 0x1c)
            int64_t var_68
            
            if (rax_3 == 0)
                uint32_t rdx_2 = zx.d(*(rsi_3 + 0xa))
                int64_t* rcx_1 = *arg1
                int64_t* r12_2 = sx.q(*(rsi_3 + 0x10)) + rdi_1
                int64_t r9_1 = *rcx_1
                (*(r9_1 + 8))(rcx_1, sx.q(rdx_2 * r12_2[1].d), sx.q(*(r12_2 + 0xc) * rdx_2), r9_1, 
                    var_68)
                int64_t rbx_2 = *r12_2
                int32_t j = 0
                
                if (r12_2[1].d s> 0)
                    do
                        var_68 = sx.q(zx.d(*(rsi_3 + 0xa)) * j) + rbx_2
                        sub_1422c0590(arg1, r13_2, rbp_1 + 1, zx.d(*(rsi_3 + 8)) - 1, var_68)
                        j += 1
                    while (j s< r12_2[1].d)
                
                rbp_1 = zx.d(*(rsi_3 + 8)) - 1
            else if (rax_3 == 0x13)
                int64_t rax_10 = sx.q(*(rsi_3 + 0x10))
                int64_t* rcx_3 = *arg1
                int64_t r9_4 = *rcx_3
                (*(r9_4 + 8))(rcx_3, sx.q(*(rax_10 + rdi_1 + 8)) * 2, 
                    sx.q(*(rax_10 + rdi_1 + 0xc)) * 2, r9_4, var_68)
            rbp_1 += 1
        while (rbp_1 s< rax_1)
        
        rcx = arg1[2]
        r9 = *arg1
        rdx_1 = rcx
        i = i_1
        r11_1 = arg_20
        rsi = arg_18
    
    int32_t rax_11 = *(r13_2 + 0x28)
    r8 = *(r9 + 0x98)
    
    if (rax_11 s> 0 || (rax_11 == 0 && *(r13_2 + 0x24) == 0))
        arg1[5] += r8 - rbx_1
    else
        int64_t rdx_8
        
        if (i s>= rcx[1].d - 1)
            rdx_8 = arg1[4]
        else
            rdx_8 = sx.q(*(*rcx + r11_1 + 0x48))
        
        arg1[6] += r8 - rbx_1
        arg1[7] += rdx_8 - rsi
        rdx_1 = rcx
    
    rsi = sx.q(*(r13_2 + 0x18))
    i += 1
    r11_1 += 0x30
    arg_18 = rsi
    i_1 = i
    arg_20 = r11_1
while (i s< rdx_1[1].d)
