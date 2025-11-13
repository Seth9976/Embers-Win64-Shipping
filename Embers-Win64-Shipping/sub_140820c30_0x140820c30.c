// 函数: sub_140820c30
// 地址: 0x140820c30
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

arg1[3].d = 0
int64_t* r13 = arg3
int64_t* rdi = arg2

if (*(arg1 + 0x1c) s<= 0xffffffff)
    sub_1405dadb0(&arg1[2], 0)

arg1[1].d = 0

if (*(arg1 + 0xc) s<= 0xffffffff)
    sub_14083adb0(arg1, 0)

void* r14 = &arg1[4]
*(r14 + 8) = 0

if (*(r14 + 0xc) s<= 0xffffffff)
    sub_1405dadb0(r14, 0)

char arg_8
char* i_1 = &arg_8
arg_8 = 0
int64_t* var_40 = arg1

if (arg4 == 0)
    i_1.o = i_1.o
    sub_1408192e0(rdi, r13, &i_1)
    arg3 = zx.q(arg_8)
    
    if (arg3.b != 0)
    label_140820e99:
        int16_t* rbx_5 = *arg1
        void* rsi_3 = &rbx_5[sx.q(arg1[1].d) * 3]
        
        if (rbx_5 != rsi_3)
            do
                int64_t rdx_8 = zx.q(*rbx_5) + r13[4]
                int64_t rcx_16 = zx.q(rbx_5[1]) + rdi[4]
                
                if (rcx_16 != rdx_8)
                    memcpy(rcx_16, rdx_8, zx.d(rbx_5[2]))
                
                rdi[0x16].d |= 1
                rbx_5 = &rbx_5[3]
            while (rbx_5 != rsi_3)
            
            arg3 = zx.q(arg_8)
        
        int16_t* rdx_9 = arg1[2]
        void* r9 = &rdx_9[sx.q(arg1[3].d) * 2]
        
        if (rdx_9 != r9)
            do
                uint64_t rcx_17 = zx.q(*rdx_9)
                int64_t rax_20
                rax_20.b = rcx_17.d s< r13[7].d
                int64_t r8_3
                
                if (rax_20.b == 0)
                    r8_3 = 0
                else
                    r8_3 = *(r13[6] + (rcx_17 << 3))
                
                uint64_t rcx_18 = zx.q(rdx_9[1])
                rdx_9 = &rdx_9[2]
                *(rdi[6] + (rcx_18 << 3)) = r8_3
                rdi[0x16].d |= 2
            while (rdx_9 != r9)
            
            arg3 = zx.q(arg_8)
        
        int16_t* rdx_10 = *r14
        void* r9_1 = &rdx_10[sx.q(*(r14 + 8)) * 2]
        
        if (rdx_10 != r9_1)
            do
                uint64_t rcx_19 = zx.q(*rdx_10)
                int64_t rax_22
                rax_22.b = rcx_19.d s< r13[9].d
                int64_t r8_4
                
                if (rax_22.b == 0)
                    r8_4 = 0
                else
                    r8_4 = *(r13[8] + (rcx_19 << 3))
                
                uint64_t rcx_20 = zx.q(rdx_10[1])
                rdx_10 = &rdx_10[2]
                *(rdi[8] + (rcx_20 << 3)) = r8_4
                rdi[0x16].d |= 4
            while (rdx_10 != r9_1)
            
            return zx.q(arg_8)
    
    return zx.q(arg3.b)

uint64_t result = sx.q(arg4[1].d)

if (result.d == 0)
    result.b = 0
    return result

void* rsi_1 = *arg4
char* i_2 = result * 0x30 + rsi_1
i_1 = i_2

if (rsi_1 != i_2)
    void* rsi_2 = rsi_1 + 0x2c
    char* i = i_2
    
    do
        int32_t r14_1 = *(rsi_2 - 4)
        int32_t rbp_1 = *rsi_2
        
        if (r14_1 != 0xffffffff && rbp_1 != 0xffffffff)
            arg_8 = 1
            char rax_3
            rax_3, arg3 = sub_140834780(rsi_2 - 0x24)
            
            if (rax_3 == 0)
                void* const rbx_2
                
                if (*(rsi_2 - 0x1c) != 3)
                    rbx_2 = *(rsi_2 - 0x24)
                    void* rax_6
                    int64_t rax_7
                    void* rdx_2
                    
                    if (rbx_2 != 0)
                        rax_6 = sub_140be01c0()
                        rdx_2 = *(rbx_2 + 0x10)
                        rax_7 = sx.q(*(rax_6 + 0x38))
                    
                    if (rbx_2 == 0 || rax_7.d s> *(rdx_2 + 0x38)
                            || *(*(rdx_2 + 0x30) + (rax_7 << 3)) != rax_6 + 0x30)
                        rbx_2 = nullptr
                else
                    rbx_2 = data_143ce3880
                
                void* rax_9
                rax_9, arg3 = sub_140d41340()
                int64_t rax_10
                
                if (rax_9 != 0)
                    rax_10 = sx.q(*(rax_9 + 0x38))
                
                if (rax_9 == 0 || rax_10.d s> *(rbx_2 + 0x38)
                        || *(*(rbx_2 + 0x30) + (rax_10 << 3)) != rax_9 + 0x30)
                    int16_t var_52_1 = rbp_1.w
                    int16_t rax_14
                    rax_14, arg3 = sub_14075e990(rsi_2 - 0x2c)
                    int64_t rbx_4 = sx.q(arg1[1].d)
                    int32_t rax_15 = (rbx_4 + 1).d
                    arg1[1].d = rax_15
                    
                    if (rax_15 s> *(arg1 + 0xc))
                        sub_14083a900(arg1)
                    
                    int32_t* rdx_6 = *arg1 + rbx_4 * 6
                    *rdx_6 = r14_1.w.d
                    rdx_6[1].w = rax_14
                else
                    int64_t rbx_3 = sx.q(arg1[5].d)
                    int16_t var_56_1 = rbp_1.w
                    int32_t rax_12 = (rbx_3 + 1).d
                    arg1[5].d = rax_12
                    
                    if (rax_12 s> *(arg1 + 0x2c))
                        sub_1405a4cf0(&arg1[4])
                    
                    *(arg1[4] + (rbx_3 << 2)) = r14_1.w.d
            else
                int64_t rbx_1 = sx.q(arg1[3].d)
                int16_t arg_20 = r14_1.w
                int16_t arg_22 = rbp_1.w
                int32_t rax_4 = (rbx_1 + 1).d
                arg1[3].d = rax_4
                
                if (rax_4 s> *(arg1 + 0x1c))
                    sub_1405a4cf0(&arg1[2])
                
                *(arg1[2] + (rbx_1 << 2)) = arg_20.d
            
            i = i_1
        
        rsi_2 += 0x30
    while (rsi_2 - 0x2c != i)
    
    rdi = arg2
    r14 = &arg1[4]

arg3.b = 1
arg_8 = 1
goto label_140820e99
