// 函数: sub_140be2a70
// 地址: 0x140be2a70
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int32_t rsi = 0
int32_t arg_20 = 0
int32_t arg_18 = 0
uint16_t arg_8
uint16_t rdi_1

do
    int64_t* r9_1 = *(*arg2 + 8)
    int64_t* rcx = r9_1[1]
    int16_t* rdx = *rcx
    
    if (&rdx[1] u> rcx[1])
        uint16_t* rdx_1 = &arg_8
        
        if ((*(r9_1 + 0x29) & 0x20) != 0)
            sub_140b54000(r9_1, rdx_1, arg3)
        else
            (*(*r9_1 + 0x150))(r9_1, rdx_1, 2)
    else
        arg_8 = *rdx
        int64_t* rax_4 = r9_1[1]
        *rax_4 += 2
    
    rdi_1 = arg_8
    int64_t r15_1 = sx.q(*(arg1 + 0x88))
    char rax_6 = rdi_1.b & 0x7f
    uint8_t rbp_1 = rdi_1.b u>> 7 & 1
    uint16_t r12_1 = rdi_1 u>> 9
    rdi_1.b = (rdi_1 u>> 8).b & 1
    int32_t rax_7 = (r15_1 + 1).d
    uint8_t arg_11 = rbp_1
    char arg_12 = r12_1.b
    char arg_13 = rdi_1.b
    *(arg1 + 0x88) = rax_7
    
    if (rax_7 s> *(arg1 + 0x8c))
        sub_1407c3770(arg1, r15_1.d)
    
    void* rax_8 = *(arg1 + 0x80)
    void* rcx_3 = arg1
    
    if (rax_8 != 0)
        rcx_3 = rax_8
    
    *(rcx_3 + (r15_1 << 2)) = rax_6.d
    int32_t* rcx_4 = &arg_20
    
    if (rbp_1 == 0)
        rcx_4 = &arg_18
    
    *rcx_4 += zx.d(r12_1.b)
while (rdi_1.b == 0)
int32_t rbp_2 = arg_20
uint64_t result

if (rbp_2 == 0)
    result.b = arg_18 u> 0
else
    int32_t r13_1 = *(arg1 + 0xc0)
    *(arg1 + 0xc0) = rbp_2
    
    if (rbp_2 s> *(arg1 + 0xc4))
        uint32_t r12_3 = (rbp_2 + 0x1f) u>> 5
        uint32_t rdi_2
        
        if (r12_3 u> 8)
            rdi_2 = (sub_140a846a0(zx.q(r12_3) << 2, 0) u>> 2).d
            
            if (r12_3 s> rdi_2)
                rdi_2 = 0x7fffffff
        else
            rdi_2 = 8
        
        sub_1408390d0(arg1 + 0x98, (r13_1 + 0x1f) u>> 5, rdi_2, 4)
        *(arg1 + 0xc4) = rdi_2 << 5
    
    result = *(arg1 + 0xb8)
    int32_t* result_1 = arg1 + 0x98
    
    if (result != 0)
        result_1 = result
    
    if (rbp_2 u<= 8)
        int64_t* r9_2 = *(*arg2 + 8)
        int64_t* rcx_8 = r9_2[1]
        char* rdx_4 = *rcx_8
        
        if (&rdx_4[1] u> rcx_8[1])
            (*(*r9_2 + 0x150))(r9_2, &arg_8, 1)
            *result_1 = zx.d(arg_8.b)
        else
            arg_8.b = *rdx_4
            int64_t* rax_14 = r9_2[1]
            *rax_14 += 1
            *result_1 = zx.d(arg_8.b)
    else if (rbp_2 u> 0x10)
        uint64_t i_1 = zx.q((rbp_2 + 0x1f) u>> 5)
        
        if (i_1.d != 0)
            uint64_t i
            
            do
                int64_t* r9_4 = *(*arg2 + 8)
                int32_t** rcx_12 = r9_4[1]
                int32_t* rdx_8 = *rcx_12
                
                if (&rdx_8[1] u> rcx_12[1])
                    int32_t* result_2 = result_1
                    
                    if ((*(r9_4 + 0x29) & 0x20) != 0)
                        sub_140b54070(r9_4, result_2, arg3)
                    else
                        (*(*r9_4 + 0x150))(r9_4, result_2, 4)
                else
                    *result_1 = *rdx_8
                    result = r9_4[1]
                    *result += 4
                
                result_1 = &result_1[1]
                i = i_1
                i_1 -= 1
            while (i != 1)
    else
        int64_t* r9_3 = *(*arg2 + 8)
        int64_t* rcx_10 = r9_3[1]
        int16_t* rdx_6 = *rcx_10
        
        if (&rdx_6[1] u> rcx_10[1])
            int16_t* rdx_7 = &arg_8
            
            if ((*(r9_3 + 0x29) & 0x20) != 0)
                sub_140b54000(r9_3, rdx_7, arg3)
                *result_1 = zx.d(arg_8)
            else
                (*(*r9_3 + 0x150))(r9_3, rdx_7, 2)
                *result_1 = zx.d(arg_8)
        else
            arg_8 = *rdx_6
            int64_t* rax_19 = r9_3[1]
            *rax_19 += 2
            *result_1 = zx.d(arg_8)
    
    if (arg_18 u> 0)
        result.b = 1
    else
        void* rax_25 = *(arg1 + 0xb8)
        void* rcx_14 = arg1 + 0x98
        int32_t r8_2 = *(arg1 + 0xc0)
        
        if (rax_25 != 0)
            rcx_14 = rax_25
        
        result = 0
        uint64_t rdx_10 = zx.q((r8_2 + 0x1f) u>> 5)
        
        if (rdx_10 != 0)
            while (*(rcx_14 + (result << 2)) == 0xffffffff)
                rsi += 1
                result += 1
                
                if (result s>= rdx_10)
                    break
        
        int32_t rsi_2
        
        if (rsi s< rdx_10.d)
            uint64_t rflags_1
            int32_t temp0_1
            temp0_1, rflags_1 = _bit_scan_forward(not.d(*(rcx_14 + (sx.q(rsi) << 2))))
            rsi_2 = (rsi << 5) + temp0_1
        
        if (rsi s>= rdx_10.d || rsi_2 s>= r8_2 || rsi_2 == 0xffffffff)
            result.b = 0
        else
            result.b = 1

*(arg1 + 0x90) = result.b
return result
