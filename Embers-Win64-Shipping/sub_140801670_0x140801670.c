// 函数: sub_140801670
// 地址: 0x140801670
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void* rbp = arg2
arg1[1].d = 0

if (*(arg1 + 0xc) != 0)
    sub_1405dadb0(arg1, 0)

int64_t rbx = sx.q(arg1[3].d)
void* rdi = &arg1[2]
int32_t rax = (rbx + 0x100).d
*(rdi + 8) = rax

if (rax s> *(rdi + 0xc))
    sub_1405a4cf0(rdi)

memset(*rdi + (rbx << 2), 0, 0x400)
int32_t rdx_1 = *(rbp + 0x17c)
int64_t* rbx_1 = *(*(rbp + 8) + 0x50)
uint32_t rax_3 = zx.d(*(rbx_1 + 0x5f))

if (rax_3 s>= rdx_1)
    rdx_1 = rax_3

int32_t rax_4 = sub_1423647f0(rbx_1, rdx_1)
int64_t* rbx_3 = *(*rbx_1 + (sx.q(rax_4) << 3))

if (rbx_3 != 0)
    rbx_3[1].d += 1

if (*(rbx_3 + 0x16c) != 0)
    int32_t i_2 = 0
    int32_t i_3 = 0
    
    if (arg1[3].d s> 0)
        void* r8_1 = &rbx_3[0x2f]
        int32_t* rdx_2 = nullptr
        int32_t* var_60_1 = nullptr
        int32_t i
        
        do
            i = i_2 + 1
            int32_t i_1 = i
            *(rdx_2 + *rdi) = arg1[1].d
            void* var_58
            sub_14229e7e0(r8_1, &var_58)
            int32_t j = 0
            int32_t j_1 = 0
            
            if (*(rbp + 0x120) s> 0)
                char var_4c
                char rdi_1 = var_4c
                int64_t rcx_6 = 0
                void* r11_1 = var_58
                int64_t var_68_1 = 0
                
                do
                    void* rdx_4 = rbx_3[5]
                    int64_t r12_1 = sx.q(*(*(rbp + 0x118) + rcx_6)) * 0x18
                    void* rax_8 = &rbx_3[2]
                    
                    if (rdx_4 != 0)
                        rax_8 = rdx_4
                    
                    int32_t k = 0
                    int32_t rbp_1 = *(rax_8 + r12_1 + 4)
                    
                    if (*(rax_8 + r12_1 + 8) u> 0)
                        void* rcx_12
                        
                        do
                            int64_t rax_9 = sx.q(rbp_1)
                            uint32_t r14_1
                            
                            if (rdi_1 == 0)
                                r14_1 = zx.d(*(r11_1 + (rax_9 << 1)))
                            else
                                r14_1 = *(r11_1 + (rax_9 << 2))
                            
                            uint32_t r8_2
                            
                            if (rdi_1 == 0)
                                r8_2 = zx.d(*(r11_1 + (rax_9 << 1) + 2))
                            else
                                r8_2 = *(r11_1 + (rax_9 << 2) + 4)
                            
                            uint32_t rcx_8
                            
                            if (rdi_1 == 0)
                                rcx_8 = zx.d(*(r11_1 + (rax_9 << 1) + 4))
                            else
                                rcx_8 = *(r11_1 + (rax_9 << 2) + 8)
                            
                            int32_t r10_1 = rbx_3[0x2d].d
                            int64_t r9_1 = rbx_3[0x2c]
                            char rdx_5 = *(zx.q(r10_1 * rcx_8) + r9_1 + 2)
                            char r8_3 = rdx_5
                            char rcx_9 = *(zx.q(r10_1 * r8_2) + r9_1 + 2)
                            
                            if (rcx_9 u>= rdx_5)
                                r8_3 = rcx_9
                            
                            i = i_1
                            char rdx_6 = r8_3
                            char rcx_10 = *(zx.q(r10_1 * r14_1) + r9_1 + 2)
                            
                            if (rcx_10 u>= r8_3)
                                rdx_6 = rcx_10
                            
                            uint32_t rax_14 = zx.d(rdx_6)
                            
                            if (rax_14 u>= i_3 && rax_14 u< i)
                                int64_t rdi_2 = sx.q(arg1[1].d)
                                int32_t rax_15 = (rdi_2 + 1).d
                                arg1[1].d = rax_15
                                
                                if (rax_15 s> *(arg1 + 0xc))
                                    sub_1405a4cf0(arg1)
                                
                                *(*arg1 + (rdi_2 << 2)) = rbp_1
                                rdi_1 = var_4c
                                r11_1 = var_58
                            
                            void* rax_17 = rbx_3[5]
                            rcx_12 = &rbx_3[2]
                            k += 1
                            rbp_1 += 3
                            
                            if (rax_17 != 0)
                                rcx_12 = rax_17
                        while (k u< *(rcx_12 + r12_1 + 8))
                        j = j_1
                    
                    j += 1
                    rbp = arg2
                    rcx_6 = var_68_1 + 4
                    j_1 = j
                    var_68_1 = rcx_6
                while (j s< *(rbp + 0x120))
                
                rdi = &arg1[2]
            
            r8_1 = &rbx_3[0x2f]
            rdx_2 = &var_60_1[1]
            i_2 = i
            i_3 = i_2
            var_60_1 = rdx_2
        while (i s< arg1[3].d)
    
    rdi.b = 1
else
    rdi.b = 0

int32_t rcx_14 = rbx_3[1].d
rbx_3[1].d -= 1

if (rcx_14 == 1)
    int64_t r8_4 = *rbx_3
    (*r8_4)(rbx_3, zx.q(rcx_14), r8_4)

return zx.q(rdi.b)
