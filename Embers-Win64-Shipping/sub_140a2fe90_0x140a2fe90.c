// 函数: sub_140a2fe90
// 地址: 0x140a2fe90
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t rbx = 0
int32_t rdx = *(arg1 + 0x30)
int32_t rbp = 0
void arg_8
int64_t* rax

if (rdx s> 0)
    int64_t r14_1 = 0
    
    do
        void* rax_1 = *(arg1 + 0x28)
        void* rcx = arg1 + 8
        
        if (rax_1 != 0)
            rcx = rax_1
        
        rax = nullptr
        
        if (*(rcx + r14_1 + 0x18) != 0)
            int64_t* rcx_1 = *(rcx + r14_1 + 0x10)
            
            if (rcx_1 != 0)
                int64_t* rax_3 = (*(*rcx_1 + 0x30))(rcx_1, &arg_8)
                rdx = *(arg1 + 0x30)
                rax = *rax_3
        
        if (rax != arg2)
            rbp += 1
            r14_1 += 0x20
        else
            void* rax_4 = *(arg1 + 0x28)
            void* rcx_2 = arg1 + 8
            int64_t r15_2 = sx.q(rbp) << 5
            
            if (rax_4 != 0)
                rcx_2 = rax_4
            
            sub_140745b20(rcx_2 + 0x10 + r15_2)
            int32_t r9_1 = *(arg1 + 0x30)
            int32_t rdx_4 = r9_1 - rbp - 1
            
            if (rdx_4 s>= 1)
                rdx_4 = 1
            
            if (rdx_4 != 0)
                void* rax_5 = *(arg1 + 0x28)
                void* rcx_5 = arg1 + 8
                
                if (rax_5 != 0)
                    rcx_5 = rax_5
                
                memcpy(rcx_5 + r15_2, (sx.q(r9_1 - rdx_4) << 5) + rcx_5, rdx_4 << 5)
                r9_1 = *(arg1 + 0x30)
            
            *(arg1 + 0x30) = r9_1 - 1
            sub_140a30f80(arg1 + 8)
            rdx = *(arg1 + 0x30)
    while (rbp s< rdx)

int32_t rdx_8 = *(arg1 + 0x60)
int32_t rbp_1 = 0

if (rdx_8 s> 0)
    int64_t r14_2 = 0
    
    do
        void* rax_7 = *(arg1 + 0x58)
        void* rcx_8 = arg1 + 0x38
        
        if (rax_7 != 0)
            rcx_8 = rax_7
        
        rax = nullptr
        
        if (*(rcx_8 + r14_2 + 0x18) != 0)
            int64_t* rcx_9 = *(rcx_8 + r14_2 + 0x10)
            
            if (rcx_9 != 0)
                int64_t* rax_9 = (*(*rcx_9 + 0x30))(rcx_9, &arg_8)
                rdx_8 = *(arg1 + 0x60)
                rax = *rax_9
        
        if (rax != arg2)
            rbp_1 += 1
            r14_2 += 0x20
        else
            void* rax_10 = *(arg1 + 0x58)
            void* rcx_10 = arg1 + 0x38
            int64_t r15_4 = sx.q(rbp_1) << 5
            
            if (rax_10 != 0)
                rcx_10 = rax_10
            
            sub_140745b20(rcx_10 + 0x10 + r15_4)
            int32_t r9_3 = *(arg1 + 0x60)
            int32_t rdx_12 = r9_3 - rbp_1 - 1
            
            if (rdx_12 s>= 1)
                rdx_12 = 1
            
            if (rdx_12 != 0)
                void* rax_11 = *(arg1 + 0x58)
                void* rcx_13 = arg1 + 0x38
                
                if (rax_11 != 0)
                    rcx_13 = rax_11
                
                memcpy(rcx_13 + r15_4, (sx.q(r9_3 - rdx_12) << 5) + rcx_13, rdx_12 << 5)
                r9_3 = *(arg1 + 0x60)
            
            *(arg1 + 0x60) = r9_3 - 1
            sub_140a30f80(arg1 + 0x38)
            rdx_8 = *(arg1 + 0x60)
    while (rbp_1 s< rdx_8)

if (*(arg1 + 0x88) == 0)
    return 

if (*(arg1 + 0x80) != 0)
    int64_t* rcx_16 = *(arg1 + 0x78)
    
    if (rcx_16 != 0)
        rbx = *(*(*rcx_16 + 0x30))(rcx_16, &arg_8)

if (rbx == arg2)
    *(arg1 + 0x89) = 1
