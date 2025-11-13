// 函数: sub_140a59140
// 地址: 0x140a59140
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

char arg_20 = arg4.b
uint64_t r15_1 = arg2 u>> (*(arg1 + 0x10)).b
int16_t r13 = arg3
int32_t r12_2 = (arg2 u>> (*(arg1 + 8)).b).d & *(arg1 + 0x18)
int64_t* rbp_4 = ((zx.q(*(arg1 + 0x20) - 1) & zx.q(r15_1.d)) << 5) + *(arg1 + 0x460)
int64_t* rdi = rbp_4
int64_t rax_12
uint64_t rbx_1

while (true)
    int64_t rax_1 = rdi[1]
    void* rcx_9
    char r9
    
    if (rax_1 == 0)
        *rdi = r15_1
        int64_t i_3 = *(arg1 + 0x470)
        int64_t rbx_5 = i_3 << 5
        void* rax_13 = sub_140b655e0(rbx_5)
        
        if (rax_13 == 0)
            sub_140a4c430(rbx_5, 0)
        
        if (i_3 != 0)
            void* rcx_12 = rax_13 + 4
            int64_t i
            
            do
                *(rcx_12 - 4) = 0x39410000
                __builtin_memset(rcx_12 + 4, 0, 0x18)
                rcx_12 += 0x20
                i = i_3
                i_3 -= 1
            while (i != 1)
        
        r9 = 1
        rbx_1 = zx.q(r12_2) << 5
        rdi[1] = rax_13
        rcx_9 = rbx_1 + rax_13
    else if (*rdi == r15_1)
        rbx_1 = zx.q(r12_2) << 5
        r9 = 0
        rcx_9 = rbx_1 + rax_1
    else
        rdi = rdi[3]
        
        if (rdi != rbp_4)
            continue
        
        if (*(arg1 + 0x468) == 0)
            int64_t rax_2
            rax_2, arg4 = sub_140b655e0(zx.q(data_143db71bc))
            *(arg1 + 0x468) = rax_2
            uint64_t i_5 = zx.q(data_143db71bc) u>> 5
            
            if (i_5 != 0)
                arg4 = 0
                uint64_t i_1
                
                do
                    int64_t* rdx_1 = *(arg1 + 0x468) + arg4
                    arg4 += 0x20
                    rdx_1[2] = rdx_1
                    rdx_1[3] = rdx_1
                    *rdx_1 = 0
                    rdx_1[1] = 0
                    void* rcx_3 = *(arg1 + 0x468)
                    rdx_1[2] = *(rcx_3 + 0x10)
                    rdx_1[3] = rcx_3
                    *(*(rcx_3 + 0x10) + 0x18) = rdx_1
                    *(rcx_3 + 0x10) = rdx_1
                    i_1 = i_5
                    i_5 -= 1
                while (i_1 != 1)
        
        uint64_t* r14_1 = *(arg1 + 0x468)
        void* rdx_2 = r14_1[3]
        *(rdx_2 + 0x10) = r14_1[2]
        *(r14_1[2] + 0x18) = r14_1[3]
        void* const rax_7 = nullptr
        
        if (rdx_2 != r14_1)
            rax_7 = rdx_2
        
        r14_1[2] = r14_1
        r14_1[3] = r14_1
        *(arg1 + 0x468) = rax_7
        int64_t rax_8 = r14_1[1]
        void* rcx_8
        
        if (rax_8 != 0)
            rbx_1 = zx.q(r12_2) << 5
            arg4.b = 0
            rcx_8 = rax_8 + rbx_1
        else
            int64_t i_4 = *(arg1 + 0x470)
            int64_t rsi_2 = i_4 << 5
            void* rax_9
            rax_9, arg4 = sub_140b655e0(rsi_2)
            
            if (rax_9 == 0)
                sub_140a4c430(rsi_2, 0)
            
            if (i_4 != 0)
                void* rcx_7 = rax_9 + 4
                int64_t i_2
                
                do
                    *(rcx_7 - 4) = 0x39410000
                    __builtin_memset(rcx_7 + 4, 0, 0x18)
                    rcx_7 += 0x20
                    i_2 = i_4
                    i_4 -= 1
                while (i_2 != 1)
            
            arg4.b = 1
            rbx_1 = zx.q(r12_2) << 5
            r14_1[1] = rax_9
            rcx_8 = rbx_1 + rax_9
            r13 = arg3
        
        sub_140a5aa30(rcx_8, r13, arg_20, arg4.b)
        *r14_1 = r15_1
        r14_1[2] = rbp_4[2]
        r14_1[3] = rbp_4
        *(rbp_4[2] + 0x18) = r14_1
        rbp_4[2] = r14_1
        rax_12 = r14_1[1]
        break
    
    sub_140a5aa30(rcx_9, r13, arg4.b, r9)
    rax_12 = rdi[1]
    break

return rax_12 + rbx_1
