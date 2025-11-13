// 函数: sub_1418ea450
// 地址: 0x1418ea450
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

sub_1418e3ae0(*(*(arg1 + 0x140) + 0x1b00), arg2)
void* rbx = *(arg1 + 0x240)

if (*(rbx + 0x78) != 0)
    sub_1418c86c0(rbx, 0, 0)

void* rbp = *(rbx + 0x70)
int32_t i_4 = 0
int64_t* rdi = *(arg1 + 0x450)
uint64_t rcx_3
rcx_3.b = *(rbp + 0x2d) u>> 1
rcx_3.b = not.b(rcx_3.b)
rcx_3.b &= 1

if (arg2 != rdi[8])
    rdi[8] = arg2
    int32_t arg_8
    sub_140865c40(&rdi[0xa], &arg_8, arg2)
    int64_t rax_1 = sx.q(arg_8)
    
    if (rax_1.d == 0xffffffff)
        rcx_3 = 0
    else
        rcx_3 = rdi[0xa] + rax_1 * 0x18
    
    int64_t* rax_3 = rcx_3 + 8
    
    if (rcx_3 == 0)
        rax_3 = nullptr
    
    if (rax_3 == 0)
        void*** rax_6 = j_sub_140a82f30(0x218)
        void*** rcx_6
        
        if (rax_6 == 0)
            rcx_6 = nullptr
        else
            rcx_6 = sub_1418cf6c0(rax_6, *rdi, arg2)
        
        rdi[9] = rcx_6
        void* var_38 = &rdi[8]
        void* var_30_1 = &rdi[9]
        sub_1417fdda0(&rdi[0xa], &arg_8, &var_38, nullptr)
        rcx_3.b = 1
        rdi[6].d = zx.d(*(arg2 + 0x48))
    else
        rcx_3.b = 1
        rdi[9] = *rax_3
        rdi[6].d = zx.d(*(arg2 + 0x48))
    
    goto label_1418ea56c

if (rcx_3.b != 0)
label_1418ea56c:
    void* rax_10 = rdi[9]
    *(rax_10 + 0x1e8) = *(rax_10 + 0x1c0)
    *(rax_10 + 0x1f8) = *(rax_10 + 0x1d0)
    *(rax_10 + 0x208) = *(rax_10 + 0x1e0)
    *(rax_10 + 0x90) = 1
    
    if (rcx_3.b != 0)
        data_143efb958(*(rbp + 0x40), 0, *(*(*(arg1 + 0x450) + 0x40) + 0x50))
        *(rbp + 0x2d) |= 2
        *(*(arg1 + 0x450) + 0x34) = 0

void* rax_13 = *(arg2 + 0x448)
void* rdi_1 = rax_13 - 0x30

if (rax_13 == 0)
    rdi_1 = nullptr

if (rdi_1 != 0)
    int32_t i = 0
    
    if (*(rdi_1 + 0x180) s> 0)
        char* r14_1 = nullptr
        int64_t r15_1 = 0
        
        do
            char rdx_4 = r14_1[*(rdi_1 + 0x178)]
            
            if (rdx_4 u< 0xff)
                void* r12_1 = *(*(arg1 + 0x548) + (zx.q(rdx_4) << 3))
                *(*(rdi_1 + 0x50) + r15_1)
                
                if (r12_1 != 0)
                    sub_1418c48a0(arg1, rdi_1, i, r12_1)
            
            i += 1
            r14_1 = &r14_1[1]
            r15_1 += 0x28
        while (i s< *(rdi_1 + 0x180))

void* rax_17 = *(arg2 + 0x460)
void* rdi_2 = rax_17 - 0x30

if (rax_17 == 0)
    rdi_2 = nullptr

if (rdi_2 != 0)
    int32_t i_1 = 0
    
    if (*(rdi_2 + 0x180) s> 0)
        char* r14_2 = nullptr
        void* r15_2 = nullptr
        
        do
            char rdx_6 = r14_2[*(rdi_2 + 0x178)]
            
            if (rdx_6 u< 0xff)
                void* r12_2 = *(*(arg1 + 0x548) + (zx.q(rdx_6) << 3))
                *(r15_2 + *(rdi_2 + 0x50))
                
                if (r12_2 != 0)
                    sub_1418c48a0(arg1, rdi_2, i_1, r12_2)
            
            i_1 += 1
            r14_2 = &r14_2[1]
            r15_2 += 0x28
        while (i_1 s< *(rdi_2 + 0x180))

void* rax_21 = *(arg2 + 0x468)
void* rdi_3 = rax_21 - 0x30

if (rax_21 == 0)
    rdi_3 = nullptr

if (rdi_3 != 0)
    int32_t i_2 = 0
    
    if (*(rdi_3 + 0x180) s> 0)
        char* r14_3 = nullptr
        int64_t r15_3 = 0
        
        do
            char rdx_8 = r14_3[*(rdi_3 + 0x178)]
            
            if (rdx_8 u< 0xff)
                void* r12_3 = *(*(arg1 + 0x548) + (zx.q(rdx_8) << 3))
                *(*(rdi_3 + 0x50) + r15_3)
                
                if (r12_3 != 0)
                    sub_1418c48a0(arg1, rdi_3, i_2, r12_3)
            
            i_2 += 1
            r14_3 = &r14_3[1]
            r15_3 += 0x28
        while (i_2 s< *(rdi_3 + 0x180))

void* rax_25 = *(arg2 + 0x458)
void* rdi_4 = rax_25 - 0x30

if (rax_25 == 0)
    rdi_4 = nullptr

if (rdi_4 != 0)
    int32_t i_3 = 0
    
    if (*(rdi_4 + 0x180) s> 0)
        char* r14_4 = nullptr
        int64_t r15_4 = 0
        
        do
            char rdx_10 = r14_4[*(rdi_4 + 0x178)]
            
            if (rdx_10 u< 0xff)
                void* r12_4 = *(*(arg1 + 0x548) + (zx.q(rdx_10) << 3))
                *(*(rdi_4 + 0x50) + r15_4)
                
                if (r12_4 != 0)
                    sub_1418c48a0(arg1, rdi_4, i_3, r12_4)
            
            i_3 += 1
            r14_4 = &r14_4[1]
            r15_4 += 0x28
        while (i_3 s< *(rdi_4 + 0x180))

void* result = *(arg2 + 0x450)
void* rdi_5 = result - 0x30

if (result == 0)
    rdi_5 = nullptr

if (rdi_5 != 0 && *(rdi_5 + 0x180) s> 0)
    char* r14_5 = nullptr
    int64_t rbp_1 = 0
    
    do
        result = *(rdi_5 + 0x178)
        char rdx_12 = *(r14_5 + result)
        
        if (rdx_12 u< 0xff)
            void* r15_5 = *(*(arg1 + 0x548) + (zx.q(rdx_12) << 3))
            result = *(rdi_5 + 0x50)
            *(result + rbp_1)
            
            if (r15_5 != 0)
                result = sub_1418c48a0(arg1, rdi_5, i_4, r15_5)
        
        i_4 += 1
        r14_5 = &r14_5[1]
        rbp_1 += 0x28
    while (i_4 s< *(rdi_5 + 0x180))

return result
