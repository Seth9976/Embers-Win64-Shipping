// 函数: sub_141e0e840
// 地址: 0x141e0e840
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

*(arg1 + 0x31) &= 0xbf
int32_t rax

if (arg1[0x1c].d s> 0)
    int64_t* rdi_1 = arg1[0x1b]
    int64_t rbx_1 = sx.q(arg1[0x1c].d)
    void* rbp_3 = &rdi_1[rbx_1 * 4]
    
    if (rdi_1 != rbp_3)
        do
            sub_140926490(&rdi_1[2], *rdi_1, zx.q(rdi_1[1].b))
            bool var_20_1 = rdi_1[1].b != 0
            int64_t var_28 = *rdi_1
            sub_1405a9f90(&arg1[7], &var_28)
            rdi_1 = &rdi_1[4]
        while (rdi_1 != rbp_3)
        
        rbx_1 = zx.q(arg1[0x1c].d)
    
    rax = *(arg1 + 0xe4)
    void* rdi_2 = arg1[0x1b]
    
    if (rax s< 0)
        if (rbx_1.d != 0)
            void* rdi_4 = rdi_2 + 0x10
            int32_t i
            
            do
                sub_140745b20(rdi_4)
                rdi_4 += 0x20
                i = rbx_1.d
                rbx_1 = zx.q(rbx_1.d - 1)
            while (i != 1)
            rax = *(arg1 + 0xe4)
        
        arg1[0x1c].d = 0
        
        if (rax != 0)
            sub_1405a51b0(&arg1[0x1b], 0)
    else
        if (rbx_1.d != 0)
            int64_t* rdi_3 = rdi_2 + 0x10
            int32_t i_1
            
            do
                sub_140745b20(rdi_3)
                rdi_3 = &rdi_3[4]
                i_1 = rbx_1.d
                rbx_1 = zx.q(rbx_1.d - 1)
            while (i_1 != 1)
        
        arg1[0x1c].d = 0

if (arg1[0x1e].d s<= 0)
    return 

int64_t* rdi_5 = arg1[0x1d]
int64_t rbx_2 = sx.q(arg1[0x1e].d)
void* rbp_6 = &rdi_5[rbx_2 * 4]

if (rdi_5 != rbp_6)
    do
        sub_141e0e680(arg1, rdi_5)
        rdi_5 = &rdi_5[4]
    while (rdi_5 != rbp_6)
    
    rbx_2 = zx.q(arg1[0x1e].d)

rax = *(arg1 + 0xf4)
void* rdi_6 = arg1[0x1d]

if (rax s< 0)
    if (rbx_2.d != 0)
        void* rdi_8 = rdi_6 + 0x10
        int32_t i_2
        
        do
            sub_140745b20(rdi_8)
            rdi_8 += 0x20
            i_2 = rbx_2.d
            rbx_2 = zx.q(rbx_2.d - 1)
        while (i_2 != 1)
        rax = *(arg1 + 0xf4)
    
    arg1[0x1e].d = 0
    
    if (rax != 0)
        sub_1405a51b0(&arg1[0x1d], 0)
else
    if (rbx_2.d != 0)
        int64_t* rdi_7 = rdi_6 + 0x10
        int32_t i_3
        
        do
            sub_140745b20(rdi_7)
            rdi_7 = &rdi_7[4]
            i_3 = rbx_2.d
            rbx_2 = zx.q(rbx_2.d - 1)
        while (i_3 != 1)
    
    arg1[0x1e].d = 0
