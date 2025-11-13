// 函数: sub_141caac30
// 地址: 0x141caac30
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int32_t arg_18
sub_141c9fe70(arg1 + 0x190, &arg_18, arg2)
int64_t rax = sx.q(arg_18)
int64_t rdi = 0
void* const rax_3

if (rax.d == 0xffffffff)
    rax_3 = nullptr
else
    rax_3 = rax * 0x30 + *(arg1 + 0x190)

int64_t* r13 = rax_3 + 0x20

if (rax_3 == 0)
    r13 = nullptr

if (r13 != 0)
    void* r13_1 = *r13
    
    if (r13_1 != 0)
        void** var_60
        int64_t* arg_20 = &var_60
        arg_18.q = &arg_20
        var_60 = nullptr
        int32_t var_58 = 0
        sub_141c979f0(&arg_18, r13_1 + 0x20)
        sub_141c979f0(&arg_18, r13_1 + 0x30)
        sub_141c979f0(&arg_18, r13_1 + 0x60)
        sub_141c979f0(&arg_18, r13_1 + 0x50)
        sub_141c979f0(&arg_18, r13_1 + 0x40)
        void** rbx_1 = var_60
        int64_t rsi = 0
        void* rcx_6 = &rbx_1[sx.q(var_58)]
        uint64_t r14_3 = (rcx_6 - rbx_1 + 7) u>> 3
        
        if (rbx_1 u> rcx_6)
            r14_3 = 0
        
        if (r14_3 != 0)
            do
                sub_141caba60(*rbx_1, r13_1)
                rsi += 1
                rbx_1 = &rbx_1[1]
            while (rsi != r14_3)
        
        int64_t rax_5 = sx.q(*(r13_1 + 0x78))
        int32_t rdx_7 = 0
        int64_t* r14_4 = *(r13_1 + 0x70)
        int64_t* rsi_1 = nullptr
        int64_t* var_70 = nullptr
        int32_t rcx_8 = 0
        int32_t var_64 = 0
        int64_t r15 = 0
        uint64_t r12_1 = rax_5 << 3 u>> 3
        
        if (r14_4 u> &r14_4[rax_5])
            r12_1 = 0
        
        if (r12_1 != 0)
            do
                int64_t rbx_2 = sx.q(rcx_8)
                arg_18.q = *r14_4
                rcx_8 = (rbx_2 + 1).d
                
                if (rcx_8 s> rdx_7)
                    sub_1405a4d70(&var_70)
                    rdx_7 = var_64
                    rsi_1 = var_70
                
                r14_4 = &r14_4[1]
                r15 += 1
                rsi_1[rbx_2] = arg_18.q
            while (r15 != r12_1)
        
        int64_t* r15_1 = rsi_1
        void* rcx_10 = &rsi_1[sx.q(rcx_8)]
        uint64_t r14_8 = (rcx_10 - rsi_1 + 7) u>> 3
        
        if (rsi_1 u> rcx_10)
            r14_8 = 0
        
        if (r14_8 != 0)
            arg_18.q = r13_1
            
            do
                void* rbx_3 = *r15_1
                sub_140838b90(rbx_3 + 0x20, &arg_18, 0)
                sub_140838b90(rbx_3 + 0x30, &arg_18, 0)
                sub_140838b90(rbx_3 + 0x60, &arg_18, 0)
                sub_140838b90(rbx_3 + 0x50, &arg_18, 0)
                sub_140838b90(rbx_3 + 0x40, &arg_18, 0)
                rdi += 1
                r15_1 = &r15_1[1]
            while (rdi != r14_8)
        
        sub_141ca9f40(arg1 + 0x190, arg2)
        *(arg1 + 0x264) -= 1
        
        if (*(arg1 + 0x248) == 0)
            sub_141c947f0(r13_1)
            j_sub_140a74f90(r13_1)
        
        if (rsi_1 != 0)
            sub_140a74f90(rsi_1)
        
        void** rcx_20 = var_60
        
        if (rcx_20 != 0)
            sub_140a74f90(rcx_20)
        
        void* rax_9
        rax_9.b = 1
        return rax_9

rax_3.b = 0
return rax_3
