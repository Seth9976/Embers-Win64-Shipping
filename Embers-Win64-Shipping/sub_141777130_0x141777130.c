// 函数: sub_141777130
// 地址: 0x141777130
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t* rax = nullptr

if (*(arg2 + 0xc) u>= 2)
    rax = arg2

int64_t rdx
void* r8_1

if (rax != 0)
    rdx = sx.q(rax[1].d)
    r8_1 = *rax

if (rax == 0 || *(rdx + *(r8_1 + 0x398)) == 2)
    int64_t* i = *(arg1 + 0x88)
    
    for (void* rsi_3 = &i[sx.q(*(arg1 + 0x90)) * 2]; i != rsi_3; i = &i[2])
        int64_t* r9_3 = *i
        uint64_t r10_2 = sx.q(i[1].d)
        int64_t* rax_10 = r9_3
        void* rdx_3 = &r9_3[r10_2]
        
        if (r9_3 != rdx_3)
            do
                if (*rax_10 == arg2)
                    int32_t rax_12 = ((rax_10 - r9_3) s>> 3).d
                    
                    if (rax_12 != 0xffffffff)
                        int32_t rcx_8 = r10_2.d - rax_12 - 1
                        
                        if (rcx_8 s>= 1)
                            rcx_8 = 1
                        
                        if (rcx_8 != 0)
                            memcpy(&r9_3[sx.q(rax_12)], &r9_3[sx.q(r10_2.d - rcx_8)], rcx_8 << 3)
                            r10_2 = zx.q(i[1].d)
                        
                        i[1].d = (r10_2 - 1).d
                        sub_1405c53d0(i)
                    
                    break
                
                rax_10 = &rax_10[1]
            while (rax_10 != rdx_3)
else
    int64_t rax_2 = *(r8_1 + 0x350)
    int64_t rax_3 = sx.q(*(rax_2 + (rdx << 2)))
    
    if (rax_3.d != 0xffffffff)
        *(rax_2 + (rdx << 2)) = 0xffffffff
        
        if (rax_3.d s>= 0 && rax_3.d s< *(arg1 + 0x90))
            int64_t* rbx_3 = (rax_3 << 4) + *(arg1 + 0x88)
            int64_t* r10_1 = *rbx_3
            uint64_t r9_1 = sx.q(rbx_3[1].d)
            int64_t* rcx_1 = r10_1
            void* rdx_1 = &r10_1[r9_1]
            int32_t rcx_2
            
            if (r10_1 == rdx_1)
            label_1417771d5:
                rcx_2 = -1
            else
                while (*rcx_1 != arg2)
                    rcx_1 = &rcx_1[1]
                    
                    if (rcx_1 == rdx_1)
                        goto label_1417771d5
                
                rcx_2 = ((rcx_1 - r10_1) s>> 3).d
            
            int32_t rax_6 = r9_1.d - rcx_2 - 1
            
            if (rax_6 s>= 1)
                rax_6 = 1
            
            if (rax_6 != 0)
                memcpy(&r10_1[sx.q(rcx_2)], &r10_1[sx.q(r9_1.d - rax_6)], rax_6 << 3)
                r9_1 = zx.q(rbx_3[1].d)
            
            rbx_3[1].d = (r9_1 - 1).d
            sub_1405c53d0(rbx_3)

int32_t arg_8
uint64_t result = sub_140865c40(arg1 + 0x38, &arg_8, arg2)

if (*result == 0xffffffff)
    return result

sub_140865c40(arg1 + 0x38, &arg_8, arg2)
int64_t rax_14 = sx.q(arg_8)
void* const rcx_15

if (rax_14.d == 0xffffffff)
    rcx_15 = nullptr
else
    rcx_15 = *(arg1 + 0x38) + rax_14 * 0x18

int64_t rbp_1 = sx.q(*(arg1 + 0xc0))
int64_t r14_1 = sx.q(*(rcx_15 + 8))
int32_t rax_16 = (rbp_1 + 1).d
*(arg1 + 0xc0) = rax_16

if (rax_16 s> *(arg1 + 0xc4))
    sub_1405a4cf0(arg1 + 0xb8)

*(*(arg1 + 0xb8) + (rbp_1 << 2)) = r14_1.d
uint64_t* rbx_6 = (r14_1 << 5) + *(arg1 + 8)
rbx_6[1].d = 0

if (*(rbx_6 + 0xc) != 0)
    sub_1405dadb0(rbx_6, 0)

rbx_6[2] = 0
rbx_6[3].d = 0xffffffff
*(*(arg1 + 0xd8) + (r14_1 << 2)) = 0
return sub_140868c90(arg1 + 0x38, arg2)
