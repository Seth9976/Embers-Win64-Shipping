// 函数: sub_1418ee660
// 地址: 0x1418ee660
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void* r15 = &arg1[4]
arg1[6] = arg3
int32_t rbx = 0
*arg1 = arg4
int64_t* r14 = arg2
int32_t r13 = arg2[1].d
arg1[3].d = r13
arg1[1] = arg7
int32_t i_2 = *(r15 + 8)
int64_t* rsi = *r15

if (i_2 != 0)
    int32_t i
    
    do
        int64_t* rdi_1 = *rsi
        
        if (rdi_1 != 0)
            rdi_1[1].d -= 1
            
            if (rdi_1[1].d == 1)
                char rax_2
                
                if (rdi_1[2].b == 0 && data_143f0f1d0 == 0)
                    rax_2 = sub_1405949a0()
                
                if (rdi_1[2].b != 0 || (data_143f0f1d0 == 0 && rax_2 != 0))
                    (**rdi_1)(rdi_1, 1)
                else
                    bool z_1
                    
                    if (0 == *(rdi_1 + 0xc))
                        *(rdi_1 + 0xc) = 1
                        z_1 = true
                    else
                        *(rdi_1 + 0xc)
                        z_1 = false
                    
                    if (z_1)
                        int32_t rax_4 = sub_140a20af0()
                        uint64_t rdx = zx.q(rax_4)
                        void* const rax_5
                        
                        if (rax_4 != 0)
                            rax_5 = *((rdx u>> 0xe << 3) + &data_143cf0bf8)
                                + (zx.q(rdx.d) & 0x3fff) * 0x18
                        else
                            rax_5 = nullptr
                        
                        *(rax_5 + 8) = rdi_1
                        sub_1405a42f0(&data_143f02390, rdx.d)
        
        rsi = &rsi[1]
        i = i_2
        i_2 -= 1
    while (i != 1)
    r14 = arg2
    r15 = &arg1[4]

int32_t rdi_2 = 0
*(r15 + 8) = 0

if (*(r15 + 0xc) != r13)
    sub_1405c5570(r15, r13)
    rdi_2 = arg1[5].d

uint64_t rsi_1 = zx.q(arg1[3].d)
int32_t rax_10 = rdi_2 + rsi_1.d
*(r15 + 8) = rax_10

if (rax_10 s> *(r15 + 0xc))
    sub_1405a4d70(r15)

if (rsi_1.d != 0)
    __builtin_memset(*r15 + (sx.q(rdi_2) << 3), 0, rsi_1 << 3)

int32_t i_1 = 0

if (r14[1].d s> 0)
    char* r8 = nullptr
    int32_t* rdx_4 = arg4 + 0x20
    int64_t r10_1 = arg6
    int32_t* r9 = arg3 + 8
    int64_t* r11_1 = arg5
    
    do
        rdx_4[-8] = 0x23
        rdx_4[-2] = i_1
        *rdx_4 = 1
        rdx_4[1] = *(*r14 + (r8 << 2))
        int64_t rcx_9 = sx.q(*(*r14 + (r8 << 2)))
        
        if (rcx_9.d u<= 0xa)
            switch (rcx_9)
                case 0, 1, 2, 3, 0xa
                    if (arg3 != 0)
                        r9[-2] = *(arg8 + 0x20)
                        r9[-1] = arg9[2].d
                        *r9 = 1
                    
                    *r11_1 = *(arg8 + 0x18)
                    r11_1[1] = *arg9
                    r11_1[2].d = 1
                    *(rdx_4 + 8) = r11_1
                    r11_1 = &r11_1[3]
                case 6, 7
                    *(rdx_4 + 0x10) = r10_1
                    r10_1 += 0x18
                case 8
                    r8[arg1[1]] = rbx.b
                    rbx += 1
                    *(rdx_4 + 0x10) = r10_1
                    r10_1 += 0x18
        
        rdx_4 = &rdx_4[0x10]
        i_1 += 1
        r8 = &r8[1]
        r9 = &r9[3]
    while (i_1 s< r14[1].d)

return zx.q(rbx)
