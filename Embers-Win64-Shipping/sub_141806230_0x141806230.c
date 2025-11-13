// 函数: sub_141806230
// 地址: 0x141806230
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t* arg_18 = arg3
int64_t* rbp = arg3
arg2[1].d = 0

if (*(arg2 + 0xc) s<= 0xffffffff)
    sub_1405c5570(arg2, 0)

int512_t zmm1

while (true)
    void* rdx = *arg1[0xb]
    
    if (rdx == 0)
        break
    
    int64_t rsi_1 = *(rdx + 8)
    int64_t rcx_1 = arg1[0xb]
    arg1[0xb] = rdx
    *(rdx + 8) = 0
    arg3, zmm1 = j_sub_140a74f90(rcx_1)
    int64_t rdi_1 = sx.q(arg2[1].d)
    int32_t rax_2 = (rdi_1 + 1).d
    arg2[1].d = rax_2
    
    if (rax_2 s> *(arg2 + 0xc))
        sub_1405a4d70(arg2)
    
    *(*arg2 + (rdi_1 << 3)) = rsi_1

int32_t rax_4 = *(rbp + 0xc)
rbp[1].d = 0

if (rax_4 s< 0 && rax_4 != 0)
    sub_1405c5570(rbp, 0)

while (true)
    void* rdx_3 = *arg1[9]
    
    if (rdx_3 == 0)
        break
    
    int64_t rsi_2 = *(rdx_3 + 8)
    int64_t rcx_4 = arg1[9]
    arg1[9] = rdx_3
    *(rdx_3 + 8) = 0
    arg3, zmm1 = j_sub_140a74f90(rcx_4)
    int64_t rdi_2 = sx.q(rbp[1].d)
    int32_t rax_6 = (rdi_2 + 1).d
    rbp[1].d = rax_6
    
    if (rax_6 s> *(rbp + 0xc))
        sub_1405a4d70(rbp)
    
    *(*rbp + (rdi_2 << 3)) = rsi_2

uint64_t rcx_6 = *arg2
uint64_t var_80 = rcx_6
int64_t arg_20 = 0
int64_t r15 = sx.q(arg2[1].d) << 3
uint64_t r15_1 = r15 u>> 3

if (rcx_6 u> rcx_6 + r15)
    r15_1 = 0

if (r15_1 != 0)
    int64_t rax_10 = 0
    uint64_t rdx_6 = r15_1
    
    do
        int64_t r15_2 = *rcx_6
        int64_t rcx_7 = sx.q(arg1[0xd].d)
        int64_t var_70_1 = r15_2
        
        if (rcx_7.d != 0)
            int32_t r12_1 = 0
            int32_t rdi_3 = 0
            int64_t rbx_1 = 0
            arg3.b = *arg1[0xc] != r15_2
            char arg_8 = arg3.b
            
            do
                int64_t r9 = sx.q(rdi_3)
                rbx_1 += 1
                rdi_3 += 1
                
                if (rbx_1 s< rcx_7)
                    int64_t rcx_8 = arg1[0xc] + (rbx_1 << 3)
                    
                    do
                        int32_t rax_13
                        rax_13.b = *rcx_8 != r15_2
                        
                        if (zx.d(arg3.b) != rax_13)
                            break
                        
                        rdi_3 += 1
                        rbx_1 += 1
                        rcx_8 += 8
                    while (rbx_1 s< rcx_7)
                
                int32_t rsi_4 = rdi_3 - r9.d
                
                if (arg3.b != 0)
                    if (r12_1 != r9.d)
                        int64_t rcx_9 = arg1[0xc]
                        memmove(rcx_9 + (sx.q(r12_1) << 3), rcx_9 + (r9 << 3), rsi_4 << 3)
                        arg3 = zx.q(arg_8)
                    
                    r12_1 += rsi_4
                
                arg3.b ^= 1
                arg_8 = arg3.b
            while (rbx_1 s< rcx_7)
            
            arg1[0xd].d = r12_1
            
            if (rcx_7.d - r12_1 s> 0)
                int64_t rbx_2 = sx.q(arg4[1].d)
                int32_t rax_17 = (rbx_2 + 1).d
                arg4[1].d = rax_17
                
                if (rax_17 s> *(arg4 + 0xc))
                    sub_1405a4d70(arg4)
                
                *(*arg4 + (rbx_2 << 3)) = r15_2
            
            rdx_6 = r15_1
            rax_10 = arg_20
        
        rax_10 += 1
        rcx_6 = var_80 + 8
        arg_20 = rax_10
        var_80 = rcx_6
    while (rax_10 != rdx_6)
    
    rbp = arg_18

