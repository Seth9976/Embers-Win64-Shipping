// 函数: sub_140af8180
// 地址: 0x140af8180
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t performanceCount
QueryPerformanceCounter(&performanceCount)
double zmm0[0x2] = zx.o(0)
zmm0[0] = float.d(performanceCount)
zmm0[0] = zmm0[0] f* data_143d796f8
*(arg1 + 0x130) = 0
zmm0[0] = zmm0[0] + 16777216.0
zmm0[0] = zmm0[0] f- *(arg1 + 0x1b8)
double zmm6[0x2] = _mm_cvtps_pd(_mm_cvtpd_ps(zmm0)[0])
void* rcx_1

if (*(arg1 + 0x1c0) == 0)
    rcx_1.b = 0
else
    rcx_1 = *(arg1 + 0x1c8)
    
    if (*(rcx_1 + 0x60) s> 0)
        rcx_1.b = 0
    else
        char rax_1
        rax_1, rcx_1, zmm6 = sub_140af7010(rcx_1)
        
        if (rax_1 == 0)
            rcx_1.b = 0
        else
            rcx_1.b = 1

void* rax_2 = *(arg1 + 0x1c8)
*(arg1 + 0x1c0) = rcx_1.b
*(rax_2 + 0x30) = rcx_1.b
void* r14 = *(arg1 + 0x1c8)
*arg2 = *(r14 + 0x30)
sub_140597970(&arg2[8], r14 + 0x38)
*(arg2 + 0x18) = *(r14 + 0x48)

if (&arg2[0x20] != r14 + 0x50)
    int32_t i_3 = *(arg2 + 0x28)
    
    if (i_3 != 0)
        void* rbx_2 = *(arg2 + 0x20) + 0x18
        int32_t i
        
        do
            int64_t rcx_3 = *(rbx_2 + 0x20)
            
            if (rcx_3 != 0)
                sub_140a74f90(rcx_3)
            
            int64_t rcx_4 = *rbx_2
            
            if (rcx_4 != 0)
                sub_140a74f90(rcx_4)
            
            int64_t rcx_5 = *(rbx_2 - 0x10)
            
            if (rcx_5 != 0)
                sub_140a74f90(rcx_5)
            
            rbx_2 += 0x58
            i = i_3
            i_3 -= 1
        while (i != 1)
    
    sub_140ae4640(&arg2[0x20], *(r14 + 0x50), *(r14 + 0x58), *(arg2 + 0x2c), 0)

*(arg2 + 0x30) = *(r14 + 0x60)
*(arg2 + 0x34) = *(r14 + 0x64)
sub_140597970(&arg2[0x38], r14 + 0x68)
*(arg2 + 0x18) = zmm6.q
void* r14_1 = *(arg1 + 0x1c8)

if (*(r14_1 + 0x80) != 0)
    sub_140b1f850(&data_1439a8bd0, 4, u"<-- Resume Log Parsing -->", sub_140b19e60())
    r14_1 = *(arg1 + 0x1c8)

int32_t i_2 = *(r14_1 + 0x80)
void* rdi_1 = *(r14_1 + 0x78)

if (i_2 != 0)
    int32_t i_1
    
    do
        int64_t* rbx_3 = *(rdi_1 + 0x18)
        
        if (rbx_3 != 0)
            rbx_3[1].d -= 1
            
            if (rbx_3[1].d == 1)
                (**rbx_3)(rbx_3)
                int32_t temp2_1 = *(rbx_3 + 0xc)
                *(rbx_3 + 0xc) -= 1
                
                if (temp2_1 == 1)
                    (*(*rbx_3 + 8))(rbx_3, 1)
        
        int64_t rcx_10 = *rdi_1
        
        if (rcx_10 != 0)
            sub_140a74f90(rcx_10)
        
        rdi_1 += 0x30
        i_1 = i_2
        i_2 -= 1
    while (i_1 != 1)

*(r14_1 + 0x80) = 0

if (*(r14_1 + 0x84) != 0)
    sub_1405a5220(r14_1 + 0x78, 0)

uint64_t result = zx.q(*(arg1 + 0x1c0))
*(arg1 + 0x1c8) = 0
return result
