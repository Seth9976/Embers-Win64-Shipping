// 函数: sub_141abbb80
// 地址: 0x141abbb80
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int32_t i_3 = arg2[1].d
int64_t* r15 = arg2
void* rdi = *arg2

if (i_3 != 0)
    int64_t* rbx_1 = rdi + 0x88
    int32_t i
    
    do
        int64_t rcx = *rbx_1
        
        if (rcx != 0)
            sub_140a74f90(rcx)
        
        rbx_1[-0xe] = &data_142d6a040
        int64_t rcx_1 = rbx_1[-3]
        
        if (rcx_1 != 0)
            sub_140a74f90(rcx_1)
        
        sub_1405ae180(&rbx_1[-0xd])
        int64_t rcx_3 = *rdi
        
        if (rcx_3 != 0)
            sub_140a74f90(rcx_3)
        
        rdi += 0xa0
        rbx_1 = &rbx_1[0x14]
        i = i_3
        i_3 -= 1
    while (i != 1)

int32_t rcx_5 = *(r15 + 0xc)
int32_t rbx_2 = 0
r15[1].d = 0

if (rcx_5 != 0)
    sub_1407c4520(r15, 0)
    rcx_5 = *(r15 + 0xc)
    rbx_2 = r15[1].d

int64_t rdi_1 = sx.q(*(arg1 + 0xb0))
int32_t rax = rbx_2 + rdi_1.d
r15[1].d = rax

if (rax s> rcx_5)
    sub_140775640(r15)

char result = memset(sx.q(rbx_2) * 0xa0 + *r15, 0, rdi_1 * 0xa0)
void* r9 = arg1
int32_t i_1 = 0
int32_t i_2 = 0

if (*(r9 + 0xb0) s> 0)
    int64_t* r14_1 = nullptr
    int64_t rcx_10 = 0
    int64_t arg_20 = 0
    
    do
        int32_t j = 0
        void* r12_1 = *(r9 + 0xa8)
        int64_t* rbx_4 = *r15 + rcx_10
        int64_t r13_1 = 0
        
        if (*(r9 + 0x90) s> 0)
            int32_t* rsi = nullptr
            
            do
                if (r13_1 s< 0 || j s>= *(r14_1 + r12_1 + 8))
                    int64_t rdi_3 = sx.q(rbx_4[1].d)
                    int32_t rax_9 = (rdi_3 + 3).d
                    rbx_4[1].d = rax_9
                    
                    if (rax_9 s> *(rbx_4 + 0xc))
                        sub_1406105e0(rbx_4)
                        r9 = arg1
                    
                    *(*rbx_4 + (rdi_3 << 2)) = data_143dbb1f8
                    *(*rbx_4 + (rdi_3 << 2) + 4) = data_143dbb1fc
                    *(*rbx_4 + (rdi_3 << 2) + 8) = data_143dbb200
                else
                    int64_t rdi_2 = sx.q(rbx_4[1].d)
                    int64_t r15_1 = *(r14_1 + r12_1)
                    int32_t rdx_1 = *(rbx_4 + 0xc)
                    int32_t rcx_11 = (rdi_2 + 3).d
                    rbx_4[1].d = rcx_11
                    
                    if (*(r9 + 0x124) != 1)
                        if (rcx_11 s> rdx_1)
                            sub_1406105e0(rbx_4)
                            r9 = arg1
                        
                        *(*rbx_4 + (rdi_2 << 2)) = *(rsi + r15_1 + 0x14)
                        *(*rbx_4 + (rdi_2 << 2) + 4) = *(rsi + r15_1 + 0xc)
                        *(*rbx_4 + (rdi_2 << 2) + 8) = *(rsi + r15_1 + 0x10)
                    else
                        if (rcx_11 s> rdx_1)
                            sub_1406105e0(rbx_4)
                            r9 = arg1
                        
                        *(*rbx_4 + (rdi_2 << 2)) = *(rsi + r15_1)
                        *(*rbx_4 + (rdi_2 << 2) + 4) = *(rsi + r15_1 + 4)
                        *(*rbx_4 + (rdi_2 << 2) + 8) = *(rsi + r15_1 + 8)
                
                j += 1
                r13_1 += 1
                rsi = &rsi[6]
            while (j s< *(r9 + 0x90))
            
            r15 = arg2
            rcx_10 = arg_20
            i_1 = i_2
        
        rbx_4[2].d = *(r14_1 + r12_1 + 0x1c)
        *(rbx_4 + 0x14) = *(r14_1 + r12_1 + 0x22)
        rbx_4[0x10].d = *(r14_1 + r12_1 + 0x90)
        *(rbx_4 + 0x84) = *(r14_1 + r12_1 + 0x94)
        *(rbx_4 + 0x85) = *(r14_1 + r12_1 + 0x95)
        void* rax_19 = r12_1 + 0x98 + r14_1
        
        if (&rbx_4[0x11] != rax_19)
            int32_t rsi_1 = *(rax_19 + 8)
            int64_t rbp_1 = *rax_19
            int32_t r8_2 = *(rbx_4 + 0x94)
            rbx_4[0x12].d = rsi_1
            
            if (rsi_1 != 0 || r8_2 != 0)
                sub_1405c4b20(&rbx_4[0x11], rsi_1, r8_2)
                memcpy(rbx_4[0x11], rbp_1, rsi_1 * 0x1c)
                r9 = arg1
                rcx_10 = arg_20
                i_1 = i_2
            else
                *(rbx_4 + 0x94) = rsi_1
        
        i_1 += 1
        rbx_4[0x13].b = *(r14_1 + r12_1 + 0x20)
        rcx_10 += 0xa0
        result = *(r14_1 + r12_1 + 0x21)
        r14_1 = &r14_1[0x18]
        *(rbx_4 + 0x99) = result
        i_2 = i_1
        arg_20 = rcx_10
    while (i_1 s< *(r9 + 0xb0))

return result
