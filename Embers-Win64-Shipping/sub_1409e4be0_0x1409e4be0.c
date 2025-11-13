// 函数: sub_1409e4be0
// 地址: 0x1409e4be0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

uint64_t* rbp = arg3
arg3[1].d = 0

if (*(arg3 + 0xc) s<= 0xffffffff)
    sub_1405dadb0(arg3, 0)

TEB* gsbase
int32_t* rbx_1 = *(gsbase->ThreadLocalStoragePointer + (zx.q(data_14401b1a0) << 3)) + 0x14
int32_t* arg_10 = rbx_1

if (data_143ceed20 s> *rbx_1)
    _Init_thread_header(&data_143ceed20)
    
    if (data_143ceed20 == 0xffffffff)
        atexit(sub_142cb9830)
        _Init_thread_footer(&data_143ceed20)

int32_t rax_2 = data_143ceed1c
int32_t i_3 = data_143ceed18

if (rax_2 s< 0)
    if (i_3 != 0)
        int64_t* rbx_5 = data_143ceed10 + 8
        int32_t i
        
        do
            sub_1408464b0(rbx_5)
            rbx_5 = &rbx_5[4]
            i = i_3
            i_3 -= 1
        while (i != 1)
        rax_2 = data_143ceed1c
        rbx_1 = arg_10
    
    data_143ceed18 = 0
    
    if (rax_2 != 0)
        sub_1405a51b0(&data_143ceed10, 0)
else
    if (i_3 != 0)
        int64_t* rbx_3 = data_143ceed10 + 8
        int32_t i_1
        
        do
            sub_1408464b0(rbx_3)
            rbx_3 = &rbx_3[4]
            i_1 = i_3
            i_3 -= 1
        while (i_1 != 1)
        rbx_1 = arg_10
    
    data_143ceed18 = 0

if (data_143ceed38 s> *rbx_1)
    _Init_thread_header(&data_143ceed38)
    
    if (data_143ceed38 == 0xffffffff)
        atexit(sub_142cb9ad0)
        _Init_thread_footer(&data_143ceed38)

bool cond:0 = data_143ceed34 s>= 0
data_143ceed30 = 0

if (not(cond:0))
    sub_1405dadb0(&data_143ceed28, 0)

int32_t* r13 = *arg2
void* rax_6 = &r13[sx.q(arg2[1].d)]

if (r13 != rax_6)
    do
        int64_t rbx_6 = sx.q(*r13)
        int64_t rbp_1 = rbx_6 * 0x28
        
        if (*(arg1[5][0x1c] + rbp_1 + 8) s> 3)
            int64_t rdi = sx.q(data_143ceed30)
            int32_t rax_8 = (rdi + 1).d
            bool cond:2_1 = rax_8 s<= data_143ceed34
            data_143ceed30 = rax_8
            
            if (not(cond:2_1))
                sub_1405a4cf0(&data_143ceed28)
            
            *(data_143ceed28 + (rdi << 2)) = rbx_6.d
            int64_t rcx_4 = arg1[5][0x1c]
            int32_t* i_2 = *(rcx_4 + rbp_1 + 0x10)
            
            for (void* r12_1 = &i_2[sx.q(*(rcx_4 + rbp_1 + 0x18))]; i_2 != r12_1; i_2 = &i_2[1])
                int64_t rbx_7 = sx.q(data_143ceed18)
                int32_t rax_12 = (rbx_7 + 1).d
                bool cond:3_1 = rax_12 s<= data_143ceed1c
                data_143ceed18 = rax_12
                
                if (not(cond:3_1))
                    sub_1405c4e40(&data_143ceed10)
                
                int64_t j = 0
                int32_t* rcx_7 = (rbx_7 << 5) + data_143ceed10
                *rcx_7 = data_143a1c6c4
                *(rcx_7 + 8) = 0
                *(rcx_7 + 0x10) = 0
                rcx_7[6] = data_143a1c6c8
                rcx_7[7].b = 0
                int32_t* rbx_10 = (sx.q(data_143ceed18 - 1) << 5) + data_143ceed10
                *rbx_10 = *(arg1[5][0x1c] + rbp_1 + 0x20)
                rbx_10[7].b = 0
                
                do
                    int64_t rdi_1 = sx.q(rbx_10[4])
                    int32_t rax_19 = (rdi_1 + 1).d
                    rbx_10[4] = rax_19
                    
                    if (rax_19 s> rbx_10[5])
                        sub_1405a4df0(&rbx_10[2])
                    
                    int64_t rcx_10 = rdi_1 * 3
                    int64_t rdx_4 = *(rbx_10 + 8)
                    *(rdx_4 + (rcx_10 << 3)) = data_143a1c6b8
                    *(rdx_4 + (rcx_10 << 3) + 4) = data_143a1c6b4
                    *(rdx_4 + (rcx_10 << 3) + 8) = 0
                    *(rdx_4 + (rcx_10 << 3) + 0x10) = 0
                    void* r8_1 = *(rbx_10 + 8) + sx.q(rbx_10[4]) * 0x18
                    int64_t rcx_12 = j + (sx.q(*i_2) << 2)
                    j += 1
                    *(r8_1 - 0x18) = *(arg1[5][0x15] + (rcx_12 << 2))
                    *(r8_1 - 0x14) = data_143a1c6b4
                while (j s< 3)
        
        r13 = &r13[1]
    while (r13 != rax_6)
    
    rbp = arg3
    rbx_1 = arg_10

sub_1409b6930(arg1, &data_143ceed28, 0, 0, 0, 0)

if (data_143ceed50 s> *rbx_1)
    _Init_thread_header(&data_143ceed50)
    
    if (data_143ceed50 == 0xffffffff)
        atexit(&data_142cb8a20)
        _Init_thread_footer(&data_143ceed50)

return sub_1409b4ab0(arg1, &data_143ceed10, rbp, &data_143ceed40) __tailcall
