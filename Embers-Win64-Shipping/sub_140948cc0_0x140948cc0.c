// 函数: sub_140948cc0
// 地址: 0x140948cc0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

*arg1 = 0
*(arg1 + 0x18) = &arg2[0xbc]
*(arg1 + 0x10) = arg2
int32_t rbx = 0
*(arg1 + 8) = 0
*(arg1 + 0x20) = (*(*arg2 + 0x378))(arg2)
*(arg1 + 0x28) = arg2[0xf0]
uint64_t rdx = memset(&arg1[0x30], 0, 0x430)
*(arg1 + 0x434) = 0
*(arg1 + 0x438) = 0x400
*(arg1 + 0x440) = 0
*(arg1 + 0x448) = 0
*(arg1 + 0x460) = arg3
int64_t r15 = data_143ced160
int64_t rcx_2

if (data_143de5480 == 0)
    rcx_2 = 0
else
    uint32_t rax_4
    rax_4, rdx = GetCurrentThreadId()
    rcx_2.b = rax_4 != data_143de5470

char r9

if (*(r15 + (rcx_2 << 2)) == 0 || arg3 == 0)
    r9 = 0
else
    r9 = 1

*(arg1 + 0x478) = arg4.q
arg1[0x468] = r9
*(arg1 + 0x46c) = 0
arg1[0x480] = arg5

if (arg5 != 0)
    int32_t rax_6 = arg2[0xef].d
    uint64_t rflags_1
    char temp0_1
    temp0_1, rflags_1 = _bit_scan_reverse(rax_6)
    int32_t rcx_3
    
    if (arg5 == 0)
        rcx_3 = 0x20
    else
        rcx_3 = 0x1f - temp0_1
    
    uint64_t rflags_2
    char temp0_2
    temp0_2, rflags_2 = _bit_scan_reverse(rax_6 - 1)
    int32_t r8
    
    if (rax_6 == 1)
        r8 = 0x20
    else
        r8 = 0x1f - temp0_2
    
    rdx = zx.q(0x20 - r8)
    rbx = (1 << ((not.d(rcx_3 << 0x1a s>> 0x1f)).b & rdx.b)) - 1

*(arg1 + 0x484) = rbx
*(arg1 + 0x488) = arg4.q f+ arg2[0xee]
int64_t* rax_8 = data_143989b20
void* rcx_10 = &rax_8[sx.q(data_143989b28) * 2]

if (rax_8 == rcx_10)
label_140948e49:
    rax_8.b = 0
else
    while (rax_8[1].d == 0 || *rax_8 == 0)
        rax_8 = &rax_8[2]
        
        if (rax_8 == rcx_10)
            goto label_140948e49
    
    rax_8.b = 1

arg1[0x490] = rax_8.b
*(arg1 + 0x498) = _mm_cvtps_pd(data_143989b10).q f+ arg4.q

if (r9 == 0)
    int64_t* rcx_11 = *(arg1 + 0x20)
    
    if (rcx_11 != 0)
        void var_48
        uint64_t* rax_10 = (*(*rcx_11 + 0x90))(rcx_11, &var_48)
        int64_t* rcx_12 = rax_10[1]
        rdx = *rax_10
        
        if (rcx_12 != 0)
            rcx_12[1].d += 1
        
        void var_38
        
        if (&arg1[0x440] == &var_38)
        label_140948ee0:
            
            if (rcx_12 != 0)
                rcx_12[1].d -= 1
                
                if (rcx_12[1].d == 1)
                    rdx = (**rcx_12)(rcx_12)
                    int32_t temp4_1 = *(rcx_12 + 0xc)
                    *(rcx_12 + 0xc) -= 1
                    
                    if (temp4_1 == 1)
                        rdx = (*(*rcx_12 + 8))(rcx_12, 1)
        else
            *(arg1 + 0x440) = rdx
            int64_t* rbx_2 = *(arg1 + 0x448)
            
            if (rcx_12 == rbx_2)
                goto label_140948ee0
            
            *(arg1 + 0x448) = rcx_12
            
            if (rbx_2 != 0)
                rbx_2[1].d -= 1
                
                if (rbx_2[1].d == 1)
                    rdx = (**rbx_2)(rbx_2)
                    int32_t temp7_1 = *(rbx_2 + 0xc)
                    *(rbx_2 + 0xc) -= 1
                    
                    if (temp7_1 == 1)
                        rdx = (*(*rbx_2 + 8))(rbx_2, 1)
        
        int64_t* var_40
        
        if (var_40 != 0)
            var_40[1].d -= 1
            
            if (var_40[1].d == 1)
                rdx = (**var_40)(var_40)
                int32_t temp6_1 = *(var_40 + 0xc)
                *(var_40 + 0xc) -= 1
                
                if (temp6_1 == 1)
                    rdx = (*(*var_40 + 8))(var_40, 1)

sub_140954120(arg1, rdx, arg4)
return arg1