int64_t performanceCount
QueryPerformanceCounter(&performanceCount)
double zmm0[0x2] = zx.o(0)
zmm0[0] = float.d(performanceCount)
int64_t rsi_5 = 0
zmm0[0] = zmm0[0] f* data_143d796f8
zmm0[0] = zmm0[0] + 16777216.0
zmm0[0] = zmm0[0] f- arg1[7]
arg1[7] = zmm0.q
int64_t* rdi_4 = arg1[0xc]
uint64_t r15_4 = sx.q(arg1[0xd].d) << 3 u>> 3

if (rdi_4 u> &rdi_4[arg1[0xd]])
    r15_4 = 0

if (r15_4 != 0)
    float temp0_1[0x4] = _mm_cvtpd_ps(zmm0)
    
    do
        int64_t* rcx_14 = *rdi_4
        zmm1.o = temp0_1
        (*(*rcx_14 + 0xe8))(rcx_14, zmm1)
        rsi_5 += 1
        rdi_4 = &rdi_4[1]
    while (rsi_5 != r15_4)

int64_t* r15_5 = *rbp
int64_t rbp_2 = 0
uint64_t r12_3 = sx.q(rbp[1].d) << 3 u>> 3

if (r15_5 u> &r15_5[rbp[1]])
    r12_3 = 0

if (r12_3 != 0)
    do
        int64_t* rdi_5 = *r15_5
        
        if ((*(*arg1 + 0x38))(arg1, rdi_5) == 0)
            int64_t rsi_7 = sx.q(arg4[1].d)
            int32_t rax_29 = (rsi_7 + 1).d
            arg4[1].d = rax_29
            
            if (rax_29 s> *(arg4 + 0xc))
                sub_1405a4d70(arg4)
            
            *(*arg4 + (rsi_7 << 3)) = rdi_5
        else
            int64_t rsi_6 = sx.q(arg1[0xd].d)
            int32_t rax_26 = (rsi_6 + 1).d
            arg1[0xd].d = rax_26
            
            if (rax_26 s> *(arg1 + 0x6c))
                sub_1405a4d70(&arg1[0xc])
            
            zmm1.o = zx.o(0)
            *(arg1[0xc] + (rsi_6 << 3)) = rdi_5
            (*(*rdi_5 + 0xe8))(rdi_5, zmm1)
        
        r15_5 = &r15_5[1]
        rbp_2 += 1
    while (rbp_2 != r12_3)

zmm1.o = zx.o(0)
zmm1.d = fconvert.s(zmm0[0])
(*(*arg1 + 0x30))(arg1, zmm1)
int32_t i = 0

if (arg1[0xd].d s> 0)
    int64_t* rsi_8 = nullptr
    
    do
        int64_t* r15_6 = *(rsi_8 + arg1[0xc])
        
        if ((*(*r15_6 + 0xe0))(r15_6) != 0)
            int64_t rbp_3 = sx.q(arg4[1].d)
            int32_t rax_35 = (rbp_3 + 1).d
            arg4[1].d = rax_35
            
            if (rax_35 s> *(arg4 + 0xc))
                sub_1405a4d70(arg4)
            
            *(*arg4 + (rbp_3 << 3)) = r15_6
            int32_t rdx_14 = arg1[0xd].d
            int32_t rax_39 = rdx_14 - i - 1
            
            if (rax_39 s>= 1)
                rax_39 = 1
            
            if (rax_39 != 0)
                int64_t rcx_22 = arg1[0xc]
                memcpy(rcx_22 + (sx.q(i) << 3), rcx_22 + (sx.q(rdx_14 - rax_39) << 3), rax_39 << 3)
                rdx_14 = arg1[0xd].d
            
            arg1[0xd].d = rdx_14 - 1
            sub_1405c53d0(&arg1[0xc])
            i -= 1
            rsi_8 -= 8
        
        i += 1
        rsi_8 = &rsi_8[1]
    while (i s< arg1[0xd].d)

uint64_t result = sx.q(arg4[1].d)

if (result.d s> 0)
    for (int64_t* i_1 = *arg4; i_1 != &i_1[result]; i_1 = &i_1[1])
        int64_t rdi_6 = *i_1
        (*(*arg1 + 0x40))(arg1, rdi_6)
        int64_t* rax_44 = j_sub_140a82f30(0x10)
        
        if (rax_44 != 0)
            *rax_44 = 0
            rax_44[1] = rdi_6
            int64_t** rcx_26 = arg1[0xe]
            arg1[0xe] = rax_44
            *rcx_26 = rax_44
    
    result = zx.q(*(arg4 + 0xc))
    arg4[1].d = 0
    
    if (result.d s< 0 && result.d != 0)
        return sub_1405c5570(arg4, 0)

return result
